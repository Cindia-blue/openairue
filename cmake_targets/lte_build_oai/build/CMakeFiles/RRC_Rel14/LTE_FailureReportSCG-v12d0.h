/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_FailureReportSCG_v12d0_H_
#define	_LTE_FailureReportSCG_v12d0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_MeasResultList2EUTRA_v9e0;

/* LTE_FailureReportSCG-v12d0 */
typedef struct LTE_FailureReportSCG_v12d0 {
	struct LTE_MeasResultList2EUTRA_v9e0	*measResultNeighCells_v12d0;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_FailureReportSCG_v12d0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_FailureReportSCG_v12d0;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_FailureReportSCG_v12d0_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_FailureReportSCG_v12d0_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MeasResultList2EUTRA-v9e0.h"

#endif	/* _LTE_FailureReportSCG_v12d0_H_ */
#include <asn_internal.h>