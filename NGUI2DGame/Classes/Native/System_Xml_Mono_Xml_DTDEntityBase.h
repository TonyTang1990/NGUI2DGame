#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Uri
struct Uri_t558;
// System.Xml.XmlResolver
struct XmlResolver_t1520;
// Mono.Xml.DTDNode
#include "System_Xml_Mono_Xml_DTDNode.h"
// Mono.Xml.DTDEntityBase
struct  DTDEntityBase_t1556  : public DTDNode_t1544
{
	// System.String Mono.Xml.DTDEntityBase::name
	String_t* ___name_5;
	// System.String Mono.Xml.DTDEntityBase::publicId
	String_t* ___publicId_6;
	// System.String Mono.Xml.DTDEntityBase::systemId
	String_t* ___systemId_7;
	// System.String Mono.Xml.DTDEntityBase::literalValue
	String_t* ___literalValue_8;
	// System.String Mono.Xml.DTDEntityBase::replacementText
	String_t* ___replacementText_9;
	// System.String Mono.Xml.DTDEntityBase::uriString
	String_t* ___uriString_10;
	// System.Uri Mono.Xml.DTDEntityBase::absUri
	Uri_t558 * ___absUri_11;
	// System.Boolean Mono.Xml.DTDEntityBase::isInvalid
	bool ___isInvalid_12;
	// System.Boolean Mono.Xml.DTDEntityBase::loadFailed
	bool ___loadFailed_13;
	// System.Xml.XmlResolver Mono.Xml.DTDEntityBase::resolver
	XmlResolver_t1520 * ___resolver_14;
};
