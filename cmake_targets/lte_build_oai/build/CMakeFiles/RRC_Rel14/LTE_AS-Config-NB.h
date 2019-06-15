/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-InterNodeDefinitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_AS_Config_NB_H_
#define	_LTE_AS_Config_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_RadioResourceConfigDedicated-NB-r13.h"
#include "LTE_SecurityAlgorithmConfig.h"
#include "LTE_C-RNTI.h"
#include "LTE_CarrierFreq-NB-r13.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_AS-Config-NB */
typedef struct LTE_AS_Config_NB {
	LTE_RadioResourceConfigDedicated_NB_r13_t	 sourceRadioResourceConfig_r13;
	LTE_SecurityAlgorithmConfig_t	 sourceSecurityAlgorithmConfig_r13;
	LTE_C_RNTI_t	 sourceUE_Identity_r13;
	LTE_CarrierFreq_NB_r13_t	 sourceDl_CarrierFreq_r13;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_AS_Config_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_AS_Config_NB;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_AS_Config_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_AS_Config_NB_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_AS_Config_NB_H_ */
#include <asn_internal.h>