
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "string_utilities.h"
#include "mms_client_connection.h"

int main(int argc, char** argv) {

	char* hostname = copyString("localhost");
	int tcpPort = 102;
	int maxPduSize = 65000;

	char* domainName = NULL;

	int readDeviceList = 0;
	int getDeviceDirectory = 0;

	int c;

	while ((c = getopt(argc, argv, "dh:p:l:t:")) != -1)
		switch (c) {
		case 'h':
			hostname = copyString(optarg);
			break;
		case 'p':
			tcpPort = atoi(optarg);
			break;
		case 'l':
			maxPduSize = atoi(optarg);
			break;
		case 'd':
			readDeviceList = 1;
			break;
		case 't':
			getDeviceDirectory = 1;
			domainName = copyString(optarg);
			break;
		default:
			abort();
		}

	MmsConnection con = MmsConnection_create();

	MmsIndication indication;
	MmsClientError error;

	/* Set maximum MMS PDU size (local detail) to 2000 byte */
	MmsConnection_setLocalDetail(con, maxPduSize);

	indication = MmsConnection_connect(con, &error, hostname, tcpPort);

	if (indication != MMS_OK) {
		printf("MMS connect failed!\n");
		goto exit;
	}
	else
		printf("MMS connected.\n");

	if (readDeviceList) {
		printf("Domains present on server:\n--------------------------\n");
		LinkedList nameList = MmsConnection_getDomainNames(con, &error);
		LinkedList_printStringList(nameList);
		LinkedList_destroy(nameList);

	}

	if (getDeviceDirectory) {
		LinkedList variableList = MmsConnection_getDomainVariableNames(con, &error,
				domainName);

		LinkedList element = variableList;

		while ((element = LinkedList_getNext(element)) != NULL) {
			char* name = (char*) element->data;

			if (strchr(name, '$') == NULL)
				printf("%s\n", name);
		}

	}

//	LinkedList element = nameList;
//
//	while ((element = LinkedList_getNext(element)) != NULL) {
//		printf("\nNamed variables in domain: %s\n-------------------------------------------------\n", (char*) element->data);
//
//		LinkedList variableList = MmsConnection_getDomainVariableNames(con, (char*) element->data);
//
//		LinkedList_printStringList(variableList);
//
//		LinkedList_destroy(variableList);
//
//		printf("\nNamed variable lists (data sets) in domain: %s\n", (char*) element->data);
//
//		LinkedList dataSetList = MmsConnection_getDomainVariableListNames(con, (char*) element->data);
//
//		LinkedList_printStringList(dataSetList);
//
//		LinkedList_destroy(dataSetList);
//
//	}
//
//	LinkedList_destroy(nameList);

exit:
	MmsConnection_destroy(con);
}

