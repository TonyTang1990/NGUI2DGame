#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t1578612233;
// System.Xml.XmlNameTable
struct XmlNameTable_t1345805268;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t313318308;
// System.Object
struct Il2CppObject;
// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t1577905814;
// System.Xml.XmlResolver
struct XmlResolver_t2024571559;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_ConformanceLevel3761201363.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_Schema_ValidationEventArgs1577905814.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaValidationFla910489930.h"
#include "System_Xml_System_Xml_ValidationType1401987383.h"

// System.Void System.Xml.XmlReaderSettings::.ctor()
extern "C"  void XmlReaderSettings__ctor_m3408230456 (XmlReaderSettings_t1578612233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings System.Xml.XmlReaderSettings::Clone()
extern "C"  XmlReaderSettings_t1578612233 * XmlReaderSettings_Clone_m3744972765 (XmlReaderSettings_t1578612233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReaderSettings::Reset()
extern "C"  void XmlReaderSettings_Reset_m1401688357 (XmlReaderSettings_t1578612233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReaderSettings::get_CheckCharacters()
extern "C"  bool XmlReaderSettings_get_CheckCharacters_m3161254861 (XmlReaderSettings_t1578612233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReaderSettings::get_CloseInput()
extern "C"  bool XmlReaderSettings_get_CloseInput_m1215145045 (XmlReaderSettings_t1578612233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ConformanceLevel System.Xml.XmlReaderSettings::get_ConformanceLevel()
extern "C"  int32_t XmlReaderSettings_get_ConformanceLevel_m1232473372 (XmlReaderSettings_t1578612233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReaderSettings::set_ConformanceLevel(System.Xml.ConformanceLevel)
extern "C"  void XmlReaderSettings_set_ConformanceLevel_m3742877005 (XmlReaderSettings_t1578612233 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReaderSettings::get_IgnoreComments()
extern "C"  bool XmlReaderSettings_get_IgnoreComments_m2195284749 (XmlReaderSettings_t1578612233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReaderSettings::get_IgnoreProcessingInstructions()
extern "C"  bool XmlReaderSettings_get_IgnoreProcessingInstructions_m373233981 (XmlReaderSettings_t1578612233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReaderSettings::get_IgnoreWhitespace()
extern "C"  bool XmlReaderSettings_get_IgnoreWhitespace_m1396568062 (XmlReaderSettings_t1578612233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlReaderSettings::get_LineNumberOffset()
extern "C"  int32_t XmlReaderSettings_get_LineNumberOffset_m2782126391 (XmlReaderSettings_t1578612233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlReaderSettings::get_LinePositionOffset()
extern "C"  int32_t XmlReaderSettings_get_LinePositionOffset_m4089490053 (XmlReaderSettings_t1578612233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReaderSettings::get_ProhibitDtd()
extern "C"  bool XmlReaderSettings_get_ProhibitDtd_m3124620088 (XmlReaderSettings_t1578612233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlReaderSettings::get_NameTable()
extern "C"  XmlNameTable_t1345805268 * XmlReaderSettings_get_NameTable_m323452903 (XmlReaderSettings_t1578612233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSet System.Xml.XmlReaderSettings::get_Schemas()
extern "C"  XmlSchemaSet_t313318308 * XmlReaderSettings_get_Schemas_m2734638913 (XmlReaderSettings_t1578612233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReaderSettings::OnValidationError(System.Object,System.Xml.Schema.ValidationEventArgs)
extern "C"  void XmlReaderSettings_OnValidationError_m910384163 (XmlReaderSettings_t1578612233 * __this, Il2CppObject * ___o0, ValidationEventArgs_t1577905814 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaValidationFlags System.Xml.XmlReaderSettings::get_ValidationFlags()
extern "C"  int32_t XmlReaderSettings_get_ValidationFlags_m1352494605 (XmlReaderSettings_t1578612233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ValidationType System.Xml.XmlReaderSettings::get_ValidationType()
extern "C"  int32_t XmlReaderSettings_get_ValidationType_m2357679692 (XmlReaderSettings_t1578612233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver System.Xml.XmlReaderSettings::get_XmlResolver()
extern "C"  XmlResolver_t2024571559 * XmlReaderSettings_get_XmlResolver_m2698948878 (XmlReaderSettings_t1578612233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
