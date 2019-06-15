/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_PhyLayerParameters-v1250.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_tdd_FDD_CA_PCellDuplex_r12_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 2)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_e_HARQ_Pattern_FDD_r12_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_enhanced_4TxCodebook_r12_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_phy_TDD_ReConfig_TDD_PCell_r12_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_phy_TDD_ReConfig_FDD_PCell_r12_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_pusch_FeedbackMode_r12_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_pusch_SRS_PowerControl_SubframeSet_r12_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_csi_SubframeSet_r12_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_noResourceRestrictionForTTIBundling_r12_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_discoverySignalsInDeactSCell_r12_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_tdd_FDD_CA_PCellDuplex_r12_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_e_HARQ_Pattern_FDD_r12_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_e_HARQ_Pattern_FDD_r12_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_e_HARQ_Pattern_FDD_r12_specs_2 = {
	asn_MAP_LTE_e_HARQ_Pattern_FDD_r12_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_e_HARQ_Pattern_FDD_r12_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_e_HARQ_Pattern_FDD_r12_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_e_HARQ_Pattern_FDD_r12_2 = {
	"e-HARQ-Pattern-FDD-r12",
	"e-HARQ-Pattern-FDD-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_e_HARQ_Pattern_FDD_r12_tags_2,
	sizeof(asn_DEF_LTE_e_HARQ_Pattern_FDD_r12_tags_2)
		/sizeof(asn_DEF_LTE_e_HARQ_Pattern_FDD_r12_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_e_HARQ_Pattern_FDD_r12_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_e_HARQ_Pattern_FDD_r12_tags_2)
		/sizeof(asn_DEF_LTE_e_HARQ_Pattern_FDD_r12_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_e_HARQ_Pattern_FDD_r12_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_e_HARQ_Pattern_FDD_r12_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_enhanced_4TxCodebook_r12_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_enhanced_4TxCodebook_r12_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_enhanced_4TxCodebook_r12_specs_4 = {
	asn_MAP_LTE_enhanced_4TxCodebook_r12_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_enhanced_4TxCodebook_r12_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_enhanced_4TxCodebook_r12_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_enhanced_4TxCodebook_r12_4 = {
	"enhanced-4TxCodebook-r12",
	"enhanced-4TxCodebook-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_enhanced_4TxCodebook_r12_tags_4,
	sizeof(asn_DEF_LTE_enhanced_4TxCodebook_r12_tags_4)
		/sizeof(asn_DEF_LTE_enhanced_4TxCodebook_r12_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_enhanced_4TxCodebook_r12_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_enhanced_4TxCodebook_r12_tags_4)
		/sizeof(asn_DEF_LTE_enhanced_4TxCodebook_r12_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_enhanced_4TxCodebook_r12_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_enhanced_4TxCodebook_r12_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_phy_TDD_ReConfig_TDD_PCell_r12_value2enum_7[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_phy_TDD_ReConfig_TDD_PCell_r12_enum2value_7[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_phy_TDD_ReConfig_TDD_PCell_r12_specs_7 = {
	asn_MAP_LTE_phy_TDD_ReConfig_TDD_PCell_r12_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_phy_TDD_ReConfig_TDD_PCell_r12_enum2value_7,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_phy_TDD_ReConfig_TDD_PCell_r12_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_phy_TDD_ReConfig_TDD_PCell_r12_7 = {
	"phy-TDD-ReConfig-TDD-PCell-r12",
	"phy-TDD-ReConfig-TDD-PCell-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_phy_TDD_ReConfig_TDD_PCell_r12_tags_7,
	sizeof(asn_DEF_LTE_phy_TDD_ReConfig_TDD_PCell_r12_tags_7)
		/sizeof(asn_DEF_LTE_phy_TDD_ReConfig_TDD_PCell_r12_tags_7[0]) - 1, /* 1 */
	asn_DEF_LTE_phy_TDD_ReConfig_TDD_PCell_r12_tags_7,	/* Same as above */
	sizeof(asn_DEF_LTE_phy_TDD_ReConfig_TDD_PCell_r12_tags_7)
		/sizeof(asn_DEF_LTE_phy_TDD_ReConfig_TDD_PCell_r12_tags_7[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_phy_TDD_ReConfig_TDD_PCell_r12_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_phy_TDD_ReConfig_TDD_PCell_r12_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_phy_TDD_ReConfig_FDD_PCell_r12_value2enum_9[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_phy_TDD_ReConfig_FDD_PCell_r12_enum2value_9[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_phy_TDD_ReConfig_FDD_PCell_r12_specs_9 = {
	asn_MAP_LTE_phy_TDD_ReConfig_FDD_PCell_r12_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_phy_TDD_ReConfig_FDD_PCell_r12_enum2value_9,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_phy_TDD_ReConfig_FDD_PCell_r12_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_phy_TDD_ReConfig_FDD_PCell_r12_9 = {
	"phy-TDD-ReConfig-FDD-PCell-r12",
	"phy-TDD-ReConfig-FDD-PCell-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_phy_TDD_ReConfig_FDD_PCell_r12_tags_9,
	sizeof(asn_DEF_LTE_phy_TDD_ReConfig_FDD_PCell_r12_tags_9)
		/sizeof(asn_DEF_LTE_phy_TDD_ReConfig_FDD_PCell_r12_tags_9[0]) - 1, /* 1 */
	asn_DEF_LTE_phy_TDD_ReConfig_FDD_PCell_r12_tags_9,	/* Same as above */
	sizeof(asn_DEF_LTE_phy_TDD_ReConfig_FDD_PCell_r12_tags_9)
		/sizeof(asn_DEF_LTE_phy_TDD_ReConfig_FDD_PCell_r12_tags_9[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_phy_TDD_ReConfig_FDD_PCell_r12_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_phy_TDD_ReConfig_FDD_PCell_r12_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_pusch_FeedbackMode_r12_value2enum_11[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_pusch_FeedbackMode_r12_enum2value_11[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_pusch_FeedbackMode_r12_specs_11 = {
	asn_MAP_LTE_pusch_FeedbackMode_r12_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_pusch_FeedbackMode_r12_enum2value_11,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_pusch_FeedbackMode_r12_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_pusch_FeedbackMode_r12_11 = {
	"pusch-FeedbackMode-r12",
	"pusch-FeedbackMode-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_pusch_FeedbackMode_r12_tags_11,
	sizeof(asn_DEF_LTE_pusch_FeedbackMode_r12_tags_11)
		/sizeof(asn_DEF_LTE_pusch_FeedbackMode_r12_tags_11[0]) - 1, /* 1 */
	asn_DEF_LTE_pusch_FeedbackMode_r12_tags_11,	/* Same as above */
	sizeof(asn_DEF_LTE_pusch_FeedbackMode_r12_tags_11)
		/sizeof(asn_DEF_LTE_pusch_FeedbackMode_r12_tags_11[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_pusch_FeedbackMode_r12_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_pusch_FeedbackMode_r12_specs_11	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_pusch_SRS_PowerControl_SubframeSet_r12_value2enum_13[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_pusch_SRS_PowerControl_SubframeSet_r12_enum2value_13[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_pusch_SRS_PowerControl_SubframeSet_r12_specs_13 = {
	asn_MAP_LTE_pusch_SRS_PowerControl_SubframeSet_r12_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_pusch_SRS_PowerControl_SubframeSet_r12_enum2value_13,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_pusch_SRS_PowerControl_SubframeSet_r12_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_pusch_SRS_PowerControl_SubframeSet_r12_13 = {
	"pusch-SRS-PowerControl-SubframeSet-r12",
	"pusch-SRS-PowerControl-SubframeSet-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_pusch_SRS_PowerControl_SubframeSet_r12_tags_13,
	sizeof(asn_DEF_LTE_pusch_SRS_PowerControl_SubframeSet_r12_tags_13)
		/sizeof(asn_DEF_LTE_pusch_SRS_PowerControl_SubframeSet_r12_tags_13[0]) - 1, /* 1 */
	asn_DEF_LTE_pusch_SRS_PowerControl_SubframeSet_r12_tags_13,	/* Same as above */
	sizeof(asn_DEF_LTE_pusch_SRS_PowerControl_SubframeSet_r12_tags_13)
		/sizeof(asn_DEF_LTE_pusch_SRS_PowerControl_SubframeSet_r12_tags_13[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_pusch_SRS_PowerControl_SubframeSet_r12_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_pusch_SRS_PowerControl_SubframeSet_r12_specs_13	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_csi_SubframeSet_r12_value2enum_15[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_csi_SubframeSet_r12_enum2value_15[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_csi_SubframeSet_r12_specs_15 = {
	asn_MAP_LTE_csi_SubframeSet_r12_value2enum_15,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_csi_SubframeSet_r12_enum2value_15,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_csi_SubframeSet_r12_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_csi_SubframeSet_r12_15 = {
	"csi-SubframeSet-r12",
	"csi-SubframeSet-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_csi_SubframeSet_r12_tags_15,
	sizeof(asn_DEF_LTE_csi_SubframeSet_r12_tags_15)
		/sizeof(asn_DEF_LTE_csi_SubframeSet_r12_tags_15[0]) - 1, /* 1 */
	asn_DEF_LTE_csi_SubframeSet_r12_tags_15,	/* Same as above */
	sizeof(asn_DEF_LTE_csi_SubframeSet_r12_tags_15)
		/sizeof(asn_DEF_LTE_csi_SubframeSet_r12_tags_15[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_csi_SubframeSet_r12_constr_15, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_csi_SubframeSet_r12_specs_15	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_noResourceRestrictionForTTIBundling_r12_value2enum_17[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_noResourceRestrictionForTTIBundling_r12_enum2value_17[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_noResourceRestrictionForTTIBundling_r12_specs_17 = {
	asn_MAP_LTE_noResourceRestrictionForTTIBundling_r12_value2enum_17,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_noResourceRestrictionForTTIBundling_r12_enum2value_17,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_noResourceRestrictionForTTIBundling_r12_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_noResourceRestrictionForTTIBundling_r12_17 = {
	"noResourceRestrictionForTTIBundling-r12",
	"noResourceRestrictionForTTIBundling-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_noResourceRestrictionForTTIBundling_r12_tags_17,
	sizeof(asn_DEF_LTE_noResourceRestrictionForTTIBundling_r12_tags_17)
		/sizeof(asn_DEF_LTE_noResourceRestrictionForTTIBundling_r12_tags_17[0]) - 1, /* 1 */
	asn_DEF_LTE_noResourceRestrictionForTTIBundling_r12_tags_17,	/* Same as above */
	sizeof(asn_DEF_LTE_noResourceRestrictionForTTIBundling_r12_tags_17)
		/sizeof(asn_DEF_LTE_noResourceRestrictionForTTIBundling_r12_tags_17[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_noResourceRestrictionForTTIBundling_r12_constr_17, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_noResourceRestrictionForTTIBundling_r12_specs_17	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_discoverySignalsInDeactSCell_r12_value2enum_19[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_discoverySignalsInDeactSCell_r12_enum2value_19[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_discoverySignalsInDeactSCell_r12_specs_19 = {
	asn_MAP_LTE_discoverySignalsInDeactSCell_r12_value2enum_19,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_discoverySignalsInDeactSCell_r12_enum2value_19,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_discoverySignalsInDeactSCell_r12_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_discoverySignalsInDeactSCell_r12_19 = {
	"discoverySignalsInDeactSCell-r12",
	"discoverySignalsInDeactSCell-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_discoverySignalsInDeactSCell_r12_tags_19,
	sizeof(asn_DEF_LTE_discoverySignalsInDeactSCell_r12_tags_19)
		/sizeof(asn_DEF_LTE_discoverySignalsInDeactSCell_r12_tags_19[0]) - 1, /* 1 */
	asn_DEF_LTE_discoverySignalsInDeactSCell_r12_tags_19,	/* Same as above */
	sizeof(asn_DEF_LTE_discoverySignalsInDeactSCell_r12_tags_19)
		/sizeof(asn_DEF_LTE_discoverySignalsInDeactSCell_r12_tags_19[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_discoverySignalsInDeactSCell_r12_constr_19, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_discoverySignalsInDeactSCell_r12_specs_19	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_PhyLayerParameters_v1250_1[] = {
	{ ATF_POINTER, 11, offsetof(struct LTE_PhyLayerParameters_v1250, e_HARQ_Pattern_FDD_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_e_HARQ_Pattern_FDD_r12_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-HARQ-Pattern-FDD-r12"
		},
	{ ATF_POINTER, 10, offsetof(struct LTE_PhyLayerParameters_v1250, enhanced_4TxCodebook_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_enhanced_4TxCodebook_r12_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"enhanced-4TxCodebook-r12"
		},
	{ ATF_POINTER, 9, offsetof(struct LTE_PhyLayerParameters_v1250, tdd_FDD_CA_PCellDuplex_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_tdd_FDD_CA_PCellDuplex_r12_constr_6,  memb_LTE_tdd_FDD_CA_PCellDuplex_r12_constraint_1 },
		0, 0, /* No default value */
		"tdd-FDD-CA-PCellDuplex-r12"
		},
	{ ATF_POINTER, 8, offsetof(struct LTE_PhyLayerParameters_v1250, phy_TDD_ReConfig_TDD_PCell_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_phy_TDD_ReConfig_TDD_PCell_r12_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phy-TDD-ReConfig-TDD-PCell-r12"
		},
	{ ATF_POINTER, 7, offsetof(struct LTE_PhyLayerParameters_v1250, phy_TDD_ReConfig_FDD_PCell_r12),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_phy_TDD_ReConfig_FDD_PCell_r12_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phy-TDD-ReConfig-FDD-PCell-r12"
		},
	{ ATF_POINTER, 6, offsetof(struct LTE_PhyLayerParameters_v1250, pusch_FeedbackMode_r12),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_pusch_FeedbackMode_r12_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pusch-FeedbackMode-r12"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_PhyLayerParameters_v1250, pusch_SRS_PowerControl_SubframeSet_r12),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_pusch_SRS_PowerControl_SubframeSet_r12_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pusch-SRS-PowerControl-SubframeSet-r12"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_PhyLayerParameters_v1250, csi_SubframeSet_r12),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_csi_SubframeSet_r12_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-SubframeSet-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_PhyLayerParameters_v1250, noResourceRestrictionForTTIBundling_r12),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_noResourceRestrictionForTTIBundling_r12_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"noResourceRestrictionForTTIBundling-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_PhyLayerParameters_v1250, discoverySignalsInDeactSCell_r12),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_discoverySignalsInDeactSCell_r12_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discoverySignalsInDeactSCell-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_PhyLayerParameters_v1250, naics_Capability_List_r12),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_NAICS_Capability_List_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"naics-Capability-List-r12"
		},
};
static const int asn_MAP_LTE_PhyLayerParameters_v1250_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
static const ber_tlv_tag_t asn_DEF_LTE_PhyLayerParameters_v1250_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PhyLayerParameters_v1250_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e-HARQ-Pattern-FDD-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* enhanced-4TxCodebook-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* tdd-FDD-CA-PCellDuplex-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* phy-TDD-ReConfig-TDD-PCell-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* phy-TDD-ReConfig-FDD-PCell-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* pusch-FeedbackMode-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* pusch-SRS-PowerControl-SubframeSet-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* csi-SubframeSet-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* noResourceRestrictionForTTIBundling-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* discoverySignalsInDeactSCell-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 } /* naics-Capability-List-r12 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_PhyLayerParameters_v1250_specs_1 = {
	sizeof(struct LTE_PhyLayerParameters_v1250),
	offsetof(struct LTE_PhyLayerParameters_v1250, _asn_ctx),
	asn_MAP_LTE_PhyLayerParameters_v1250_tag2el_1,
	11,	/* Count of tags in the map */
	asn_MAP_LTE_PhyLayerParameters_v1250_oms_1,	/* Optional members */
	11, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PhyLayerParameters_v1250 = {
	"PhyLayerParameters-v1250",
	"PhyLayerParameters-v1250",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_PhyLayerParameters_v1250_tags_1,
	sizeof(asn_DEF_LTE_PhyLayerParameters_v1250_tags_1)
		/sizeof(asn_DEF_LTE_PhyLayerParameters_v1250_tags_1[0]), /* 1 */
	asn_DEF_LTE_PhyLayerParameters_v1250_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PhyLayerParameters_v1250_tags_1)
		/sizeof(asn_DEF_LTE_PhyLayerParameters_v1250_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_PhyLayerParameters_v1250_1,
	11,	/* Elements count */
	&asn_SPC_LTE_PhyLayerParameters_v1250_specs_1	/* Additional specs */
};

