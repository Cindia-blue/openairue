/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-Sidelink-Preconf"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SL_PreconfigV2X_Sync_r14_H_
#define	_LTE_SL_PreconfigV2X_Sync_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_SL-V2X-SyncOffsetIndicators-r14.h"
#include "LTE_P0-SL-r12.h"
#include "LTE_RSRP-RangeSL3-r12.h"
#include "LTE_FilterCoefficient.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SL_PreconfigV2X_Sync_r14__syncRefMinHyst_r14 {
	LTE_SL_PreconfigV2X_Sync_r14__syncRefMinHyst_r14_dB0	= 0,
	LTE_SL_PreconfigV2X_Sync_r14__syncRefMinHyst_r14_dB3	= 1,
	LTE_SL_PreconfigV2X_Sync_r14__syncRefMinHyst_r14_dB6	= 2,
	LTE_SL_PreconfigV2X_Sync_r14__syncRefMinHyst_r14_dB9	= 3,
	LTE_SL_PreconfigV2X_Sync_r14__syncRefMinHyst_r14_dB12	= 4
} e_LTE_SL_PreconfigV2X_Sync_r14__syncRefMinHyst_r14;
typedef enum LTE_SL_PreconfigV2X_Sync_r14__syncRefDiffHyst_r14 {
	LTE_SL_PreconfigV2X_Sync_r14__syncRefDiffHyst_r14_dB0	= 0,
	LTE_SL_PreconfigV2X_Sync_r14__syncRefDiffHyst_r14_dB3	= 1,
	LTE_SL_PreconfigV2X_Sync_r14__syncRefDiffHyst_r14_dB6	= 2,
	LTE_SL_PreconfigV2X_Sync_r14__syncRefDiffHyst_r14_dB9	= 3,
	LTE_SL_PreconfigV2X_Sync_r14__syncRefDiffHyst_r14_dB12	= 4,
	LTE_SL_PreconfigV2X_Sync_r14__syncRefDiffHyst_r14_dBinf	= 5
} e_LTE_SL_PreconfigV2X_Sync_r14__syncRefDiffHyst_r14;

/* LTE_SL-PreconfigV2X-Sync-r14 */
typedef struct LTE_SL_PreconfigV2X_Sync_r14 {
	LTE_SL_V2X_SyncOffsetIndicators_r14_t	 syncOffsetIndicators_r14;
	LTE_P0_SL_r12_t	 syncTxParameters_r14;
	LTE_RSRP_RangeSL3_r12_t	 syncTxThreshOoC_r14;
	LTE_FilterCoefficient_t	 filterCoefficient_r14;
	long	 syncRefMinHyst_r14;
	long	 syncRefDiffHyst_r14;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SL_PreconfigV2X_Sync_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_syncRefMinHyst_r14_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_syncRefDiffHyst_r14_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SL_PreconfigV2X_Sync_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_PreconfigV2X_Sync_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SL_PreconfigV2X_Sync_r14_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SL_PreconfigV2X_Sync_r14_H_ */
#include <asn_internal.h>
