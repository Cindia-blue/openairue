/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_CarrierBandwidthEUTRA_H_
#define	_LTE_CarrierBandwidthEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_CarrierBandwidthEUTRA__dl_Bandwidth {
	LTE_CarrierBandwidthEUTRA__dl_Bandwidth_n6	= 0,
	LTE_CarrierBandwidthEUTRA__dl_Bandwidth_n15	= 1,
	LTE_CarrierBandwidthEUTRA__dl_Bandwidth_n25	= 2,
	LTE_CarrierBandwidthEUTRA__dl_Bandwidth_n50	= 3,
	LTE_CarrierBandwidthEUTRA__dl_Bandwidth_n75	= 4,
	LTE_CarrierBandwidthEUTRA__dl_Bandwidth_n100	= 5,
	LTE_CarrierBandwidthEUTRA__dl_Bandwidth_spare10	= 6,
	LTE_CarrierBandwidthEUTRA__dl_Bandwidth_spare9	= 7,
	LTE_CarrierBandwidthEUTRA__dl_Bandwidth_spare8	= 8,
	LTE_CarrierBandwidthEUTRA__dl_Bandwidth_spare7	= 9,
	LTE_CarrierBandwidthEUTRA__dl_Bandwidth_spare6	= 10,
	LTE_CarrierBandwidthEUTRA__dl_Bandwidth_spare5	= 11,
	LTE_CarrierBandwidthEUTRA__dl_Bandwidth_spare4	= 12,
	LTE_CarrierBandwidthEUTRA__dl_Bandwidth_spare3	= 13,
	LTE_CarrierBandwidthEUTRA__dl_Bandwidth_spare2	= 14,
	LTE_CarrierBandwidthEUTRA__dl_Bandwidth_spare1	= 15
} e_LTE_CarrierBandwidthEUTRA__dl_Bandwidth;
typedef enum LTE_CarrierBandwidthEUTRA__ul_Bandwidth {
	LTE_CarrierBandwidthEUTRA__ul_Bandwidth_n6	= 0,
	LTE_CarrierBandwidthEUTRA__ul_Bandwidth_n15	= 1,
	LTE_CarrierBandwidthEUTRA__ul_Bandwidth_n25	= 2,
	LTE_CarrierBandwidthEUTRA__ul_Bandwidth_n50	= 3,
	LTE_CarrierBandwidthEUTRA__ul_Bandwidth_n75	= 4,
	LTE_CarrierBandwidthEUTRA__ul_Bandwidth_n100	= 5,
	LTE_CarrierBandwidthEUTRA__ul_Bandwidth_spare10	= 6,
	LTE_CarrierBandwidthEUTRA__ul_Bandwidth_spare9	= 7,
	LTE_CarrierBandwidthEUTRA__ul_Bandwidth_spare8	= 8,
	LTE_CarrierBandwidthEUTRA__ul_Bandwidth_spare7	= 9,
	LTE_CarrierBandwidthEUTRA__ul_Bandwidth_spare6	= 10,
	LTE_CarrierBandwidthEUTRA__ul_Bandwidth_spare5	= 11,
	LTE_CarrierBandwidthEUTRA__ul_Bandwidth_spare4	= 12,
	LTE_CarrierBandwidthEUTRA__ul_Bandwidth_spare3	= 13,
	LTE_CarrierBandwidthEUTRA__ul_Bandwidth_spare2	= 14,
	LTE_CarrierBandwidthEUTRA__ul_Bandwidth_spare1	= 15
} e_LTE_CarrierBandwidthEUTRA__ul_Bandwidth;

/* LTE_CarrierBandwidthEUTRA */
typedef struct LTE_CarrierBandwidthEUTRA {
	long	 dl_Bandwidth;
	long	*ul_Bandwidth;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CarrierBandwidthEUTRA_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_dl_Bandwidth_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ul_Bandwidth_19;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CarrierBandwidthEUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CarrierBandwidthEUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CarrierBandwidthEUTRA_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CarrierBandwidthEUTRA_H_ */
#include <asn_internal.h>
