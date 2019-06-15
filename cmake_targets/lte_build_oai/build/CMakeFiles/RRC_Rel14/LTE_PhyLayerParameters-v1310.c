/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_PhyLayerParameters-v1310.h"

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
memb_LTE_maxNumberDecoding_r13_constraint_17(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

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
memb_LTE_aperiodicCSI_Reporting_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_LTE_codebook_HARQ_ACK_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_LTE_maxNumberUpdatedCSI_Proc_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 5 && value <= 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_crossCarrierScheduling_B5C_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_fdd_HARQ_TimingTDD_r13_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_pucch_Format4_r13_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_pucch_Format5_r13_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_pucch_SCell_r13_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_spatialBundling_HARQ_ACK_r13_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_pdcch_CandidateReductions_r13_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_skipMonitoringDCI_Format0_1A_r13_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_maxNumberDecoding_r13_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (1..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_uci_PUSCH_Ext_r13_constr_23 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_crs_InterfMitigationTM10_r13_constr_25 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_pdsch_CollisionHandling_r13_constr_27 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_aperiodicCSI_Reporting_r13_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_codebook_HARQ_ACK_r13_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_maxNumberUpdatedCSI_Proc_r13_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  5,  32 }	/* (5..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_crossCarrierScheduling_B5C_r13_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_crossCarrierScheduling_B5C_r13_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_crossCarrierScheduling_B5C_r13_specs_4 = {
	asn_MAP_LTE_crossCarrierScheduling_B5C_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_crossCarrierScheduling_B5C_r13_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_crossCarrierScheduling_B5C_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_crossCarrierScheduling_B5C_r13_4 = {
	"crossCarrierScheduling-B5C-r13",
	"crossCarrierScheduling-B5C-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_crossCarrierScheduling_B5C_r13_tags_4,
	sizeof(asn_DEF_LTE_crossCarrierScheduling_B5C_r13_tags_4)
		/sizeof(asn_DEF_LTE_crossCarrierScheduling_B5C_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_crossCarrierScheduling_B5C_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_crossCarrierScheduling_B5C_r13_tags_4)
		/sizeof(asn_DEF_LTE_crossCarrierScheduling_B5C_r13_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_crossCarrierScheduling_B5C_r13_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_crossCarrierScheduling_B5C_r13_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_fdd_HARQ_TimingTDD_r13_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_fdd_HARQ_TimingTDD_r13_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_fdd_HARQ_TimingTDD_r13_specs_6 = {
	asn_MAP_LTE_fdd_HARQ_TimingTDD_r13_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_fdd_HARQ_TimingTDD_r13_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_fdd_HARQ_TimingTDD_r13_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_fdd_HARQ_TimingTDD_r13_6 = {
	"fdd-HARQ-TimingTDD-r13",
	"fdd-HARQ-TimingTDD-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_fdd_HARQ_TimingTDD_r13_tags_6,
	sizeof(asn_DEF_LTE_fdd_HARQ_TimingTDD_r13_tags_6)
		/sizeof(asn_DEF_LTE_fdd_HARQ_TimingTDD_r13_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_fdd_HARQ_TimingTDD_r13_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_fdd_HARQ_TimingTDD_r13_tags_6)
		/sizeof(asn_DEF_LTE_fdd_HARQ_TimingTDD_r13_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_fdd_HARQ_TimingTDD_r13_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_fdd_HARQ_TimingTDD_r13_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_pucch_Format4_r13_value2enum_9[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_pucch_Format4_r13_enum2value_9[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_pucch_Format4_r13_specs_9 = {
	asn_MAP_LTE_pucch_Format4_r13_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_pucch_Format4_r13_enum2value_9,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_pucch_Format4_r13_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_pucch_Format4_r13_9 = {
	"pucch-Format4-r13",
	"pucch-Format4-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_pucch_Format4_r13_tags_9,
	sizeof(asn_DEF_LTE_pucch_Format4_r13_tags_9)
		/sizeof(asn_DEF_LTE_pucch_Format4_r13_tags_9[0]) - 1, /* 1 */
	asn_DEF_LTE_pucch_Format4_r13_tags_9,	/* Same as above */
	sizeof(asn_DEF_LTE_pucch_Format4_r13_tags_9)
		/sizeof(asn_DEF_LTE_pucch_Format4_r13_tags_9[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_pucch_Format4_r13_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_pucch_Format4_r13_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_pucch_Format5_r13_value2enum_11[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_pucch_Format5_r13_enum2value_11[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_pucch_Format5_r13_specs_11 = {
	asn_MAP_LTE_pucch_Format5_r13_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_pucch_Format5_r13_enum2value_11,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_pucch_Format5_r13_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_pucch_Format5_r13_11 = {
	"pucch-Format5-r13",
	"pucch-Format5-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_pucch_Format5_r13_tags_11,
	sizeof(asn_DEF_LTE_pucch_Format5_r13_tags_11)
		/sizeof(asn_DEF_LTE_pucch_Format5_r13_tags_11[0]) - 1, /* 1 */
	asn_DEF_LTE_pucch_Format5_r13_tags_11,	/* Same as above */
	sizeof(asn_DEF_LTE_pucch_Format5_r13_tags_11)
		/sizeof(asn_DEF_LTE_pucch_Format5_r13_tags_11[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_pucch_Format5_r13_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_pucch_Format5_r13_specs_11	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_pucch_SCell_r13_value2enum_13[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_pucch_SCell_r13_enum2value_13[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_pucch_SCell_r13_specs_13 = {
	asn_MAP_LTE_pucch_SCell_r13_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_pucch_SCell_r13_enum2value_13,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_pucch_SCell_r13_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_pucch_SCell_r13_13 = {
	"pucch-SCell-r13",
	"pucch-SCell-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_pucch_SCell_r13_tags_13,
	sizeof(asn_DEF_LTE_pucch_SCell_r13_tags_13)
		/sizeof(asn_DEF_LTE_pucch_SCell_r13_tags_13[0]) - 1, /* 1 */
	asn_DEF_LTE_pucch_SCell_r13_tags_13,	/* Same as above */
	sizeof(asn_DEF_LTE_pucch_SCell_r13_tags_13)
		/sizeof(asn_DEF_LTE_pucch_SCell_r13_tags_13[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_pucch_SCell_r13_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_pucch_SCell_r13_specs_13	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_spatialBundling_HARQ_ACK_r13_value2enum_15[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_spatialBundling_HARQ_ACK_r13_enum2value_15[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_spatialBundling_HARQ_ACK_r13_specs_15 = {
	asn_MAP_LTE_spatialBundling_HARQ_ACK_r13_value2enum_15,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_spatialBundling_HARQ_ACK_r13_enum2value_15,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_spatialBundling_HARQ_ACK_r13_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_spatialBundling_HARQ_ACK_r13_15 = {
	"spatialBundling-HARQ-ACK-r13",
	"spatialBundling-HARQ-ACK-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_spatialBundling_HARQ_ACK_r13_tags_15,
	sizeof(asn_DEF_LTE_spatialBundling_HARQ_ACK_r13_tags_15)
		/sizeof(asn_DEF_LTE_spatialBundling_HARQ_ACK_r13_tags_15[0]) - 1, /* 1 */
	asn_DEF_LTE_spatialBundling_HARQ_ACK_r13_tags_15,	/* Same as above */
	sizeof(asn_DEF_LTE_spatialBundling_HARQ_ACK_r13_tags_15)
		/sizeof(asn_DEF_LTE_spatialBundling_HARQ_ACK_r13_tags_15[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_spatialBundling_HARQ_ACK_r13_constr_15, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_spatialBundling_HARQ_ACK_r13_specs_15	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_pdcch_CandidateReductions_r13_value2enum_19[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_pdcch_CandidateReductions_r13_enum2value_19[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_pdcch_CandidateReductions_r13_specs_19 = {
	asn_MAP_LTE_pdcch_CandidateReductions_r13_value2enum_19,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_pdcch_CandidateReductions_r13_enum2value_19,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_pdcch_CandidateReductions_r13_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_pdcch_CandidateReductions_r13_19 = {
	"pdcch-CandidateReductions-r13",
	"pdcch-CandidateReductions-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_pdcch_CandidateReductions_r13_tags_19,
	sizeof(asn_DEF_LTE_pdcch_CandidateReductions_r13_tags_19)
		/sizeof(asn_DEF_LTE_pdcch_CandidateReductions_r13_tags_19[0]) - 1, /* 1 */
	asn_DEF_LTE_pdcch_CandidateReductions_r13_tags_19,	/* Same as above */
	sizeof(asn_DEF_LTE_pdcch_CandidateReductions_r13_tags_19)
		/sizeof(asn_DEF_LTE_pdcch_CandidateReductions_r13_tags_19[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_pdcch_CandidateReductions_r13_constr_19, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_pdcch_CandidateReductions_r13_specs_19	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_skipMonitoringDCI_Format0_1A_r13_value2enum_21[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_skipMonitoringDCI_Format0_1A_r13_enum2value_21[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_skipMonitoringDCI_Format0_1A_r13_specs_21 = {
	asn_MAP_LTE_skipMonitoringDCI_Format0_1A_r13_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_skipMonitoringDCI_Format0_1A_r13_enum2value_21,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_skipMonitoringDCI_Format0_1A_r13_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_skipMonitoringDCI_Format0_1A_r13_21 = {
	"skipMonitoringDCI-Format0-1A-r13",
	"skipMonitoringDCI-Format0-1A-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_skipMonitoringDCI_Format0_1A_r13_tags_21,
	sizeof(asn_DEF_LTE_skipMonitoringDCI_Format0_1A_r13_tags_21)
		/sizeof(asn_DEF_LTE_skipMonitoringDCI_Format0_1A_r13_tags_21[0]) - 1, /* 1 */
	asn_DEF_LTE_skipMonitoringDCI_Format0_1A_r13_tags_21,	/* Same as above */
	sizeof(asn_DEF_LTE_skipMonitoringDCI_Format0_1A_r13_tags_21)
		/sizeof(asn_DEF_LTE_skipMonitoringDCI_Format0_1A_r13_tags_21[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_skipMonitoringDCI_Format0_1A_r13_constr_21, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_skipMonitoringDCI_Format0_1A_r13_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_supportedBlindDecoding_r13_17[] = {
	{ ATF_POINTER, 3, offsetof(struct LTE_PhyLayerParameters_v1310__supportedBlindDecoding_r13, maxNumberDecoding_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_maxNumberDecoding_r13_constr_18,  memb_LTE_maxNumberDecoding_r13_constraint_17 },
		0, 0, /* No default value */
		"maxNumberDecoding-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_PhyLayerParameters_v1310__supportedBlindDecoding_r13, pdcch_CandidateReductions_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_pdcch_CandidateReductions_r13_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcch-CandidateReductions-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_PhyLayerParameters_v1310__supportedBlindDecoding_r13, skipMonitoringDCI_Format0_1A_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_skipMonitoringDCI_Format0_1A_r13_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"skipMonitoringDCI-Format0-1A-r13"
		},
};
static const int asn_MAP_LTE_supportedBlindDecoding_r13_oms_17[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_supportedBlindDecoding_r13_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_supportedBlindDecoding_r13_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxNumberDecoding-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pdcch-CandidateReductions-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* skipMonitoringDCI-Format0-1A-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_supportedBlindDecoding_r13_specs_17 = {
	sizeof(struct LTE_PhyLayerParameters_v1310__supportedBlindDecoding_r13),
	offsetof(struct LTE_PhyLayerParameters_v1310__supportedBlindDecoding_r13, _asn_ctx),
	asn_MAP_LTE_supportedBlindDecoding_r13_tag2el_17,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_supportedBlindDecoding_r13_oms_17,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_supportedBlindDecoding_r13_17 = {
	"supportedBlindDecoding-r13",
	"supportedBlindDecoding-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_supportedBlindDecoding_r13_tags_17,
	sizeof(asn_DEF_LTE_supportedBlindDecoding_r13_tags_17)
		/sizeof(asn_DEF_LTE_supportedBlindDecoding_r13_tags_17[0]) - 1, /* 1 */
	asn_DEF_LTE_supportedBlindDecoding_r13_tags_17,	/* Same as above */
	sizeof(asn_DEF_LTE_supportedBlindDecoding_r13_tags_17)
		/sizeof(asn_DEF_LTE_supportedBlindDecoding_r13_tags_17[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_supportedBlindDecoding_r13_17,
	3,	/* Elements count */
	&asn_SPC_LTE_supportedBlindDecoding_r13_specs_17	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_uci_PUSCH_Ext_r13_value2enum_23[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_uci_PUSCH_Ext_r13_enum2value_23[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_uci_PUSCH_Ext_r13_specs_23 = {
	asn_MAP_LTE_uci_PUSCH_Ext_r13_value2enum_23,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_uci_PUSCH_Ext_r13_enum2value_23,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_uci_PUSCH_Ext_r13_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_uci_PUSCH_Ext_r13_23 = {
	"uci-PUSCH-Ext-r13",
	"uci-PUSCH-Ext-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_uci_PUSCH_Ext_r13_tags_23,
	sizeof(asn_DEF_LTE_uci_PUSCH_Ext_r13_tags_23)
		/sizeof(asn_DEF_LTE_uci_PUSCH_Ext_r13_tags_23[0]) - 1, /* 1 */
	asn_DEF_LTE_uci_PUSCH_Ext_r13_tags_23,	/* Same as above */
	sizeof(asn_DEF_LTE_uci_PUSCH_Ext_r13_tags_23)
		/sizeof(asn_DEF_LTE_uci_PUSCH_Ext_r13_tags_23[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_uci_PUSCH_Ext_r13_constr_23, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_uci_PUSCH_Ext_r13_specs_23	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_crs_InterfMitigationTM10_r13_value2enum_25[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_crs_InterfMitigationTM10_r13_enum2value_25[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_crs_InterfMitigationTM10_r13_specs_25 = {
	asn_MAP_LTE_crs_InterfMitigationTM10_r13_value2enum_25,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_crs_InterfMitigationTM10_r13_enum2value_25,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_crs_InterfMitigationTM10_r13_tags_25[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_crs_InterfMitigationTM10_r13_25 = {
	"crs-InterfMitigationTM10-r13",
	"crs-InterfMitigationTM10-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_crs_InterfMitigationTM10_r13_tags_25,
	sizeof(asn_DEF_LTE_crs_InterfMitigationTM10_r13_tags_25)
		/sizeof(asn_DEF_LTE_crs_InterfMitigationTM10_r13_tags_25[0]) - 1, /* 1 */
	asn_DEF_LTE_crs_InterfMitigationTM10_r13_tags_25,	/* Same as above */
	sizeof(asn_DEF_LTE_crs_InterfMitigationTM10_r13_tags_25)
		/sizeof(asn_DEF_LTE_crs_InterfMitigationTM10_r13_tags_25[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_crs_InterfMitigationTM10_r13_constr_25, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_crs_InterfMitigationTM10_r13_specs_25	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_pdsch_CollisionHandling_r13_value2enum_27[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_pdsch_CollisionHandling_r13_enum2value_27[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_pdsch_CollisionHandling_r13_specs_27 = {
	asn_MAP_LTE_pdsch_CollisionHandling_r13_value2enum_27,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_pdsch_CollisionHandling_r13_enum2value_27,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_pdsch_CollisionHandling_r13_tags_27[] = {
	(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_pdsch_CollisionHandling_r13_27 = {
	"pdsch-CollisionHandling-r13",
	"pdsch-CollisionHandling-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_pdsch_CollisionHandling_r13_tags_27,
	sizeof(asn_DEF_LTE_pdsch_CollisionHandling_r13_tags_27)
		/sizeof(asn_DEF_LTE_pdsch_CollisionHandling_r13_tags_27[0]) - 1, /* 1 */
	asn_DEF_LTE_pdsch_CollisionHandling_r13_tags_27,	/* Same as above */
	sizeof(asn_DEF_LTE_pdsch_CollisionHandling_r13_tags_27)
		/sizeof(asn_DEF_LTE_pdsch_CollisionHandling_r13_tags_27[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_pdsch_CollisionHandling_r13_constr_27, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_pdsch_CollisionHandling_r13_specs_27	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_PhyLayerParameters_v1310_1[] = {
	{ ATF_POINTER, 13, offsetof(struct LTE_PhyLayerParameters_v1310, aperiodicCSI_Reporting_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_aperiodicCSI_Reporting_r13_constr_2,  memb_LTE_aperiodicCSI_Reporting_r13_constraint_1 },
		0, 0, /* No default value */
		"aperiodicCSI-Reporting-r13"
		},
	{ ATF_POINTER, 12, offsetof(struct LTE_PhyLayerParameters_v1310, codebook_HARQ_ACK_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_codebook_HARQ_ACK_r13_constr_3,  memb_LTE_codebook_HARQ_ACK_r13_constraint_1 },
		0, 0, /* No default value */
		"codebook-HARQ-ACK-r13"
		},
	{ ATF_POINTER, 11, offsetof(struct LTE_PhyLayerParameters_v1310, crossCarrierScheduling_B5C_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_crossCarrierScheduling_B5C_r13_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"crossCarrierScheduling-B5C-r13"
		},
	{ ATF_POINTER, 10, offsetof(struct LTE_PhyLayerParameters_v1310, fdd_HARQ_TimingTDD_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_fdd_HARQ_TimingTDD_r13_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd-HARQ-TimingTDD-r13"
		},
	{ ATF_POINTER, 9, offsetof(struct LTE_PhyLayerParameters_v1310, maxNumberUpdatedCSI_Proc_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_maxNumberUpdatedCSI_Proc_r13_constr_8,  memb_LTE_maxNumberUpdatedCSI_Proc_r13_constraint_1 },
		0, 0, /* No default value */
		"maxNumberUpdatedCSI-Proc-r13"
		},
	{ ATF_POINTER, 8, offsetof(struct LTE_PhyLayerParameters_v1310, pucch_Format4_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_pucch_Format4_r13_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pucch-Format4-r13"
		},
	{ ATF_POINTER, 7, offsetof(struct LTE_PhyLayerParameters_v1310, pucch_Format5_r13),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_pucch_Format5_r13_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pucch-Format5-r13"
		},
	{ ATF_POINTER, 6, offsetof(struct LTE_PhyLayerParameters_v1310, pucch_SCell_r13),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_pucch_SCell_r13_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pucch-SCell-r13"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_PhyLayerParameters_v1310, spatialBundling_HARQ_ACK_r13),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_spatialBundling_HARQ_ACK_r13_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spatialBundling-HARQ-ACK-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_PhyLayerParameters_v1310, supportedBlindDecoding_r13),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		0,
		&asn_DEF_LTE_supportedBlindDecoding_r13_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBlindDecoding-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_PhyLayerParameters_v1310, uci_PUSCH_Ext_r13),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_uci_PUSCH_Ext_r13_23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uci-PUSCH-Ext-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_PhyLayerParameters_v1310, crs_InterfMitigationTM10_r13),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_crs_InterfMitigationTM10_r13_25,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"crs-InterfMitigationTM10-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_PhyLayerParameters_v1310, pdsch_CollisionHandling_r13),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_pdsch_CollisionHandling_r13_27,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-CollisionHandling-r13"
		},
};
static const int asn_MAP_LTE_PhyLayerParameters_v1310_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
static const ber_tlv_tag_t asn_DEF_LTE_PhyLayerParameters_v1310_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PhyLayerParameters_v1310_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* aperiodicCSI-Reporting-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* codebook-HARQ-ACK-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* crossCarrierScheduling-B5C-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* fdd-HARQ-TimingTDD-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* maxNumberUpdatedCSI-Proc-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* pucch-Format4-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* pucch-Format5-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* pucch-SCell-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* spatialBundling-HARQ-ACK-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* supportedBlindDecoding-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* uci-PUSCH-Ext-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* crs-InterfMitigationTM10-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 } /* pdsch-CollisionHandling-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_PhyLayerParameters_v1310_specs_1 = {
	sizeof(struct LTE_PhyLayerParameters_v1310),
	offsetof(struct LTE_PhyLayerParameters_v1310, _asn_ctx),
	asn_MAP_LTE_PhyLayerParameters_v1310_tag2el_1,
	13,	/* Count of tags in the map */
	asn_MAP_LTE_PhyLayerParameters_v1310_oms_1,	/* Optional members */
	13, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PhyLayerParameters_v1310 = {
	"PhyLayerParameters-v1310",
	"PhyLayerParameters-v1310",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_PhyLayerParameters_v1310_tags_1,
	sizeof(asn_DEF_LTE_PhyLayerParameters_v1310_tags_1)
		/sizeof(asn_DEF_LTE_PhyLayerParameters_v1310_tags_1[0]), /* 1 */
	asn_DEF_LTE_PhyLayerParameters_v1310_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PhyLayerParameters_v1310_tags_1)
		/sizeof(asn_DEF_LTE_PhyLayerParameters_v1310_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_PhyLayerParameters_v1310_1,
	13,	/* Elements count */
	&asn_SPC_LTE_PhyLayerParameters_v1310_specs_1	/* Additional specs */
};

