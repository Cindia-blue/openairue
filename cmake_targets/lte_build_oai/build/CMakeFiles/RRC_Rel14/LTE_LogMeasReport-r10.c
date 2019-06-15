/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_LogMeasReport-r10.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_traceRecordingSessionRef_r10_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
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
memb_LTE_tce_Id_r10_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_logMeasAvailable_r10_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_traceRecordingSessionRef_r10_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_tce_Id_r10_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  1,  1 }	/* (SIZE(1..1)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_logMeasAvailable_r10_value2enum_7[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_logMeasAvailable_r10_enum2value_7[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_logMeasAvailable_r10_specs_7 = {
	asn_MAP_LTE_logMeasAvailable_r10_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_logMeasAvailable_r10_enum2value_7,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_logMeasAvailable_r10_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_logMeasAvailable_r10_7 = {
	"logMeasAvailable-r10",
	"logMeasAvailable-r10",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_logMeasAvailable_r10_tags_7,
	sizeof(asn_DEF_LTE_logMeasAvailable_r10_tags_7)
		/sizeof(asn_DEF_LTE_logMeasAvailable_r10_tags_7[0]) - 1, /* 1 */
	asn_DEF_LTE_logMeasAvailable_r10_tags_7,	/* Same as above */
	sizeof(asn_DEF_LTE_logMeasAvailable_r10_tags_7)
		/sizeof(asn_DEF_LTE_logMeasAvailable_r10_tags_7[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_logMeasAvailable_r10_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_logMeasAvailable_r10_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_LogMeasReport_r10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_LogMeasReport_r10, absoluteTimeStamp_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_AbsoluteTimeInfo_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"absoluteTimeStamp-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_LogMeasReport_r10, traceReference_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_TraceReference_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"traceReference-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_LogMeasReport_r10, traceRecordingSessionRef_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_traceRecordingSessionRef_r10_constr_4,  memb_LTE_traceRecordingSessionRef_r10_constraint_1 },
		0, 0, /* No default value */
		"traceRecordingSessionRef-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_LogMeasReport_r10, tce_Id_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_tce_Id_r10_constr_5,  memb_LTE_tce_Id_r10_constraint_1 },
		0, 0, /* No default value */
		"tce-Id-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_LogMeasReport_r10, logMeasInfoList_r10),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_LogMeasInfoList_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logMeasInfoList-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_LogMeasReport_r10, logMeasAvailable_r10),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_logMeasAvailable_r10_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logMeasAvailable-r10"
		},
};
static const int asn_MAP_LTE_LogMeasReport_r10_oms_1[] = { 5 };
static const ber_tlv_tag_t asn_DEF_LTE_LogMeasReport_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_LogMeasReport_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* absoluteTimeStamp-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* traceReference-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* traceRecordingSessionRef-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* tce-Id-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* logMeasInfoList-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* logMeasAvailable-r10 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_LogMeasReport_r10_specs_1 = {
	sizeof(struct LTE_LogMeasReport_r10),
	offsetof(struct LTE_LogMeasReport_r10, _asn_ctx),
	asn_MAP_LTE_LogMeasReport_r10_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_LTE_LogMeasReport_r10_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_LogMeasReport_r10 = {
	"LogMeasReport-r10",
	"LogMeasReport-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_LogMeasReport_r10_tags_1,
	sizeof(asn_DEF_LTE_LogMeasReport_r10_tags_1)
		/sizeof(asn_DEF_LTE_LogMeasReport_r10_tags_1[0]), /* 1 */
	asn_DEF_LTE_LogMeasReport_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_LogMeasReport_r10_tags_1)
		/sizeof(asn_DEF_LTE_LogMeasReport_r10_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_LogMeasReport_r10_1,
	6,	/* Elements count */
	&asn_SPC_LTE_LogMeasReport_r10_specs_1	/* Additional specs */
};

