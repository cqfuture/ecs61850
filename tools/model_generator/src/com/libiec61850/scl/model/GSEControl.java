package com.libiec61850.scl.model;

import org.w3c.dom.Node;

import com.libiec61850.scl.ParserUtils;
import com.libiec61850.scl.SclParserException;

public class GSEControl {
   
    private String name;
    private String desc = null;
    private String dataSet;
    private int confRev = 1;
    private String appID;
    private boolean fixedOffs = false;
    
    public GSEControl(Node gseControlNode) throws SclParserException {

        this.name = ParserUtils.parseAttribute(gseControlNode, "name");
        this.desc = ParserUtils.parseAttribute(gseControlNode, "desc");
        this.dataSet = ParserUtils.parseAttribute(gseControlNode, "datSet");
        
        String confRevString = ParserUtils.parseAttribute(gseControlNode, "confRev");
        
        if (confRevString != null)
            this.confRev = new Integer(confRevString);
        
        this.appID = ParserUtils.parseAttribute(gseControlNode, "appID");
        
       Boolean fixedOffs = ParserUtils.parseBooleanAttribute(gseControlNode, "fixedOffs");
       
       if (fixedOffs != null)
           this.fixedOffs = fixedOffs;
       
       String typeString = ParserUtils.parseAttribute(gseControlNode, "type");
       
       if (typeString != null) {
           if (!typeString.equals("GOOSE"))
               throw new SclParserException("GSEControl of type " + typeString + " not supported!");
       }
           
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

    public int getConfRev() {
        return confRev;
    }

    public String getAppID() {
        return appID;
    }

    public boolean isFixedOffs() {
        return fixedOffs;
    }
    
}
