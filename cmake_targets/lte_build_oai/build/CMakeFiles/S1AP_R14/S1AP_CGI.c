/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/lixh/ue_folder/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#include "S1AP_CGI.h"

#include "S1AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_S1AP_CGI_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_CGI, pLMNidentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_PLMNidentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pLMNidentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_CGI, lAC),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_LAC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lAC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_CGI, cI),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_CI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cI"
		},
	{ ATF_POINTER, 2, offsetof(struct S1AP_CGI, rAC),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_RAC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rAC"
		},
	{ ATF_POINTER, 1, offsetof(struct S1AP_CGI, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ProtocolExtensionContainer_6628P34,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_S1AP_CGI_oms_1[] = { 3, 4 };
static const ber_tlv_tag_t asn_DEF_S1AP_CGI_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_CGI_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pLMNidentity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lAC */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cI */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rAC */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_S1AP_CGI_specs_1 = {
	sizeof(struct S1AP_CGI),
	offsetof(struct S1AP_CGI, _asn_ctx),
	asn_MAP_S1AP_CGI_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_S1AP_CGI_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_CGI = {
	"CGI",
	"CGI",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_CGI_tags_1,
	sizeof(asn_DEF_S1AP_CGI_tags_1)
		/sizeof(asn_DEF_S1AP_CGI_tags_1[0]), /* 1 */
	asn_DEF_S1AP_CGI_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_CGI_tags_1)
		/sizeof(asn_DEF_S1AP_CGI_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1AP_CGI_1,
	5,	/* Elements count */
	&asn_SPC_S1AP_CGI_specs_1	/* Additional specs */
};

