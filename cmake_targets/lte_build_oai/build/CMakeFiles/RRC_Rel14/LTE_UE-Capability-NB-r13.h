/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_UE_Capability_NB_r13_H_
#define	_LTE_UE_Capability_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_AccessStratumRelease-NB-r13.h"
#include <NativeEnumerated.h>
#include "LTE_PhyLayerParameters-NB-r13.h"
#include "LTE_RF-Parameters-NB-r13.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_UE_Capability_NB_r13__ue_Category_NB_r13 {
	LTE_UE_Capability_NB_r13__ue_Category_NB_r13_nb1	= 0
} e_LTE_UE_Capability_NB_r13__ue_Category_NB_r13;
typedef enum LTE_UE_Capability_NB_r13__multipleDRB_r13 {
	LTE_UE_Capability_NB_r13__multipleDRB_r13_supported	= 0
} e_LTE_UE_Capability_NB_r13__multipleDRB_r13;

/* Forward declarations */
struct LTE_PDCP_Parameters_NB_r13;

/* LTE_UE-Capability-NB-r13 */
typedef struct LTE_UE_Capability_NB_r13 {
	LTE_AccessStratumRelease_NB_r13_t	 accessStratumRelease_r13;
	long	*ue_Category_NB_r13;	/* OPTIONAL */
	long	*multipleDRB_r13;	/* OPTIONAL */
	struct LTE_PDCP_Parameters_NB_r13	*pdcp_Parameters_r13;	/* OPTIONAL */
	LTE_PhyLayerParameters_NB_r13_t	 phyLayerParameters_r13;
	LTE_RF_Parameters_NB_r13_t	 rf_Parameters_r13;
	struct LTE_UE_Capability_NB_r13__dummy {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dummy;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UE_Capability_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ue_Category_NB_r13_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_multipleDRB_r13_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UE_Capability_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_Capability_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UE_Capability_NB_r13_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_PDCP-Parameters-NB-r13.h"

#endif	/* _LTE_UE_Capability_NB_r13_H_ */
#include <asn_internal.h>
