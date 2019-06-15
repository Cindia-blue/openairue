/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SPS_Config_H_
#define	_LTE_SPS_Config_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_C-RNTI.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_SPS_ConfigDL;
struct LTE_SPS_ConfigUL;

/* LTE_SPS-Config */
typedef struct LTE_SPS_Config {
	LTE_C_RNTI_t	*semiPersistSchedC_RNTI;	/* OPTIONAL */
	struct LTE_SPS_ConfigDL	*sps_ConfigDL;	/* OPTIONAL */
	struct LTE_SPS_ConfigUL	*sps_ConfigUL;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SPS_Config_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SPS_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SPS_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SPS_Config_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SPS-ConfigDL.h"
#include "LTE_SPS-ConfigUL.h"

#endif	/* _LTE_SPS_Config_H_ */
#include <asn_internal.h>
