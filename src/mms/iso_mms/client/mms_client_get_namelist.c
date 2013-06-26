/*
 *  mms_client_get_namelist.c
 *
 *  Copyright 2013 Michael Zillgith
 *
 *	This file is part of libIEC61850.
 *
 *	libIEC61850 is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *
 *	libIEC61850 is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with libIEC61850.  If not, see <http://www.gnu.org/licenses/>.
 *
 *	See COPYING file for the complete license text.
 */

#include <MmsPdu.h>
#include "stack_config.h"
#include "mms_common.h"
#include "mms_client_connection.h"
#include "byte_buffer.h"
#include "string_utilities.h"
#include "mms_client_internal.h"

int
mmsClient_createMmsGetNameListRequestVMDspecific(long invokeId, ByteBuffer* writeBuffer,
		char* continueAfter)
{
	MmsPdu_t* mmsPdu = mmsClient_createConfirmedRequestPdu(invokeId);

	mmsPdu->choice.confirmedRequestPdu.confirmedServiceRequest.present =
				ConfirmedServiceRequest_PR_getNameList;

	GetNameListRequest_t* request;

	request = &(mmsPdu->choice.confirmedRequestPdu.confirmedServiceRequest.choice.getNameList);

	if (continueAfter != NULL) {
		request->continueAfter = calloc(1, sizeof(Identifier_t));
		request->continueAfter->buf = copyString(continueAfter);
		request->continueAfter->size = strlen(continueAfter);
	}
	else
		request->continueAfter = NULL;

	request->objectScope.present = GetNameListRequest__objectScope_PR_vmdSpecific;
	request->objectClass.present = ObjectClass_PR_basicObjectClass;

	asn_long2INTEGER(&request->objectClass.choice.basicObjectClass,
			ObjectClass__basicObjectClass_domain);

	asn_enc_rval_t rval;

	rval = der_encode(&asn_DEF_MmsPdu, mmsPdu,
	            mmsClient_write_out, (void*) writeBuffer);

	if (DEBUG) xer_fprint(stdout, &asn_DEF_MmsPdu, mmsPdu);

	asn_DEF_MmsPdu.free_struct(&asn_DEF_MmsPdu, mmsPdu, 0);

	return rval.encoded;
}

int
mmsClient_createMmsGetNameListRequestAssociationSpecific(long invokeId, ByteBuffer* writeBuffer,
		char* continueAfter)
{
	MmsPdu_t* mmsPdu = mmsClient_createConfirmedRequestPdu(invokeId);

	mmsPdu->choice.confirmedRequestPdu.confirmedServiceRequest.present =
				ConfirmedServiceRequest_PR_getNameList;

	GetNameListRequest_t* request;

	request = &(mmsPdu->choice.confirmedRequestPdu.confirmedServiceRequest.choice.getNameList);


	if (continueAfter != NULL) {
		request->continueAfter = calloc(1, sizeof(Identifier_t));
		request->continueAfter->buf = copyString(continueAfter);
		request->continueAfter->size = strlen(continueAfter);
	}
	else
		request->continueAfter = NULL;


	request->objectScope.present = GetNameListRequest__objectScope_PR_aaSpecific;
	request->objectClass.present = ObjectClass_PR_basicObjectClass;

	asn_long2INTEGER(&request->objectClass.choice.basicObjectClass,
				ObjectClass__basicObjectClass_namedVariableList);

	asn_enc_rval_t rval;

	rval = der_encode(&asn_DEF_MmsPdu, mmsPdu,
				mmsClient_write_out, (void*) writeBuffer);

	if (DEBUG) xer_fprint(stdout, &asn_DEF_MmsPdu, mmsPdu);

	asn_DEF_MmsPdu.free_struct(&asn_DEF_MmsPdu, mmsPdu, 0);

	return rval.encoded;
}

