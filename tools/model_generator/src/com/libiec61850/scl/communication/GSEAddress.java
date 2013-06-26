package com.libiec61850.scl.communication;

import java.util.List;

import org.w3c.dom.DOMException;
import org.w3c.dom.Node;

import com.libiec61850.scl.ParserUtils;
import com.libiec61850.scl.SclParserException;

public class GSEAddress {

    private Integer vlanId = null;
    private Integer vlanPriority = null;
    private Integer appId = null;
    private int[] macAddress = null;
    
    public GSEAddress(Node addressNode) throws DOMException, SclParserException {
        
       List<Node> pNodes = ParserUtils.getChildNodesWithTag(addressNode, "P");
       
       for (Node pNode : pNodes) {
           String type = ParserUtils.parseAttribute(pNode, "type");
           
           if (type.equals("VLAN-ID")) {
               vlanId = new Integer(pNode.getTextContent());
           }
           else if (type.equals("VLAN-PRIORITY")) {
               vlanPriority = new Integer(pNode.getTextContent());
           }
           else if (type.equals("APPID")) {
               appId = new Integer(pNode.getTextContent());
           }
           else if (type.equals("MAC-Address")) {
               String[] addressElements = pNode.getTextContent().split("-");
               
               if (addressElements.length != 6)
                   throw new SclParserException("malformed address " + pNode.getTextContent());
               
               macAddress = new int[6];
               
               for (int i = 0; i < addressElements.length; i++) {
                   macAddress[i] = Integer.parseInt(addressElements[i], 16);           
               }
           }

       }
       
       if ((vlanId == null) || (vlanPriority == null) || (appId == null) || (macAddress == null))
           throw new SclParserException("Address is missing required element");
       
    }

    public Integer getVlanId() {
        return vlanId;
    }

    public Integer getVlanPriority() {
        return vlanPriority;
    }

    public Integer getAppId() {
        return appId;
    }

    public int[] getMacAddress() {
        return macAddress;
    }
    
}
