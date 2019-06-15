/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_CQI_ReportPeriodicProcExt_r11_H_
#define	_LTE_CQI_ReportPeriodicProcExt_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_CQI-ReportPeriodicProcExtId-r11.h"
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>
#include <NULL.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11_PR {
	LTE_CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11_PR_NOTHING,	/* No components present */
	LTE_CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11_PR_widebandCQI_r11,
	LTE_CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11_PR_subbandCQI_r11
} LTE_CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11_PR;
typedef enum LTE_CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11__widebandCQI_r11__csi_ReportMode_r11 {
	LTE_CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11__widebandCQI_r11__csi_ReportMode_r11_submode1	= 0,
	LTE_CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11__widebandCQI_r11__csi_ReportMode_r11_submode2	= 1
} e_LTE_CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11__widebandCQI_r11__csi_ReportMode_r11;
typedef enum LTE_CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11__subbandCQI_r11__periodicityFactor_r11 {
	LTE_CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11__subbandCQI_r11__periodicityFactor_r11_n2	= 0,
	LTE_CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11__subbandCQI_r11__periodicityFactor_r11_n4	= 1
} e_LTE_CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11__subbandCQI_r11__periodicityFactor_r11;
typedef enum LTE_CQI_ReportPeriodicProcExt_r11__csi_ConfigIndex_r11_PR {
	LTE_CQI_ReportPeriodicProcExt_r11__csi_ConfigIndex_r11_PR_NOTHING,	/* No components present */
	LTE_CQI_ReportPeriodicProcExt_r11__csi_ConfigIndex_r11_PR_release,
	LTE_CQI_ReportPeriodicProcExt_r11__csi_ConfigIndex_r11_PR_setup
} LTE_CQI_ReportPeriodicProcExt_r11__csi_ConfigIndex_r11_PR;
typedef enum LTE_CQI_ReportPeriodicProcExt_r11__ext2__periodicityFactorWB_r13 {
	LTE_CQI_ReportPeriodicProcExt_r11__ext2__periodicityFactorWB_r13_n2	= 0,
	LTE_CQI_ReportPeriodicProcExt_r11__ext2__periodicityFactorWB_r13_n4	= 1
} e_LTE_CQI_ReportPeriodicProcExt_r11__ext2__periodicityFactorWB_r13;

/* Forward declarations */
struct LTE_CRI_ReportConfig_r13;

/* LTE_CQI-ReportPeriodicProcExt-r11 */
typedef struct LTE_CQI_ReportPeriodicProcExt_r11 {
	LTE_CQI_ReportPeriodicProcExtId_r11_t	 cqi_ReportPeriodicProcExtId_r11;
	long	 cqi_pmi_ConfigIndex_r11;
	struct LTE_CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11 {
		LTE_CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11_PR present;
		union LTE_CQI_ReportPeriodicProcExt_r11__LTE_cqi_FormatIndicatorPeriodic_r11_u {
			struct LTE_CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11__widebandCQI_r11 {
				long	*csi_ReportMode_r11;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} widebandCQI_r11;
			struct LTE_CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11__subbandCQI_r11 {
				long	 k;
				long	 periodicityFactor_r11;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} subbandCQI_r11;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} cqi_FormatIndicatorPeriodic_r11;
	long	*ri_ConfigIndex_r11;	/* OPTIONAL */
	struct LTE_CQI_ReportPeriodicProcExt_r11__csi_ConfigIndex_r11 {
		LTE_CQI_ReportPeriodicProcExt_r11__csi_ConfigIndex_r11_PR present;
		union LTE_CQI_ReportPeriodicProcExt_r11__LTE_csi_ConfigIndex_r11_u {
			NULL_t	 release;
			struct LTE_CQI_ReportPeriodicProcExt_r11__csi_ConfigIndex_r11__setup {
				long	 cqi_pmi_ConfigIndex2_r11;
				long	*ri_ConfigIndex2_r11;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *csi_ConfigIndex_r11;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_CQI_ReportPeriodicProcExt_r11__ext1 {
		struct LTE_CRI_ReportConfig_r13	*cri_ReportConfig_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_CQI_ReportPeriodicProcExt_r11__ext2 {
		long	*periodicityFactorWB_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CQI_ReportPeriodicProcExt_r11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_csi_ReportMode_r11_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_periodicityFactor_r11_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_periodicityFactorWB_r13_24;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CQI_ReportPeriodicProcExt_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CQI_ReportPeriodicProcExt_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CQI_ReportPeriodicProcExt_r11_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_CRI-ReportConfig-r13.h"

#endif	/* _LTE_CQI_ReportPeriodicProcExt_r11_H_ */
#include <asn_internal.h>
