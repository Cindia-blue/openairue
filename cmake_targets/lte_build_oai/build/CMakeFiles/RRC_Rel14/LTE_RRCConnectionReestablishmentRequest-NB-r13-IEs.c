/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_RRCConnectionReestablishmentRequest-NB-r13-IEs.h"

static int
memb_LTE_spare_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 20)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LTE_spare_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  20,  20 }	/* (SIZE(20..20)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LTE_RRCConnectionReestablishmentRequest_NB_r13_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionReestablishmentRequest_NB_r13_IEs, ue_Identity_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ReestabUE_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-Identity-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionReestablishmentRequest_NB_r13_IEs, reestablishmentCause_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ReestablishmentCause_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reestablishmentCause-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionReestablishmentRequest_NB_r13_IEs, cqi_NPDCCH_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CQI_NPDCCH_NB_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cqi-NPDCCH-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionReestablishmentRequest_NB_r13_IEs, earlyContentionResolution_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"earlyContentionResolution-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionReestablishmentRequest_NB_r13_IEs, spare),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_spare_constr_6,  memb_LTE_spare_constraint_1 },
		0, 0, /* No default value */
		"spare"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_RRCConnectionReestablishmentRequest_NB_r13_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_RRCConnectionReestablishmentRequest_NB_r13_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-Identity-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* reestablishmentCause-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cqi-NPDCCH-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* earlyContentionResolution-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* spare */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionReestablishmentRequest_NB_r13_IEs_specs_1 = {
	sizeof(struct LTE_RRCConnectionReestablishmentRequest_NB_r13_IEs),
	offsetof(struct LTE_RRCConnectionReestablishmentRequest_NB_r13_IEs, _asn_ctx),
	asn_MAP_LTE_RRCConnectionReestablishmentRequest_NB_r13_IEs_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionReestablishmentRequest_NB_r13_IEs = {
	"RRCConnectionReestablishmentRequest-NB-r13-IEs",
	"RRCConnectionReestablishmentRequest-NB-r13-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_RRCConnectionReestablishmentRequest_NB_r13_IEs_tags_1,
	sizeof(asn_DEF_LTE_RRCConnectionReestablishmentRequest_NB_r13_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionReestablishmentRequest_NB_r13_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_RRCConnectionReestablishmentRequest_NB_r13_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_RRCConnectionReestablishmentRequest_NB_r13_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionReestablishmentRequest_NB_r13_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_RRCConnectionReestablishmentRequest_NB_r13_IEs_1,
	5,	/* Elements count */
	&asn_SPC_LTE_RRCConnectionReestablishmentRequest_NB_r13_IEs_specs_1	/* Additional specs */
};

