/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_PUSCH-ConfigDedicated.h"

static int
memb_LTE_betaOffset_ACK_Index_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_LTE_betaOffset_RI_Index_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_LTE_betaOffset_CQI_Index_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_memb_LTE_betaOffset_ACK_Index_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_betaOffset_RI_Index_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_betaOffset_CQI_Index_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LTE_PUSCH_ConfigDedicated_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PUSCH_ConfigDedicated, betaOffset_ACK_Index),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_betaOffset_ACK_Index_constr_2,  memb_LTE_betaOffset_ACK_Index_constraint_1 },
		0, 0, /* No default value */
		"betaOffset-ACK-Index"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PUSCH_ConfigDedicated, betaOffset_RI_Index),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_betaOffset_RI_Index_constr_3,  memb_LTE_betaOffset_RI_Index_constraint_1 },
		0, 0, /* No default value */
		"betaOffset-RI-Index"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PUSCH_ConfigDedicated, betaOffset_CQI_Index),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_betaOffset_CQI_Index_constr_4,  memb_LTE_betaOffset_CQI_Index_constraint_1 },
		0, 0, /* No default value */
		"betaOffset-CQI-Index"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_PUSCH_ConfigDedicated_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PUSCH_ConfigDedicated_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* betaOffset-ACK-Index */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* betaOffset-RI-Index */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* betaOffset-CQI-Index */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_PUSCH_ConfigDedicated_specs_1 = {
	sizeof(struct LTE_PUSCH_ConfigDedicated),
	offsetof(struct LTE_PUSCH_ConfigDedicated, _asn_ctx),
	asn_MAP_LTE_PUSCH_ConfigDedicated_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PUSCH_ConfigDedicated = {
	"PUSCH-ConfigDedicated",
	"PUSCH-ConfigDedicated",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_PUSCH_ConfigDedicated_tags_1,
	sizeof(asn_DEF_LTE_PUSCH_ConfigDedicated_tags_1)
		/sizeof(asn_DEF_LTE_PUSCH_ConfigDedicated_tags_1[0]), /* 1 */
	asn_DEF_LTE_PUSCH_ConfigDedicated_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PUSCH_ConfigDedicated_tags_1)
		/sizeof(asn_DEF_LTE_PUSCH_ConfigDedicated_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_PUSCH_ConfigDedicated_1,
	3,	/* Elements count */
	&asn_SPC_LTE_PUSCH_ConfigDedicated_specs_1	/* Additional specs */
};

