/*
 *  mms_client_connection.c
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

#include "libiec61850_platform_includes.h"

#include "mms_client_connection.h"
#include "iso_client_connection.h"
#include "mms_client_internal.h"
#include "stack_config.h"

#include <MmsPdu.h>

#include "byte_buffer.h"

static void
handleUnconfirmedMmsPdu(MmsConnection self, ByteBuffer* message)
{
    MmsPdu_t* mmsPdu = 0; /* allow asn1c to allocate structure */
    MmsIndication retVal =  MMS_OK;

    MmsValue* valueList = NULL;
    MmsValue* value = NULL;

    asn_dec_rval_t rval;

    rval = ber_decode(NULL, &asn_DEF_MmsPdu,
            (void**) &mmsPdu, ByteBuffer_getBuffer(message), ByteBuffer_getSize(message));

    if (rval.code == RC_OK) {

        if (DEBUG) xer_fprint(stdout, &asn_DEF_MmsPdu, mmsPdu);

        if (mmsPdu->present == MmsPdu_PR_unconfirmedPDU) {

            if (mmsPdu->choice.unconfirmedPDU.unconfirmedService.present ==
                    UnconfirmedService_PR_informationReport)
            {
                char* domainId = NULL;
                char* variableListName = NULL;

                InformationReport_t* report =
                        &(mmsPdu->choice.unconfirmedPDU.unconfirmedService.choice.informationReport);

                if (report->variableAccessSpecification.present ==
                        VariableAccessSpecification_PR_variableListName)
                {
                    if (report->variableAccessSpecification.choice.variableListName.present == ObjectName_PR_vmdspecific)
                    {
                        int nameSize = report->variableAccessSpecification.choice.variableListName.choice.vmdspecific.size;
                        uint8_t* buffer = report->variableAccessSpecification.choice.variableListName.choice.vmdspecific.buf;

                        variableListName = createStringFromBuffer(buffer, nameSize);
                    }
                    else {
                        // Ignore TODO accept domain specific information reports (not used by IEC 61850)
                    }

                    if (self->reportHandler != NULL) {

                        int listSize = report->listOfAccessResult.list.count;

                        MmsValue* values = mmsClient_parseListOfAccessResults(
                            report->listOfAccessResult.list.array, listSize);

                        self->reportHandler(self->reportHandlerParameter, domainId, variableListName, values);
                    }
                }
                else {
                    // Ignore
                }

                if (variableListName != NULL)
                    free(variableListName);

            }

        }
    }
    else {
        printf("handleUnconfirmedMmsPdu: error parsing PDU\n");
    }

    asn_DEF_MmsPdu.free_struct(&asn_DEF_MmsPdu, mmsPdu, 0);
}

