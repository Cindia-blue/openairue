/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_UEInformationResponse_r9_IEs_H_
#define	_LTE_UEInformationResponse_r9_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_NumberOfPreamblesSent-r11.h"
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_RLF_Report_r9;
struct LTE_UEInformationResponse_v930_IEs;

/* LTE_UEInformationResponse-r9-IEs */
typedef struct LTE_UEInformationResponse_r9_IEs {
	struct LTE_UEInformationResponse_r9_IEs__rach_Report_r9 {
		LTE_NumberOfPreamblesSent_r11_t	 numberOfPreamblesSent_r9;
		BOOLEAN_t	 contentionDetected_r9;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rach_Report_r9;
	struct LTE_RLF_Report_r9	*rlf_Report_r9;	/* OPTIONAL */
	struct LTE_UEInformationResponse_v930_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UEInformationResponse_r9_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UEInformationResponse_r9_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UEInformationResponse_r9_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UEInformationResponse_r9_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_RLF-Report-r9.h"
#include "LTE_UEInformationResponse-v930-IEs.h"

#endif	/* _LTE_UEInformationResponse_r9_IEs_H_ */
#include <asn_internal.h>
