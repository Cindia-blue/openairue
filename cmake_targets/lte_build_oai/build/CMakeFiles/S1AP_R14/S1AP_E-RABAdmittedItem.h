/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "/home/lixh/ue_folder/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_E_RABAdmittedItem_H_
#define	_S1AP_E_RABAdmittedItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_E-RAB-ID.h"
#include "S1AP_TransportLayerAddress.h"
#include "S1AP_GTP-TEID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1AP_ProtocolExtensionContainer;

/* S1AP_E-RABAdmittedItem */
typedef struct S1AP_E_RABAdmittedItem {
	S1AP_E_RAB_ID_t	 e_RAB_ID;
	S1AP_TransportLayerAddress_t	 transportLayerAddress;
	S1AP_GTP_TEID_t	 gTP_TEID;
	S1AP_TransportLayerAddress_t	*dL_transportLayerAddress;	/* OPTIONAL */
	S1AP_GTP_TEID_t	*dL_gTP_TEID;	/* OPTIONAL */
	S1AP_TransportLayerAddress_t	*uL_TransportLayerAddress;	/* OPTIONAL */
	S1AP_GTP_TEID_t	*uL_GTP_TEID;	/* OPTIONAL */
	struct S1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_E_RABAdmittedItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_E_RABAdmittedItem;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_E_RABAdmittedItem_H_ */
#include <asn_internal.h>
