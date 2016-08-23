#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Xml.Serialization.XmlElementAttribute
struct  XmlElementAttribute_t1772  : public Attribute_t478
{
	// System.String System.Xml.Serialization.XmlElementAttribute::elementName
	String_t* ___elementName_0;
	// System.Type System.Xml.Serialization.XmlElementAttribute::type
	Type_t * ___type_1;
	// System.Int32 System.Xml.Serialization.XmlElementAttribute::order
	int32_t ___order_2;
};
