/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_DRX-Config-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_onDurationTimer_v1310_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_drx_RetransmissionTimer_v1310_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_drx_ULRetransmissionTimer_r13_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  16 }	/* (0..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_onDurationTimer_v1310_value2enum_2[] = {
	{ 0,	6,	"psf300" },
	{ 1,	6,	"psf400" },
	{ 2,	6,	"psf500" },
	{ 3,	6,	"psf600" },
	{ 4,	6,	"psf800" },
	{ 5,	7,	"psf1000" },
	{ 6,	7,	"psf1200" },
	{ 7,	7,	"psf1600" }
};
static const unsigned int asn_MAP_LTE_onDurationTimer_v1310_enum2value_2[] = {
	5,	/* psf1000(5) */
	6,	/* psf1200(6) */
	7,	/* psf1600(7) */
	0,	/* psf300(0) */
	1,	/* psf400(1) */
	2,	/* psf500(2) */
	3,	/* psf600(3) */
	4	/* psf800(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_onDurationTimer_v1310_specs_2 = {
	asn_MAP_LTE_onDurationTimer_v1310_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_onDurationTimer_v1310_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_onDurationTimer_v1310_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_onDurationTimer_v1310_2 = {
	"onDurationTimer-v1310",
	"onDurationTimer-v1310",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_onDurationTimer_v1310_tags_2,
	sizeof(asn_DEF_LTE_onDurationTimer_v1310_tags_2)
		/sizeof(asn_DEF_LTE_onDurationTimer_v1310_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_onDurationTimer_v1310_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_onDurationTimer_v1310_tags_2)
		/sizeof(asn_DEF_LTE_onDurationTimer_v1310_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_onDurationTimer_v1310_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_onDurationTimer_v1310_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_drx_RetransmissionTimer_v1310_value2enum_11[] = {
	{ 0,	5,	"psf40" },
	{ 1,	5,	"psf64" },
	{ 2,	5,	"psf80" },
	{ 3,	5,	"psf96" },
	{ 4,	6,	"psf112" },
	{ 5,	6,	"psf128" },
	{ 6,	6,	"psf160" },
	{ 7,	6,	"psf320" }
};
static const unsigned int asn_MAP_LTE_drx_RetransmissionTimer_v1310_enum2value_11[] = {
	4,	/* psf112(4) */
	5,	/* psf128(5) */
	6,	/* psf160(6) */
	7,	/* psf320(7) */
	0,	/* psf40(0) */
	1,	/* psf64(1) */
	2,	/* psf80(2) */
	3	/* psf96(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_drx_RetransmissionTimer_v1310_specs_11 = {
	asn_MAP_LTE_drx_RetransmissionTimer_v1310_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_drx_RetransmissionTimer_v1310_enum2value_11,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_drx_RetransmissionTimer_v1310_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_drx_RetransmissionTimer_v1310_11 = {
	"drx-RetransmissionTimer-v1310",
	"drx-RetransmissionTimer-v1310",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_drx_RetransmissionTimer_v1310_tags_11,
	sizeof(asn_DEF_LTE_drx_RetransmissionTimer_v1310_tags_11)
		/sizeof(asn_DEF_LTE_drx_RetransmissionTimer_v1310_tags_11[0]) - 1, /* 1 */
	asn_DEF_LTE_drx_RetransmissionTimer_v1310_tags_11,	/* Same as above */
	sizeof(asn_DEF_LTE_drx_RetransmissionTimer_v1310_tags_11)
		/sizeof(asn_DEF_LTE_drx_RetransmissionTimer_v1310_tags_11[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_drx_RetransmissionTimer_v1310_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_drx_RetransmissionTimer_v1310_specs_11	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_drx_ULRetransmissionTimer_r13_value2enum_20[] = {
	{ 0,	4,	"psf0" },
	{ 1,	4,	"psf1" },
	{ 2,	4,	"psf2" },
	{ 3,	4,	"psf4" },
	{ 4,	4,	"psf6" },
	{ 5,	4,	"psf8" },
	{ 6,	5,	"psf16" },
	{ 7,	5,	"psf24" },
	{ 8,	5,	"psf33" },
	{ 9,	5,	"psf40" },
	{ 10,	5,	"psf64" },
	{ 11,	5,	"psf80" },
	{ 12,	5,	"psf96" },
	{ 13,	6,	"psf112" },
	{ 14,	6,	"psf128" },
	{ 15,	6,	"psf160" },
	{ 16,	6,	"psf320" }
};
static const unsigned int asn_MAP_LTE_drx_ULRetransmissionTimer_r13_enum2value_20[] = {
	0,	/* psf0(0) */
	1,	/* psf1(1) */
	13,	/* psf112(13) */
	14,	/* psf128(14) */
	6,	/* psf16(6) */
	15,	/* psf160(15) */
	2,	/* psf2(2) */
	7,	/* psf24(7) */
	16,	/* psf320(16) */
	8,	/* psf33(8) */
	3,	/* psf4(3) */
	9,	/* psf40(9) */
	4,	/* psf6(4) */
	10,	/* psf64(10) */
	5,	/* psf8(5) */
	11,	/* psf80(11) */
	12	/* psf96(12) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_drx_ULRetransmissionTimer_r13_specs_20 = {
	asn_MAP_LTE_drx_ULRetransmissionTimer_r13_value2enum_20,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_drx_ULRetransmissionTimer_r13_enum2value_20,	/* N => "tag"; sorted by N */
	17,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_drx_ULRetransmissionTimer_r13_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_drx_ULRetransmissionTimer_r13_20 = {
	"drx-ULRetransmissionTimer-r13",
	"drx-ULRetransmissionTimer-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_drx_ULRetransmissionTimer_r13_tags_20,
	sizeof(asn_DEF_LTE_drx_ULRetransmissionTimer_r13_tags_20)
		/sizeof(asn_DEF_LTE_drx_ULRetransmissionTimer_r13_tags_20[0]) - 1, /* 1 */
	asn_DEF_LTE_drx_ULRetransmissionTimer_r13_tags_20,	/* Same as above */
	sizeof(asn_DEF_LTE_drx_ULRetransmissionTimer_r13_tags_20)
		/sizeof(asn_DEF_LTE_drx_ULRetransmissionTimer_r13_tags_20[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_drx_ULRetransmissionTimer_r13_constr_20, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_drx_ULRetransmissionTimer_r13_specs_20	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_DRX_Config_r13_1[] = {
	{ ATF_POINTER, 3, offsetof(struct LTE_DRX_Config_r13, onDurationTimer_v1310),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_onDurationTimer_v1310_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"onDurationTimer-v1310"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_DRX_Config_r13, drx_RetransmissionTimer_v1310),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_drx_RetransmissionTimer_v1310_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drx-RetransmissionTimer-v1310"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_DRX_Config_r13, drx_ULRetransmissionTimer_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_drx_ULRetransmissionTimer_r13_20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drx-ULRetransmissionTimer-r13"
		},
};
static const int asn_MAP_LTE_DRX_Config_r13_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_DRX_Config_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_DRX_Config_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* onDurationTimer-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* drx-RetransmissionTimer-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* drx-ULRetransmissionTimer-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_DRX_Config_r13_specs_1 = {
	sizeof(struct LTE_DRX_Config_r13),
	offsetof(struct LTE_DRX_Config_r13, _asn_ctx),
	asn_MAP_LTE_DRX_Config_r13_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_DRX_Config_r13_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_DRX_Config_r13 = {
	"DRX-Config-r13",
	"DRX-Config-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_DRX_Config_r13_tags_1,
	sizeof(asn_DEF_LTE_DRX_Config_r13_tags_1)
		/sizeof(asn_DEF_LTE_DRX_Config_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_DRX_Config_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_DRX_Config_r13_tags_1)
		/sizeof(asn_DEF_LTE_DRX_Config_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_DRX_Config_r13_1,
	3,	/* Elements count */
	&asn_SPC_LTE_DRX_Config_r13_specs_1	/* Additional specs */
};

