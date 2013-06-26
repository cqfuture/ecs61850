package com.libiec61850.scl.model;

import org.w3c.dom.Node;

import com.libiec61850.scl.ParserUtils;
import com.libiec61850.scl.SclParserException;

public class OptionFields {

	private boolean seqNum = false;
	private boolean timeStamp = false;
	private boolean dataSet = false;
	private boolean reasonCode = false;
	private boolean dataRef = false;
	private boolean entryID = false;
	private boolean configRef = false;
	private boolean bufOvfl = true;
	
	public OptionFields(Node optFieldsNode) throws SclParserException {
		Boolean boolVal; 
		
		boolVal = ParserUtils.parseBooleanAttribute(optFieldsNode, "seqNum");
		if (boolVal != null)
			this.seqNum = boolVal;
		
		boolVal = ParserUtils.parseBooleanAttribute(optFieldsNode, "timeStamp");
		if (boolVal != null)
			this.timeStamp = boolVal;
		
		boolVal = ParserUtils.parseBooleanAttribute(optFieldsNode, "dataSet");
		if (boolVal != null)
			this.dataSet = boolVal;
		
		boolVal = ParserUtils.parseBooleanAttribute(optFieldsNode, "reasonCode");
		if (boolVal != null)
			this.reasonCode = boolVal;
		
		boolVal = ParserUtils.parseBooleanAttribute(optFieldsNode, "dataRef");
		if (boolVal != null)
			this.dataRef = boolVal;
		
		boolVal = ParserUtils.parseBooleanAttribute(optFieldsNode, "entryID");
		if (boolVal != null)
			this.entryID = boolVal;
		
		boolVal = ParserUtils.parseBooleanAttribute(optFieldsNode, "bufOvfl");
		if (boolVal != null)
			this.configRef = boolVal;
		
		boolVal = ParserUtils.parseBooleanAttribute(optFieldsNode, "reasonCode");
		if (boolVal != null)
			this.bufOvfl = boolVal;
	}

	public boolean isSeqNum() {
		return seqNum;
	}

	public boolean isTimeStamp() {
		return timeStamp;
	}

	public boolean isDataSet() {
		return dataSet;
	}

	public boolean isReasonCode() {
		return reasonCode;
	}

	public boolean isDataRef() {
		return dataRef;
	}

	public boolean isEntryID() {
		return entryID;
	}

	public boolean isConfigRef() {
		return configRef;
	}

	public boolean isBufOvfl() {
		return bufOvfl;
	}
	
	
}
