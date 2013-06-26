package com.libiec61850.scl.communication;

import java.util.LinkedList;
import java.util.List;

import org.w3c.dom.Node;

import com.libiec61850.scl.ParserUtils;
import com.libiec61850.scl.SclParserException;

public class ConnectedAP {

    private String iedName;
    private String apName;
    
    private List<GSE> gses;
    
    public ConnectedAP(Node node) throws SclParserException {
        iedName = ParserUtils.parseAttribute(node, "iedName");
        apName = ParserUtils.parseAttribute(node, "apName");
        
        if ((iedName == null) || (apName == null))
            throw new SclParserException("ConnectedAP is missing required attribute");
        
        gses = new LinkedList<GSE>();
        
        List<Node> gseNodes = ParserUtils.getChildNodesWithTag(node, "GSE");
        
        for (Node gseNode : gseNodes) {
           gses.add(new GSE(gseNode)); 
        }
    }

    public String getIedName() {
        return iedName;
    }

    public String getApName() {
        return apName;
    }

    public List<GSE> getGses() {
        return gses;
    }
    
}
