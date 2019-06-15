/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_DRX_Config_NB_r13_H_
#define	_LTE_DRX_Config_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_DRX_Config_NB_r13_PR {
	LTE_DRX_Config_NB_r13_PR_NOTHING,	/* No components present */
	LTE_DRX_Config_NB_r13_PR_release,
	LTE_DRX_Config_NB_r13_PR_setup
} LTE_DRX_Config_NB_r13_PR;
typedef enum LTE_DRX_Config_NB_r13__setup__onDurationTimer_r13 {
	LTE_DRX_Config_NB_r13__setup__onDurationTimer_r13_pp1	= 0,
	LTE_DRX_Config_NB_r13__setup__onDurationTimer_r13_pp2	= 1,
	LTE_DRX_Config_NB_r13__setup__onDurationTimer_r13_pp3	= 2,
	LTE_DRX_Config_NB_r13__setup__onDurationTimer_r13_pp4	= 3,
	LTE_DRX_Config_NB_r13__setup__onDurationTimer_r13_pp8	= 4,
	LTE_DRX_Config_NB_r13__setup__onDurationTimer_r13_pp16	= 5,
	LTE_DRX_Config_NB_r13__setup__onDurationTimer_r13_pp32	= 6,
	LTE_DRX_Config_NB_r13__setup__onDurationTimer_r13_spare	= 7
} e_LTE_DRX_Config_NB_r13__setup__onDurationTimer_r13;
typedef enum LTE_DRX_Config_NB_r13__setup__drx_InactivityTimer_r13 {
	LTE_DRX_Config_NB_r13__setup__drx_InactivityTimer_r13_pp0	= 0,
	LTE_DRX_Config_NB_r13__setup__drx_InactivityTimer_r13_pp1	= 1,
	LTE_DRX_Config_NB_r13__setup__drx_InactivityTimer_r13_pp2	= 2,
	LTE_DRX_Config_NB_r13__setup__drx_InactivityTimer_r13_pp3	= 3,
	LTE_DRX_Config_NB_r13__setup__drx_InactivityTimer_r13_pp4	= 4,
	LTE_DRX_Config_NB_r13__setup__drx_InactivityTimer_r13_pp8	= 5,
	LTE_DRX_Config_NB_r13__setup__drx_InactivityTimer_r13_pp16	= 6,
	LTE_DRX_Config_NB_r13__setup__drx_InactivityTimer_r13_pp32	= 7
} e_LTE_DRX_Config_NB_r13__setup__drx_InactivityTimer_r13;
typedef enum LTE_DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13 {
	LTE_DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_pp0	= 0,
	LTE_DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_pp1	= 1,
	LTE_DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_pp2	= 2,
	LTE_DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_pp4	= 3,
	LTE_DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_pp6	= 4,
	LTE_DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_pp8	= 5,
	LTE_DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_pp16	= 6,
	LTE_DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_pp24	= 7,
	LTE_DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_pp33	= 8,
	LTE_DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_spare7	= 9,
	LTE_DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_spare6	= 10,
	LTE_DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_spare5	= 11,
	LTE_DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_spare4	= 12,
	LTE_DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_spare3	= 13,
	LTE_DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_spare2	= 14,
	LTE_DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13_spare1	= 15
} e_LTE_DRX_Config_NB_r13__setup__drx_RetransmissionTimer_r13;
typedef enum LTE_DRX_Config_NB_r13__setup__drx_Cycle_r13 {
	LTE_DRX_Config_NB_r13__setup__drx_Cycle_r13_sf256	= 0,
	LTE_DRX_Config_NB_r13__setup__drx_Cycle_r13_sf512	= 1,
	LTE_DRX_Config_NB_r13__setup__drx_Cycle_r13_sf1024	= 2,
	LTE_DRX_Config_NB_r13__setup__drx_Cycle_r13_sf1536	= 3,
	LTE_DRX_Config_NB_r13__setup__drx_Cycle_r13_sf2048	= 4,
	LTE_DRX_Config_NB_r13__setup__drx_Cycle_r13_sf3072	= 5,
	LTE_DRX_Config_NB_r13__setup__drx_Cycle_r13_sf4096	= 6,
	LTE_DRX_Config_NB_r13__setup__drx_Cycle_r13_sf4608	= 7,
	LTE_DRX_Config_NB_r13__setup__drx_Cycle_r13_sf6144	= 8,
	LTE_DRX_Config_NB_r13__setup__drx_Cycle_r13_sf7680	= 9,
	LTE_DRX_Config_NB_r13__setup__drx_Cycle_r13_sf8192	= 10,
	LTE_DRX_Config_NB_r13__setup__drx_Cycle_r13_sf9216	= 11,
	LTE_DRX_Config_NB_r13__setup__drx_Cycle_r13_spare4	= 12,
	LTE_DRX_Config_NB_r13__setup__drx_Cycle_r13_spare3	= 13,
	LTE_DRX_Config_NB_r13__setup__drx_Cycle_r13_spare2	= 14,
	LTE_DRX_Config_NB_r13__setup__drx_Cycle_r13_spare1	= 15
} e_LTE_DRX_Config_NB_r13__setup__drx_Cycle_r13;
typedef enum LTE_DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13 {
	LTE_DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp0	= 0,
	LTE_DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp1	= 1,
	LTE_DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp2	= 2,
	LTE_DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp4	= 3,
	LTE_DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp6	= 4,
	LTE_DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp8	= 5,
	LTE_DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp16	= 6,
	LTE_DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp24	= 7,
	LTE_DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp33	= 8,
	LTE_DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp40	= 9,
	LTE_DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp64	= 10,
	LTE_DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp80	= 11,
	LTE_DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp96	= 12,
	LTE_DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp112	= 13,
	LTE_DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp128	= 14,
	LTE_DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp160	= 15,
	LTE_DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13_pp320	= 16
} e_LTE_DRX_Config_NB_r13__setup__drx_ULRetransmissionTimer_r13;

/* LTE_DRX-Config-NB-r13 */
typedef struct LTE_DRX_Config_NB_r13 {
	LTE_DRX_Config_NB_r13_PR present;
	union LTE_DRX_Config_NB_r13_u {
		NULL_t	 release;
		struct LTE_DRX_Config_NB_r13__setup {
			long	 onDurationTimer_r13;
			long	 drx_InactivityTimer_r13;
			long	 drx_RetransmissionTimer_r13;
			long	 drx_Cycle_r13;
			long	 drx_StartOffset_r13;
			long	 drx_ULRetransmissionTimer_r13;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_DRX_Config_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_onDurationTimer_r13_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_drx_InactivityTimer_r13_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_drx_RetransmissionTimer_r13_22;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_drx_Cycle_r13_39;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_drx_ULRetransmissionTimer_r13_57;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_DRX_Config_NB_r13;
extern asn_CHOICE_specifics_t asn_SPC_LTE_DRX_Config_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_DRX_Config_NB_r13_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_DRX_Config_NB_r13_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_DRX_Config_NB_r13_H_ */
#include <asn_internal.h>
