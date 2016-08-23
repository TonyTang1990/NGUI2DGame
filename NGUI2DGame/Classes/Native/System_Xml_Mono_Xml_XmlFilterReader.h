#pragma once
#include <stdint.h>
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t1485;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t1469;
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// Mono.Xml.XmlFilterReader
struct  XmlFilterReader_t1526  : public XmlReader_t843
{
	// System.Xml.XmlReader Mono.Xml.XmlFilterReader::reader
	XmlReader_t843 * ___reader_3;
	// System.Xml.XmlReaderSettings Mono.Xml.XmlFilterReader::settings
	XmlReaderSettings_t1485 * ___settings_4;
	// System.Xml.IXmlLineInfo Mono.Xml.XmlFilterReader::lineInfo
	Object_t * ___lineInfo_5;
};
