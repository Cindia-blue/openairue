/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RSRP_ThresholdsPrachInfoList_r13_H_
#define	_LTE_RSRP_ThresholdsPrachInfoList_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_RSRP-Range.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_RSRP-ThresholdsPrachInfoList-r13 */
typedef struct LTE_RSRP_ThresholdsPrachInfoList_r13 {
	A_SEQUENCE_OF(LTE_RSRP_Range_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RSRP_ThresholdsPrachInfoList_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RSRP_ThresholdsPrachInfoList_r13;
extern asn_SET_OF_specifics_t asn_SPC_LTE_RSRP_ThresholdsPrachInfoList_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RSRP_ThresholdsPrachInfoList_r13_1[1];
extern asn_per_constraints_t asn_PER_type_LTE_RSRP_ThresholdsPrachInfoList_r13_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RSRP_ThresholdsPrachInfoList_r13_H_ */
#include <asn_internal.h>
