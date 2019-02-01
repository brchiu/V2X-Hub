/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_R41_Source_mod.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#include "ConnectionManeuverAssist.h"

static asn_TYPE_member_t asn_MBR_ConnectionManeuverAssist_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ConnectionManeuverAssist, connectionID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LaneConnectionID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"connectionID"
		},
	{ ATF_POINTER, 5, offsetof(struct ConnectionManeuverAssist, queueLength),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ZoneLength,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"queueLength"
		},
	{ ATF_POINTER, 4, offsetof(struct ConnectionManeuverAssist, availableStorageLength),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ZoneLength,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"availableStorageLength"
		},
	{ ATF_POINTER, 3, offsetof(struct ConnectionManeuverAssist, waitOnStop),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WaitOnStopline,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"waitOnStop"
		},
	{ ATF_POINTER, 2, offsetof(struct ConnectionManeuverAssist, pedBicycleDetect),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PedestrianBicycleDetect,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pedBicycleDetect"
		},
	{ ATF_POINTER, 1, offsetof(struct ConnectionManeuverAssist, regional),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RegionalConnectionManeuverAssist,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"regional"
		},
};
static int asn_MAP_ConnectionManeuverAssist_oms_1[] = { 1, 2, 3, 4, 5 };
static ber_tlv_tag_t asn_DEF_ConnectionManeuverAssist_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ConnectionManeuverAssist_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* connectionID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* queueLength */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* availableStorageLength */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* waitOnStop */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* pedBicycleDetect */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* regional */
};
static asn_SEQUENCE_specifics_t asn_SPC_ConnectionManeuverAssist_specs_1 = {
	sizeof(struct ConnectionManeuverAssist),
	offsetof(struct ConnectionManeuverAssist, _asn_ctx),
	asn_MAP_ConnectionManeuverAssist_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_ConnectionManeuverAssist_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	5,	/* Start extensions */
	7	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ConnectionManeuverAssist = {
	"ConnectionManeuverAssist",
	"ConnectionManeuverAssist",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ConnectionManeuverAssist_tags_1,
	sizeof(asn_DEF_ConnectionManeuverAssist_tags_1)
		/sizeof(asn_DEF_ConnectionManeuverAssist_tags_1[0]), /* 1 */
	asn_DEF_ConnectionManeuverAssist_tags_1,	/* Same as above */
	sizeof(asn_DEF_ConnectionManeuverAssist_tags_1)
		/sizeof(asn_DEF_ConnectionManeuverAssist_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ConnectionManeuverAssist_1,
	6,	/* Elements count */
	&asn_SPC_ConnectionManeuverAssist_specs_1	/* Additional specs */
};
