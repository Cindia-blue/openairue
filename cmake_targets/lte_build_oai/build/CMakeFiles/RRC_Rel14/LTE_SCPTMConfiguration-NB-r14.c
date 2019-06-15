/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SCPTMConfiguration-NB-r14.h"

static const ber_tlv_tag_t asn_DEF_LTE_nonCriticalExtension_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_nonCriticalExtension_specs_5 = {
	sizeof(struct LTE_SCPTMConfiguration_NB_r14__nonCriticalExtension),
	offsetof(struct LTE_SCPTMConfiguration_NB_r14__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nonCriticalExtension_5 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_nonCriticalExtension_tags_5,
	sizeof(asn_DEF_LTE_nonCriticalExtension_tags_5)
		/sizeof(asn_DEF_LTE_nonCriticalExtension_tags_5[0]) - 1, /* 1 */
	asn_DEF_LTE_nonCriticalExtension_tags_5,	/* Same as above */
	sizeof(asn_DEF_LTE_nonCriticalExtension_tags_5)
		/sizeof(asn_DEF_LTE_nonCriticalExtension_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_LTE_nonCriticalExtension_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SCPTMConfiguration_NB_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SCPTMConfiguration_NB_r14, sc_mtch_InfoList_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SC_MTCH_InfoList_NB_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sc-mtch-InfoList-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_SCPTMConfiguration_NB_r14, scptm_NeighbourCellList_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SCPTM_NeighbourCellList_NB_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scptm-NeighbourCellList-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SCPTMConfiguration_NB_r14, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SCPTMConfiguration_NB_r14, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_LTE_nonCriticalExtension_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_LTE_SCPTMConfiguration_NB_r14_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_LTE_SCPTMConfiguration_NB_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SCPTMConfiguration_NB_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sc-mtch-InfoList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* scptm-NeighbourCellList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SCPTMConfiguration_NB_r14_specs_1 = {
	sizeof(struct LTE_SCPTMConfiguration_NB_r14),
	offsetof(struct LTE_SCPTMConfiguration_NB_r14, _asn_ctx),
	asn_MAP_LTE_SCPTMConfiguration_NB_r14_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_SCPTMConfiguration_NB_r14_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SCPTMConfiguration_NB_r14 = {
	"SCPTMConfiguration-NB-r14",
	"SCPTMConfiguration-NB-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SCPTMConfiguration_NB_r14_tags_1,
	sizeof(asn_DEF_LTE_SCPTMConfiguration_NB_r14_tags_1)
		/sizeof(asn_DEF_LTE_SCPTMConfiguration_NB_r14_tags_1[0]), /* 1 */
	asn_DEF_LTE_SCPTMConfiguration_NB_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SCPTMConfiguration_NB_r14_tags_1)
		/sizeof(asn_DEF_LTE_SCPTMConfiguration_NB_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SCPTMConfiguration_NB_r14_1,
	4,	/* Elements count */
	&asn_SPC_LTE_SCPTMConfiguration_NB_r14_specs_1	/* Additional specs */
};

