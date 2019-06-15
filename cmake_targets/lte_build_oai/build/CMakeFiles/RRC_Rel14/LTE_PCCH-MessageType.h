/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_PCCH_MessageType_H_
#define	_LTE_PCCH_MessageType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_Paging.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PCCH_MessageType_PR {
	LTE_PCCH_MessageType_PR_NOTHING,	/* No components present */
	LTE_PCCH_MessageType_PR_c1,
	LTE_PCCH_MessageType_PR_messageClassExtension
} LTE_PCCH_MessageType_PR;
typedef enum LTE_PCCH_MessageType__c1_PR {
	LTE_PCCH_MessageType__c1_PR_NOTHING,	/* No components present */
	LTE_PCCH_MessageType__c1_PR_paging
} LTE_PCCH_MessageType__c1_PR;

/* LTE_PCCH-MessageType */
typedef struct LTE_PCCH_MessageType {
	LTE_PCCH_MessageType_PR present;
	union LTE_PCCH_MessageType_u {
		struct LTE_PCCH_MessageType__c1 {
			LTE_PCCH_MessageType__c1_PR present;
			union LTE_PCCH_MessageType__LTE_c1_u {
				LTE_Paging_t	 paging;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} c1;
		struct LTE_PCCH_MessageType__messageClassExtension {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} messageClassExtension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PCCH_MessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PCCH_MessageType;
extern asn_CHOICE_specifics_t asn_SPC_LTE_PCCH_MessageType_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PCCH_MessageType_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_PCCH_MessageType_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PCCH_MessageType_H_ */
#include <asn_internal.h>
