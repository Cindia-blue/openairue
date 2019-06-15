/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_PUSCH_ConfigDedicated_v1250_H_
#define	_LTE_PUSCH_ConfigDedicated_v1250_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PUSCH_ConfigDedicated_v1250__uciOnPUSCH_PR {
	LTE_PUSCH_ConfigDedicated_v1250__uciOnPUSCH_PR_NOTHING,	/* No components present */
	LTE_PUSCH_ConfigDedicated_v1250__uciOnPUSCH_PR_release,
	LTE_PUSCH_ConfigDedicated_v1250__uciOnPUSCH_PR_setup
} LTE_PUSCH_ConfigDedicated_v1250__uciOnPUSCH_PR;

/* LTE_PUSCH-ConfigDedicated-v1250 */
typedef struct LTE_PUSCH_ConfigDedicated_v1250 {
	struct LTE_PUSCH_ConfigDedicated_v1250__uciOnPUSCH {
		LTE_PUSCH_ConfigDedicated_v1250__uciOnPUSCH_PR present;
		union LTE_PUSCH_ConfigDedicated_v1250__LTE_uciOnPUSCH_u {
			NULL_t	 release;
			struct LTE_PUSCH_ConfigDedicated_v1250__uciOnPUSCH__setup {
				long	 betaOffset_ACK_Index_SubframeSet2_r12;
				long	 betaOffset_RI_Index_SubframeSet2_r12;
				long	 betaOffset_CQI_Index_SubframeSet2_r12;
				struct LTE_PUSCH_ConfigDedicated_v1250__uciOnPUSCH__setup__betaOffsetMC_r12 {
					long	 betaOffset_ACK_Index_MC_SubframeSet2_r12;
					long	 betaOffset_RI_Index_MC_SubframeSet2_r12;
					long	 betaOffset_CQI_Index_MC_SubframeSet2_r12;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *betaOffsetMC_r12;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} uciOnPUSCH;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PUSCH_ConfigDedicated_v1250_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PUSCH_ConfigDedicated_v1250;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PUSCH_ConfigDedicated_v1250_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PUSCH_ConfigDedicated_v1250_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PUSCH_ConfigDedicated_v1250_H_ */
#include <asn_internal.h>
