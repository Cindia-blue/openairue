/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_DC_Parameters_r12_H_
#define	_LTE_DC_Parameters_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_DC_Parameters_r12__drb_TypeSplit_r12 {
	LTE_DC_Parameters_r12__drb_TypeSplit_r12_supported	= 0
} e_LTE_DC_Parameters_r12__drb_TypeSplit_r12;
typedef enum LTE_DC_Parameters_r12__drb_TypeSCG_r12 {
	LTE_DC_Parameters_r12__drb_TypeSCG_r12_supported	= 0
} e_LTE_DC_Parameters_r12__drb_TypeSCG_r12;

/* LTE_DC-Parameters-r12 */
typedef struct LTE_DC_Parameters_r12 {
	long	*drb_TypeSplit_r12;	/* OPTIONAL */
	long	*drb_TypeSCG_r12;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_DC_Parameters_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_drb_TypeSplit_r12_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_drb_TypeSCG_r12_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_DC_Parameters_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_DC_Parameters_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_DC_Parameters_r12_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_DC_Parameters_r12_H_ */
#include <asn_internal.h>
