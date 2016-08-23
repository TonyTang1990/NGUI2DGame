#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationSection
struct ConfigurationSection_t1436;
// System.Configuration.IConfigurationSectionHandler
struct IConfigurationSectionHandler_t1435;
// System.Configuration.SectionInformation
struct SectionInformation_t1434;
// System.Object
struct Object_t;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1416;
// System.Type
struct Type_t;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.String
struct String_t;
// System.Configuration.ConfigurationSaveMode
#include "System_Configuration_System_Configuration_ConfigurationSaveM.h"

// System.Void System.Configuration.ConfigurationSection::.ctor()
extern "C" void ConfigurationSection__ctor_m6691 (ConfigurationSection_t1436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.IConfigurationSectionHandler System.Configuration.ConfigurationSection::get_SectionHandler()
extern "C" Object_t * ConfigurationSection_get_SectionHandler_m6692 (ConfigurationSection_t1436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSection::set_SectionHandler(System.Configuration.IConfigurationSectionHandler)
extern "C" void ConfigurationSection_set_SectionHandler_m6693 (ConfigurationSection_t1436 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.SectionInformation System.Configuration.ConfigurationSection::get_SectionInformation()
extern "C" SectionInformation_t1434 * ConfigurationSection_get_SectionInformation_m6694 (ConfigurationSection_t1436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationSection::get_ConfigContext()
extern "C" Object_t * ConfigurationSection_get_ConfigContext_m6695 (ConfigurationSection_t1436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSection::set_ConfigContext(System.Object)
extern "C" void ConfigurationSection_set_ConfigContext_m6696 (ConfigurationSection_t1436 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationSection::GetRuntimeObject()
extern "C" Object_t * ConfigurationSection_GetRuntimeObject_m6697 (ConfigurationSection_t1436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationSection::IsModified()
extern "C" bool ConfigurationSection_IsModified_m6698 (ConfigurationSection_t1436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSection::ResetModified()
extern "C" void ConfigurationSection_ResetModified_m6699 (ConfigurationSection_t1436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationSection::CreateElement(System.Type)
extern "C" ConfigurationElement_t1416 * ConfigurationSection_CreateElement_m6700 (ConfigurationSection_t1436 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSection::DoDeserializeSection(System.Xml.XmlReader)
extern "C" void ConfigurationSection_DoDeserializeSection_m6701 (ConfigurationSection_t1436 * __this, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSection::DeserializeSection(System.Xml.XmlReader)
extern "C" void ConfigurationSection_DeserializeSection_m6702 (ConfigurationSection_t1436 * __this, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSection::DeserializeConfigSource(System.String)
extern "C" void ConfigurationSection_DeserializeConfigSource_m6703 (ConfigurationSection_t1436 * __this, String_t* ___basePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationSection::SerializeSection(System.Configuration.ConfigurationElement,System.String,System.Configuration.ConfigurationSaveMode)
extern "C" String_t* ConfigurationSection_SerializeSection_m6704 (ConfigurationSection_t1436 * __this, ConfigurationElement_t1416 * ___parentElement, String_t* ___name, int32_t ___saveMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
