/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/lixh/ue_folder/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_UE_associatedLogicalS1_ConnectionItem_H_
#define	_S1AP_UE_associatedLogicalS1_ConnectionItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_MME-UE-S1AP-ID.h"
#include "S1AP_ENB-UE-S1AP-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1AP_ProtocolExtensionContainer;

/* S1AP_UE-associatedLogicalS1-ConnectionItem */
typedef struct S1AP_UE_associatedLogicalS1_ConnectionItem {
	S1AP_MME_UE_S1AP_ID_t	*mME_UE_S1AP_ID;	/* OPTIONAL */
	S1AP_ENB_UE_S1AP_ID_t	*eNB_UE_S1AP_ID;	/* OPTIONAL */
	struct S1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_UE_associatedLogicalS1_ConnectionItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_UE_associatedLogicalS1_ConnectionItem;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_UE_associatedLogicalS1_ConnectionItem_H_ */
#include <asn_internal.h>
