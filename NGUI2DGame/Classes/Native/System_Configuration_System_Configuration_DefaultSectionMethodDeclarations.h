#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.DefaultSection
struct DefaultSection_t1444;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1412;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1416;
// System.String
struct String_t;
// System.Configuration.ConfigurationSaveMode
#include "System_Configuration_System_Configuration_ConfigurationSaveM.h"

// System.Void System.Configuration.DefaultSection::.ctor()
extern "C" void DefaultSection__ctor_m6733 (DefaultSection_t1444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultSection::.cctor()
extern "C" void DefaultSection__cctor_m6734 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultSection::DeserializeSection(System.Xml.XmlReader)
extern "C" void DefaultSection_DeserializeSection_m6735 (DefaultSection_t1444 * __this, XmlReader_t843 * ___xmlReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.DefaultSection::IsModified()
extern "C" bool DefaultSection_IsModified_m6736 (DefaultSection_t1444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultSection::Reset(System.Configuration.ConfigurationElement)
extern "C" void DefaultSection_Reset_m6737 (DefaultSection_t1444 * __this, ConfigurationElement_t1416 * ___parentSection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultSection::ResetModified()
extern "C" void DefaultSection_ResetModified_m6738 (DefaultSection_t1444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.DefaultSection::SerializeSection(System.Configuration.ConfigurationElement,System.String,System.Configuration.ConfigurationSaveMode)
extern "C" String_t* DefaultSection_SerializeSection_m6739 (DefaultSection_t1444 * __this, ConfigurationElement_t1416 * ___parentSection, String_t* ___name, int32_t ___saveMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.DefaultSection::get_Properties()
extern "C" ConfigurationPropertyCollection_t1412 * DefaultSection_get_Properties_m6740 (DefaultSection_t1444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
