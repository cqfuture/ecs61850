package com.libiec61850.scl.model;

import com.libiec61850.scl.types.SclType;

public interface DataModelNode {
    public String getName();
    public DataModelNode getChildByName(String childName);
    public SclType getSclType();
}
