/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_IRAT-ParametersUTRA-v9c0.h"

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
static asn_per_constraints_t asn_PER_type_LTE_voiceOverPS_HS_UTRA_FDD_r9_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_voiceOverPS_HS_UTRA_TDD128_r9_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_srvcc_FromUTRA_FDD_ToUTRA_FDD_r9_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_srvcc_FromUTRA_FDD_ToGERAN_r9_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_srvcc_FromUTRA_TDD128_ToUTRA_TDD128_r9_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_srvcc_FromUTRA_TDD128_ToGERAN_r9_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_voiceOverPS_HS_UTRA_FDD_r9_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_voiceOverPS_HS_UTRA_FDD_r9_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_voiceOverPS_HS_UTRA_FDD_r9_specs_2 = {
	asn_MAP_LTE_voiceOverPS_HS_UTRA_FDD_r9_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_voiceOverPS_HS_UTRA_FDD_r9_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_voiceOverPS_HS_UTRA_FDD_r9_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_voiceOverPS_HS_UTRA_FDD_r9_2 = {
	"voiceOverPS-HS-UTRA-FDD-r9",
	"voiceOverPS-HS-UTRA-FDD-r9",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_voiceOverPS_HS_UTRA_FDD_r9_tags_2,
	sizeof(asn_DEF_LTE_voiceOverPS_HS_UTRA_FDD_r9_tags_2)
		/sizeof(asn_DEF_LTE_voiceOverPS_HS_UTRA_FDD_r9_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_voiceOverPS_HS_UTRA_FDD_r9_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_voiceOverPS_HS_UTRA_FDD_r9_tags_2)
		/sizeof(asn_DEF_LTE_voiceOverPS_HS_UTRA_FDD_r9_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_voiceOverPS_HS_UTRA_FDD_r9_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_voiceOverPS_HS_UTRA_FDD_r9_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_voiceOverPS_HS_UTRA_TDD128_r9_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_voiceOverPS_HS_UTRA_TDD128_r9_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_voiceOverPS_HS_UTRA_TDD128_r9_specs_4 = {
	asn_MAP_LTE_voiceOverPS_HS_UTRA_TDD128_r9_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_voiceOverPS_HS_UTRA_TDD128_r9_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_voiceOverPS_HS_UTRA_TDD128_r9_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_voiceOverPS_HS_UTRA_TDD128_r9_4 = {
	"voiceOverPS-HS-UTRA-TDD128-r9",
	"voiceOverPS-HS-UTRA-TDD128-r9",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_voiceOverPS_HS_UTRA_TDD128_r9_tags_4,
	sizeof(asn_DEF_LTE_voiceOverPS_HS_UTRA_TDD128_r9_tags_4)
		/sizeof(asn_DEF_LTE_voiceOverPS_HS_UTRA_TDD128_r9_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_voiceOverPS_HS_UTRA_TDD128_r9_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_voiceOverPS_HS_UTRA_TDD128_r9_tags_4)
		/sizeof(asn_DEF_LTE_voiceOverPS_HS_UTRA_TDD128_r9_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_voiceOverPS_HS_UTRA_TDD128_r9_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_voiceOverPS_HS_UTRA_TDD128_r9_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_srvcc_FromUTRA_FDD_ToUTRA_FDD_r9_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_srvcc_FromUTRA_FDD_ToUTRA_FDD_r9_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_srvcc_FromUTRA_FDD_ToUTRA_FDD_r9_specs_6 = {
	asn_MAP_LTE_srvcc_FromUTRA_FDD_ToUTRA_FDD_r9_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_srvcc_FromUTRA_FDD_ToUTRA_FDD_r9_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_srvcc_FromUTRA_FDD_ToUTRA_FDD_r9_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_srvcc_FromUTRA_FDD_ToUTRA_FDD_r9_6 = {
	"srvcc-FromUTRA-FDD-ToUTRA-FDD-r9",
	"srvcc-FromUTRA-FDD-ToUTRA-FDD-r9",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_srvcc_FromUTRA_FDD_ToUTRA_FDD_r9_tags_6,
	sizeof(asn_DEF_LTE_srvcc_FromUTRA_FDD_ToUTRA_FDD_r9_tags_6)
		/sizeof(asn_DEF_LTE_srvcc_FromUTRA_FDD_ToUTRA_FDD_r9_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_srvcc_FromUTRA_FDD_ToUTRA_FDD_r9_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_srvcc_FromUTRA_FDD_ToUTRA_FDD_r9_tags_6)
		/sizeof(asn_DEF_LTE_srvcc_FromUTRA_FDD_ToUTRA_FDD_r9_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_srvcc_FromUTRA_FDD_ToUTRA_FDD_r9_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_srvcc_FromUTRA_FDD_ToUTRA_FDD_r9_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_srvcc_FromUTRA_FDD_ToGERAN_r9_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_srvcc_FromUTRA_FDD_ToGERAN_r9_enum2value_8[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_srvcc_FromUTRA_FDD_ToGERAN_r9_specs_8 = {
	asn_MAP_LTE_srvcc_FromUTRA_FDD_ToGERAN_r9_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_srvcc_FromUTRA_FDD_ToGERAN_r9_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_srvcc_FromUTRA_FDD_ToGERAN_r9_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_srvcc_FromUTRA_FDD_ToGERAN_r9_8 = {
	"srvcc-FromUTRA-FDD-ToGERAN-r9",
	"srvcc-FromUTRA-FDD-ToGERAN-r9",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_srvcc_FromUTRA_FDD_ToGERAN_r9_tags_8,
	sizeof(asn_DEF_LTE_srvcc_FromUTRA_FDD_ToGERAN_r9_tags_8)
		/sizeof(asn_DEF_LTE_srvcc_FromUTRA_FDD_ToGERAN_r9_tags_8[0]) - 1, /* 1 */
	asn_DEF_LTE_srvcc_FromUTRA_FDD_ToGERAN_r9_tags_8,	/* Same as above */
	sizeof(asn_DEF_LTE_srvcc_FromUTRA_FDD_ToGERAN_r9_tags_8)
		/sizeof(asn_DEF_LTE_srvcc_FromUTRA_FDD_ToGERAN_r9_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_srvcc_FromUTRA_FDD_ToGERAN_r9_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_srvcc_FromUTRA_FDD_ToGERAN_r9_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_srvcc_FromUTRA_TDD128_ToUTRA_TDD128_r9_value2enum_10[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_srvcc_FromUTRA_TDD128_ToUTRA_TDD128_r9_enum2value_10[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_srvcc_FromUTRA_TDD128_ToUTRA_TDD128_r9_specs_10 = {
	asn_MAP_LTE_srvcc_FromUTRA_TDD128_ToUTRA_TDD128_r9_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_srvcc_FromUTRA_TDD128_ToUTRA_TDD128_r9_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_srvcc_FromUTRA_TDD128_ToUTRA_TDD128_r9_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_srvcc_FromUTRA_TDD128_ToUTRA_TDD128_r9_10 = {
	"srvcc-FromUTRA-TDD128-ToUTRA-TDD128-r9",
	"srvcc-FromUTRA-TDD128-ToUTRA-TDD128-r9",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_srvcc_FromUTRA_TDD128_ToUTRA_TDD128_r9_tags_10,
	sizeof(asn_DEF_LTE_srvcc_FromUTRA_TDD128_ToUTRA_TDD128_r9_tags_10)
		/sizeof(asn_DEF_LTE_srvcc_FromUTRA_TDD128_ToUTRA_TDD128_r9_tags_10[0]) - 1, /* 1 */
	asn_DEF_LTE_srvcc_FromUTRA_TDD128_ToUTRA_TDD128_r9_tags_10,	/* Same as above */
	sizeof(asn_DEF_LTE_srvcc_FromUTRA_TDD128_ToUTRA_TDD128_r9_tags_10)
		/sizeof(asn_DEF_LTE_srvcc_FromUTRA_TDD128_ToUTRA_TDD128_r9_tags_10[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_srvcc_FromUTRA_TDD128_ToUTRA_TDD128_r9_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_srvcc_FromUTRA_TDD128_ToUTRA_TDD128_r9_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_srvcc_FromUTRA_TDD128_ToGERAN_r9_value2enum_12[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_srvcc_FromUTRA_TDD128_ToGERAN_r9_enum2value_12[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_srvcc_FromUTRA_TDD128_ToGERAN_r9_specs_12 = {
	asn_MAP_LTE_srvcc_FromUTRA_TDD128_ToGERAN_r9_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_srvcc_FromUTRA_TDD128_ToGERAN_r9_enum2value_12,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_srvcc_FromUTRA_TDD128_ToGERAN_r9_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_srvcc_FromUTRA_TDD128_ToGERAN_r9_12 = {
	"srvcc-FromUTRA-TDD128-ToGERAN-r9",
	"srvcc-FromUTRA-TDD128-ToGERAN-r9",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_srvcc_FromUTRA_TDD128_ToGERAN_r9_tags_12,
	sizeof(asn_DEF_LTE_srvcc_FromUTRA_TDD128_ToGERAN_r9_tags_12)
		/sizeof(asn_DEF_LTE_srvcc_FromUTRA_TDD128_ToGERAN_r9_tags_12[0]) - 1, /* 1 */
	asn_DEF_LTE_srvcc_FromUTRA_TDD128_ToGERAN_r9_tags_12,	/* Same as above */
	sizeof(asn_DEF_LTE_srvcc_FromUTRA_TDD128_ToGERAN_r9_tags_12)
		/sizeof(asn_DEF_LTE_srvcc_FromUTRA_TDD128_ToGERAN_r9_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_srvcc_FromUTRA_TDD128_ToGERAN_r9_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_srvcc_FromUTRA_TDD128_ToGERAN_r9_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_IRAT_ParametersUTRA_v9c0_1[] = {
	{ ATF_POINTER, 6, offsetof(struct LTE_IRAT_ParametersUTRA_v9c0, voiceOverPS_HS_UTRA_FDD_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_voiceOverPS_HS_UTRA_FDD_r9_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"voiceOverPS-HS-UTRA-FDD-r9"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_IRAT_ParametersUTRA_v9c0, voiceOverPS_HS_UTRA_TDD128_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_voiceOverPS_HS_UTRA_TDD128_r9_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"voiceOverPS-HS-UTRA-TDD128-r9"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_IRAT_ParametersUTRA_v9c0, srvcc_FromUTRA_FDD_ToUTRA_FDD_r9),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_srvcc_FromUTRA_FDD_ToUTRA_FDD_r9_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srvcc-FromUTRA-FDD-ToUTRA-FDD-r9"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_IRAT_ParametersUTRA_v9c0, srvcc_FromUTRA_FDD_ToGERAN_r9),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_srvcc_FromUTRA_FDD_ToGERAN_r9_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srvcc-FromUTRA-FDD-ToGERAN-r9"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_IRAT_ParametersUTRA_v9c0, srvcc_FromUTRA_TDD128_ToUTRA_TDD128_r9),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_srvcc_FromUTRA_TDD128_ToUTRA_TDD128_r9_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srvcc-FromUTRA-TDD128-ToUTRA-TDD128-r9"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_IRAT_ParametersUTRA_v9c0, srvcc_FromUTRA_TDD128_ToGERAN_r9),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_srvcc_FromUTRA_TDD128_ToGERAN_r9_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srvcc-FromUTRA-TDD128-ToGERAN-r9"
		},
};
static const int asn_MAP_LTE_IRAT_ParametersUTRA_v9c0_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_LTE_IRAT_ParametersUTRA_v9c0_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_IRAT_ParametersUTRA_v9c0_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* voiceOverPS-HS-UTRA-FDD-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* voiceOverPS-HS-UTRA-TDD128-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* srvcc-FromUTRA-FDD-ToUTRA-FDD-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* srvcc-FromUTRA-FDD-ToGERAN-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* srvcc-FromUTRA-TDD128-ToUTRA-TDD128-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* srvcc-FromUTRA-TDD128-ToGERAN-r9 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_IRAT_ParametersUTRA_v9c0_specs_1 = {
	sizeof(struct LTE_IRAT_ParametersUTRA_v9c0),
	offsetof(struct LTE_IRAT_ParametersUTRA_v9c0, _asn_ctx),
	asn_MAP_LTE_IRAT_ParametersUTRA_v9c0_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_LTE_IRAT_ParametersUTRA_v9c0_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_IRAT_ParametersUTRA_v9c0 = {
	"IRAT-ParametersUTRA-v9c0",
	"IRAT-ParametersUTRA-v9c0",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_IRAT_ParametersUTRA_v9c0_tags_1,
	sizeof(asn_DEF_LTE_IRAT_ParametersUTRA_v9c0_tags_1)
		/sizeof(asn_DEF_LTE_IRAT_ParametersUTRA_v9c0_tags_1[0]), /* 1 */
	asn_DEF_LTE_IRAT_ParametersUTRA_v9c0_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_IRAT_ParametersUTRA_v9c0_tags_1)
		/sizeof(asn_DEF_LTE_IRAT_ParametersUTRA_v9c0_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_IRAT_ParametersUTRA_v9c0_1,
	6,	/* Elements count */
	&asn_SPC_LTE_IRAT_ParametersUTRA_v9c0_specs_1	/* Additional specs */
};
