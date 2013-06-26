/*
 * static_model.c
 *
 * automatically generated from VHP_Ready_3_0_dc_sbo.scd
 */
#include <stdlib.h>
#include "model.h"

IedModel iedModel;
static DataSet* datasets[];
static ReportControlBlock* reportControlBlocks[];
static GSEControlBlock* gseControlBlocks[];
static void initializeValues();
LogicalDevice iedModel_Anlage;
LogicalNode   iedModel_Anlage_LLN0;
DataObject    iedModel_Anlage_LLN0_Mod;
DataAttribute iedModel_Anlage_LLN0_Mod_q;
DataAttribute iedModel_Anlage_LLN0_Mod_t;
DataAttribute iedModel_Anlage_LLN0_Mod_ctlModel;
DataObject    iedModel_Anlage_LLN0_Beh;
DataAttribute iedModel_Anlage_LLN0_Beh_stVal;
DataAttribute iedModel_Anlage_LLN0_Beh_q;
DataAttribute iedModel_Anlage_LLN0_Beh_t;
DataObject    iedModel_Anlage_LLN0_Health;
DataAttribute iedModel_Anlage_LLN0_Health_stVal;
DataAttribute iedModel_Anlage_LLN0_Health_q;
DataAttribute iedModel_Anlage_LLN0_Health_t;
DataObject    iedModel_Anlage_LLN0_NamPlt;
DataAttribute iedModel_Anlage_LLN0_NamPlt_vendor;
DataAttribute iedModel_Anlage_LLN0_NamPlt_swRev;
DataAttribute iedModel_Anlage_LLN0_NamPlt_d;
DataAttribute iedModel_Anlage_LLN0_NamPlt_configRev;
DataAttribute iedModel_Anlage_LLN0_NamPlt_ldNs;
LogicalNode   iedModel_Anlage_LPHD1;
DataObject    iedModel_Anlage_LPHD1_PhyNam;
DataAttribute iedModel_Anlage_LPHD1_PhyNam_vendor;
DataObject    iedModel_Anlage_LPHD1_PhyHealth;
DataAttribute iedModel_Anlage_LPHD1_PhyHealth_stVal;
DataAttribute iedModel_Anlage_LPHD1_PhyHealth_q;
DataAttribute iedModel_Anlage_LPHD1_PhyHealth_t;
DataObject    iedModel_Anlage_LPHD1_Proxy;
DataAttribute iedModel_Anlage_LPHD1_Proxy_stVal;
DataAttribute iedModel_Anlage_LPHD1_Proxy_q;
DataAttribute iedModel_Anlage_LPHD1_Proxy_t;
LogicalNode   iedModel_Anlage_MHET1;
DataObject    iedModel_Anlage_MHET1_Mod;
DataAttribute iedModel_Anlage_MHET1_Mod_q;
DataAttribute iedModel_Anlage_MHET1_Mod_t;
DataAttribute iedModel_Anlage_MHET1_Mod_ctlModel;
DataObject    iedModel_Anlage_MHET1_Beh;
DataAttribute iedModel_Anlage_MHET1_Beh_stVal;
DataAttribute iedModel_Anlage_MHET1_Beh_q;
DataAttribute iedModel_Anlage_MHET1_Beh_t;
DataObject    iedModel_Anlage_MHET1_Health;
DataAttribute iedModel_Anlage_MHET1_Health_stVal;
DataAttribute iedModel_Anlage_MHET1_Health_q;
DataAttribute iedModel_Anlage_MHET1_Health_t;
DataObject    iedModel_Anlage_MHET1_NamPlt;
DataAttribute iedModel_Anlage_MHET1_NamPlt_vendor;
DataAttribute iedModel_Anlage_MHET1_NamPlt_swRev;
DataAttribute iedModel_Anlage_MHET1_NamPlt_d;
DataObject    iedModel_Anlage_MHET1_MatTyp;
DataObject    iedModel_Anlage_MHET1_AccHeatOut;
DataAttribute iedModel_Anlage_MHET1_AccHeatOut_instMag;
DataAttribute iedModel_Anlage_MHET1_AccHeatOut_instMag_f;
DataAttribute iedModel_Anlage_MHET1_AccHeatOut_mag;
DataAttribute iedModel_Anlage_MHET1_AccHeatOut_mag_f;
DataAttribute iedModel_Anlage_MHET1_AccHeatOut_q;
DataAttribute iedModel_Anlage_MHET1_AccHeatOut_t;
LogicalNode   iedModel_Anlage_MHET2;
DataObject    iedModel_Anlage_MHET2_Mod;
DataAttribute iedModel_Anlage_MHET2_Mod_q;
DataAttribute iedModel_Anlage_MHET2_Mod_t;
DataAttribute iedModel_Anlage_MHET2_Mod_ctlModel;
DataObject    iedModel_Anlage_MHET2_Beh;
DataAttribute iedModel_Anlage_MHET2_Beh_stVal;
DataAttribute iedModel_Anlage_MHET2_Beh_q;
DataAttribute iedModel_Anlage_MHET2_Beh_t;
DataObject    iedModel_Anlage_MHET2_Health;
DataAttribute iedModel_Anlage_MHET2_Health_stVal;
DataAttribute iedModel_Anlage_MHET2_Health_q;
DataAttribute iedModel_Anlage_MHET2_Health_t;
DataObject    iedModel_Anlage_MHET2_NamPlt;
DataAttribute iedModel_Anlage_MHET2_NamPlt_vendor;
DataAttribute iedModel_Anlage_MHET2_NamPlt_swRev;
DataAttribute iedModel_Anlage_MHET2_NamPlt_d;
DataObject    iedModel_Anlage_MHET2_MatTyp;
DataObject    iedModel_Anlage_MHET2_AccHeatOut;
DataAttribute iedModel_Anlage_MHET2_AccHeatOut_instMag;
DataAttribute iedModel_Anlage_MHET2_AccHeatOut_instMag_f;
DataAttribute iedModel_Anlage_MHET2_AccHeatOut_mag;
DataAttribute iedModel_Anlage_MHET2_AccHeatOut_mag_f;
DataAttribute iedModel_Anlage_MHET2_AccHeatOut_q;
DataAttribute iedModel_Anlage_MHET2_AccHeatOut_t;
LogicalNode   iedModel_Anlage_MHET3;
DataObject    iedModel_Anlage_MHET3_Mod;
DataAttribute iedModel_Anlage_MHET3_Mod_q;
DataAttribute iedModel_Anlage_MHET3_Mod_t;
DataAttribute iedModel_Anlage_MHET3_Mod_ctlModel;
DataObject    iedModel_Anlage_MHET3_Beh;
DataAttribute iedModel_Anlage_MHET3_Beh_stVal;
DataAttribute iedModel_Anlage_MHET3_Beh_q;
DataAttribute iedModel_Anlage_MHET3_Beh_t;
DataObject    iedModel_Anlage_MHET3_Health;
DataAttribute iedModel_Anlage_MHET3_Health_stVal;
DataAttribute iedModel_Anlage_MHET3_Health_q;
DataAttribute iedModel_Anlage_MHET3_Health_t;
DataObject    iedModel_Anlage_MHET3_NamPlt;
DataAttribute iedModel_Anlage_MHET3_NamPlt_vendor;
DataAttribute iedModel_Anlage_MHET3_NamPlt_swRev;
DataAttribute iedModel_Anlage_MHET3_NamPlt_d;
DataObject    iedModel_Anlage_MHET3_MatTyp;
DataObject    iedModel_Anlage_MHET3_AccHeatOut;
DataAttribute iedModel_Anlage_MHET3_AccHeatOut_instMag;
DataAttribute iedModel_Anlage_MHET3_AccHeatOut_instMag_f;
DataAttribute iedModel_Anlage_MHET3_AccHeatOut_mag;
DataAttribute iedModel_Anlage_MHET3_AccHeatOut_mag_f;
DataAttribute iedModel_Anlage_MHET3_AccHeatOut_q;
DataAttribute iedModel_Anlage_MHET3_AccHeatOut_t;
LogicalNode   iedModel_Anlage_DCTS1;
DataObject    iedModel_Anlage_DCTS1_Mod;
DataAttribute iedModel_Anlage_DCTS1_Mod_q;
DataAttribute iedModel_Anlage_DCTS1_Mod_t;
DataAttribute iedModel_Anlage_DCTS1_Mod_ctlModel;
DataObject    iedModel_Anlage_DCTS1_Beh;
DataAttribute iedModel_Anlage_DCTS1_Beh_stVal;
DataAttribute iedModel_Anlage_DCTS1_Beh_q;
DataAttribute iedModel_Anlage_DCTS1_Beh_t;
DataObject    iedModel_Anlage_DCTS1_Health;
DataAttribute iedModel_Anlage_DCTS1_Health_stVal;
DataAttribute iedModel_Anlage_DCTS1_Health_q;
DataAttribute iedModel_Anlage_DCTS1_Health_t;
DataObject    iedModel_Anlage_DCTS1_NamPlt;
DataAttribute iedModel_Anlage_DCTS1_NamPlt_vendor;
DataAttribute iedModel_Anlage_DCTS1_NamPlt_swRev;
DataAttribute iedModel_Anlage_DCTS1_NamPlt_d;
DataObject    iedModel_Anlage_DCTS1_ThrmStoTyp;
DataObject    iedModel_Anlage_DCTS1_ThrmCapTot;
DataAttribute iedModel_Anlage_DCTS1_ThrmCapTot_instMag;
DataAttribute iedModel_Anlage_DCTS1_ThrmCapTot_instMag_f;
DataAttribute iedModel_Anlage_DCTS1_ThrmCapTot_mag;
DataAttribute iedModel_Anlage_DCTS1_ThrmCapTot_mag_f;
DataAttribute iedModel_Anlage_DCTS1_ThrmCapTot_q;
DataAttribute iedModel_Anlage_DCTS1_ThrmCapTot_t;
DataObject    iedModel_Anlage_DCTS1_ThrmCapPct;
DataAttribute iedModel_Anlage_DCTS1_ThrmCapPct_instMag;
DataAttribute iedModel_Anlage_DCTS1_ThrmCapPct_instMag_f;
DataAttribute iedModel_Anlage_DCTS1_ThrmCapPct_mag;
DataAttribute iedModel_Anlage_DCTS1_ThrmCapPct_mag_f;
DataAttribute iedModel_Anlage_DCTS1_ThrmCapPct_q;
DataAttribute iedModel_Anlage_DCTS1_ThrmCapPct_t;
LogicalNode   iedModel_Anlage_STMP1;
DataObject    iedModel_Anlage_STMP1_Mod;
DataAttribute iedModel_Anlage_STMP1_Mod_q;
DataAttribute iedModel_Anlage_STMP1_Mod_t;
DataAttribute iedModel_Anlage_STMP1_Mod_ctlModel;
DataObject    iedModel_Anlage_STMP1_Beh;
DataAttribute iedModel_Anlage_STMP1_Beh_stVal;
DataAttribute iedModel_Anlage_STMP1_Beh_q;
DataAttribute iedModel_Anlage_STMP1_Beh_t;
DataObject    iedModel_Anlage_STMP1_Health;
DataAttribute iedModel_Anlage_STMP1_Health_stVal;
DataAttribute iedModel_Anlage_STMP1_Health_q;
DataAttribute iedModel_Anlage_STMP1_Health_t;
DataObject    iedModel_Anlage_STMP1_NamPlt;
DataAttribute iedModel_Anlage_STMP1_NamPlt_vendor;
DataAttribute iedModel_Anlage_STMP1_NamPlt_swRev;
DataAttribute iedModel_Anlage_STMP1_NamPlt_d;
DataObject    iedModel_Anlage_STMP1_Tmp;
DataAttribute iedModel_Anlage_STMP1_Tmp_instMag;
DataAttribute iedModel_Anlage_STMP1_Tmp_instMag_f;
DataAttribute iedModel_Anlage_STMP1_Tmp_mag;
DataAttribute iedModel_Anlage_STMP1_Tmp_mag_f;
DataAttribute iedModel_Anlage_STMP1_Tmp_q;
DataAttribute iedModel_Anlage_STMP1_Tmp_t;
LogicalNode   iedModel_Anlage_STMP2;
DataObject    iedModel_Anlage_STMP2_Mod;
DataAttribute iedModel_Anlage_STMP2_Mod_q;
DataAttribute iedModel_Anlage_STMP2_Mod_t;
DataAttribute iedModel_Anlage_STMP2_Mod_ctlModel;
DataObject    iedModel_Anlage_STMP2_Beh;
DataAttribute iedModel_Anlage_STMP2_Beh_stVal;
DataAttribute iedModel_Anlage_STMP2_Beh_q;
DataAttribute iedModel_Anlage_STMP2_Beh_t;
DataObject    iedModel_Anlage_STMP2_Health;
DataAttribute iedModel_Anlage_STMP2_Health_stVal;
DataAttribute iedModel_Anlage_STMP2_Health_q;
DataAttribute iedModel_Anlage_STMP2_Health_t;
DataObject    iedModel_Anlage_STMP2_NamPlt;
DataAttribute iedModel_Anlage_STMP2_NamPlt_vendor;
DataAttribute iedModel_Anlage_STMP2_NamPlt_swRev;
DataAttribute iedModel_Anlage_STMP2_NamPlt_d;
DataObject    iedModel_Anlage_STMP2_Tmp;
DataAttribute iedModel_Anlage_STMP2_Tmp_instMag;
DataAttribute iedModel_Anlage_STMP2_Tmp_instMag_f;
DataAttribute iedModel_Anlage_STMP2_Tmp_mag;
DataAttribute iedModel_Anlage_STMP2_Tmp_mag_f;
DataAttribute iedModel_Anlage_STMP2_Tmp_q;
DataAttribute iedModel_Anlage_STMP2_Tmp_t;
LogicalNode   iedModel_Anlage_STMP3;
DataObject    iedModel_Anlage_STMP3_Mod;
DataAttribute iedModel_Anlage_STMP3_Mod_q;
DataAttribute iedModel_Anlage_STMP3_Mod_t;
DataAttribute iedModel_Anlage_STMP3_Mod_ctlModel;
DataObject    iedModel_Anlage_STMP3_Beh;
DataAttribute iedModel_Anlage_STMP3_Beh_stVal;
DataAttribute iedModel_Anlage_STMP3_Beh_q;
DataAttribute iedModel_Anlage_STMP3_Beh_t;
DataObject    iedModel_Anlage_STMP3_Health;
DataAttribute iedModel_Anlage_STMP3_Health_stVal;
DataAttribute iedModel_Anlage_STMP3_Health_q;
DataAttribute iedModel_Anlage_STMP3_Health_t;
DataObject    iedModel_Anlage_STMP3_NamPlt;
DataAttribute iedModel_Anlage_STMP3_NamPlt_vendor;
DataAttribute iedModel_Anlage_STMP3_NamPlt_swRev;
DataAttribute iedModel_Anlage_STMP3_NamPlt_d;
DataObject    iedModel_Anlage_STMP3_Tmp;
DataAttribute iedModel_Anlage_STMP3_Tmp_instMag;
DataAttribute iedModel_Anlage_STMP3_Tmp_instMag_f;
DataAttribute iedModel_Anlage_STMP3_Tmp_mag;
DataAttribute iedModel_Anlage_STMP3_Tmp_mag_f;
DataAttribute iedModel_Anlage_STMP3_Tmp_q;
DataAttribute iedModel_Anlage_STMP3_Tmp_t;
LogicalNode   iedModel_Anlage_STMP4;
DataObject    iedModel_Anlage_STMP4_Mod;
DataAttribute iedModel_Anlage_STMP4_Mod_q;
DataAttribute iedModel_Anlage_STMP4_Mod_t;
DataAttribute iedModel_Anlage_STMP4_Mod_ctlModel;
DataObject    iedModel_Anlage_STMP4_Beh;
DataAttribute iedModel_Anlage_STMP4_Beh_stVal;
DataAttribute iedModel_Anlage_STMP4_Beh_q;
DataAttribute iedModel_Anlage_STMP4_Beh_t;
DataObject    iedModel_Anlage_STMP4_Health;
DataAttribute iedModel_Anlage_STMP4_Health_stVal;
DataAttribute iedModel_Anlage_STMP4_Health_q;
DataAttribute iedModel_Anlage_STMP4_Health_t;
DataObject    iedModel_Anlage_STMP4_NamPlt;
DataAttribute iedModel_Anlage_STMP4_NamPlt_vendor;
DataAttribute iedModel_Anlage_STMP4_NamPlt_swRev;
DataAttribute iedModel_Anlage_STMP4_NamPlt_d;
DataObject    iedModel_Anlage_STMP4_Tmp;
DataAttribute iedModel_Anlage_STMP4_Tmp_instMag;
DataAttribute iedModel_Anlage_STMP4_Tmp_instMag_f;
DataAttribute iedModel_Anlage_STMP4_Tmp_mag;
DataAttribute iedModel_Anlage_STMP4_Tmp_mag_f;
DataAttribute iedModel_Anlage_STMP4_Tmp_q;
DataAttribute iedModel_Anlage_STMP4_Tmp_t;
LogicalNode   iedModel_Anlage_STMP5;
DataObject    iedModel_Anlage_STMP5_Mod;
DataAttribute iedModel_Anlage_STMP5_Mod_q;
DataAttribute iedModel_Anlage_STMP5_Mod_t;
DataAttribute iedModel_Anlage_STMP5_Mod_ctlModel;
DataObject    iedModel_Anlage_STMP5_Beh;
DataAttribute iedModel_Anlage_STMP5_Beh_stVal;
DataAttribute iedModel_Anlage_STMP5_Beh_q;
DataAttribute iedModel_Anlage_STMP5_Beh_t;
DataObject    iedModel_Anlage_STMP5_Health;
DataAttribute iedModel_Anlage_STMP5_Health_stVal;
DataAttribute iedModel_Anlage_STMP5_Health_q;
DataAttribute iedModel_Anlage_STMP5_Health_t;
DataObject    iedModel_Anlage_STMP5_NamPlt;
DataAttribute iedModel_Anlage_STMP5_NamPlt_vendor;
DataAttribute iedModel_Anlage_STMP5_NamPlt_swRev;
DataAttribute iedModel_Anlage_STMP5_NamPlt_d;
DataObject    iedModel_Anlage_STMP5_Tmp;
DataAttribute iedModel_Anlage_STMP5_Tmp_instMag;
DataAttribute iedModel_Anlage_STMP5_Tmp_instMag_f;
DataAttribute iedModel_Anlage_STMP5_Tmp_mag;
DataAttribute iedModel_Anlage_STMP5_Tmp_mag_f;
DataAttribute iedModel_Anlage_STMP5_Tmp_q;
DataAttribute iedModel_Anlage_STMP5_Tmp_t;
LogicalNode   iedModel_Anlage_MENV1;
DataObject    iedModel_Anlage_MENV1_Mod;
DataAttribute iedModel_Anlage_MENV1_Mod_q;
DataAttribute iedModel_Anlage_MENV1_Mod_t;
DataAttribute iedModel_Anlage_MENV1_Mod_ctlModel;
DataObject    iedModel_Anlage_MENV1_Beh;
DataAttribute iedModel_Anlage_MENV1_Beh_stVal;
DataAttribute iedModel_Anlage_MENV1_Beh_q;
DataAttribute iedModel_Anlage_MENV1_Beh_t;
DataObject    iedModel_Anlage_MENV1_Health;
DataAttribute iedModel_Anlage_MENV1_Health_stVal;
DataAttribute iedModel_Anlage_MENV1_Health_q;
DataAttribute iedModel_Anlage_MENV1_Health_t;
DataObject    iedModel_Anlage_MENV1_NamPlt;
DataAttribute iedModel_Anlage_MENV1_NamPlt_vendor;
DataAttribute iedModel_Anlage_MENV1_NamPlt_swRev;
DataAttribute iedModel_Anlage_MENV1_NamPlt_d;
DataObject    iedModel_Anlage_MENV1_SmokAlm;
DataAttribute iedModel_Anlage_MENV1_SmokAlm_stVal;
DataAttribute iedModel_Anlage_MENV1_SmokAlm_q;
DataAttribute iedModel_Anlage_MENV1_SmokAlm_t;
DataObject    iedModel_Anlage_MENV1_FloodAlm;
DataAttribute iedModel_Anlage_MENV1_FloodAlm_stVal;
DataAttribute iedModel_Anlage_MENV1_FloodAlm_q;
DataAttribute iedModel_Anlage_MENV1_FloodAlm_t;
LogicalDevice iedModel_BHKW;
LogicalNode   iedModel_BHKW_LLN0;
DataObject    iedModel_BHKW_LLN0_Mod;
DataAttribute iedModel_BHKW_LLN0_Mod_q;
DataAttribute iedModel_BHKW_LLN0_Mod_t;
DataAttribute iedModel_BHKW_LLN0_Mod_ctlModel;
DataObject    iedModel_BHKW_LLN0_Beh;
DataAttribute iedModel_BHKW_LLN0_Beh_stVal;
DataAttribute iedModel_BHKW_LLN0_Beh_q;
DataAttribute iedModel_BHKW_LLN0_Beh_t;
DataObject    iedModel_BHKW_LLN0_Health;
DataAttribute iedModel_BHKW_LLN0_Health_stVal;
DataAttribute iedModel_BHKW_LLN0_Health_q;
DataAttribute iedModel_BHKW_LLN0_Health_t;
DataObject    iedModel_BHKW_LLN0_NamPlt;
DataAttribute iedModel_BHKW_LLN0_NamPlt_vendor;
DataAttribute iedModel_BHKW_LLN0_NamPlt_swRev;
DataAttribute iedModel_BHKW_LLN0_NamPlt_d;
DataAttribute iedModel_BHKW_LLN0_NamPlt_configRev;
DataAttribute iedModel_BHKW_LLN0_NamPlt_ldNs;
LogicalNode   iedModel_BHKW_LPHD1;
DataObject    iedModel_BHKW_LPHD1_PhyNam;
DataAttribute iedModel_BHKW_LPHD1_PhyNam_vendor;
DataObject    iedModel_BHKW_LPHD1_PhyHealth;
DataAttribute iedModel_BHKW_LPHD1_PhyHealth_stVal;
DataAttribute iedModel_BHKW_LPHD1_PhyHealth_q;
DataAttribute iedModel_BHKW_LPHD1_PhyHealth_t;
DataObject    iedModel_BHKW_LPHD1_Proxy;
DataAttribute iedModel_BHKW_LPHD1_Proxy_stVal;
DataAttribute iedModel_BHKW_LPHD1_Proxy_q;
DataAttribute iedModel_BHKW_LPHD1_Proxy_t;
LogicalNode   iedModel_BHKW_MMTR1;
DataObject    iedModel_BHKW_MMTR1_Mod;
DataAttribute iedModel_BHKW_MMTR1_Mod_q;
DataAttribute iedModel_BHKW_MMTR1_Mod_t;
DataAttribute iedModel_BHKW_MMTR1_Mod_ctlModel;
DataObject    iedModel_BHKW_MMTR1_Beh;
DataAttribute iedModel_BHKW_MMTR1_Beh_stVal;
DataAttribute iedModel_BHKW_MMTR1_Beh_q;
DataAttribute iedModel_BHKW_MMTR1_Beh_t;
DataObject    iedModel_BHKW_MMTR1_Health;
DataAttribute iedModel_BHKW_MMTR1_Health_stVal;
DataAttribute iedModel_BHKW_MMTR1_Health_q;
DataAttribute iedModel_BHKW_MMTR1_Health_t;
DataObject    iedModel_BHKW_MMTR1_NamPlt;
DataAttribute iedModel_BHKW_MMTR1_NamPlt_vendor;
DataAttribute iedModel_BHKW_MMTR1_NamPlt_swRev;
DataAttribute iedModel_BHKW_MMTR1_NamPlt_d;
DataObject    iedModel_BHKW_MMTR1_TotWh;
DataAttribute iedModel_BHKW_MMTR1_TotWh_actVal;
DataAttribute iedModel_BHKW_MMTR1_TotWh_q;
DataAttribute iedModel_BHKW_MMTR1_TotWh_t;
DataAttribute iedModel_BHKW_MMTR1_TotWh_pulsQty;
LogicalNode   iedModel_BHKW_MMXU1;
DataObject    iedModel_BHKW_MMXU1_Mod;
DataAttribute iedModel_BHKW_MMXU1_Mod_q;
DataAttribute iedModel_BHKW_MMXU1_Mod_t;
DataAttribute iedModel_BHKW_MMXU1_Mod_ctlModel;
DataObject    iedModel_BHKW_MMXU1_Beh;
DataAttribute iedModel_BHKW_MMXU1_Beh_stVal;
DataAttribute iedModel_BHKW_MMXU1_Beh_q;
DataAttribute iedModel_BHKW_MMXU1_Beh_t;
DataObject    iedModel_BHKW_MMXU1_Health;
DataAttribute iedModel_BHKW_MMXU1_Health_stVal;
DataAttribute iedModel_BHKW_MMXU1_Health_q;
DataAttribute iedModel_BHKW_MMXU1_Health_t;
DataObject    iedModel_BHKW_MMXU1_NamPlt;
DataAttribute iedModel_BHKW_MMXU1_NamPlt_vendor;
DataAttribute iedModel_BHKW_MMXU1_NamPlt_swRev;
DataAttribute iedModel_BHKW_MMXU1_NamPlt_d;
DataObject    iedModel_BHKW_MMXU1_TotW;
DataAttribute iedModel_BHKW_MMXU1_TotW_instMag;
DataAttribute iedModel_BHKW_MMXU1_TotW_instMag_f;
DataAttribute iedModel_BHKW_MMXU1_TotW_mag;
DataAttribute iedModel_BHKW_MMXU1_TotW_mag_f;
DataAttribute iedModel_BHKW_MMXU1_TotW_q;
DataAttribute iedModel_BHKW_MMXU1_TotW_t;
LogicalNode   iedModel_BHKW_DCTS1;
DataObject    iedModel_BHKW_DCTS1_Mod;
DataAttribute iedModel_BHKW_DCTS1_Mod_q;
DataAttribute iedModel_BHKW_DCTS1_Mod_t;
DataAttribute iedModel_BHKW_DCTS1_Mod_ctlModel;
DataObject    iedModel_BHKW_DCTS1_Beh;
DataAttribute iedModel_BHKW_DCTS1_Beh_stVal;
DataAttribute iedModel_BHKW_DCTS1_Beh_q;
DataAttribute iedModel_BHKW_DCTS1_Beh_t;
DataObject    iedModel_BHKW_DCTS1_Health;
DataAttribute iedModel_BHKW_DCTS1_Health_stVal;
DataAttribute iedModel_BHKW_DCTS1_Health_q;
DataAttribute iedModel_BHKW_DCTS1_Health_t;
DataObject    iedModel_BHKW_DCTS1_NamPlt;
DataAttribute iedModel_BHKW_DCTS1_NamPlt_vendor;
DataAttribute iedModel_BHKW_DCTS1_NamPlt_swRev;
DataAttribute iedModel_BHKW_DCTS1_NamPlt_d;
DataObject    iedModel_BHKW_DCTS1_ThrmStoTyp;
DataObject    iedModel_BHKW_DCTS1_ThrmCapTot;
DataAttribute iedModel_BHKW_DCTS1_ThrmCapTot_instMag;
DataAttribute iedModel_BHKW_DCTS1_ThrmCapTot_instMag_f;
DataAttribute iedModel_BHKW_DCTS1_ThrmCapTot_mag;
DataAttribute iedModel_BHKW_DCTS1_ThrmCapTot_mag_f;
DataAttribute iedModel_BHKW_DCTS1_ThrmCapTot_q;
DataAttribute iedModel_BHKW_DCTS1_ThrmCapTot_t;
DataObject    iedModel_BHKW_DCTS1_ThrmCapPct;
DataAttribute iedModel_BHKW_DCTS1_ThrmCapPct_instMag;
DataAttribute iedModel_BHKW_DCTS1_ThrmCapPct_instMag_f;
DataAttribute iedModel_BHKW_DCTS1_ThrmCapPct_mag;
DataAttribute iedModel_BHKW_DCTS1_ThrmCapPct_mag_f;
DataAttribute iedModel_BHKW_DCTS1_ThrmCapPct_q;
DataAttribute iedModel_BHKW_DCTS1_ThrmCapPct_t;
LogicalNode   iedModel_BHKW_MHET1;
DataObject    iedModel_BHKW_MHET1_Mod;
DataAttribute iedModel_BHKW_MHET1_Mod_q;
DataAttribute iedModel_BHKW_MHET1_Mod_t;
DataAttribute iedModel_BHKW_MHET1_Mod_ctlModel;
DataObject    iedModel_BHKW_MHET1_Beh;
DataAttribute iedModel_BHKW_MHET1_Beh_stVal;
DataAttribute iedModel_BHKW_MHET1_Beh_q;
DataAttribute iedModel_BHKW_MHET1_Beh_t;
DataObject    iedModel_BHKW_MHET1_Health;
DataAttribute iedModel_BHKW_MHET1_Health_stVal;
DataAttribute iedModel_BHKW_MHET1_Health_q;
DataAttribute iedModel_BHKW_MHET1_Health_t;
DataObject    iedModel_BHKW_MHET1_NamPlt;
DataAttribute iedModel_BHKW_MHET1_NamPlt_vendor;
DataAttribute iedModel_BHKW_MHET1_NamPlt_swRev;
DataAttribute iedModel_BHKW_MHET1_NamPlt_d;
DataObject    iedModel_BHKW_MHET1_MatTyp;
DataObject    iedModel_BHKW_MHET1_AccHeatOut;
DataAttribute iedModel_BHKW_MHET1_AccHeatOut_instMag;
DataAttribute iedModel_BHKW_MHET1_AccHeatOut_instMag_f;
DataAttribute iedModel_BHKW_MHET1_AccHeatOut_mag;
DataAttribute iedModel_BHKW_MHET1_AccHeatOut_mag_f;
DataAttribute iedModel_BHKW_MHET1_AccHeatOut_q;
DataAttribute iedModel_BHKW_MHET1_AccHeatOut_t;
LogicalNode   iedModel_BHKW_MFUL1;
DataObject    iedModel_BHKW_MFUL1_Mod;
DataAttribute iedModel_BHKW_MFUL1_Mod_q;
DataAttribute iedModel_BHKW_MFUL1_Mod_t;
DataAttribute iedModel_BHKW_MFUL1_Mod_ctlModel;
DataObject    iedModel_BHKW_MFUL1_Beh;
DataAttribute iedModel_BHKW_MFUL1_Beh_stVal;
DataAttribute iedModel_BHKW_MFUL1_Beh_q;
DataAttribute iedModel_BHKW_MFUL1_Beh_t;
DataObject    iedModel_BHKW_MFUL1_Health;
DataAttribute iedModel_BHKW_MFUL1_Health_stVal;
DataAttribute iedModel_BHKW_MFUL1_Health_q;
DataAttribute iedModel_BHKW_MFUL1_Health_t;
DataObject    iedModel_BHKW_MFUL1_NamPlt;
DataAttribute iedModel_BHKW_MFUL1_NamPlt_vendor;
DataAttribute iedModel_BHKW_MFUL1_NamPlt_swRev;
DataAttribute iedModel_BHKW_MFUL1_NamPlt_d;
DataObject    iedModel_BHKW_MFUL1_FuelTyp;
DataObject    iedModel_BHKW_MFUL1_AccTotFuel;
DataAttribute iedModel_BHKW_MFUL1_AccTotFuel_instMag;
DataAttribute iedModel_BHKW_MFUL1_AccTotFuel_instMag_f;
DataAttribute iedModel_BHKW_MFUL1_AccTotFuel_mag;
DataAttribute iedModel_BHKW_MFUL1_AccTotFuel_mag_f;
DataAttribute iedModel_BHKW_MFUL1_AccTotFuel_q;
DataAttribute iedModel_BHKW_MFUL1_AccTotFuel_t;
LogicalNode   iedModel_BHKW_STMP1;
DataObject    iedModel_BHKW_STMP1_Mod;
DataAttribute iedModel_BHKW_STMP1_Mod_q;
DataAttribute iedModel_BHKW_STMP1_Mod_t;
DataAttribute iedModel_BHKW_STMP1_Mod_ctlModel;
DataObject    iedModel_BHKW_STMP1_Beh;
DataAttribute iedModel_BHKW_STMP1_Beh_stVal;
DataAttribute iedModel_BHKW_STMP1_Beh_q;
DataAttribute iedModel_BHKW_STMP1_Beh_t;
DataObject    iedModel_BHKW_STMP1_Health;
DataAttribute iedModel_BHKW_STMP1_Health_stVal;
DataAttribute iedModel_BHKW_STMP1_Health_q;
DataAttribute iedModel_BHKW_STMP1_Health_t;
DataObject    iedModel_BHKW_STMP1_NamPlt;
DataAttribute iedModel_BHKW_STMP1_NamPlt_vendor;
DataAttribute iedModel_BHKW_STMP1_NamPlt_swRev;
DataAttribute iedModel_BHKW_STMP1_NamPlt_d;
DataObject    iedModel_BHKW_STMP1_Tmp;
DataAttribute iedModel_BHKW_STMP1_Tmp_instMag;
DataAttribute iedModel_BHKW_STMP1_Tmp_instMag_f;
DataAttribute iedModel_BHKW_STMP1_Tmp_mag;
DataAttribute iedModel_BHKW_STMP1_Tmp_mag_f;
DataAttribute iedModel_BHKW_STMP1_Tmp_q;
DataAttribute iedModel_BHKW_STMP1_Tmp_t;
LogicalNode   iedModel_BHKW_STMP2;
DataObject    iedModel_BHKW_STMP2_Mod;
DataAttribute iedModel_BHKW_STMP2_Mod_q;
DataAttribute iedModel_BHKW_STMP2_Mod_t;
DataAttribute iedModel_BHKW_STMP2_Mod_ctlModel;
DataObject    iedModel_BHKW_STMP2_Beh;
DataAttribute iedModel_BHKW_STMP2_Beh_stVal;
DataAttribute iedModel_BHKW_STMP2_Beh_q;
DataAttribute iedModel_BHKW_STMP2_Beh_t;
DataObject    iedModel_BHKW_STMP2_Health;
DataAttribute iedModel_BHKW_STMP2_Health_stVal;
DataAttribute iedModel_BHKW_STMP2_Health_q;
DataAttribute iedModel_BHKW_STMP2_Health_t;
DataObject    iedModel_BHKW_STMP2_NamPlt;
DataAttribute iedModel_BHKW_STMP2_NamPlt_vendor;
DataAttribute iedModel_BHKW_STMP2_NamPlt_swRev;
DataAttribute iedModel_BHKW_STMP2_NamPlt_d;
DataObject    iedModel_BHKW_STMP2_Tmp;
DataAttribute iedModel_BHKW_STMP2_Tmp_instMag;
DataAttribute iedModel_BHKW_STMP2_Tmp_instMag_f;
DataAttribute iedModel_BHKW_STMP2_Tmp_mag;
DataAttribute iedModel_BHKW_STMP2_Tmp_mag_f;
DataAttribute iedModel_BHKW_STMP2_Tmp_q;
DataAttribute iedModel_BHKW_STMP2_Tmp_t;
LogicalNode   iedModel_BHKW_STMP3;
DataObject    iedModel_BHKW_STMP3_Mod;
DataAttribute iedModel_BHKW_STMP3_Mod_q;
DataAttribute iedModel_BHKW_STMP3_Mod_t;
DataAttribute iedModel_BHKW_STMP3_Mod_ctlModel;
DataObject    iedModel_BHKW_STMP3_Beh;
DataAttribute iedModel_BHKW_STMP3_Beh_stVal;
DataAttribute iedModel_BHKW_STMP3_Beh_q;
DataAttribute iedModel_BHKW_STMP3_Beh_t;
DataObject    iedModel_BHKW_STMP3_Health;
DataAttribute iedModel_BHKW_STMP3_Health_stVal;
DataAttribute iedModel_BHKW_STMP3_Health_q;
DataAttribute iedModel_BHKW_STMP3_Health_t;
DataObject    iedModel_BHKW_STMP3_NamPlt;
DataAttribute iedModel_BHKW_STMP3_NamPlt_vendor;
DataAttribute iedModel_BHKW_STMP3_NamPlt_swRev;
DataAttribute iedModel_BHKW_STMP3_NamPlt_d;
DataObject    iedModel_BHKW_STMP3_Tmp;
DataAttribute iedModel_BHKW_STMP3_Tmp_instMag;
DataAttribute iedModel_BHKW_STMP3_Tmp_instMag_f;
DataAttribute iedModel_BHKW_STMP3_Tmp_mag;
DataAttribute iedModel_BHKW_STMP3_Tmp_mag_f;
DataAttribute iedModel_BHKW_STMP3_Tmp_q;
DataAttribute iedModel_BHKW_STMP3_Tmp_t;
LogicalNode   iedModel_BHKW_STMP4;
DataObject    iedModel_BHKW_STMP4_Mod;
DataAttribute iedModel_BHKW_STMP4_Mod_q;
DataAttribute iedModel_BHKW_STMP4_Mod_t;
DataAttribute iedModel_BHKW_STMP4_Mod_ctlModel;
DataObject    iedModel_BHKW_STMP4_Beh;
DataAttribute iedModel_BHKW_STMP4_Beh_stVal;
DataAttribute iedModel_BHKW_STMP4_Beh_q;
DataAttribute iedModel_BHKW_STMP4_Beh_t;
DataObject    iedModel_BHKW_STMP4_Health;
DataAttribute iedModel_BHKW_STMP4_Health_stVal;
DataAttribute iedModel_BHKW_STMP4_Health_q;
DataAttribute iedModel_BHKW_STMP4_Health_t;
DataObject    iedModel_BHKW_STMP4_NamPlt;
DataAttribute iedModel_BHKW_STMP4_NamPlt_vendor;
DataAttribute iedModel_BHKW_STMP4_NamPlt_swRev;
DataAttribute iedModel_BHKW_STMP4_NamPlt_d;
DataObject    iedModel_BHKW_STMP4_Tmp;
DataAttribute iedModel_BHKW_STMP4_Tmp_instMag;
DataAttribute iedModel_BHKW_STMP4_Tmp_instMag_f;
DataAttribute iedModel_BHKW_STMP4_Tmp_mag;
DataAttribute iedModel_BHKW_STMP4_Tmp_mag_f;
DataAttribute iedModel_BHKW_STMP4_Tmp_q;
DataAttribute iedModel_BHKW_STMP4_Tmp_t;
LogicalNode   iedModel_BHKW_STMP5;
DataObject    iedModel_BHKW_STMP5_Mod;
DataAttribute iedModel_BHKW_STMP5_Mod_q;
DataAttribute iedModel_BHKW_STMP5_Mod_t;
DataAttribute iedModel_BHKW_STMP5_Mod_ctlModel;
DataObject    iedModel_BHKW_STMP5_Beh;
DataAttribute iedModel_BHKW_STMP5_Beh_stVal;
DataAttribute iedModel_BHKW_STMP5_Beh_q;
DataAttribute iedModel_BHKW_STMP5_Beh_t;
DataObject    iedModel_BHKW_STMP5_Health;
DataAttribute iedModel_BHKW_STMP5_Health_stVal;
DataAttribute iedModel_BHKW_STMP5_Health_q;
DataAttribute iedModel_BHKW_STMP5_Health_t;
DataObject    iedModel_BHKW_STMP5_NamPlt;
DataAttribute iedModel_BHKW_STMP5_NamPlt_vendor;
DataAttribute iedModel_BHKW_STMP5_NamPlt_swRev;
DataAttribute iedModel_BHKW_STMP5_NamPlt_d;
DataObject    iedModel_BHKW_STMP5_Tmp;
DataAttribute iedModel_BHKW_STMP5_Tmp_instMag;
DataAttribute iedModel_BHKW_STMP5_Tmp_instMag_f;
DataAttribute iedModel_BHKW_STMP5_Tmp_mag;
DataAttribute iedModel_BHKW_STMP5_Tmp_mag_f;
DataAttribute iedModel_BHKW_STMP5_Tmp_q;
DataAttribute iedModel_BHKW_STMP5_Tmp_t;
LogicalNode   iedModel_BHKW_DRCS1;
DataObject    iedModel_BHKW_DRCS1_Mod;
DataAttribute iedModel_BHKW_DRCS1_Mod_q;
DataAttribute iedModel_BHKW_DRCS1_Mod_t;
DataAttribute iedModel_BHKW_DRCS1_Mod_ctlModel;
DataObject    iedModel_BHKW_DRCS1_Beh;
DataAttribute iedModel_BHKW_DRCS1_Beh_stVal;
DataAttribute iedModel_BHKW_DRCS1_Beh_q;
DataAttribute iedModel_BHKW_DRCS1_Beh_t;
DataObject    iedModel_BHKW_DRCS1_Health;
DataAttribute iedModel_BHKW_DRCS1_Health_stVal;
DataAttribute iedModel_BHKW_DRCS1_Health_q;
DataAttribute iedModel_BHKW_DRCS1_Health_t;
DataObject    iedModel_BHKW_DRCS1_NamPlt;
DataAttribute iedModel_BHKW_DRCS1_NamPlt_vendor;
DataAttribute iedModel_BHKW_DRCS1_NamPlt_swRev;
DataAttribute iedModel_BHKW_DRCS1_NamPlt_d;
DataObject    iedModel_BHKW_DRCS1_OpTmh;
DataAttribute iedModel_BHKW_DRCS1_OpTmh_stVal;
DataAttribute iedModel_BHKW_DRCS1_OpTmh_q;
DataAttribute iedModel_BHKW_DRCS1_OpTmh_t;
DataObject    iedModel_BHKW_DRCS1_ECPConn;
DataAttribute iedModel_BHKW_DRCS1_ECPConn_stVal;
DataAttribute iedModel_BHKW_DRCS1_ECPConn_q;
DataAttribute iedModel_BHKW_DRCS1_ECPConn_t;
DataObject    iedModel_BHKW_DRCS1_AutoMan;
DataAttribute iedModel_BHKW_DRCS1_AutoMan_stVal;
DataAttribute iedModel_BHKW_DRCS1_AutoMan_q;
DataAttribute iedModel_BHKW_DRCS1_AutoMan_t;
DataObject    iedModel_BHKW_DRCS1_Loc;
DataAttribute iedModel_BHKW_DRCS1_Loc_stVal;
DataAttribute iedModel_BHKW_DRCS1_Loc_q;
DataAttribute iedModel_BHKW_DRCS1_Loc_t;
DataObject    iedModel_BHKW_DRCS1_ModOnConn;
DataAttribute iedModel_BHKW_DRCS1_ModOnConn_stVal;
DataAttribute iedModel_BHKW_DRCS1_ModOnConn_q;
DataAttribute iedModel_BHKW_DRCS1_ModOnConn_t;
DataObject    iedModel_BHKW_DRCS1_ModOnAval;
DataAttribute iedModel_BHKW_DRCS1_ModOnAval_stVal;
DataAttribute iedModel_BHKW_DRCS1_ModOnAval_q;
DataAttribute iedModel_BHKW_DRCS1_ModOnAval_t;
DataObject    iedModel_BHKW_DRCS1_ModOffAval;
DataAttribute iedModel_BHKW_DRCS1_ModOffAval_stVal;
DataAttribute iedModel_BHKW_DRCS1_ModOffAval_q;
DataAttribute iedModel_BHKW_DRCS1_ModOffAval_t;
DataObject    iedModel_BHKW_DRCS1_ModOffUnav;
DataAttribute iedModel_BHKW_DRCS1_ModOffUnav_stVal;
DataAttribute iedModel_BHKW_DRCS1_ModOffUnav_q;
DataAttribute iedModel_BHKW_DRCS1_ModOffUnav_t;
LogicalNode   iedModel_BHKW_DSCH1;
DataObject    iedModel_BHKW_DSCH1_Mod;
DataAttribute iedModel_BHKW_DSCH1_Mod_q;
DataAttribute iedModel_BHKW_DSCH1_Mod_t;
DataAttribute iedModel_BHKW_DSCH1_Mod_ctlModel;
DataObject    iedModel_BHKW_DSCH1_Beh;
DataAttribute iedModel_BHKW_DSCH1_Beh_stVal;
DataAttribute iedModel_BHKW_DSCH1_Beh_q;
DataAttribute iedModel_BHKW_DSCH1_Beh_t;
DataObject    iedModel_BHKW_DSCH1_Health;
DataAttribute iedModel_BHKW_DSCH1_Health_stVal;
DataAttribute iedModel_BHKW_DSCH1_Health_q;
DataAttribute iedModel_BHKW_DSCH1_Health_t;
DataObject    iedModel_BHKW_DSCH1_NamPlt;
DataAttribute iedModel_BHKW_DSCH1_NamPlt_vendor;
DataAttribute iedModel_BHKW_DSCH1_NamPlt_swRev;
DataAttribute iedModel_BHKW_DSCH1_NamPlt_d;
DataObject    iedModel_BHKW_DSCH1_SchdSt;
DataAttribute iedModel_BHKW_DSCH1_SchdSt_stVal;
DataAttribute iedModel_BHKW_DSCH1_SchdSt_q;
DataAttribute iedModel_BHKW_DSCH1_SchdSt_t;
DataObject    iedModel_BHKW_DSCH1_SchdId;
DataObject    iedModel_BHKW_DSCH1_SchdCat;
DataObject    iedModel_BHKW_DSCH1_SchdTyp;
DataObject    iedModel_BHKW_DSCH1_SchdAbsTm;
DataAttribute iedModel_BHKW_DSCH1_SchdAbsTm_numPts;
DataAttribute iedModel_BHKW_DSCH1_SchdAbsTm_val;
DataAttribute iedModel_BHKW_DSCH1_SchdAbsTm_time;
LogicalNode   iedModel_BHKW_DRCC1;
DataObject    iedModel_BHKW_DRCC1_Mod;
DataAttribute iedModel_BHKW_DRCC1_Mod_q;
DataAttribute iedModel_BHKW_DRCC1_Mod_t;
DataAttribute iedModel_BHKW_DRCC1_Mod_ctlModel;
DataObject    iedModel_BHKW_DRCC1_Beh;
DataAttribute iedModel_BHKW_DRCC1_Beh_stVal;
DataAttribute iedModel_BHKW_DRCC1_Beh_q;
DataAttribute iedModel_BHKW_DRCC1_Beh_t;
DataObject    iedModel_BHKW_DRCC1_Health;
DataAttribute iedModel_BHKW_DRCC1_Health_stVal;
DataAttribute iedModel_BHKW_DRCC1_Health_q;
DataAttribute iedModel_BHKW_DRCC1_Health_t;
DataObject    iedModel_BHKW_DRCC1_NamPlt;
DataAttribute iedModel_BHKW_DRCC1_NamPlt_vendor;
DataAttribute iedModel_BHKW_DRCC1_NamPlt_swRev;
DataAttribute iedModel_BHKW_DRCC1_NamPlt_d;
DataObject    iedModel_BHKW_DRCC1_OutWSet;
DataAttribute iedModel_BHKW_DRCC1_OutWSet_q;
DataAttribute iedModel_BHKW_DRCC1_OutWSet_t;
DataAttribute iedModel_BHKW_DRCC1_OutWSet_ctlModel;
DataAttribute iedModel_BHKW_DRCC1_OutWSet_Oper;
DataAttribute iedModel_BHKW_DRCC1_OutWSet_Oper_setMag;
DataAttribute iedModel_BHKW_DRCC1_OutWSet_Oper_setMag_f;
DataAttribute iedModel_BHKW_DRCC1_OutWSet_Oper_origin;
DataAttribute iedModel_BHKW_DRCC1_OutWSet_Oper_origin_orCat;
DataAttribute iedModel_BHKW_DRCC1_OutWSet_Oper_origin_orIdent;
DataAttribute iedModel_BHKW_DRCC1_OutWSet_Oper_T;
DataAttribute iedModel_BHKW_DRCC1_OutWSet_Oper_Test;
DataAttribute iedModel_BHKW_DRCC1_OutWSet_Oper_Check;
DataAttribute iedModel_BHKW_DRCC1_OutWSet_Cancel;
DataAttribute iedModel_BHKW_DRCC1_OutWSet_Cancel_setMag;
DataAttribute iedModel_BHKW_DRCC1_OutWSet_Cancel_setMag_f;
DataAttribute iedModel_BHKW_DRCC1_OutWSet_Cancel_origin;
DataAttribute iedModel_BHKW_DRCC1_OutWSet_Cancel_origin_orCat;
DataAttribute iedModel_BHKW_DRCC1_OutWSet_Cancel_origin_orIdent;
DataAttribute iedModel_BHKW_DRCC1_OutWSet_Cancel_T;
DataAttribute iedModel_BHKW_DRCC1_OutWSet_Cancel_Test;
DataObject    iedModel_BHKW_DRCC1_DERStr;
DataAttribute iedModel_BHKW_DRCC1_DERStr_q;
DataAttribute iedModel_BHKW_DRCC1_DERStr_Oper;
DataAttribute iedModel_BHKW_DRCC1_DERStr_Oper_ctlVal;
DataAttribute iedModel_BHKW_DRCC1_DERStr_Oper_origin;
DataAttribute iedModel_BHKW_DRCC1_DERStr_Oper_origin_orCat;
DataAttribute iedModel_BHKW_DRCC1_DERStr_Oper_origin_orIdent;
DataAttribute iedModel_BHKW_DRCC1_DERStr_Oper_ctlNum;
DataAttribute iedModel_BHKW_DRCC1_DERStr_Oper_T;
DataAttribute iedModel_BHKW_DRCC1_DERStr_Oper_Test;
DataAttribute iedModel_BHKW_DRCC1_DERStr_Oper_Check;
DataAttribute iedModel_BHKW_DRCC1_DERStr_ctlModel;
DataAttribute iedModel_BHKW_DRCC1_DERStr_t;
DataAttribute iedModel_BHKW_DRCC1_DERStr_SBO;
DataAttribute iedModel_BHKW_DRCC1_DERStr_Cancel;
DataAttribute iedModel_BHKW_DRCC1_DERStr_Cancel_ctlVal;
DataAttribute iedModel_BHKW_DRCC1_DERStr_Cancel_origin;
DataAttribute iedModel_BHKW_DRCC1_DERStr_Cancel_origin_orCat;
DataAttribute iedModel_BHKW_DRCC1_DERStr_Cancel_origin_orIdent;
DataAttribute iedModel_BHKW_DRCC1_DERStr_Cancel_ctlNum;
DataAttribute iedModel_BHKW_DRCC1_DERStr_Cancel_T;
DataAttribute iedModel_BHKW_DRCC1_DERStr_Cancel_Test;
DataObject    iedModel_BHKW_DRCC1_DERStop;
DataAttribute iedModel_BHKW_DRCC1_DERStop_q;
DataAttribute iedModel_BHKW_DRCC1_DERStop_Oper;
DataAttribute iedModel_BHKW_DRCC1_DERStop_Oper_ctlVal;
DataAttribute iedModel_BHKW_DRCC1_DERStop_Oper_origin;
DataAttribute iedModel_BHKW_DRCC1_DERStop_Oper_origin_orCat;
DataAttribute iedModel_BHKW_DRCC1_DERStop_Oper_origin_orIdent;
DataAttribute iedModel_BHKW_DRCC1_DERStop_Oper_ctlNum;
DataAttribute iedModel_BHKW_DRCC1_DERStop_Oper_T;
DataAttribute iedModel_BHKW_DRCC1_DERStop_Oper_Test;
DataAttribute iedModel_BHKW_DRCC1_DERStop_Oper_Check;
DataAttribute iedModel_BHKW_DRCC1_DERStop_ctlModel;
DataAttribute iedModel_BHKW_DRCC1_DERStop_t;
DataAttribute iedModel_BHKW_DRCC1_DERStop_SBO;
DataAttribute iedModel_BHKW_DRCC1_DERStop_Cancel;
DataAttribute iedModel_BHKW_DRCC1_DERStop_Cancel_ctlVal;
DataAttribute iedModel_BHKW_DRCC1_DERStop_Cancel_origin;
DataAttribute iedModel_BHKW_DRCC1_DERStop_Cancel_origin_orCat;
DataAttribute iedModel_BHKW_DRCC1_DERStop_Cancel_origin_orIdent;
DataAttribute iedModel_BHKW_DRCC1_DERStop_Cancel_ctlNum;
DataAttribute iedModel_BHKW_DRCC1_DERStop_Cancel_T;
DataAttribute iedModel_BHKW_DRCC1_DERStop_Cancel_Test;
DataObject    iedModel_BHKW_DRCC1_AutoManCtl;
DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_q;
DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Oper;
DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Oper_ctlVal;
DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Oper_origin;
DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Oper_origin_orCat;
DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Oper_origin_orIdent;
DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Oper_ctlNum;
DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Oper_T;
DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Oper_Test;
DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Oper_Check;
DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_ctlModel;
DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_t;
DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Cancel;
DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Cancel_ctlVal;
DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Cancel_origin;
DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Cancel_origin_orCat;
DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Cancel_origin_orIdent;
DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Cancel_ctlNum;
DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Cancel_T;
DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Cancel_Test;
DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_SBO;
DataObject    iedModel_BHKW_DRCC1_LocRemCtl;
DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_q;
DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Oper;
DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Oper_ctlVal;
DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Oper_origin;
DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Oper_origin_orCat;
DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Oper_origin_orIdent;
DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Oper_ctlNum;
DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Oper_T;
DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Oper_Test;
DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Oper_Check;
DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_ctlModel;
DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_t;
DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_SBO;
DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Cancel;
DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Cancel_ctlVal;
DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Cancel_origin;
DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Cancel_origin_orCat;
DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Cancel_origin_orIdent;
DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Cancel_ctlNum;
DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Cancel_T;
DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Cancel_Test;

