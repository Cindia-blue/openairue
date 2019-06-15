/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_ReportInterval.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_LTE_ReportInterval_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_ReportInterval_value2enum_1[] = {
	{ 0,	5,	"ms120" },
	{ 1,	5,	"ms240" },
	{ 2,	5,	"ms480" },
	{ 3,	5,	"ms640" },
	{ 4,	6,	"ms1024" },
	{ 5,	6,	"ms2048" },
	{ 6,	6,	"ms5120" },
	{ 7,	7,	"ms10240" },
	{ 8,	4,	"min1" },
	{ 9,	4,	"min6" },
	{ 10,	5,	"min12" },
	{ 11,	5,	"min30" },
	{ 12,	5,	"min60" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_LTE_ReportInterval_enum2value_1[] = {
	8,	/* min1(8) */
	10,	/* min12(10) */
	11,	/* min30(11) */
	9,	/* min6(9) */
	12,	/* min60(12) */
	4,	/* ms1024(4) */
	7,	/* ms10240(7) */
	0,	/* ms120(0) */
	5,	/* ms2048(5) */
	1,	/* ms240(1) */
	2,	/* ms480(2) */
	6,	/* ms5120(6) */
	3,	/* ms640(3) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13	/* spare3(13) */
};
const asn_INTEGER_specifics_t asn_SPC_LTE_ReportInterval_specs_1 = {
	asn_MAP_LTE_ReportInterval_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_ReportInterval_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_ReportInterval_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LTE_ReportInterval = {
	"ReportInterval",
	"ReportInterval",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_ReportInterval_tags_1,
	sizeof(asn_DEF_LTE_ReportInterval_tags_1)
		/sizeof(asn_DEF_LTE_ReportInterval_tags_1[0]), /* 1 */
	asn_DEF_LTE_ReportInterval_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_ReportInterval_tags_1)
		/sizeof(asn_DEF_LTE_ReportInterval_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_LTE_ReportInterval_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_ReportInterval_specs_1	/* Additional specs */
};

