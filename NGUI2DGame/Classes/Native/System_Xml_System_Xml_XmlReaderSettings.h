#pragma once
#include <stdint.h>
// System.Xml.XmlNameTable
struct XmlNameTable_t1543;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t1102;
// System.Xml.XmlResolver
struct XmlResolver_t1520;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1144;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.ConformanceLevel
#include "System_Xml_System_Xml_ConformanceLevel.h"
// System.Xml.Schema.XmlSchemaValidationFlags
#include "System_Xml_System_Xml_Schema_XmlSchemaValidationFlags.h"
// System.Xml.ValidationType
#include "System_Xml_System_Xml_ValidationType.h"
// System.Xml.XmlReaderSettings
struct  XmlReaderSettings_t1485  : public Object_t
{
	// System.Boolean System.Xml.XmlReaderSettings::checkCharacters
	bool ___checkCharacters_0;
	// System.Boolean System.Xml.XmlReaderSettings::closeInput
	bool ___closeInput_1;
	// System.Xml.ConformanceLevel System.Xml.XmlReaderSettings::conformance
	int32_t ___conformance_2;
	// System.Boolean System.Xml.XmlReaderSettings::ignoreComments
	bool ___ignoreComments_3;
	// System.Boolean System.Xml.XmlReaderSettings::ignoreProcessingInstructions
	bool ___ignoreProcessingInstructions_4;
	// System.Boolean System.Xml.XmlReaderSettings::ignoreWhitespace
	bool ___ignoreWhitespace_5;
	// System.Int32 System.Xml.XmlReaderSettings::lineNumberOffset
	int32_t ___lineNumberOffset_6;
	// System.Int32 System.Xml.XmlReaderSettings::linePositionOffset
	int32_t ___linePositionOffset_7;
	// System.Boolean System.Xml.XmlReaderSettings::prohibitDtd
	bool ___prohibitDtd_8;
	// System.Xml.XmlNameTable System.Xml.XmlReaderSettings::nameTable
	XmlNameTable_t1543 * ___nameTable_9;
	// System.Xml.Schema.XmlSchemaSet System.Xml.XmlReaderSettings::schemas
	XmlSchemaSet_t1102 * ___schemas_10;
	// System.Boolean System.Xml.XmlReaderSettings::schemasNeedsInitialization
	bool ___schemasNeedsInitialization_11;
	// System.Xml.Schema.XmlSchemaValidationFlags System.Xml.XmlReaderSettings::validationFlags
	int32_t ___validationFlags_12;
	// System.Xml.ValidationType System.Xml.XmlReaderSettings::validationType
	int32_t ___validationType_13;
	// System.Xml.XmlResolver System.Xml.XmlReaderSettings::xmlResolver
	XmlResolver_t1520 * ___xmlResolver_14;
	// System.Xml.Schema.ValidationEventHandler System.Xml.XmlReaderSettings::ValidationEventHandler
	ValidationEventHandler_t1144 * ___ValidationEventHandler_15;
};
