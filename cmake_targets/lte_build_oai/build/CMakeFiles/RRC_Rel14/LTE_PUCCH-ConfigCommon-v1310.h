/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_PUCCH_ConfigCommon_v1310_H_
#define	_LTE_PUCCH_ConfigCommon_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level0_r13 {
	LTE_PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level0_r13_n1	= 0,
	LTE_PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level0_r13_n2	= 1,
	LTE_PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level0_r13_n4	= 2,
	LTE_PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level0_r13_n8	= 3
} e_LTE_PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level0_r13;
typedef enum LTE_PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level1_r13 {
	LTE_PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level1_r13_n1	= 0,
	LTE_PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level1_r13_n2	= 1,
	LTE_PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level1_r13_n4	= 2,
	LTE_PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level1_r13_n8	= 3
} e_LTE_PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level1_r13;
typedef enum LTE_PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level2_r13 {
	LTE_PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level2_r13_n4	= 0,
	LTE_PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level2_r13_n8	= 1,
	LTE_PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level2_r13_n16	= 2,
	LTE_PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level2_r13_n32	= 3
} e_LTE_PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level2_r13;
typedef enum LTE_PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level3_r13 {
	LTE_PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level3_r13_n4	= 0,
	LTE_PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level3_r13_n8	= 1,
	LTE_PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level3_r13_n16	= 2,
	LTE_PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level3_r13_n32	= 3
} e_LTE_PUCCH_ConfigCommon_v1310__pucch_NumRepetitionCE_Msg4_Level3_r13;

/* Forward declarations */
struct LTE_N1PUCCH_AN_InfoList_r13;

/* LTE_PUCCH-ConfigCommon-v1310 */
typedef struct LTE_PUCCH_ConfigCommon_v1310 {
	struct LTE_N1PUCCH_AN_InfoList_r13	*n1PUCCH_AN_InfoList_r13;	/* OPTIONAL */
	long	*pucch_NumRepetitionCE_Msg4_Level0_r13;	/* OPTIONAL */
	long	*pucch_NumRepetitionCE_Msg4_Level1_r13;	/* OPTIONAL */
	long	*pucch_NumRepetitionCE_Msg4_Level2_r13;	/* OPTIONAL */
	long	*pucch_NumRepetitionCE_Msg4_Level3_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PUCCH_ConfigCommon_v1310_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level0_r13_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level1_r13_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level2_r13_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_pucch_NumRepetitionCE_Msg4_Level3_r13_18;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PUCCH_ConfigCommon_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PUCCH_ConfigCommon_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PUCCH_ConfigCommon_v1310_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_N1PUCCH-AN-InfoList-r13.h"

#endif	/* _LTE_PUCCH_ConfigCommon_v1310_H_ */
#include <asn_internal.h>
