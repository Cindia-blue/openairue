/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_PowerPrefIndicationConfig_r11_H_
#define	_LTE_PowerPrefIndicationConfig_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PowerPrefIndicationConfig_r11_PR {
	LTE_PowerPrefIndicationConfig_r11_PR_NOTHING,	/* No components present */
	LTE_PowerPrefIndicationConfig_r11_PR_release,
	LTE_PowerPrefIndicationConfig_r11_PR_setup
} LTE_PowerPrefIndicationConfig_r11_PR;
typedef enum LTE_PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11 {
	LTE_PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_s0	= 0,
	LTE_PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_s0dot5	= 1,
	LTE_PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_s1	= 2,
	LTE_PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_s2	= 3,
	LTE_PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_s5	= 4,
	LTE_PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_s10	= 5,
	LTE_PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_s20	= 6,
	LTE_PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_s30	= 7,
	LTE_PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_s60	= 8,
	LTE_PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_s90	= 9,
	LTE_PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_s120	= 10,
	LTE_PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_s300	= 11,
	LTE_PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_s600	= 12,
	LTE_PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_spare3	= 13,
	LTE_PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_spare2	= 14,
	LTE_PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11_spare1	= 15
} e_LTE_PowerPrefIndicationConfig_r11__setup__powerPrefIndicationTimer_r11;

/* LTE_PowerPrefIndicationConfig-r11 */
typedef struct LTE_PowerPrefIndicationConfig_r11 {
	LTE_PowerPrefIndicationConfig_r11_PR present;
	union LTE_PowerPrefIndicationConfig_r11_u {
		NULL_t	 release;
		struct LTE_PowerPrefIndicationConfig_r11__setup {
			long	 powerPrefIndicationTimer_r11;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PowerPrefIndicationConfig_r11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_powerPrefIndicationTimer_r11_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PowerPrefIndicationConfig_r11;
extern asn_CHOICE_specifics_t asn_SPC_LTE_PowerPrefIndicationConfig_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PowerPrefIndicationConfig_r11_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_PowerPrefIndicationConfig_r11_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PowerPrefIndicationConfig_r11_H_ */
#include <asn_internal.h>
