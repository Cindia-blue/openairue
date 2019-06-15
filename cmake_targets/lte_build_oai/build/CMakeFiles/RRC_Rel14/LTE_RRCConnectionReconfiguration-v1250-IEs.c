/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_RRCConnectionReconfiguration-v1250-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_t350_r12_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_wlan_OffloadInfo_r12_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_t350_r12_value2enum_6[] = {
	{ 0,	4,	"min5" },
	{ 1,	5,	"min10" },
	{ 2,	5,	"min20" },
	{ 3,	5,	"min30" },
	{ 4,	5,	"min60" },
	{ 5,	6,	"min120" },
	{ 6,	6,	"min180" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_LTE_t350_r12_enum2value_6[] = {
	1,	/* min10(1) */
	5,	/* min120(5) */
	6,	/* min180(6) */
	2,	/* min20(2) */
	3,	/* min30(3) */
	0,	/* min5(0) */
	4,	/* min60(4) */
	7	/* spare1(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_t350_r12_specs_6 = {
	asn_MAP_LTE_t350_r12_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_t350_r12_enum2value_6,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_t350_r12_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_t350_r12_6 = {
	"t350-r12",
	"t350-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_t350_r12_tags_6,
	sizeof(asn_DEF_LTE_t350_r12_tags_6)
		/sizeof(asn_DEF_LTE_t350_r12_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_t350_r12_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_t350_r12_tags_6)
		/sizeof(asn_DEF_LTE_t350_r12_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_t350_r12_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_t350_r12_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_setup_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionReconfiguration_v1250_IEs__wlan_OffloadInfo_r12__setup, wlan_OffloadConfigDedicated_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_WLAN_OffloadConfig_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"wlan-OffloadConfigDedicated-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_RRCConnectionReconfiguration_v1250_IEs__wlan_OffloadInfo_r12__setup, t350_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_t350_r12_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t350-r12"
		},
};
static const int asn_MAP_LTE_setup_oms_4[] = { 1 };
static const ber_tlv_tag_t asn_DEF_LTE_setup_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_setup_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* wlan-OffloadConfigDedicated-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* t350-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_setup_specs_4 = {
	sizeof(struct LTE_RRCConnectionReconfiguration_v1250_IEs__wlan_OffloadInfo_r12__setup),
	offsetof(struct LTE_RRCConnectionReconfiguration_v1250_IEs__wlan_OffloadInfo_r12__setup, _asn_ctx),
	asn_MAP_LTE_setup_tag2el_4,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_setup_oms_4,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_setup_4 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_setup_tags_4,
	sizeof(asn_DEF_LTE_setup_tags_4)
		/sizeof(asn_DEF_LTE_setup_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_setup_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_setup_tags_4)
		/sizeof(asn_DEF_LTE_setup_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_setup_4,
	2,	/* Elements count */
	&asn_SPC_LTE_setup_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_wlan_OffloadInfo_r12_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionReconfiguration_v1250_IEs__wlan_OffloadInfo_r12, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionReconfiguration_v1250_IEs__wlan_OffloadInfo_r12, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_setup_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_wlan_OffloadInfo_r12_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_wlan_OffloadInfo_r12_specs_2 = {
	sizeof(struct LTE_RRCConnectionReconfiguration_v1250_IEs__wlan_OffloadInfo_r12),
	offsetof(struct LTE_RRCConnectionReconfiguration_v1250_IEs__wlan_OffloadInfo_r12, _asn_ctx),
	offsetof(struct LTE_RRCConnectionReconfiguration_v1250_IEs__wlan_OffloadInfo_r12, present),
	sizeof(((struct LTE_RRCConnectionReconfiguration_v1250_IEs__wlan_OffloadInfo_r12 *)0)->present),
	asn_MAP_LTE_wlan_OffloadInfo_r12_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_wlan_OffloadInfo_r12_2 = {
	"wlan-OffloadInfo-r12",
	"wlan-OffloadInfo-r12",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_wlan_OffloadInfo_r12_constr_2, CHOICE_constraint },
	asn_MBR_LTE_wlan_OffloadInfo_r12_2,
	2,	/* Elements count */
	&asn_SPC_LTE_wlan_OffloadInfo_r12_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_RRCConnectionReconfiguration_v1250_IEs_1[] = {
	{ ATF_POINTER, 6, offsetof(struct LTE_RRCConnectionReconfiguration_v1250_IEs, wlan_OffloadInfo_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_wlan_OffloadInfo_r12_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"wlan-OffloadInfo-r12"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_RRCConnectionReconfiguration_v1250_IEs, scg_Configuration_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_SCG_Configuration_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scg-Configuration-r12"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_RRCConnectionReconfiguration_v1250_IEs, sl_SyncTxControl_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_SyncTxControl_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-SyncTxControl-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_RRCConnectionReconfiguration_v1250_IEs, sl_DiscConfig_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_DiscConfig_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-DiscConfig-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_RRCConnectionReconfiguration_v1250_IEs, sl_CommConfig_r12),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_CommConfig_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-CommConfig-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_RRCConnectionReconfiguration_v1250_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RRCConnectionReconfiguration_v1310_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_LTE_RRCConnectionReconfiguration_v1250_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_LTE_RRCConnectionReconfiguration_v1250_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_RRCConnectionReconfiguration_v1250_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* wlan-OffloadInfo-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* scg-Configuration-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sl-SyncTxControl-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sl-DiscConfig-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sl-CommConfig-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionReconfiguration_v1250_IEs_specs_1 = {
	sizeof(struct LTE_RRCConnectionReconfiguration_v1250_IEs),
	offsetof(struct LTE_RRCConnectionReconfiguration_v1250_IEs, _asn_ctx),
	asn_MAP_LTE_RRCConnectionReconfiguration_v1250_IEs_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_LTE_RRCConnectionReconfiguration_v1250_IEs_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionReconfiguration_v1250_IEs = {
	"RRCConnectionReconfiguration-v1250-IEs",
	"RRCConnectionReconfiguration-v1250-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_RRCConnectionReconfiguration_v1250_IEs_tags_1,
	sizeof(asn_DEF_LTE_RRCConnectionReconfiguration_v1250_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionReconfiguration_v1250_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_RRCConnectionReconfiguration_v1250_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_RRCConnectionReconfiguration_v1250_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionReconfiguration_v1250_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_RRCConnectionReconfiguration_v1250_IEs_1,
	6,	/* Elements count */
	&asn_SPC_LTE_RRCConnectionReconfiguration_v1250_IEs_specs_1	/* Additional specs */
};

