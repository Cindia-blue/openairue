/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SidelinkUEInformation-v1310-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_carrierFreqDiscTx_r13_constraint_9(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_ue_Type_r13_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_carrierFreqDiscTx_r13_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_ue_Type_r13_value2enum_6[] = {
	{ 0,	7,	"relayUE" },
	{ 1,	8,	"remoteUE" }
};
static const unsigned int asn_MAP_LTE_ue_Type_r13_enum2value_6[] = {
	0,	/* relayUE(0) */
	1	/* remoteUE(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_ue_Type_r13_specs_6 = {
	asn_MAP_LTE_ue_Type_r13_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_ue_Type_r13_enum2value_6,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_ue_Type_r13_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ue_Type_r13_6 = {
	"ue-Type-r13",
	"ue-Type-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_ue_Type_r13_tags_6,
	sizeof(asn_DEF_LTE_ue_Type_r13_tags_6)
		/sizeof(asn_DEF_LTE_ue_Type_r13_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_ue_Type_r13_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_ue_Type_r13_tags_6)
		/sizeof(asn_DEF_LTE_ue_Type_r13_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_ue_Type_r13_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_ue_Type_r13_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_commTxResourceInfoReqRelay_r13_3[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_SidelinkUEInformation_v1310_IEs__commTxResourceInfoReqRelay_r13, commTxResourceReqRelay_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_CommTxResourceReq_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"commTxResourceReqRelay-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SidelinkUEInformation_v1310_IEs__commTxResourceInfoReqRelay_r13, commTxResourceReqRelayUC_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_CommTxResourceReq_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"commTxResourceReqRelayUC-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SidelinkUEInformation_v1310_IEs__commTxResourceInfoReqRelay_r13, ue_Type_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ue_Type_r13_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-Type-r13"
		},
};
static const int asn_MAP_LTE_commTxResourceInfoReqRelay_r13_oms_3[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_commTxResourceInfoReqRelay_r13_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_commTxResourceInfoReqRelay_r13_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* commTxResourceReqRelay-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* commTxResourceReqRelayUC-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ue-Type-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_commTxResourceInfoReqRelay_r13_specs_3 = {
	sizeof(struct LTE_SidelinkUEInformation_v1310_IEs__commTxResourceInfoReqRelay_r13),
	offsetof(struct LTE_SidelinkUEInformation_v1310_IEs__commTxResourceInfoReqRelay_r13, _asn_ctx),
	asn_MAP_LTE_commTxResourceInfoReqRelay_r13_tag2el_3,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_commTxResourceInfoReqRelay_r13_oms_3,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_commTxResourceInfoReqRelay_r13_3 = {
	"commTxResourceInfoReqRelay-r13",
	"commTxResourceInfoReqRelay-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_commTxResourceInfoReqRelay_r13_tags_3,
	sizeof(asn_DEF_LTE_commTxResourceInfoReqRelay_r13_tags_3)
		/sizeof(asn_DEF_LTE_commTxResourceInfoReqRelay_r13_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_commTxResourceInfoReqRelay_r13_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_commTxResourceInfoReqRelay_r13_tags_3)
		/sizeof(asn_DEF_LTE_commTxResourceInfoReqRelay_r13_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_commTxResourceInfoReqRelay_r13_3,
	3,	/* Elements count */
	&asn_SPC_LTE_commTxResourceInfoReqRelay_r13_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_discTxResourceReq_v1310_9[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_SidelinkUEInformation_v1310_IEs__discTxResourceReq_v1310, carrierFreqDiscTx_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_carrierFreqDiscTx_r13_constr_10,  memb_LTE_carrierFreqDiscTx_r13_constraint_9 },
		0, 0, /* No default value */
		"carrierFreqDiscTx-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SidelinkUEInformation_v1310_IEs__discTxResourceReq_v1310, discTxResourceReqAddFreq_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_DiscTxResourceReqPerFreqList_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discTxResourceReqAddFreq-r13"
		},
};
static const int asn_MAP_LTE_discTxResourceReq_v1310_oms_9[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_discTxResourceReq_v1310_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_discTxResourceReq_v1310_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreqDiscTx-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* discTxResourceReqAddFreq-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_discTxResourceReq_v1310_specs_9 = {
	sizeof(struct LTE_SidelinkUEInformation_v1310_IEs__discTxResourceReq_v1310),
	offsetof(struct LTE_SidelinkUEInformation_v1310_IEs__discTxResourceReq_v1310, _asn_ctx),
	asn_MAP_LTE_discTxResourceReq_v1310_tag2el_9,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_discTxResourceReq_v1310_oms_9,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_discTxResourceReq_v1310_9 = {
	"discTxResourceReq-v1310",
	"discTxResourceReq-v1310",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_discTxResourceReq_v1310_tags_9,
	sizeof(asn_DEF_LTE_discTxResourceReq_v1310_tags_9)
		/sizeof(asn_DEF_LTE_discTxResourceReq_v1310_tags_9[0]) - 1, /* 1 */
	asn_DEF_LTE_discTxResourceReq_v1310_tags_9,	/* Same as above */
	sizeof(asn_DEF_LTE_discTxResourceReq_v1310_tags_9)
		/sizeof(asn_DEF_LTE_discTxResourceReq_v1310_tags_9[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_discTxResourceReq_v1310_9,
	2,	/* Elements count */
	&asn_SPC_LTE_discTxResourceReq_v1310_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SidelinkUEInformation_v1310_IEs_1[] = {
	{ ATF_POINTER, 8, offsetof(struct LTE_SidelinkUEInformation_v1310_IEs, commTxResourceReqUC_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_CommTxResourceReq_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"commTxResourceReqUC-r13"
		},
	{ ATF_POINTER, 7, offsetof(struct LTE_SidelinkUEInformation_v1310_IEs, commTxResourceInfoReqRelay_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_commTxResourceInfoReqRelay_r13_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"commTxResourceInfoReqRelay-r13"
		},
	{ ATF_POINTER, 6, offsetof(struct LTE_SidelinkUEInformation_v1310_IEs, discTxResourceReq_v1310),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_LTE_discTxResourceReq_v1310_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discTxResourceReq-v1310"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_SidelinkUEInformation_v1310_IEs, discTxResourceReqPS_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_DiscTxResourceReq_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discTxResourceReqPS-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_SidelinkUEInformation_v1310_IEs, discRxGapReq_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_GapRequest_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discRxGapReq-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_SidelinkUEInformation_v1310_IEs, discTxGapReq_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_GapRequest_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discTxGapReq-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SidelinkUEInformation_v1310_IEs, discSysInfoReportFreqList_r13),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_DiscSysInfoReportFreqList_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"discSysInfoReportFreqList-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SidelinkUEInformation_v1310_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SidelinkUEInformation_v1430_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_LTE_SidelinkUEInformation_v1310_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_LTE_SidelinkUEInformation_v1310_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SidelinkUEInformation_v1310_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* commTxResourceReqUC-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* commTxResourceInfoReqRelay-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* discTxResourceReq-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* discTxResourceReqPS-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* discRxGapReq-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* discTxGapReq-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* discSysInfoReportFreqList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SidelinkUEInformation_v1310_IEs_specs_1 = {
	sizeof(struct LTE_SidelinkUEInformation_v1310_IEs),
	offsetof(struct LTE_SidelinkUEInformation_v1310_IEs, _asn_ctx),
	asn_MAP_LTE_SidelinkUEInformation_v1310_IEs_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_LTE_SidelinkUEInformation_v1310_IEs_oms_1,	/* Optional members */
	8, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SidelinkUEInformation_v1310_IEs = {
	"SidelinkUEInformation-v1310-IEs",
	"SidelinkUEInformation-v1310-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SidelinkUEInformation_v1310_IEs_tags_1,
	sizeof(asn_DEF_LTE_SidelinkUEInformation_v1310_IEs_tags_1)
		/sizeof(asn_DEF_LTE_SidelinkUEInformation_v1310_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_SidelinkUEInformation_v1310_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SidelinkUEInformation_v1310_IEs_tags_1)
		/sizeof(asn_DEF_LTE_SidelinkUEInformation_v1310_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SidelinkUEInformation_v1310_IEs_1,
	8,	/* Elements count */
	&asn_SPC_LTE_SidelinkUEInformation_v1310_IEs_specs_1	/* Additional specs */
};

