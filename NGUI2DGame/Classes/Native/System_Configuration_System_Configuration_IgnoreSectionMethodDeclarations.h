#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.IgnoreSection
struct IgnoreSection_t1449;
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

// System.Void System.Configuration.IgnoreSection::.ctor()
extern "C" void IgnoreSection__ctor_m6755 (IgnoreSection_t1449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.IgnoreSection::.cctor()
extern "C" void IgnoreSection__cctor_m6756 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.IgnoreSection::IsModified()
extern "C" bool IgnoreSection_IsModified_m6757 (IgnoreSection_t1449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.IgnoreSection::DeserializeSection(System.Xml.XmlReader)
extern "C" void IgnoreSection_DeserializeSection_m6758 (IgnoreSection_t1449 * __this, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.IgnoreSection::Reset(System.Configuration.ConfigurationElement)
extern "C" void IgnoreSection_Reset_m6759 (IgnoreSection_t1449 * __this, ConfigurationElement_t1416 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.IgnoreSection::ResetModified()
extern "C" void IgnoreSection_ResetModified_m6760 (IgnoreSection_t1449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.IgnoreSection::SerializeSection(System.Configuration.ConfigurationElement,System.String,System.Configuration.ConfigurationSaveMode)
extern "C" String_t* IgnoreSection_SerializeSection_m6761 (IgnoreSection_t1449 * __this, ConfigurationElement_t1416 * ___parentElement, String_t* ___name, int32_t ___saveMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.IgnoreSection::get_Properties()
extern "C" ConfigurationPropertyCollection_t1412 * IgnoreSection_get_Properties_m6762 (IgnoreSection_t1449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
