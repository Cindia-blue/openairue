/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_PCCH-Config-NB-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_npdcch_NumRepetitionPaging_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_npdcch_NumRepetitionPaging_r14_value2enum_2[] = {
	{ 0,	2,	"r1" },
	{ 1,	2,	"r2" },
	{ 2,	2,	"r4" },
	{ 3,	2,	"r8" },
	{ 4,	3,	"r16" },
	{ 5,	3,	"r32" },
	{ 6,	3,	"r64" },
	{ 7,	4,	"r128" },
	{ 8,	4,	"r256" },
	{ 9,	4,	"r512" },
	{ 10,	5,	"r1024" },
	{ 11,	5,	"r2048" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_LTE_npdcch_NumRepetitionPaging_r14_enum2value_2[] = {
	0,	/* r1(0) */
	10,	/* r1024(10) */
	7,	/* r128(7) */
	4,	/* r16(4) */
	1,	/* r2(1) */
	11,	/* r2048(11) */
	8,	/* r256(8) */
	5,	/* r32(5) */
	2,	/* r4(2) */
	9,	/* r512(9) */
	6,	/* r64(6) */
	3,	/* r8(3) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12	/* spare4(12) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_npdcch_NumRepetitionPaging_r14_specs_2 = {
	asn_MAP_LTE_npdcch_NumRepetitionPaging_r14_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_npdcch_NumRepetitionPaging_r14_enum2value_2,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_npdcch_NumRepetitionPaging_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_npdcch_NumRepetitionPaging_r14_2 = {
	"npdcch-NumRepetitionPaging-r14",
	"npdcch-NumRepetitionPaging-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_npdcch_NumRepetitionPaging_r14_tags_2,
	sizeof(asn_DEF_LTE_npdcch_NumRepetitionPaging_r14_tags_2)
		/sizeof(asn_DEF_LTE_npdcch_NumRepetitionPaging_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_npdcch_NumRepetitionPaging_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_npdcch_NumRepetitionPaging_r14_tags_2)
		/sizeof(asn_DEF_LTE_npdcch_NumRepetitionPaging_r14_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_npdcch_NumRepetitionPaging_r14_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_npdcch_NumRepetitionPaging_r14_specs_2	/* Additional specs */
};

static int asn_DFL_19_cmp_0(const void *sptr) {
	const LTE_PagingWeight_NB_r14_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 0 */
	return (*st != 0);
}
static int asn_DFL_19_set_0(void **sptr) {
	LTE_PagingWeight_NB_r14_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 0 */
	*st = 0;
	return 0;
}
asn_TYPE_member_t asn_MBR_LTE_PCCH_Config_NB_r14_1[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_PCCH_Config_NB_r14, npdcch_NumRepetitionPaging_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_npdcch_NumRepetitionPaging_r14_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"npdcch-NumRepetitionPaging-r14"
		},
	{ ATF_NOFLAGS, 1, offsetof(struct LTE_PCCH_Config_NB_r14, pagingWeight_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PagingWeight_NB_r14,
		0,
		{ 0, 0, 0 },
		&asn_DFL_19_cmp_0,	/* Compare DEFAULT 0 */
		&asn_DFL_19_set_0,	/* Set DEFAULT 0 */
		"pagingWeight-r14"
		},
};
static const int asn_MAP_LTE_PCCH_Config_NB_r14_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_PCCH_Config_NB_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PCCH_Config_NB_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* npdcch-NumRepetitionPaging-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* pagingWeight-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_PCCH_Config_NB_r14_specs_1 = {
	sizeof(struct LTE_PCCH_Config_NB_r14),
	offsetof(struct LTE_PCCH_Config_NB_r14, _asn_ctx),
	asn_MAP_LTE_PCCH_Config_NB_r14_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_PCCH_Config_NB_r14_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PCCH_Config_NB_r14 = {
	"PCCH-Config-NB-r14",
	"PCCH-Config-NB-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_PCCH_Config_NB_r14_tags_1,
	sizeof(asn_DEF_LTE_PCCH_Config_NB_r14_tags_1)
		/sizeof(asn_DEF_LTE_PCCH_Config_NB_r14_tags_1[0]), /* 1 */
	asn_DEF_LTE_PCCH_Config_NB_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PCCH_Config_NB_r14_tags_1)
		/sizeof(asn_DEF_LTE_PCCH_Config_NB_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_PCCH_Config_NB_r14_1,
	2,	/* Elements count */
	&asn_SPC_LTE_PCCH_Config_NB_r14_specs_1	/* Additional specs */
};
