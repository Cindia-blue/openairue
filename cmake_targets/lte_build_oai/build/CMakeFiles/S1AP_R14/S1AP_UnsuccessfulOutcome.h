/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Descriptions"
 * 	found in "/home/lixh/ue_folder/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_UnsuccessfulOutcome_H_
#define	_S1AP_UnsuccessfulOutcome_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_ProcedureCode.h"
#include "S1AP_Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include "S1AP_HandoverRequired.h"
#include "S1AP_HandoverCommand.h"
#include "S1AP_HandoverPreparationFailure.h"
#include "S1AP_HandoverRequest.h"
#include "S1AP_HandoverRequestAcknowledge.h"
#include "S1AP_HandoverFailure.h"
#include "S1AP_PathSwitchRequest.h"
#include "S1AP_PathSwitchRequestAcknowledge.h"
#include "S1AP_PathSwitchRequestFailure.h"
#include "S1AP_E-RABSetupRequest.h"
#include "S1AP_E-RABSetupResponse.h"
#include "S1AP_E-RABModifyRequest.h"
#include "S1AP_E-RABModifyResponse.h"
#include "S1AP_E-RABReleaseCommand.h"
#include "S1AP_E-RABReleaseResponse.h"
#include "S1AP_InitialContextSetupRequest.h"
#include "S1AP_InitialContextSetupResponse.h"
#include "S1AP_InitialContextSetupFailure.h"
#include "S1AP_HandoverCancel.h"
#include "S1AP_HandoverCancelAcknowledge.h"
#include "S1AP_KillRequest.h"
#include "S1AP_KillResponse.h"
#include "S1AP_Reset.h"
#include "S1AP_ResetAcknowledge.h"
#include "S1AP_S1SetupRequest.h"
#include "S1AP_S1SetupResponse.h"
#include "S1AP_S1SetupFailure.h"
#include "S1AP_UEContextModificationRequest.h"
#include "S1AP_UEContextModificationResponse.h"
#include "S1AP_UEContextModificationFailure.h"
#include "S1AP_UEContextReleaseCommand.h"
#include "S1AP_UEContextReleaseComplete.h"
#include "S1AP_ENBConfigurationUpdate.h"
#include "S1AP_ENBConfigurationUpdateAcknowledge.h"
#include "S1AP_ENBConfigurationUpdateFailure.h"
#include "S1AP_MMEConfigurationUpdate.h"
#include "S1AP_MMEConfigurationUpdateAcknowledge.h"
#include "S1AP_MMEConfigurationUpdateFailure.h"
#include "S1AP_WriteReplaceWarningRequest.h"
#include "S1AP_WriteReplaceWarningResponse.h"
#include "S1AP_UERadioCapabilityMatchRequest.h"
#include "S1AP_UERadioCapabilityMatchResponse.h"
#include "S1AP_E-RABModificationIndication.h"
#include "S1AP_E-RABModificationConfirm.h"
#include "S1AP_UEContextModificationIndication.h"
#include "S1AP_UEContextModificationConfirm.h"
#include "S1AP_UEContextSuspendRequest.h"
#include "S1AP_UEContextSuspendResponse.h"
#include "S1AP_UEContextResumeRequest.h"
#include "S1AP_UEContextResumeResponse.h"
#include "S1AP_UEContextResumeFailure.h"
#include "S1AP_HandoverNotify.h"
#include "S1AP_E-RABReleaseIndication.h"
#include "S1AP_Paging.h"
#include "S1AP_DownlinkNASTransport.h"
#include "S1AP_InitialUEMessage.h"
#include "S1AP_UplinkNASTransport.h"
#include "S1AP_ErrorIndication.h"
#include "S1AP_NASNonDeliveryIndication.h"
#include "S1AP_UEContextReleaseRequest.h"
#include "S1AP_DownlinkS1cdma2000tunnelling.h"
#include "S1AP_UplinkS1cdma2000tunnelling.h"
#include "S1AP_UECapabilityInfoIndication.h"
#include "S1AP_ENBStatusTransfer.h"
#include "S1AP_MMEStatusTransfer.h"
#include "S1AP_DeactivateTrace.h"
#include "S1AP_TraceStart.h"
#include "S1AP_TraceFailureIndication.h"
#include "S1AP_CellTrafficTrace.h"
#include "S1AP_LocationReportingControl.h"
#include "S1AP_LocationReportingFailureIndication.h"
#include "S1AP_LocationReport.h"
#include "S1AP_OverloadStart.h"
#include "S1AP_OverloadStop.h"
#include "S1AP_ENBDirectInformationTransfer.h"
#include "S1AP_MMEDirectInformationTransfer.h"
#include "S1AP_ENBConfigurationTransfer.h"
#include "S1AP_MMEConfigurationTransfer.h"
#include "S1AP_PrivateMessage.h"
#include "S1AP_DownlinkUEAssociatedLPPaTransport.h"
#include "S1AP_UplinkUEAssociatedLPPaTransport.h"
#include "S1AP_DownlinkNonUEAssociatedLPPaTransport.h"
#include "S1AP_UplinkNonUEAssociatedLPPaTransport.h"
#include "S1AP_PWSRestartIndication.h"
#include "S1AP_RerouteNASRequest.h"
#include "S1AP_PWSFailureIndication.h"
#include "S1AP_ConnectionEstablishmentIndication.h"
#include "S1AP_NASDeliveryIndication.h"
#include "S1AP_RetrieveUEInformation.h"
#include "S1AP_UEInformationTransfer.h"
#include "S1AP_ENBCPRelocationIndication.h"
#include "S1AP_MMECPRelocationIndication.h"
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_UnsuccessfulOutcome__value_PR {
	S1AP_UnsuccessfulOutcome__value_PR_NOTHING,	/* No components present */
	S1AP_UnsuccessfulOutcome__value_PR_HandoverPreparationFailure,
	S1AP_UnsuccessfulOutcome__value_PR_HandoverFailure,
	S1AP_UnsuccessfulOutcome__value_PR_PathSwitchRequestFailure,
	S1AP_UnsuccessfulOutcome__value_PR_InitialContextSetupFailure,
	S1AP_UnsuccessfulOutcome__value_PR_S1SetupFailure,
	S1AP_UnsuccessfulOutcome__value_PR_UEContextModificationFailure,
	S1AP_UnsuccessfulOutcome__value_PR_ENBConfigurationUpdateFailure,
	S1AP_UnsuccessfulOutcome__value_PR_MMEConfigurationUpdateFailure,
	S1AP_UnsuccessfulOutcome__value_PR_UEContextResumeFailure
} S1AP_UnsuccessfulOutcome__value_PR;