IedModel iedModel = {
    "IEDM1CPU",
    &iedModel_Anlage,
    datasets,
    reportControlBlocks,
    gseControlBlocks,
    initializeValues
};

LogicalDevice iedModel_Anlage = {
    "IEDM1CPUAnlage",
    &iedModel_BHKW,
    &iedModel_Anlage_LLN0
};

LogicalNode iedModel_Anlage_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    &iedModel_Anlage,
    (ModelNode*) &iedModel_Anlage_LPHD1,
    (ModelNode*) &iedModel_Anlage_LLN0_Mod,
};

DataObject iedModel_Anlage_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_Anlage_LLN0,
    (ModelNode*) &iedModel_Anlage_LLN0_Beh,
    (ModelNode*) &iedModel_Anlage_LLN0_Mod_q,
    0,
    0
};

DataAttribute iedModel_Anlage_LLN0_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_LLN0_Mod,
    (ModelNode*) &iedModel_Anlage_LLN0_Mod_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_LLN0_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_LLN0_Mod,
    (ModelNode*) &iedModel_Anlage_LLN0_Mod_ctlModel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_Anlage_LLN0_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_Anlage_LLN0_Mod,
    NULL,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataObject iedModel_Anlage_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_Anlage_LLN0,
    (ModelNode*) &iedModel_Anlage_LLN0_Health,
    (ModelNode*) &iedModel_Anlage_LLN0_Beh_stVal,
    0,
    0
};

