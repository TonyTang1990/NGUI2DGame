#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchemaAttribute[]
struct XmlSchemaAttributeU5BU5D_t1488;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Xml.Schema.XmlSchemaValidator
struct XmlSchemaValidator_t1489;
// System.Xml.Schema.XmlValueGetter
struct XmlValueGetter_t1490;
// System.Xml.Schema.XmlSchemaInfo
struct XmlSchemaInfo_t1491;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t1469;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t1478;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t1145;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t1054;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t60;
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// System.Xml.Schema.XmlSchemaValidationFlags
#include "System_Xml_System_Xml_Schema_XmlSchemaValidationFlags.h"
// Mono.Xml.Schema.XmlSchemaValidatingReader
struct  XmlSchemaValidatingReader_t1486  : public XmlReader_t843
{
	// System.Xml.XmlReader Mono.Xml.Schema.XmlSchemaValidatingReader::reader
	XmlReader_t843 * ___reader_4;
	// System.Xml.Schema.XmlSchemaValidationFlags Mono.Xml.Schema.XmlSchemaValidatingReader::options
	int32_t ___options_5;
	// System.Xml.Schema.XmlSchemaValidator Mono.Xml.Schema.XmlSchemaValidatingReader::v
	XmlSchemaValidator_t1489 * ___v_6;
	// System.Xml.Schema.XmlValueGetter Mono.Xml.Schema.XmlSchemaValidatingReader::getter
	XmlValueGetter_t1490 * ___getter_7;
	// System.Xml.Schema.XmlSchemaInfo Mono.Xml.Schema.XmlSchemaValidatingReader::xsinfo
	XmlSchemaInfo_t1491 * ___xsinfo_8;
	// System.Xml.IXmlLineInfo Mono.Xml.Schema.XmlSchemaValidatingReader::readerLineInfo
	Object_t * ___readerLineInfo_9;
	// System.Xml.IXmlNamespaceResolver Mono.Xml.Schema.XmlSchemaValidatingReader::nsResolver
	Object_t * ___nsResolver_10;
	// System.Xml.Schema.XmlSchemaAttribute[] Mono.Xml.Schema.XmlSchemaValidatingReader::defaultAttributes
	XmlSchemaAttributeU5BU5D_t1488* ___defaultAttributes_11;
	// System.Int32 Mono.Xml.Schema.XmlSchemaValidatingReader::currentDefaultAttribute
	int32_t ___currentDefaultAttribute_12;
	// System.Collections.ArrayList Mono.Xml.Schema.XmlSchemaValidatingReader::defaultAttributesCache
	ArrayList_t913 * ___defaultAttributesCache_13;
	// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::defaultAttributeConsumed
	bool ___defaultAttributeConsumed_14;
	// System.Xml.Schema.XmlSchemaType Mono.Xml.Schema.XmlSchemaValidatingReader::currentAttrType
	XmlSchemaType_t1145 * ___currentAttrType_15;
	// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::validationDone
	bool ___validationDone_16;
	// System.Xml.Schema.XmlSchemaElement Mono.Xml.Schema.XmlSchemaValidatingReader::element
	XmlSchemaElement_t1054 * ___element_17;
};
struct XmlSchemaValidatingReader_t1486_StaticFields{
	// System.Xml.Schema.XmlSchemaAttribute[] Mono.Xml.Schema.XmlSchemaValidatingReader::emptyAttributeArray
	XmlSchemaAttributeU5BU5D_t1488* ___emptyAttributeArray_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XmlSchemaValidatingReader::<>f__switch$map0
	Dictionary_2_t60 * ___U3CU3Ef__switchU24map0_18;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XmlSchemaValidatingReader::<>f__switch$map1
	Dictionary_2_t60 * ___U3CU3Ef__switchU24map1_19;
};
