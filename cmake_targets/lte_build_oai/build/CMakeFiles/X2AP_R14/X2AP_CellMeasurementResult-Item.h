/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "/home/lixh/ue_folder/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_CellMeasurementResult_Item_H_
#define	_X2AP_CellMeasurementResult_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_ECGI.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2AP_HWLoadIndicator;
struct X2AP_S1TNLLoadIndicator;
struct X2AP_RadioResourceStatus;
struct X2AP_ProtocolExtensionContainer;

/* X2AP_CellMeasurementResult-Item */
typedef struct X2AP_CellMeasurementResult_Item {
	X2AP_ECGI_t	 cell_ID;
	struct X2AP_HWLoadIndicator	*hWLoadIndicator;	/* OPTIONAL */
	struct X2AP_S1TNLLoadIndicator	*s1TNLLoadIndicator;	/* OPTIONAL */
	struct X2AP_RadioResourceStatus	*radioResourceStatus;	/* OPTIONAL */
	struct X2AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_CellMeasurementResult_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_CellMeasurementResult_Item;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_CellMeasurementResult_Item_H_ */
#include <asn_internal.h>
