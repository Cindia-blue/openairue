/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SCellToAddModListSCG_r12_H_
#define	_LTE_SCellToAddModListSCG_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_Cell_ToAddMod_r12;

/* LTE_SCellToAddModListSCG-r12 */
typedef struct LTE_SCellToAddModListSCG_r12 {
	A_SEQUENCE_OF(struct LTE_Cell_ToAddMod_r12) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SCellToAddModListSCG_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SCellToAddModListSCG_r12;
extern asn_SET_OF_specifics_t asn_SPC_LTE_SCellToAddModListSCG_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SCellToAddModListSCG_r12_1[1];
extern asn_per_constraints_t asn_PER_type_LTE_SCellToAddModListSCG_r12_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_Cell-ToAddMod-r12.h"

#endif	/* _LTE_SCellToAddModListSCG_r12_H_ */
#include <asn_internal.h>
