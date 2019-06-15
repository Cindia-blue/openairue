/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SoundingRS_UL_ConfigCommon_H_
#define	_LTE_SoundingRS_UL_ConfigCommon_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeEnumerated.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SoundingRS_UL_ConfigCommon_PR {
	LTE_SoundingRS_UL_ConfigCommon_PR_NOTHING,	/* No components present */
	LTE_SoundingRS_UL_ConfigCommon_PR_release,
	LTE_SoundingRS_UL_ConfigCommon_PR_setup
} LTE_SoundingRS_UL_ConfigCommon_PR;
typedef enum LTE_SoundingRS_UL_ConfigCommon__setup__srs_BandwidthConfig {
	LTE_SoundingRS_UL_ConfigCommon__setup__srs_BandwidthConfig_bw0	= 0,
	LTE_SoundingRS_UL_ConfigCommon__setup__srs_BandwidthConfig_bw1	= 1,
	LTE_SoundingRS_UL_ConfigCommon__setup__srs_BandwidthConfig_bw2	= 2,
	LTE_SoundingRS_UL_ConfigCommon__setup__srs_BandwidthConfig_bw3	= 3,
	LTE_SoundingRS_UL_ConfigCommon__setup__srs_BandwidthConfig_bw4	= 4,
	LTE_SoundingRS_UL_ConfigCommon__setup__srs_BandwidthConfig_bw5	= 5,
	LTE_SoundingRS_UL_ConfigCommon__setup__srs_BandwidthConfig_bw6	= 6,
	LTE_SoundingRS_UL_ConfigCommon__setup__srs_BandwidthConfig_bw7	= 7
} e_LTE_SoundingRS_UL_ConfigCommon__setup__srs_BandwidthConfig;
typedef enum LTE_SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig {
	LTE_SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc0	= 0,
	LTE_SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc1	= 1,
	LTE_SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc2	= 2,
	LTE_SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc3	= 3,
	LTE_SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc4	= 4,
	LTE_SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc5	= 5,
	LTE_SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc6	= 6,
	LTE_SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc7	= 7,
	LTE_SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc8	= 8,
	LTE_SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc9	= 9,
	LTE_SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc10	= 10,
	LTE_SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc11	= 11,
	LTE_SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc12	= 12,
	LTE_SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc13	= 13,
	LTE_SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc14	= 14,
	LTE_SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig_sc15	= 15
} e_LTE_SoundingRS_UL_ConfigCommon__setup__srs_SubframeConfig;
typedef enum LTE_SoundingRS_UL_ConfigCommon__setup__srs_MaxUpPts {
	LTE_SoundingRS_UL_ConfigCommon__setup__srs_MaxUpPts_true	= 0
} e_LTE_SoundingRS_UL_ConfigCommon__setup__srs_MaxUpPts;

/* LTE_SoundingRS-UL-ConfigCommon */
typedef struct LTE_SoundingRS_UL_ConfigCommon {
	LTE_SoundingRS_UL_ConfigCommon_PR present;
	union LTE_SoundingRS_UL_ConfigCommon_u {
		NULL_t	 release;
		struct LTE_SoundingRS_UL_ConfigCommon__setup {
			long	 srs_BandwidthConfig;
			long	 srs_SubframeConfig;
			BOOLEAN_t	 ackNackSRS_SimultaneousTransmission;
			long	*srs_MaxUpPts;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SoundingRS_UL_ConfigCommon_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_srs_BandwidthConfig_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_srs_SubframeConfig_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_srs_MaxUpPts_31;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SoundingRS_UL_ConfigCommon;
extern asn_CHOICE_specifics_t asn_SPC_LTE_SoundingRS_UL_ConfigCommon_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SoundingRS_UL_ConfigCommon_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_SoundingRS_UL_ConfigCommon_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SoundingRS_UL_ConfigCommon_H_ */
#include <asn_internal.h>
