/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_R41_Source_mod.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#ifndef	_GenericSignage_H_
#define	_GenericSignage_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "ITIScodes.h"
#include "IA5String.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum item_gs_PR {
	item_gs_PR_NOTHING,	/* No components present */
	item_gs_PR_itis,
	item_gs_PR_text
} item_gs_PR;

/* GenericSignage */
typedef struct GenericSignage {
	A_SEQUENCE_OF(struct GenericSignage__Member {
		struct item_gs {
			item_gs_PR present;
			union item_gs_u {
				ITIScodes_t	 itis;
				IA5String_t	 text;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} item_gs;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GenericSignage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GenericSignage;

#ifdef __cplusplus
}
#endif

#endif	/* _GenericSignage_H_ */
#include "asn_internal.h"