/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_TPC_Index_H_
#define	_LTE_TPC_Index_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_TPC_Index_PR {
	LTE_TPC_Index_PR_NOTHING,	/* No components present */
	LTE_TPC_Index_PR_indexOfFormat3,
	LTE_TPC_Index_PR_indexOfFormat3A
} LTE_TPC_Index_PR;

/* LTE_TPC-Index */
typedef struct LTE_TPC_Index {
	LTE_TPC_Index_PR present;
	union LTE_TPC_Index_u {
		long	 indexOfFormat3;
		long	 indexOfFormat3A;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_TPC_Index_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_TPC_Index;
extern asn_CHOICE_specifics_t asn_SPC_LTE_TPC_Index_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_TPC_Index_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_TPC_Index_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_TPC_Index_H_ */
#include <asn_internal.h>