static void
mmsIsoCallback(IsoIndication indication, void* parameter, ByteBuffer* payload)
{
	MmsConnection self = (MmsConnection) parameter;

	if (DEBUG) printf("mmsIsoCallback called with indication %i\n", indication);

	if (indication == ISO_IND_CLOSED) {
	    self->connectionState = MMS_CON_IDLE;
	    self->associationState = MMS_STATE_CLOSED;
	    return;
	}

	if (payload != NULL) {
        if (ByteBuffer_getSize(payload) < 1) {
            IsoClientConnection_releasePayloadBuffer(self->isoClient, payload);
            return;
        }
	}

    if (self->lastRequestType == MMS_REQ_INITIATE) {
        if (indication == ISO_IND_ASSOCIATION_SUCCESS) {
            self->connectionState = MMS_CON_ASSOCIATED;
        }
        else {
            self->connectionState = MMS_CON_ASSOCIATION_FAILED;
        }
        self->lastResponse = payload;

        return;
    }


	uint8_t* buf = ByteBuffer_getBuffer(payload);

	if (DEBUG) printf("MMS-PDU: %02x\n", buf[0]);

	if (buf[0] == 0xa3) {
	    handleUnconfirmedMmsPdu(self, payload);
	    IsoClientConnection_releasePayloadBuffer(self->isoClient, payload);
	}
	else {
        if (self->lastRequestType == MMS_REQ_GET_NAME_LIST) {
            self->lastResponse = payload;
            self->connectionState = MMS_CON_RESPONSE_PENDING;
        }
        else if (self->lastRequestType == MMS_REQ_READ) {
            self->lastResponse = payload;
            self->connectionState = MMS_CON_RESPONSE_PENDING;
        }
        else if (self->lastRequestType == MMS_REQ_WRITE) {
            self->lastResponse = payload;
            self->connectionState = MMS_CON_RESPONSE_PENDING;
        }
        else if (self->lastRequestType == MMS_REQ_GET_VAR_ACCESS_ATTRIBUTES) {
            self->lastResponse = payload;
            self->connectionState = MMS_CON_RESPONSE_PENDING;
        }
        else if (self->lastRequestType == MMS_REQ_DEFINE_NAMED_VARIABLE_LIST) {
            self->lastResponse = payload;
            self->connectionState = MMS_CON_RESPONSE_PENDING;
        }
        else if (self->lastRequestType == MMS_REQ_DELETE_NAMED_VARIABLE_LIST) {
            self->lastResponse = payload;
            self->connectionState = MMS_CON_RESPONSE_PENDING;
        }
        else if (self->lastRequestType == MMS_REQ_GET_NAMED_VARIABLE_LIST_ATTRIBUTES) {
            self->lastResponse = payload;
            self->connectionState = MMS_CON_RESPONSE_PENDING;
        }
        else {
            printf("Unexpected message from server");
            IsoClientConnection_releasePayloadBuffer(self->isoClient, payload);
        }
	}

}

MmsConnection
MmsConnection_create()
{
	MmsConnection self = calloc(1, sizeof(struct sMmsConnection));

	self->parameters.dataStructureNestingLevel = -1;
	self->parameters.maxServOutstandingCalled = -1;
	self->parameters.maxServOutstandingCalling = -1;
	self->parameters.maxPduSize = -1;

	self->parameters.maxPduSize = MMS_MAXIMUM_PDU_SIZE;

	return self;
}

void
MmsConnection_destroy(MmsConnection self)
{
	if (self->isoClient != NULL)
		IsoClientConnection_destroy(self->isoClient);

	if (self->isoConnectionParametersSelfAllocated)
		free(self->isoParameters);

	free(self->buffer);
	free(self);
}

void
MmsConnection_setLocalDetail(MmsConnection self, int32_t localDetail)
{
	self->parameters.maxPduSize = localDetail;
}

int32_t
MmsConnection_getLocalDetail(MmsConnection self)
{
	return self->parameters.maxPduSize;
}


void
MmsConnection_setIsoConnectionParameters(MmsConnection self, IsoConnectionParameters* params)
{
	self->isoParameters = params;
}


MmsClientError
MmsConnection_getError(MmsConnection self) {
	return self->lastError;
}

