<?xml version="1.0" encoding="UTF-8"?>
<SCL xmlns="http://www.iec.ch/61850/2003/SCL">
  <Header id="" nameStructure="IEDName" />
  <Communication>
    <SubNetwork name="subnetwork1" type="8-MMS">
      <Text>Station bus</Text>
      <BitRate unit="b/s">10</BitRate>
      <ConnectedAP iedName="IEDM1CPU" apName="accessPoint1">
        <Address>
          <P type="IP">10.0.0.3</P>
          <P type="IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY">10.0.0.101</P>
          <P type="OSI-TSEL">0001</P>
          <P type="OSI-PSEL">00000001</P>
          <P type="OSI-SSEL">0001</P>
        </Address>
      </ConnectedAP>
    </SubNetwork>
  </Communication>
  <IED name="IEDM1CPU">
    <Services>
      <DynAssociation />
      <GetDirectory />
      <GetDataObjectDefinition />
      <GetDataSetValue />
      <DataSetDirectory />
      <ReadWrite />
      <GetCBValues />
      <ConfLNs fixPrefix="true" fixLnInst="true" />
      <GOOSE max="5" />
      <GSSE max="5" />
      <FileHandling />
      <GSEDir />
      <TimerActivatedControl />
    </Services>
    <AccessPoint name="accessPoint1">
      <Server>
        <Authentication />
        <LDevice inst="Anlage">
          <LN0 lnClass="LLN0" lnType="LLN01" inst="">
            <DataSet name="Anlage_MV1" desc="15 minutes measured values">
              <FCDA ldInst="Anlage" lnClass="MHET" fc="MX" lnInst="1" doName="AccHeatOut" daName="instMag" />
              <FCDA ldInst="Anlage" lnClass="MHET" fc="MX" lnInst="1" doName="AccHeatOut" daName="t" />
              <FCDA ldInst="Anlage" lnClass="MHET" fc="MX" lnInst="2" doName="AccHeatOut" daName="instMag" />
              <FCDA ldInst="Anlage" lnClass="MHET" fc="MX" lnInst="2" doName="AccHeatOut" daName="t" />
              <FCDA ldInst="Anlage" lnClass="MHET" fc="MX" lnInst="3" doName="AccHeatOut" daName="instMag" />
              <FCDA ldInst="Anlage" lnClass="MHET" fc="MX" lnInst="3" doName="AccHeatOut" daName="t" />
              <FCDA ldInst="Anlage" lnClass="DCTS" fc="MX" lnInst="1" doName="ThrmCapTot" daName="instMag" />
              <FCDA ldInst="Anlage" lnClass="DCTS" fc="MX" lnInst="1" doName="ThrmCapTot" daName="t" />
              <FCDA ldInst="Anlage" lnClass="DCTS" fc="MX" lnInst="1" doName="ThrmCapPct" daName="instMag" />
              <FCDA ldInst="Anlage" lnClass="DCTS" fc="MX" lnInst="1" doName="ThrmCapPct" daName="t" />
              <FCDA ldInst="Anlage" lnClass="STMP" fc="MX" lnInst="1" doName="Tmp" daName="instMag" />
              <FCDA ldInst="Anlage" lnClass="STMP" fc="MX" lnInst="1" doName="Tmp" daName="t" />
              <FCDA ldInst="Anlage" lnClass="STMP" fc="MX" lnInst="2" doName="Tmp" daName="instMag" />
              <FCDA ldInst="Anlage" lnClass="STMP" fc="MX" lnInst="2" doName="Tmp" daName="t" />
              <FCDA ldInst="Anlage" lnClass="STMP" fc="MX" lnInst="3" doName="Tmp" daName="instMag" />
              <FCDA ldInst="Anlage" lnClass="STMP" fc="MX" lnInst="3" doName="Tmp" daName="t" />
              <FCDA ldInst="Anlage" lnClass="STMP" fc="MX" lnInst="4" doName="Tmp" daName="instMag" />
              <FCDA ldInst="Anlage" lnClass="STMP" fc="MX" lnInst="4" doName="Tmp" daName="t" />
              <FCDA ldInst="Anlage" lnClass="STMP" fc="MX" lnInst="5" doName="Tmp" daName="instMag" />
              <FCDA ldInst="Anlage" lnClass="STMP" fc="MX" lnInst="5" doName="Tmp" daName="t" />
            </DataSet>
            <DataSet name="Anlage_EV1" desc="Events">
              <FCDA ldInst="Anlage" lnClass="MENV" fc="ST" lnInst="1" doName="SmokAlm" daName="stVal" />
              <FCDA ldInst="Anlage" lnClass="MENV" fc="ST" lnInst="1" doName="SmokAlm" daName="t" />
              <FCDA ldInst="Anlage" lnClass="MENV" fc="ST" lnInst="1" doName="FloodAlm" daName="stVal" />
              <FCDA ldInst="Anlage" lnClass="MENV" fc="ST" lnInst="1" doName="FloodAlm" daName="t" />
            </DataSet>
            <ReportControl name="brcbMV1" confRev="1234" datSet="Anlage_MV1" rptID="Anlage$brcbMV1" buffered="true" intgPd="900000" bufTime="50">
              <TrgOps period="true" />
              <OptFields seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" entryID="true" configRef="true" />
              <RptEnabled max="1" />
            </ReportControl>
            <ReportControl name="brcbEV1" confRev="0" datSet="Anlage_EV1" rptID="Anlagebe$brcbEV1" buffered="true" intgPd="900000" bufTime="50" desc="events brcb buffered report">
              <TrgOps dchg="true" period="true" />
              <OptFields seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" entryID="true" configRef="true" />
              <RptEnabled max="1" />
            </ReportControl>
            <DOI name="Mod">
              <DAI name="ctlModel">
                <Val>status-only</Val>
              </DAI>
            </DOI>
          </LN0>
          <LN lnClass="LPHD" lnType="LPHD1" inst="1" prefix="" />
          <LN lnClass="MHET" lnType="MHET2" inst="1" prefix="">
            <DOI name="Mod">
              <DAI name="ctlModel">
                <Val>status-only</Val>
              </DAI>
            </DOI>
          </LN>
          <LN lnClass="MHET" lnType="MHET2" inst="2" prefix="">
            <DOI name="Mod">
              <DAI name="ctlModel">
                <Val>status-only</Val>
              </DAI>
            </DOI>
          </LN>
          <LN lnClass="MHET" lnType="MHET2" inst="3" prefix="">
            <DOI name="Mod">
              <DAI name="ctlModel">
                <Val>status-only</Val>
              </DAI>
            </DOI>
          </LN>
          <LN lnClass="DCTS" lnType="DCTS2" inst="1" prefix="">
            <DOI name="Mod">
              <DAI name="ctlModel">
                <Val>status-only</Val>
              </DAI>
            </DOI>
          </LN>
          <LN lnClass="STMP" lnType="STMP2" inst="1" prefix="">
            <DOI name="Mod">
              <DAI name="ctlModel">
                <Val>status-only</Val>
              </DAI>
            </DOI>
          </LN>
          <LN lnClass="STMP" lnType="STMP2" inst="2" prefix="">
            <DOI name="Mod">
              <DAI name="ctlModel">
                <Val>status-only</Val>
              </DAI>
            </DOI>
          </LN>
          <LN lnClass="STMP" lnType="STMP2" inst="3" prefix="">
            <DOI name="Mod">
              <DAI name="ctlModel">
                <Val>status-only</Val>
              </DAI>
            </DOI>
          </LN>
          <LN lnClass="STMP" lnType="STMP2" inst="4" prefix="">
            <DOI name="Mod">
              <DAI name="ctlModel">
                <Val>status-only</Val>
              </DAI>
            </DOI>
          </LN>
          <LN lnClass="STMP" lnType="STMP2" inst="5" prefix="">
            <DOI name="Mod">
              <DAI name="ctlModel">
                <Val>status-only</Val>
              </DAI>
            </DOI>
          </LN>
          <LN lnClass="MENV" lnType="MENV1" inst="1" prefix="">
            <DOI name="Mod">
              <DAI name="ctlModel">
                <Val>status-only</Val>
              </DAI>
            </DOI>
          </LN>
        </LDevice>
        <LDevice inst="BHKW">
          <LN0 lnClass="LLN0" lnType="LLN02" inst="">
            <DataSet name="BHKW_MV1" desc="15 minutes measured values">
              <FCDA ldInst="BHKW" lnClass="MMTR" fc="ST" lnInst="1" doName="TotWh" daName="actVal" />
              <FCDA ldInst="BHKW" lnClass="MMTR" fc="ST" lnInst="1" doName="TotWh" daName="t" />
              <FCDA ldInst="BHKW" lnClass="MMXU" fc="MX" lnInst="1" doName="TotW" daName="instMag" />
              <FCDA ldInst="BHKW" lnClass="MMXU" fc="MX" lnInst="1" doName="TotW" daName="t" />
              <FCDA ldInst="BHKW" lnClass="MFUL" fc="MX" lnInst="1" doName="AccTotFuel" daName="instMag" />
              <FCDA ldInst="BHKW" lnClass="MFUL" fc="MX" lnInst="1" doName="AccTotFuel" daName="t" />
              <FCDA ldInst="BHKW" lnClass="DCTS" fc="MX" lnInst="1" doName="ThrmCapTot" daName="instMag" />
              <FCDA ldInst="BHKW" lnClass="DCTS" fc="MX" lnInst="1" doName="ThrmCapTot" daName="t" />
              <FCDA ldInst="BHKW" lnClass="DCTS" fc="MX" lnInst="1" doName="ThrmCapPct" daName="instMag" />
              <FCDA ldInst="BHKW" lnClass="DCTS" fc="MX" lnInst="1" doName="ThrmCapPct" daName="t" />
              <FCDA ldInst="BHKW" lnClass="STMP" fc="MX" lnInst="1" doName="Tmp" daName="instMag" />
              <FCDA ldInst="BHKW" lnClass="STMP" fc="MX" lnInst="1" doName="Tmp" daName="t" />
              <FCDA ldInst="BHKW" lnClass="STMP" fc="MX" lnInst="2" doName="Tmp" daName="instMag" />
              <FCDA ldInst="BHKW" lnClass="STMP" fc="MX" lnInst="2" doName="Tmp" daName="t" />
              <FCDA ldInst="BHKW" lnClass="STMP" fc="MX" lnInst="3" doName="Tmp" daName="instMag" />
              <FCDA ldInst="BHKW" lnClass="STMP" fc="MX" lnInst="3" doName="Tmp" daName="t" />
              <FCDA ldInst="BHKW" lnClass="STMP" fc="MX" lnInst="4" doName="Tmp" daName="instMag" />
              <FCDA ldInst="BHKW" lnClass="STMP" fc="MX" lnInst="4" doName="Tmp" daName="t" />
              <FCDA ldInst="BHKW" lnClass="STMP" fc="MX" lnInst="5" doName="Tmp" daName="instMag" />
              <FCDA ldInst="BHKW" lnClass="STMP" fc="MX" lnInst="5" doName="Tmp" daName="t" />
            </DataSet>
            <DataSet name="BHKW_EV1" desc="Events">
              <FCDA ldInst="BHKW" lnClass="DRCS" fc="ST" lnInst="1" doName="ModOnConn" daName="stVal" />
              <FCDA ldInst="BHKW" lnClass="DRCS" fc="ST" lnInst="1" doName="ModOnConn" daName="t" />
              <FCDA ldInst="BHKW" lnClass="DRCS" fc="ST" lnInst="1" doName="ModOnAval" daName="stVal" />
              <FCDA ldInst="BHKW" lnClass="DRCS" fc="ST" lnInst="1" doName="ModOnAval" daName="t" />
              <FCDA ldInst="BHKW" lnClass="DRCS" fc="ST" lnInst="1" doName="ModOffAval" daName="stVal" />
              <FCDA ldInst="BHKW" lnClass="DRCS" fc="ST" lnInst="1" doName="ModOffAval" daName="t" />
              <FCDA ldInst="BHKW" lnClass="DRCS" fc="ST" lnInst="1" doName="ModOffUnav" daName="stVal" />
              <FCDA ldInst="BHKW" lnClass="DRCS" fc="ST" lnInst="1" doName="ModOffUnav" daName="t" />
            </DataSet>
            <ReportControl name="brcbEV1" confRev="1234" datSet="BHKW_EV1" rptID="brcbEV1" buffered="true" intgPd="900000" bufTime="50" desc="Events brcb buffered report">
              <TrgOps period="true" dchg="true" />
              <OptFields seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" entryID="true" configRef="true" />
              <RptEnabled max="1" />
            </ReportControl>
            <ReportControl name="brcbMV1" confRev="1234" datSet="BHKW_MV1" rptID="brcbMV1" buffered="true" intgPd="900000" bufTime="0" desc="15 minutes measured values brcb buffered report">
              <TrgOps period="true" />
              <OptFields seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" entryID="true" configRef="true" />
              <RptEnabled max="1" />
            </ReportControl>
            <DOI name="Mod">
              <DAI name="ctlModel">
                <Val>status-only</Val>
              </DAI>
            </DOI>
          </LN0>
          <LN lnClass="LPHD" lnType="LPHD2" inst="1" prefix="" />
          <LN lnClass="MMTR" lnType="MMTR1" inst="1" prefix="">
            <DOI name="Mod">
              <DAI name="ctlModel">
                <Val>status-only</Val>
              </DAI>
            </DOI>
          </LN>
          <LN lnClass="MMXU" lnType="MMXU1" inst="1" prefix="">
            <DOI name="Mod">
              <DAI name="ctlModel">
                <Val>status-only</Val>
              </DAI>
            </DOI>
          </LN>
          <LN lnClass="DCTS" lnType="DCTS1" inst="1" prefix="">
            <DOI name="Mod">
              <DAI name="ctlModel">
                <Val>status-only</Val>
              </DAI>
            </DOI>
          </LN>
          <LN lnClass="MHET" lnType="MHET1" inst="1" prefix="">
            <DOI name="Mod">
              <DAI name="ctlModel">
                <Val>status-only</Val>
              </DAI>
            </DOI>
          </LN>
          <LN lnClass="MFUL" lnType="MFUL1" inst="1" prefix="">
            <DOI name="Mod">
              <DAI name="ctlModel">
                <Val>status-only</Val>
              </DAI>
            </DOI>
          </LN>
          <LN lnClass="STMP" lnType="STMP1" inst="1" prefix="">
            <DOI name="Mod">
              <DAI name="ctlModel">
                <Val>status-only</Val>
              </DAI>
            </DOI>
          </LN>
          <LN lnClass="STMP" lnType="STMP1" inst="2" prefix="">
            <DOI name="Mod">
              <DAI name="ctlModel">
                <Val>status-only</Val>
              </DAI>
            </DOI>
          </LN>
          <LN lnClass="STMP" lnType="STMP1" inst="3" prefix="">
            <DOI name="Mod">
              <DAI name="ctlModel">
                <Val>status-only</Val>
              </DAI>
            </DOI>
          </LN>
          <LN lnClass="STMP" lnType="STMP1" inst="4" prefix="">
            <DOI name="Mod">
              <DAI name="ctlModel">
                <Val>status-only</Val>
              </DAI>
            </DOI>
          </LN>
          <LN lnClass="STMP" lnType="STMP1" inst="5" prefix="">
            <DOI name="Mod">
              <DAI name="ctlModel">
                <Val>status-only</Val>
              </DAI>
            </DOI>
          </LN>
          <LN lnClass="DRCS" lnType="DRCS1" inst="1" prefix="">
            <DOI name="Mod">
              <DAI name="ctlModel">
                <Val>status-only</Val>
              </DAI>
            </DOI>
          </LN>
          <LN lnClass="DSCH" lnType="DSCH1" inst="1" prefix="">
            <DOI name="Mod">
              <DAI name="ctlModel">
                <Val>status-only</Val>
              </DAI>
            </DOI>
          </LN>
          <LN lnClass="DRCC" lnType="DRCC1" inst="1" prefix="">
            <DOI name="Mod">
              <DAI name="ctlModel">
                <Val>status-only</Val>
              </DAI>
            </DOI>
            <DOI name="OutWSet">
              <DAI name="ctlModel">
                <Val>direct-with-enhanced-security</Val>
              </DAI>
            </DOI>
            <DOI name="DERStr">
              <DAI name="ctlModel">
                <Val>sbo-with-normal-security</Val>
              </DAI>
            </DOI>
            <DOI name="DERStop">
              <DAI name="ctlModel">
                <Val>sbo-with-normal-security</Val>
              </DAI>
            </DOI>
            <DOI name="AutoManCtl">
              <DAI name="ctlModel">
                <Val>sbo-with-normal-security</Val>
              </DAI>
            </DOI>
            <DOI name="LocRemCtl">
              <DAI name="ctlModel">
                <Val>sbo-with-normal-security</Val>
              </DAI>
            </DOI>
          </LN>
        </LDevice>
      </Server>
    </AccessPoint>
  </IED>
  <DataTypeTemplates>
    <LNodeType id="LLN01" lnClass="LLN0">
      <DO name="Mod" type="INC_1_Mod" />
      <DO name="Beh" type="INS_1_Beh" />
      <DO name="Health" type="INS_1_Beh" />
      <DO name="NamPlt" type="LPL_1_NamPlt" />
    </LNodeType>
    <LNodeType id="LPHD1" lnClass="LPHD">
      <DO name="PhyNam" type="DPL_1_PhyNam" />
      <DO name="PhyHealth" type="INS_1_Beh" />
      <DO name="Proxy" type="SPS_1_Proxy" />
    </LNodeType>
    <LNodeType id="LLN02" lnClass="LLN0">
      <DO name="Mod" type="INC_1_Mod" />
      <DO name="Beh" type="INS_1_Beh" />
      <DO name="Health" type="INS_1_Beh" />
      <DO name="NamPlt" type="LPL_1_NamPlt" />
    </LNodeType>
    <LNodeType id="LPHD2" lnClass="LPHD">
      <DO name="PhyNam" type="DPL_1_PhyNam" />
      <DO name="PhyHealth" type="INS_1_Beh" />
      <DO name="Proxy" type="SPS_1_Proxy" />
    </LNodeType>
    <LNodeType id="MMTR1" lnClass="MMTR">
      <DO name="Mod" type="INC_1_Mod" />
      <DO name="Beh" type="INS_1_Beh" />
      <DO name="Health" type="INS_1_Beh" />
      <DO name="NamPlt" type="LPL_2_NamPlt" />
      <DO name="TotWh" type="BCR_1_TotWh" />
    </LNodeType>
    <LNodeType id="MMXU1" lnClass="MMXU">
      <DO name="Mod" type="INC_1_Mod" />
      <DO name="Beh" type="INS_1_Beh" />
      <DO name="Health" type="INS_1_Beh" />
      <DO name="NamPlt" type="LPL_2_NamPlt" />
      <DO name="TotW" type="MV_1_Tmp" />
    </LNodeType>
    <LNodeType id="DCTS1" lnClass="DCTS">
      <DO name="Mod" type="ENC_1_Mod" />
      <DO name="Beh" type="ENS_1_Beh" />
      <DO name="Health" type="ENS_1_Beh" />
      <DO name="NamPlt" type="LPL_2_NamPlt" />
      <DO name="ThrmStoTyp" type="ENG_1_ThrmStoTyp" />
      <DO name="ThrmCapTot" type="MV_1_Tmp" />
      <DO name="ThrmCapPct" type="MV_1_Tmp" />
    </LNodeType>
    <LNodeType id="MHET1" lnClass="MHET">
      <DO name="Mod" type="ENC_1_Mod" />
      <DO name="Beh" type="ENS_1_Beh" />
      <DO name="Health" type="ENS_1_Beh" />
      <DO name="NamPlt" type="LPL_2_NamPlt" />
      <DO name="MatTyp" type="ENG_1_ThrmStoTyp" />
      <DO name="AccHeatOut" type="MV_1_Tmp" />
    </LNodeType>
    <LNodeType id="MFUL1" lnClass="MFUL">
      <DO name="Mod" type="ENC_1_Mod" />
      <DO name="Beh" type="ENS_1_Beh" />
      <DO name="Health" type="ENS_1_Beh" />
      <DO name="NamPlt" type="LPL_2_NamPlt" />
      <DO name="FuelTyp" type="ENG_1_ThrmStoTyp" />
      <DO name="AccTotFuel" type="MV_1_Tmp" />
    </LNodeType>
    <LNodeType id="STMP1" lnClass="STMP">
      <DO name="Mod" type="ENC_1_Mod" />
      <DO name="Beh" type="ENS_1_Beh" />
      <DO name="Health" type="ENS_1_Beh" />
      <DO name="NamPlt" type="LPL_2_NamPlt" />
      <DO name="Tmp" type="MV_1_Tmp" />
    </LNodeType>
    <LNodeType id="DRCS1" lnClass="DRCS">
      <DO name="Mod" type="ENC_1_Mod" />
      <DO name="Beh" type="ENS_1_Beh" />
      <DO name="Health" type="ENS_1_Beh" />
      <DO name="NamPlt" type="LPL_2_NamPlt" />
      <DO name="OpTmh" type="INS_1_Beh" />
      <DO name="ECPConn" type="SPS_1_Proxy" />
      <DO name="AutoMan" type="SPS_1_Proxy" />
      <DO name="Loc" type="SPS_1_Proxy" />
      <DO name="ModOnConn" type="SPS_1_Proxy" />
      <DO name="ModOnAval" type="SPS_1_Proxy" />
      <DO name="ModOffAval" type="SPS_1_Proxy" />
      <DO name="ModOffUnav" type="SPS_1_Proxy" />
    </LNodeType>
    <LNodeType id="MHET2" lnClass="MHET">
      <DO name="Mod" type="ENC_1_Mod" />
      <DO name="Beh" type="ENS_1_Beh" />
      <DO name="Health" type="ENS_1_Beh" />
      <DO name="NamPlt" type="LPL_2_NamPlt" />
      <DO name="MatTyp" type="ENG_1_ThrmStoTyp" />
      <DO name="AccHeatOut" type="MV_1_Tmp" />
    </LNodeType>
    <LNodeType id="DCTS2" lnClass="DCTS">
      <DO name="Mod" type="ENC_1_Mod" />
      <DO name="Beh" type="ENS_1_Beh" />
      <DO name="Health" type="ENS_1_Beh" />
      <DO name="NamPlt" type="LPL_2_NamPlt" />
      <DO name="ThrmStoTyp" type="ENG_1_ThrmStoTyp" />
      <DO name="ThrmCapTot" type="MV_1_Tmp" />
      <DO name="ThrmCapPct" type="MV_1_Tmp" />
    </LNodeType>
    <LNodeType id="STMP2" lnClass="STMP">
      <DO name="Mod" type="ENC_1_Mod" />
      <DO name="Beh" type="ENS_1_Beh" />
      <DO name="Health" type="ENS_1_Beh" />
      <DO name="NamPlt" type="LPL_2_NamPlt" />
      <DO name="Tmp" type="MV_1_Tmp" />
    </LNodeType>
    <LNodeType id="MENV1" lnClass="MENV">
      <DO name="Mod" type="ENC_1_Mod" />
      <DO name="Beh" type="ENS_1_Beh" />
      <DO name="Health" type="ENS_1_Beh" />
      <DO name="NamPlt" type="LPL_2_NamPlt" />
      <DO name="SmokAlm" type="SPS_1_Proxy" />
      <DO name="FloodAlm" type="SPS_1_Proxy" />
    </LNodeType>
    <LNodeType id="DSCH1" lnClass="DSCH">
      <DO name="Mod" type="ENC_1_Mod" />
      <DO name="Beh" type="ENS_1_Beh" />
      <DO name="Health" type="ENS_1_Beh" />
      <DO name="NamPlt" type="LPL_2_NamPlt" />
      <DO name="SchdSt" type="INS_1_Beh" />
      <DO name="SchdId" type="ING_1_SchdId" />
      <DO name="SchdCat" type="ING_1_SchdId" />
      <DO name="SchdTyp" type="ING_1_SchdId" />
      <DO name="SchdAbsTm" type="SCA_1_SchdAbsTm" />
    </LNodeType>
    <LNodeType id="DRCC1" lnClass="DRCC">
      <DO name="Mod" type="ENC_2_Mod" />
      <DO name="Beh" type="ENS_1_Beh" />
      <DO name="Health" type="ENS_1_Beh" />
      <DO name="NamPlt" type="LPL_2_NamPlt" />
      <DO name="OutWSet" type="APC_1_OutWSet" />
      <DO name="DERStr" type="SPC_2_DERStr" />
      <DO name="DERStop" type="SPC_1_DERStop" />
      <DO name="AutoManCtl" type="SPC_1_AutoManCtl" />
      <DO name="LocRemCtl" type="SPC_1_DERStr" />
    </LNodeType>
    <DOType id="INC_1_Mod" cdc="INC">
      <DA name="q" bType="Quality" fc="ST" qchg="true" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="ctlModel" type="CtlModels" bType="Enum" fc="CF" />
    </DOType>
    <DOType id="INS_1_Beh" cdc="INS">
      <DA name="stVal" bType="INT32" fc="ST" dchg="true" />
      <DA name="q" bType="Quality" fc="ST" qchg="true" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="LPL_1_NamPlt" cdc="LPL">
      <DA name="vendor" bType="VisString255" fc="DC" />
      <DA name="swRev" bType="VisString255" fc="DC" />
      <DA name="d" bType="VisString255" fc="DC" />
      <DA name="configRev" bType="VisString255" fc="DC" />
      <DA name="ldNs" bType="VisString255" fc="EX" />
    </DOType>
    <DOType id="DPL_1_PhyNam" cdc="DPL">
      <DA name="vendor" bType="VisString255" fc="DC" />
    </DOType>
    <DOType id="SPS_1_Proxy" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" dchg="true" />
      <DA name="q" bType="Quality" fc="ST" qchg="true" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="LPL_2_NamPlt" cdc="LPL">
      <DA name="vendor" bType="VisString255" fc="DC" />
      <DA name="swRev" bType="VisString255" fc="DC" />
      <DA name="d" bType="VisString255" fc="DC" />
    </DOType>
    <DOType id="BCR_1_TotWh" cdc="BCR">
      <DA name="actVal" bType="INT64" fc="ST" dchg="true" />
      <DA name="q" bType="Quality" fc="ST" qchg="true" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="pulsQty" bType="FLOAT32" fc="CF" />
    </DOType>
    <DOType id="ING_1_SchdId" cdc="ING" />
    <DOType id="ENC_1_Mod" cdc="ENC">
      <DA name="q" bType="Quality" fc="ST" qchg="true" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="ctlModel" type="CtlModels" bType="Enum" fc="CF" />
    </DOType>
    <DOType id="ENS_1_Beh" cdc="ENS">
      <DA name="stVal" bType="INT32" fc="ST" dchg="true" />
      <DA name="q" bType="Quality" fc="ST" qchg="true" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENG_1_ThrmStoTyp" cdc="ENG" />
    <DOType id="MV_1_Tmp" cdc="MV">
      <DA name="instMag" type="AnalogueValue_1" bType="Struct" fc="MX" />
      <DA name="mag" type="AnalogueValue_1" bType="Struct" fc="MX" dchg="true" />
      <DA name="q" bType="Quality" fc="MX" qchg="true" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="SCA_1_SchdAbsTm" cdc="SCA">
      <DA name="numPts" bType="INT16U" fc="SP" />
      <DA name="val" bType="FLOAT32" count="255" fc="SP" dchg="true" />
      <DA name="time" bType="Timestamp" count="255" fc="SP" dchg="true" />
    </DOType>
    <DOType id="SPC_1_DERStr" cdc="SPC">
      <DA name="q" bType="Quality" fc="ST" qchg="true" />
      <DA name="Oper" type="SPCOperate_1" bType="Struct" fc="CO" />
      <DA name="ctlModel" type="CtlModels" bType="Enum" fc="CF" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="SBO" bType="VisString64" fc="CO" />
      <DA name="Cancel" type="SPCCancel_1" bType="Struct" fc="CO" />
    </DOType>
    <DOType id="APC_1_OutWSet" cdc="APC">
      <DA name="q" bType="Quality" fc="MX" qchg="true" />
      <DA name="t" bType="Timestamp" fc="MX" />
      <DA name="ctlModel" type="CtlModels" bType="Enum" fc="CF" />
      <DA name="Oper" type="APCOperate_1" bType="Struct" fc="SP" />
      <DA name="Cancel" type="APCCancel_1" bType="Struct" fc="SP" />
    </DOType>
    <DOType id="ENC_2_Mod" cdc="ENC">
      <DA name="q" bType="Quality" fc="ST" qchg="true" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="ctlModel" type="CtlModels" bType="Enum" fc="CF" />
    </DOType>
    <DOType id="SPC_2_DERStr" cdc="SPC">
      <DA name="q" bType="Quality" fc="ST" qchg="true" />
      <DA name="Oper" type="SPCOperate_1" bType="Struct" fc="CO" />
      <DA name="ctlModel" type="CtlModels" bType="Enum" fc="CF" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="SBO" bType="VisString64" fc="CO" />
      <DA name="Cancel" type="SPCCancel_1" bType="Struct" fc="CO" />
    </DOType>
    <DOType id="SPC_1_DERStop" cdc="SPC">
      <DA name="q" bType="Quality" fc="ST" qchg="true" />
      <DA name="Oper" type="SPCOperate_1" bType="Struct" fc="CO" />
      <DA name="ctlModel" type="CtlModels" bType="Enum" fc="CF" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="SBO" bType="VisString64" fc="CO" />
      <DA name="Cancel" type="SPCCancel_1" bType="Struct" fc="CO" />
    </DOType>
    <DOType id="SPC_1_AutoManCtl" cdc="SPC">
      <DA name="q" bType="Quality" fc="ST" qchg="true" />
      <DA name="Oper" type="SPCOperate_1" bType="Struct" fc="CO" />
      <DA name="ctlModel" type="CtlModels" bType="Enum" fc="CF" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="Cancel" type="SPCCancel_1" bType="Struct" fc="CO" />
      <DA name="SBO" bType="VisString64" fc="CO" />
    </DOType>
    <DAType id="AnalogueValue_1">
      <BDA name="f" bType="FLOAT32" />
    </DAType>
    <DAType id="APCCancel_1">
      <BDA name="setMag" type="AnalogueValue_1" bType="Struct" />
      <BDA name="origin" type="Originator_1" bType="Struct" />
      <BDA name="T" bType="Timestamp" />
      <BDA name="Test" bType="BOOLEAN" />
    </DAType>
    <DAType id="Originator_1">
      <BDA name="orCat" type="OrCat" bType="Enum" />
      <BDA name="orIdent" bType="Octet64" />
    </DAType>
    <DAType id="APCOperate_1">
      <BDA name="setMag" type="AnalogueValue_1" bType="Struct" />
      <BDA name="origin" type="Originator_1" bType="Struct" />
      <BDA name="T" bType="Timestamp" />
      <BDA name="Test" bType="BOOLEAN" />
      <BDA name="Check" bType="Check" />
    </DAType>
    <DAType id="SPCOperate_1">
      <BDA name="ctlVal" bType="BOOLEAN" />
      <BDA name="origin" type="Originator_1" bType="Struct" />
      <BDA name="ctlNum" bType="INT8U" />
      <BDA name="T" bType="Timestamp" />
      <BDA name="Test" bType="BOOLEAN" />
      <BDA name="Check" bType="Check" />
    </DAType>
    <DAType id="SPCCancel_1">
      <BDA name="ctlVal" bType="BOOLEAN" />
      <BDA name="origin" type="Originator_1" bType="Struct" />
      <BDA name="ctlNum" bType="INT8U" />
      <BDA name="T" bType="Timestamp" />
      <BDA name="Test" bType="BOOLEAN" />
    </DAType>
    <EnumType id="CtlModels">
      <EnumVal ord="0">status-only</EnumVal>
      <EnumVal ord="1">direct-with-normal-security</EnumVal>
      <EnumVal ord="2">sbo-with-normal-security</EnumVal>
      <EnumVal ord="3">direct-with-enhanced-security</EnumVal>
      <EnumVal ord="4">sbo-with-enhanced-security</EnumVal>
    </EnumType>
    <EnumType id="OrCat">
      <EnumVal ord="0">not-supported</EnumVal>
      <EnumVal ord="1">bay-control</EnumVal>
      <EnumVal ord="2">station-control</EnumVal>
      <EnumVal ord="3">remote-control</EnumVal>
      <EnumVal ord="4">automatic-bay</EnumVal>
      <EnumVal ord="5">automatic-station</EnumVal>
      <EnumVal ord="6">automatic-remote</EnumVal>
      <EnumVal ord="7">maintenance</EnumVal>
      <EnumVal ord="8">process</EnumVal>
    </EnumType>
  </DataTypeTemplates>
</SCL>