/* S1AP_UnsuccessfulOutcome */
typedef struct S1AP_UnsuccessfulOutcome {
	S1AP_ProcedureCode_t	 procedureCode;
	S1AP_Criticality_t	 criticality;
	struct S1AP_UnsuccessfulOutcome__value {
		S1AP_UnsuccessfulOutcome__value_PR present;
		union S1AP_UnsuccessfulOutcome__S1AP_value_u {
			S1AP_HandoverPreparationFailure_t	 HandoverPreparationFailure;
			S1AP_HandoverFailure_t	 HandoverFailure;
			S1AP_PathSwitchRequestFailure_t	 PathSwitchRequestFailure;
			S1AP_InitialContextSetupFailure_t	 InitialContextSetupFailure;
			S1AP_S1SetupFailure_t	 S1SetupFailure;
			S1AP_UEContextModificationFailure_t	 UEContextModificationFailure;
			S1AP_ENBConfigurationUpdateFailure_t	 ENBConfigurationUpdateFailure;
			S1AP_MMEConfigurationUpdateFailure_t	 MMEConfigurationUpdateFailure;
			S1AP_UEContextResumeFailure_t	 UEContextResumeFailure;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_UnsuccessfulOutcome_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_UnsuccessfulOutcome;
extern asn_SEQUENCE_specifics_t asn_SPC_S1AP_UnsuccessfulOutcome_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_UnsuccessfulOutcome_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_UnsuccessfulOutcome_H_ */
#include <asn_internal.h>
