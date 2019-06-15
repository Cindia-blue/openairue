/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_UL_CCCH_MessageType_H_
#define	_LTE_UL_CCCH_MessageType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_RRCConnectionReestablishmentRequest.h"
#include "LTE_RRCConnectionRequest.h"
#include <constr_CHOICE.h>
#include "LTE_RRCConnectionResumeRequest-r13.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_UL_CCCH_MessageType_PR {
	LTE_UL_CCCH_MessageType_PR_NOTHING,	/* No components present */
	LTE_UL_CCCH_MessageType_PR_c1,
	LTE_UL_CCCH_MessageType_PR_messageClassExtension
} LTE_UL_CCCH_MessageType_PR;
typedef enum LTE_UL_CCCH_MessageType__c1_PR {
	LTE_UL_CCCH_MessageType__c1_PR_NOTHING,	/* No components present */
	LTE_UL_CCCH_MessageType__c1_PR_rrcConnectionReestablishmentRequest,
	LTE_UL_CCCH_MessageType__c1_PR_rrcConnectionRequest
} LTE_UL_CCCH_MessageType__c1_PR;
typedef enum LTE_UL_CCCH_MessageType__messageClassExtension_PR {
	LTE_UL_CCCH_MessageType__messageClassExtension_PR_NOTHING,	/* No components present */
	LTE_UL_CCCH_MessageType__messageClassExtension_PR_c2,
	LTE_UL_CCCH_MessageType__messageClassExtension_PR_messageClassExtensionFuture_r13
} LTE_UL_CCCH_MessageType__messageClassExtension_PR;
typedef enum LTE_UL_CCCH_MessageType__messageClassExtension__c2_PR {
	LTE_UL_CCCH_MessageType__messageClassExtension__c2_PR_NOTHING,	/* No components present */
	LTE_UL_CCCH_MessageType__messageClassExtension__c2_PR_rrcConnectionResumeRequest_r13
} LTE_UL_CCCH_MessageType__messageClassExtension__c2_PR;

/* LTE_UL-CCCH-MessageType */
typedef struct LTE_UL_CCCH_MessageType {
	LTE_UL_CCCH_MessageType_PR present;
	union LTE_UL_CCCH_MessageType_u {
		struct LTE_UL_CCCH_MessageType__c1 {
			LTE_UL_CCCH_MessageType__c1_PR present;
			union LTE_UL_CCCH_MessageType__LTE_c1_u {
				LTE_RRCConnectionReestablishmentRequest_t	 rrcConnectionReestablishmentRequest;
				LTE_RRCConnectionRequest_t	 rrcConnectionRequest;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} c1;
		struct LTE_UL_CCCH_MessageType__messageClassExtension {
			LTE_UL_CCCH_MessageType__messageClassExtension_PR present;
			union LTE_UL_CCCH_MessageType__LTE_messageClassExtension_u {
				struct LTE_UL_CCCH_MessageType__messageClassExtension__c2 {
					LTE_UL_CCCH_MessageType__messageClassExtension__c2_PR present;
					union LTE_UL_CCCH_MessageType__LTE_messageClassExtension__LTE_c2_u {
						LTE_RRCConnectionResumeRequest_r13_t	 rrcConnectionResumeRequest_r13;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} c2;
				struct LTE_UL_CCCH_MessageType__messageClassExtension__messageClassExtensionFuture_r13 {
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} messageClassExtensionFuture_r13;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} messageClassExtension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UL_CCCH_MessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UL_CCCH_MessageType;
extern asn_CHOICE_specifics_t asn_SPC_LTE_UL_CCCH_MessageType_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UL_CCCH_MessageType_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_UL_CCCH_MessageType_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_UL_CCCH_MessageType_H_ */
#include <asn_internal.h>
