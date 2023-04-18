/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r17.3.0/38413-h30.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_CellIDListForRestart_H_
#define	_NGAP_CellIDListForRestart_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_CellIDListForRestart_PR {
	NGAP_CellIDListForRestart_PR_NOTHING,	/* No components present */
	NGAP_CellIDListForRestart_PR_eUTRA_CGIListforRestart,
	NGAP_CellIDListForRestart_PR_nR_CGIListforRestart,
	NGAP_CellIDListForRestart_PR_choice_Extensions
} NGAP_CellIDListForRestart_PR;

/* Forward declarations */
struct NGAP_EUTRA_CGIList;
struct NGAP_NR_CGIList;
struct NGAP_ProtocolIE_SingleContainer;

/* NGAP_CellIDListForRestart */
typedef struct NGAP_CellIDListForRestart {
	NGAP_CellIDListForRestart_PR present;
	union NGAP_CellIDListForRestart_u {
		struct NGAP_EUTRA_CGIList	*eUTRA_CGIListforRestart;
		struct NGAP_NR_CGIList	*nR_CGIListforRestart;
		struct NGAP_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_CellIDListForRestart_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_CellIDListForRestart;
extern asn_CHOICE_specifics_t asn_SPC_NGAP_CellIDListForRestart_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_CellIDListForRestart_1[3];
extern asn_per_constraints_t asn_PER_type_NGAP_CellIDListForRestart_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_CellIDListForRestart_H_ */
#include <asn_internal.h>
