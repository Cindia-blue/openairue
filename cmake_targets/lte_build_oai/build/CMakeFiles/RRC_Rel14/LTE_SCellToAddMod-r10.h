/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SCellToAddMod_r10_H_
#define	_LTE_SCellToAddMod_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_SCellIndex-r10.h"
#include "LTE_PhysCellId.h"
#include "LTE_ARFCN-ValueEUTRA.h"
#include <constr_SEQUENCE.h>
#include "LTE_ARFCN-ValueEUTRA-v9e0.h"
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_RadioResourceConfigCommonSCell_r10;
struct LTE_RadioResourceConfigDedicatedSCell_r10;
struct LTE_AntennaInfoDedicated_v10i0;

/* LTE_SCellToAddMod-r10 */
typedef struct LTE_SCellToAddMod_r10 {
	LTE_SCellIndex_r10_t	 sCellIndex_r10;
	struct LTE_SCellToAddMod_r10__cellIdentification_r10 {
		LTE_PhysCellId_t	 physCellId_r10;
		LTE_ARFCN_ValueEUTRA_t	 dl_CarrierFreq_r10;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cellIdentification_r10;
	struct LTE_RadioResourceConfigCommonSCell_r10	*radioResourceConfigCommonSCell_r10;	/* OPTIONAL */
	struct LTE_RadioResourceConfigDedicatedSCell_r10	*radioResourceConfigDedicatedSCell_r10;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_SCellToAddMod_r10__ext1 {
		LTE_ARFCN_ValueEUTRA_v9e0_t	*dl_CarrierFreq_v1090;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_SCellToAddMod_r10__ext2 {
		struct LTE_AntennaInfoDedicated_v10i0	*antennaInfoDedicatedSCell_v10i0;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct LTE_SCellToAddMod_r10__ext3 {
		long	*srs_SwitchFromServCellIndex_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SCellToAddMod_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SCellToAddMod_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SCellToAddMod_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SCellToAddMod_r10_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_RadioResourceConfigCommonSCell-r10.h"
#include "LTE_RadioResourceConfigDedicatedSCell-r10.h"
#include "LTE_AntennaInfoDedicated-v10i0.h"

#endif	/* _LTE_SCellToAddMod_r10_H_ */
#include <asn_internal.h>
