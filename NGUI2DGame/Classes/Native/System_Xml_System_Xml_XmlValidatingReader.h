#pragma once
#include <stdint.h>
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Xml.XmlTextReader
struct XmlTextReader_t1121;
// System.Xml.XmlResolver
struct XmlResolver_t1520;
// System.Xml.Schema.XmlSchemaCollection
struct XmlSchemaCollection_t1635;
// Mono.Xml.DTDValidatingReader
struct DTDValidatingReader_t1570;
// Mono.Xml.IHasXmlSchemaInfo
struct IHasXmlSchemaInfo_t1521;
// System.Text.StringBuilder
struct StringBuilder_t294;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1144;
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// System.Xml.EntityHandling
#include "System_Xml_System_Xml_EntityHandling.h"
// System.Xml.ValidationType
#include "System_Xml_System_Xml_ValidationType.h"
// System.Xml.XmlValidatingReader
struct  XmlValidatingReader_t1567  : public XmlReader_t843
{
	// System.Xml.EntityHandling System.Xml.XmlValidatingReader::entityHandling
	int32_t ___entityHandling_3;
	// System.Xml.XmlReader System.Xml.XmlValidatingReader::sourceReader
	XmlReader_t843 * ___sourceReader_4;
	// System.Xml.XmlTextReader System.Xml.XmlValidatingReader::xmlTextReader
	XmlTextReader_t1121 * ___xmlTextReader_5;
	// System.Xml.XmlReader System.Xml.XmlValidatingReader::validatingReader
	XmlReader_t843 * ___validatingReader_6;
	// System.Xml.XmlResolver System.Xml.XmlValidatingReader::resolver
	XmlResolver_t1520 * ___resolver_7;
	// System.Boolean System.Xml.XmlValidatingReader::resolverSpecified
	bool ___resolverSpecified_8;
	// System.Xml.ValidationType System.Xml.XmlValidatingReader::validationType
	int32_t ___validationType_9;
	// System.Xml.Schema.XmlSchemaCollection System.Xml.XmlValidatingReader::schemas
	XmlSchemaCollection_t1635 * ___schemas_10;
	// Mono.Xml.DTDValidatingReader System.Xml.XmlValidatingReader::dtdReader
	DTDValidatingReader_t1570 * ___dtdReader_11;
	// Mono.Xml.IHasXmlSchemaInfo System.Xml.XmlValidatingReader::schemaInfo
	Object_t * ___schemaInfo_12;
	// System.Text.StringBuilder System.Xml.XmlValidatingReader::storedCharacters
	StringBuilder_t294 * ___storedCharacters_13;
	// System.Xml.Schema.ValidationEventHandler System.Xml.XmlValidatingReader::ValidationEventHandler
	ValidationEventHandler_t1144 * ___ValidationEventHandler_14;
};
