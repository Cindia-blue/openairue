/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SCG-ConfigRestrictInfo-r12.h"

static int
memb_LTE_maxSCH_TB_BitsDL_r12_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 100)) {
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
memb_LTE_maxSCH_TB_BitsUL_r12_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 100)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LTE_maxSCH_TB_BitsDL_r12_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  1,  100 }	/* (1..100) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_maxSCH_TB_BitsUL_r12_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  1,  100 }	/* (1..100) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LTE_SCG_ConfigRestrictInfo_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SCG_ConfigRestrictInfo_r12, maxSCH_TB_BitsDL_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_maxSCH_TB_BitsDL_r12_constr_2,  memb_LTE_maxSCH_TB_BitsDL_r12_constraint_1 },
		0, 0, /* No default value */
		"maxSCH-TB-BitsDL-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SCG_ConfigRestrictInfo_r12, maxSCH_TB_BitsUL_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_maxSCH_TB_BitsUL_r12_constr_3,  memb_LTE_maxSCH_TB_BitsUL_r12_constraint_1 },
		0, 0, /* No default value */
		"maxSCH-TB-BitsUL-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_SCG_ConfigRestrictInfo_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SCG_ConfigRestrictInfo_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxSCH-TB-BitsDL-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* maxSCH-TB-BitsUL-r12 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SCG_ConfigRestrictInfo_r12_specs_1 = {
	sizeof(struct LTE_SCG_ConfigRestrictInfo_r12),
	offsetof(struct LTE_SCG_ConfigRestrictInfo_r12, _asn_ctx),
	asn_MAP_LTE_SCG_ConfigRestrictInfo_r12_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SCG_ConfigRestrictInfo_r12 = {
	"SCG-ConfigRestrictInfo-r12",
	"SCG-ConfigRestrictInfo-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SCG_ConfigRestrictInfo_r12_tags_1,
	sizeof(asn_DEF_LTE_SCG_ConfigRestrictInfo_r12_tags_1)
		/sizeof(asn_DEF_LTE_SCG_ConfigRestrictInfo_r12_tags_1[0]), /* 1 */
	asn_DEF_LTE_SCG_ConfigRestrictInfo_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SCG_ConfigRestrictInfo_r12_tags_1)
		/sizeof(asn_DEF_LTE_SCG_ConfigRestrictInfo_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SCG_ConfigRestrictInfo_r12_1,
	2,	/* Elements count */
	&asn_SPC_LTE_SCG_ConfigRestrictInfo_r12_specs_1	/* Additional specs */
};

