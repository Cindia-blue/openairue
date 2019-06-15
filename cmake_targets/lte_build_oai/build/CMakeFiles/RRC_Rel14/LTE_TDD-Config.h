/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_TDD_Config_H_
#define	_LTE_TDD_Config_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_TDD_Config__subframeAssignment {
	LTE_TDD_Config__subframeAssignment_sa0	= 0,
	LTE_TDD_Config__subframeAssignment_sa1	= 1,
	LTE_TDD_Config__subframeAssignment_sa2	= 2,
	LTE_TDD_Config__subframeAssignment_sa3	= 3,
	LTE_TDD_Config__subframeAssignment_sa4	= 4,
	LTE_TDD_Config__subframeAssignment_sa5	= 5,
	LTE_TDD_Config__subframeAssignment_sa6	= 6
} e_LTE_TDD_Config__subframeAssignment;
typedef enum LTE_TDD_Config__specialSubframePatterns {
	LTE_TDD_Config__specialSubframePatterns_ssp0	= 0,
	LTE_TDD_Config__specialSubframePatterns_ssp1	= 1,
	LTE_TDD_Config__specialSubframePatterns_ssp2	= 2,
	LTE_TDD_Config__specialSubframePatterns_ssp3	= 3,
	LTE_TDD_Config__specialSubframePatterns_ssp4	= 4,
	LTE_TDD_Config__specialSubframePatterns_ssp5	= 5,
	LTE_TDD_Config__specialSubframePatterns_ssp6	= 6,
	LTE_TDD_Config__specialSubframePatterns_ssp7	= 7,
	LTE_TDD_Config__specialSubframePatterns_ssp8	= 8
} e_LTE_TDD_Config__specialSubframePatterns;

/* LTE_TDD-Config */
typedef struct LTE_TDD_Config {
	long	 subframeAssignment;
	long	 specialSubframePatterns;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_TDD_Config_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_subframeAssignment_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_specialSubframePatterns_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_TDD_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_TDD_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_TDD_Config_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_TDD_Config_H_ */
#include <asn_internal.h>
