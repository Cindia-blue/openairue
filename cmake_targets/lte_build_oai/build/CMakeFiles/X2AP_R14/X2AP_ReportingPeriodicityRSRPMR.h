/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/lixh/ue_folder/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_ReportingPeriodicityRSRPMR_H_
#define	_X2AP_ReportingPeriodicityRSRPMR_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_ReportingPeriodicityRSRPMR {
	X2AP_ReportingPeriodicityRSRPMR_one_hundred_20_ms	= 0,
	X2AP_ReportingPeriodicityRSRPMR_two_hundred_40_ms	= 1,
	X2AP_ReportingPeriodicityRSRPMR_four_hundred_80_ms	= 2,
	X2AP_ReportingPeriodicityRSRPMR_six_hundred_40_ms	= 3
	/*
	 * Enumeration is extensible
	 */
} e_X2AP_ReportingPeriodicityRSRPMR;

/* X2AP_ReportingPeriodicityRSRPMR */
typedef long	 X2AP_ReportingPeriodicityRSRPMR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ReportingPeriodicityRSRPMR;
asn_struct_free_f X2AP_ReportingPeriodicityRSRPMR_free;
asn_struct_print_f X2AP_ReportingPeriodicityRSRPMR_print;
asn_constr_check_f X2AP_ReportingPeriodicityRSRPMR_constraint;
ber_type_decoder_f X2AP_ReportingPeriodicityRSRPMR_decode_ber;
der_type_encoder_f X2AP_ReportingPeriodicityRSRPMR_encode_der;
xer_type_decoder_f X2AP_ReportingPeriodicityRSRPMR_decode_xer;
xer_type_encoder_f X2AP_ReportingPeriodicityRSRPMR_encode_xer;
per_type_decoder_f X2AP_ReportingPeriodicityRSRPMR_decode_uper;
per_type_encoder_f X2AP_ReportingPeriodicityRSRPMR_encode_uper;
per_type_decoder_f X2AP_ReportingPeriodicityRSRPMR_decode_aper;
per_type_encoder_f X2AP_ReportingPeriodicityRSRPMR_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_ReportingPeriodicityRSRPMR_H_ */
#include <asn_internal.h>