DataAttribute iedModel_Anlage_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Anlage_LLN0_Beh,
    (ModelNode*) &iedModel_Anlage_LLN0_Beh_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_Anlage_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_LLN0_Beh,
    (ModelNode*) &iedModel_Anlage_LLN0_Beh_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_LLN0_Beh,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_Anlage_LLN0_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_Anlage_LLN0,
    (ModelNode*) &iedModel_Anlage_LLN0_NamPlt,
    (ModelNode*) &iedModel_Anlage_LLN0_Health_stVal,
    0,
    0
};

DataAttribute iedModel_Anlage_LLN0_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Anlage_LLN0_Health,
    (ModelNode*) &iedModel_Anlage_LLN0_Health_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_Anlage_LLN0_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_LLN0_Health,
    (ModelNode*) &iedModel_Anlage_LLN0_Health_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_LLN0_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_LLN0_Health,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_Anlage_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_Anlage_LLN0,
    NULL,
    (ModelNode*) &iedModel_Anlage_LLN0_NamPlt_vendor,
    0,
    0
};

DataAttribute iedModel_Anlage_LLN0_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_Anlage_LLN0_NamPlt,
    (ModelNode*) &iedModel_Anlage_LLN0_NamPlt_swRev,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_Anlage_LLN0_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_Anlage_LLN0_NamPlt,
    (ModelNode*) &iedModel_Anlage_LLN0_NamPlt_d,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_Anlage_LLN0_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_Anlage_LLN0_NamPlt,
    (ModelNode*) &iedModel_Anlage_LLN0_NamPlt_configRev,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_Anlage_LLN0_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_Anlage_LLN0_NamPlt,
    (ModelNode*) &iedModel_Anlage_LLN0_NamPlt_ldNs,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_Anlage_LLN0_NamPlt_ldNs = {
    DataAttributeModelType,
    "ldNs",
    (ModelNode*) &iedModel_Anlage_LLN0_NamPlt,
    NULL,
    NULL,
    0,
    0,
    EX,
    VISIBLE_STRING_255,
    NULL
};

LogicalNode iedModel_Anlage_LPHD1 = {
    LogicalNodeModelType,
    "LPHD1",
    &iedModel_Anlage,
    (ModelNode*) &iedModel_Anlage_MHET1,
    (ModelNode*) &iedModel_Anlage_LPHD1_PhyNam,
};

DataObject iedModel_Anlage_LPHD1_PhyNam = {
    DataObjectModelType,
    "PhyNam",
    (ModelNode*) &iedModel_Anlage_LPHD1,
    (ModelNode*) &iedModel_Anlage_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_Anlage_LPHD1_PhyNam_vendor,
    0,
    0
};

DataAttribute iedModel_Anlage_LPHD1_PhyNam_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_Anlage_LPHD1_PhyNam,
    NULL,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataObject iedModel_Anlage_LPHD1_PhyHealth = {
    DataObjectModelType,
    "PhyHealth",
    (ModelNode*) &iedModel_Anlage_LPHD1,
    (ModelNode*) &iedModel_Anlage_LPHD1_Proxy,
    (ModelNode*) &iedModel_Anlage_LPHD1_PhyHealth_stVal,
    0,
    0
};

DataAttribute iedModel_Anlage_LPHD1_PhyHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Anlage_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_Anlage_LPHD1_PhyHealth_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_Anlage_LPHD1_PhyHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_Anlage_LPHD1_PhyHealth_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_LPHD1_PhyHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_LPHD1_PhyHealth,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_Anlage_LPHD1_Proxy = {
    DataObjectModelType,
    "Proxy",
    (ModelNode*) &iedModel_Anlage_LPHD1,
    NULL,
    (ModelNode*) &iedModel_Anlage_LPHD1_Proxy_stVal,
    0,
    0
};

DataAttribute iedModel_Anlage_LPHD1_Proxy_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Anlage_LPHD1_Proxy,
    (ModelNode*) &iedModel_Anlage_LPHD1_Proxy_q,
    NULL,
    0,
    0,
    ST,
    BOOLEAN,
    NULL
};

DataAttribute iedModel_Anlage_LPHD1_Proxy_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_LPHD1_Proxy,
    (ModelNode*) &iedModel_Anlage_LPHD1_Proxy_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_LPHD1_Proxy_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_LPHD1_Proxy,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

LogicalNode iedModel_Anlage_MHET1 = {
    LogicalNodeModelType,
    "MHET1",
    &iedModel_Anlage,
    (ModelNode*) &iedModel_Anlage_MHET2,
    (ModelNode*) &iedModel_Anlage_MHET1_Mod,
};

DataObject iedModel_Anlage_MHET1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_Anlage_MHET1,
    (ModelNode*) &iedModel_Anlage_MHET1_Beh,
    (ModelNode*) &iedModel_Anlage_MHET1_Mod_q,
    0,
    0
};

DataAttribute iedModel_Anlage_MHET1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_MHET1_Mod,
    (ModelNode*) &iedModel_Anlage_MHET1_Mod_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_MHET1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_MHET1_Mod,
    (ModelNode*) &iedModel_Anlage_MHET1_Mod_ctlModel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_Anlage_MHET1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_Anlage_MHET1_Mod,
    NULL,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataObject iedModel_Anlage_MHET1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_Anlage_MHET1,
    (ModelNode*) &iedModel_Anlage_MHET1_Health,
    (ModelNode*) &iedModel_Anlage_MHET1_Beh_stVal,
    0,
    0
};

DataAttribute iedModel_Anlage_MHET1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Anlage_MHET1_Beh,
    (ModelNode*) &iedModel_Anlage_MHET1_Beh_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_Anlage_MHET1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_MHET1_Beh,
    (ModelNode*) &iedModel_Anlage_MHET1_Beh_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_MHET1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_MHET1_Beh,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_Anlage_MHET1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_Anlage_MHET1,
    (ModelNode*) &iedModel_Anlage_MHET1_NamPlt,
    (ModelNode*) &iedModel_Anlage_MHET1_Health_stVal,
    0,
    0
};

DataAttribute iedModel_Anlage_MHET1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Anlage_MHET1_Health,
    (ModelNode*) &iedModel_Anlage_MHET1_Health_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_Anlage_MHET1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_MHET1_Health,
    (ModelNode*) &iedModel_Anlage_MHET1_Health_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_MHET1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_MHET1_Health,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_Anlage_MHET1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_Anlage_MHET1,
    (ModelNode*) &iedModel_Anlage_MHET1_MatTyp,
    (ModelNode*) &iedModel_Anlage_MHET1_NamPlt_vendor,
    0,
    0
};

DataAttribute iedModel_Anlage_MHET1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_Anlage_MHET1_NamPlt,
    (ModelNode*) &iedModel_Anlage_MHET1_NamPlt_swRev,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_Anlage_MHET1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_Anlage_MHET1_NamPlt,
    (ModelNode*) &iedModel_Anlage_MHET1_NamPlt_d,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_Anlage_MHET1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_Anlage_MHET1_NamPlt,
    NULL,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataObject iedModel_Anlage_MHET1_MatTyp = {
    DataObjectModelType,
    "MatTyp",
    (ModelNode*) &iedModel_Anlage_MHET1,
    (ModelNode*) &iedModel_Anlage_MHET1_AccHeatOut,
    NULL,
    0,
    0
};

DataObject iedModel_Anlage_MHET1_AccHeatOut = {
    DataObjectModelType,
    "AccHeatOut",
    (ModelNode*) &iedModel_Anlage_MHET1,
    NULL,
    (ModelNode*) &iedModel_Anlage_MHET1_AccHeatOut_instMag,
    0,
    0
};

DataAttribute iedModel_Anlage_MHET1_AccHeatOut_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_Anlage_MHET1_AccHeatOut,
    (ModelNode*) &iedModel_Anlage_MHET1_AccHeatOut_mag,
    (ModelNode*) &iedModel_Anlage_MHET1_AccHeatOut_instMag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_Anlage_MHET1_AccHeatOut_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Anlage_MHET1_AccHeatOut_instMag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_Anlage_MHET1_AccHeatOut_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_Anlage_MHET1_AccHeatOut,
    (ModelNode*) &iedModel_Anlage_MHET1_AccHeatOut_q,
    (ModelNode*) &iedModel_Anlage_MHET1_AccHeatOut_mag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_Anlage_MHET1_AccHeatOut_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Anlage_MHET1_AccHeatOut_mag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_Anlage_MHET1_AccHeatOut_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_MHET1_AccHeatOut,
    (ModelNode*) &iedModel_Anlage_MHET1_AccHeatOut_t,
    NULL,
    0,
    0,
    MX,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_MHET1_AccHeatOut_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_MHET1_AccHeatOut,
    NULL,
    NULL,
    0,
    0,
    MX,
    TIMESTAMP,
    NULL
};

LogicalNode iedModel_Anlage_MHET2 = {
    LogicalNodeModelType,
    "MHET2",
    &iedModel_Anlage,
    (ModelNode*) &iedModel_Anlage_MHET3,
    (ModelNode*) &iedModel_Anlage_MHET2_Mod,
};

DataObject iedModel_Anlage_MHET2_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_Anlage_MHET2,
    (ModelNode*) &iedModel_Anlage_MHET2_Beh,
    (ModelNode*) &iedModel_Anlage_MHET2_Mod_q,
    0,
    0
};

DataAttribute iedModel_Anlage_MHET2_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_MHET2_Mod,
    (ModelNode*) &iedModel_Anlage_MHET2_Mod_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_MHET2_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_MHET2_Mod,
    (ModelNode*) &iedModel_Anlage_MHET2_Mod_ctlModel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_Anlage_MHET2_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_Anlage_MHET2_Mod,
    NULL,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataObject iedModel_Anlage_MHET2_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_Anlage_MHET2,
    (ModelNode*) &iedModel_Anlage_MHET2_Health,
    (ModelNode*) &iedModel_Anlage_MHET2_Beh_stVal,
    0,
    0
};

DataAttribute iedModel_Anlage_MHET2_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Anlage_MHET2_Beh,
    (ModelNode*) &iedModel_Anlage_MHET2_Beh_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_Anlage_MHET2_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_MHET2_Beh,
    (ModelNode*) &iedModel_Anlage_MHET2_Beh_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_MHET2_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_MHET2_Beh,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_Anlage_MHET2_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_Anlage_MHET2,
    (ModelNode*) &iedModel_Anlage_MHET2_NamPlt,
    (ModelNode*) &iedModel_Anlage_MHET2_Health_stVal,
    0,
    0
};

DataAttribute iedModel_Anlage_MHET2_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Anlage_MHET2_Health,
    (ModelNode*) &iedModel_Anlage_MHET2_Health_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_Anlage_MHET2_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_MHET2_Health,
    (ModelNode*) &iedModel_Anlage_MHET2_Health_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_MHET2_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_MHET2_Health,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_Anlage_MHET2_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_Anlage_MHET2,
    (ModelNode*) &iedModel_Anlage_MHET2_MatTyp,
    (ModelNode*) &iedModel_Anlage_MHET2_NamPlt_vendor,
    0,
    0
};

DataAttribute iedModel_Anlage_MHET2_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_Anlage_MHET2_NamPlt,
    (ModelNode*) &iedModel_Anlage_MHET2_NamPlt_swRev,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_Anlage_MHET2_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_Anlage_MHET2_NamPlt,
    (ModelNode*) &iedModel_Anlage_MHET2_NamPlt_d,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_Anlage_MHET2_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_Anlage_MHET2_NamPlt,
    NULL,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataObject iedModel_Anlage_MHET2_MatTyp = {
    DataObjectModelType,
    "MatTyp",
    (ModelNode*) &iedModel_Anlage_MHET2,
    (ModelNode*) &iedModel_Anlage_MHET2_AccHeatOut,
    NULL,
    0,
    0
};

DataObject iedModel_Anlage_MHET2_AccHeatOut = {
    DataObjectModelType,
    "AccHeatOut",
    (ModelNode*) &iedModel_Anlage_MHET2,
    NULL,
    (ModelNode*) &iedModel_Anlage_MHET2_AccHeatOut_instMag,
    0,
    0
};

DataAttribute iedModel_Anlage_MHET2_AccHeatOut_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_Anlage_MHET2_AccHeatOut,
    (ModelNode*) &iedModel_Anlage_MHET2_AccHeatOut_mag,
    (ModelNode*) &iedModel_Anlage_MHET2_AccHeatOut_instMag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_Anlage_MHET2_AccHeatOut_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Anlage_MHET2_AccHeatOut_instMag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_Anlage_MHET2_AccHeatOut_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_Anlage_MHET2_AccHeatOut,
    (ModelNode*) &iedModel_Anlage_MHET2_AccHeatOut_q,
    (ModelNode*) &iedModel_Anlage_MHET2_AccHeatOut_mag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_Anlage_MHET2_AccHeatOut_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Anlage_MHET2_AccHeatOut_mag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_Anlage_MHET2_AccHeatOut_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_MHET2_AccHeatOut,
    (ModelNode*) &iedModel_Anlage_MHET2_AccHeatOut_t,
    NULL,
    0,
    0,
    MX,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_MHET2_AccHeatOut_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_MHET2_AccHeatOut,
    NULL,
    NULL,
    0,
    0,
    MX,
    TIMESTAMP,
    NULL
};

LogicalNode iedModel_Anlage_MHET3 = {
    LogicalNodeModelType,
    "MHET3",
    &iedModel_Anlage,
    (ModelNode*) &iedModel_Anlage_DCTS1,
    (ModelNode*) &iedModel_Anlage_MHET3_Mod,
};

DataObject iedModel_Anlage_MHET3_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_Anlage_MHET3,
    (ModelNode*) &iedModel_Anlage_MHET3_Beh,
    (ModelNode*) &iedModel_Anlage_MHET3_Mod_q,
    0,
    0
};

DataAttribute iedModel_Anlage_MHET3_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_MHET3_Mod,
    (ModelNode*) &iedModel_Anlage_MHET3_Mod_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_MHET3_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_MHET3_Mod,
    (ModelNode*) &iedModel_Anlage_MHET3_Mod_ctlModel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_Anlage_MHET3_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_Anlage_MHET3_Mod,
    NULL,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataObject iedModel_Anlage_MHET3_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_Anlage_MHET3,
    (ModelNode*) &iedModel_Anlage_MHET3_Health,
    (ModelNode*) &iedModel_Anlage_MHET3_Beh_stVal,
    0,
    0
};

DataAttribute iedModel_Anlage_MHET3_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Anlage_MHET3_Beh,
    (ModelNode*) &iedModel_Anlage_MHET3_Beh_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_Anlage_MHET3_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_MHET3_Beh,
    (ModelNode*) &iedModel_Anlage_MHET3_Beh_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_MHET3_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_MHET3_Beh,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_Anlage_MHET3_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_Anlage_MHET3,
    (ModelNode*) &iedModel_Anlage_MHET3_NamPlt,
    (ModelNode*) &iedModel_Anlage_MHET3_Health_stVal,
    0,
    0
};

DataAttribute iedModel_Anlage_MHET3_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Anlage_MHET3_Health,
    (ModelNode*) &iedModel_Anlage_MHET3_Health_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_Anlage_MHET3_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_MHET3_Health,
    (ModelNode*) &iedModel_Anlage_MHET3_Health_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_MHET3_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_MHET3_Health,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_Anlage_MHET3_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_Anlage_MHET3,
    (ModelNode*) &iedModel_Anlage_MHET3_MatTyp,
    (ModelNode*) &iedModel_Anlage_MHET3_NamPlt_vendor,
    0,
    0
};

DataAttribute iedModel_Anlage_MHET3_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_Anlage_MHET3_NamPlt,
    (ModelNode*) &iedModel_Anlage_MHET3_NamPlt_swRev,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_Anlage_MHET3_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_Anlage_MHET3_NamPlt,
    (ModelNode*) &iedModel_Anlage_MHET3_NamPlt_d,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_Anlage_MHET3_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_Anlage_MHET3_NamPlt,
    NULL,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataObject iedModel_Anlage_MHET3_MatTyp = {
    DataObjectModelType,
    "MatTyp",
    (ModelNode*) &iedModel_Anlage_MHET3,
    (ModelNode*) &iedModel_Anlage_MHET3_AccHeatOut,
    NULL,
    0,
    0
};

DataObject iedModel_Anlage_MHET3_AccHeatOut = {
    DataObjectModelType,
    "AccHeatOut",
    (ModelNode*) &iedModel_Anlage_MHET3,
    NULL,
    (ModelNode*) &iedModel_Anlage_MHET3_AccHeatOut_instMag,
    0,
    0
};

DataAttribute iedModel_Anlage_MHET3_AccHeatOut_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_Anlage_MHET3_AccHeatOut,
    (ModelNode*) &iedModel_Anlage_MHET3_AccHeatOut_mag,
    (ModelNode*) &iedModel_Anlage_MHET3_AccHeatOut_instMag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_Anlage_MHET3_AccHeatOut_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Anlage_MHET3_AccHeatOut_instMag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_Anlage_MHET3_AccHeatOut_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_Anlage_MHET3_AccHeatOut,
    (ModelNode*) &iedModel_Anlage_MHET3_AccHeatOut_q,
    (ModelNode*) &iedModel_Anlage_MHET3_AccHeatOut_mag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_Anlage_MHET3_AccHeatOut_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Anlage_MHET3_AccHeatOut_mag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_Anlage_MHET3_AccHeatOut_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_MHET3_AccHeatOut,
    (ModelNode*) &iedModel_Anlage_MHET3_AccHeatOut_t,
    NULL,
    0,
    0,
    MX,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_MHET3_AccHeatOut_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_MHET3_AccHeatOut,
    NULL,
    NULL,
    0,
    0,
    MX,
    TIMESTAMP,
    NULL
};

LogicalNode iedModel_Anlage_DCTS1 = {
    LogicalNodeModelType,
    "DCTS1",
    &iedModel_Anlage,
    (ModelNode*) &iedModel_Anlage_STMP1,
    (ModelNode*) &iedModel_Anlage_DCTS1_Mod,
};

DataObject iedModel_Anlage_DCTS1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_Anlage_DCTS1,
    (ModelNode*) &iedModel_Anlage_DCTS1_Beh,
    (ModelNode*) &iedModel_Anlage_DCTS1_Mod_q,
    0,
    0
};

DataAttribute iedModel_Anlage_DCTS1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_DCTS1_Mod,
    (ModelNode*) &iedModel_Anlage_DCTS1_Mod_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_DCTS1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_DCTS1_Mod,
    (ModelNode*) &iedModel_Anlage_DCTS1_Mod_ctlModel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_Anlage_DCTS1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_Anlage_DCTS1_Mod,
    NULL,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataObject iedModel_Anlage_DCTS1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_Anlage_DCTS1,
    (ModelNode*) &iedModel_Anlage_DCTS1_Health,
    (ModelNode*) &iedModel_Anlage_DCTS1_Beh_stVal,
    0,
    0
};

