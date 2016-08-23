#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchemaAttribute[]
struct XmlSchemaAttributeU5BU5D_t1488;
// System.Object
struct Object_t;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t1469;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t1478;
// System.Uri
struct Uri_t558;
// System.Xml.XmlNameTable
struct XmlNameTable_t1543;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t1102;
// System.Xml.XmlResolver
struct XmlResolver_t1520;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t1506;
// System.Collections.ArrayList
struct ArrayList_t913;
// Mono.Xml.Schema.XsdIDManager
struct XsdIDManager_t1522;
// System.Text.StringBuilder
struct StringBuilder_t294;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t1051;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1144;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Schema.XmlSchemaValidationFlags
#include "System_Xml_System_Xml_Schema_XmlSchemaValidationFlags.h"
// System.Xml.Schema.XmlSchemaValidator/Transition
#include "System_Xml_System_Xml_Schema_XmlSchemaValidator_Transition.h"
// System.Xml.Schema.XmlSchemaValidator
struct  XmlSchemaValidator_t1489  : public Object_t
{
	// System.Object System.Xml.Schema.XmlSchemaValidator::nominalEventSender
	Object_t * ___nominalEventSender_1;
	// System.Xml.IXmlLineInfo System.Xml.Schema.XmlSchemaValidator::lineInfo
	Object_t * ___lineInfo_2;
	// System.Xml.IXmlNamespaceResolver System.Xml.Schema.XmlSchemaValidator::nsResolver
	Object_t * ___nsResolver_3;
	// System.Uri System.Xml.Schema.XmlSchemaValidator::sourceUri
	Uri_t558 * ___sourceUri_4;
	// System.Xml.XmlNameTable System.Xml.Schema.XmlSchemaValidator::nameTable
	XmlNameTable_t1543 * ___nameTable_5;
	// System.Xml.Schema.XmlSchemaSet System.Xml.Schema.XmlSchemaValidator::schemas
	XmlSchemaSet_t1102 * ___schemas_6;
	// System.Xml.XmlResolver System.Xml.Schema.XmlSchemaValidator::xmlResolver
	XmlResolver_t1520 * ___xmlResolver_7;
	// System.Xml.Schema.XmlSchemaValidationFlags System.Xml.Schema.XmlSchemaValidator::options
	int32_t ___options_8;
	// System.Xml.Schema.XmlSchemaValidator/Transition System.Xml.Schema.XmlSchemaValidator::transition
	int32_t ___transition_9;
	// Mono.Xml.Schema.XsdParticleStateManager System.Xml.Schema.XmlSchemaValidator::state
	XsdParticleStateManager_t1506 * ___state_10;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchemaValidator::occuredAtts
	ArrayList_t913 * ___occuredAtts_11;
	// System.Xml.Schema.XmlSchemaAttribute[] System.Xml.Schema.XmlSchemaValidator::defaultAttributes
	XmlSchemaAttributeU5BU5D_t1488* ___defaultAttributes_12;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchemaValidator::defaultAttributesCache
	ArrayList_t913 * ___defaultAttributesCache_13;
	// Mono.Xml.Schema.XsdIDManager System.Xml.Schema.XmlSchemaValidator::idManager
	XsdIDManager_t1522 * ___idManager_14;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchemaValidator::keyTables
	ArrayList_t913 * ___keyTables_15;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchemaValidator::currentKeyFieldConsumers
	ArrayList_t913 * ___currentKeyFieldConsumers_16;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchemaValidator::tmpKeyrefPool
	ArrayList_t913 * ___tmpKeyrefPool_17;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchemaValidator::elementQNameStack
	ArrayList_t913 * ___elementQNameStack_18;
	// System.Text.StringBuilder System.Xml.Schema.XmlSchemaValidator::storedCharacters
	StringBuilder_t294 * ___storedCharacters_19;
	// System.Boolean System.Xml.Schema.XmlSchemaValidator::shouldValidateCharacters
	bool ___shouldValidateCharacters_20;
	// System.Int32 System.Xml.Schema.XmlSchemaValidator::depth
	int32_t ___depth_21;
	// System.Int32 System.Xml.Schema.XmlSchemaValidator::xsiNilDepth
	int32_t ___xsiNilDepth_22;
	// System.Int32 System.Xml.Schema.XmlSchemaValidator::skipValidationDepth
	int32_t ___skipValidationDepth_23;
	// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaValidator::CurrentAttributeType
	XmlSchemaDatatype_t1051 * ___CurrentAttributeType_24;
	// System.Xml.Schema.ValidationEventHandler System.Xml.Schema.XmlSchemaValidator::ValidationEventHandler
	ValidationEventHandler_t1144 * ___ValidationEventHandler_25;
};
struct XmlSchemaValidator_t1489_StaticFields{
	// System.Xml.Schema.XmlSchemaAttribute[] System.Xml.Schema.XmlSchemaValidator::emptyAttributeArray
	XmlSchemaAttributeU5BU5D_t1488* ___emptyAttributeArray_0;
};
