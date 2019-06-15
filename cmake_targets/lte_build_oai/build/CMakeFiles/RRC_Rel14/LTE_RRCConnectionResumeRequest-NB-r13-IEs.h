/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RRCConnectionResumeRequest_NB_r13_IEs_H_
#define	_LTE_RRCConnectionResumeRequest_NB_r13_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_ResumeIdentity-r13.h"
#include "LTE_ShortMAC-I.h"
#include "LTE_EstablishmentCause-NB-r13.h"
#include <BOOLEAN.h>
#include "LTE_CQI-NPDCCH-NB-r14.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_RRCConnectionResumeRequest-NB-r13-IEs */
typedef struct LTE_RRCConnectionResumeRequest_NB_r13_IEs {
	LTE_ResumeIdentity_r13_t	 resumeID_r13;
	LTE_ShortMAC_I_t	 shortResumeMAC_I_r13;
	LTE_EstablishmentCause_NB_r13_t	 resumeCause_r13;
	BOOLEAN_t	 earlyContentionResolution_r14;
	LTE_CQI_NPDCCH_NB_r14_t	 cqi_NPDCCH_r14;
	BIT_STRING_t	 spare;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RRCConnectionResumeRequest_NB_r13_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionResumeRequest_NB_r13_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionResumeRequest_NB_r13_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RRCConnectionResumeRequest_NB_r13_IEs_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RRCConnectionResumeRequest_NB_r13_IEs_H_ */
#include <asn_internal.h>