DataAttribute iedModel_Anlage_DCTS1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Anlage_DCTS1_Beh,
    (ModelNode*) &iedModel_Anlage_DCTS1_Beh_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_Anlage_DCTS1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_DCTS1_Beh,
    (ModelNode*) &iedModel_Anlage_DCTS1_Beh_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_DCTS1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_DCTS1_Beh,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_Anlage_DCTS1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_Anlage_DCTS1,
    (ModelNode*) &iedModel_Anlage_DCTS1_NamPlt,
    (ModelNode*) &iedModel_Anlage_DCTS1_Health_stVal,
    0,
    0
};

DataAttribute iedModel_Anlage_DCTS1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Anlage_DCTS1_Health,
    (ModelNode*) &iedModel_Anlage_DCTS1_Health_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_Anlage_DCTS1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_DCTS1_Health,
    (ModelNode*) &iedModel_Anlage_DCTS1_Health_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_DCTS1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_DCTS1_Health,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_Anlage_DCTS1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_Anlage_DCTS1,
    (ModelNode*) &iedModel_Anlage_DCTS1_ThrmStoTyp,
    (ModelNode*) &iedModel_Anlage_DCTS1_NamPlt_vendor,
    0,
    0
};

DataAttribute iedModel_Anlage_DCTS1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_Anlage_DCTS1_NamPlt,
    (ModelNode*) &iedModel_Anlage_DCTS1_NamPlt_swRev,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_Anlage_DCTS1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_Anlage_DCTS1_NamPlt,
    (ModelNode*) &iedModel_Anlage_DCTS1_NamPlt_d,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_Anlage_DCTS1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_Anlage_DCTS1_NamPlt,
    NULL,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataObject iedModel_Anlage_DCTS1_ThrmStoTyp = {
    DataObjectModelType,
    "ThrmStoTyp",
    (ModelNode*) &iedModel_Anlage_DCTS1,
    (ModelNode*) &iedModel_Anlage_DCTS1_ThrmCapTot,
    NULL,
    0,
    0
};

DataObject iedModel_Anlage_DCTS1_ThrmCapTot = {
    DataObjectModelType,
    "ThrmCapTot",
    (ModelNode*) &iedModel_Anlage_DCTS1,
    (ModelNode*) &iedModel_Anlage_DCTS1_ThrmCapPct,
    (ModelNode*) &iedModel_Anlage_DCTS1_ThrmCapTot_instMag,
    0,
    0
};

DataAttribute iedModel_Anlage_DCTS1_ThrmCapTot_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_Anlage_DCTS1_ThrmCapTot,
    (ModelNode*) &iedModel_Anlage_DCTS1_ThrmCapTot_mag,
    (ModelNode*) &iedModel_Anlage_DCTS1_ThrmCapTot_instMag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_Anlage_DCTS1_ThrmCapTot_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Anlage_DCTS1_ThrmCapTot_instMag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_Anlage_DCTS1_ThrmCapTot_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_Anlage_DCTS1_ThrmCapTot,
    (ModelNode*) &iedModel_Anlage_DCTS1_ThrmCapTot_q,
    (ModelNode*) &iedModel_Anlage_DCTS1_ThrmCapTot_mag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_Anlage_DCTS1_ThrmCapTot_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Anlage_DCTS1_ThrmCapTot_mag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_Anlage_DCTS1_ThrmCapTot_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_DCTS1_ThrmCapTot,
    (ModelNode*) &iedModel_Anlage_DCTS1_ThrmCapTot_t,
    NULL,
    0,
    0,
    MX,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_DCTS1_ThrmCapTot_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_DCTS1_ThrmCapTot,
    NULL,
    NULL,
    0,
    0,
    MX,
    TIMESTAMP,
    NULL
};

DataObject iedModel_Anlage_DCTS1_ThrmCapPct = {
    DataObjectModelType,
    "ThrmCapPct",
    (ModelNode*) &iedModel_Anlage_DCTS1,
    NULL,
    (ModelNode*) &iedModel_Anlage_DCTS1_ThrmCapPct_instMag,
    0,
    0
};

DataAttribute iedModel_Anlage_DCTS1_ThrmCapPct_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_Anlage_DCTS1_ThrmCapPct,
    (ModelNode*) &iedModel_Anlage_DCTS1_ThrmCapPct_mag,
    (ModelNode*) &iedModel_Anlage_DCTS1_ThrmCapPct_instMag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_Anlage_DCTS1_ThrmCapPct_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Anlage_DCTS1_ThrmCapPct_instMag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_Anlage_DCTS1_ThrmCapPct_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_Anlage_DCTS1_ThrmCapPct,
    (ModelNode*) &iedModel_Anlage_DCTS1_ThrmCapPct_q,
    (ModelNode*) &iedModel_Anlage_DCTS1_ThrmCapPct_mag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_Anlage_DCTS1_ThrmCapPct_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Anlage_DCTS1_ThrmCapPct_mag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_Anlage_DCTS1_ThrmCapPct_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_DCTS1_ThrmCapPct,
    (ModelNode*) &iedModel_Anlage_DCTS1_ThrmCapPct_t,
    NULL,
    0,
    0,
    MX,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_DCTS1_ThrmCapPct_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_DCTS1_ThrmCapPct,
    NULL,
    NULL,
    0,
    0,
    MX,
    TIMESTAMP,
    NULL
};

LogicalNode iedModel_Anlage_STMP1 = {
    LogicalNodeModelType,
    "STMP1",
    &iedModel_Anlage,
    (ModelNode*) &iedModel_Anlage_STMP2,
    (ModelNode*) &iedModel_Anlage_STMP1_Mod,
};

DataObject iedModel_Anlage_STMP1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_Anlage_STMP1,
    (ModelNode*) &iedModel_Anlage_STMP1_Beh,
    (ModelNode*) &iedModel_Anlage_STMP1_Mod_q,
    0,
    0
};

DataAttribute iedModel_Anlage_STMP1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_STMP1_Mod,
    (ModelNode*) &iedModel_Anlage_STMP1_Mod_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_STMP1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_STMP1_Mod,
    (ModelNode*) &iedModel_Anlage_STMP1_Mod_ctlModel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_Anlage_STMP1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_Anlage_STMP1_Mod,
    NULL,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataObject iedModel_Anlage_STMP1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_Anlage_STMP1,
    (ModelNode*) &iedModel_Anlage_STMP1_Health,
    (ModelNode*) &iedModel_Anlage_STMP1_Beh_stVal,
    0,
    0
};

DataAttribute iedModel_Anlage_STMP1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Anlage_STMP1_Beh,
    (ModelNode*) &iedModel_Anlage_STMP1_Beh_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_Anlage_STMP1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_STMP1_Beh,
    (ModelNode*) &iedModel_Anlage_STMP1_Beh_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_STMP1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_STMP1_Beh,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_Anlage_STMP1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_Anlage_STMP1,
    (ModelNode*) &iedModel_Anlage_STMP1_NamPlt,
    (ModelNode*) &iedModel_Anlage_STMP1_Health_stVal,
    0,
    0
};

DataAttribute iedModel_Anlage_STMP1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Anlage_STMP1_Health,
    (ModelNode*) &iedModel_Anlage_STMP1_Health_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_Anlage_STMP1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_STMP1_Health,
    (ModelNode*) &iedModel_Anlage_STMP1_Health_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_STMP1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_STMP1_Health,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_Anlage_STMP1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_Anlage_STMP1,
    (ModelNode*) &iedModel_Anlage_STMP1_Tmp,
    (ModelNode*) &iedModel_Anlage_STMP1_NamPlt_vendor,
    0,
    0
};

DataAttribute iedModel_Anlage_STMP1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_Anlage_STMP1_NamPlt,
    (ModelNode*) &iedModel_Anlage_STMP1_NamPlt_swRev,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_Anlage_STMP1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_Anlage_STMP1_NamPlt,
    (ModelNode*) &iedModel_Anlage_STMP1_NamPlt_d,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_Anlage_STMP1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_Anlage_STMP1_NamPlt,
    NULL,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataObject iedModel_Anlage_STMP1_Tmp = {
    DataObjectModelType,
    "Tmp",
    (ModelNode*) &iedModel_Anlage_STMP1,
    NULL,
    (ModelNode*) &iedModel_Anlage_STMP1_Tmp_instMag,
    0,
    0
};

DataAttribute iedModel_Anlage_STMP1_Tmp_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_Anlage_STMP1_Tmp,
    (ModelNode*) &iedModel_Anlage_STMP1_Tmp_mag,
    (ModelNode*) &iedModel_Anlage_STMP1_Tmp_instMag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_Anlage_STMP1_Tmp_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Anlage_STMP1_Tmp_instMag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_Anlage_STMP1_Tmp_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_Anlage_STMP1_Tmp,
    (ModelNode*) &iedModel_Anlage_STMP1_Tmp_q,
    (ModelNode*) &iedModel_Anlage_STMP1_Tmp_mag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_Anlage_STMP1_Tmp_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Anlage_STMP1_Tmp_mag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_Anlage_STMP1_Tmp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_STMP1_Tmp,
    (ModelNode*) &iedModel_Anlage_STMP1_Tmp_t,
    NULL,
    0,
    0,
    MX,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_STMP1_Tmp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_STMP1_Tmp,
    NULL,
    NULL,
    0,
    0,
    MX,
    TIMESTAMP,
    NULL
};

LogicalNode iedModel_Anlage_STMP2 = {
    LogicalNodeModelType,
    "STMP2",
    &iedModel_Anlage,
    (ModelNode*) &iedModel_Anlage_STMP3,
    (ModelNode*) &iedModel_Anlage_STMP2_Mod,
};

DataObject iedModel_Anlage_STMP2_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_Anlage_STMP2,
    (ModelNode*) &iedModel_Anlage_STMP2_Beh,
    (ModelNode*) &iedModel_Anlage_STMP2_Mod_q,
    0,
    0
};

DataAttribute iedModel_Anlage_STMP2_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_STMP2_Mod,
    (ModelNode*) &iedModel_Anlage_STMP2_Mod_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_STMP2_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_STMP2_Mod,
    (ModelNode*) &iedModel_Anlage_STMP2_Mod_ctlModel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_Anlage_STMP2_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_Anlage_STMP2_Mod,
    NULL,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataObject iedModel_Anlage_STMP2_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_Anlage_STMP2,
    (ModelNode*) &iedModel_Anlage_STMP2_Health,
    (ModelNode*) &iedModel_Anlage_STMP2_Beh_stVal,
    0,
    0
};

DataAttribute iedModel_Anlage_STMP2_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Anlage_STMP2_Beh,
    (ModelNode*) &iedModel_Anlage_STMP2_Beh_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_Anlage_STMP2_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_STMP2_Beh,
    (ModelNode*) &iedModel_Anlage_STMP2_Beh_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_STMP2_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_STMP2_Beh,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_Anlage_STMP2_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_Anlage_STMP2,
    (ModelNode*) &iedModel_Anlage_STMP2_NamPlt,
    (ModelNode*) &iedModel_Anlage_STMP2_Health_stVal,
    0,
    0
};

DataAttribute iedModel_Anlage_STMP2_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Anlage_STMP2_Health,
    (ModelNode*) &iedModel_Anlage_STMP2_Health_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_Anlage_STMP2_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_STMP2_Health,
    (ModelNode*) &iedModel_Anlage_STMP2_Health_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_STMP2_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_STMP2_Health,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_Anlage_STMP2_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_Anlage_STMP2,
    (ModelNode*) &iedModel_Anlage_STMP2_Tmp,
    (ModelNode*) &iedModel_Anlage_STMP2_NamPlt_vendor,
    0,
    0
};

DataAttribute iedModel_Anlage_STMP2_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_Anlage_STMP2_NamPlt,
    (ModelNode*) &iedModel_Anlage_STMP2_NamPlt_swRev,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_Anlage_STMP2_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_Anlage_STMP2_NamPlt,
    (ModelNode*) &iedModel_Anlage_STMP2_NamPlt_d,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_Anlage_STMP2_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_Anlage_STMP2_NamPlt,
    NULL,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataObject iedModel_Anlage_STMP2_Tmp = {
    DataObjectModelType,
    "Tmp",
    (ModelNode*) &iedModel_Anlage_STMP2,
    NULL,
    (ModelNode*) &iedModel_Anlage_STMP2_Tmp_instMag,
    0,
    0
};

DataAttribute iedModel_Anlage_STMP2_Tmp_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_Anlage_STMP2_Tmp,
    (ModelNode*) &iedModel_Anlage_STMP2_Tmp_mag,
    (ModelNode*) &iedModel_Anlage_STMP2_Tmp_instMag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_Anlage_STMP2_Tmp_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Anlage_STMP2_Tmp_instMag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_Anlage_STMP2_Tmp_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_Anlage_STMP2_Tmp,
    (ModelNode*) &iedModel_Anlage_STMP2_Tmp_q,
    (ModelNode*) &iedModel_Anlage_STMP2_Tmp_mag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_Anlage_STMP2_Tmp_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Anlage_STMP2_Tmp_mag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_Anlage_STMP2_Tmp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_STMP2_Tmp,
    (ModelNode*) &iedModel_Anlage_STMP2_Tmp_t,
    NULL,
    0,
    0,
    MX,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_STMP2_Tmp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_STMP2_Tmp,
    NULL,
    NULL,
    0,
    0,
    MX,
    TIMESTAMP,
    NULL
};

LogicalNode iedModel_Anlage_STMP3 = {
    LogicalNodeModelType,
    "STMP3",
    &iedModel_Anlage,
    (ModelNode*) &iedModel_Anlage_STMP4,
    (ModelNode*) &iedModel_Anlage_STMP3_Mod,
};

DataObject iedModel_Anlage_STMP3_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_Anlage_STMP3,
    (ModelNode*) &iedModel_Anlage_STMP3_Beh,
    (ModelNode*) &iedModel_Anlage_STMP3_Mod_q,
    0,
    0
};

DataAttribute iedModel_Anlage_STMP3_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_STMP3_Mod,
    (ModelNode*) &iedModel_Anlage_STMP3_Mod_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_STMP3_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_STMP3_Mod,
    (ModelNode*) &iedModel_Anlage_STMP3_Mod_ctlModel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_Anlage_STMP3_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_Anlage_STMP3_Mod,
    NULL,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataObject iedModel_Anlage_STMP3_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_Anlage_STMP3,
    (ModelNode*) &iedModel_Anlage_STMP3_Health,
    (ModelNode*) &iedModel_Anlage_STMP3_Beh_stVal,
    0,
    0
};

DataAttribute iedModel_Anlage_STMP3_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Anlage_STMP3_Beh,
    (ModelNode*) &iedModel_Anlage_STMP3_Beh_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_Anlage_STMP3_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_STMP3_Beh,
    (ModelNode*) &iedModel_Anlage_STMP3_Beh_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_STMP3_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_STMP3_Beh,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_Anlage_STMP3_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_Anlage_STMP3,
    (ModelNode*) &iedModel_Anlage_STMP3_NamPlt,
    (ModelNode*) &iedModel_Anlage_STMP3_Health_stVal,
    0,
    0
};

DataAttribute iedModel_Anlage_STMP3_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Anlage_STMP3_Health,
    (ModelNode*) &iedModel_Anlage_STMP3_Health_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_Anlage_STMP3_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_STMP3_Health,
    (ModelNode*) &iedModel_Anlage_STMP3_Health_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_STMP3_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_STMP3_Health,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_Anlage_STMP3_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_Anlage_STMP3,
    (ModelNode*) &iedModel_Anlage_STMP3_Tmp,
    (ModelNode*) &iedModel_Anlage_STMP3_NamPlt_vendor,
    0,
    0
};

DataAttribute iedModel_Anlage_STMP3_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_Anlage_STMP3_NamPlt,
    (ModelNode*) &iedModel_Anlage_STMP3_NamPlt_swRev,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_Anlage_STMP3_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_Anlage_STMP3_NamPlt,
    (ModelNode*) &iedModel_Anlage_STMP3_NamPlt_d,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_Anlage_STMP3_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_Anlage_STMP3_NamPlt,
    NULL,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataObject iedModel_Anlage_STMP3_Tmp = {
    DataObjectModelType,
    "Tmp",
    (ModelNode*) &iedModel_Anlage_STMP3,
    NULL,
    (ModelNode*) &iedModel_Anlage_STMP3_Tmp_instMag,
    0,
    0
};

DataAttribute iedModel_Anlage_STMP3_Tmp_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_Anlage_STMP3_Tmp,
    (ModelNode*) &iedModel_Anlage_STMP3_Tmp_mag,
    (ModelNode*) &iedModel_Anlage_STMP3_Tmp_instMag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_Anlage_STMP3_Tmp_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Anlage_STMP3_Tmp_instMag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_Anlage_STMP3_Tmp_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_Anlage_STMP3_Tmp,
    (ModelNode*) &iedModel_Anlage_STMP3_Tmp_q,
    (ModelNode*) &iedModel_Anlage_STMP3_Tmp_mag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_Anlage_STMP3_Tmp_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Anlage_STMP3_Tmp_mag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_Anlage_STMP3_Tmp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_STMP3_Tmp,
    (ModelNode*) &iedModel_Anlage_STMP3_Tmp_t,
    NULL,
    0,
    0,
    MX,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_STMP3_Tmp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_STMP3_Tmp,
    NULL,
    NULL,
    0,
    0,
    MX,
    TIMESTAMP,
    NULL
};

LogicalNode iedModel_Anlage_STMP4 = {
    LogicalNodeModelType,
    "STMP4",
    &iedModel_Anlage,
    (ModelNode*) &iedModel_Anlage_STMP5,
    (ModelNode*) &iedModel_Anlage_STMP4_Mod,
};

DataObject iedModel_Anlage_STMP4_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_Anlage_STMP4,
    (ModelNode*) &iedModel_Anlage_STMP4_Beh,
    (ModelNode*) &iedModel_Anlage_STMP4_Mod_q,
    0,
    0
};

DataAttribute iedModel_Anlage_STMP4_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_STMP4_Mod,
    (ModelNode*) &iedModel_Anlage_STMP4_Mod_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_STMP4_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_STMP4_Mod,
    (ModelNode*) &iedModel_Anlage_STMP4_Mod_ctlModel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_Anlage_STMP4_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_Anlage_STMP4_Mod,
    NULL,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataObject iedModel_Anlage_STMP4_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_Anlage_STMP4,
    (ModelNode*) &iedModel_Anlage_STMP4_Health,
    (ModelNode*) &iedModel_Anlage_STMP4_Beh_stVal,
    0,
    0
};

DataAttribute iedModel_Anlage_STMP4_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Anlage_STMP4_Beh,
    (ModelNode*) &iedModel_Anlage_STMP4_Beh_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_Anlage_STMP4_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_STMP4_Beh,
    (ModelNode*) &iedModel_Anlage_STMP4_Beh_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_STMP4_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_STMP4_Beh,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_Anlage_STMP4_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_Anlage_STMP4,
    (ModelNode*) &iedModel_Anlage_STMP4_NamPlt,
    (ModelNode*) &iedModel_Anlage_STMP4_Health_stVal,
    0,
    0
};

DataAttribute iedModel_Anlage_STMP4_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Anlage_STMP4_Health,
    (ModelNode*) &iedModel_Anlage_STMP4_Health_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_Anlage_STMP4_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_STMP4_Health,
    (ModelNode*) &iedModel_Anlage_STMP4_Health_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_STMP4_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_STMP4_Health,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_Anlage_STMP4_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_Anlage_STMP4,
    (ModelNode*) &iedModel_Anlage_STMP4_Tmp,
    (ModelNode*) &iedModel_Anlage_STMP4_NamPlt_vendor,
    0,
    0
};

DataAttribute iedModel_Anlage_STMP4_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_Anlage_STMP4_NamPlt,
    (ModelNode*) &iedModel_Anlage_STMP4_NamPlt_swRev,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_Anlage_STMP4_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_Anlage_STMP4_NamPlt,
    (ModelNode*) &iedModel_Anlage_STMP4_NamPlt_d,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_Anlage_STMP4_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_Anlage_STMP4_NamPlt,
    NULL,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataObject iedModel_Anlage_STMP4_Tmp = {
    DataObjectModelType,
    "Tmp",
    (ModelNode*) &iedModel_Anlage_STMP4,
    NULL,
    (ModelNode*) &iedModel_Anlage_STMP4_Tmp_instMag,
    0,
    0
};

DataAttribute iedModel_Anlage_STMP4_Tmp_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_Anlage_STMP4_Tmp,
    (ModelNode*) &iedModel_Anlage_STMP4_Tmp_mag,
    (ModelNode*) &iedModel_Anlage_STMP4_Tmp_instMag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_Anlage_STMP4_Tmp_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Anlage_STMP4_Tmp_instMag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_Anlage_STMP4_Tmp_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_Anlage_STMP4_Tmp,
    (ModelNode*) &iedModel_Anlage_STMP4_Tmp_q,
    (ModelNode*) &iedModel_Anlage_STMP4_Tmp_mag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_Anlage_STMP4_Tmp_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Anlage_STMP4_Tmp_mag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_Anlage_STMP4_Tmp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_STMP4_Tmp,
    (ModelNode*) &iedModel_Anlage_STMP4_Tmp_t,
    NULL,
    0,
    0,
    MX,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_STMP4_Tmp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_STMP4_Tmp,
    NULL,
    NULL,
    0,
    0,
    MX,
    TIMESTAMP,
    NULL
};

LogicalNode iedModel_Anlage_STMP5 = {
    LogicalNodeModelType,
    "STMP5",
    &iedModel_Anlage,
    (ModelNode*) &iedModel_Anlage_MENV1,
    (ModelNode*) &iedModel_Anlage_STMP5_Mod,
};

DataObject iedModel_Anlage_STMP5_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_Anlage_STMP5,
    (ModelNode*) &iedModel_Anlage_STMP5_Beh,
    (ModelNode*) &iedModel_Anlage_STMP5_Mod_q,
    0,
    0
};

DataAttribute iedModel_Anlage_STMP5_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_STMP5_Mod,
    (ModelNode*) &iedModel_Anlage_STMP5_Mod_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_STMP5_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_STMP5_Mod,
    (ModelNode*) &iedModel_Anlage_STMP5_Mod_ctlModel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_Anlage_STMP5_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_Anlage_STMP5_Mod,
    NULL,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataObject iedModel_Anlage_STMP5_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_Anlage_STMP5,
    (ModelNode*) &iedModel_Anlage_STMP5_Health,
    (ModelNode*) &iedModel_Anlage_STMP5_Beh_stVal,
    0,
    0
};

DataAttribute iedModel_Anlage_STMP5_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Anlage_STMP5_Beh,
    (ModelNode*) &iedModel_Anlage_STMP5_Beh_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_Anlage_STMP5_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_STMP5_Beh,
    (ModelNode*) &iedModel_Anlage_STMP5_Beh_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_STMP5_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_STMP5_Beh,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_Anlage_STMP5_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_Anlage_STMP5,
    (ModelNode*) &iedModel_Anlage_STMP5_NamPlt,
    (ModelNode*) &iedModel_Anlage_STMP5_Health_stVal,
    0,
    0
};

DataAttribute iedModel_Anlage_STMP5_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Anlage_STMP5_Health,
    (ModelNode*) &iedModel_Anlage_STMP5_Health_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_Anlage_STMP5_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_STMP5_Health,
    (ModelNode*) &iedModel_Anlage_STMP5_Health_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_STMP5_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_STMP5_Health,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_Anlage_STMP5_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_Anlage_STMP5,
    (ModelNode*) &iedModel_Anlage_STMP5_Tmp,
    (ModelNode*) &iedModel_Anlage_STMP5_NamPlt_vendor,
    0,
    0
};

DataAttribute iedModel_Anlage_STMP5_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_Anlage_STMP5_NamPlt,
    (ModelNode*) &iedModel_Anlage_STMP5_NamPlt_swRev,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_Anlage_STMP5_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_Anlage_STMP5_NamPlt,
    (ModelNode*) &iedModel_Anlage_STMP5_NamPlt_d,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_Anlage_STMP5_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_Anlage_STMP5_NamPlt,
    NULL,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataObject iedModel_Anlage_STMP5_Tmp = {
    DataObjectModelType,
    "Tmp",
    (ModelNode*) &iedModel_Anlage_STMP5,
    NULL,
    (ModelNode*) &iedModel_Anlage_STMP5_Tmp_instMag,
    0,
    0
};

