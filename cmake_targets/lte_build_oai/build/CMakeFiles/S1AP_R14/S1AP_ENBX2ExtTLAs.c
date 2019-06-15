/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/lixh/ue_folder/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#include "S1AP_ENBX2ExtTLAs.h"

#include "S1AP_ENBX2ExtTLA.h"
static asn_per_constraints_t asn_PER_type_S1AP_ENBX2ExtTLAs_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_S1AP_ENBX2ExtTLAs_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_S1AP_ENBX2ExtTLA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_S1AP_ENBX2ExtTLAs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_S1AP_ENBX2ExtTLAs_specs_1 = {
	sizeof(struct S1AP_ENBX2ExtTLAs),
	offsetof(struct S1AP_ENBX2ExtTLAs, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_ENBX2ExtTLAs = {
	"ENBX2ExtTLAs",
	"ENBX2ExtTLAs",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_S1AP_ENBX2ExtTLAs_tags_1,
	sizeof(asn_DEF_S1AP_ENBX2ExtTLAs_tags_1)
		/sizeof(asn_DEF_S1AP_ENBX2ExtTLAs_tags_1[0]), /* 1 */
	asn_DEF_S1AP_ENBX2ExtTLAs_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_ENBX2ExtTLAs_tags_1)
		/sizeof(asn_DEF_S1AP_ENBX2ExtTLAs_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_S1AP_ENBX2ExtTLAs_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_S1AP_ENBX2ExtTLAs_1,
	1,	/* Single element */
	&asn_SPC_S1AP_ENBX2ExtTLAs_specs_1	/* Additional specs */
};

