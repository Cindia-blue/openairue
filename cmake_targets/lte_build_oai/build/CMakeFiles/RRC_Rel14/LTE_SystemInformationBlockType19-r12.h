/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SystemInformationBlockType19_r12_H_
#define	_LTE_SystemInformationBlockType19_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include "LTE_SL-DiscRxPoolList-r12.h"
#include <constr_SEQUENCE.h>
#include <NativeEnumerated.h>
#include "LTE_SL-DiscConfigRelayUE-r13.h"
#include "LTE_SL-DiscConfigRemoteUE-r13.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SystemInformationBlockType19_r12__ext1__discConfig_v1310__gapRequestsAllowedCommon {
	LTE_SystemInformationBlockType19_r12__ext1__discConfig_v1310__gapRequestsAllowedCommon_true	= 0
} e_LTE_SystemInformationBlockType19_r12__ext1__discConfig_v1310__gapRequestsAllowedCommon;

/* Forward declarations */
struct LTE_SL_CarrierFreqInfoList_r12;
struct LTE_SL_DiscTxPoolList_r12;
struct LTE_SL_DiscTxPowerInfoList_r12;
struct LTE_SL_SyncConfigList_r12;
struct LTE_SL_CarrierFreqInfoList_v1310;

/* LTE_SystemInformationBlockType19-r12 */
typedef struct LTE_SystemInformationBlockType19_r12 {
	struct LTE_SystemInformationBlockType19_r12__discConfig_r12 {
		LTE_SL_DiscRxPoolList_r12_t	 discRxPool_r12;
		struct LTE_SL_DiscTxPoolList_r12	*discTxPoolCommon_r12;	/* OPTIONAL */
		struct LTE_SL_DiscTxPowerInfoList_r12	*discTxPowerInfo_r12;	/* OPTIONAL */
		struct LTE_SL_SyncConfigList_r12	*discSyncConfig_r12;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *discConfig_r12;
	struct LTE_SL_CarrierFreqInfoList_r12	*discInterFreqList_r12;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_SystemInformationBlockType19_r12__ext1 {
		struct LTE_SystemInformationBlockType19_r12__ext1__discConfig_v1310 {
			struct LTE_SL_CarrierFreqInfoList_v1310	*discInterFreqList_v1310;	/* OPTIONAL */
			long	*gapRequestsAllowedCommon;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *discConfig_v1310;
		struct LTE_SystemInformationBlockType19_r12__ext1__discConfigRelay_r13 {
			LTE_SL_DiscConfigRelayUE_r13_t	 relayUE_Config_r13;
			LTE_SL_DiscConfigRemoteUE_r13_t	 remoteUE_Config_r13;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *discConfigRelay_r13;
		struct LTE_SystemInformationBlockType19_r12__ext1__discConfigPS_13 {
			LTE_SL_DiscRxPoolList_r12_t	 discRxPoolPS_r13;
			struct LTE_SL_DiscTxPoolList_r12	*discTxPoolPS_Common_r13;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *discConfigPS_13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformationBlockType19_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_gapRequestsAllowedCommon_13;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType19_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType19_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType19_r12_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SL-CarrierFreqInfoList-r12.h"
#include "LTE_SL-DiscTxPoolList-r12.h"
#include "LTE_SL-DiscTxPowerInfoList-r12.h"
#include "LTE_SL-SyncConfigList-r12.h"
#include "LTE_SL-CarrierFreqInfoList-v1310.h"

#endif	/* _LTE_SystemInformationBlockType19_r12_H_ */
#include <asn_internal.h>
