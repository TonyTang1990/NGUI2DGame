#pragma once
#include <stdint.h>
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1144;
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// System.Xml.Schema.XmlSchemaReader
struct  XmlSchemaReader_t1762  : public XmlReader_t843
{
	// System.Xml.XmlReader System.Xml.Schema.XmlSchemaReader::reader
	XmlReader_t843 * ___reader_3;
	// System.Xml.Schema.ValidationEventHandler System.Xml.Schema.XmlSchemaReader::handler
	ValidationEventHandler_t1144 * ___handler_4;
	// System.Boolean System.Xml.Schema.XmlSchemaReader::hasLineInfo
	bool ___hasLineInfo_5;
};
