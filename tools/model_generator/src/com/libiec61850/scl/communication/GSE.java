package com.libiec61850.scl.communication;

import org.w3c.dom.Node;

import com.libiec61850.scl.ParserUtils;
import com.libiec61850.scl.SclParserException;

public class GSE {

    private String ldInst;
    private String cbName;
    
    private GSEAddress address;
    
    public GSE(Node gseNode) throws SclParserException {
        ldInst = ParserUtils.parseAttribute(gseNode, "ldInst");
        cbName = ParserUtils.parseAttribute(gseNode, "cbName");
        
        if ((ldInst == null) || (cbName == null))
            throw new SclParserException("GSE is missing required attribute");
        
        Node addressNode = ParserUtils.getChildNodeWithTag(gseNode, "Address");
        
        if (addressNode == null)
            throw new SclParserException("GSE is missing address definition!");
        
        address = new GSEAddress(addressNode);
    }

    public String getLdInst() {
        return ldInst;
    }

    public String getCbName() {
        return cbName;
    }

    public GSEAddress getAddress() {
        return address;
    }

}
