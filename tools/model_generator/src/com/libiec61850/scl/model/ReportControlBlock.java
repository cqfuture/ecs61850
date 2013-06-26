package com.libiec61850.scl.model;

import org.w3c.dom.Node;

import com.libiec61850.scl.ParserUtils;
import com.libiec61850.scl.SclParserException;

public class ReportControlBlock {

	private String name;
	private String desc;
	private String dataSet;
	private Long integrityPeriod = null;
	private String rptID;
	private Long confRef = null;
	private boolean buffered = false;
	private long bufferTime = 0;
	private TriggerOptions triggerOptions = null;
	private OptionFields optionFields = null;
	
	public ReportControlBlock(Node reportControlNode) throws SclParserException {
	
		this.name = ParserUtils.parseAttribute(reportControlNode, "name");
		this.desc = ParserUtils.parseAttribute(reportControlNode, "desc");
		this.dataSet = ParserUtils.parseAttribute(reportControlNode, "datSet");
		String intgPdString = ParserUtils.parseAttribute(reportControlNode, "intgPd");
		
		if (intgPdString != null)
			this.integrityPeriod = new Long(intgPdString);
		
		this.rptID = ParserUtils.parseAttribute(reportControlNode, "rptID");
		
		if (this.rptID != null) {
			if (this.rptID.equals(""))
				this.rptID = null;
		}
		
		String confRefStr = ParserUtils.parseAttribute(reportControlNode, "confRev");
		
		if (confRefStr != null)
			this.confRef = new Long(confRefStr);
		else
			throw new SclParserException("Missing required attribute \"confRef\"");
		
		Boolean bufferedVal = ParserUtils.parseBooleanAttribute(reportControlNode, "buffered");
		
		if (bufferedVal != null)
				this.buffered = bufferedVal;
		
		String bufferTimeStr = ParserUtils.parseAttribute(reportControlNode, "bufTime");
		
		if (bufferTimeStr != null)
			this.bufferTime = new Long(bufferTimeStr);
				
		Node trgOpsNode = ParserUtils.getChildNodeWithTag(reportControlNode, "TrgOps");
		
		this.triggerOptions = new TriggerOptions(trgOpsNode);
		
		Node optFieldsNode = ParserUtils.getChildNodeWithTag(reportControlNode, "OptFields");
		
		this.optionFields = new OptionFields(optFieldsNode);
		
		
		Node rptEnabledNode = ParserUtils.getChildNodeWithTag(reportControlNode, "RptEnabled");
		
		
		//TODO parse RptEnabled tag element
	}

	public String getName() {
		return name;
	}

	public String getDesc() {
		return desc;
	}

	public String getDataSet() {
		return dataSet;
	}

	public Long getIntegrityPeriod() {
		return integrityPeriod;
	}

	public String getRptID() {
		return rptID;
	}

	public Long getConfRef() {
		return confRef;
	}

	public boolean isBuffered() {
		return buffered;
	}

	public long getBufferTime() {
		return bufferTime;
	}

	public TriggerOptions getTriggerOptions() {
		return triggerOptions;
	}

	public OptionFields getOptionFields() {
		return optionFields;
	}

	
	
}
