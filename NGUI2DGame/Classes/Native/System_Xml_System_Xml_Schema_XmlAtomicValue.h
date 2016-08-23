#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t1145;
// System.Xml.XPath.XPathItem
#include "System_Xml_System_Xml_XPath_XPathItem.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Xml.Schema.XmlTypeCode
#include "System_Xml_System_Xml_Schema_XmlTypeCode.h"
// System.Xml.Schema.XmlAtomicValue
struct  XmlAtomicValue_t1705  : public XPathItem_t1647
{
	// System.Boolean System.Xml.Schema.XmlAtomicValue::booleanValue
	bool ___booleanValue_0;
	// System.DateTime System.Xml.Schema.XmlAtomicValue::dateTimeValue
	DateTime_t445  ___dateTimeValue_1;
	// System.Decimal System.Xml.Schema.XmlAtomicValue::decimalValue
	Decimal_t698  ___decimalValue_2;
	// System.Double System.Xml.Schema.XmlAtomicValue::doubleValue
	double ___doubleValue_3;
	// System.Int32 System.Xml.Schema.XmlAtomicValue::intValue
	int32_t ___intValue_4;
	// System.Int64 System.Xml.Schema.XmlAtomicValue::longValue
	int64_t ___longValue_5;
	// System.Object System.Xml.Schema.XmlAtomicValue::objectValue
	Object_t * ___objectValue_6;
	// System.Single System.Xml.Schema.XmlAtomicValue::floatValue
	float ___floatValue_7;
	// System.String System.Xml.Schema.XmlAtomicValue::stringValue
	String_t* ___stringValue_8;
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlAtomicValue::schemaType
	XmlSchemaType_t1145 * ___schemaType_9;
	// System.Xml.Schema.XmlTypeCode System.Xml.Schema.XmlAtomicValue::xmlTypeCode
	int32_t ___xmlTypeCode_10;
};