MmsIndication
MmsConnection_connect(MmsConnection self, MmsClientError* mmsError, char* serverName, int serverPort)
{
	self->isoClient = IsoClientConnection_create(mmsIsoCallback, (void*) self);

	if (self->isoParameters == NULL) {
		self->isoConnectionParametersSelfAllocated = 1;
		self->isoParameters = calloc(1, sizeof(IsoConnectionParameters));
	}

	self->isoParameters->hostname = serverName;
	self->isoParameters->tcpPort = serverPort;

	if (self->parameters.maxPduSize == -1)
		self->parameters.maxPduSize = MMS_MAXIMUM_PDU_SIZE;

	self->buffer = malloc(self->parameters.maxPduSize);

	ByteBuffer payload;

	ByteBuffer_wrap(&payload, self->buffer, 0, self->parameters.maxPduSize);

	mmsClient_createInitiateRequest(self, &payload);

	self->connectionState = MMS_CON_WAITING;
	self->lastRequestType = MMS_REQ_INITIATE;

	IsoClientConnection_associate(self->isoClient, self->isoParameters, &payload);

	/* poll callback handler TODO poll with timeout */
	while (self->connectionState == MMS_CON_WAITING) {
		Thread_sleep(1);
	}

	if (self->connectionState == MMS_CON_ASSOCIATED) {
		mmsClient_parseInitiateResponse(self);
		IsoClientConnection_releasePayloadBuffer(self->isoClient, self->lastResponse);
		self->associationState = MMS_STATE_CONNECTED;
	}
	else {
		self->associationState = MMS_STATE_CLOSED;
	}

	self->connectionState = MMS_CON_IDLE;

	if (self->associationState == MMS_STATE_CONNECTED)
		return MMS_OK;
	else
		return MMS_ERROR;
}


void
MmsConnection_setInformationReportHandler(MmsConnection self, MmsInformationReportHandler handler,
        void* parameter)
{
    self->reportHandler = handler;
    self->reportHandlerParameter = parameter;
}

bool
mmsClient_getNameListSingleRequest(
		LinkedList* nameList,
		MmsConnection self,
		MmsClientError* mmsError,
		char* domainId,
		MmsObjectClass objectClass,
		bool associationSpecific,
		char* continueAfter)
{
	//TODO refactor --> extract common properties of specific getNameList-functions
	ByteBuffer payload;
	ByteBuffer_wrap(&payload, self->buffer, 0, self->parameters.maxPduSize);

	*mmsError = MMS_ERROR_NONE;

	self->lastInvokeId++;

	if (associationSpecific)
		mmsClient_createMmsGetNameListRequestAssociationSpecific(self->lastInvokeId,
				&payload, continueAfter);
	else {

		if (domainId == NULL)
			mmsClient_createMmsGetNameListRequestVMDspecific(self->lastInvokeId,
					&payload, continueAfter);
		else
			mmsClient_createGetNameListRequestDomainSpecific(self->lastInvokeId, domainId,
					&payload, objectClass, continueAfter);
	}

	self->lastRequestType = MMS_REQ_GET_NAME_LIST;
	self->connectionState = MMS_CON_WAITING;

	IsoClientConnection_sendMessage(self->isoClient, &payload);

	/* poll callback handler TODO poll with timeout */
	while (self->connectionState == MMS_CON_WAITING)
		Thread_sleep(1);

	if (self->connectionState == MMS_CON_RESPONSE_PENDING) {
		uint32_t invokeId;
		bool moreFollows = mmsClient_parseGetNameListResponse(nameList, self->lastResponse,
																	&invokeId);

		if (invokeId != self->lastInvokeId) {
			printf("Invalid invoke ID\n");

			*mmsError = MMS_ERROR_SERVICE_ERROR;

			if (*nameList != NULL) {
				LinkedList_destroy(&nameList);
			}

			*nameList = NULL;

			return false;
		}

		IsoClientConnection_releasePayloadBuffer(self->isoClient, self->lastResponse);
		self->connectionState = MMS_CON_IDLE;
		return moreFollows;
	}
	else {
	    if (self->associationState == MMS_STATE_CLOSED)
	        *mmsError = MMS_ERROR_CONNECTION_LOST;
	}

	self->connectionState = MMS_CON_IDLE;
	return false;
}


static LinkedList /* <char*> */
mmsClient_getNameList(MmsConnection self, MmsClientError *mmsError,
		char* domainId,
		MmsObjectClass objectClass,
		bool associationSpecific)
{
	LinkedList list = NULL;

	bool moreFollows;

	moreFollows = mmsClient_getNameListSingleRequest(&list, self, mmsError, domainId,
					 objectClass, associationSpecific, NULL);

	while ((moreFollows == true) && (list != NULL)) {
		LinkedList lastElement = LinkedList_getLastElement(list);

		char* lastIdentifier = lastElement->data;

		if (DEBUG) printf("getNameList: identifier: %s\n", lastIdentifier);

		moreFollows = mmsClient_getNameListSingleRequest(&list, self, mmsError, domainId,
							 objectClass, associationSpecific, lastIdentifier);
	}

	return list;
}

