#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t985;
// System.Xml.Schema.XmlSchemaAnnotated
#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotated.h"
// System.Xml.Schema.XmlSchemaNotation
struct  XmlSchemaNotation_t1737  : public XmlSchemaAnnotated_t1108
{
	// System.String System.Xml.Schema.XmlSchemaNotation::name
	String_t* ___name_16;
	// System.String System.Xml.Schema.XmlSchemaNotation::pub
	String_t* ___pub_17;
	// System.String System.Xml.Schema.XmlSchemaNotation::system
	String_t* ___system_18;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaNotation::qualifiedName
	XmlQualifiedName_t985 * ___qualifiedName_19;
};
