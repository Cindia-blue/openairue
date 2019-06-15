/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_ReestablishmentInfo_H_
#define	_LTE_ReestablishmentInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_PhysCellId.h"
#include "LTE_ShortMAC-I.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_AdditionalReestabInfoList;

/* LTE_ReestablishmentInfo */
typedef struct LTE_ReestablishmentInfo {
	LTE_PhysCellId_t	 sourcePhysCellId;
	LTE_ShortMAC_I_t	 targetCellShortMAC_I;
	struct LTE_AdditionalReestabInfoList	*additionalReestabInfoList;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_ReestablishmentInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_ReestablishmentInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_ReestablishmentInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_ReestablishmentInfo_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_AdditionalReestabInfoList.h"

#endif	/* _LTE_ReestablishmentInfo_H_ */
#include <asn_internal.h>
