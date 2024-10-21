/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -no-gen-JER`
 */

#ifndef	_S1AP_RRC_Container_H_
#define	_S1AP_RRC_Container_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* S1AP_RRC-Container */
typedef OCTET_STRING_t	 S1AP_RRC_Container_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_RRC_Container;
asn_struct_free_f S1AP_RRC_Container_free;
asn_struct_print_f S1AP_RRC_Container_print;
asn_constr_check_f S1AP_RRC_Container_constraint;
per_type_decoder_f S1AP_RRC_Container_decode_aper;
per_type_encoder_f S1AP_RRC_Container_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_RRC_Container_H_ */
#include <asn_internal.h>