LinkedList /* <char*> */
MmsConnection_getDomainNames(MmsConnection self, MmsClientError* mmsError) {
	return mmsClient_getNameList(self, mmsError, NULL, MMS_NAMED_VARIABLE, false);
}

LinkedList /* <char*> */
MmsConnection_getDomainVariableNames(MmsConnection self, MmsClientError* mmsError, char* domainId) {
	return mmsClient_getNameList(self, mmsError, domainId, MMS_NAMED_VARIABLE, false);
}

LinkedList /* <char*> */
MmsConnection_getDomainVariableListNames(MmsConnection self, MmsClientError* mmsError, char* domainId) {
	return mmsClient_getNameList(self, mmsError, domainId, MMS_NAMED_VARIABLE_LIST, false);
}

LinkedList /* <char*> */
MmsConnection_getVariableListNamesAssociationSpecific(MmsConnection self, MmsClientError* mmsError)
{
	return mmsClient_getNameList(self, mmsError, NULL, MMS_NAMED_VARIABLE_LIST, true);
}

MmsValue*
MmsConnection_readVariable(MmsConnection self, MmsClientError* mmsError,
		char* domainId, char* itemId)
{
	ByteBuffer payload;
	MmsValue* value = NULL;
	ByteBuffer_wrap(&payload, self->buffer, 0, self->parameters.maxPduSize);

	*mmsError = MMS_ERROR_NONE;

	self->lastInvokeId++;

	mmsClient_createReadRequest(domainId, itemId, &payload);

	self->lastRequestType = MMS_REQ_READ;
	self->connectionState = MMS_CON_WAITING;

	IsoClientConnection_sendMessage(self->isoClient, &payload);

	/* poll callback handler TODO poll with timeout */
	while (self->connectionState == MMS_CON_WAITING)
		Thread_sleep(1);;

	if (self->connectionState == MMS_CON_RESPONSE_PENDING) {
		uint32_t invokeId;

		value = mmsClient_parseReadResponse(self->lastResponse, &invokeId);
		IsoClientConnection_releasePayloadBuffer(self->isoClient, self->lastResponse);
	}
	else {
	    if (self->associationState == MMS_STATE_CLOSED)
	        *mmsError = MMS_ERROR_CONNECTION_LOST;
	}

	self->connectionState = MMS_CON_IDLE;
	return value;
}

MmsValue*
MmsConnection_readArrayElements(MmsConnection self, MmsClientError* mmsError,
		char* domainId, char* itemId,
		uint32_t startIndex, uint32_t numberOfElements)
{
	ByteBuffer payload;
	MmsValue* value = NULL;
	ByteBuffer_wrap(&payload, self->buffer, 0, self->parameters.maxPduSize);

	*mmsError = MMS_ERROR_NONE;

	self->lastInvokeId++;

	mmsClient_createReadRequestAlternateAccessIndex(domainId, itemId, startIndex, numberOfElements,
			&payload);

	self->lastRequestType = MMS_REQ_READ;
	self->connectionState = MMS_CON_WAITING;

	IsoClientConnection_sendMessage(self->isoClient, &payload);

	/* poll callback handler TODO poll with timeout */
	while (self->connectionState == MMS_CON_WAITING)
		Thread_sleep(1);


	if (self->connectionState == MMS_CON_RESPONSE_PENDING) {
		uint32_t invokeId;

		value = mmsClient_parseReadResponse(self->lastResponse, &invokeId);
		IsoClientConnection_releasePayloadBuffer(self->isoClient, self->lastResponse);
	}
	else {
	    if (self->associationState == MMS_STATE_CLOSED)
	        *mmsError = MMS_ERROR_CONNECTION_LOST;
	}

	self->connectionState = MMS_CON_IDLE;
	return value;
}

