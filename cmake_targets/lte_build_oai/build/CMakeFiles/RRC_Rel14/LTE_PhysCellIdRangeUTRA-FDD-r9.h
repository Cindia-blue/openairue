/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_PhysCellIdRangeUTRA_FDD_r9_H_
#define	_LTE_PhysCellIdRangeUTRA_FDD_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_PhysCellIdUTRA-FDD.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_PhysCellIdRangeUTRA-FDD-r9 */
typedef struct LTE_PhysCellIdRangeUTRA_FDD_r9 {
	LTE_PhysCellIdUTRA_FDD_t	 start_r9;
	long	*range_r9;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PhysCellIdRangeUTRA_FDD_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PhysCellIdRangeUTRA_FDD_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PhysCellIdRangeUTRA_FDD_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PhysCellIdRangeUTRA_FDD_r9_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PhysCellIdRangeUTRA_FDD_r9_H_ */
#include <asn_internal.h>