DataAttribute iedModel_Anlage_STMP5_Tmp_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_Anlage_STMP5_Tmp,
    (ModelNode*) &iedModel_Anlage_STMP5_Tmp_mag,
    (ModelNode*) &iedModel_Anlage_STMP5_Tmp_instMag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_Anlage_STMP5_Tmp_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Anlage_STMP5_Tmp_instMag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_Anlage_STMP5_Tmp_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_Anlage_STMP5_Tmp,
    (ModelNode*) &iedModel_Anlage_STMP5_Tmp_q,
    (ModelNode*) &iedModel_Anlage_STMP5_Tmp_mag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_Anlage_STMP5_Tmp_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Anlage_STMP5_Tmp_mag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_Anlage_STMP5_Tmp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_STMP5_Tmp,
    (ModelNode*) &iedModel_Anlage_STMP5_Tmp_t,
    NULL,
    0,
    0,
    MX,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_STMP5_Tmp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_STMP5_Tmp,
    NULL,
    NULL,
    0,
    0,
    MX,
    TIMESTAMP,
    NULL
};

LogicalNode iedModel_Anlage_MENV1 = {
    LogicalNodeModelType,
    "MENV1",
    &iedModel_Anlage,
    NULL,
    (ModelNode*) &iedModel_Anlage_MENV1_Mod,
};

DataObject iedModel_Anlage_MENV1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_Anlage_MENV1,
    (ModelNode*) &iedModel_Anlage_MENV1_Beh,
    (ModelNode*) &iedModel_Anlage_MENV1_Mod_q,
    0,
    0
};

DataAttribute iedModel_Anlage_MENV1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_MENV1_Mod,
    (ModelNode*) &iedModel_Anlage_MENV1_Mod_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_MENV1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_MENV1_Mod,
    (ModelNode*) &iedModel_Anlage_MENV1_Mod_ctlModel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_Anlage_MENV1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_Anlage_MENV1_Mod,
    NULL,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataObject iedModel_Anlage_MENV1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_Anlage_MENV1,
    (ModelNode*) &iedModel_Anlage_MENV1_Health,
    (ModelNode*) &iedModel_Anlage_MENV1_Beh_stVal,
    0,
    0
};

DataAttribute iedModel_Anlage_MENV1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Anlage_MENV1_Beh,
    (ModelNode*) &iedModel_Anlage_MENV1_Beh_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_Anlage_MENV1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_MENV1_Beh,
    (ModelNode*) &iedModel_Anlage_MENV1_Beh_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_MENV1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_MENV1_Beh,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_Anlage_MENV1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_Anlage_MENV1,
    (ModelNode*) &iedModel_Anlage_MENV1_NamPlt,
    (ModelNode*) &iedModel_Anlage_MENV1_Health_stVal,
    0,
    0
};

DataAttribute iedModel_Anlage_MENV1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Anlage_MENV1_Health,
    (ModelNode*) &iedModel_Anlage_MENV1_Health_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_Anlage_MENV1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_MENV1_Health,
    (ModelNode*) &iedModel_Anlage_MENV1_Health_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_MENV1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_MENV1_Health,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_Anlage_MENV1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_Anlage_MENV1,
    (ModelNode*) &iedModel_Anlage_MENV1_SmokAlm,
    (ModelNode*) &iedModel_Anlage_MENV1_NamPlt_vendor,
    0,
    0
};

DataAttribute iedModel_Anlage_MENV1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_Anlage_MENV1_NamPlt,
    (ModelNode*) &iedModel_Anlage_MENV1_NamPlt_swRev,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_Anlage_MENV1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_Anlage_MENV1_NamPlt,
    (ModelNode*) &iedModel_Anlage_MENV1_NamPlt_d,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_Anlage_MENV1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_Anlage_MENV1_NamPlt,
    NULL,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataObject iedModel_Anlage_MENV1_SmokAlm = {
    DataObjectModelType,
    "SmokAlm",
    (ModelNode*) &iedModel_Anlage_MENV1,
    (ModelNode*) &iedModel_Anlage_MENV1_FloodAlm,
    (ModelNode*) &iedModel_Anlage_MENV1_SmokAlm_stVal,
    0,
    0
};

DataAttribute iedModel_Anlage_MENV1_SmokAlm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Anlage_MENV1_SmokAlm,
    (ModelNode*) &iedModel_Anlage_MENV1_SmokAlm_q,
    NULL,
    0,
    0,
    ST,
    BOOLEAN,
    NULL
};

DataAttribute iedModel_Anlage_MENV1_SmokAlm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_MENV1_SmokAlm,
    (ModelNode*) &iedModel_Anlage_MENV1_SmokAlm_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_MENV1_SmokAlm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_MENV1_SmokAlm,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_Anlage_MENV1_FloodAlm = {
    DataObjectModelType,
    "FloodAlm",
    (ModelNode*) &iedModel_Anlage_MENV1,
    NULL,
    (ModelNode*) &iedModel_Anlage_MENV1_FloodAlm_stVal,
    0,
    0
};

DataAttribute iedModel_Anlage_MENV1_FloodAlm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Anlage_MENV1_FloodAlm,
    (ModelNode*) &iedModel_Anlage_MENV1_FloodAlm_q,
    NULL,
    0,
    0,
    ST,
    BOOLEAN,
    NULL
};

DataAttribute iedModel_Anlage_MENV1_FloodAlm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Anlage_MENV1_FloodAlm,
    (ModelNode*) &iedModel_Anlage_MENV1_FloodAlm_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_Anlage_MENV1_FloodAlm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Anlage_MENV1_FloodAlm,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};


LogicalDevice iedModel_BHKW = {
    "IEDM1CPUBHKW",
    NULL,
    &iedModel_BHKW_LLN0
};

LogicalNode iedModel_BHKW_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    &iedModel_BHKW,
    (ModelNode*) &iedModel_BHKW_LPHD1,
    (ModelNode*) &iedModel_BHKW_LLN0_Mod,
};

DataObject iedModel_BHKW_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_BHKW_LLN0,
    (ModelNode*) &iedModel_BHKW_LLN0_Beh,
    (ModelNode*) &iedModel_BHKW_LLN0_Mod_q,
    0,
    0
};

DataAttribute iedModel_BHKW_LLN0_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_LLN0_Mod,
    (ModelNode*) &iedModel_BHKW_LLN0_Mod_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_LLN0_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_LLN0_Mod,
    (ModelNode*) &iedModel_BHKW_LLN0_Mod_ctlModel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_BHKW_LLN0_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_BHKW_LLN0_Mod,
    NULL,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataObject iedModel_BHKW_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_BHKW_LLN0,
    (ModelNode*) &iedModel_BHKW_LLN0_Health,
    (ModelNode*) &iedModel_BHKW_LLN0_Beh_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_LLN0_Beh,
    (ModelNode*) &iedModel_BHKW_LLN0_Beh_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_BHKW_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_LLN0_Beh,
    (ModelNode*) &iedModel_BHKW_LLN0_Beh_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_LLN0_Beh,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_LLN0_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_BHKW_LLN0,
    (ModelNode*) &iedModel_BHKW_LLN0_NamPlt,
    (ModelNode*) &iedModel_BHKW_LLN0_Health_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_LLN0_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_LLN0_Health,
    (ModelNode*) &iedModel_BHKW_LLN0_Health_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_BHKW_LLN0_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_LLN0_Health,
    (ModelNode*) &iedModel_BHKW_LLN0_Health_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_LLN0_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_LLN0_Health,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_BHKW_LLN0,
    NULL,
    (ModelNode*) &iedModel_BHKW_LLN0_NamPlt_vendor,
    0,
    0
};

DataAttribute iedModel_BHKW_LLN0_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_BHKW_LLN0_NamPlt,
    (ModelNode*) &iedModel_BHKW_LLN0_NamPlt_swRev,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_BHKW_LLN0_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_BHKW_LLN0_NamPlt,
    (ModelNode*) &iedModel_BHKW_LLN0_NamPlt_d,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_BHKW_LLN0_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_BHKW_LLN0_NamPlt,
    (ModelNode*) &iedModel_BHKW_LLN0_NamPlt_configRev,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_BHKW_LLN0_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_BHKW_LLN0_NamPlt,
    (ModelNode*) &iedModel_BHKW_LLN0_NamPlt_ldNs,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_BHKW_LLN0_NamPlt_ldNs = {
    DataAttributeModelType,
    "ldNs",
    (ModelNode*) &iedModel_BHKW_LLN0_NamPlt,
    NULL,
    NULL,
    0,
    0,
    EX,
    VISIBLE_STRING_255,
    NULL
};

LogicalNode iedModel_BHKW_LPHD1 = {
    LogicalNodeModelType,
    "LPHD1",
    &iedModel_BHKW,
    (ModelNode*) &iedModel_BHKW_MMTR1,
    (ModelNode*) &iedModel_BHKW_LPHD1_PhyNam,
};

DataObject iedModel_BHKW_LPHD1_PhyNam = {
    DataObjectModelType,
    "PhyNam",
    (ModelNode*) &iedModel_BHKW_LPHD1,
    (ModelNode*) &iedModel_BHKW_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_BHKW_LPHD1_PhyNam_vendor,
    0,
    0
};

DataAttribute iedModel_BHKW_LPHD1_PhyNam_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_BHKW_LPHD1_PhyNam,
    NULL,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataObject iedModel_BHKW_LPHD1_PhyHealth = {
    DataObjectModelType,
    "PhyHealth",
    (ModelNode*) &iedModel_BHKW_LPHD1,
    (ModelNode*) &iedModel_BHKW_LPHD1_Proxy,
    (ModelNode*) &iedModel_BHKW_LPHD1_PhyHealth_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_LPHD1_PhyHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_BHKW_LPHD1_PhyHealth_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_BHKW_LPHD1_PhyHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_BHKW_LPHD1_PhyHealth_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_LPHD1_PhyHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_LPHD1_PhyHealth,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_LPHD1_Proxy = {
    DataObjectModelType,
    "Proxy",
    (ModelNode*) &iedModel_BHKW_LPHD1,
    NULL,
    (ModelNode*) &iedModel_BHKW_LPHD1_Proxy_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_LPHD1_Proxy_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_LPHD1_Proxy,
    (ModelNode*) &iedModel_BHKW_LPHD1_Proxy_q,
    NULL,
    0,
    0,
    ST,
    BOOLEAN,
    NULL
};

DataAttribute iedModel_BHKW_LPHD1_Proxy_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_LPHD1_Proxy,
    (ModelNode*) &iedModel_BHKW_LPHD1_Proxy_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_LPHD1_Proxy_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_LPHD1_Proxy,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

LogicalNode iedModel_BHKW_MMTR1 = {
    LogicalNodeModelType,
    "MMTR1",
    &iedModel_BHKW,
    (ModelNode*) &iedModel_BHKW_MMXU1,
    (ModelNode*) &iedModel_BHKW_MMTR1_Mod,
};

DataObject iedModel_BHKW_MMTR1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_BHKW_MMTR1,
    (ModelNode*) &iedModel_BHKW_MMTR1_Beh,
    (ModelNode*) &iedModel_BHKW_MMTR1_Mod_q,
    0,
    0
};

DataAttribute iedModel_BHKW_MMTR1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_MMTR1_Mod,
    (ModelNode*) &iedModel_BHKW_MMTR1_Mod_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_MMTR1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_MMTR1_Mod,
    (ModelNode*) &iedModel_BHKW_MMTR1_Mod_ctlModel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_BHKW_MMTR1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_BHKW_MMTR1_Mod,
    NULL,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataObject iedModel_BHKW_MMTR1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_BHKW_MMTR1,
    (ModelNode*) &iedModel_BHKW_MMTR1_Health,
    (ModelNode*) &iedModel_BHKW_MMTR1_Beh_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_MMTR1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_MMTR1_Beh,
    (ModelNode*) &iedModel_BHKW_MMTR1_Beh_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_BHKW_MMTR1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_MMTR1_Beh,
    (ModelNode*) &iedModel_BHKW_MMTR1_Beh_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_MMTR1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_MMTR1_Beh,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_MMTR1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_BHKW_MMTR1,
    (ModelNode*) &iedModel_BHKW_MMTR1_NamPlt,
    (ModelNode*) &iedModel_BHKW_MMTR1_Health_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_MMTR1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_MMTR1_Health,
    (ModelNode*) &iedModel_BHKW_MMTR1_Health_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_BHKW_MMTR1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_MMTR1_Health,
    (ModelNode*) &iedModel_BHKW_MMTR1_Health_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_MMTR1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_MMTR1_Health,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_MMTR1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_BHKW_MMTR1,
    (ModelNode*) &iedModel_BHKW_MMTR1_TotWh,
    (ModelNode*) &iedModel_BHKW_MMTR1_NamPlt_vendor,
    0,
    0
};

DataAttribute iedModel_BHKW_MMTR1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_BHKW_MMTR1_NamPlt,
    (ModelNode*) &iedModel_BHKW_MMTR1_NamPlt_swRev,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_BHKW_MMTR1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_BHKW_MMTR1_NamPlt,
    (ModelNode*) &iedModel_BHKW_MMTR1_NamPlt_d,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_BHKW_MMTR1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_BHKW_MMTR1_NamPlt,
    NULL,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataObject iedModel_BHKW_MMTR1_TotWh = {
    DataObjectModelType,
    "TotWh",
    (ModelNode*) &iedModel_BHKW_MMTR1,
    NULL,
    (ModelNode*) &iedModel_BHKW_MMTR1_TotWh_actVal,
    0,
    0
};

DataAttribute iedModel_BHKW_MMTR1_TotWh_actVal = {
    DataAttributeModelType,
    "actVal",
    (ModelNode*) &iedModel_BHKW_MMTR1_TotWh,
    (ModelNode*) &iedModel_BHKW_MMTR1_TotWh_q,
    NULL,
    0,
    0,
    ST,
    INT64,
    NULL
};

DataAttribute iedModel_BHKW_MMTR1_TotWh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_MMTR1_TotWh,
    (ModelNode*) &iedModel_BHKW_MMTR1_TotWh_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_MMTR1_TotWh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_MMTR1_TotWh,
    (ModelNode*) &iedModel_BHKW_MMTR1_TotWh_pulsQty,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_BHKW_MMTR1_TotWh_pulsQty = {
    DataAttributeModelType,
    "pulsQty",
    (ModelNode*) &iedModel_BHKW_MMTR1_TotWh,
    NULL,
    NULL,
    0,
    0,
    CF,
    FLOAT32,
    NULL
};

LogicalNode iedModel_BHKW_MMXU1 = {
    LogicalNodeModelType,
    "MMXU1",
    &iedModel_BHKW,
    (ModelNode*) &iedModel_BHKW_DCTS1,
    (ModelNode*) &iedModel_BHKW_MMXU1_Mod,
};

DataObject iedModel_BHKW_MMXU1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_BHKW_MMXU1,
    (ModelNode*) &iedModel_BHKW_MMXU1_Beh,
    (ModelNode*) &iedModel_BHKW_MMXU1_Mod_q,
    0,
    0
};

DataAttribute iedModel_BHKW_MMXU1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_MMXU1_Mod,
    (ModelNode*) &iedModel_BHKW_MMXU1_Mod_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_MMXU1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_MMXU1_Mod,
    (ModelNode*) &iedModel_BHKW_MMXU1_Mod_ctlModel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_BHKW_MMXU1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_BHKW_MMXU1_Mod,
    NULL,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataObject iedModel_BHKW_MMXU1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_BHKW_MMXU1,
    (ModelNode*) &iedModel_BHKW_MMXU1_Health,
    (ModelNode*) &iedModel_BHKW_MMXU1_Beh_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_MMXU1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_MMXU1_Beh,
    (ModelNode*) &iedModel_BHKW_MMXU1_Beh_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_BHKW_MMXU1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_MMXU1_Beh,
    (ModelNode*) &iedModel_BHKW_MMXU1_Beh_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_MMXU1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_MMXU1_Beh,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_MMXU1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_BHKW_MMXU1,
    (ModelNode*) &iedModel_BHKW_MMXU1_NamPlt,
    (ModelNode*) &iedModel_BHKW_MMXU1_Health_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_MMXU1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_MMXU1_Health,
    (ModelNode*) &iedModel_BHKW_MMXU1_Health_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_BHKW_MMXU1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_MMXU1_Health,
    (ModelNode*) &iedModel_BHKW_MMXU1_Health_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_MMXU1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_MMXU1_Health,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_MMXU1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_BHKW_MMXU1,
    (ModelNode*) &iedModel_BHKW_MMXU1_TotW,
    (ModelNode*) &iedModel_BHKW_MMXU1_NamPlt_vendor,
    0,
    0
};

DataAttribute iedModel_BHKW_MMXU1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_BHKW_MMXU1_NamPlt,
    (ModelNode*) &iedModel_BHKW_MMXU1_NamPlt_swRev,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_BHKW_MMXU1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_BHKW_MMXU1_NamPlt,
    (ModelNode*) &iedModel_BHKW_MMXU1_NamPlt_d,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_BHKW_MMXU1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_BHKW_MMXU1_NamPlt,
    NULL,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataObject iedModel_BHKW_MMXU1_TotW = {
    DataObjectModelType,
    "TotW",
    (ModelNode*) &iedModel_BHKW_MMXU1,
    NULL,
    (ModelNode*) &iedModel_BHKW_MMXU1_TotW_instMag,
    0,
    0
};

DataAttribute iedModel_BHKW_MMXU1_TotW_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_BHKW_MMXU1_TotW,
    (ModelNode*) &iedModel_BHKW_MMXU1_TotW_mag,
    (ModelNode*) &iedModel_BHKW_MMXU1_TotW_instMag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_MMXU1_TotW_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_BHKW_MMXU1_TotW_instMag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_BHKW_MMXU1_TotW_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_BHKW_MMXU1_TotW,
    (ModelNode*) &iedModel_BHKW_MMXU1_TotW_q,
    (ModelNode*) &iedModel_BHKW_MMXU1_TotW_mag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_MMXU1_TotW_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_BHKW_MMXU1_TotW_mag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_BHKW_MMXU1_TotW_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_MMXU1_TotW,
    (ModelNode*) &iedModel_BHKW_MMXU1_TotW_t,
    NULL,
    0,
    0,
    MX,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_MMXU1_TotW_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_MMXU1_TotW,
    NULL,
    NULL,
    0,
    0,
    MX,
    TIMESTAMP,
    NULL
};

LogicalNode iedModel_BHKW_DCTS1 = {
    LogicalNodeModelType,
    "DCTS1",
    &iedModel_BHKW,
    (ModelNode*) &iedModel_BHKW_MHET1,
    (ModelNode*) &iedModel_BHKW_DCTS1_Mod,
};

DataObject iedModel_BHKW_DCTS1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_BHKW_DCTS1,
    (ModelNode*) &iedModel_BHKW_DCTS1_Beh,
    (ModelNode*) &iedModel_BHKW_DCTS1_Mod_q,
    0,
    0
};

DataAttribute iedModel_BHKW_DCTS1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_DCTS1_Mod,
    (ModelNode*) &iedModel_BHKW_DCTS1_Mod_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_DCTS1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_DCTS1_Mod,
    (ModelNode*) &iedModel_BHKW_DCTS1_Mod_ctlModel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_BHKW_DCTS1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_BHKW_DCTS1_Mod,
    NULL,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataObject iedModel_BHKW_DCTS1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_BHKW_DCTS1,
    (ModelNode*) &iedModel_BHKW_DCTS1_Health,
    (ModelNode*) &iedModel_BHKW_DCTS1_Beh_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_DCTS1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_DCTS1_Beh,
    (ModelNode*) &iedModel_BHKW_DCTS1_Beh_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_BHKW_DCTS1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_DCTS1_Beh,
    (ModelNode*) &iedModel_BHKW_DCTS1_Beh_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_DCTS1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_DCTS1_Beh,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_DCTS1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_BHKW_DCTS1,
    (ModelNode*) &iedModel_BHKW_DCTS1_NamPlt,
    (ModelNode*) &iedModel_BHKW_DCTS1_Health_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_DCTS1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_DCTS1_Health,
    (ModelNode*) &iedModel_BHKW_DCTS1_Health_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_BHKW_DCTS1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_DCTS1_Health,
    (ModelNode*) &iedModel_BHKW_DCTS1_Health_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_DCTS1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_DCTS1_Health,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_DCTS1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_BHKW_DCTS1,
    (ModelNode*) &iedModel_BHKW_DCTS1_ThrmStoTyp,
    (ModelNode*) &iedModel_BHKW_DCTS1_NamPlt_vendor,
    0,
    0
};

DataAttribute iedModel_BHKW_DCTS1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_BHKW_DCTS1_NamPlt,
    (ModelNode*) &iedModel_BHKW_DCTS1_NamPlt_swRev,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_BHKW_DCTS1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_BHKW_DCTS1_NamPlt,
    (ModelNode*) &iedModel_BHKW_DCTS1_NamPlt_d,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_BHKW_DCTS1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_BHKW_DCTS1_NamPlt,
    NULL,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataObject iedModel_BHKW_DCTS1_ThrmStoTyp = {
    DataObjectModelType,
    "ThrmStoTyp",
    (ModelNode*) &iedModel_BHKW_DCTS1,
    (ModelNode*) &iedModel_BHKW_DCTS1_ThrmCapTot,
    NULL,
    0,
    0
};

DataObject iedModel_BHKW_DCTS1_ThrmCapTot = {
    DataObjectModelType,
    "ThrmCapTot",
    (ModelNode*) &iedModel_BHKW_DCTS1,
    (ModelNode*) &iedModel_BHKW_DCTS1_ThrmCapPct,
    (ModelNode*) &iedModel_BHKW_DCTS1_ThrmCapTot_instMag,
    0,
    0
};

DataAttribute iedModel_BHKW_DCTS1_ThrmCapTot_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_BHKW_DCTS1_ThrmCapTot,
    (ModelNode*) &iedModel_BHKW_DCTS1_ThrmCapTot_mag,
    (ModelNode*) &iedModel_BHKW_DCTS1_ThrmCapTot_instMag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_DCTS1_ThrmCapTot_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_BHKW_DCTS1_ThrmCapTot_instMag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_BHKW_DCTS1_ThrmCapTot_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_BHKW_DCTS1_ThrmCapTot,
    (ModelNode*) &iedModel_BHKW_DCTS1_ThrmCapTot_q,
    (ModelNode*) &iedModel_BHKW_DCTS1_ThrmCapTot_mag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_DCTS1_ThrmCapTot_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_BHKW_DCTS1_ThrmCapTot_mag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_BHKW_DCTS1_ThrmCapTot_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_DCTS1_ThrmCapTot,
    (ModelNode*) &iedModel_BHKW_DCTS1_ThrmCapTot_t,
    NULL,
    0,
    0,
    MX,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_DCTS1_ThrmCapTot_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_DCTS1_ThrmCapTot,
    NULL,
    NULL,
    0,
    0,
    MX,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_DCTS1_ThrmCapPct = {
    DataObjectModelType,
    "ThrmCapPct",
    (ModelNode*) &iedModel_BHKW_DCTS1,
    NULL,
    (ModelNode*) &iedModel_BHKW_DCTS1_ThrmCapPct_instMag,
    0,
    0
};

DataAttribute iedModel_BHKW_DCTS1_ThrmCapPct_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_BHKW_DCTS1_ThrmCapPct,
    (ModelNode*) &iedModel_BHKW_DCTS1_ThrmCapPct_mag,
    (ModelNode*) &iedModel_BHKW_DCTS1_ThrmCapPct_instMag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_DCTS1_ThrmCapPct_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_BHKW_DCTS1_ThrmCapPct_instMag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_BHKW_DCTS1_ThrmCapPct_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_BHKW_DCTS1_ThrmCapPct,
    (ModelNode*) &iedModel_BHKW_DCTS1_ThrmCapPct_q,
    (ModelNode*) &iedModel_BHKW_DCTS1_ThrmCapPct_mag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_DCTS1_ThrmCapPct_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_BHKW_DCTS1_ThrmCapPct_mag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_BHKW_DCTS1_ThrmCapPct_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_DCTS1_ThrmCapPct,
    (ModelNode*) &iedModel_BHKW_DCTS1_ThrmCapPct_t,
    NULL,
    0,
    0,
    MX,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_DCTS1_ThrmCapPct_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_DCTS1_ThrmCapPct,
    NULL,
    NULL,
    0,
    0,
    MX,
    TIMESTAMP,
    NULL
};

LogicalNode iedModel_BHKW_MHET1 = {
    LogicalNodeModelType,
    "MHET1",
    &iedModel_BHKW,
    (ModelNode*) &iedModel_BHKW_MFUL1,
    (ModelNode*) &iedModel_BHKW_MHET1_Mod,
};

DataObject iedModel_BHKW_MHET1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_BHKW_MHET1,
    (ModelNode*) &iedModel_BHKW_MHET1_Beh,
    (ModelNode*) &iedModel_BHKW_MHET1_Mod_q,
    0,
    0
};

