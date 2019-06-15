/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SCG_Configuration_r12_H_
#define	_LTE_SCG_Configuration_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SCG_Configuration_r12_PR {
	LTE_SCG_Configuration_r12_PR_NOTHING,	/* No components present */
	LTE_SCG_Configuration_r12_PR_release,
	LTE_SCG_Configuration_r12_PR_setup
} LTE_SCG_Configuration_r12_PR;

/* Forward declarations */
struct LTE_SCG_ConfigPartSCG_r12;
struct LTE_PowerCoordinationInfo_r12;

/* LTE_SCG-Configuration-r12 */
typedef struct LTE_SCG_Configuration_r12 {
	LTE_SCG_Configuration_r12_PR present;
	union LTE_SCG_Configuration_r12_u {
		NULL_t	 release;
		struct LTE_SCG_Configuration_r12__setup {
			struct LTE_SCG_Configuration_r12__setup__scg_ConfigPartMCG_r12 {
				long	*scg_Counter_r12;	/* OPTIONAL */
				struct LTE_PowerCoordinationInfo_r12	*powerCoordinationInfo_r12;	/* OPTIONAL */
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *scg_ConfigPartMCG_r12;
			struct LTE_SCG_ConfigPartSCG_r12	*scg_ConfigPartSCG_r12;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SCG_Configuration_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SCG_Configuration_r12;
extern asn_CHOICE_specifics_t asn_SPC_LTE_SCG_Configuration_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SCG_Configuration_r12_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_SCG_Configuration_r12_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SCG-ConfigPartSCG-r12.h"
#include "LTE_PowerCoordinationInfo-r12.h"

#endif	/* _LTE_SCG_Configuration_r12_H_ */
#include <asn_internal.h>