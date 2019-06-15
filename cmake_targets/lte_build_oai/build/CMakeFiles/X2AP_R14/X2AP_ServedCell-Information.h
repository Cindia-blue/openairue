/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/lixh/ue_folder/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_ServedCell_Information_H_
#define	_X2AP_ServedCell_Information_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_PCI.h"
#include "X2AP_ECGI.h"
#include "X2AP_TAC.h"
#include "X2AP_BroadcastPLMNs-Item.h"
#include "X2AP_EUTRA-Mode-Info.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2AP_ProtocolExtensionContainer;

/* X2AP_ServedCell-Information */
typedef struct X2AP_ServedCell_Information {
	X2AP_PCI_t	 pCI;
	X2AP_ECGI_t	 cellId;
	X2AP_TAC_t	 tAC;
	X2AP_BroadcastPLMNs_Item_t	 broadcastPLMNs;
	X2AP_EUTRA_Mode_Info_t	 eUTRA_Mode_Info;
	struct X2AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ServedCell_Information_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ServedCell_Information;
extern asn_SEQUENCE_specifics_t asn_SPC_X2AP_ServedCell_Information_specs_1;
extern asn_TYPE_member_t asn_MBR_X2AP_ServedCell_Information_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_ServedCell_Information_H_ */
#include <asn_internal.h>