DataAttribute iedModel_BHKW_MHET1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_MHET1_Mod,
    (ModelNode*) &iedModel_BHKW_MHET1_Mod_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_MHET1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_MHET1_Mod,
    (ModelNode*) &iedModel_BHKW_MHET1_Mod_ctlModel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_BHKW_MHET1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_BHKW_MHET1_Mod,
    NULL,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataObject iedModel_BHKW_MHET1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_BHKW_MHET1,
    (ModelNode*) &iedModel_BHKW_MHET1_Health,
    (ModelNode*) &iedModel_BHKW_MHET1_Beh_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_MHET1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_MHET1_Beh,
    (ModelNode*) &iedModel_BHKW_MHET1_Beh_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_BHKW_MHET1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_MHET1_Beh,
    (ModelNode*) &iedModel_BHKW_MHET1_Beh_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_MHET1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_MHET1_Beh,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_MHET1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_BHKW_MHET1,
    (ModelNode*) &iedModel_BHKW_MHET1_NamPlt,
    (ModelNode*) &iedModel_BHKW_MHET1_Health_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_MHET1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_MHET1_Health,
    (ModelNode*) &iedModel_BHKW_MHET1_Health_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_BHKW_MHET1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_MHET1_Health,
    (ModelNode*) &iedModel_BHKW_MHET1_Health_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_MHET1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_MHET1_Health,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_MHET1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_BHKW_MHET1,
    (ModelNode*) &iedModel_BHKW_MHET1_MatTyp,
    (ModelNode*) &iedModel_BHKW_MHET1_NamPlt_vendor,
    0,
    0
};

DataAttribute iedModel_BHKW_MHET1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_BHKW_MHET1_NamPlt,
    (ModelNode*) &iedModel_BHKW_MHET1_NamPlt_swRev,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_BHKW_MHET1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_BHKW_MHET1_NamPlt,
    (ModelNode*) &iedModel_BHKW_MHET1_NamPlt_d,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_BHKW_MHET1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_BHKW_MHET1_NamPlt,
    NULL,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataObject iedModel_BHKW_MHET1_MatTyp = {
    DataObjectModelType,
    "MatTyp",
    (ModelNode*) &iedModel_BHKW_MHET1,
    (ModelNode*) &iedModel_BHKW_MHET1_AccHeatOut,
    NULL,
    0,
    0
};

DataObject iedModel_BHKW_MHET1_AccHeatOut = {
    DataObjectModelType,
    "AccHeatOut",
    (ModelNode*) &iedModel_BHKW_MHET1,
    NULL,
    (ModelNode*) &iedModel_BHKW_MHET1_AccHeatOut_instMag,
    0,
    0
};

DataAttribute iedModel_BHKW_MHET1_AccHeatOut_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_BHKW_MHET1_AccHeatOut,
    (ModelNode*) &iedModel_BHKW_MHET1_AccHeatOut_mag,
    (ModelNode*) &iedModel_BHKW_MHET1_AccHeatOut_instMag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_MHET1_AccHeatOut_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_BHKW_MHET1_AccHeatOut_instMag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_BHKW_MHET1_AccHeatOut_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_BHKW_MHET1_AccHeatOut,
    (ModelNode*) &iedModel_BHKW_MHET1_AccHeatOut_q,
    (ModelNode*) &iedModel_BHKW_MHET1_AccHeatOut_mag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_MHET1_AccHeatOut_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_BHKW_MHET1_AccHeatOut_mag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_BHKW_MHET1_AccHeatOut_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_MHET1_AccHeatOut,
    (ModelNode*) &iedModel_BHKW_MHET1_AccHeatOut_t,
    NULL,
    0,
    0,
    MX,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_MHET1_AccHeatOut_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_MHET1_AccHeatOut,
    NULL,
    NULL,
    0,
    0,
    MX,
    TIMESTAMP,
    NULL
};

LogicalNode iedModel_BHKW_MFUL1 = {
    LogicalNodeModelType,
    "MFUL1",
    &iedModel_BHKW,
    (ModelNode*) &iedModel_BHKW_STMP1,
    (ModelNode*) &iedModel_BHKW_MFUL1_Mod,
};

DataObject iedModel_BHKW_MFUL1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_BHKW_MFUL1,
    (ModelNode*) &iedModel_BHKW_MFUL1_Beh,
    (ModelNode*) &iedModel_BHKW_MFUL1_Mod_q,
    0,
    0
};

DataAttribute iedModel_BHKW_MFUL1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_MFUL1_Mod,
    (ModelNode*) &iedModel_BHKW_MFUL1_Mod_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_MFUL1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_MFUL1_Mod,
    (ModelNode*) &iedModel_BHKW_MFUL1_Mod_ctlModel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_BHKW_MFUL1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_BHKW_MFUL1_Mod,
    NULL,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataObject iedModel_BHKW_MFUL1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_BHKW_MFUL1,
    (ModelNode*) &iedModel_BHKW_MFUL1_Health,
    (ModelNode*) &iedModel_BHKW_MFUL1_Beh_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_MFUL1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_MFUL1_Beh,
    (ModelNode*) &iedModel_BHKW_MFUL1_Beh_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_BHKW_MFUL1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_MFUL1_Beh,
    (ModelNode*) &iedModel_BHKW_MFUL1_Beh_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_MFUL1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_MFUL1_Beh,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_MFUL1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_BHKW_MFUL1,
    (ModelNode*) &iedModel_BHKW_MFUL1_NamPlt,
    (ModelNode*) &iedModel_BHKW_MFUL1_Health_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_MFUL1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_MFUL1_Health,
    (ModelNode*) &iedModel_BHKW_MFUL1_Health_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_BHKW_MFUL1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_MFUL1_Health,
    (ModelNode*) &iedModel_BHKW_MFUL1_Health_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_MFUL1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_MFUL1_Health,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_MFUL1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_BHKW_MFUL1,
    (ModelNode*) &iedModel_BHKW_MFUL1_FuelTyp,
    (ModelNode*) &iedModel_BHKW_MFUL1_NamPlt_vendor,
    0,
    0
};

DataAttribute iedModel_BHKW_MFUL1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_BHKW_MFUL1_NamPlt,
    (ModelNode*) &iedModel_BHKW_MFUL1_NamPlt_swRev,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_BHKW_MFUL1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_BHKW_MFUL1_NamPlt,
    (ModelNode*) &iedModel_BHKW_MFUL1_NamPlt_d,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_BHKW_MFUL1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_BHKW_MFUL1_NamPlt,
    NULL,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataObject iedModel_BHKW_MFUL1_FuelTyp = {
    DataObjectModelType,
    "FuelTyp",
    (ModelNode*) &iedModel_BHKW_MFUL1,
    (ModelNode*) &iedModel_BHKW_MFUL1_AccTotFuel,
    NULL,
    0,
    0
};

DataObject iedModel_BHKW_MFUL1_AccTotFuel = {
    DataObjectModelType,
    "AccTotFuel",
    (ModelNode*) &iedModel_BHKW_MFUL1,
    NULL,
    (ModelNode*) &iedModel_BHKW_MFUL1_AccTotFuel_instMag,
    0,
    0
};

DataAttribute iedModel_BHKW_MFUL1_AccTotFuel_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_BHKW_MFUL1_AccTotFuel,
    (ModelNode*) &iedModel_BHKW_MFUL1_AccTotFuel_mag,
    (ModelNode*) &iedModel_BHKW_MFUL1_AccTotFuel_instMag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_MFUL1_AccTotFuel_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_BHKW_MFUL1_AccTotFuel_instMag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_BHKW_MFUL1_AccTotFuel_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_BHKW_MFUL1_AccTotFuel,
    (ModelNode*) &iedModel_BHKW_MFUL1_AccTotFuel_q,
    (ModelNode*) &iedModel_BHKW_MFUL1_AccTotFuel_mag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_MFUL1_AccTotFuel_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_BHKW_MFUL1_AccTotFuel_mag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_BHKW_MFUL1_AccTotFuel_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_MFUL1_AccTotFuel,
    (ModelNode*) &iedModel_BHKW_MFUL1_AccTotFuel_t,
    NULL,
    0,
    0,
    MX,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_MFUL1_AccTotFuel_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_MFUL1_AccTotFuel,
    NULL,
    NULL,
    0,
    0,
    MX,
    TIMESTAMP,
    NULL
};

LogicalNode iedModel_BHKW_STMP1 = {
    LogicalNodeModelType,
    "STMP1",
    &iedModel_BHKW,
    (ModelNode*) &iedModel_BHKW_STMP2,
    (ModelNode*) &iedModel_BHKW_STMP1_Mod,
};

DataObject iedModel_BHKW_STMP1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_BHKW_STMP1,
    (ModelNode*) &iedModel_BHKW_STMP1_Beh,
    (ModelNode*) &iedModel_BHKW_STMP1_Mod_q,
    0,
    0
};

DataAttribute iedModel_BHKW_STMP1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_STMP1_Mod,
    (ModelNode*) &iedModel_BHKW_STMP1_Mod_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_STMP1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_STMP1_Mod,
    (ModelNode*) &iedModel_BHKW_STMP1_Mod_ctlModel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_BHKW_STMP1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_BHKW_STMP1_Mod,
    NULL,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataObject iedModel_BHKW_STMP1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_BHKW_STMP1,
    (ModelNode*) &iedModel_BHKW_STMP1_Health,
    (ModelNode*) &iedModel_BHKW_STMP1_Beh_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_STMP1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_STMP1_Beh,
    (ModelNode*) &iedModel_BHKW_STMP1_Beh_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_BHKW_STMP1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_STMP1_Beh,
    (ModelNode*) &iedModel_BHKW_STMP1_Beh_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_STMP1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_STMP1_Beh,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_STMP1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_BHKW_STMP1,
    (ModelNode*) &iedModel_BHKW_STMP1_NamPlt,
    (ModelNode*) &iedModel_BHKW_STMP1_Health_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_STMP1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_STMP1_Health,
    (ModelNode*) &iedModel_BHKW_STMP1_Health_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_BHKW_STMP1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_STMP1_Health,
    (ModelNode*) &iedModel_BHKW_STMP1_Health_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_STMP1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_STMP1_Health,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_STMP1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_BHKW_STMP1,
    (ModelNode*) &iedModel_BHKW_STMP1_Tmp,
    (ModelNode*) &iedModel_BHKW_STMP1_NamPlt_vendor,
    0,
    0
};

DataAttribute iedModel_BHKW_STMP1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_BHKW_STMP1_NamPlt,
    (ModelNode*) &iedModel_BHKW_STMP1_NamPlt_swRev,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_BHKW_STMP1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_BHKW_STMP1_NamPlt,
    (ModelNode*) &iedModel_BHKW_STMP1_NamPlt_d,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_BHKW_STMP1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_BHKW_STMP1_NamPlt,
    NULL,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataObject iedModel_BHKW_STMP1_Tmp = {
    DataObjectModelType,
    "Tmp",
    (ModelNode*) &iedModel_BHKW_STMP1,
    NULL,
    (ModelNode*) &iedModel_BHKW_STMP1_Tmp_instMag,
    0,
    0
};

DataAttribute iedModel_BHKW_STMP1_Tmp_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_BHKW_STMP1_Tmp,
    (ModelNode*) &iedModel_BHKW_STMP1_Tmp_mag,
    (ModelNode*) &iedModel_BHKW_STMP1_Tmp_instMag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_STMP1_Tmp_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_BHKW_STMP1_Tmp_instMag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_BHKW_STMP1_Tmp_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_BHKW_STMP1_Tmp,
    (ModelNode*) &iedModel_BHKW_STMP1_Tmp_q,
    (ModelNode*) &iedModel_BHKW_STMP1_Tmp_mag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_STMP1_Tmp_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_BHKW_STMP1_Tmp_mag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_BHKW_STMP1_Tmp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_STMP1_Tmp,
    (ModelNode*) &iedModel_BHKW_STMP1_Tmp_t,
    NULL,
    0,
    0,
    MX,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_STMP1_Tmp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_STMP1_Tmp,
    NULL,
    NULL,
    0,
    0,
    MX,
    TIMESTAMP,
    NULL
};

LogicalNode iedModel_BHKW_STMP2 = {
    LogicalNodeModelType,
    "STMP2",
    &iedModel_BHKW,
    (ModelNode*) &iedModel_BHKW_STMP3,
    (ModelNode*) &iedModel_BHKW_STMP2_Mod,
};

DataObject iedModel_BHKW_STMP2_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_BHKW_STMP2,
    (ModelNode*) &iedModel_BHKW_STMP2_Beh,
    (ModelNode*) &iedModel_BHKW_STMP2_Mod_q,
    0,
    0
};

DataAttribute iedModel_BHKW_STMP2_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_STMP2_Mod,
    (ModelNode*) &iedModel_BHKW_STMP2_Mod_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_STMP2_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_STMP2_Mod,
    (ModelNode*) &iedModel_BHKW_STMP2_Mod_ctlModel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_BHKW_STMP2_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_BHKW_STMP2_Mod,
    NULL,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataObject iedModel_BHKW_STMP2_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_BHKW_STMP2,
    (ModelNode*) &iedModel_BHKW_STMP2_Health,
    (ModelNode*) &iedModel_BHKW_STMP2_Beh_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_STMP2_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_STMP2_Beh,
    (ModelNode*) &iedModel_BHKW_STMP2_Beh_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_BHKW_STMP2_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_STMP2_Beh,
    (ModelNode*) &iedModel_BHKW_STMP2_Beh_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_STMP2_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_STMP2_Beh,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_STMP2_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_BHKW_STMP2,
    (ModelNode*) &iedModel_BHKW_STMP2_NamPlt,
    (ModelNode*) &iedModel_BHKW_STMP2_Health_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_STMP2_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_STMP2_Health,
    (ModelNode*) &iedModel_BHKW_STMP2_Health_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_BHKW_STMP2_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_STMP2_Health,
    (ModelNode*) &iedModel_BHKW_STMP2_Health_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_STMP2_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_STMP2_Health,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_STMP2_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_BHKW_STMP2,
    (ModelNode*) &iedModel_BHKW_STMP2_Tmp,
    (ModelNode*) &iedModel_BHKW_STMP2_NamPlt_vendor,
    0,
    0
};

DataAttribute iedModel_BHKW_STMP2_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_BHKW_STMP2_NamPlt,
    (ModelNode*) &iedModel_BHKW_STMP2_NamPlt_swRev,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_BHKW_STMP2_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_BHKW_STMP2_NamPlt,
    (ModelNode*) &iedModel_BHKW_STMP2_NamPlt_d,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_BHKW_STMP2_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_BHKW_STMP2_NamPlt,
    NULL,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataObject iedModel_BHKW_STMP2_Tmp = {
    DataObjectModelType,
    "Tmp",
    (ModelNode*) &iedModel_BHKW_STMP2,
    NULL,
    (ModelNode*) &iedModel_BHKW_STMP2_Tmp_instMag,
    0,
    0
};

DataAttribute iedModel_BHKW_STMP2_Tmp_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_BHKW_STMP2_Tmp,
    (ModelNode*) &iedModel_BHKW_STMP2_Tmp_mag,
    (ModelNode*) &iedModel_BHKW_STMP2_Tmp_instMag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_STMP2_Tmp_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_BHKW_STMP2_Tmp_instMag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_BHKW_STMP2_Tmp_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_BHKW_STMP2_Tmp,
    (ModelNode*) &iedModel_BHKW_STMP2_Tmp_q,
    (ModelNode*) &iedModel_BHKW_STMP2_Tmp_mag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_STMP2_Tmp_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_BHKW_STMP2_Tmp_mag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_BHKW_STMP2_Tmp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_STMP2_Tmp,
    (ModelNode*) &iedModel_BHKW_STMP2_Tmp_t,
    NULL,
    0,
    0,
    MX,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_STMP2_Tmp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_STMP2_Tmp,
    NULL,
    NULL,
    0,
    0,
    MX,
    TIMESTAMP,
    NULL
};

LogicalNode iedModel_BHKW_STMP3 = {
    LogicalNodeModelType,
    "STMP3",
    &iedModel_BHKW,
    (ModelNode*) &iedModel_BHKW_STMP4,
    (ModelNode*) &iedModel_BHKW_STMP3_Mod,
};

DataObject iedModel_BHKW_STMP3_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_BHKW_STMP3,
    (ModelNode*) &iedModel_BHKW_STMP3_Beh,
    (ModelNode*) &iedModel_BHKW_STMP3_Mod_q,
    0,
    0
};

DataAttribute iedModel_BHKW_STMP3_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_STMP3_Mod,
    (ModelNode*) &iedModel_BHKW_STMP3_Mod_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_STMP3_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_STMP3_Mod,
    (ModelNode*) &iedModel_BHKW_STMP3_Mod_ctlModel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_BHKW_STMP3_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_BHKW_STMP3_Mod,
    NULL,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataObject iedModel_BHKW_STMP3_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_BHKW_STMP3,
    (ModelNode*) &iedModel_BHKW_STMP3_Health,
    (ModelNode*) &iedModel_BHKW_STMP3_Beh_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_STMP3_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_STMP3_Beh,
    (ModelNode*) &iedModel_BHKW_STMP3_Beh_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_BHKW_STMP3_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_STMP3_Beh,
    (ModelNode*) &iedModel_BHKW_STMP3_Beh_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_STMP3_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_STMP3_Beh,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_STMP3_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_BHKW_STMP3,
    (ModelNode*) &iedModel_BHKW_STMP3_NamPlt,
    (ModelNode*) &iedModel_BHKW_STMP3_Health_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_STMP3_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_STMP3_Health,
    (ModelNode*) &iedModel_BHKW_STMP3_Health_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_BHKW_STMP3_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_STMP3_Health,
    (ModelNode*) &iedModel_BHKW_STMP3_Health_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_STMP3_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_STMP3_Health,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_STMP3_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_BHKW_STMP3,
    (ModelNode*) &iedModel_BHKW_STMP3_Tmp,
    (ModelNode*) &iedModel_BHKW_STMP3_NamPlt_vendor,
    0,
    0
};

DataAttribute iedModel_BHKW_STMP3_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_BHKW_STMP3_NamPlt,
    (ModelNode*) &iedModel_BHKW_STMP3_NamPlt_swRev,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_BHKW_STMP3_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_BHKW_STMP3_NamPlt,
    (ModelNode*) &iedModel_BHKW_STMP3_NamPlt_d,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_BHKW_STMP3_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_BHKW_STMP3_NamPlt,
    NULL,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataObject iedModel_BHKW_STMP3_Tmp = {
    DataObjectModelType,
    "Tmp",
    (ModelNode*) &iedModel_BHKW_STMP3,
    NULL,
    (ModelNode*) &iedModel_BHKW_STMP3_Tmp_instMag,
    0,
    0
};

DataAttribute iedModel_BHKW_STMP3_Tmp_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_BHKW_STMP3_Tmp,
    (ModelNode*) &iedModel_BHKW_STMP3_Tmp_mag,
    (ModelNode*) &iedModel_BHKW_STMP3_Tmp_instMag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_STMP3_Tmp_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_BHKW_STMP3_Tmp_instMag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_BHKW_STMP3_Tmp_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_BHKW_STMP3_Tmp,
    (ModelNode*) &iedModel_BHKW_STMP3_Tmp_q,
    (ModelNode*) &iedModel_BHKW_STMP3_Tmp_mag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_STMP3_Tmp_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_BHKW_STMP3_Tmp_mag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_BHKW_STMP3_Tmp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_STMP3_Tmp,
    (ModelNode*) &iedModel_BHKW_STMP3_Tmp_t,
    NULL,
    0,
    0,
    MX,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_STMP3_Tmp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_STMP3_Tmp,
    NULL,
    NULL,
    0,
    0,
    MX,
    TIMESTAMP,
    NULL
};

LogicalNode iedModel_BHKW_STMP4 = {
    LogicalNodeModelType,
    "STMP4",
    &iedModel_BHKW,
    (ModelNode*) &iedModel_BHKW_STMP5,
    (ModelNode*) &iedModel_BHKW_STMP4_Mod,
};

DataObject iedModel_BHKW_STMP4_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_BHKW_STMP4,
    (ModelNode*) &iedModel_BHKW_STMP4_Beh,
    (ModelNode*) &iedModel_BHKW_STMP4_Mod_q,
    0,
    0
};

DataAttribute iedModel_BHKW_STMP4_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_STMP4_Mod,
    (ModelNode*) &iedModel_BHKW_STMP4_Mod_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_STMP4_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_STMP4_Mod,
    (ModelNode*) &iedModel_BHKW_STMP4_Mod_ctlModel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_BHKW_STMP4_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_BHKW_STMP4_Mod,
    NULL,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataObject iedModel_BHKW_STMP4_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_BHKW_STMP4,
    (ModelNode*) &iedModel_BHKW_STMP4_Health,
    (ModelNode*) &iedModel_BHKW_STMP4_Beh_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_STMP4_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_STMP4_Beh,
    (ModelNode*) &iedModel_BHKW_STMP4_Beh_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_BHKW_STMP4_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_STMP4_Beh,
    (ModelNode*) &iedModel_BHKW_STMP4_Beh_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_STMP4_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_STMP4_Beh,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_STMP4_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_BHKW_STMP4,
    (ModelNode*) &iedModel_BHKW_STMP4_NamPlt,
    (ModelNode*) &iedModel_BHKW_STMP4_Health_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_STMP4_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_STMP4_Health,
    (ModelNode*) &iedModel_BHKW_STMP4_Health_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_BHKW_STMP4_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_STMP4_Health,
    (ModelNode*) &iedModel_BHKW_STMP4_Health_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_STMP4_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_STMP4_Health,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_STMP4_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_BHKW_STMP4,
    (ModelNode*) &iedModel_BHKW_STMP4_Tmp,
    (ModelNode*) &iedModel_BHKW_STMP4_NamPlt_vendor,
    0,
    0
};

DataAttribute iedModel_BHKW_STMP4_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_BHKW_STMP4_NamPlt,
    (ModelNode*) &iedModel_BHKW_STMP4_NamPlt_swRev,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_BHKW_STMP4_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_BHKW_STMP4_NamPlt,
    (ModelNode*) &iedModel_BHKW_STMP4_NamPlt_d,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_BHKW_STMP4_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_BHKW_STMP4_NamPlt,
    NULL,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataObject iedModel_BHKW_STMP4_Tmp = {
    DataObjectModelType,
    "Tmp",
    (ModelNode*) &iedModel_BHKW_STMP4,
    NULL,
    (ModelNode*) &iedModel_BHKW_STMP4_Tmp_instMag,
    0,
    0
};

DataAttribute iedModel_BHKW_STMP4_Tmp_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_BHKW_STMP4_Tmp,
    (ModelNode*) &iedModel_BHKW_STMP4_Tmp_mag,
    (ModelNode*) &iedModel_BHKW_STMP4_Tmp_instMag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_STMP4_Tmp_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_BHKW_STMP4_Tmp_instMag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_BHKW_STMP4_Tmp_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_BHKW_STMP4_Tmp,
    (ModelNode*) &iedModel_BHKW_STMP4_Tmp_q,
    (ModelNode*) &iedModel_BHKW_STMP4_Tmp_mag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_STMP4_Tmp_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_BHKW_STMP4_Tmp_mag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_BHKW_STMP4_Tmp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_STMP4_Tmp,
    (ModelNode*) &iedModel_BHKW_STMP4_Tmp_t,
    NULL,
    0,
    0,
    MX,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_STMP4_Tmp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_STMP4_Tmp,
    NULL,
    NULL,
    0,
    0,
    MX,
    TIMESTAMP,
    NULL
};

LogicalNode iedModel_BHKW_STMP5 = {
    LogicalNodeModelType,
    "STMP5",
    &iedModel_BHKW,
    (ModelNode*) &iedModel_BHKW_DRCS1,
    (ModelNode*) &iedModel_BHKW_STMP5_Mod,
};

DataObject iedModel_BHKW_STMP5_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_BHKW_STMP5,
    (ModelNode*) &iedModel_BHKW_STMP5_Beh,
    (ModelNode*) &iedModel_BHKW_STMP5_Mod_q,
    0,
    0
};

