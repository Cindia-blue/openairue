/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RLC_Config_H_
#define	_LTE_RLC_Config_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_UL-AM-RLC.h"
#include "LTE_DL-AM-RLC.h"
#include <constr_SEQUENCE.h>
#include "LTE_UL-UM-RLC.h"
#include "LTE_DL-UM-RLC.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RLC_Config_PR {
	LTE_RLC_Config_PR_NOTHING,	/* No components present */
	LTE_RLC_Config_PR_am,
	LTE_RLC_Config_PR_um_Bi_Directional,
	LTE_RLC_Config_PR_um_Uni_Directional_UL,
	LTE_RLC_Config_PR_um_Uni_Directional_DL
	/* Extensions may appear below */
	
} LTE_RLC_Config_PR;

/* LTE_RLC-Config */
typedef struct LTE_RLC_Config {
	LTE_RLC_Config_PR present;
	union LTE_RLC_Config_u {
		struct LTE_RLC_Config__am {
			LTE_UL_AM_RLC_t	 ul_AM_RLC;
			LTE_DL_AM_RLC_t	 dl_AM_RLC;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} am;
		struct LTE_RLC_Config__um_Bi_Directional {
			LTE_UL_UM_RLC_t	 ul_UM_RLC;
			LTE_DL_UM_RLC_t	 dl_UM_RLC;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} um_Bi_Directional;
		struct LTE_RLC_Config__um_Uni_Directional_UL {
			LTE_UL_UM_RLC_t	 ul_UM_RLC;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} um_Uni_Directional_UL;
		struct LTE_RLC_Config__um_Uni_Directional_DL {
			LTE_DL_UM_RLC_t	 dl_UM_RLC;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} um_Uni_Directional_DL;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RLC_Config_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RLC_Config;
extern asn_CHOICE_specifics_t asn_SPC_LTE_RLC_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RLC_Config_1[4];
extern asn_per_constraints_t asn_PER_type_LTE_RLC_Config_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RLC_Config_H_ */
#include <asn_internal.h>
