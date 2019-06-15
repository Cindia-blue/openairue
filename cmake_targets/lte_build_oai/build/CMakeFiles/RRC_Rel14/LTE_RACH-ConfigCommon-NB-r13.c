/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_RACH-ConfigCommon-NB-r13.h"

static int
memb_LTE_connEstFailOffset_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LTE_connEstFailOffset_r13_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_ext1_7[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_RACH_ConfigCommon_NB_r13__ext1, powerRampingParameters_v1450),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PowerRampingParameters_NB_v1450,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"powerRampingParameters-v1450"
		},
};
static const int asn_MAP_LTE_ext1_oms_7[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* powerRampingParameters-v1450 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_7 = {
	sizeof(struct LTE_RACH_ConfigCommon_NB_r13__ext1),
	offsetof(struct LTE_RACH_ConfigCommon_NB_r13__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_7,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_7,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_7 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_7,
	sizeof(asn_DEF_LTE_ext1_tags_7)
		/sizeof(asn_DEF_LTE_ext1_tags_7[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_7,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_7)
		/sizeof(asn_DEF_LTE_ext1_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext1_7,
	1,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_RACH_ConfigCommon_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RACH_ConfigCommon_NB_r13, preambleTransMax_CE_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PreambleTransMax,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"preambleTransMax-CE-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RACH_ConfigCommon_NB_r13, powerRampingParameters_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PowerRampingParameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"powerRampingParameters-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RACH_ConfigCommon_NB_r13, rach_InfoList_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RACH_InfoList_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rach-InfoList-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_RACH_ConfigCommon_NB_r13, connEstFailOffset_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_connEstFailOffset_r13_constr_5,  memb_LTE_connEstFailOffset_r13_constraint_1 },
		0, 0, /* No default value */
		"connEstFailOffset-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_RACH_ConfigCommon_NB_r13, ext1),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_LTE_ext1_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_LTE_RACH_ConfigCommon_NB_r13_oms_1[] = { 3, 4 };
static const ber_tlv_tag_t asn_DEF_LTE_RACH_ConfigCommon_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_RACH_ConfigCommon_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* preambleTransMax-CE-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* powerRampingParameters-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rach-InfoList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* connEstFailOffset-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_RACH_ConfigCommon_NB_r13_specs_1 = {
	sizeof(struct LTE_RACH_ConfigCommon_NB_r13),
	offsetof(struct LTE_RACH_ConfigCommon_NB_r13, _asn_ctx),
	asn_MAP_LTE_RACH_ConfigCommon_NB_r13_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_LTE_RACH_ConfigCommon_NB_r13_oms_1,	/* Optional members */
	1, 1,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_RACH_ConfigCommon_NB_r13 = {
	"RACH-ConfigCommon-NB-r13",
	"RACH-ConfigCommon-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_RACH_ConfigCommon_NB_r13_tags_1,
	sizeof(asn_DEF_LTE_RACH_ConfigCommon_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_RACH_ConfigCommon_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_RACH_ConfigCommon_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_RACH_ConfigCommon_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_RACH_ConfigCommon_NB_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_RACH_ConfigCommon_NB_r13_1,
	5,	/* Elements count */
	&asn_SPC_LTE_RACH_ConfigCommon_NB_r13_specs_1	/* Additional specs */
};

