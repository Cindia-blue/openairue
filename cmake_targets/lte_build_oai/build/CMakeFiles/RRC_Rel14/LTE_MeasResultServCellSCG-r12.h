/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_MeasResultServCellSCG_r12_H_
#define	_LTE_MeasResultServCellSCG_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_ServCellIndex-r10.h"
#include "LTE_RSRP-Range.h"
#include "LTE_RSRQ-Range.h"
#include <constr_SEQUENCE.h>
#include "LTE_ServCellIndex-r13.h"
#include "LTE_RS-SINR-Range-r13.h"

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_MeasResultServCellSCG-r12 */
typedef struct LTE_MeasResultServCellSCG_r12 {
	LTE_ServCellIndex_r10_t	 servCellId_r12;
	struct LTE_MeasResultServCellSCG_r12__measResultSCell_r12 {
		LTE_RSRP_Range_t	 rsrpResultSCell_r12;
		LTE_RSRQ_Range_t	 rsrqResultSCell_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResultSCell_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_MeasResultServCellSCG_r12__ext1 {
		LTE_ServCellIndex_r13_t	*servCellId_r13;	/* OPTIONAL */
		struct LTE_MeasResultServCellSCG_r12__ext1__measResultSCell_v1310 {
			LTE_RS_SINR_Range_r13_t	 rs_sinr_ResultSCell_r13;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *measResultSCell_v1310;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MeasResultServCellSCG_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MeasResultServCellSCG_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MeasResultServCellSCG_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MeasResultServCellSCG_r12_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_MeasResultServCellSCG_r12_H_ */
#include <asn_internal.h>