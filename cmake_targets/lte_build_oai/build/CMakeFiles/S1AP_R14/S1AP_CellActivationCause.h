/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "/home/lixh/ue_folder/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_CellActivationCause_H_
#define	_S1AP_CellActivationCause_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_CellActivationCause {
	S1AP_CellActivationCause_application_container_syntax_error	= 0,
	S1AP_CellActivationCause_inconsistent_reporting_cell_identifier	= 1,
	S1AP_CellActivationCause_unspecified	= 2
	/*
	 * Enumeration is extensible
	 */
} e_S1AP_CellActivationCause;

/* S1AP_CellActivationCause */
typedef long	 S1AP_CellActivationCause_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_S1AP_CellActivationCause_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_CellActivationCause;
extern const asn_INTEGER_specifics_t asn_SPC_S1AP_CellActivationCause_specs_1;
asn_struct_free_f S1AP_CellActivationCause_free;
asn_struct_print_f S1AP_CellActivationCause_print;
asn_constr_check_f S1AP_CellActivationCause_constraint;
ber_type_decoder_f S1AP_CellActivationCause_decode_ber;
der_type_encoder_f S1AP_CellActivationCause_encode_der;
xer_type_decoder_f S1AP_CellActivationCause_decode_xer;
xer_type_encoder_f S1AP_CellActivationCause_encode_xer;
per_type_decoder_f S1AP_CellActivationCause_decode_uper;
per_type_encoder_f S1AP_CellActivationCause_encode_uper;
per_type_decoder_f S1AP_CellActivationCause_decode_aper;
per_type_encoder_f S1AP_CellActivationCause_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_CellActivationCause_H_ */
#include <asn_internal.h>
