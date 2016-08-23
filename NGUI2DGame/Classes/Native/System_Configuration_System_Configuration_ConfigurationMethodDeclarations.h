#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.Configuration
struct Configuration_t1398;
// System.Configuration.Internal.IInternalConfigHost
struct IInternalConfigHost_t1403;
// System.String
struct String_t;
// System.Configuration.ConfigurationLocationCollection
struct ConfigurationLocationCollection_t1405;
// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_t1404;
// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t1440;
// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t1437;
// System.Configuration.InternalConfigurationSystem
struct InternalConfigurationSystem_t1451;
// System.Configuration.Internal.IConfigSystem
struct IConfigSystem_t1407;
// System.Configuration.ConfigurationSection
struct ConfigurationSection_t1436;
// System.Configuration.SectionInfo
struct SectionInfo_t1463;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t1406;
// System.Xml.XmlReader
struct XmlReader_t843;

// System.Void System.Configuration.Configuration::.ctor(System.Configuration.Configuration,System.String)
extern "C" void Configuration__ctor_m6501 (Configuration_t1398 * __this, Configuration_t1398 * ___parent, String_t* ___locationSubPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::.ctor(System.Configuration.InternalConfigurationSystem,System.String)
extern "C" void Configuration__ctor_m6502 (Configuration_t1398 * __this, InternalConfigurationSystem_t1451 * ___system, String_t* ___locationSubPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.Configuration::FindLocationConfiguration(System.String,System.Configuration.Configuration)
extern "C" Configuration_t1398 * Configuration_FindLocationConfiguration_m6503 (Configuration_t1398 * __this, String_t* ___relativePath, Configuration_t1398 * ___defaultConfiguration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::Init(System.Configuration.Internal.IConfigSystem,System.String,System.Configuration.Configuration)
extern "C" void Configuration_Init_m6504 (Configuration_t1398 * __this, Object_t * ___system, String_t* ___configPath, Configuration_t1398 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.Configuration::get_Parent()
extern "C" Configuration_t1398 * Configuration_get_Parent_m6505 (Configuration_t1398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::set_Parent(System.Configuration.Configuration)
extern "C" void Configuration_set_Parent_m6506 (Configuration_t1398 * __this, Configuration_t1398 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.Configuration::GetParentWithFile()
extern "C" Configuration_t1398 * Configuration_GetParentWithFile_m6507 (Configuration_t1398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Internal.IInternalConfigHost System.Configuration.Configuration::get_ConfigHost()
extern "C" Object_t * Configuration_get_ConfigHost_m6508 (Configuration_t1398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::get_LocationConfigPath()
extern "C" String_t* Configuration_get_LocationConfigPath_m6509 (Configuration_t1398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::get_ConfigPath()
extern "C" String_t* Configuration_get_ConfigPath_m6510 (Configuration_t1398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::get_FilePath()
extern "C" String_t* Configuration_get_FilePath_m6511 (Configuration_t1398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.Configuration::get_HasFile()
extern "C" bool Configuration_get_HasFile_m6512 (Configuration_t1398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLocationCollection System.Configuration.Configuration::get_Locations()
extern "C" ConfigurationLocationCollection_t1405 * Configuration_get_Locations_m6513 (Configuration_t1398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroup System.Configuration.Configuration::get_RootSectionGroup()
extern "C" ConfigurationSectionGroup_t1404 * Configuration_get_RootSectionGroup_m6514 (Configuration_t1398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.Configuration::get_SectionGroups()
extern "C" ConfigurationSectionGroupCollection_t1440 * Configuration_get_SectionGroups_m6515 (Configuration_t1398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionCollection System.Configuration.Configuration::get_Sections()
extern "C" ConfigurationSectionCollection_t1437 * Configuration_get_Sections_m6516 (Configuration_t1398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSection System.Configuration.Configuration::GetSection(System.String)
extern "C" ConfigurationSection_t1436 * Configuration_GetSection_m6517 (Configuration_t1398 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSection System.Configuration.Configuration::GetSectionInstance(System.Configuration.SectionInfo,System.Boolean)
extern "C" ConfigurationSection_t1436 * Configuration_GetSectionInstance_m6518 (Configuration_t1398 * __this, SectionInfo_t1463 * ___config, bool ___createDefaultInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroup System.Configuration.Configuration::GetSectionGroupInstance(System.Configuration.SectionGroupInfo)
extern "C" ConfigurationSectionGroup_t1404 * Configuration_GetSectionGroupInstance_m6519 (Configuration_t1398 * __this, SectionGroupInfo_t1406 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::SetSectionXml(System.Configuration.SectionInfo,System.String)
extern "C" void Configuration_SetSectionXml_m6520 (Configuration_t1398 * __this, SectionInfo_t1463 * ___config, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::GetSectionXml(System.Configuration.SectionInfo)
extern "C" String_t* Configuration_GetSectionXml_m6521 (Configuration_t1398 * __this, SectionInfo_t1463 * ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.Configuration::Load()
extern "C" bool Configuration_Load_m6522 (Configuration_t1398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::ReadConfigFile(System.Xml.XmlReader,System.String)
extern "C" void Configuration_ReadConfigFile_m6523 (Configuration_t1398 * __this, XmlReader_t843 * ___reader, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::ReadData(System.Xml.XmlReader,System.Boolean)
extern "C" void Configuration_ReadData_m6524 (Configuration_t1398 * __this, XmlReader_t843 * ___reader, bool ___allowOverride, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::ThrowException(System.String,System.Xml.XmlReader)
extern "C" void Configuration_ThrowException_m6525 (Configuration_t1398 * __this, String_t* ___text, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