DataAttribute iedModel_BHKW_STMP5_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_STMP5_Mod,
    (ModelNode*) &iedModel_BHKW_STMP5_Mod_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_STMP5_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_STMP5_Mod,
    (ModelNode*) &iedModel_BHKW_STMP5_Mod_ctlModel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_BHKW_STMP5_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_BHKW_STMP5_Mod,
    NULL,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataObject iedModel_BHKW_STMP5_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_BHKW_STMP5,
    (ModelNode*) &iedModel_BHKW_STMP5_Health,
    (ModelNode*) &iedModel_BHKW_STMP5_Beh_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_STMP5_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_STMP5_Beh,
    (ModelNode*) &iedModel_BHKW_STMP5_Beh_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_BHKW_STMP5_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_STMP5_Beh,
    (ModelNode*) &iedModel_BHKW_STMP5_Beh_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_STMP5_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_STMP5_Beh,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_STMP5_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_BHKW_STMP5,
    (ModelNode*) &iedModel_BHKW_STMP5_NamPlt,
    (ModelNode*) &iedModel_BHKW_STMP5_Health_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_STMP5_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_STMP5_Health,
    (ModelNode*) &iedModel_BHKW_STMP5_Health_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_BHKW_STMP5_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_STMP5_Health,
    (ModelNode*) &iedModel_BHKW_STMP5_Health_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_STMP5_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_STMP5_Health,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_STMP5_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_BHKW_STMP5,
    (ModelNode*) &iedModel_BHKW_STMP5_Tmp,
    (ModelNode*) &iedModel_BHKW_STMP5_NamPlt_vendor,
    0,
    0
};

DataAttribute iedModel_BHKW_STMP5_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_BHKW_STMP5_NamPlt,
    (ModelNode*) &iedModel_BHKW_STMP5_NamPlt_swRev,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_BHKW_STMP5_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_BHKW_STMP5_NamPlt,
    (ModelNode*) &iedModel_BHKW_STMP5_NamPlt_d,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_BHKW_STMP5_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_BHKW_STMP5_NamPlt,
    NULL,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataObject iedModel_BHKW_STMP5_Tmp = {
    DataObjectModelType,
    "Tmp",
    (ModelNode*) &iedModel_BHKW_STMP5,
    NULL,
    (ModelNode*) &iedModel_BHKW_STMP5_Tmp_instMag,
    0,
    0
};

DataAttribute iedModel_BHKW_STMP5_Tmp_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_BHKW_STMP5_Tmp,
    (ModelNode*) &iedModel_BHKW_STMP5_Tmp_mag,
    (ModelNode*) &iedModel_BHKW_STMP5_Tmp_instMag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_STMP5_Tmp_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_BHKW_STMP5_Tmp_instMag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_BHKW_STMP5_Tmp_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_BHKW_STMP5_Tmp,
    (ModelNode*) &iedModel_BHKW_STMP5_Tmp_q,
    (ModelNode*) &iedModel_BHKW_STMP5_Tmp_mag_f,
    0,
    0,
    MX,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_STMP5_Tmp_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_BHKW_STMP5_Tmp_mag,
    NULL,
    NULL,
    0,
    0,
    MX,
    FLOAT32,
    NULL
};

DataAttribute iedModel_BHKW_STMP5_Tmp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_STMP5_Tmp,
    (ModelNode*) &iedModel_BHKW_STMP5_Tmp_t,
    NULL,
    0,
    0,
    MX,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_STMP5_Tmp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_STMP5_Tmp,
    NULL,
    NULL,
    0,
    0,
    MX,
    TIMESTAMP,
    NULL
};

LogicalNode iedModel_BHKW_DRCS1 = {
    LogicalNodeModelType,
    "DRCS1",
    &iedModel_BHKW,
    (ModelNode*) &iedModel_BHKW_DSCH1,
    (ModelNode*) &iedModel_BHKW_DRCS1_Mod,
};

DataObject iedModel_BHKW_DRCS1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_BHKW_DRCS1,
    (ModelNode*) &iedModel_BHKW_DRCS1_Beh,
    (ModelNode*) &iedModel_BHKW_DRCS1_Mod_q,
    0,
    0
};

DataAttribute iedModel_BHKW_DRCS1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_DRCS1_Mod,
    (ModelNode*) &iedModel_BHKW_DRCS1_Mod_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_DRCS1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_DRCS1_Mod,
    (ModelNode*) &iedModel_BHKW_DRCS1_Mod_ctlModel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_BHKW_DRCS1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_BHKW_DRCS1_Mod,
    NULL,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataObject iedModel_BHKW_DRCS1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_BHKW_DRCS1,
    (ModelNode*) &iedModel_BHKW_DRCS1_Health,
    (ModelNode*) &iedModel_BHKW_DRCS1_Beh_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_DRCS1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_DRCS1_Beh,
    (ModelNode*) &iedModel_BHKW_DRCS1_Beh_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_BHKW_DRCS1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_DRCS1_Beh,
    (ModelNode*) &iedModel_BHKW_DRCS1_Beh_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_DRCS1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_DRCS1_Beh,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_DRCS1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_BHKW_DRCS1,
    (ModelNode*) &iedModel_BHKW_DRCS1_NamPlt,
    (ModelNode*) &iedModel_BHKW_DRCS1_Health_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_DRCS1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_DRCS1_Health,
    (ModelNode*) &iedModel_BHKW_DRCS1_Health_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_BHKW_DRCS1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_DRCS1_Health,
    (ModelNode*) &iedModel_BHKW_DRCS1_Health_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_DRCS1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_DRCS1_Health,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_DRCS1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_BHKW_DRCS1,
    (ModelNode*) &iedModel_BHKW_DRCS1_OpTmh,
    (ModelNode*) &iedModel_BHKW_DRCS1_NamPlt_vendor,
    0,
    0
};

DataAttribute iedModel_BHKW_DRCS1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_BHKW_DRCS1_NamPlt,
    (ModelNode*) &iedModel_BHKW_DRCS1_NamPlt_swRev,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_BHKW_DRCS1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_BHKW_DRCS1_NamPlt,
    (ModelNode*) &iedModel_BHKW_DRCS1_NamPlt_d,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_BHKW_DRCS1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_BHKW_DRCS1_NamPlt,
    NULL,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataObject iedModel_BHKW_DRCS1_OpTmh = {
    DataObjectModelType,
    "OpTmh",
    (ModelNode*) &iedModel_BHKW_DRCS1,
    (ModelNode*) &iedModel_BHKW_DRCS1_ECPConn,
    (ModelNode*) &iedModel_BHKW_DRCS1_OpTmh_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_DRCS1_OpTmh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_DRCS1_OpTmh,
    (ModelNode*) &iedModel_BHKW_DRCS1_OpTmh_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_BHKW_DRCS1_OpTmh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_DRCS1_OpTmh,
    (ModelNode*) &iedModel_BHKW_DRCS1_OpTmh_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_DRCS1_OpTmh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_DRCS1_OpTmh,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_DRCS1_ECPConn = {
    DataObjectModelType,
    "ECPConn",
    (ModelNode*) &iedModel_BHKW_DRCS1,
    (ModelNode*) &iedModel_BHKW_DRCS1_AutoMan,
    (ModelNode*) &iedModel_BHKW_DRCS1_ECPConn_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_DRCS1_ECPConn_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_DRCS1_ECPConn,
    (ModelNode*) &iedModel_BHKW_DRCS1_ECPConn_q,
    NULL,
    0,
    0,
    ST,
    BOOLEAN,
    NULL
};

DataAttribute iedModel_BHKW_DRCS1_ECPConn_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_DRCS1_ECPConn,
    (ModelNode*) &iedModel_BHKW_DRCS1_ECPConn_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_DRCS1_ECPConn_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_DRCS1_ECPConn,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_DRCS1_AutoMan = {
    DataObjectModelType,
    "AutoMan",
    (ModelNode*) &iedModel_BHKW_DRCS1,
    (ModelNode*) &iedModel_BHKW_DRCS1_Loc,
    (ModelNode*) &iedModel_BHKW_DRCS1_AutoMan_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_DRCS1_AutoMan_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_DRCS1_AutoMan,
    (ModelNode*) &iedModel_BHKW_DRCS1_AutoMan_q,
    NULL,
    0,
    0,
    ST,
    BOOLEAN,
    NULL
};

DataAttribute iedModel_BHKW_DRCS1_AutoMan_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_DRCS1_AutoMan,
    (ModelNode*) &iedModel_BHKW_DRCS1_AutoMan_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_DRCS1_AutoMan_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_DRCS1_AutoMan,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_DRCS1_Loc = {
    DataObjectModelType,
    "Loc",
    (ModelNode*) &iedModel_BHKW_DRCS1,
    (ModelNode*) &iedModel_BHKW_DRCS1_ModOnConn,
    (ModelNode*) &iedModel_BHKW_DRCS1_Loc_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_DRCS1_Loc_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_DRCS1_Loc,
    (ModelNode*) &iedModel_BHKW_DRCS1_Loc_q,
    NULL,
    0,
    0,
    ST,
    BOOLEAN,
    NULL
};

DataAttribute iedModel_BHKW_DRCS1_Loc_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_DRCS1_Loc,
    (ModelNode*) &iedModel_BHKW_DRCS1_Loc_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_DRCS1_Loc_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_DRCS1_Loc,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_DRCS1_ModOnConn = {
    DataObjectModelType,
    "ModOnConn",
    (ModelNode*) &iedModel_BHKW_DRCS1,
    (ModelNode*) &iedModel_BHKW_DRCS1_ModOnAval,
    (ModelNode*) &iedModel_BHKW_DRCS1_ModOnConn_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_DRCS1_ModOnConn_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_DRCS1_ModOnConn,
    (ModelNode*) &iedModel_BHKW_DRCS1_ModOnConn_q,
    NULL,
    0,
    0,
    ST,
    BOOLEAN,
    NULL
};

DataAttribute iedModel_BHKW_DRCS1_ModOnConn_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_DRCS1_ModOnConn,
    (ModelNode*) &iedModel_BHKW_DRCS1_ModOnConn_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_DRCS1_ModOnConn_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_DRCS1_ModOnConn,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_DRCS1_ModOnAval = {
    DataObjectModelType,
    "ModOnAval",
    (ModelNode*) &iedModel_BHKW_DRCS1,
    (ModelNode*) &iedModel_BHKW_DRCS1_ModOffAval,
    (ModelNode*) &iedModel_BHKW_DRCS1_ModOnAval_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_DRCS1_ModOnAval_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_DRCS1_ModOnAval,
    (ModelNode*) &iedModel_BHKW_DRCS1_ModOnAval_q,
    NULL,
    0,
    0,
    ST,
    BOOLEAN,
    NULL
};

DataAttribute iedModel_BHKW_DRCS1_ModOnAval_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_DRCS1_ModOnAval,
    (ModelNode*) &iedModel_BHKW_DRCS1_ModOnAval_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_DRCS1_ModOnAval_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_DRCS1_ModOnAval,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_DRCS1_ModOffAval = {
    DataObjectModelType,
    "ModOffAval",
    (ModelNode*) &iedModel_BHKW_DRCS1,
    (ModelNode*) &iedModel_BHKW_DRCS1_ModOffUnav,
    (ModelNode*) &iedModel_BHKW_DRCS1_ModOffAval_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_DRCS1_ModOffAval_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_DRCS1_ModOffAval,
    (ModelNode*) &iedModel_BHKW_DRCS1_ModOffAval_q,
    NULL,
    0,
    0,
    ST,
    BOOLEAN,
    NULL
};

DataAttribute iedModel_BHKW_DRCS1_ModOffAval_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_DRCS1_ModOffAval,
    (ModelNode*) &iedModel_BHKW_DRCS1_ModOffAval_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_DRCS1_ModOffAval_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_DRCS1_ModOffAval,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_DRCS1_ModOffUnav = {
    DataObjectModelType,
    "ModOffUnav",
    (ModelNode*) &iedModel_BHKW_DRCS1,
    NULL,
    (ModelNode*) &iedModel_BHKW_DRCS1_ModOffUnav_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_DRCS1_ModOffUnav_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_DRCS1_ModOffUnav,
    (ModelNode*) &iedModel_BHKW_DRCS1_ModOffUnav_q,
    NULL,
    0,
    0,
    ST,
    BOOLEAN,
    NULL
};

DataAttribute iedModel_BHKW_DRCS1_ModOffUnav_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_DRCS1_ModOffUnav,
    (ModelNode*) &iedModel_BHKW_DRCS1_ModOffUnav_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_DRCS1_ModOffUnav_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_DRCS1_ModOffUnav,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

LogicalNode iedModel_BHKW_DSCH1 = {
    LogicalNodeModelType,
    "DSCH1",
    &iedModel_BHKW,
    (ModelNode*) &iedModel_BHKW_DRCC1,
    (ModelNode*) &iedModel_BHKW_DSCH1_Mod,
};

DataObject iedModel_BHKW_DSCH1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_BHKW_DSCH1,
    (ModelNode*) &iedModel_BHKW_DSCH1_Beh,
    (ModelNode*) &iedModel_BHKW_DSCH1_Mod_q,
    0,
    0
};

DataAttribute iedModel_BHKW_DSCH1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_DSCH1_Mod,
    (ModelNode*) &iedModel_BHKW_DSCH1_Mod_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_DSCH1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_DSCH1_Mod,
    (ModelNode*) &iedModel_BHKW_DSCH1_Mod_ctlModel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_BHKW_DSCH1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_BHKW_DSCH1_Mod,
    NULL,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataObject iedModel_BHKW_DSCH1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_BHKW_DSCH1,
    (ModelNode*) &iedModel_BHKW_DSCH1_Health,
    (ModelNode*) &iedModel_BHKW_DSCH1_Beh_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_DSCH1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_DSCH1_Beh,
    (ModelNode*) &iedModel_BHKW_DSCH1_Beh_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_BHKW_DSCH1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_DSCH1_Beh,
    (ModelNode*) &iedModel_BHKW_DSCH1_Beh_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_DSCH1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_DSCH1_Beh,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_DSCH1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_BHKW_DSCH1,
    (ModelNode*) &iedModel_BHKW_DSCH1_NamPlt,
    (ModelNode*) &iedModel_BHKW_DSCH1_Health_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_DSCH1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_DSCH1_Health,
    (ModelNode*) &iedModel_BHKW_DSCH1_Health_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_BHKW_DSCH1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_DSCH1_Health,
    (ModelNode*) &iedModel_BHKW_DSCH1_Health_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_DSCH1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_DSCH1_Health,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_DSCH1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_BHKW_DSCH1,
    (ModelNode*) &iedModel_BHKW_DSCH1_SchdSt,
    (ModelNode*) &iedModel_BHKW_DSCH1_NamPlt_vendor,
    0,
    0
};

DataAttribute iedModel_BHKW_DSCH1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_BHKW_DSCH1_NamPlt,
    (ModelNode*) &iedModel_BHKW_DSCH1_NamPlt_swRev,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_BHKW_DSCH1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_BHKW_DSCH1_NamPlt,
    (ModelNode*) &iedModel_BHKW_DSCH1_NamPlt_d,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_BHKW_DSCH1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_BHKW_DSCH1_NamPlt,
    NULL,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataObject iedModel_BHKW_DSCH1_SchdSt = {
    DataObjectModelType,
    "SchdSt",
    (ModelNode*) &iedModel_BHKW_DSCH1,
    (ModelNode*) &iedModel_BHKW_DSCH1_SchdId,
    (ModelNode*) &iedModel_BHKW_DSCH1_SchdSt_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_DSCH1_SchdSt_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_DSCH1_SchdSt,
    (ModelNode*) &iedModel_BHKW_DSCH1_SchdSt_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_BHKW_DSCH1_SchdSt_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_DSCH1_SchdSt,
    (ModelNode*) &iedModel_BHKW_DSCH1_SchdSt_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_DSCH1_SchdSt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_DSCH1_SchdSt,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_DSCH1_SchdId = {
    DataObjectModelType,
    "SchdId",
    (ModelNode*) &iedModel_BHKW_DSCH1,
    (ModelNode*) &iedModel_BHKW_DSCH1_SchdCat,
    NULL,
    0,
    0
};

DataObject iedModel_BHKW_DSCH1_SchdCat = {
    DataObjectModelType,
    "SchdCat",
    (ModelNode*) &iedModel_BHKW_DSCH1,
    (ModelNode*) &iedModel_BHKW_DSCH1_SchdTyp,
    NULL,
    0,
    0
};

DataObject iedModel_BHKW_DSCH1_SchdTyp = {
    DataObjectModelType,
    "SchdTyp",
    (ModelNode*) &iedModel_BHKW_DSCH1,
    (ModelNode*) &iedModel_BHKW_DSCH1_SchdAbsTm,
    NULL,
    0,
    0
};

DataObject iedModel_BHKW_DSCH1_SchdAbsTm = {
    DataObjectModelType,
    "SchdAbsTm",
    (ModelNode*) &iedModel_BHKW_DSCH1,
    NULL,
    (ModelNode*) &iedModel_BHKW_DSCH1_SchdAbsTm_numPts,
    0,
    0
};

DataAttribute iedModel_BHKW_DSCH1_SchdAbsTm_numPts = {
    DataAttributeModelType,
    "numPts",
    (ModelNode*) &iedModel_BHKW_DSCH1_SchdAbsTm,
    (ModelNode*) &iedModel_BHKW_DSCH1_SchdAbsTm_val,
    NULL,
    0,
    0,
    SP,
    INT16U,
    NULL
};

DataAttribute iedModel_BHKW_DSCH1_SchdAbsTm_val = {
    DataAttributeModelType,
    "val",
    (ModelNode*) &iedModel_BHKW_DSCH1_SchdAbsTm,
    (ModelNode*) &iedModel_BHKW_DSCH1_SchdAbsTm_time,
    NULL,
    0,
    255,
    SP,
    FLOAT32,
    NULL
};

DataAttribute iedModel_BHKW_DSCH1_SchdAbsTm_time = {
    DataAttributeModelType,
    "time",
    (ModelNode*) &iedModel_BHKW_DSCH1_SchdAbsTm,
    NULL,
    NULL,
    0,
    255,
    SP,
    TIMESTAMP,
    NULL
};

LogicalNode iedModel_BHKW_DRCC1 = {
    LogicalNodeModelType,
    "DRCC1",
    &iedModel_BHKW,
    NULL,
    (ModelNode*) &iedModel_BHKW_DRCC1_Mod,
};

DataObject iedModel_BHKW_DRCC1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_BHKW_DRCC1,
    (ModelNode*) &iedModel_BHKW_DRCC1_Beh,
    (ModelNode*) &iedModel_BHKW_DRCC1_Mod_q,
    0,
    0
};

DataAttribute iedModel_BHKW_DRCC1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_DRCC1_Mod,
    (ModelNode*) &iedModel_BHKW_DRCC1_Mod_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_DRCC1_Mod,
    (ModelNode*) &iedModel_BHKW_DRCC1_Mod_ctlModel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_BHKW_DRCC1_Mod,
    NULL,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataObject iedModel_BHKW_DRCC1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_BHKW_DRCC1,
    (ModelNode*) &iedModel_BHKW_DRCC1_Health,
    (ModelNode*) &iedModel_BHKW_DRCC1_Beh_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_DRCC1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_DRCC1_Beh,
    (ModelNode*) &iedModel_BHKW_DRCC1_Beh_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_DRCC1_Beh,
    (ModelNode*) &iedModel_BHKW_DRCC1_Beh_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_DRCC1_Beh,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_DRCC1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_BHKW_DRCC1,
    (ModelNode*) &iedModel_BHKW_DRCC1_NamPlt,
    (ModelNode*) &iedModel_BHKW_DRCC1_Health_stVal,
    0,
    0
};

DataAttribute iedModel_BHKW_DRCC1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BHKW_DRCC1_Health,
    (ModelNode*) &iedModel_BHKW_DRCC1_Health_q,
    NULL,
    0,
    0,
    ST,
    INT32,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_DRCC1_Health,
    (ModelNode*) &iedModel_BHKW_DRCC1_Health_t,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_DRCC1_Health,
    NULL,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataObject iedModel_BHKW_DRCC1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_BHKW_DRCC1,
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet,
    (ModelNode*) &iedModel_BHKW_DRCC1_NamPlt_vendor,
    0,
    0
};

DataAttribute iedModel_BHKW_DRCC1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_BHKW_DRCC1_NamPlt,
    (ModelNode*) &iedModel_BHKW_DRCC1_NamPlt_swRev,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_BHKW_DRCC1_NamPlt,
    (ModelNode*) &iedModel_BHKW_DRCC1_NamPlt_d,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_BHKW_DRCC1_NamPlt,
    NULL,
    NULL,
    0,
    0,
    DC,
    VISIBLE_STRING_255,
    NULL
};

DataObject iedModel_BHKW_DRCC1_OutWSet = {
    DataObjectModelType,
    "OutWSet",
    (ModelNode*) &iedModel_BHKW_DRCC1,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr,
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_q,
    0,
    0
};

DataAttribute iedModel_BHKW_DRCC1_OutWSet_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet,
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_t,
    NULL,
    0,
    0,
    MX,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_OutWSet_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet,
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_ctlModel,
    NULL,
    0,
    0,
    MX,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_OutWSet_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet,
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Oper,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_OutWSet_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet,
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Cancel,
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Oper_setMag,
    0,
    0,
    SP,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_OutWSet_Oper_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Oper,
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Oper_origin,
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Oper_setMag_f,
    0,
    0,
    SP,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_OutWSet_Oper_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Oper_setMag,
    NULL,
    NULL,
    0,
    0,
    SP,
    FLOAT32,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_OutWSet_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Oper,
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Oper_T,
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Oper_origin_orCat,
    0,
    0,
    SP,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_OutWSet_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Oper_origin,
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Oper_origin_orIdent,
    NULL,
    0,
    0,
    SP,
    ENUMERATED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_OutWSet_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Oper_origin,
    NULL,
    NULL,
    0,
    0,
    SP,
    OCTET_STRING_64,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_OutWSet_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Oper,
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Oper_Test,
    NULL,
    0,
    0,
    SP,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_OutWSet_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Oper,
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Oper_Check,
    NULL,
    0,
    0,
    SP,
    BOOLEAN,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_OutWSet_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Oper,
    NULL,
    NULL,
    0,
    0,
    SP,
    CHECK,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_OutWSet_Cancel = {
    DataAttributeModelType,
    "Cancel",
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet,
    NULL,
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Cancel_setMag,
    0,
    0,
    SP,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_OutWSet_Cancel_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Cancel,
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Cancel_origin,
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Cancel_setMag_f,
    0,
    0,
    SP,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_OutWSet_Cancel_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Cancel_setMag,
    NULL,
    NULL,
    0,
    0,
    SP,
    FLOAT32,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_OutWSet_Cancel_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Cancel,
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Cancel_T,
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Cancel_origin_orCat,
    0,
    0,
    SP,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_OutWSet_Cancel_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Cancel_origin,
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Cancel_origin_orIdent,
    NULL,
    0,
    0,
    SP,
    ENUMERATED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_OutWSet_Cancel_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Cancel_origin,
    NULL,
    NULL,
    0,
    0,
    SP,
    OCTET_STRING_64,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_OutWSet_Cancel_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Cancel,
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Cancel_Test,
    NULL,
    0,
    0,
    SP,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_OutWSet_Cancel_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_BHKW_DRCC1_OutWSet_Cancel,
    NULL,
    NULL,
    0,
    0,
    SP,
    BOOLEAN,
    NULL
};

DataObject iedModel_BHKW_DRCC1_DERStr = {
    DataObjectModelType,
    "DERStr",
    (ModelNode*) &iedModel_BHKW_DRCC1,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_q,
    0,
    0
};

