/*
 * client_example2.c
 *
 * How to get the model of an unknown device.
 */

#include "iec61850_client.h"

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {

    IedClientError error;

    IedConnection con = IedConnection_create();

    IedConnection_connect(con, &error, "localhost", 102);

    if (error == IED_ERROR_OK) {

    	printf("Get logical device list...\n");
    	LinkedList deviceList = IedConnection_getLogicalDeviceList(con, &error);

    	LinkedList device = LinkedList_getNext(deviceList);

    	while (device != NULL) {
    		printf("LD: %s\n", device->data);

    		LinkedList logicalNodes = IedConnection_getLogicalDeviceDirectory(con, &error,
    				device->data);

    		LinkedList logicalNode = LinkedList_getNext(logicalNodes);

    		while (logicalNode != NULL) {
    			printf("  LN: %s\n", (char*) logicalNode->data);

    			char* lnRef = alloca(129);

    			snprintf(lnRef, 128, "%s/%s", device->data, logicalNode->data);

    			LinkedList dataObjects = IedConnection_getLogicalNodeDirectory(con, &error,
    					lnRef, ACSI_CLASS_DATA_OBJECT);

    			LinkedList dataObject = LinkedList_getNext(dataObjects);

    			while (dataObject != NULL) {
    			    char* dataObjectName = (char*) dataObject->data;

    			    printf("    DO: %s\n", dataObjectName);

    			    dataObject = LinkedList_getNext(dataObject);
    			}

    			LinkedList_destroy(dataObjects);

    			logicalNode = LinkedList_getNext(logicalNode);
    		}

    		LinkedList_destroy(logicalNodes);

    		device = LinkedList_getNext(device);
    	}

    	LinkedList_destroy(deviceList);

        IedConnection_close(con);
    }
    else {
    	printf("Connection failed!\n");
    }

    IedConnection_destroy(con);
}


