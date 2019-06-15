/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_AntennaInfoUL_r10_H_
#define	_LTE_AntennaInfoUL_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_AntennaInfoUL_r10__transmissionModeUL_r10 {
	LTE_AntennaInfoUL_r10__transmissionModeUL_r10_tm1	= 0,
	LTE_AntennaInfoUL_r10__transmissionModeUL_r10_tm2	= 1,
	LTE_AntennaInfoUL_r10__transmissionModeUL_r10_spare6	= 2,
	LTE_AntennaInfoUL_r10__transmissionModeUL_r10_spare5	= 3,
	LTE_AntennaInfoUL_r10__transmissionModeUL_r10_spare4	= 4,
	LTE_AntennaInfoUL_r10__transmissionModeUL_r10_spare3	= 5,
	LTE_AntennaInfoUL_r10__transmissionModeUL_r10_spare2	= 6,
	LTE_AntennaInfoUL_r10__transmissionModeUL_r10_spare1	= 7
} e_LTE_AntennaInfoUL_r10__transmissionModeUL_r10;
typedef enum LTE_AntennaInfoUL_r10__fourAntennaPortActivated_r10 {
	LTE_AntennaInfoUL_r10__fourAntennaPortActivated_r10_setup	= 0
} e_LTE_AntennaInfoUL_r10__fourAntennaPortActivated_r10;

/* LTE_AntennaInfoUL-r10 */
typedef struct LTE_AntennaInfoUL_r10 {
	long	*transmissionModeUL_r10;	/* OPTIONAL */
	long	*fourAntennaPortActivated_r10;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_AntennaInfoUL_r10_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_transmissionModeUL_r10_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_fourAntennaPortActivated_r10_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_AntennaInfoUL_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_AntennaInfoUL_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_AntennaInfoUL_r10_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_AntennaInfoUL_r10_H_ */
#include <asn_internal.h>
