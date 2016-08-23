#pragma once
#include <stdint.h>
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Xml.XmlNodeReaderImpl
struct XmlNodeReaderImpl_t1611;
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// System.Xml.XmlNodeReader
struct  XmlNodeReader_t1125  : public XmlReader_t843
{
	// System.Xml.XmlReader System.Xml.XmlNodeReader::entity
	XmlReader_t843 * ___entity_3;
	// System.Xml.XmlNodeReaderImpl System.Xml.XmlNodeReader::source
	XmlNodeReaderImpl_t1611 * ___source_4;
	// System.Boolean System.Xml.XmlNodeReader::entityInsideAttribute
	bool ___entityInsideAttribute_5;
	// System.Boolean System.Xml.XmlNodeReader::insideAttribute
	bool ___insideAttribute_6;
};
