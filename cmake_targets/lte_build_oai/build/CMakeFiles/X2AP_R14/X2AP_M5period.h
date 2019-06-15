/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/lixh/ue_folder/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_M5period_H_
#define	_X2AP_M5period_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_M5period {
	X2AP_M5period_ms1024	= 0,
	X2AP_M5period_ms2048	= 1,
	X2AP_M5period_ms5120	= 2,
	X2AP_M5period_ms10240	= 3,
	X2AP_M5period_min1	= 4
	/*
	 * Enumeration is extensible
	 */
} e_X2AP_M5period;

/* X2AP_M5period */
typedef long	 X2AP_M5period_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_X2AP_M5period_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_M5period;
extern const asn_INTEGER_specifics_t asn_SPC_X2AP_M5period_specs_1;
asn_struct_free_f X2AP_M5period_free;
asn_struct_print_f X2AP_M5period_print;
asn_constr_check_f X2AP_M5period_constraint;
ber_type_decoder_f X2AP_M5period_decode_ber;
der_type_encoder_f X2AP_M5period_encode_der;
xer_type_decoder_f X2AP_M5period_decode_xer;
xer_type_encoder_f X2AP_M5period_encode_xer;
per_type_decoder_f X2AP_M5period_decode_uper;
per_type_encoder_f X2AP_M5period_encode_uper;
per_type_decoder_f X2AP_M5period_decode_aper;
per_type_encoder_f X2AP_M5period_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_M5period_H_ */
#include <asn_internal.h>
