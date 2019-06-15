/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RLC_Config_v1430_H_
#define	_LTE_RLC_Config_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "LTE_PollByte-r14.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RLC_Config_v1430_PR {
	LTE_RLC_Config_v1430_PR_NOTHING,	/* No components present */
	LTE_RLC_Config_v1430_PR_release,
	LTE_RLC_Config_v1430_PR_setup
} LTE_RLC_Config_v1430_PR;

/* LTE_RLC-Config-v1430 */
typedef struct LTE_RLC_Config_v1430 {
	LTE_RLC_Config_v1430_PR present;
	union LTE_RLC_Config_v1430_u {
		NULL_t	 release;
		struct LTE_RLC_Config_v1430__setup {
			LTE_PollByte_r14_t	 pollByte_r14;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RLC_Config_v1430_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RLC_Config_v1430;
extern asn_CHOICE_specifics_t asn_SPC_LTE_RLC_Config_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RLC_Config_v1430_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_RLC_Config_v1430_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RLC_Config_v1430_H_ */
#include <asn_internal.h>