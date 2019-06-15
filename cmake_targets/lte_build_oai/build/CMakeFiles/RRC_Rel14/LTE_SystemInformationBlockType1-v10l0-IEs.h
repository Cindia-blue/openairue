/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SystemInformationBlockType1_v10l0_IEs_H_
#define	_LTE_SystemInformationBlockType1_v10l0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_NS_PmaxList_v10l0;
struct LTE_MultiBandInfoList_v10l0;

/* LTE_SystemInformationBlockType1-v10l0-IEs */
typedef struct LTE_SystemInformationBlockType1_v10l0_IEs {
	struct LTE_NS_PmaxList_v10l0	*freqBandInfo_v10l0;	/* OPTIONAL */
	struct LTE_MultiBandInfoList_v10l0	*multiBandInfoList_v10l0;	/* OPTIONAL */
	struct LTE_SystemInformationBlockType1_v10l0_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformationBlockType1_v10l0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType1_v10l0_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType1_v10l0_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType1_v10l0_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_NS-PmaxList-v10l0.h"
#include "LTE_MultiBandInfoList-v10l0.h"

#endif	/* _LTE_SystemInformationBlockType1_v10l0_IEs_H_ */
#include <asn_internal.h>
