/*
 *  control.c
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


#include "control.h"
#include "mms_mapping.h"
#include "mms_mapping_internal.h"

struct sControlObject {
    MmsDomain* mmsDomain;
    MmsServer* mmsServer;
    char* lnName;
    char* name;

    MmsValue* mmsValue;

    MmsValue* oper;
    MmsValue* sbo;
    MmsValue* sbow;
    MmsValue* cancel;

    MmsValue* ctlVal;
    MmsValue* ctlNum;
    MmsValue* origin;
    MmsValue* timestamp;

    bool selected;
    uint64_t selectTime;
    uint32_t selectTimeout;

    bool initialized;
    uint32_t ctlModel;

    ControlHandler listener;
    void* listenerParameter;
};

static MmsValue* emptyString = NULL;

static void
initialize(ControlObject* self)
{
    if (emptyString == NULL)
        emptyString = MmsValue_newVisibleString(NULL);

    if (!(self->initialized)) {
        char* ctlModelName = createString(4, self->lnName, "$CF$", self->name, "$ctlModel");

        MmsValue* ctlModel = MmsServer_getValueFromCache(self->mmsServer,
                self->mmsDomain, ctlModelName);

        free(ctlModelName);

        if (ctlModel != NULL) {
            uint32_t ctlModelVal = MmsValue_toInt32(ctlModel);

            self->ctlModel = ctlModelVal;

            if ((ctlModelVal == 2) || (ctlModelVal == 4)) { /* SBO */
                char* sboTimeoutName = createString(4, self->lnName, "$CF$", self->name, "$sboTimeout");

                char* controlObjectReference = createString(6, self->mmsDomain->domainName, "/", self->lnName, "$", self->name, "$SBO");

                self->sbo = MmsValue_newVisibleString(controlObjectReference);

                MmsValue* sboTimeout = MmsServer_getValueFromCache(self->mmsServer,
                                self->mmsDomain, sboTimeoutName);

                free(controlObjectReference);
                free(sboTimeoutName);

                if (sboTimeout != NULL) {
                    uint32_t sboTimeoutVal = MmsValue_toInt32(sboTimeout);

                    self->selectTimeout = sboTimeoutVal;
                }
            }
            else {
                self->sbo = emptyString;
            }
        }

        self->initialized = true;
    }
}

ControlObject*
ControlObject_create(MmsServer* mmsServer, MmsDomain* domain, char* lnName, char* name)
{
    ControlObject* self = calloc(1, sizeof(ControlObject));

    self->name = name;
    self->lnName = lnName;
    self->mmsDomain = domain;
    self->mmsServer = mmsServer;

    return self;
}

void
ControlObject_destroy(ControlObject* self)
{
    if (self->mmsValue != NULL)
        MmsValue_delete(self->mmsValue);

    free(self);
}

void
ControlObject_setOper(ControlObject* self, MmsValue* oper)
{
    self->oper = oper;
}

void
ControlObject_setCancel(ControlObject* self, MmsValue* cancel)
{
    self->cancel = cancel;
}

void
ControlObject_setSBO(ControlObject* self, MmsValue* sbo)
{
    self->sbo = sbo;
}

void
ControlObject_setSBOw(ControlObject* self, MmsValue* sbow)
{
    self->sbow = sbow;
}

void
ControlObject_setCtlVal(ControlObject* self, MmsValue* ctlVal)
{
    self->ctlVal = ctlVal;
}

char*
ControlObject_getName(ControlObject* self)
{
    return self->name;
}

char*
ControlObject_getLNName(ControlObject* self)
{
    return self->lnName;
}

MmsDomain*
ControlObject_getDomain(ControlObject* self)
{
    return self->mmsDomain;
}

MmsValue*
ControlObject_getOper(ControlObject* self)
{
    return self->oper;
}

MmsValue*
ControlObject_getSBOw(ControlObject* self)
{
    return self->sbow;
}

MmsValue*
ControlObject_getSBO(ControlObject* self)
{
    return self->sbo;
}

MmsValue*
ControlObject_getCancel(ControlObject* self)
{
    return self->cancel;
}

void
ControlObject_setMmsValue(ControlObject* self, MmsValue* value)
{
    self->mmsValue = value;
}

MmsValue*
ControlObject_getMmsValue(ControlObject* self)
{
    return self->mmsValue;
}

static void
selectObject(ControlObject* self, uint64_t selectTime)
{
    self->selected = true;
    self->selectTime = selectTime;
}

static bool
isSelected(ControlObject* self, uint64_t currentTime)
{
    if ((self->ctlModel == 2) || (self->ctlModel == 4)) {

        if (self->selected) {

            if (currentTime > (self->selectTime + self->selectTimeout)) {
                self->selected = false;
                return false;
            }

            return true;
        }
        else
            return false;
    }
    else
        return true;
}

