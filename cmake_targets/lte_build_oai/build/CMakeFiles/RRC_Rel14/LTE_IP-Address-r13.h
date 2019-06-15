/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_IP_Address_r13_H_
#define	_LTE_IP_Address_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_IP_Address_r13_PR {
	LTE_IP_Address_r13_PR_NOTHING,	/* No components present */
	LTE_IP_Address_r13_PR_ipv4_r13,
	LTE_IP_Address_r13_PR_ipv6_r13
} LTE_IP_Address_r13_PR;

/* LTE_IP-Address-r13 */
typedef struct LTE_IP_Address_r13 {
	LTE_IP_Address_r13_PR present;
	union LTE_IP_Address_r13_u {
		BIT_STRING_t	 ipv4_r13;
		BIT_STRING_t	 ipv6_r13;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_IP_Address_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_IP_Address_r13;
extern asn_CHOICE_specifics_t asn_SPC_LTE_IP_Address_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_IP_Address_r13_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_IP_Address_r13_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_IP_Address_r13_H_ */
#include <asn_internal.h>
