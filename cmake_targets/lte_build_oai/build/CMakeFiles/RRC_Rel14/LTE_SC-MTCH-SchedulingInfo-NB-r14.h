/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SC_MTCH_SchedulingInfo_NB_r14_H_
#define	_LTE_SC_MTCH_SchedulingInfo_NB_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SC_MTCH_SchedulingInfo_NB_r14__onDurationTimerSCPTM_r14 {
	LTE_SC_MTCH_SchedulingInfo_NB_r14__onDurationTimerSCPTM_r14_pp1	= 0,
	LTE_SC_MTCH_SchedulingInfo_NB_r14__onDurationTimerSCPTM_r14_pp2	= 1,
	LTE_SC_MTCH_SchedulingInfo_NB_r14__onDurationTimerSCPTM_r14_pp3	= 2,
	LTE_SC_MTCH_SchedulingInfo_NB_r14__onDurationTimerSCPTM_r14_pp4	= 3,
	LTE_SC_MTCH_SchedulingInfo_NB_r14__onDurationTimerSCPTM_r14_pp8	= 4,
	LTE_SC_MTCH_SchedulingInfo_NB_r14__onDurationTimerSCPTM_r14_pp16	= 5,
	LTE_SC_MTCH_SchedulingInfo_NB_r14__onDurationTimerSCPTM_r14_pp32	= 6,
	LTE_SC_MTCH_SchedulingInfo_NB_r14__onDurationTimerSCPTM_r14_spare	= 7
} e_LTE_SC_MTCH_SchedulingInfo_NB_r14__onDurationTimerSCPTM_r14;
typedef enum LTE_SC_MTCH_SchedulingInfo_NB_r14__drx_InactivityTimerSCPTM_r14 {
	LTE_SC_MTCH_SchedulingInfo_NB_r14__drx_InactivityTimerSCPTM_r14_pp0	= 0,
	LTE_SC_MTCH_SchedulingInfo_NB_r14__drx_InactivityTimerSCPTM_r14_pp1	= 1,
	LTE_SC_MTCH_SchedulingInfo_NB_r14__drx_InactivityTimerSCPTM_r14_pp2	= 2,
	LTE_SC_MTCH_SchedulingInfo_NB_r14__drx_InactivityTimerSCPTM_r14_pp3	= 3,
	LTE_SC_MTCH_SchedulingInfo_NB_r14__drx_InactivityTimerSCPTM_r14_pp4	= 4,
	LTE_SC_MTCH_SchedulingInfo_NB_r14__drx_InactivityTimerSCPTM_r14_pp8	= 5,
	LTE_SC_MTCH_SchedulingInfo_NB_r14__drx_InactivityTimerSCPTM_r14_pp16	= 6,
	LTE_SC_MTCH_SchedulingInfo_NB_r14__drx_InactivityTimerSCPTM_r14_pp32	= 7
} e_LTE_SC_MTCH_SchedulingInfo_NB_r14__drx_InactivityTimerSCPTM_r14;
typedef enum LTE_SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14_PR {
	LTE_SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_NOTHING,	/* No components present */
	LTE_SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf10,
	LTE_SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf20,
	LTE_SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf32,
	LTE_SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf40,
	LTE_SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf64,
	LTE_SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf80,
	LTE_SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf128,
	LTE_SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf160,
	LTE_SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf256,
	LTE_SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf320,
	LTE_SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf512,
	LTE_SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf640,
	LTE_SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf1024,
	LTE_SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf2048,
	LTE_SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf4096,
	LTE_SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14_PR_sf8192
} LTE_SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14_PR;

/* LTE_SC-MTCH-SchedulingInfo-NB-r14 */
typedef struct LTE_SC_MTCH_SchedulingInfo_NB_r14 {
	long	 onDurationTimerSCPTM_r14;
	long	 drx_InactivityTimerSCPTM_r14;
	struct LTE_SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14 {
		LTE_SC_MTCH_SchedulingInfo_NB_r14__schedulingPeriodStartOffsetSCPTM_r14_PR present;
		union LTE_SC_MTCH_SchedulingInfo_NB_r14__LTE_schedulingPeriodStartOffsetSCPTM_r14_u {
			long	 sf10;
			long	 sf20;
			long	 sf32;
			long	 sf40;
			long	 sf64;
			long	 sf80;
			long	 sf128;
			long	 sf160;
			long	 sf256;
			long	 sf320;
			long	 sf512;
			long	 sf640;
			long	 sf1024;
			long	 sf2048;
			long	 sf4096;
			long	 sf8192;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} schedulingPeriodStartOffsetSCPTM_r14;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SC_MTCH_SchedulingInfo_NB_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_onDurationTimerSCPTM_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_drx_InactivityTimerSCPTM_r14_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SC_MTCH_SchedulingInfo_NB_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SC_MTCH_SchedulingInfo_NB_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SC_MTCH_SchedulingInfo_NB_r14_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SC_MTCH_SchedulingInfo_NB_r14_H_ */
#include <asn_internal.h>
