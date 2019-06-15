/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_LogMeasInfo_r10_H_
#define	_LTE_LogMeasInfo_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "LTE_CellGlobalIdEUTRA.h"
#include "LTE_RSRP-Range.h"
#include "LTE_RSRQ-Range.h"
#include <constr_SEQUENCE.h>
#include "LTE_RSRQ-Range-v1250.h"
#include <NativeEnumerated.h>
#include "LTE_RSRP-Range-v1360.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_LogMeasInfo_r10__ext3__inDeviceCoexDetected_r13 {
	LTE_LogMeasInfo_r10__ext3__inDeviceCoexDetected_r13_true	= 0
} e_LTE_LogMeasInfo_r10__ext3__inDeviceCoexDetected_r13;

/* Forward declarations */
struct LTE_LocationInfo_r10;
struct LTE_MeasResultList2EUTRA_r9;
struct LTE_MeasResultList2UTRA_r9;
struct LTE_MeasResultList2GERAN_r10;
struct LTE_MeasResultList2CDMA2000_r9;
struct LTE_MeasResultList2EUTRA_v9e0;
struct LTE_MeasResultListMBSFN_r12;
struct LTE_RSRQ_Type_r12;
struct LTE_MeasResultList2EUTRA_v1250;

/* LTE_LogMeasInfo-r10 */
typedef struct LTE_LogMeasInfo_r10 {
	struct LTE_LocationInfo_r10	*locationInfo_r10;	/* OPTIONAL */
	long	 relativeTimeStamp_r10;
	LTE_CellGlobalIdEUTRA_t	 servCellIdentity_r10;
	struct LTE_LogMeasInfo_r10__measResultServCell_r10 {
		LTE_RSRP_Range_t	 rsrpResult_r10;
		LTE_RSRQ_Range_t	 rsrqResult_r10;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResultServCell_r10;
	struct LTE_LogMeasInfo_r10__measResultNeighCells_r10 {
		struct LTE_MeasResultList2EUTRA_r9	*measResultListEUTRA_r10;	/* OPTIONAL */
		struct LTE_MeasResultList2UTRA_r9	*measResultListUTRA_r10;	/* OPTIONAL */
		struct LTE_MeasResultList2GERAN_r10	*measResultListGERAN_r10;	/* OPTIONAL */
		struct LTE_MeasResultList2CDMA2000_r9	*measResultListCDMA2000_r10;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultNeighCells_r10;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_LogMeasInfo_r10__ext1 {
		struct LTE_MeasResultList2EUTRA_v9e0	*measResultListEUTRA_v1090;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_LogMeasInfo_r10__ext2 {
		struct LTE_MeasResultListMBSFN_r12	*measResultListMBSFN_r12;	/* OPTIONAL */
		LTE_RSRQ_Range_v1250_t	*measResultServCell_v1250;	/* OPTIONAL */
		struct LTE_RSRQ_Type_r12	*servCellRSRQ_Type_r12;	/* OPTIONAL */
		struct LTE_MeasResultList2EUTRA_v1250	*measResultListEUTRA_v1250;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct LTE_LogMeasInfo_r10__ext3 {
		long	*inDeviceCoexDetected_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct LTE_LogMeasInfo_r10__ext4 {
		LTE_RSRP_Range_v1360_t	*measResultServCell_v1360;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_LogMeasInfo_r10_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_inDeviceCoexDetected_r13_22;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_LogMeasInfo_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_LogMeasInfo_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_LogMeasInfo_r10_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_LocationInfo-r10.h"
#include "LTE_MeasResultList2EUTRA-r9.h"
#include "LTE_MeasResultList2UTRA-r9.h"
#include "LTE_MeasResultList2GERAN-r10.h"
#include "LTE_MeasResultList2CDMA2000-r9.h"
#include "LTE_MeasResultList2EUTRA-v9e0.h"
#include "LTE_MeasResultListMBSFN-r12.h"
#include "LTE_RSRQ-Type-r12.h"
#include "LTE_MeasResultList2EUTRA-v1250.h"

#endif	/* _LTE_LogMeasInfo_r10_H_ */
#include <asn_internal.h>