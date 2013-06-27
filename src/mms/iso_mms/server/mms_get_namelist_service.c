/*
 *  mms_get_namelist_service.c
 *
 *  Copyright 2013 Michael Zillgith
 *
 *  This file is part of libIEC61850.
 *
 *  libIEC61850 is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  libIEC61850 is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with libIEC61850.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  See COPYING file for the complete license text.
 */

#include "mms_server_internal.h"
#include "ber_encoder.h"


/**********************************************************************************************
 * MMS GetNameList Service
 *********************************************************************************************/

static LinkedList
getNameListVMDSpecific(MmsServerConnection* connection) {
	MmsDevice* device = MmsServer_getDevice(connection->server);

	LinkedList list = LinkedList_create();

	int i;

	for (i = 0; i < device->domainCount; i++) {
		LinkedList_add(list, device->domains[i]->domainName);
	}

	return list;
}


static char* appendMmsSubVariable(char* name, char* child)
{
    int nameLen = strlen(name);
    int childLen = strlen(child);

    int newSize = nameLen + childLen + 2;

    char* newName = malloc(newSize);

    int bufPos = 0;
    int i;
    for (i = 0; i < nameLen; i++) {
        newName[bufPos++] = name[i];
    }
    newName[bufPos++] = '$';

    for (i = 0; i < childLen; i++) {
        newName[bufPos++] = child[i];
    }

    newName[bufPos] = 0;

    return newName;
}

static LinkedList
addSubNamedVaribleNamesToList(LinkedList nameList, char* prefix, MmsTypeSpecification* variable)
{
	LinkedList listElement = nameList;

	if (variable->type == MMS_STRUCTURE) {

		int i;

		MmsTypeSpecification** variables = variable->typeSpec.structure.elements;

		for (i = 0; i < variable->typeSpec.structure.elementCount; i++) {
			//char* variableName = createString(3, prefix, "$", variables[i]->name);

			char* variableName = appendMmsSubVariable(prefix, variables[i]->name);
			//printf("item: %s\n", variableName);

			//LinkedList_add(nameList, variableName);
			listElement = LinkedList_insertAfter(listElement, variableName);

			listElement = addSubNamedVaribleNamesToList(listElement, variableName, variables[i]);
		}
	}
	else if (variable->type == MMS_ARRAY) {
		MmsTypeSpecification* element = variable->typeSpec.array.elementTypeSpec;
		listElement = addSubNamedVaribleNamesToList(listElement, prefix, element);
	}

	return listElement;
}

static LinkedList
getNameListDomainSpecific(MmsServerConnection* connection, char* domainName) {
	MmsDevice* device = MmsServer_getDevice(connection->server);

	LinkedList nameList = NULL;

	MmsDomain* domain = MmsDevice_getDomain(device, domainName);

	if (domain != NULL) {
		MmsTypeSpecification** variables;
        int i;
        LinkedList element;
        nameList = LinkedList_create();
		variables = domain->namedVariables;

		element = nameList;

		for (i = 0; i < domain->namedVariablesCount; i++) {
			// LinkedList_add(nameList, copyString(variables[i]->name));
			char* prefix;
            element = LinkedList_insertAfter(element, copyString(variables[i]->name));

			prefix = variables[i]->name;

			//addSubNamedVaribleNamesToList(nameList, prefix, variables[i]);
			element = addSubNamedVaribleNamesToList(element, prefix, variables[i]);
		}
	}

	return nameList;
}

#ifdef MMS_DATA_SET_SERVICE 1

static LinkedList
createStringsFromNamedVariableList(LinkedList nameList, LinkedList variableLists)
{
    LinkedList variableListsElement;
	nameList = LinkedList_create();
	variableListsElement = LinkedList_getNext(variableLists);
	while (variableListsElement != NULL ) {
		MmsNamedVariableList variableList =
				(MmsNamedVariableList) variableListsElement->data;

		LinkedList_add(nameList,
				copyString(MmsNamedVariableList_getName(variableList)));

		variableListsElement = LinkedList_getNext(variableListsElement);
	}
	return nameList;
}

