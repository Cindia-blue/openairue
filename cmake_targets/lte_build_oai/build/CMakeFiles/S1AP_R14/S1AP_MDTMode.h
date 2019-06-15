/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/lixh/ue_folder/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_MDTMode_H_
#define	_S1AP_MDTMode_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_ImmediateMDT.h"
#include "S1AP_LoggedMDT.h"
#include "S1AP_MDTMode-Extension.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_MDTMode_PR {
	S1AP_MDTMode_PR_NOTHING,	/* No components present */
	S1AP_MDTMode_PR_immediateMDT,
	S1AP_MDTMode_PR_loggedMDT,
	/* Extensions may appear below */
	S1AP_MDTMode_PR_mDTMode_Extension
} S1AP_MDTMode_PR;

/* S1AP_MDTMode */
typedef struct S1AP_MDTMode {
	S1AP_MDTMode_PR present;
	union S1AP_MDTMode_u {
		S1AP_ImmediateMDT_t	 immediateMDT;
		S1AP_LoggedMDT_t	 loggedMDT;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		S1AP_MDTMode_Extension_t	 mDTMode_Extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_MDTMode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_MDTMode;
extern asn_CHOICE_specifics_t asn_SPC_S1AP_MDTMode_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_MDTMode_1[3];
extern asn_per_constraints_t asn_PER_type_S1AP_MDTMode_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_MDTMode_H_ */
#include <asn_internal.h>
