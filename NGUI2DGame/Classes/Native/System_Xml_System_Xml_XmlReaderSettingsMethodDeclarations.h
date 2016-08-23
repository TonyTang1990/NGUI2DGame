#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t1485;
// System.Xml.XmlNameTable
struct XmlNameTable_t1543;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t1102;
// System.Xml.XmlResolver
struct XmlResolver_t1520;
// System.Object
struct Object_t;
// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t1704;
// System.Xml.ConformanceLevel
#include "System_Xml_System_Xml_ConformanceLevel.h"
// System.Xml.Schema.XmlSchemaValidationFlags
#include "System_Xml_System_Xml_Schema_XmlSchemaValidationFlags.h"
// System.Xml.ValidationType
#include "System_Xml_System_Xml_ValidationType.h"

// System.Void System.Xml.XmlReaderSettings::.ctor()
extern "C" void XmlReaderSettings__ctor_m8219 (XmlReaderSettings_t1485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings System.Xml.XmlReaderSettings::Clone()
extern "C" XmlReaderSettings_t1485 * XmlReaderSettings_Clone_m8220 (XmlReaderSettings_t1485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReaderSettings::Reset()
extern "C" void XmlReaderSettings_Reset_m8221 (XmlReaderSettings_t1485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReaderSettings::get_CheckCharacters()
extern "C" bool XmlReaderSettings_get_CheckCharacters_m8222 (XmlReaderSettings_t1485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReaderSettings::get_CloseInput()
extern "C" bool XmlReaderSettings_get_CloseInput_m8223 (XmlReaderSettings_t1485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ConformanceLevel System.Xml.XmlReaderSettings::get_ConformanceLevel()
extern "C" int32_t XmlReaderSettings_get_ConformanceLevel_m8224 (XmlReaderSettings_t1485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReaderSettings::set_ConformanceLevel(System.Xml.ConformanceLevel)
extern "C" void XmlReaderSettings_set_ConformanceLevel_m8225 (XmlReaderSettings_t1485 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReaderSettings::get_IgnoreComments()
extern "C" bool XmlReaderSettings_get_IgnoreComments_m8226 (XmlReaderSettings_t1485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReaderSettings::get_IgnoreProcessingInstructions()
extern "C" bool XmlReaderSettings_get_IgnoreProcessingInstructions_m8227 (XmlReaderSettings_t1485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReaderSettings::get_IgnoreWhitespace()
extern "C" bool XmlReaderSettings_get_IgnoreWhitespace_m8228 (XmlReaderSettings_t1485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlReaderSettings::get_LineNumberOffset()
extern "C" int32_t XmlReaderSettings_get_LineNumberOffset_m8229 (XmlReaderSettings_t1485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlReaderSettings::get_LinePositionOffset()
extern "C" int32_t XmlReaderSettings_get_LinePositionOffset_m8230 (XmlReaderSettings_t1485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReaderSettings::get_ProhibitDtd()
extern "C" bool XmlReaderSettings_get_ProhibitDtd_m8231 (XmlReaderSettings_t1485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlReaderSettings::get_NameTable()
extern "C" XmlNameTable_t1543 * XmlReaderSettings_get_NameTable_m8232 (XmlReaderSettings_t1485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSet System.Xml.XmlReaderSettings::get_Schemas()
extern "C" XmlSchemaSet_t1102 * XmlReaderSettings_get_Schemas_m8233 (XmlReaderSettings_t1485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReaderSettings::OnValidationError(System.Object,System.Xml.Schema.ValidationEventArgs)
extern "C" void XmlReaderSettings_OnValidationError_m8234 (XmlReaderSettings_t1485 * __this, Object_t * ___o, ValidationEventArgs_t1704 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaValidationFlags System.Xml.XmlReaderSettings::get_ValidationFlags()
extern "C" int32_t XmlReaderSettings_get_ValidationFlags_m8235 (XmlReaderSettings_t1485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ValidationType System.Xml.XmlReaderSettings::get_ValidationType()
extern "C" int32_t XmlReaderSettings_get_ValidationType_m8236 (XmlReaderSettings_t1485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver System.Xml.XmlReaderSettings::get_XmlResolver()
extern "C" XmlResolver_t1520 * XmlReaderSettings_get_XmlResolver_m8237 (XmlReaderSettings_t1485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
