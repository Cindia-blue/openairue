/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_PLMN_Identity_H_
#define	_LTE_PLMN_Identity_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_MNC.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_MCC;

/* LTE_PLMN-Identity */
typedef struct LTE_PLMN_Identity {
	struct LTE_MCC	*mcc;	/* OPTIONAL */
	LTE_MNC_t	 mnc;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PLMN_Identity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PLMN_Identity;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PLMN_Identity_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PLMN_Identity_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MCC.h"

#endif	/* _LTE_PLMN_Identity_H_ */
#include <asn_internal.h>
