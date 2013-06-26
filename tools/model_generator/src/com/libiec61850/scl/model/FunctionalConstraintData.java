package com.libiec61850.scl.model;

import org.w3c.dom.Node;

import com.libiec61850.scl.ParserUtils;
import com.libiec61850.scl.SclParserException;

public class FunctionalConstraintData {

	private String ldInstance = null;
	private String prefix = null;
	private String lnClass = null;
	private String lnInstance = null;
	private String doName = null;
	private String daName = null;
	private FunctionalConstraint fc = null;
	private Integer ix = null; /* array index */
	
	public FunctionalConstraintData(Node fcdaNode) throws SclParserException {
		this.ldInstance = ParserUtils.parseAttribute(fcdaNode, "ldInst");
		
		prefix = ParserUtils.parseAttribute(fcdaNode, "prefix");
		
		this.lnClass = ParserUtils.parseAttribute(fcdaNode, "lnClass");
		
		this.lnInstance= ParserUtils.parseAttribute(fcdaNode, "lnInst");
		
		this.doName = ParserUtils.parseAttribute(fcdaNode, "doName");
		this.daName = ParserUtils.parseAttribute(fcdaNode, "daName");
		
		String fc = ParserUtils.parseAttribute(fcdaNode, "fc");
		
		if (fc != null)
			this.fc = FunctionalConstraint.createFromString(fc);
		
		String index =  ParserUtils.parseAttribute(fcdaNode, "ix");
		
		if (index != null)
			this.ix = new Integer(index);
		
	}

	public String getLdInstance() {
		return ldInstance;
	}

	public String getLnClass() {
		return lnClass;
	}

	public String getLnInstance() {
		return lnInstance;
	}

	public String getDoName() {
		return doName;
	}

	public String getDaName() {
		return daName;
	}

	public FunctionalConstraint getFc() {
		return fc;
	}

	public Integer getIx() {
		return ix;
	}
	
	public String getPrefix() {
        return prefix;
    }

    @Override
	public String toString() {
		String string = "";
		
		if (ldInstance != null)
			string = ldInstance + "/";
		
		if (lnClass != null) {
		    
		    if (prefix != null)
		        string += prefix;
		    
			string += lnClass;
			if (lnInstance == null)
				string += ".";
		}
		
		if (lnInstance != null)
			string += lnInstance + ".";
		
		if (doName != null)
			string += doName;
		
		if (daName != null)
			string += "." + daName;
		
		return string;
	}
	
	
	
}