static LinkedList
getNamedVariableListDomainSpecific(MmsServerConnection* connection, char* domainName)
{
	MmsDevice* device = MmsServer_getDevice(connection->server);

	LinkedList nameList = NULL;

	MmsDomain* domain = MmsDevice_getDomain(device, domainName);

	if (domain != NULL) {
		LinkedList variableLists = MmsDomain_getNamedVariableLists(domain);

		nameList = createStringsFromNamedVariableList(nameList, variableLists);
	}

	return nameList;
}

static LinkedList
getNamedVariableListAssociationSpecific(MmsServerConnection* connection)
{
	LinkedList nameList = NULL;

	LinkedList variableLists = MmsServerConnection_getNamedVariableLists(connection);

	nameList = createStringsFromNamedVariableList(nameList, variableLists);

	return nameList;
}
#endif

static void
createNameListResponse(
        MmsServerConnection* connection,
        int invokeId,
        LinkedList nameList,
        ByteBuffer* response,
        char* continueAfter)
{
    LinkedList startElement = NULL;
    int nameCount;
    int mmsPduLength;
    int maxPduSize;
    bool moreFollows;
    LinkedList element;
    uint32_t identifierListSize;
    uint32_t listOfIdentifierSize;
    uint32_t getNameListSize;
    uint32_t confirmedServiceResponseSize;
    uint32_t invokeIdSize;
    uint32_t confirmedResponsePDUSize;
    uint8_t* buffer;
    int bufPos;
    int i = 0;

    if (continueAfter != NULL) {
        LinkedList element = nameList;

        while ((element = LinkedList_getNext(element)) != NULL) {
            if (strcmp((char*) (element->data), continueAfter) == 0) {
                startElement = element;
                break;
            }
        }

        if (startElement == NULL) {
            mmsServer_createConfirmedErrorPdu(invokeId, response, MMS_ERROR_TYPE_OBJECT_ACCESS_UNSUPPORTED);
            return;
        }
    }

    /* determine number of identifiers to include in response */
    if (startElement == NULL)
        startElement = nameList;

    nameCount = 0;
    mmsPduLength = 25; /* estimated overhead size of PDU encoding */
    maxPduSize = connection->maxPduSize;

    moreFollows = false;

    element = startElement;

    while ((element = LinkedList_getNext(element)) != NULL) {
        int elementLength;

        elementLength = BerEncoder_determineEncodedStringSize((char*) element->data);

        if ((mmsPduLength + elementLength) > maxPduSize) {
            moreFollows = true;
            break;
        }
        else {
            mmsPduLength += elementLength;
            nameCount++;
        }

    }

    identifierListSize = mmsPduLength - 25;

    listOfIdentifierSize = 1 + BerEncoder_determineLengthSize(identifierListSize) + identifierListSize;

    getNameListSize = listOfIdentifierSize + 3;

    confirmedServiceResponseSize = 1 + BerEncoder_determineLengthSize(getNameListSize) + getNameListSize;

    invokeIdSize = BerEncoder_UInt32determineEncodedSize((uint32_t) invokeId) + 2;

    confirmedResponsePDUSize = confirmedServiceResponseSize + invokeIdSize;

    if (DEBUG) printf("maxPduLength: %i\n", maxPduSize);

    if (DEBUG) printf("mmsPduLength: %i (count = %i : more %i)\n",
            mmsPduLength, nameCount, moreFollows);

    /* encode response */
    element = startElement;

    buffer = response->buffer;
    bufPos = 0;

    bufPos = BerEncoder_encodeTL(0xa1, confirmedResponsePDUSize, buffer, bufPos);

    bufPos = BerEncoder_encodeTL(0x02, invokeIdSize - 2, buffer, bufPos);
    bufPos = BerEncoder_encodeUInt32((uint32_t) invokeId, buffer, bufPos);

    bufPos = BerEncoder_encodeTL(0xa1, getNameListSize, buffer, bufPos);
    bufPos = BerEncoder_encodeTL(0xa0, identifierListSize, buffer, bufPos);

    i = 0;
    while ((element = LinkedList_getNext(element)) != NULL) {
        bufPos = BerEncoder_encodeStringWithTag(0x1a, (char*) element->data, buffer, bufPos);

        i++;

        if (i == nameCount)
            break;
    }

    bufPos = BerEncoder_encodeBoolean(0x81, moreFollows, buffer, bufPos);

    response->size = bufPos;
}

