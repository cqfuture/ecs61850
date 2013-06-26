package com.libiec61850.scl.communication;

import java.util.LinkedList;
import java.util.List;

import org.w3c.dom.Node;

import com.libiec61850.scl.ParserUtils;
import com.libiec61850.scl.SclParserException;

public class SubNetwork {

    private String name;
    private String type;
    
    private List<ConnectedAP> connectedAPs;
    
    public SubNetwork(Node netNode) throws SclParserException {
        name = ParserUtils.parseAttribute(netNode, "name");
        type = ParserUtils.parseAttribute(netNode, "type");
        
        if (name == null)
            throw new SclParserException("SubNetwork is missing attribute name!");
        
        connectedAPs = new LinkedList<ConnectedAP>();
        
        List<Node> nodes = ParserUtils.getChildNodesWithTag(netNode, "ConnectedAP");
        
        for (Node node : nodes) {
            connectedAPs.add(new ConnectedAP(node));
        }
    }

    public String getName() {
        return name;
    }

    public String getType() {
        return type;
    }

    public List<ConnectedAP> getConnectedAPs() {
        return connectedAPs;
    }
    
}