MmsValue*
MmsConnection_readMultipleVariables(MmsConnection self, MmsClientError* mmsError,
		char* domainId, LinkedList /*<char*>*/ items)
{
	ByteBuffer payload;
	MmsValue* value = NULL;
	ByteBuffer_wrap(&payload, self->buffer, 0, self->parameters.maxPduSize);

	*mmsError = MMS_ERROR_NONE;

	self->lastInvokeId++;

	//TODO handle invokeID
	mmsClient_createReadRequestMultipleValues(domainId, items, &payload);

	self->lastRequestType = MMS_REQ_READ;
	self->connectionState = MMS_CON_WAITING;

	IsoClientConnection_sendMessage(self->isoClient, &payload);

	/* poll callback handler TODO poll with timeout */
	while (self->connectionState == MMS_CON_WAITING)
		Thread_sleep(1);

	if (self->connectionState == MMS_CON_RESPONSE_PENDING) {
		uint32_t invokeId;

		value = mmsClient_parseReadResponse(self->lastResponse, &invokeId);
		IsoClientConnection_releasePayloadBuffer(self->isoClient, self->lastResponse);
	}
	else {
	    if (self->associationState == MMS_STATE_CLOSED)
	        *mmsError = MMS_ERROR_CONNECTION_LOST;
	}

	self->connectionState = MMS_CON_IDLE;
	return value;
}

MmsValue*
MmsConnection_readNamedVariableListValues(MmsConnection self, MmsClientError* mmsError,
		char* domainId, char* listName,
		bool specWithResult)
{
	ByteBuffer payload;
	ByteBuffer_wrap(&payload, self->buffer, 0, self->parameters.maxPduSize);

	MmsValue* value = NULL;

	*mmsError = MMS_ERROR_NONE;

	self->lastInvokeId++;

	mmsClient_createReadNamedVariableListRequest(self->lastInvokeId, domainId, listName,
			&payload, specWithResult);

	self->lastRequestType = MMS_REQ_READ;
	self->connectionState = MMS_CON_WAITING;

	IsoClientConnection_sendMessage(self->isoClient, &payload);

	/* poll callback handler TODO poll with timeout */
	while (self->connectionState == MMS_CON_WAITING)
		Thread_sleep(1);

	if (self->connectionState == MMS_CON_RESPONSE_PENDING) {
		uint32_t invokeId;

		value = mmsClient_parseReadResponse(self->lastResponse, &invokeId);
		IsoClientConnection_releasePayloadBuffer(self->isoClient, self->lastResponse);
	}
	else {
	    if (self->associationState == MMS_STATE_CLOSED)
	        *mmsError = MMS_ERROR_CONNECTION_LOST;
	}

	self->connectionState = MMS_CON_IDLE;
	return value;
}

MmsValue*
MmsConnection_readNamedVariableListValuesAssociationSpecific(
		MmsConnection self, MmsClientError* mmsError,
		char* listName,
		bool specWithResult)
{
	ByteBuffer payload;
	ByteBuffer_wrap(&payload, self->buffer, 0, self->parameters.maxPduSize);

	MmsValue* value = NULL;

	*mmsError = MMS_ERROR_NONE;

	self->lastInvokeId++;

	mmsClient_createReadAssociationSpecificNamedVariableListRequest(self->lastInvokeId, listName,
			&payload, specWithResult);

	self->lastRequestType = MMS_REQ_READ;
	self->connectionState = MMS_CON_WAITING;

	IsoClientConnection_sendMessage(self->isoClient, &payload);

	/* poll callback handler TODO poll with timeout */
	while (self->connectionState == MMS_CON_WAITING)
		Thread_sleep(1);

	if (self->connectionState == MMS_CON_RESPONSE_PENDING) {
		uint32_t invokeId;

		value = mmsClient_parseReadResponse(self->lastResponse, &invokeId);
		IsoClientConnection_releasePayloadBuffer(self->isoClient, self->lastResponse);
	}
	else {
	    if (self->associationState == MMS_STATE_CLOSED)
	        *mmsError = MMS_ERROR_CONNECTION_LOST;
	}

	self->connectionState = MMS_CON_IDLE;
	return value;
}

