package com.libiec61850.scl.communication;

import java.util.LinkedList;
import java.util.List;

import org.w3c.dom.Node;

import com.libiec61850.scl.ParserUtils;
import com.libiec61850.scl.SclParserException;

public class Communication {

    private List<SubNetwork> subNetworks;
    
    public Communication(Node comSection) throws SclParserException {
        List<Node> subnetworks = ParserUtils.getChildNodesWithTag(comSection, "SubNetwork");
        
        if (subnetworks.size() == 0)
            throw new SclParserException("no subnetworks defined");
        
        subNetworks = new LinkedList<SubNetwork>();
        
        for (Node node : subnetworks) {
            subNetworks.add(new SubNetwork(node));
        }
    }

    public List<SubNetwork> getSubNetworks() {
        return subNetworks;
    }

}
