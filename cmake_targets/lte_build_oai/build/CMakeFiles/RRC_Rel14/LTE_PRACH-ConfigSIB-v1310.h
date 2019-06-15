/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_PRACH_ConfigSIB_v1310_H_
#define	_LTE_PRACH_ConfigSIB_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_RSRP-ThresholdsPrachInfoList-r13.h"
#include <NativeInteger.h>
#include "LTE_PRACH-ParametersListCE-r13.h"
#include <NativeEnumerated.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PRACH_ConfigSIB_v1310__mpdcch_startSF_CSS_RA_r13_PR {
	LTE_PRACH_ConfigSIB_v1310__mpdcch_startSF_CSS_RA_r13_PR_NOTHING,	/* No components present */
	LTE_PRACH_ConfigSIB_v1310__mpdcch_startSF_CSS_RA_r13_PR_fdd_r13,
	LTE_PRACH_ConfigSIB_v1310__mpdcch_startSF_CSS_RA_r13_PR_tdd_r13
} LTE_PRACH_ConfigSIB_v1310__mpdcch_startSF_CSS_RA_r13_PR;
typedef enum LTE_PRACH_ConfigSIB_v1310__mpdcch_startSF_CSS_RA_r13__fdd_r13 {
	LTE_PRACH_ConfigSIB_v1310__mpdcch_startSF_CSS_RA_r13__fdd_r13_v1	= 0,
	LTE_PRACH_ConfigSIB_v1310__mpdcch_startSF_CSS_RA_r13__fdd_r13_v1dot5	= 1,
	LTE_PRACH_ConfigSIB_v1310__mpdcch_startSF_CSS_RA_r13__fdd_r13_v2	= 2,
	LTE_PRACH_ConfigSIB_v1310__mpdcch_startSF_CSS_RA_r13__fdd_r13_v2dot5	= 3,
	LTE_PRACH_ConfigSIB_v1310__mpdcch_startSF_CSS_RA_r13__fdd_r13_v4	= 4,
	LTE_PRACH_ConfigSIB_v1310__mpdcch_startSF_CSS_RA_r13__fdd_r13_v5	= 5,
	LTE_PRACH_ConfigSIB_v1310__mpdcch_startSF_CSS_RA_r13__fdd_r13_v8	= 6,
	LTE_PRACH_ConfigSIB_v1310__mpdcch_startSF_CSS_RA_r13__fdd_r13_v10	= 7
} e_LTE_PRACH_ConfigSIB_v1310__mpdcch_startSF_CSS_RA_r13__fdd_r13;
typedef enum LTE_PRACH_ConfigSIB_v1310__mpdcch_startSF_CSS_RA_r13__tdd_r13 {
	LTE_PRACH_ConfigSIB_v1310__mpdcch_startSF_CSS_RA_r13__tdd_r13_v1	= 0,
	LTE_PRACH_ConfigSIB_v1310__mpdcch_startSF_CSS_RA_r13__tdd_r13_v2	= 1,
	LTE_PRACH_ConfigSIB_v1310__mpdcch_startSF_CSS_RA_r13__tdd_r13_v4	= 2,
	LTE_PRACH_ConfigSIB_v1310__mpdcch_startSF_CSS_RA_r13__tdd_r13_v5	= 3,
	LTE_PRACH_ConfigSIB_v1310__mpdcch_startSF_CSS_RA_r13__tdd_r13_v8	= 4,
	LTE_PRACH_ConfigSIB_v1310__mpdcch_startSF_CSS_RA_r13__tdd_r13_v10	= 5,
	LTE_PRACH_ConfigSIB_v1310__mpdcch_startSF_CSS_RA_r13__tdd_r13_v20	= 6,
	LTE_PRACH_ConfigSIB_v1310__mpdcch_startSF_CSS_RA_r13__tdd_r13_spare	= 7
} e_LTE_PRACH_ConfigSIB_v1310__mpdcch_startSF_CSS_RA_r13__tdd_r13;

/* LTE_PRACH-ConfigSIB-v1310 */
typedef struct LTE_PRACH_ConfigSIB_v1310 {
	LTE_RSRP_ThresholdsPrachInfoList_r13_t	 rsrp_ThresholdsPrachInfoList_r13;
	struct LTE_PRACH_ConfigSIB_v1310__mpdcch_startSF_CSS_RA_r13 {
		LTE_PRACH_ConfigSIB_v1310__mpdcch_startSF_CSS_RA_r13_PR present;
		union LTE_PRACH_ConfigSIB_v1310__LTE_mpdcch_startSF_CSS_RA_r13_u {
			long	 fdd_r13;
			long	 tdd_r13;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *mpdcch_startSF_CSS_RA_r13;
	long	*prach_HoppingOffset_r13;	/* OPTIONAL */
	LTE_PRACH_ParametersListCE_r13_t	 prach_ParametersListCE_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PRACH_ConfigSIB_v1310_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_fdd_r13_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_tdd_r13_13;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PRACH_ConfigSIB_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PRACH_ConfigSIB_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PRACH_ConfigSIB_v1310_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PRACH_ConfigSIB_v1310_H_ */
#include <asn_internal.h>
