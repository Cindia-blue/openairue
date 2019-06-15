/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_NZP_ResourceConfig_r13_H_
#define	_LTE_NZP_ResourceConfig_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_ResourceConfig-r13.h"
#include "LTE_NZP-TransmissionComb-r14.h"
#include "LTE_NZP-FrequencyDensity-r14.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_NZP-ResourceConfig-r13 */
typedef struct LTE_NZP_ResourceConfig_r13 {
	LTE_ResourceConfig_r13_t	 resourceConfig_r13;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_NZP_ResourceConfig_r13__ext1 {
		LTE_NZP_TransmissionComb_r14_t	*transmissionComb_r14;	/* OPTIONAL */
		LTE_NZP_FrequencyDensity_r14_t	*frequencyDensity_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_NZP_ResourceConfig_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_NZP_ResourceConfig_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_NZP_ResourceConfig_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_NZP_ResourceConfig_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_NZP_ResourceConfig_r13_H_ */
#include <asn_internal.h>
