package com.libiec61850.scl.model;

import com.libiec61850.scl.types.EnumerationType;
import com.libiec61850.scl.types.IllegalValueException;
import com.libiec61850.scl.types.SclType;

public class DataModelValue {

    private Object value = null;
    
    public DataModelValue(AttributeType type, SclType sclType, String value) throws IllegalValueException {
        switch (type) {
        case ENUMERATED:
            EnumerationType enumType = (EnumerationType) sclType;
            this.value = (Object) (new Integer(enumType.getOrdByEnumString(value)));
            break;
        case INT32:
        case INT32U:
        case INT64:
            this.value = new Long(value);
            break;
        case BOOLEAN:
            if (value.toLowerCase().equals("true"))
                this.value = new Boolean(true);
            else
                this.value = new Boolean(false);
            break;
            
        case VISIBLE_STRING_255:
            this.value = (Object) value;
            break;
        default:
            throw new IllegalValueException("Unsupported type " + type.toString());
        }
    }
    
    public Object getValue() {
        return value;
    }
    
    public long getLongValue() {
        return (Long) value;
    }
    
    public int getIntValue() {
        return (Integer) value;
    }
    
}
