/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_BandCombinationParameters_v1270_H_
#define	_LTE_BandCombinationParameters_v1270_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_BandParameters_v1270;

/* LTE_BandCombinationParameters-v1270 */
typedef struct LTE_BandCombinationParameters_v1270 {
	struct LTE_BandCombinationParameters_v1270__bandParameterList_v1270 {
		A_SEQUENCE_OF(struct LTE_BandParameters_v1270) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *bandParameterList_v1270;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_BandCombinationParameters_v1270_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_BandCombinationParameters_v1270;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_BandCombinationParameters_v1270_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_BandCombinationParameters_v1270_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_BandParameters-v1270.h"

#endif	/* _LTE_BandCombinationParameters_v1270_H_ */
#include <asn_internal.h>
