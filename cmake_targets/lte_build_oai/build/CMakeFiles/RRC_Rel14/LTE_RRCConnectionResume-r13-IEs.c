/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_RRCConnectionResume-r13-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_drb_ContinueROHC_r13_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_drb_ContinueROHC_r13_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_drb_ContinueROHC_r13_enum2value_6[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_drb_ContinueROHC_r13_specs_6 = {
	asn_MAP_LTE_drb_ContinueROHC_r13_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_drb_ContinueROHC_r13_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_drb_ContinueROHC_r13_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_drb_ContinueROHC_r13_6 = {
	"drb-ContinueROHC-r13",
	"drb-ContinueROHC-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_drb_ContinueROHC_r13_tags_6,
	sizeof(asn_DEF_LTE_drb_ContinueROHC_r13_tags_6)
		/sizeof(asn_DEF_LTE_drb_ContinueROHC_r13_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_drb_ContinueROHC_r13_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_drb_ContinueROHC_r13_tags_6)
		/sizeof(asn_DEF_LTE_drb_ContinueROHC_r13_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_drb_ContinueROHC_r13_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_drb_ContinueROHC_r13_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_RRCConnectionResume_r13_IEs_1[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_RRCConnectionResume_r13_IEs, radioResourceConfigDedicated_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RadioResourceConfigDedicated,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioResourceConfigDedicated-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionResume_r13_IEs, nextHopChainingCount_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_NextHopChainingCount,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nextHopChainingCount-r13"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_RRCConnectionResume_r13_IEs, measConfig_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MeasConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measConfig-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_RRCConnectionResume_r13_IEs, antennaInfoDedicatedPCell_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_AntennaInfoDedicated_v10i0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"antennaInfoDedicatedPCell-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_RRCConnectionResume_r13_IEs, drb_ContinueROHC_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_drb_ContinueROHC_r13_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-ContinueROHC-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_RRCConnectionResume_r13_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_RRCConnectionResume_r13_IEs, rrcConnectionResume_v1430_IEs),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RRCConnectionResume_v1430_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrcConnectionResume-v1430-IEs"
		},
};
static const int asn_MAP_LTE_RRCConnectionResume_r13_IEs_oms_1[] = { 0, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_LTE_RRCConnectionResume_r13_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_RRCConnectionResume_r13_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* radioResourceConfigDedicated-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nextHopChainingCount-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measConfig-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* antennaInfoDedicatedPCell-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* drb-ContinueROHC-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* rrcConnectionResume-v1430-IEs */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionResume_r13_IEs_specs_1 = {
	sizeof(struct LTE_RRCConnectionResume_r13_IEs),
	offsetof(struct LTE_RRCConnectionResume_r13_IEs, _asn_ctx),
	asn_MAP_LTE_RRCConnectionResume_r13_IEs_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_LTE_RRCConnectionResume_r13_IEs_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionResume_r13_IEs = {
	"RRCConnectionResume-r13-IEs",
	"RRCConnectionResume-r13-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_RRCConnectionResume_r13_IEs_tags_1,
	sizeof(asn_DEF_LTE_RRCConnectionResume_r13_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionResume_r13_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_RRCConnectionResume_r13_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_RRCConnectionResume_r13_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionResume_r13_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_RRCConnectionResume_r13_IEs_1,
	7,	/* Elements count */
	&asn_SPC_LTE_RRCConnectionResume_r13_IEs_specs_1	/* Additional specs */
};

