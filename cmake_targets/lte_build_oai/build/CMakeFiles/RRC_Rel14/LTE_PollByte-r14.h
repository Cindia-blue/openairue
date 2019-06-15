/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_PollByte_r14_H_
#define	_LTE_PollByte_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PollByte_r14 {
	LTE_PollByte_r14_kB1	= 0,
	LTE_PollByte_r14_kB2	= 1,
	LTE_PollByte_r14_kB5	= 2,
	LTE_PollByte_r14_kB8	= 3,
	LTE_PollByte_r14_kB10	= 4,
	LTE_PollByte_r14_kB15	= 5,
	LTE_PollByte_r14_kB3500	= 6,
	LTE_PollByte_r14_kB4000	= 7,
	LTE_PollByte_r14_kB4500	= 8,
	LTE_PollByte_r14_kB5000	= 9,
	LTE_PollByte_r14_kB5500	= 10,
	LTE_PollByte_r14_kB6000	= 11,
	LTE_PollByte_r14_kB6500	= 12,
	LTE_PollByte_r14_kB7000	= 13,
	LTE_PollByte_r14_kB7500	= 14,
	LTE_PollByte_r14_kB8000	= 15,
	LTE_PollByte_r14_kB9000	= 16,
	LTE_PollByte_r14_kB10000	= 17,
	LTE_PollByte_r14_kB11000	= 18,
	LTE_PollByte_r14_kB12000	= 19,
	LTE_PollByte_r14_kB13000	= 20,
	LTE_PollByte_r14_kB14000	= 21,
	LTE_PollByte_r14_kB15000	= 22,
	LTE_PollByte_r14_kB16000	= 23,
	LTE_PollByte_r14_kB17000	= 24,
	LTE_PollByte_r14_kB18000	= 25,
	LTE_PollByte_r14_kB19000	= 26,
	LTE_PollByte_r14_kB20000	= 27,
	LTE_PollByte_r14_kB25000	= 28,
	LTE_PollByte_r14_kB30000	= 29,
	LTE_PollByte_r14_kB35000	= 30,
	LTE_PollByte_r14_kB40000	= 31
} e_LTE_PollByte_r14;

/* LTE_PollByte-r14 */
typedef long	 LTE_PollByte_r14_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LTE_PollByte_r14_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LTE_PollByte_r14;
extern const asn_INTEGER_specifics_t asn_SPC_LTE_PollByte_r14_specs_1;
asn_struct_free_f LTE_PollByte_r14_free;
asn_struct_print_f LTE_PollByte_r14_print;
asn_constr_check_f LTE_PollByte_r14_constraint;
ber_type_decoder_f LTE_PollByte_r14_decode_ber;
der_type_encoder_f LTE_PollByte_r14_encode_der;
xer_type_decoder_f LTE_PollByte_r14_decode_xer;
xer_type_encoder_f LTE_PollByte_r14_encode_xer;
per_type_decoder_f LTE_PollByte_r14_decode_uper;
per_type_encoder_f LTE_PollByte_r14_encode_uper;
per_type_decoder_f LTE_PollByte_r14_decode_aper;
per_type_encoder_f LTE_PollByte_r14_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PollByte_r14_H_ */
#include <asn_internal.h>