void
mmsServer_handleGetNameListRequest(
		MmsServerConnection* connection,
		GetNameListRequest_t* getNameList,
		int invokeId,
		ByteBuffer* response)
{
	long objectClass;
    char* continueAfter;
    long objectScope;
    char* domainSpecificName;

	asn_INTEGER2long(&getNameList->objectClass.choice.basicObjectClass, &objectClass);

	switch (getNameList->objectScope.present) {
	case GetNameListRequest__objectScope_PR_NOTHING:
		objectScope = 0;
		break;
	case GetNameListRequest__objectScope_PR_vmdSpecific:
		objectScope = 1;
		break;
	case GetNameListRequest__objectScope_PR_domainSpecific:
		objectScope = 2;
		break;
	case GetNameListRequest__objectScope_PR_aaSpecific:
		objectScope = 3;
		break;
	default:
		objectScope = -1;
		break;
	}

	continueAfter = NULL;

	if (getNameList->continueAfter != NULL) {
		int identifierLength = getNameList->continueAfter->size;
		continueAfter = malloc(identifierLength + 1);

		memcpy(continueAfter, getNameList->continueAfter->buf, identifierLength);
		continueAfter[identifierLength] = 0;
	}

	domainSpecificName = NULL;

	if (objectScope == 2) {

		domainSpecificName = createStringFromBuffer(
				getNameList->objectScope.choice.domainSpecific.buf,
				getNameList->objectScope.choice.domainSpecific.size);

		if (objectClass == ObjectClass__basicObjectClass_namedVariable) {
			LinkedList nameList = getNameListDomainSpecific(connection, domainSpecificName);

			if (nameList == NULL)
				mmsServer_createConfirmedErrorPdu(invokeId, response, MMS_ERROR_TYPE_OBJECT_NON_EXISTENT);
			else {
				createNameListResponse(connection, invokeId, nameList, response, continueAfter);
				LinkedList_destroy(nameList);
			}
		}
#ifdef MMS_DATA_SET_SERVICE 1
		else if (objectClass == ObjectClass__basicObjectClass_namedVariableList) {
			LinkedList nameList = getNamedVariableListDomainSpecific(connection, domainSpecificName);

			createNameListResponse(connection, invokeId, nameList, response, continueAfter);

			LinkedList_destroy(nameList);
		}
#endif
		else {
			if (DEBUG) printf("mms_server: getNameList objectClass %li not supported!\n", objectClass);

			mmsServer_createConfirmedErrorPdu(invokeId, response, MMS_ERROR_TYPE_OBJECT_ACCESS_UNSUPPORTED);
		}

		free(domainSpecificName);
	}

	else if (objectScope == 1) {

		LinkedList nameList = getNameListVMDSpecific(connection);

		createNameListResponse(connection, invokeId, nameList, response, continueAfter);

		LinkedList_destroyStatic(nameList);
	}
#ifdef MMS_DATA_SET_SERVICE 1
	else if (objectScope == 3) {

		if (objectClass == ObjectClass__basicObjectClass_namedVariableList) {
			LinkedList nameList = getNamedVariableListAssociationSpecific(connection);

			createNameListResponse(connection, invokeId, nameList, response, continueAfter);

			LinkedList_destroy(nameList);
		}
		else
			mmsServer_createConfirmedErrorPdu(invokeId, response, MMS_ERROR_TYPE_OBJECT_ACCESS_UNSUPPORTED);
	}
#endif
	else {
		if (DEBUG) printf("mms_server: getNameList(%li) not supported!\n", objectScope);
		mmsServer_createConfirmedErrorPdu(invokeId, response, MMS_ERROR_TYPE_OBJECT_ACCESS_UNSUPPORTED);
	}

	if (continueAfter != NULL)
		free(continueAfter);
}
