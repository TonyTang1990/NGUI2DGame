#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ProviderSettings
struct ProviderSettings_t1461;
// System.String
struct String_t;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1412;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t1401;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1416;
// System.Configuration.ConfigurationSaveMode
#include "System_Configuration_System_Configuration_ConfigurationSaveM.h"

// System.Void System.Configuration.ProviderSettings::.ctor()
extern "C" void ProviderSettings__ctor_m6817 (ProviderSettings_t1461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProviderSettings::.cctor()
extern "C" void ProviderSettings__cctor_m6818 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ProviderSettings::OnDeserializeUnrecognizedAttribute(System.String,System.String)
extern "C" bool ProviderSettings_OnDeserializeUnrecognizedAttribute_m6819 (ProviderSettings_t1461 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ProviderSettings::IsModified()
extern "C" bool ProviderSettings_IsModified_m6820 (ProviderSettings_t1461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProviderSettings::Reset(System.Configuration.ConfigurationElement)
extern "C" void ProviderSettings_Reset_m6821 (ProviderSettings_t1461 * __this, ConfigurationElement_t1416 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProviderSettings::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode)
extern "C" void ProviderSettings_Unmerge_m6822 (ProviderSettings_t1461 * __this, ConfigurationElement_t1416 * ___source, ConfigurationElement_t1416 * ___parent, int32_t ___updateMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ProviderSettings::get_Name()
extern "C" String_t* ProviderSettings_get_Name_m6823 (ProviderSettings_t1461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ProviderSettings::get_Type()
extern "C" String_t* ProviderSettings_get_Type_m6824 (ProviderSettings_t1461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProviderSettings::get_Properties()
extern "C" ConfigurationPropertyCollection_t1412 * ProviderSettings_get_Properties_m6825 (ProviderSettings_t1461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection System.Configuration.ProviderSettings::get_Parameters()
extern "C" NameValueCollection_t1401 * ProviderSettings_get_Parameters_m6826 (ProviderSettings_t1461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
