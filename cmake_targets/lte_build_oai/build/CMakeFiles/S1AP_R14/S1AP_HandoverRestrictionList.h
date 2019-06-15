/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/lixh/ue_folder/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_HandoverRestrictionList_H_
#define	_S1AP_HandoverRestrictionList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_PLMNidentity.h"
#include "S1AP_ForbiddenInterRATs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1AP_EPLMNs;
struct S1AP_ForbiddenTAs;
struct S1AP_ForbiddenLAs;
struct S1AP_ProtocolExtensionContainer;

/* S1AP_HandoverRestrictionList */
typedef struct S1AP_HandoverRestrictionList {
	S1AP_PLMNidentity_t	 servingPLMN;
	struct S1AP_EPLMNs	*equivalentPLMNs;	/* OPTIONAL */
	struct S1AP_ForbiddenTAs	*forbiddenTAs;	/* OPTIONAL */
	struct S1AP_ForbiddenLAs	*forbiddenLAs;	/* OPTIONAL */
	S1AP_ForbiddenInterRATs_t	*forbiddenInterRATs;	/* OPTIONAL */
	struct S1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_HandoverRestrictionList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_HandoverRestrictionList;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_HandoverRestrictionList_H_ */
#include <asn_internal.h>