DataAttribute iedModel_BHKW_DRCC1_DERStr_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Oper,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStr_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_ctlModel,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Oper_ctlVal,
    0,
    0,
    CO,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStr_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Oper,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Oper_origin,
    NULL,
    0,
    0,
    CO,
    BOOLEAN,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStr_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Oper,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Oper_ctlNum,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Oper_origin_orCat,
    0,
    0,
    CO,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStr_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Oper_origin,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Oper_origin_orIdent,
    NULL,
    0,
    0,
    CO,
    ENUMERATED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStr_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Oper_origin,
    NULL,
    NULL,
    0,
    0,
    CO,
    OCTET_STRING_64,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStr_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Oper,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Oper_T,
    NULL,
    0,
    0,
    CO,
    INT8U,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStr_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Oper,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Oper_Test,
    NULL,
    0,
    0,
    CO,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStr_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Oper,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Oper_Check,
    NULL,
    0,
    0,
    CO,
    BOOLEAN,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStr_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Oper,
    NULL,
    NULL,
    0,
    0,
    CO,
    CHECK,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStr_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_t,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStr_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_SBO,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStr_SBO = {
    DataAttributeModelType,
    "SBO",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Cancel,
    NULL,
    0,
    0,
    CO,
    VISIBLE_STRING_64,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStr_Cancel = {
    DataAttributeModelType,
    "Cancel",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr,
    NULL,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Cancel_ctlVal,
    0,
    0,
    CO,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStr_Cancel_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Cancel,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Cancel_origin,
    NULL,
    0,
    0,
    CO,
    BOOLEAN,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStr_Cancel_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Cancel,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Cancel_ctlNum,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Cancel_origin_orCat,
    0,
    0,
    CO,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStr_Cancel_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Cancel_origin,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Cancel_origin_orIdent,
    NULL,
    0,
    0,
    CO,
    ENUMERATED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStr_Cancel_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Cancel_origin,
    NULL,
    NULL,
    0,
    0,
    CO,
    OCTET_STRING_64,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStr_Cancel_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Cancel,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Cancel_T,
    NULL,
    0,
    0,
    CO,
    INT8U,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStr_Cancel_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Cancel,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Cancel_Test,
    NULL,
    0,
    0,
    CO,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStr_Cancel_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStr_Cancel,
    NULL,
    NULL,
    0,
    0,
    CO,
    BOOLEAN,
    NULL
};

DataObject iedModel_BHKW_DRCC1_DERStop = {
    DataObjectModelType,
    "DERStop",
    (ModelNode*) &iedModel_BHKW_DRCC1,
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_q,
    0,
    0
};

DataAttribute iedModel_BHKW_DRCC1_DERStop_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Oper,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStop_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_ctlModel,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Oper_ctlVal,
    0,
    0,
    CO,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStop_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Oper,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Oper_origin,
    NULL,
    0,
    0,
    CO,
    BOOLEAN,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStop_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Oper,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Oper_ctlNum,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Oper_origin_orCat,
    0,
    0,
    CO,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStop_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Oper_origin,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Oper_origin_orIdent,
    NULL,
    0,
    0,
    CO,
    ENUMERATED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStop_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Oper_origin,
    NULL,
    NULL,
    0,
    0,
    CO,
    OCTET_STRING_64,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStop_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Oper,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Oper_T,
    NULL,
    0,
    0,
    CO,
    INT8U,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStop_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Oper,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Oper_Test,
    NULL,
    0,
    0,
    CO,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStop_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Oper,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Oper_Check,
    NULL,
    0,
    0,
    CO,
    BOOLEAN,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStop_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Oper,
    NULL,
    NULL,
    0,
    0,
    CO,
    CHECK,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStop_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_t,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStop_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_SBO,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStop_SBO = {
    DataAttributeModelType,
    "SBO",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Cancel,
    NULL,
    0,
    0,
    CO,
    VISIBLE_STRING_64,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStop_Cancel = {
    DataAttributeModelType,
    "Cancel",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop,
    NULL,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Cancel_ctlVal,
    0,
    0,
    CO,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStop_Cancel_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Cancel,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Cancel_origin,
    NULL,
    0,
    0,
    CO,
    BOOLEAN,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStop_Cancel_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Cancel,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Cancel_ctlNum,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Cancel_origin_orCat,
    0,
    0,
    CO,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStop_Cancel_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Cancel_origin,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Cancel_origin_orIdent,
    NULL,
    0,
    0,
    CO,
    ENUMERATED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStop_Cancel_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Cancel_origin,
    NULL,
    NULL,
    0,
    0,
    CO,
    OCTET_STRING_64,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStop_Cancel_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Cancel,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Cancel_T,
    NULL,
    0,
    0,
    CO,
    INT8U,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStop_Cancel_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Cancel,
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Cancel_Test,
    NULL,
    0,
    0,
    CO,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_DERStop_Cancel_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_BHKW_DRCC1_DERStop_Cancel,
    NULL,
    NULL,
    0,
    0,
    CO,
    BOOLEAN,
    NULL
};

DataObject iedModel_BHKW_DRCC1_AutoManCtl = {
    DataObjectModelType,
    "AutoManCtl",
    (ModelNode*) &iedModel_BHKW_DRCC1,
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl,
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_q,
    0,
    0
};

DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl,
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Oper,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl,
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_ctlModel,
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Oper_ctlVal,
    0,
    0,
    CO,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Oper,
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Oper_origin,
    NULL,
    0,
    0,
    CO,
    BOOLEAN,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Oper,
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Oper_ctlNum,
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Oper_origin_orCat,
    0,
    0,
    CO,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Oper_origin,
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Oper_origin_orIdent,
    NULL,
    0,
    0,
    CO,
    ENUMERATED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Oper_origin,
    NULL,
    NULL,
    0,
    0,
    CO,
    OCTET_STRING_64,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Oper,
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Oper_T,
    NULL,
    0,
    0,
    CO,
    INT8U,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Oper,
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Oper_Test,
    NULL,
    0,
    0,
    CO,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Oper,
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Oper_Check,
    NULL,
    0,
    0,
    CO,
    BOOLEAN,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Oper,
    NULL,
    NULL,
    0,
    0,
    CO,
    CHECK,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl,
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_t,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl,
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Cancel,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Cancel = {
    DataAttributeModelType,
    "Cancel",
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl,
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_SBO,
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Cancel_ctlVal,
    0,
    0,
    CO,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Cancel_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Cancel,
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Cancel_origin,
    NULL,
    0,
    0,
    CO,
    BOOLEAN,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Cancel_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Cancel,
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Cancel_ctlNum,
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Cancel_origin_orCat,
    0,
    0,
    CO,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Cancel_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Cancel_origin,
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Cancel_origin_orIdent,
    NULL,
    0,
    0,
    CO,
    ENUMERATED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Cancel_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Cancel_origin,
    NULL,
    NULL,
    0,
    0,
    CO,
    OCTET_STRING_64,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Cancel_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Cancel,
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Cancel_T,
    NULL,
    0,
    0,
    CO,
    INT8U,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Cancel_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Cancel,
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Cancel_Test,
    NULL,
    0,
    0,
    CO,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_Cancel_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl_Cancel,
    NULL,
    NULL,
    0,
    0,
    CO,
    BOOLEAN,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_AutoManCtl_SBO = {
    DataAttributeModelType,
    "SBO",
    (ModelNode*) &iedModel_BHKW_DRCC1_AutoManCtl,
    NULL,
    NULL,
    0,
    0,
    CO,
    VISIBLE_STRING_64,
    NULL
};

DataObject iedModel_BHKW_DRCC1_LocRemCtl = {
    DataObjectModelType,
    "LocRemCtl",
    (ModelNode*) &iedModel_BHKW_DRCC1,
    NULL,
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_q,
    0,
    0
};

DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl,
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Oper,
    NULL,
    0,
    0,
    ST,
    QUALITY,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl,
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_ctlModel,
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Oper_ctlVal,
    0,
    0,
    CO,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Oper,
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Oper_origin,
    NULL,
    0,
    0,
    CO,
    BOOLEAN,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Oper,
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Oper_ctlNum,
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Oper_origin_orCat,
    0,
    0,
    CO,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Oper_origin,
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Oper_origin_orIdent,
    NULL,
    0,
    0,
    CO,
    ENUMERATED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Oper_origin,
    NULL,
    NULL,
    0,
    0,
    CO,
    OCTET_STRING_64,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Oper,
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Oper_T,
    NULL,
    0,
    0,
    CO,
    INT8U,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Oper,
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Oper_Test,
    NULL,
    0,
    0,
    CO,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Oper,
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Oper_Check,
    NULL,
    0,
    0,
    CO,
    BOOLEAN,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Oper,
    NULL,
    NULL,
    0,
    0,
    CO,
    CHECK,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl,
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_t,
    NULL,
    0,
    0,
    CF,
    ENUMERATED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl,
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_SBO,
    NULL,
    0,
    0,
    ST,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_SBO = {
    DataAttributeModelType,
    "SBO",
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl,
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Cancel,
    NULL,
    0,
    0,
    CO,
    VISIBLE_STRING_64,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Cancel = {
    DataAttributeModelType,
    "Cancel",
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl,
    NULL,
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Cancel_ctlVal,
    0,
    0,
    CO,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Cancel_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Cancel,
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Cancel_origin,
    NULL,
    0,
    0,
    CO,
    BOOLEAN,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Cancel_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Cancel,
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Cancel_ctlNum,
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Cancel_origin_orCat,
    0,
    0,
    CO,
    CONSTRUCTED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Cancel_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Cancel_origin,
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Cancel_origin_orIdent,
    NULL,
    0,
    0,
    CO,
    ENUMERATED,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Cancel_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Cancel_origin,
    NULL,
    NULL,
    0,
    0,
    CO,
    OCTET_STRING_64,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Cancel_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Cancel,
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Cancel_T,
    NULL,
    0,
    0,
    CO,
    INT8U,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Cancel_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Cancel,
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Cancel_Test,
    NULL,
    0,
    0,
    CO,
    TIMESTAMP,
    NULL
};

DataAttribute iedModel_BHKW_DRCC1_LocRemCtl_Cancel_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_BHKW_DRCC1_LocRemCtl_Cancel,
    NULL,
    NULL,
    0,
    0,
    CO,
    BOOLEAN,
    NULL
};

static DataSetEntry ds_Anlage_LLN0_Anlage_MV1_fcda0 = {
  "IEDM1CPUAnlage",
  "MHET1$MX$AccHeatOut$instMag",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_Anlage_LLN0_Anlage_MV1_fcda1 = {
  "IEDM1CPUAnlage",
  "MHET1$MX$AccHeatOut$t",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_Anlage_LLN0_Anlage_MV1_fcda2 = {
  "IEDM1CPUAnlage",
  "MHET2$MX$AccHeatOut$instMag",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_Anlage_LLN0_Anlage_MV1_fcda3 = {
  "IEDM1CPUAnlage",
  "MHET2$MX$AccHeatOut$t",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_Anlage_LLN0_Anlage_MV1_fcda4 = {
  "IEDM1CPUAnlage",
  "MHET3$MX$AccHeatOut$instMag",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_Anlage_LLN0_Anlage_MV1_fcda5 = {
  "IEDM1CPUAnlage",
  "MHET3$MX$AccHeatOut$t",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_Anlage_LLN0_Anlage_MV1_fcda6 = {
  "IEDM1CPUAnlage",
  "DCTS1$MX$ThrmCapTot$instMag",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_Anlage_LLN0_Anlage_MV1_fcda7 = {
  "IEDM1CPUAnlage",
  "DCTS1$MX$ThrmCapTot$t",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_Anlage_LLN0_Anlage_MV1_fcda8 = {
  "IEDM1CPUAnlage",
  "DCTS1$MX$ThrmCapPct$instMag",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_Anlage_LLN0_Anlage_MV1_fcda9 = {
  "IEDM1CPUAnlage",
  "DCTS1$MX$ThrmCapPct$t",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_Anlage_LLN0_Anlage_MV1_fcda10 = {
  "IEDM1CPUAnlage",
  "STMP1$MX$Tmp$instMag",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_Anlage_LLN0_Anlage_MV1_fcda11 = {
  "IEDM1CPUAnlage",
  "STMP1$MX$Tmp$t",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_Anlage_LLN0_Anlage_MV1_fcda12 = {
  "IEDM1CPUAnlage",
  "STMP2$MX$Tmp$instMag",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_Anlage_LLN0_Anlage_MV1_fcda13 = {
  "IEDM1CPUAnlage",
  "STMP2$MX$Tmp$t",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_Anlage_LLN0_Anlage_MV1_fcda14 = {
  "IEDM1CPUAnlage",
  "STMP3$MX$Tmp$instMag",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_Anlage_LLN0_Anlage_MV1_fcda15 = {
  "IEDM1CPUAnlage",
  "STMP3$MX$Tmp$t",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_Anlage_LLN0_Anlage_MV1_fcda16 = {
  "IEDM1CPUAnlage",
  "STMP4$MX$Tmp$instMag",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_Anlage_LLN0_Anlage_MV1_fcda17 = {
  "IEDM1CPUAnlage",
  "STMP4$MX$Tmp$t",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_Anlage_LLN0_Anlage_MV1_fcda18 = {
  "IEDM1CPUAnlage",
  "STMP5$MX$Tmp$instMag",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_Anlage_LLN0_Anlage_MV1_fcda19 = {
  "IEDM1CPUAnlage",
  "STMP5$MX$Tmp$t",
  -1,
  NULL,
  NULL
};

static DataSetEntry* ds_Anlage_LLN0_Anlage_MV1_elements[20] = {
  &ds_Anlage_LLN0_Anlage_MV1_fcda0,
  &ds_Anlage_LLN0_Anlage_MV1_fcda1,
  &ds_Anlage_LLN0_Anlage_MV1_fcda2,
  &ds_Anlage_LLN0_Anlage_MV1_fcda3,
  &ds_Anlage_LLN0_Anlage_MV1_fcda4,
  &ds_Anlage_LLN0_Anlage_MV1_fcda5,
  &ds_Anlage_LLN0_Anlage_MV1_fcda6,
  &ds_Anlage_LLN0_Anlage_MV1_fcda7,
  &ds_Anlage_LLN0_Anlage_MV1_fcda8,
  &ds_Anlage_LLN0_Anlage_MV1_fcda9,
  &ds_Anlage_LLN0_Anlage_MV1_fcda10,
  &ds_Anlage_LLN0_Anlage_MV1_fcda11,
  &ds_Anlage_LLN0_Anlage_MV1_fcda12,
  &ds_Anlage_LLN0_Anlage_MV1_fcda13,
  &ds_Anlage_LLN0_Anlage_MV1_fcda14,
  &ds_Anlage_LLN0_Anlage_MV1_fcda15,
  &ds_Anlage_LLN0_Anlage_MV1_fcda16,
  &ds_Anlage_LLN0_Anlage_MV1_fcda17,
  &ds_Anlage_LLN0_Anlage_MV1_fcda18,
  &ds_Anlage_LLN0_Anlage_MV1_fcda19
};

static DataSet ds_Anlage_LLN0_Anlage_MV1 = {
  "IEDM1CPUAnlage",
  "LLN0$Anlage_MV1",
  20,
  ds_Anlage_LLN0_Anlage_MV1_elements
};
static DataSetEntry ds_Anlage_LLN0_Anlage_EV1_fcda0 = {
  "IEDM1CPUAnlage",
  "MENV1$ST$SmokAlm$stVal",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_Anlage_LLN0_Anlage_EV1_fcda1 = {
  "IEDM1CPUAnlage",
  "MENV1$ST$SmokAlm$t",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_Anlage_LLN0_Anlage_EV1_fcda2 = {
  "IEDM1CPUAnlage",
  "MENV1$ST$FloodAlm$stVal",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_Anlage_LLN0_Anlage_EV1_fcda3 = {
  "IEDM1CPUAnlage",
  "MENV1$ST$FloodAlm$t",
  -1,
  NULL,
  NULL
};

static DataSetEntry* ds_Anlage_LLN0_Anlage_EV1_elements[4] = {
  &ds_Anlage_LLN0_Anlage_EV1_fcda0,
  &ds_Anlage_LLN0_Anlage_EV1_fcda1,
  &ds_Anlage_LLN0_Anlage_EV1_fcda2,
  &ds_Anlage_LLN0_Anlage_EV1_fcda3
};

static DataSet ds_Anlage_LLN0_Anlage_EV1 = {
  "IEDM1CPUAnlage",
  "LLN0$Anlage_EV1",
  4,
  ds_Anlage_LLN0_Anlage_EV1_elements
};
static DataSetEntry ds_BHKW_LLN0_BHKW_MV1_fcda0 = {
  "IEDM1CPUBHKW",
  "MMTR1$ST$TotWh$actVal",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_BHKW_LLN0_BHKW_MV1_fcda1 = {
  "IEDM1CPUBHKW",
  "MMTR1$ST$TotWh$t",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_BHKW_LLN0_BHKW_MV1_fcda2 = {
  "IEDM1CPUBHKW",
  "MMXU1$MX$TotW$instMag",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_BHKW_LLN0_BHKW_MV1_fcda3 = {
  "IEDM1CPUBHKW",
  "MMXU1$MX$TotW$t",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_BHKW_LLN0_BHKW_MV1_fcda4 = {
  "IEDM1CPUBHKW",
  "MFUL1$MX$AccTotFuel$instMag",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_BHKW_LLN0_BHKW_MV1_fcda5 = {
  "IEDM1CPUBHKW",
  "MFUL1$MX$AccTotFuel$t",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_BHKW_LLN0_BHKW_MV1_fcda6 = {
  "IEDM1CPUBHKW",
  "DCTS1$MX$ThrmCapTot$instMag",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_BHKW_LLN0_BHKW_MV1_fcda7 = {
  "IEDM1CPUBHKW",
  "DCTS1$MX$ThrmCapTot$t",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_BHKW_LLN0_BHKW_MV1_fcda8 = {
  "IEDM1CPUBHKW",
  "DCTS1$MX$ThrmCapPct$instMag",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_BHKW_LLN0_BHKW_MV1_fcda9 = {
  "IEDM1CPUBHKW",
  "DCTS1$MX$ThrmCapPct$t",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_BHKW_LLN0_BHKW_MV1_fcda10 = {
  "IEDM1CPUBHKW",
  "STMP1$MX$Tmp$instMag",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_BHKW_LLN0_BHKW_MV1_fcda11 = {
  "IEDM1CPUBHKW",
  "STMP1$MX$Tmp$t",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_BHKW_LLN0_BHKW_MV1_fcda12 = {
  "IEDM1CPUBHKW",
  "STMP2$MX$Tmp$instMag",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_BHKW_LLN0_BHKW_MV1_fcda13 = {
  "IEDM1CPUBHKW",
  "STMP2$MX$Tmp$t",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_BHKW_LLN0_BHKW_MV1_fcda14 = {
  "IEDM1CPUBHKW",
  "STMP3$MX$Tmp$instMag",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_BHKW_LLN0_BHKW_MV1_fcda15 = {
  "IEDM1CPUBHKW",
  "STMP3$MX$Tmp$t",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_BHKW_LLN0_BHKW_MV1_fcda16 = {
  "IEDM1CPUBHKW",
  "STMP4$MX$Tmp$instMag",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_BHKW_LLN0_BHKW_MV1_fcda17 = {
  "IEDM1CPUBHKW",
  "STMP4$MX$Tmp$t",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_BHKW_LLN0_BHKW_MV1_fcda18 = {
  "IEDM1CPUBHKW",
  "STMP5$MX$Tmp$instMag",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_BHKW_LLN0_BHKW_MV1_fcda19 = {
  "IEDM1CPUBHKW",
  "STMP5$MX$Tmp$t",
  -1,
  NULL,
  NULL
};

static DataSetEntry* ds_BHKW_LLN0_BHKW_MV1_elements[20] = {
  &ds_BHKW_LLN0_BHKW_MV1_fcda0,
  &ds_BHKW_LLN0_BHKW_MV1_fcda1,
  &ds_BHKW_LLN0_BHKW_MV1_fcda2,
  &ds_BHKW_LLN0_BHKW_MV1_fcda3,
  &ds_BHKW_LLN0_BHKW_MV1_fcda4,
  &ds_BHKW_LLN0_BHKW_MV1_fcda5,
  &ds_BHKW_LLN0_BHKW_MV1_fcda6,
  &ds_BHKW_LLN0_BHKW_MV1_fcda7,
  &ds_BHKW_LLN0_BHKW_MV1_fcda8,
  &ds_BHKW_LLN0_BHKW_MV1_fcda9,
  &ds_BHKW_LLN0_BHKW_MV1_fcda10,
  &ds_BHKW_LLN0_BHKW_MV1_fcda11,
  &ds_BHKW_LLN0_BHKW_MV1_fcda12,
  &ds_BHKW_LLN0_BHKW_MV1_fcda13,
  &ds_BHKW_LLN0_BHKW_MV1_fcda14,
  &ds_BHKW_LLN0_BHKW_MV1_fcda15,
  &ds_BHKW_LLN0_BHKW_MV1_fcda16,
  &ds_BHKW_LLN0_BHKW_MV1_fcda17,
  &ds_BHKW_LLN0_BHKW_MV1_fcda18,
  &ds_BHKW_LLN0_BHKW_MV1_fcda19
};

static DataSet ds_BHKW_LLN0_BHKW_MV1 = {
  "IEDM1CPUBHKW",
  "LLN0$BHKW_MV1",
  20,
  ds_BHKW_LLN0_BHKW_MV1_elements
};
static DataSetEntry ds_BHKW_LLN0_BHKW_EV1_fcda0 = {
  "IEDM1CPUBHKW",
  "DRCS1$ST$ModOnConn$stVal",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_BHKW_LLN0_BHKW_EV1_fcda1 = {
  "IEDM1CPUBHKW",
  "DRCS1$ST$ModOnConn$t",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_BHKW_LLN0_BHKW_EV1_fcda2 = {
  "IEDM1CPUBHKW",
  "DRCS1$ST$ModOnAval$stVal",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_BHKW_LLN0_BHKW_EV1_fcda3 = {
  "IEDM1CPUBHKW",
  "DRCS1$ST$ModOnAval$t",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_BHKW_LLN0_BHKW_EV1_fcda4 = {
  "IEDM1CPUBHKW",
  "DRCS1$ST$ModOffAval$stVal",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_BHKW_LLN0_BHKW_EV1_fcda5 = {
  "IEDM1CPUBHKW",
  "DRCS1$ST$ModOffAval$t",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_BHKW_LLN0_BHKW_EV1_fcda6 = {
  "IEDM1CPUBHKW",
  "DRCS1$ST$ModOffUnav$stVal",
  -1,
  NULL,
  NULL
};

static DataSetEntry ds_BHKW_LLN0_BHKW_EV1_fcda7 = {
  "IEDM1CPUBHKW",
  "DRCS1$ST$ModOffUnav$t",
  -1,
  NULL,
  NULL
};

static DataSetEntry* ds_BHKW_LLN0_BHKW_EV1_elements[8] = {
  &ds_BHKW_LLN0_BHKW_EV1_fcda0,
  &ds_BHKW_LLN0_BHKW_EV1_fcda1,
  &ds_BHKW_LLN0_BHKW_EV1_fcda2,
  &ds_BHKW_LLN0_BHKW_EV1_fcda3,
  &ds_BHKW_LLN0_BHKW_EV1_fcda4,
  &ds_BHKW_LLN0_BHKW_EV1_fcda5,
  &ds_BHKW_LLN0_BHKW_EV1_fcda6,
  &ds_BHKW_LLN0_BHKW_EV1_fcda7
};

static DataSet ds_BHKW_LLN0_BHKW_EV1 = {
  "IEDM1CPUBHKW",
  "LLN0$BHKW_EV1",
  8,
  ds_BHKW_LLN0_BHKW_EV1_elements
};

static DataSet* datasets[] = {
  &ds_Anlage_LLN0_Anlage_MV1,
  &ds_Anlage_LLN0_Anlage_EV1,
  &ds_BHKW_LLN0_BHKW_MV1,
  &ds_BHKW_LLN0_BHKW_EV1,
  NULL,
};
static ReportControlBlock iedModel_Anlage_LLN0_report0 = {&iedModel_Anlage_LLN0, "brcbMV1", "Anlage$brcbMV1", true, "Anlage_MV1", 1234, 16, 111, 50, 900000};
static ReportControlBlock iedModel_Anlage_LLN0_report1 = {&iedModel_Anlage_LLN0, "brcbEV1", "Anlagebe$brcbEV1", true, "Anlage_EV1", 0, 18, 111, 50, 900000};
static ReportControlBlock iedModel_BHKW_LLN0_report0 = {&iedModel_BHKW_LLN0, "brcbEV1", "brcbEV1", true, "BHKW_EV1", 1234, 18, 111, 50, 900000};
static ReportControlBlock iedModel_BHKW_LLN0_report1 = {&iedModel_BHKW_LLN0, "brcbMV1", "brcbMV1", true, "BHKW_MV1", 1234, 16, 111, 0, 900000};

static ReportControlBlock* reportControlBlocks[] = {
    &iedModel_Anlage_LLN0_report0,
    &iedModel_Anlage_LLN0_report1,
    &iedModel_BHKW_LLN0_report0,
    &iedModel_BHKW_LLN0_report1,
    NULL
};


static GSEControlBlock* gseControlBlocks[] = {
    NULL
};


static void
initializeValues()
{

iedModel_Anlage_LLN0_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_Anlage_MHET1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_Anlage_MHET2_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_Anlage_MHET3_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_Anlage_DCTS1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_Anlage_STMP1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_Anlage_STMP2_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_Anlage_STMP3_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_Anlage_STMP4_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_Anlage_STMP5_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_Anlage_MENV1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_BHKW_LLN0_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_BHKW_MMTR1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_BHKW_MMXU1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_BHKW_DCTS1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_BHKW_MHET1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_BHKW_MFUL1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_BHKW_STMP1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_BHKW_STMP2_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_BHKW_STMP3_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_BHKW_STMP4_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_BHKW_STMP5_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_BHKW_DRCS1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_BHKW_DSCH1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_BHKW_DRCC1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_BHKW_DRCC1_OutWSet_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(3);

iedModel_BHKW_DRCC1_DERStr_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(2);

iedModel_BHKW_DRCC1_DERStop_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(2);

iedModel_BHKW_DRCC1_AutoManCtl_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(2);

iedModel_BHKW_DRCC1_LocRemCtl_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(2);
}
