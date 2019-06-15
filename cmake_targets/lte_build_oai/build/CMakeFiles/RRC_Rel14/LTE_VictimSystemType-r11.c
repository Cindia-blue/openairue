/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_VictimSystemType-r11.h"

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
static asn_per_constraints_t asn_PER_type_LTE_gps_r11_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_glonass_r11_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_bds_r11_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_galileo_r11_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_wlan_r11_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_bluetooth_r11_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_gps_r11_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_gps_r11_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_gps_r11_specs_2 = {
	asn_MAP_LTE_gps_r11_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_gps_r11_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_gps_r11_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_gps_r11_2 = {
	"gps-r11",
	"gps-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_gps_r11_tags_2,
	sizeof(asn_DEF_LTE_gps_r11_tags_2)
		/sizeof(asn_DEF_LTE_gps_r11_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_gps_r11_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_gps_r11_tags_2)
		/sizeof(asn_DEF_LTE_gps_r11_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_gps_r11_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_gps_r11_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_glonass_r11_value2enum_4[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_glonass_r11_enum2value_4[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_glonass_r11_specs_4 = {
	asn_MAP_LTE_glonass_r11_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_glonass_r11_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_glonass_r11_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_glonass_r11_4 = {
	"glonass-r11",
	"glonass-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_glonass_r11_tags_4,
	sizeof(asn_DEF_LTE_glonass_r11_tags_4)
		/sizeof(asn_DEF_LTE_glonass_r11_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_glonass_r11_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_glonass_r11_tags_4)
		/sizeof(asn_DEF_LTE_glonass_r11_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_glonass_r11_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_glonass_r11_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_bds_r11_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_bds_r11_enum2value_6[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_bds_r11_specs_6 = {
	asn_MAP_LTE_bds_r11_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_bds_r11_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_bds_r11_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_bds_r11_6 = {
	"bds-r11",
	"bds-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_bds_r11_tags_6,
	sizeof(asn_DEF_LTE_bds_r11_tags_6)
		/sizeof(asn_DEF_LTE_bds_r11_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_bds_r11_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_bds_r11_tags_6)
		/sizeof(asn_DEF_LTE_bds_r11_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_bds_r11_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_bds_r11_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_galileo_r11_value2enum_8[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_galileo_r11_enum2value_8[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_galileo_r11_specs_8 = {
	asn_MAP_LTE_galileo_r11_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_galileo_r11_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_galileo_r11_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_galileo_r11_8 = {
	"galileo-r11",
	"galileo-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_galileo_r11_tags_8,
	sizeof(asn_DEF_LTE_galileo_r11_tags_8)
		/sizeof(asn_DEF_LTE_galileo_r11_tags_8[0]) - 1, /* 1 */
	asn_DEF_LTE_galileo_r11_tags_8,	/* Same as above */
	sizeof(asn_DEF_LTE_galileo_r11_tags_8)
		/sizeof(asn_DEF_LTE_galileo_r11_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_galileo_r11_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_galileo_r11_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_wlan_r11_value2enum_10[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_wlan_r11_enum2value_10[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_wlan_r11_specs_10 = {
	asn_MAP_LTE_wlan_r11_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_wlan_r11_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_wlan_r11_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_wlan_r11_10 = {
	"wlan-r11",
	"wlan-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_wlan_r11_tags_10,
	sizeof(asn_DEF_LTE_wlan_r11_tags_10)
		/sizeof(asn_DEF_LTE_wlan_r11_tags_10[0]) - 1, /* 1 */
	asn_DEF_LTE_wlan_r11_tags_10,	/* Same as above */
	sizeof(asn_DEF_LTE_wlan_r11_tags_10)
		/sizeof(asn_DEF_LTE_wlan_r11_tags_10[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_wlan_r11_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_wlan_r11_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_bluetooth_r11_value2enum_12[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_bluetooth_r11_enum2value_12[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_bluetooth_r11_specs_12 = {
	asn_MAP_LTE_bluetooth_r11_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_bluetooth_r11_enum2value_12,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_bluetooth_r11_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_bluetooth_r11_12 = {
	"bluetooth-r11",
	"bluetooth-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_bluetooth_r11_tags_12,
	sizeof(asn_DEF_LTE_bluetooth_r11_tags_12)
		/sizeof(asn_DEF_LTE_bluetooth_r11_tags_12[0]) - 1, /* 1 */
	asn_DEF_LTE_bluetooth_r11_tags_12,	/* Same as above */
	sizeof(asn_DEF_LTE_bluetooth_r11_tags_12)
		/sizeof(asn_DEF_LTE_bluetooth_r11_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_bluetooth_r11_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_bluetooth_r11_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_VictimSystemType_r11_1[] = {
	{ ATF_POINTER, 6, offsetof(struct LTE_VictimSystemType_r11, gps_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_gps_r11_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gps-r11"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_VictimSystemType_r11, glonass_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_glonass_r11_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"glonass-r11"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_VictimSystemType_r11, bds_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_bds_r11_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bds-r11"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_VictimSystemType_r11, galileo_r11),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_galileo_r11_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"galileo-r11"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_VictimSystemType_r11, wlan_r11),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_wlan_r11_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"wlan-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_VictimSystemType_r11, bluetooth_r11),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_bluetooth_r11_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bluetooth-r11"
		},
};
static const int asn_MAP_LTE_VictimSystemType_r11_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_LTE_VictimSystemType_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_VictimSystemType_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gps-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* glonass-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* bds-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* galileo-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* wlan-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* bluetooth-r11 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_VictimSystemType_r11_specs_1 = {
	sizeof(struct LTE_VictimSystemType_r11),
	offsetof(struct LTE_VictimSystemType_r11, _asn_ctx),
	asn_MAP_LTE_VictimSystemType_r11_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_LTE_VictimSystemType_r11_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_VictimSystemType_r11 = {
	"VictimSystemType-r11",
	"VictimSystemType-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_VictimSystemType_r11_tags_1,
	sizeof(asn_DEF_LTE_VictimSystemType_r11_tags_1)
		/sizeof(asn_DEF_LTE_VictimSystemType_r11_tags_1[0]), /* 1 */
	asn_DEF_LTE_VictimSystemType_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_VictimSystemType_r11_tags_1)
		/sizeof(asn_DEF_LTE_VictimSystemType_r11_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_VictimSystemType_r11_1,
	6,	/* Elements count */
	&asn_SPC_LTE_VictimSystemType_r11_specs_1	/* Additional specs */
};

