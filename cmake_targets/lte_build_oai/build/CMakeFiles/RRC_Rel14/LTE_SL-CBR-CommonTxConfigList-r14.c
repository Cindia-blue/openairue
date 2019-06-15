/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SL-CBR-CommonTxConfigList-r14.h"

static int
memb_LTE_cbr_RangeCommonConfigList_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_sl_CBR_PSSCH_TxConfigList_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 64)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_cbr_RangeCommonConfigList_r14_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_sl_CBR_PSSCH_TxConfigList_r14_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_cbr_RangeCommonConfigList_r14_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_sl_CBR_PSSCH_TxConfigList_r14_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_cbr_RangeCommonConfigList_r14_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_LTE_SL_CBR_Levels_Config_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_cbr_RangeCommonConfigList_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_LTE_cbr_RangeCommonConfigList_r14_specs_2 = {
	sizeof(struct LTE_SL_CBR_CommonTxConfigList_r14__cbr_RangeCommonConfigList_r14),
	offsetof(struct LTE_SL_CBR_CommonTxConfigList_r14__cbr_RangeCommonConfigList_r14, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_cbr_RangeCommonConfigList_r14_2 = {
	"cbr-RangeCommonConfigList-r14",
	"cbr-RangeCommonConfigList-r14",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_LTE_cbr_RangeCommonConfigList_r14_tags_2,
	sizeof(asn_DEF_LTE_cbr_RangeCommonConfigList_r14_tags_2)
		/sizeof(asn_DEF_LTE_cbr_RangeCommonConfigList_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_cbr_RangeCommonConfigList_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_cbr_RangeCommonConfigList_r14_tags_2)
		/sizeof(asn_DEF_LTE_cbr_RangeCommonConfigList_r14_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_cbr_RangeCommonConfigList_r14_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_LTE_cbr_RangeCommonConfigList_r14_2,
	1,	/* Single element */
	&asn_SPC_LTE_cbr_RangeCommonConfigList_r14_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_sl_CBR_PSSCH_TxConfigList_r14_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_LTE_SL_CBR_PSSCH_TxConfig_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_sl_CBR_PSSCH_TxConfigList_r14_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_LTE_sl_CBR_PSSCH_TxConfigList_r14_specs_4 = {
	sizeof(struct LTE_SL_CBR_CommonTxConfigList_r14__sl_CBR_PSSCH_TxConfigList_r14),
	offsetof(struct LTE_SL_CBR_CommonTxConfigList_r14__sl_CBR_PSSCH_TxConfigList_r14, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_sl_CBR_PSSCH_TxConfigList_r14_4 = {
	"sl-CBR-PSSCH-TxConfigList-r14",
	"sl-CBR-PSSCH-TxConfigList-r14",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_LTE_sl_CBR_PSSCH_TxConfigList_r14_tags_4,
	sizeof(asn_DEF_LTE_sl_CBR_PSSCH_TxConfigList_r14_tags_4)
		/sizeof(asn_DEF_LTE_sl_CBR_PSSCH_TxConfigList_r14_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_sl_CBR_PSSCH_TxConfigList_r14_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_sl_CBR_PSSCH_TxConfigList_r14_tags_4)
		/sizeof(asn_DEF_LTE_sl_CBR_PSSCH_TxConfigList_r14_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_sl_CBR_PSSCH_TxConfigList_r14_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_LTE_sl_CBR_PSSCH_TxConfigList_r14_4,
	1,	/* Single element */
	&asn_SPC_LTE_sl_CBR_PSSCH_TxConfigList_r14_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SL_CBR_CommonTxConfigList_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_CBR_CommonTxConfigList_r14, cbr_RangeCommonConfigList_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_cbr_RangeCommonConfigList_r14_2,
		0,
		{ 0, &asn_PER_memb_LTE_cbr_RangeCommonConfigList_r14_constr_2,  memb_LTE_cbr_RangeCommonConfigList_r14_constraint_1 },
		0, 0, /* No default value */
		"cbr-RangeCommonConfigList-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_CBR_CommonTxConfigList_r14, sl_CBR_PSSCH_TxConfigList_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_sl_CBR_PSSCH_TxConfigList_r14_4,
		0,
		{ 0, &asn_PER_memb_LTE_sl_CBR_PSSCH_TxConfigList_r14_constr_4,  memb_LTE_sl_CBR_PSSCH_TxConfigList_r14_constraint_1 },
		0, 0, /* No default value */
		"sl-CBR-PSSCH-TxConfigList-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_SL_CBR_CommonTxConfigList_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SL_CBR_CommonTxConfigList_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cbr-RangeCommonConfigList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* sl-CBR-PSSCH-TxConfigList-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_CBR_CommonTxConfigList_r14_specs_1 = {
	sizeof(struct LTE_SL_CBR_CommonTxConfigList_r14),
	offsetof(struct LTE_SL_CBR_CommonTxConfigList_r14, _asn_ctx),
	asn_MAP_LTE_SL_CBR_CommonTxConfigList_r14_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SL_CBR_CommonTxConfigList_r14 = {
	"SL-CBR-CommonTxConfigList-r14",
	"SL-CBR-CommonTxConfigList-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SL_CBR_CommonTxConfigList_r14_tags_1,
	sizeof(asn_DEF_LTE_SL_CBR_CommonTxConfigList_r14_tags_1)
		/sizeof(asn_DEF_LTE_SL_CBR_CommonTxConfigList_r14_tags_1[0]), /* 1 */
	asn_DEF_LTE_SL_CBR_CommonTxConfigList_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SL_CBR_CommonTxConfigList_r14_tags_1)
		/sizeof(asn_DEF_LTE_SL_CBR_CommonTxConfigList_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SL_CBR_CommonTxConfigList_r14_1,
	2,	/* Elements count */
	&asn_SPC_LTE_SL_CBR_CommonTxConfigList_r14_specs_1	/* Additional specs */
};