LinkedList /* <char*> */
MmsConnection_readNamedVariableListDirectory(MmsConnection self,  MmsClientError* mmsError,
		char* domainId, char* listName,	bool* deletable)
{
	ByteBuffer payload;
	ByteBuffer_wrap(&payload, self->buffer, 0, self->parameters.maxPduSize);

	*mmsError = MMS_ERROR_NONE;

	LinkedList attributes = NULL;

	self->lastInvokeId++;

	mmsClient_createGetNamedVariableListAttributesRequest(self->lastInvokeId, &payload, domainId,
			listName);

	self->lastRequestType = MMS_REQ_GET_NAMED_VARIABLE_LIST_ATTRIBUTES;
	self->connectionState = MMS_CON_WAITING;

	IsoClientConnection_sendMessage(self->isoClient, &payload);

	/* poll callback handler TODO poll with timeout */
	while (self->connectionState == MMS_CON_WAITING)
		Thread_sleep(1);


	if (self->connectionState == MMS_CON_RESPONSE_PENDING) {
		uint32_t invokeId;

		attributes = mmsClient_parseGetNamedVariableListAttributesResponse(self->lastResponse, &invokeId,
				deletable);

		IsoClientConnection_releasePayloadBuffer(self->isoClient, self->lastResponse);
	}
	else {
	    if (self->associationState == MMS_STATE_CLOSED)
	        *mmsError = MMS_ERROR_CONNECTION_LOST;
	}

	self->connectionState = MMS_CON_IDLE;

	return attributes;
}

MmsIndication
MmsConnection_defineNamedVariableList(MmsConnection self,  MmsClientError* mmsError,
		char* domainId, char* listName, LinkedList variableSpecs)
{
	ByteBuffer payload;
	ByteBuffer_wrap(&payload, self->buffer, 0, self->parameters.maxPduSize);

	*mmsError = MMS_ERROR_NONE;

	self->lastInvokeId++;

	mmsClient_createDefineNamedVariableListRequest(self->lastInvokeId, &payload, domainId,
			listName, variableSpecs, false);

	self->lastRequestType = MMS_REQ_DEFINE_NAMED_VARIABLE_LIST;
	self->connectionState = MMS_CON_WAITING;

	IsoClientConnection_sendMessage(self->isoClient, &payload);

	/* poll callback handler TODO poll with timeout */
	while (self->connectionState == MMS_CON_WAITING)
		Thread_sleep(1);

	MmsIndication indication = MMS_ERROR;

	if (self->connectionState == MMS_CON_RESPONSE_PENDING) {
		uint32_t invokeId;

		indication = mmsClient_parseDefineNamedVariableResponse(self->lastResponse, &invokeId);

		IsoClientConnection_releasePayloadBuffer(self->isoClient, self->lastResponse);
	}
	else {
	    if (self->associationState == MMS_STATE_CLOSED)
	        *mmsError = MMS_ERROR_CONNECTION_LOST;
	}

	self->connectionState = MMS_CON_IDLE;

	return indication;
}

