/*
 *  mms_information_report.c
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

#include "mms_server_internal.h"
#include "mms_common_internal.h"
#include "mms_access_result.h"

void
MmsServerConnection_sendInformationReport(MmsServerConnection* self, char* domainId, char* itemId, LinkedList values)
{

    uint32_t variableAccessSpecSize = 0;
    uint32_t objectNameSize = 0;

    uint32_t accessResultSize = 0;
    uint32_t listOfAccessResultSize;
    uint32_t informationReportSize;

    if (domainId != NULL) {
//        report->variableAccessSpecification.choice.variableListName.present = ObjectName_PR_domainspecific;
//        report->variableAccessSpecification.choice.variableListName.choice.domainspecific.domainId.size = strlen(domainId);
//        report->variableAccessSpecification.choice.variableListName.choice.domainspecific.domainId.buf = domainId;
//        report->variableAccessSpecification.choice.variableListName.choice.domainspecific.itemId.size = strlen(itemId);
//        report->variableAccessSpecification.choice.variableListName.choice.domainspecific.itemId.buf = itemId;
    }
    else {
        objectNameSize = BerEncoder_determineEncodedStringSize(itemId);
        variableAccessSpecSize += objectNameSize;
        variableAccessSpecSize += BerEncoder_determineLengthSize(objectNameSize);
        variableAccessSpecSize += 1; /* space for tag (a1) */
    }

    int variableCount = LinkedList_size(values);

    /* iterate values list and add values to the accessResultList */
    LinkedList value = LinkedList_getNext(values);

    int i;

    for (i = 0; i < variableCount; i++) {

       MmsValue* data = (MmsValue*) value->data;

       accessResultSize += mmsServer_encodeAccessResult(data, NULL, 0, false);

        value = LinkedList_getNext(value);
    }

    listOfAccessResultSize = accessResultSize +
            BerEncoder_determineLengthSize(accessResultSize) + 1;

    uint32_t informationReportContentSize = variableAccessSpecSize + listOfAccessResultSize;

    informationReportSize = 1 +  informationReportContentSize +
            BerEncoder_determineLengthSize(informationReportContentSize);

    if (DEBUG) printf("sendInfReport: %i items\n", variableCount);

    ByteBuffer* reportBuffer = ByteBuffer_create(NULL, self->maxPduSize);

    uint8_t* buffer = reportBuffer->buffer;
    int bufPos = 0;


    /* encode */
    bufPos = BerEncoder_encodeTL(0xa3, informationReportSize, buffer, bufPos);
    bufPos = BerEncoder_encodeTL(0xa0, informationReportContentSize, buffer, bufPos);

    bufPos = BerEncoder_encodeTL(0xa1, objectNameSize, buffer, bufPos);
    bufPos = BerEncoder_encodeStringWithTag(0x80, itemId, buffer, bufPos);

    bufPos = BerEncoder_encodeTL(0xa0, accessResultSize, buffer, bufPos);

    value = LinkedList_getNext(values);

    for (i = 0; i < variableCount; i++) {

        MmsValue* data = (MmsValue*) value->data;

        bufPos = mmsServer_encodeAccessResult(data, buffer, bufPos, true);

        value = LinkedList_getNext(value);
    }

    if (DEBUG) printf("sendInfReport: %i encoded\n", bufPos);

    reportBuffer->size = bufPos;

    IsoConnection_sendMessage(self->isoConnection, reportBuffer);

    ByteBuffer_destroy(reportBuffer);
}



