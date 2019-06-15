/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-Sidelink-Preconf"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SL-V2X-SyncOffsetIndicators-r14.h"

asn_TYPE_member_t asn_MBR_LTE_SL_V2X_SyncOffsetIndicators_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_V2X_SyncOffsetIndicators_r14, syncOffsetIndicator1_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_OffsetIndicatorSync_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"syncOffsetIndicator1-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_V2X_SyncOffsetIndicators_r14, syncOffsetIndicator2_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_OffsetIndicatorSync_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"syncOffsetIndicator2-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_V2X_SyncOffsetIndicators_r14, syncOffsetIndicator3_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_OffsetIndicatorSync_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"syncOffsetIndicator3-r14"
		},
};
static const int asn_MAP_LTE_SL_V2X_SyncOffsetIndicators_r14_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_LTE_SL_V2X_SyncOffsetIndicators_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SL_V2X_SyncOffsetIndicators_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* syncOffsetIndicator1-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* syncOffsetIndicator2-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* syncOffsetIndicator3-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_V2X_SyncOffsetIndicators_r14_specs_1 = {
	sizeof(struct LTE_SL_V2X_SyncOffsetIndicators_r14),
	offsetof(struct LTE_SL_V2X_SyncOffsetIndicators_r14, _asn_ctx),
	asn_MAP_LTE_SL_V2X_SyncOffsetIndicators_r14_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_SL_V2X_SyncOffsetIndicators_r14_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SL_V2X_SyncOffsetIndicators_r14 = {
	"SL-V2X-SyncOffsetIndicators-r14",
	"SL-V2X-SyncOffsetIndicators-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SL_V2X_SyncOffsetIndicators_r14_tags_1,
	sizeof(asn_DEF_LTE_SL_V2X_SyncOffsetIndicators_r14_tags_1)
		/sizeof(asn_DEF_LTE_SL_V2X_SyncOffsetIndicators_r14_tags_1[0]), /* 1 */
	asn_DEF_LTE_SL_V2X_SyncOffsetIndicators_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SL_V2X_SyncOffsetIndicators_r14_tags_1)
		/sizeof(asn_DEF_LTE_SL_V2X_SyncOffsetIndicators_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SL_V2X_SyncOffsetIndicators_r14_1,
	3,	/* Elements count */
	&asn_SPC_LTE_SL_V2X_SyncOffsetIndicators_r14_specs_1	/* Additional specs */
};

