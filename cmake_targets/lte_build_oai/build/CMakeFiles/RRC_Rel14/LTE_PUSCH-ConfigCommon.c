/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_PUSCH-ConfigCommon.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_n_SB_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 4)) {
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
memb_LTE_pusch_HoppingOffset_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_type_LTE_hoppingMode_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_n_SB_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (1..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_pusch_HoppingOffset_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  98 }	/* (0..98) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_hoppingMode_value2enum_4[] = {
	{ 0,	13,	"interSubFrame" },
	{ 1,	21,	"intraAndInterSubFrame" }
};
static const unsigned int asn_MAP_LTE_hoppingMode_enum2value_4[] = {
	0,	/* interSubFrame(0) */
	1	/* intraAndInterSubFrame(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_hoppingMode_specs_4 = {
	asn_MAP_LTE_hoppingMode_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_hoppingMode_enum2value_4,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_hoppingMode_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_hoppingMode_4 = {
	"hoppingMode",
	"hoppingMode",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_hoppingMode_tags_4,
	sizeof(asn_DEF_LTE_hoppingMode_tags_4)
		/sizeof(asn_DEF_LTE_hoppingMode_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_hoppingMode_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_hoppingMode_tags_4)
		/sizeof(asn_DEF_LTE_hoppingMode_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_hoppingMode_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_hoppingMode_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_pusch_ConfigBasic_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PUSCH_ConfigCommon__pusch_ConfigBasic, n_SB),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_n_SB_constr_3,  memb_LTE_n_SB_constraint_2 },
		0, 0, /* No default value */
		"n-SB"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PUSCH_ConfigCommon__pusch_ConfigBasic, hoppingMode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_hoppingMode_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hoppingMode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PUSCH_ConfigCommon__pusch_ConfigBasic, pusch_HoppingOffset),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_pusch_HoppingOffset_constr_7,  memb_LTE_pusch_HoppingOffset_constraint_2 },
		0, 0, /* No default value */
		"pusch-HoppingOffset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PUSCH_ConfigCommon__pusch_ConfigBasic, enable64QAM),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"enable64QAM"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_pusch_ConfigBasic_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_pusch_ConfigBasic_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* n-SB */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* hoppingMode */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pusch-HoppingOffset */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* enable64QAM */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_pusch_ConfigBasic_specs_2 = {
	sizeof(struct LTE_PUSCH_ConfigCommon__pusch_ConfigBasic),
	offsetof(struct LTE_PUSCH_ConfigCommon__pusch_ConfigBasic, _asn_ctx),
	asn_MAP_LTE_pusch_ConfigBasic_tag2el_2,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_pusch_ConfigBasic_2 = {
	"pusch-ConfigBasic",
	"pusch-ConfigBasic",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_pusch_ConfigBasic_tags_2,
	sizeof(asn_DEF_LTE_pusch_ConfigBasic_tags_2)
		/sizeof(asn_DEF_LTE_pusch_ConfigBasic_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_pusch_ConfigBasic_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_pusch_ConfigBasic_tags_2)
		/sizeof(asn_DEF_LTE_pusch_ConfigBasic_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_pusch_ConfigBasic_2,
	4,	/* Elements count */
	&asn_SPC_LTE_pusch_ConfigBasic_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_PUSCH_ConfigCommon_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PUSCH_ConfigCommon, pusch_ConfigBasic),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_pusch_ConfigBasic_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pusch-ConfigBasic"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PUSCH_ConfigCommon, ul_ReferenceSignalsPUSCH),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_UL_ReferenceSignalsPUSCH,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-ReferenceSignalsPUSCH"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_PUSCH_ConfigCommon_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PUSCH_ConfigCommon_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pusch-ConfigBasic */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ul-ReferenceSignalsPUSCH */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_PUSCH_ConfigCommon_specs_1 = {
	sizeof(struct LTE_PUSCH_ConfigCommon),
	offsetof(struct LTE_PUSCH_ConfigCommon, _asn_ctx),
	asn_MAP_LTE_PUSCH_ConfigCommon_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PUSCH_ConfigCommon = {
	"PUSCH-ConfigCommon",
	"PUSCH-ConfigCommon",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_PUSCH_ConfigCommon_tags_1,
	sizeof(asn_DEF_LTE_PUSCH_ConfigCommon_tags_1)
		/sizeof(asn_DEF_LTE_PUSCH_ConfigCommon_tags_1[0]), /* 1 */
	asn_DEF_LTE_PUSCH_ConfigCommon_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PUSCH_ConfigCommon_tags_1)
		/sizeof(asn_DEF_LTE_PUSCH_ConfigCommon_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_PUSCH_ConfigCommon_1,
	2,	/* Elements count */
	&asn_SPC_LTE_PUSCH_ConfigCommon_specs_1	/* Additional specs */
};