MmsIndication
MmsConnection_defineNamedVariableListAssociationSpecific(MmsConnection self,
		 MmsClientError* mmsError, char* listName, LinkedList variableSpecs)
{
	ByteBuffer payload;
	ByteBuffer_wrap(&payload, self->buffer, 0, self->parameters.maxPduSize);

	*mmsError = MMS_ERROR_NONE;

	self->lastInvokeId++;

	mmsClient_createDefineNamedVariableListRequest(self->lastInvokeId, &payload, NULL,
			listName, variableSpecs, true);

	self->lastRequestType = MMS_REQ_DEFINE_NAMED_VARIABLE_LIST;
	self->connectionState = MMS_CON_WAITING;

	IsoClientConnection_sendMessage(self->isoClient, &payload);

	/* poll callback handler TODO poll with timeout */
	while (self->connectionState == MMS_CON_WAITING)
		Thread_sleep(1);

	MmsIndication indication = MMS_ERROR;

	if (self->connectionState == MMS_CON_RESPONSE_PENDING) {
		uint32_t invokeId;

		indication = mmsClient_parseDefineNamedVariableResponse(self->lastResponse, &invokeId);

		IsoClientConnection_releasePayloadBuffer(self->isoClient, self->lastResponse);
	}
	else {
	    if (self->associationState == MMS_STATE_CLOSED)
	        *mmsError = MMS_ERROR_CONNECTION_LOST;
	}

	self->connectionState = MMS_CON_IDLE;

	return indication;
}

MmsIndication
MmsConnection_deleteNamedVariableList(MmsConnection self,  MmsClientError* mmsError,
		char* domainId, char* listName)
{
	ByteBuffer payload;
	ByteBuffer_wrap(&payload, self->buffer, 0, self->parameters.maxPduSize);

	*mmsError = MMS_ERROR_NONE;

	self->lastInvokeId++;

	mmsClient_createDeleteNamedVariableListRequest(self->lastInvokeId, &payload, domainId, listName);

	self->lastRequestType = MMS_REQ_DELETE_NAMED_VARIABLE_LIST;
	self->connectionState = MMS_CON_WAITING;

	IsoClientConnection_sendMessage(self->isoClient, &payload);

	/* poll callback handler TODO poll with timeout */
	while (self->connectionState == MMS_CON_WAITING)
		Thread_sleep(1);

	MmsIndication indication = MMS_ERROR;

	if (self->connectionState == MMS_CON_RESPONSE_PENDING) {
		uint32_t invokeId;

		indication = mmsClient_parseDeleteNamedVariableListResponse(self->lastResponse, &invokeId);

		IsoClientConnection_releasePayloadBuffer(self->isoClient, self->lastResponse);
	}
	else {
	    if (self->associationState == MMS_STATE_CLOSED)
	        *mmsError = MMS_ERROR_CONNECTION_LOST;
	}

	self->connectionState = MMS_CON_IDLE;

	return indication;
}

MmsIndication
MmsConnection_deleteAssociationSpecificNamedVariableList(MmsConnection self,
		 MmsClientError* mmsError, char* listName)
{
	ByteBuffer payload;
	ByteBuffer_wrap(&payload, self->buffer, 0, self->parameters.maxPduSize);

	*mmsError = MMS_ERROR_NONE;

	self->lastInvokeId++;

	mmsClient_createDeleteAssociationSpecificNamedVariableListRequest(
			self->lastInvokeId, &payload, listName);

	self->lastRequestType = MMS_REQ_DELETE_NAMED_VARIABLE_LIST;
	self->connectionState = MMS_CON_WAITING;

	IsoClientConnection_sendMessage(self->isoClient, &payload);

	/* poll callback handler TODO poll with timeout */
	while (self->connectionState == MMS_CON_WAITING)
		Thread_sleep(1);

	MmsIndication indication = MMS_ERROR;

	if (self->connectionState == MMS_CON_RESPONSE_PENDING) {
		uint32_t invokeId;

		indication = mmsClient_parseDeleteNamedVariableListResponse(self->lastResponse, &invokeId);

		IsoClientConnection_releasePayloadBuffer(self->isoClient, self->lastResponse);
	}
	else {
	    if (self->associationState == MMS_STATE_CLOSED)
	        *mmsError = MMS_ERROR_CONNECTION_LOST;
	}


	self->connectionState = MMS_CON_IDLE;

	return indication;
}

