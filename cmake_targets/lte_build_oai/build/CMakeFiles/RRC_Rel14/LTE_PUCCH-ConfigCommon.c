/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_PUCCH-ConfigCommon.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_nRB_CQI_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 98)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_nCS_AN_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_n1PUCCH_AN_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 2047)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_deltaPUCCH_Shift_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_nRB_CQI_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  98 }	/* (0..98) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_nCS_AN_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_n1PUCCH_AN_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  2047 }	/* (0..2047) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_deltaPUCCH_Shift_value2enum_2[] = {
	{ 0,	3,	"ds1" },
	{ 1,	3,	"ds2" },
	{ 2,	3,	"ds3" }
};
static const unsigned int asn_MAP_LTE_deltaPUCCH_Shift_enum2value_2[] = {
	0,	/* ds1(0) */
	1,	/* ds2(1) */
	2	/* ds3(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_deltaPUCCH_Shift_specs_2 = {
	asn_MAP_LTE_deltaPUCCH_Shift_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_deltaPUCCH_Shift_enum2value_2,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_deltaPUCCH_Shift_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_deltaPUCCH_Shift_2 = {
	"deltaPUCCH-Shift",
	"deltaPUCCH-Shift",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_deltaPUCCH_Shift_tags_2,
	sizeof(asn_DEF_LTE_deltaPUCCH_Shift_tags_2)
		/sizeof(asn_DEF_LTE_deltaPUCCH_Shift_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_deltaPUCCH_Shift_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_deltaPUCCH_Shift_tags_2)
		/sizeof(asn_DEF_LTE_deltaPUCCH_Shift_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_deltaPUCCH_Shift_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_deltaPUCCH_Shift_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_PUCCH_ConfigCommon_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PUCCH_ConfigCommon, deltaPUCCH_Shift),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_deltaPUCCH_Shift_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deltaPUCCH-Shift"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PUCCH_ConfigCommon, nRB_CQI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_nRB_CQI_constr_6,  memb_LTE_nRB_CQI_constraint_1 },
		0, 0, /* No default value */
		"nRB-CQI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PUCCH_ConfigCommon, nCS_AN),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_nCS_AN_constr_7,  memb_LTE_nCS_AN_constraint_1 },
		0, 0, /* No default value */
		"nCS-AN"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PUCCH_ConfigCommon, n1PUCCH_AN),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_n1PUCCH_AN_constr_8,  memb_LTE_n1PUCCH_AN_constraint_1 },
		0, 0, /* No default value */
		"n1PUCCH-AN"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_PUCCH_ConfigCommon_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PUCCH_ConfigCommon_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* deltaPUCCH-Shift */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nRB-CQI */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* nCS-AN */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* n1PUCCH-AN */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_PUCCH_ConfigCommon_specs_1 = {
	sizeof(struct LTE_PUCCH_ConfigCommon),
	offsetof(struct LTE_PUCCH_ConfigCommon, _asn_ctx),
	asn_MAP_LTE_PUCCH_ConfigCommon_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PUCCH_ConfigCommon = {
	"PUCCH-ConfigCommon",
	"PUCCH-ConfigCommon",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_PUCCH_ConfigCommon_tags_1,
	sizeof(asn_DEF_LTE_PUCCH_ConfigCommon_tags_1)
		/sizeof(asn_DEF_LTE_PUCCH_ConfigCommon_tags_1[0]), /* 1 */
	asn_DEF_LTE_PUCCH_ConfigCommon_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PUCCH_ConfigCommon_tags_1)
		/sizeof(asn_DEF_LTE_PUCCH_ConfigCommon_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_PUCCH_ConfigCommon_1,
	4,	/* Elements count */
	&asn_SPC_LTE_PUCCH_ConfigCommon_specs_1	/* Additional specs */
};

