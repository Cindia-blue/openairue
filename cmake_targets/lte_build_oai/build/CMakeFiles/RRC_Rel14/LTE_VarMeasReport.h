/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_VarMeasReport_H_
#define	_LTE_VarMeasReport_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_MeasId.h"
#include "LTE_MeasId-v1250.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_CellsTriggeredList;
struct LTE_CSI_RS_TriggeredList_r12;
struct LTE_Tx_ResourcePoolMeasList_r14;

/* LTE_VarMeasReport */
typedef struct LTE_VarMeasReport {
	LTE_MeasId_t	 measId;
	LTE_MeasId_v1250_t	*measId_v1250;	/* OPTIONAL */
	struct LTE_CellsTriggeredList	*cellsTriggeredList;	/* OPTIONAL */
	struct LTE_CSI_RS_TriggeredList_r12	*csi_RS_TriggeredList_r12;	/* OPTIONAL */
	struct LTE_Tx_ResourcePoolMeasList_r14	*poolsTriggeredList_r14;	/* OPTIONAL */
	long	 numberOfReportsSent;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_VarMeasReport_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_VarMeasReport;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_VarMeasReport_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_VarMeasReport_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_CellsTriggeredList.h"
#include "LTE_CSI-RS-TriggeredList-r12.h"
#include "LTE_Tx-ResourcePoolMeasList-r14.h"

#endif	/* _LTE_VarMeasReport_H_ */
#include <asn_internal.h>