MmsTypeSpecification*
MmsConnection_getVariableAccessAttributes(MmsConnection self,  MmsClientError* mmsError,
		char* domainId, char* itemId)
{
	ByteBuffer payload;
	ByteBuffer_wrap(&payload, self->buffer, 0, self->parameters.maxPduSize);
	MmsTypeSpecification* typeSpec = NULL;

	*mmsError = MMS_ERROR_NONE;

	self->lastInvokeId++;

	mmsClient_createGetVariableAccessAttributesRequest(domainId, itemId, &payload);

	self->lastRequestType = MMS_REQ_GET_VAR_ACCESS_ATTRIBUTES;
	self->connectionState = MMS_CON_WAITING;

	IsoClientConnection_sendMessage(self->isoClient, &payload);

	/* poll callback handler TODO poll with timeout */
	while (self->connectionState == MMS_CON_WAITING)
		Thread_sleep(1);

	if (self->connectionState == MMS_CON_RESPONSE_PENDING) {

		uint32_t invokeId;

		typeSpec = mmsClient_parseGetVariableAccessAttributesResponse(self->lastResponse,
				&invokeId);

		IsoClientConnection_releasePayloadBuffer(self->isoClient, self->lastResponse);
	}
	else {
	    if (self->associationState == MMS_STATE_CLOSED)
	        *mmsError = MMS_ERROR_CONNECTION_LOST;
	}

	self->connectionState = MMS_CON_IDLE;
	return typeSpec;
}

MmsIndication
MmsConnection_writeVariable(MmsConnection self, MmsClientError* clientError,
		char* domainId, char* itemId,
		MmsValue* value)
{
	MmsIndication indication = MMS_ERROR;
	ByteBuffer payload;
	ByteBuffer_wrap(&payload, self->buffer, 0, self->parameters.maxPduSize);

	*clientError = MMS_ERROR_NONE;

	self->lastInvokeId++;

	mmsClient_createWriteRequest(self->lastInvokeId, domainId, itemId, value, &payload);

	self->lastRequestType = MMS_REQ_WRITE;
	self->connectionState = MMS_CON_WAITING;

	IsoClientConnection_sendMessage(self->isoClient, &payload);

	/* poll callback handler TODO poll with timeout */
	while (self->connectionState == MMS_CON_WAITING)
		Thread_sleep(1);

	if (self->connectionState == MMS_CON_RESPONSE_PENDING) {
		indication = mmsClient_parseWriteResponse(self->lastResponse);

		if (indication != MMS_OK)
		    *clientError = MMS_ERROR_SERVICE_ERROR;

		IsoClientConnection_releasePayloadBuffer(self->isoClient, self->lastResponse);
	}
	else {
	    if (self->associationState == MMS_STATE_CLOSED)
	        *clientError = MMS_ERROR_CONNECTION_LOST;
	}

	self->connectionState = MMS_CON_IDLE;
	return indication;
}

MmsVariableSpecification*
MmsVariableSpecification_create(char* domainId, char* itemId)
{
	MmsVariableSpecification* varSpec = malloc(sizeof(MmsVariableSpecification));

	varSpec->domainId = domainId;
	varSpec->itemId = itemId;
	varSpec->arrayIndex = -1;
	varSpec->componentName = NULL;

	return varSpec;
}

MmsVariableSpecification*
MmsVariableSpecification_createAlternateAccess(char* domainId, char* itemId, int32_t index,
		char* componentName)
{
	MmsVariableSpecification* varSpec = malloc(sizeof(MmsVariableSpecification));

	varSpec->domainId = domainId;
	varSpec->itemId = itemId;
	varSpec->arrayIndex = index;
	varSpec->componentName = componentName;

	return varSpec;
}
