#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1146;
// System.String
struct String_t;
// System.SystemException
#include "mscorlib_System_SystemException.h"
// System.Xml.Schema.XmlSchemaException
struct  XmlSchemaException_t1703  : public SystemException_t916
{
	// System.Boolean System.Xml.Schema.XmlSchemaException::hasLineInfo
	bool ___hasLineInfo_11;
	// System.Int32 System.Xml.Schema.XmlSchemaException::lineNumber
	int32_t ___lineNumber_12;
	// System.Int32 System.Xml.Schema.XmlSchemaException::linePosition
	int32_t ___linePosition_13;
	// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaException::sourceObj
	XmlSchemaObject_t1146 * ___sourceObj_14;
	// System.String System.Xml.Schema.XmlSchemaException::sourceUri
	String_t* ___sourceUri_15;
};
