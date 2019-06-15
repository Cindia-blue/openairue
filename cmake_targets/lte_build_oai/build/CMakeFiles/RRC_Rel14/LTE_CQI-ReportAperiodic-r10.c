/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_CQI-ReportAperiodic-r10.h"

static int
memb_LTE_trigger1_r10_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 8)) {
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
memb_LTE_trigger2_r10_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LTE_trigger1_r10_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_trigger2_r10_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_LTE_CQI_ReportAperiodic_r10_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_aperiodicCSI_Trigger_r10_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodic_r10__setup__aperiodicCSI_Trigger_r10, trigger1_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_trigger1_r10_constr_6,  memb_LTE_trigger1_r10_constraint_5 },
		0, 0, /* No default value */
		"trigger1-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodic_r10__setup__aperiodicCSI_Trigger_r10, trigger2_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_trigger2_r10_constr_7,  memb_LTE_trigger2_r10_constraint_5 },
		0, 0, /* No default value */
		"trigger2-r10"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_aperiodicCSI_Trigger_r10_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_aperiodicCSI_Trigger_r10_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* trigger1-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* trigger2-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_aperiodicCSI_Trigger_r10_specs_5 = {
	sizeof(struct LTE_CQI_ReportAperiodic_r10__setup__aperiodicCSI_Trigger_r10),
	offsetof(struct LTE_CQI_ReportAperiodic_r10__setup__aperiodicCSI_Trigger_r10, _asn_ctx),
	asn_MAP_LTE_aperiodicCSI_Trigger_r10_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_aperiodicCSI_Trigger_r10_5 = {
	"aperiodicCSI-Trigger-r10",
	"aperiodicCSI-Trigger-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_aperiodicCSI_Trigger_r10_tags_5,
	sizeof(asn_DEF_LTE_aperiodicCSI_Trigger_r10_tags_5)
		/sizeof(asn_DEF_LTE_aperiodicCSI_Trigger_r10_tags_5[0]) - 1, /* 1 */
	asn_DEF_LTE_aperiodicCSI_Trigger_r10_tags_5,	/* Same as above */
	sizeof(asn_DEF_LTE_aperiodicCSI_Trigger_r10_tags_5)
		/sizeof(asn_DEF_LTE_aperiodicCSI_Trigger_r10_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_aperiodicCSI_Trigger_r10_5,
	2,	/* Elements count */
	&asn_SPC_LTE_aperiodicCSI_Trigger_r10_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodic_r10__setup, cqi_ReportModeAperiodic_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CQI_ReportModeAperiodic,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-ReportModeAperiodic-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_CQI_ReportAperiodic_r10__setup, aperiodicCSI_Trigger_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_aperiodicCSI_Trigger_r10_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"aperiodicCSI-Trigger-r10"
		},
};
static const int asn_MAP_LTE_setup_oms_3[] = { 1 };
static const ber_tlv_tag_t asn_DEF_LTE_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cqi-ReportModeAperiodic-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* aperiodicCSI-Trigger-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_setup_specs_3 = {
	sizeof(struct LTE_CQI_ReportAperiodic_r10__setup),
	offsetof(struct LTE_CQI_ReportAperiodic_r10__setup, _asn_ctx),
	asn_MAP_LTE_setup_tag2el_3,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_setup_oms_3,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_setup_3 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_setup_tags_3,
	sizeof(asn_DEF_LTE_setup_tags_3)
		/sizeof(asn_DEF_LTE_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_setup_tags_3)
		/sizeof(asn_DEF_LTE_setup_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_setup_3,
	2,	/* Elements count */
	&asn_SPC_LTE_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_CQI_ReportAperiodic_r10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodic_r10, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodic_r10, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_CQI_ReportAperiodic_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_LTE_CQI_ReportAperiodic_r10_specs_1 = {
	sizeof(struct LTE_CQI_ReportAperiodic_r10),
	offsetof(struct LTE_CQI_ReportAperiodic_r10, _asn_ctx),
	offsetof(struct LTE_CQI_ReportAperiodic_r10, present),
	sizeof(((struct LTE_CQI_ReportAperiodic_r10 *)0)->present),
	asn_MAP_LTE_CQI_ReportAperiodic_r10_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LTE_CQI_ReportAperiodic_r10 = {
	"CQI-ReportAperiodic-r10",
	"CQI-ReportAperiodic-r10",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_CQI_ReportAperiodic_r10_constr_1, CHOICE_constraint },
	asn_MBR_LTE_CQI_ReportAperiodic_r10_1,
	2,	/* Elements count */
	&asn_SPC_LTE_CQI_ReportAperiodic_r10_specs_1	/* Additional specs */
};

