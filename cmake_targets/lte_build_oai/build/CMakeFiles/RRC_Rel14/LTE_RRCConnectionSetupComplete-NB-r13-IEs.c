/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_RRCConnectionSetupComplete-NB-r13-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_selectedPLMN_Identity_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 6)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_attachWithoutPDN_Connectivity_r13_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_up_CIoT_EPS_Optimisation_r13_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_selectedPLMN_Identity_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  6 }	/* (1..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_attachWithoutPDN_Connectivity_r13_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_attachWithoutPDN_Connectivity_r13_enum2value_6[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_attachWithoutPDN_Connectivity_r13_specs_6 = {
	asn_MAP_LTE_attachWithoutPDN_Connectivity_r13_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_attachWithoutPDN_Connectivity_r13_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_attachWithoutPDN_Connectivity_r13_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_attachWithoutPDN_Connectivity_r13_6 = {
	"attachWithoutPDN-Connectivity-r13",
	"attachWithoutPDN-Connectivity-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_attachWithoutPDN_Connectivity_r13_tags_6,
	sizeof(asn_DEF_LTE_attachWithoutPDN_Connectivity_r13_tags_6)
		/sizeof(asn_DEF_LTE_attachWithoutPDN_Connectivity_r13_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_attachWithoutPDN_Connectivity_r13_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_attachWithoutPDN_Connectivity_r13_tags_6)
		/sizeof(asn_DEF_LTE_attachWithoutPDN_Connectivity_r13_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_attachWithoutPDN_Connectivity_r13_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_attachWithoutPDN_Connectivity_r13_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_up_CIoT_EPS_Optimisation_r13_value2enum_8[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_up_CIoT_EPS_Optimisation_r13_enum2value_8[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_up_CIoT_EPS_Optimisation_r13_specs_8 = {
	asn_MAP_LTE_up_CIoT_EPS_Optimisation_r13_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_up_CIoT_EPS_Optimisation_r13_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_up_CIoT_EPS_Optimisation_r13_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_up_CIoT_EPS_Optimisation_r13_8 = {
	"up-CIoT-EPS-Optimisation-r13",
	"up-CIoT-EPS-Optimisation-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_up_CIoT_EPS_Optimisation_r13_tags_8,
	sizeof(asn_DEF_LTE_up_CIoT_EPS_Optimisation_r13_tags_8)
		/sizeof(asn_DEF_LTE_up_CIoT_EPS_Optimisation_r13_tags_8[0]) - 1, /* 1 */
	asn_DEF_LTE_up_CIoT_EPS_Optimisation_r13_tags_8,	/* Same as above */
	sizeof(asn_DEF_LTE_up_CIoT_EPS_Optimisation_r13_tags_8)
		/sizeof(asn_DEF_LTE_up_CIoT_EPS_Optimisation_r13_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_up_CIoT_EPS_Optimisation_r13_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_up_CIoT_EPS_Optimisation_r13_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_RRCConnectionSetupComplete_NB_r13_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionSetupComplete_NB_r13_IEs, selectedPLMN_Identity_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_selectedPLMN_Identity_r13_constr_2,  memb_LTE_selectedPLMN_Identity_r13_constraint_1 },
		0, 0, /* No default value */
		"selectedPLMN-Identity-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_RRCConnectionSetupComplete_NB_r13_IEs, s_TMSI_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_S_TMSI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"s-TMSI-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_RRCConnectionSetupComplete_NB_r13_IEs, registeredMME_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RegisteredMME,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"registeredMME-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionSetupComplete_NB_r13_IEs, dedicatedInfoNAS_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_DedicatedInfoNAS,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dedicatedInfoNAS-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_RRCConnectionSetupComplete_NB_r13_IEs, attachWithoutPDN_Connectivity_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_attachWithoutPDN_Connectivity_r13_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"attachWithoutPDN-Connectivity-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_RRCConnectionSetupComplete_NB_r13_IEs, up_CIoT_EPS_Optimisation_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_up_CIoT_EPS_Optimisation_r13_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"up-CIoT-EPS-Optimisation-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_RRCConnectionSetupComplete_NB_r13_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_RRCConnectionSetupComplete_NB_r13_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RRCConnectionSetupComplete_NB_v1430_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_LTE_RRCConnectionSetupComplete_NB_r13_IEs_oms_1[] = { 1, 2, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_LTE_RRCConnectionSetupComplete_NB_r13_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_RRCConnectionSetupComplete_NB_r13_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* selectedPLMN-Identity-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* s-TMSI-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* registeredMME-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* dedicatedInfoNAS-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* attachWithoutPDN-Connectivity-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* up-CIoT-EPS-Optimisation-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionSetupComplete_NB_r13_IEs_specs_1 = {
	sizeof(struct LTE_RRCConnectionSetupComplete_NB_r13_IEs),
	offsetof(struct LTE_RRCConnectionSetupComplete_NB_r13_IEs, _asn_ctx),
	asn_MAP_LTE_RRCConnectionSetupComplete_NB_r13_IEs_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_LTE_RRCConnectionSetupComplete_NB_r13_IEs_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionSetupComplete_NB_r13_IEs = {
	"RRCConnectionSetupComplete-NB-r13-IEs",
	"RRCConnectionSetupComplete-NB-r13-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_RRCConnectionSetupComplete_NB_r13_IEs_tags_1,
	sizeof(asn_DEF_LTE_RRCConnectionSetupComplete_NB_r13_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionSetupComplete_NB_r13_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_RRCConnectionSetupComplete_NB_r13_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_RRCConnectionSetupComplete_NB_r13_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionSetupComplete_NB_r13_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_RRCConnectionSetupComplete_NB_r13_IEs_1,
	8,	/* Elements count */
	&asn_SPC_LTE_RRCConnectionSetupComplete_NB_r13_IEs_specs_1	/* Additional specs */
};

