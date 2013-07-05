
#include <stdlib.h>
#include <stdio.h>
#include "mms_client_connection.h"

int main(int argc, char** argv) {

	char* hostname;
	MmsConnection con = MmsConnection_create();
	MmsIndication indication;
	MmsClientError mmsError;
    LinkedList nameList;
    LinkedList element;

	/* Set maximum MMS PDU size (local detail) to 2000 byte */
	MmsConnection_setLocalDetail(con, 2000);

	indication = MmsConnection_connect(con, &mmsError, "192.168.27.152", 102);

	if (indication != MMS_OK) {
		printf("MMS connect failed!\n");
		goto exit;
	}
	else
		printf("MMS connected.\n\n");

	printf("Domains present on server:\n--------------------------\n");
	nameList = MmsConnection_getDomainNames(con, &mmsError);
	LinkedList_printStringList(nameList);
	printf("\n");

	element = nameList;

	while ((element = LinkedList_getNext(element)) != NULL) {
        LinkedList variableList;
        LinkedList dataSetList;

        printf("\nNamed variables in domain: %s\n-------------------------------------------------\n", (char*) element->data);
		variableList = MmsConnection_getDomainVariableNames(con, &mmsError, (char*) element->data);

		LinkedList_printStringList(variableList);

		LinkedList_destroy(variableList);

		printf("\nNamed variable lists (data sets) in domain: %s\n", (char*) element->data);

		dataSetList = MmsConnection_getDomainVariableListNames(con, &mmsError, (char*) element->data);

		LinkedList_printStringList(dataSetList);

		LinkedList_destroy(dataSetList);

	}

	LinkedList_destroy(nameList);

exit:
	MmsConnection_destroy(con);
}

