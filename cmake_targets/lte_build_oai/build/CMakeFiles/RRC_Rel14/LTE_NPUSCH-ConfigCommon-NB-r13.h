/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_NPUSCH_ConfigCommon_NB_r13_H_
#define	_LTE_NPUSCH_ConfigCommon_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "LTE_UL-ReferenceSignalsNPUSCH-NB-r13.h"
#include "LTE_ACK-NACK-NumRepetitions-NB-r13.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13 {
	LTE_NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc0	= 0,
	LTE_NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc1	= 1,
	LTE_NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc2	= 2,
	LTE_NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc3	= 3,
	LTE_NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc4	= 4,
	LTE_NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc5	= 5,
	LTE_NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc6	= 6,
	LTE_NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc7	= 7,
	LTE_NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc8	= 8,
	LTE_NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc9	= 9,
	LTE_NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc10	= 10,
	LTE_NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc11	= 11,
	LTE_NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc12	= 12,
	LTE_NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc13	= 13,
	LTE_NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc14	= 14,
	LTE_NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13_sc15	= 15
} e_LTE_NPUSCH_ConfigCommon_NB_r13__srs_SubframeConfig_r13;

/* LTE_NPUSCH-ConfigCommon-NB-r13 */
typedef struct LTE_NPUSCH_ConfigCommon_NB_r13 {
	struct LTE_NPUSCH_ConfigCommon_NB_r13__ack_NACK_NumRepetitions_Msg4_r13 {
		A_SEQUENCE_OF(LTE_ACK_NACK_NumRepetitions_NB_r13_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ack_NACK_NumRepetitions_Msg4_r13;
	long	*srs_SubframeConfig_r13;	/* OPTIONAL */
	struct LTE_NPUSCH_ConfigCommon_NB_r13__dmrs_Config_r13 {
		long	*threeTone_BaseSequence_r13;	/* OPTIONAL */
		long	 threeTone_CyclicShift_r13;
		long	*sixTone_BaseSequence_r13;	/* OPTIONAL */
		long	 sixTone_CyclicShift_r13;
		long	*twelveTone_BaseSequence_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dmrs_Config_r13;
	LTE_UL_ReferenceSignalsNPUSCH_NB_r13_t	 ul_ReferenceSignalsNPUSCH_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_NPUSCH_ConfigCommon_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_srs_SubframeConfig_r13_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_NPUSCH_ConfigCommon_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_NPUSCH_ConfigCommon_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_NPUSCH_ConfigCommon_NB_r13_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_NPUSCH_ConfigCommon_NB_r13_H_ */
#include <asn_internal.h>