bool
mmsClient_parseGetNameListResponse(LinkedList* nameList, ByteBuffer* message, uint32_t* invokeId)
{
	MmsPdu_t* mmsPdu = 0;

	bool moreFollows = false;

	asn_dec_rval_t rval;
	/* Decoder return value  */
	rval = ber_decode(NULL, &asn_DEF_MmsPdu,
			(void**) &mmsPdu, ByteBuffer_getBuffer(message), ByteBuffer_getSize(message));

	if (DEBUG) xer_fprint(stdout, &asn_DEF_MmsPdu, mmsPdu);

	if (mmsPdu->present == MmsPdu_PR_confirmedResponsePdu) {
		*invokeId = mmsClient_getInvokeId(&mmsPdu->choice.confirmedResponsePdu);

		if (mmsPdu->choice.confirmedResponsePdu.confirmedServiceResponse.present == ConfirmedServiceResponse_PR_getNameList) {
			GetNameListResponse_t* response =
				&(mmsPdu->choice.confirmedResponsePdu.confirmedServiceResponse.choice.getNameList);

			if ((response->moreFollows != NULL) && (*(response->moreFollows) != 0))
				moreFollows = true;

			if (*nameList == NULL)
				*nameList = LinkedList_create();


			int variableCount = response->listOfIdentifier.list.count;

			int i;

			LinkedList element = LinkedList_getLastElement(*nameList);

			for (i = 0; i < variableCount; i++) {
				char* variableName =
						createStringFromBuffer(response->listOfIdentifier.list.array[i]->buf,
								response->listOfIdentifier.list.array[i]->size);

				element = LinkedList_insertAfter(element, variableName);
			}
		}
		else {
			printf("parseMmsGetNameListResponse: NOT A GetNameList RESPONSE!\n");
		}
	}
	else {
		printf("parseMmsGetNameListResponse: NOT A CONFIRMED RESPONSE!\n");
	}

	asn_DEF_MmsPdu.free_struct(&asn_DEF_MmsPdu, mmsPdu, 0);

	return moreFollows;
}

int
mmsClient_createGetNameListRequestDomainSpecific(long invokeId, char* domainName,
		ByteBuffer* writeBuffer, MmsObjectClass objectClass, char* continueAfter)
{
	MmsPdu_t* mmsPdu = mmsClient_createConfirmedRequestPdu(invokeId);

	mmsPdu->choice.confirmedRequestPdu.confirmedServiceRequest.present =
				ConfirmedServiceRequest_PR_getNameList;

	GetNameListRequest_t* request;

	request = &(mmsPdu->choice.confirmedRequestPdu.confirmedServiceRequest.choice.getNameList);

	if (continueAfter != NULL) {
		request->continueAfter = calloc(1, sizeof(Identifier_t));
		request->continueAfter->buf = copyString(continueAfter);
		request->continueAfter->size = strlen(continueAfter);
	}
	else
		request->continueAfter = NULL;



	request->objectScope.present = GetNameListRequest__objectScope_PR_domainSpecific;
	request->objectScope.choice.domainSpecific.buf = domainName;
	request->objectScope.choice.domainSpecific.size = strlen(domainName);
	request->objectClass.present = ObjectClass_PR_basicObjectClass;

	if (objectClass == MMS_NAMED_VARIABLE)
		asn_long2INTEGER(&request->objectClass.choice.basicObjectClass,
				ObjectClass__basicObjectClass_namedVariable);
	else if (objectClass == MMS_NAMED_VARIABLE_LIST)
		asn_long2INTEGER(&request->objectClass.choice.basicObjectClass,
				ObjectClass__basicObjectClass_namedVariableList);

	asn_enc_rval_t rval;

	rval = der_encode(&asn_DEF_MmsPdu, mmsPdu,
	            mmsClient_write_out, (void*) writeBuffer);

	if (DEBUG) xer_fprint(stdout, &asn_DEF_MmsPdu, mmsPdu);

	request->objectScope.choice.domainSpecific.buf = 0;
	request->objectScope.choice.domainSpecific.size = 0;

	asn_DEF_MmsPdu.free_struct(&asn_DEF_MmsPdu, mmsPdu, 0);

	return rval.encoded;
}
