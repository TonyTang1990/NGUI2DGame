#pragma once
#include <stdint.h>
// System.Xml.XmlInputStream
struct XmlInputStream_t1642;
// System.Xml.XmlException
struct XmlException_t1137;
// System.Xml.NonBlockingStreamReader
#include "System_Xml_System_Xml_NonBlockingStreamReader.h"
// System.Xml.XmlStreamReader
struct  XmlStreamReader_t1643  : public NonBlockingStreamReader_t1644
{
	// System.Xml.XmlInputStream System.Xml.XmlStreamReader::input
	XmlInputStream_t1642 * ___input_13;
};
struct XmlStreamReader_t1643_StaticFields{
	// System.Xml.XmlException System.Xml.XmlStreamReader::invalidDataException
	XmlException_t1137 * ___invalidDataException_14;
};
