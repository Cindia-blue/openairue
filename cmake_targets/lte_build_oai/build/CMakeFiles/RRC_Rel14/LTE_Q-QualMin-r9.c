/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/lixh/ue_folder/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "LTE_Q-QualMin-r9.h"

int
LTE_Q_QualMin_r9_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -34 && value <= -3)) {
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
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_LTE_Q_QualMin_r9_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5, -34, -3 }	/* (-34..-3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_LTE_Q_QualMin_r9_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LTE_Q_QualMin_r9 = {
	"Q-QualMin-r9",
	"Q-QualMin-r9",
	&asn_OP_NativeInteger,
	asn_DEF_LTE_Q_QualMin_r9_tags_1,
	sizeof(asn_DEF_LTE_Q_QualMin_r9_tags_1)
		/sizeof(asn_DEF_LTE_Q_QualMin_r9_tags_1[0]), /* 1 */
	asn_DEF_LTE_Q_QualMin_r9_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_Q_QualMin_r9_tags_1)
		/sizeof(asn_DEF_LTE_Q_QualMin_r9_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_LTE_Q_QualMin_r9_constr_1, LTE_Q_QualMin_r9_constraint },
	0, 0,	/* No members */
	0	/* No specifics */
};

