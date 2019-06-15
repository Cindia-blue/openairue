/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SoundingRS_UL_ConfigDedicatedAperiodic_r10_H_
#define	_LTE_SoundingRS_UL_ConfigDedicatedAperiodic_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include "LTE_SRS-ConfigAp-r10.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SoundingRS_UL_ConfigDedicatedAperiodic_r10_PR {
	LTE_SoundingRS_UL_ConfigDedicatedAperiodic_r10_PR_NOTHING,	/* No components present */
	LTE_SoundingRS_UL_ConfigDedicatedAperiodic_r10_PR_release,
	LTE_SoundingRS_UL_ConfigDedicatedAperiodic_r10_PR_setup
} LTE_SoundingRS_UL_ConfigDedicatedAperiodic_r10_PR;
typedef enum LTE_SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup__srs_ActivateAp_r10_PR {
	LTE_SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup__srs_ActivateAp_r10_PR_NOTHING,	/* No components present */
	LTE_SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup__srs_ActivateAp_r10_PR_release,
	LTE_SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup__srs_ActivateAp_r10_PR_setup
} LTE_SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup__srs_ActivateAp_r10_PR;

/* Forward declarations */
struct LTE_SRS_ConfigAp_r10;

/* LTE_SoundingRS-UL-ConfigDedicatedAperiodic-r10 */
typedef struct LTE_SoundingRS_UL_ConfigDedicatedAperiodic_r10 {
	LTE_SoundingRS_UL_ConfigDedicatedAperiodic_r10_PR present;
	union LTE_SoundingRS_UL_ConfigDedicatedAperiodic_r10_u {
		NULL_t	 release;
		struct LTE_SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup {
			long	 srs_ConfigIndexAp_r10;
			struct LTE_SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup__srs_ConfigApDCI_Format4_r10 {
				A_SEQUENCE_OF(struct LTE_SRS_ConfigAp_r10) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *srs_ConfigApDCI_Format4_r10;
			struct LTE_SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup__srs_ActivateAp_r10 {
				LTE_SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup__srs_ActivateAp_r10_PR present;
				union LTE_SoundingRS_UL_ConfigDedicatedAperiodic_r10__LTE_setup__LTE_srs_ActivateAp_r10_u {
					NULL_t	 release;
					struct LTE_SoundingRS_UL_ConfigDedicatedAperiodic_r10__setup__srs_ActivateAp_r10__setup {
						LTE_SRS_ConfigAp_r10_t	 srs_ConfigApDCI_Format0_r10;
						LTE_SRS_ConfigAp_r10_t	 srs_ConfigApDCI_Format1a2b2c_r10;
						/*
						 * This type is extensible,
						 * possible extensions are below.
						 */
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} setup;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *srs_ActivateAp_r10;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SoundingRS_UL_ConfigDedicatedAperiodic_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SoundingRS_UL_ConfigDedicatedAperiodic_r10;
extern asn_CHOICE_specifics_t asn_SPC_LTE_SoundingRS_UL_ConfigDedicatedAperiodic_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SoundingRS_UL_ConfigDedicatedAperiodic_r10_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_SoundingRS_UL_ConfigDedicatedAperiodic_r10_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SRS-ConfigAp-r10.h"

#endif	/* _LTE_SoundingRS_UL_ConfigDedicatedAperiodic_r10_H_ */
#include <asn_internal.h>
