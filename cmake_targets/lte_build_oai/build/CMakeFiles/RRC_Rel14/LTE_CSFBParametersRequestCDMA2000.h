/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_CSFBParametersRequestCDMA2000_H_
#define	_LTE_CSFBParametersRequestCDMA2000_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_CSFBParametersRequestCDMA2000-r8-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_CSFBParametersRequestCDMA2000__criticalExtensions_PR {
	LTE_CSFBParametersRequestCDMA2000__criticalExtensions_PR_NOTHING,	/* No components present */
	LTE_CSFBParametersRequestCDMA2000__criticalExtensions_PR_csfbParametersRequestCDMA2000_r8,
	LTE_CSFBParametersRequestCDMA2000__criticalExtensions_PR_criticalExtensionsFuture
} LTE_CSFBParametersRequestCDMA2000__criticalExtensions_PR;

/* LTE_CSFBParametersRequestCDMA2000 */
typedef struct LTE_CSFBParametersRequestCDMA2000 {
	struct LTE_CSFBParametersRequestCDMA2000__criticalExtensions {
		LTE_CSFBParametersRequestCDMA2000__criticalExtensions_PR present;
		union LTE_CSFBParametersRequestCDMA2000__LTE_criticalExtensions_u {
			LTE_CSFBParametersRequestCDMA2000_r8_IEs_t	 csfbParametersRequestCDMA2000_r8;
			struct LTE_CSFBParametersRequestCDMA2000__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CSFBParametersRequestCDMA2000_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CSFBParametersRequestCDMA2000;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CSFBParametersRequestCDMA2000_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CSFBParametersRequestCDMA2000_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CSFBParametersRequestCDMA2000_H_ */
#include <asn_internal.h>
