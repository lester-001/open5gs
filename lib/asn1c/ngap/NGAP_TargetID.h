/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r17.3.0/38413-h30.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -no-gen-JER`
 */

#ifndef	_NGAP_TargetID_H_
#define	_NGAP_TargetID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_TargetID_PR {
	NGAP_TargetID_PR_NOTHING,	/* No components present */
	NGAP_TargetID_PR_targetRANNodeID,
	NGAP_TargetID_PR_targeteNB_ID,
	NGAP_TargetID_PR_choice_Extensions
} NGAP_TargetID_PR;

/* Forward declarations */
struct NGAP_TargetRANNodeID;
struct NGAP_TargeteNB_ID;
struct NGAP_ProtocolIE_SingleContainer;

/* NGAP_TargetID */
typedef struct NGAP_TargetID {
	NGAP_TargetID_PR present;
	union NGAP_TargetID_u {
		struct NGAP_TargetRANNodeID	*targetRANNodeID;
		struct NGAP_TargeteNB_ID	*targeteNB_ID;
		struct NGAP_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_TargetID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_TargetID;
extern asn_CHOICE_specifics_t asn_SPC_NGAP_TargetID_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_TargetID_1[3];
extern asn_per_constraints_t asn_PER_type_NGAP_TargetID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_TargetID_H_ */
#include <asn_internal.h>
