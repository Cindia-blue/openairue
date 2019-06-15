/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SystemInformationBlockType22-NB-r14.h"

asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType22_NB_r14_1[] = {
	{ ATF_POINTER, 5, offsetof(struct LTE_SystemInformationBlockType22_NB_r14, dl_ConfigList_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_DL_ConfigCommonList_NB_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-ConfigList-r14"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_SystemInformationBlockType22_NB_r14, ul_ConfigList_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_UL_ConfigCommonList_NB_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-ConfigList-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_SystemInformationBlockType22_NB_r14, pagingWeightAnchor_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PagingWeight_NB_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pagingWeightAnchor-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SystemInformationBlockType22_NB_r14, nprach_ProbabilityAnchorList_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_NPRACH_ProbabilityAnchorList_NB_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nprach-ProbabilityAnchorList-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType22_NB_r14, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
};
static const int asn_MAP_LTE_SystemInformationBlockType22_NB_r14_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_LTE_SystemInformationBlockType22_NB_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SystemInformationBlockType22_NB_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-ConfigList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ul-ConfigList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pagingWeightAnchor-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* nprach-ProbabilityAnchorList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* lateNonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType22_NB_r14_specs_1 = {
	sizeof(struct LTE_SystemInformationBlockType22_NB_r14),
	offsetof(struct LTE_SystemInformationBlockType22_NB_r14, _asn_ctx),
	asn_MAP_LTE_SystemInformationBlockType22_NB_r14_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_LTE_SystemInformationBlockType22_NB_r14_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType22_NB_r14 = {
	"SystemInformationBlockType22-NB-r14",
	"SystemInformationBlockType22-NB-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SystemInformationBlockType22_NB_r14_tags_1,
	sizeof(asn_DEF_LTE_SystemInformationBlockType22_NB_r14_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformationBlockType22_NB_r14_tags_1[0]), /* 1 */
	asn_DEF_LTE_SystemInformationBlockType22_NB_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SystemInformationBlockType22_NB_r14_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformationBlockType22_NB_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SystemInformationBlockType22_NB_r14_1,
	5,	/* Elements count */
	&asn_SPC_LTE_SystemInformationBlockType22_NB_r14_specs_1	/* Additional specs */
};