bool
ControlObject_select(ControlObject* self)
{
    initialize(self);

    uint64_t currentTime = Hal_getTimeInMs();

    if (isSelected(self, currentTime))
        return false;
    else
        selectObject(self, currentTime);

    return true;
}

bool
ControlObject_operate(ControlObject* self, MmsValue* value)
{
    initialize(self);

    uint64_t currentTime = Hal_getTimeInMs();

    if (isSelected(self, currentTime)) {
        self->selectTime = currentTime;

        if (self->listener != NULL) {
            self->listener(self->listenerParameter, value);
        }

        return true;
    }

    return false;
}

bool
ControlObject_installListener(ControlObject* self, ControlHandler listener, void* parameter)
{
    self->listener = listener;
    self->listenerParameter = parameter;
}

ControlObject*
Control_lookupControlObject(MmsMapping* self, MmsDomain* domain, char* lnName, char* objectName)
{
    LinkedList element = LinkedList_getNext(self->controlObjects);

    while (element != NULL) {
        ControlObject* controlObject = (ControlObject*) element->data;

        if (ControlObject_getDomain(controlObject) == domain) {
            if (strcmp(ControlObject_getLNName(controlObject), lnName) == 0) {
                if (strcmp(ControlObject_getName(controlObject), objectName) == 0) {
                    return controlObject;
                }
            }
        }

        element = LinkedList_getNext(element);
    }

    return NULL;
}

static MmsValue*
getCtlVal(MmsValue* ctlParameters)
{
    if (ctlParameters->type == MMS_STRUCTURE) {
        if (ctlParameters->value.structure.size > 5) {
            return MmsValue_getElement(ctlParameters, 0);
        }
    }

    return NULL;
}


MmsValue*
Control_readAccessControlObject(MmsMapping* self, MmsDomain* domain, char* variableIdOrig)
{
    MmsValue* value = NULL;

    char* variableId = copyString(variableIdOrig);

    char* separator = strchr(variableId, '$');

    *separator = 0;

    char* lnName = variableId;

    if (lnName == NULL )
        return NULL;

    char* objectName = MmsMapping_getNextNameElement(separator + 1);

    if (objectName == NULL )
        return NULL;

    char* varName = MmsMapping_getNextNameElement(objectName);

    if (varName != NULL)
        *(varName - 1) = 0;

    ControlObject* controlObject = Control_lookupControlObject(self, domain, lnName, objectName);

    if (controlObject != NULL) {
        if (varName != NULL) {
            if (strcmp(varName, "Oper") == 0)
                value = ControlObject_getOper(controlObject);
            else if (strcmp(varName, "SBOw") == 0)
                value = ControlObject_getSBOw(controlObject);
            else if (strcmp(varName, "SBO") == 0) {
                if ((controlObject->ctlModel == 2) || (controlObject->ctlModel == 4)) {

                    if (ControlObject_select(controlObject)) {
                        value = ControlObject_getSBO(controlObject);
                    }
                    else {
                        value = emptyString;
                    }
                }
                else
                    value = NULL;
            }

            else if (strcmp(varName, "Cancel") == 0)
                value = ControlObject_getCancel(controlObject);
        }
        else
            value = ControlObject_getMmsValue(controlObject);
    }

    free(variableId);

    return value;
}


MmsValueIndication
Control_writeAccessControlObject(MmsMapping* self, MmsDomain* domain, char* variableIdOrig,
                         MmsValue* value)
{
    MmsValueIndication indication = MMS_VALUE_ACCESS_DENIED;

    char* variableId = copyString(variableIdOrig);

    char* separator = strchr(variableId, '$');

    *separator = 0;

    char* lnName = variableId;

    if (lnName == NULL )
        goto free_and_return;

    char* objectName = MmsMapping_getNextNameElement(separator + 1);

    if (objectName == NULL )
        goto free_and_return;

    char* varName = MmsMapping_getNextNameElement(objectName);

    if (varName != NULL)
        *(varName - 1) = 0;
    else
        goto free_and_return;

    ControlObject* controlObject = Control_lookupControlObject(self, domain, lnName, objectName);

    if (controlObject == NULL) {
        indication = MMS_VALUE_ACCESS_DENIED;
        goto free_and_return;
    }

    if (strcmp(varName, "SBOw") == 0) { /* select and operate */
        if (ControlObject_select(controlObject)) {
            MmsValue* ctlVal = getCtlVal(value);

            if (ctlVal != NULL) {
                if (ControlObject_operate(controlObject, ctlVal))
                    indication = MMS_VALUE_OK;
            }
        }
        else {
            //TODO send error message

        }
    }
    else if (strcmp(varName, "Oper") == 0) {
        MmsValue* ctlVal = getCtlVal(value);

        if (ctlVal != NULL) {
            if (ControlObject_operate(controlObject, ctlVal))
                indication = MMS_VALUE_OK;
        }
    }

free_and_return:
    free(variableId);

    return indication;
}
