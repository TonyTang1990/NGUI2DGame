#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Xml.Serialization.XmlRootAttribute
struct  XmlRootAttribute_t1184  : public Attribute_t478
{
	// System.String System.Xml.Serialization.XmlRootAttribute::elementName
	String_t* ___elementName_0;
	// System.Boolean System.Xml.Serialization.XmlRootAttribute::isNullable
	bool ___isNullable_1;
	// System.String System.Xml.Serialization.XmlRootAttribute::ns
	String_t* ___ns_2;
};
