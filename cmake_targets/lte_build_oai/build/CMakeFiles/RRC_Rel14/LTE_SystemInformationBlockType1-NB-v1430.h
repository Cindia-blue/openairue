/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SystemInformationBlockType1_NB_v1430_H_
#define	_LTE_SystemInformationBlockType1_NB_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_CellSelectionInfo_NB_v1430;
struct LTE_SystemInformationBlockType1_NB_v1450;

/* LTE_SystemInformationBlockType1-NB-v1430 */
typedef struct LTE_SystemInformationBlockType1_NB_v1430 {
	struct LTE_CellSelectionInfo_NB_v1430	*cellSelectionInfo_v1430;	/* OPTIONAL */
	struct LTE_SystemInformationBlockType1_NB_v1450	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformationBlockType1_NB_v1430_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType1_NB_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType1_NB_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType1_NB_v1430_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_CellSelectionInfo-NB-v1430.h"
#include "LTE_SystemInformationBlockType1-NB-v1450.h"

#endif	/* _LTE_SystemInformationBlockType1_NB_v1430_H_ */
#include <asn_internal.h>
