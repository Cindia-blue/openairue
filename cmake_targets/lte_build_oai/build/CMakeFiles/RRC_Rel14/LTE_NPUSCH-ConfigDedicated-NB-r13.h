/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_NPUSCH_ConfigDedicated_NB_r13_H_
#define	_LTE_NPUSCH_ConfigDedicated_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_ACK-NACK-NumRepetitions-NB-r13.h"
#include <BOOLEAN.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_NPUSCH_ConfigDedicated_NB_r13__groupHoppingDisabled_r13 {
	LTE_NPUSCH_ConfigDedicated_NB_r13__groupHoppingDisabled_r13_true	= 0
} e_LTE_NPUSCH_ConfigDedicated_NB_r13__groupHoppingDisabled_r13;

/* LTE_NPUSCH-ConfigDedicated-NB-r13 */
typedef struct LTE_NPUSCH_ConfigDedicated_NB_r13 {
	LTE_ACK_NACK_NumRepetitions_NB_r13_t	*ack_NACK_NumRepetitions_r13;	/* OPTIONAL */
	BOOLEAN_t	*npusch_AllSymbols_r13;	/* OPTIONAL */
	long	*groupHoppingDisabled_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_NPUSCH_ConfigDedicated_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_groupHoppingDisabled_r13_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_NPUSCH_ConfigDedicated_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_NPUSCH_ConfigDedicated_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_NPUSCH_ConfigDedicated_NB_r13_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_NPUSCH_ConfigDedicated_NB_r13_H_ */
#include <asn_internal.h>
