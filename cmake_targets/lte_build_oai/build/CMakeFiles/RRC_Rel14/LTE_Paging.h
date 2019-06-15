/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_Paging_H_
#define	_LTE_Paging_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_Paging__systemInfoModification {
	LTE_Paging__systemInfoModification_true	= 0
} e_LTE_Paging__systemInfoModification;
typedef enum LTE_Paging__etws_Indication {
	LTE_Paging__etws_Indication_true	= 0
} e_LTE_Paging__etws_Indication;

/* Forward declarations */
struct LTE_PagingRecordList;
struct LTE_Paging_v890_IEs;

/* LTE_Paging */
typedef struct LTE_Paging {
	struct LTE_PagingRecordList	*pagingRecordList;	/* OPTIONAL */
	long	*systemInfoModification;	/* OPTIONAL */
	long	*etws_Indication;	/* OPTIONAL */
	struct LTE_Paging_v890_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_Paging_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_systemInfoModification_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_etws_Indication_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_Paging;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_Paging_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_Paging_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_PagingRecordList.h"
#include "LTE_Paging-v890-IEs.h"

#endif	/* _LTE_Paging_H_ */
#include <asn_internal.h>
