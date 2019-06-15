/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/lixh/ue_folder/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_ResumeID_H_
#define	_X2AP_ResumeID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_ResumeID_PR {
	X2AP_ResumeID_PR_NOTHING,	/* No components present */
	X2AP_ResumeID_PR_non_truncated,
	X2AP_ResumeID_PR_truncated
	/* Extensions may appear below */
	
} X2AP_ResumeID_PR;

/* X2AP_ResumeID */
typedef struct X2AP_ResumeID {
	X2AP_ResumeID_PR present;
	union X2AP_ResumeID_u {
		BIT_STRING_t	 non_truncated;
		BIT_STRING_t	 truncated;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ResumeID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ResumeID;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_ResumeID_H_ */
#include <asn_internal.h>
