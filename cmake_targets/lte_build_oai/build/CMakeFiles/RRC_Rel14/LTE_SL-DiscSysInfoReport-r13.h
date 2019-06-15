/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SL_DiscSysInfoReport_r13_H_
#define	_LTE_SL_DiscSysInfoReport_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_CellIdentity.h"
#include "LTE_ARFCN-ValueEUTRA-r9.h"
#include "LTE_P-Max.h"
#include <NativeInteger.h>
#include "LTE_Q-RxLevMin.h"
#include <constr_SEQUENCE.h>
#include <NativeEnumerated.h>
#include "LTE_T-Reselection.h"
#include "LTE_ARFCN-ValueEUTRA.h"
#include "LTE_AdditionalSpectrumEmission.h"
#include "LTE_AdditionalSpectrumEmission-v10l0.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13 {
	LTE_SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB0	= 0,
	LTE_SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB1	= 1,
	LTE_SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB2	= 2,
	LTE_SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB3	= 3,
	LTE_SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB4	= 4,
	LTE_SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB5	= 5,
	LTE_SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB6	= 6,
	LTE_SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB8	= 7,
	LTE_SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB10	= 8,
	LTE_SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB12	= 9,
	LTE_SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB14	= 10,
	LTE_SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB16	= 11,
	LTE_SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB18	= 12,
	LTE_SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB20	= 13,
	LTE_SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB22	= 14,
	LTE_SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB24	= 15
} e_LTE_SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13;
typedef enum LTE_SL_DiscSysInfoReport_r13__freqInfo_r13__ul_Bandwidth_r13 {
	LTE_SL_DiscSysInfoReport_r13__freqInfo_r13__ul_Bandwidth_r13_n6	= 0,
	LTE_SL_DiscSysInfoReport_r13__freqInfo_r13__ul_Bandwidth_r13_n15	= 1,
	LTE_SL_DiscSysInfoReport_r13__freqInfo_r13__ul_Bandwidth_r13_n25	= 2,
	LTE_SL_DiscSysInfoReport_r13__freqInfo_r13__ul_Bandwidth_r13_n50	= 3,
	LTE_SL_DiscSysInfoReport_r13__freqInfo_r13__ul_Bandwidth_r13_n75	= 4,
	LTE_SL_DiscSysInfoReport_r13__freqInfo_r13__ul_Bandwidth_r13_n100	= 5
} e_LTE_SL_DiscSysInfoReport_r13__freqInfo_r13__ul_Bandwidth_r13;

/* Forward declarations */
struct LTE_PLMN_IdentityList;
struct LTE_SL_DiscRxPoolList_r12;
struct LTE_SL_DiscTxPoolList_r12;
struct LTE_SL_DiscTxPowerInfoList_r12;
struct LTE_SL_SyncConfigNFreq_r13;
struct LTE_TDD_Config;

/* LTE_SL-DiscSysInfoReport-r13 */
typedef struct LTE_SL_DiscSysInfoReport_r13 {
	struct LTE_PLMN_IdentityList	*plmn_IdentityList_r13;	/* OPTIONAL */
	LTE_CellIdentity_t	*cellIdentity_13;	/* OPTIONAL */
	LTE_ARFCN_ValueEUTRA_r9_t	*carrierFreqInfo_13;	/* OPTIONAL */
	struct LTE_SL_DiscRxPoolList_r12	*discRxResources_r13;	/* OPTIONAL */
	struct LTE_SL_DiscTxPoolList_r12	*discTxPoolCommon_r13;	/* OPTIONAL */
	struct LTE_SL_DiscTxPowerInfoList_r12	*discTxPowerInfo_r13;	/* OPTIONAL */
	struct LTE_SL_SyncConfigNFreq_r13	*discSyncConfig_r13;	/* OPTIONAL */
	struct LTE_SL_DiscSysInfoReport_r13__discCellSelectionInfo_r13 {
		LTE_Q_RxLevMin_t	 q_RxLevMin_r13;
		long	*q_RxLevMinOffset_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *discCellSelectionInfo_r13;
	struct LTE_SL_DiscSysInfoReport_r13__cellReselectionInfo_r13 {
		long	 q_Hyst_r13;
		LTE_Q_RxLevMin_t	 q_RxLevMin_r13;
		LTE_T_Reselection_t	 t_ReselectionEUTRA_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cellReselectionInfo_r13;
	struct LTE_TDD_Config	*tdd_Config_r13;	/* OPTIONAL */
	struct LTE_SL_DiscSysInfoReport_r13__freqInfo_r13 {
		LTE_ARFCN_ValueEUTRA_t	*ul_CarrierFreq_r13;	/* OPTIONAL */
		long	*ul_Bandwidth_r13;	/* OPTIONAL */
		LTE_AdditionalSpectrumEmission_t	*additionalSpectrumEmission_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *freqInfo_r13;
	LTE_P_Max_t	*p_Max_r13;	/* OPTIONAL */
	long	*referenceSignalPower_r13;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_SL_DiscSysInfoReport_r13__ext1 {
		struct LTE_SL_DiscSysInfoReport_r13__ext1__freqInfo_v1370 {
			LTE_AdditionalSpectrumEmission_v10l0_t	 additionalSpectrumEmission_v1370;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *freqInfo_v1370;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SL_DiscSysInfoReport_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_q_Hyst_r13_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ul_Bandwidth_r13_35;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SL_DiscSysInfoReport_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_DiscSysInfoReport_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SL_DiscSysInfoReport_r13_1[14];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_PLMN-IdentityList.h"
#include "LTE_SL-DiscRxPoolList-r12.h"
#include "LTE_SL-DiscTxPoolList-r12.h"
#include "LTE_SL-DiscTxPowerInfoList-r12.h"
#include "LTE_SL-SyncConfigNFreq-r13.h"
#include "LTE_TDD-Config.h"

#endif	/* _LTE_SL_DiscSysInfoReport_r13_H_ */
#include <asn_internal.h>
