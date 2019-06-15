/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "/home/lixh/ue_folder/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_RNL_Header_H_
#define	_X2AP_RNL_Header_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_GlobalENB-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2AP_GlobalENB_ID;
struct X2AP_ProtocolExtensionContainer;

/* X2AP_RNL-Header */
typedef struct X2AP_RNL_Header {
	X2AP_GlobalENB_ID_t	 source_GlobalENB_ID;
	struct X2AP_GlobalENB_ID	*target_GlobalENB_ID;	/* OPTIONAL */
	struct X2AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_RNL_Header_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_RNL_Header;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_RNL_Header_H_ */
#include <asn_internal.h>
