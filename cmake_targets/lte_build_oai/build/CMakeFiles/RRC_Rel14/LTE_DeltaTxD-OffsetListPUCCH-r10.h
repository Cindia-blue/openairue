/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_DeltaTxD_OffsetListPUCCH_r10_H_
#define	_LTE_DeltaTxD_OffsetListPUCCH_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format1_r10 {
	LTE_DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format1_r10_dB0	= 0,
	LTE_DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format1_r10_dB_2	= 1
} e_LTE_DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format1_r10;
typedef enum LTE_DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format1a1b_r10 {
	LTE_DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format1a1b_r10_dB0	= 0,
	LTE_DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format1a1b_r10_dB_2	= 1
} e_LTE_DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format1a1b_r10;
typedef enum LTE_DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format22a2b_r10 {
	LTE_DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format22a2b_r10_dB0	= 0,
	LTE_DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format22a2b_r10_dB_2	= 1
} e_LTE_DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format22a2b_r10;
typedef enum LTE_DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format3_r10 {
	LTE_DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format3_r10_dB0	= 0,
	LTE_DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format3_r10_dB_2	= 1
} e_LTE_DeltaTxD_OffsetListPUCCH_r10__deltaTxD_OffsetPUCCH_Format3_r10;

/* LTE_DeltaTxD-OffsetListPUCCH-r10 */
typedef struct LTE_DeltaTxD_OffsetListPUCCH_r10 {
	long	 deltaTxD_OffsetPUCCH_Format1_r10;
	long	 deltaTxD_OffsetPUCCH_Format1a1b_r10;
	long	 deltaTxD_OffsetPUCCH_Format22a2b_r10;
	long	 deltaTxD_OffsetPUCCH_Format3_r10;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_DeltaTxD_OffsetListPUCCH_r10_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_deltaTxD_OffsetPUCCH_Format1_r10_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_deltaTxD_OffsetPUCCH_Format1a1b_r10_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_deltaTxD_OffsetPUCCH_Format22a2b_r10_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_deltaTxD_OffsetPUCCH_Format3_r10_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_DeltaTxD_OffsetListPUCCH_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_DeltaTxD_OffsetListPUCCH_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_DeltaTxD_OffsetListPUCCH_r10_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_DeltaTxD_OffsetListPUCCH_r10_H_ */
#include <asn_internal.h>
