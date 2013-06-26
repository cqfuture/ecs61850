package com.libiec61850.scl.model;

import org.w3c.dom.Node;

import com.libiec61850.scl.ParserUtils;
import com.libiec61850.scl.SclParserException;

public class TriggerOptions {
	
	private boolean dchg = false;
	private boolean qchg = false;
	private boolean dupd = false;
	private boolean period = false;
	private boolean gi = false;
	
	public TriggerOptions(Node trgOpsNode) throws SclParserException {
		
		Boolean dchgVal = ParserUtils.parseBooleanAttribute(trgOpsNode, "dchg");
		if (dchgVal != null)
			this.dchg = dchgVal;
		
		Boolean qchgVal = ParserUtils.parseBooleanAttribute(trgOpsNode, "qchg");
		if (qchgVal != null)
			this.qchg = qchgVal;
		
		Boolean dupdVal = ParserUtils.parseBooleanAttribute(trgOpsNode, "dupd");
		if (dupdVal != null)
			this.dupd = dupdVal;
		
		Boolean periodVal = ParserUtils.parseBooleanAttribute(trgOpsNode, "period");
		if (periodVal != null)
			this.period = periodVal;
		
		Boolean giVal = ParserUtils.parseBooleanAttribute(trgOpsNode, "gi");
		if (giVal != null)
			this.gi = giVal;
	}

	public boolean isDchg() {
		return dchg;
	}

	public boolean isQchg() {
		return qchg;
	}

	public boolean isDupd() {
		return dupd;
	}

	public boolean isPeriod() {
		return period;
	}

	public boolean isGi() {
		return gi;
	}
	
}
