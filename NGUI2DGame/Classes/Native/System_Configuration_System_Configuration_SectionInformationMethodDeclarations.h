#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.SectionInformation
struct SectionInformation_t1434;
// System.String
struct String_t;
// System.Configuration.ConfigurationSection
struct ConfigurationSection_t1436;
// System.Configuration.ConfigurationAllowDefinition
#include "System_Configuration_System_Configuration_ConfigurationAllow.h"
// System.Configuration.ConfigurationAllowExeDefinition
#include "System_Configuration_System_Configuration_ConfigurationAllow_0.h"

// System.Void System.Configuration.SectionInformation::.ctor()
extern "C" void SectionInformation__ctor_m6858 (SectionInformation_t1434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.SectionInformation::get_ConfigFilePath()
extern "C" String_t* SectionInformation_get_ConfigFilePath_m6859 (SectionInformation_t1434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::set_ConfigFilePath(System.String)
extern "C" void SectionInformation_set_ConfigFilePath_m6860 (SectionInformation_t1434 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::set_AllowDefinition(System.Configuration.ConfigurationAllowDefinition)
extern "C" void SectionInformation_set_AllowDefinition_m6861 (SectionInformation_t1434 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::set_AllowExeDefinition(System.Configuration.ConfigurationAllowExeDefinition)
extern "C" void SectionInformation_set_AllowExeDefinition_m6862 (SectionInformation_t1434 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::set_AllowLocation(System.Boolean)
extern "C" void SectionInformation_set_AllowLocation_m6863 (SectionInformation_t1434 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.SectionInformation::get_ConfigSource()
extern "C" String_t* SectionInformation_get_ConfigSource_m6864 (SectionInformation_t1434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::set_ConfigSource(System.String)
extern "C" void SectionInformation_set_ConfigSource_m6865 (SectionInformation_t1434 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::set_RequirePermission(System.Boolean)
extern "C" void SectionInformation_set_RequirePermission_m6866 (SectionInformation_t1434 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::set_RestartOnExternalChanges(System.Boolean)
extern "C" void SectionInformation_set_RestartOnExternalChanges_m6867 (SectionInformation_t1434 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSection System.Configuration.SectionInformation::GetParentSection()
extern "C" ConfigurationSection_t1436 * SectionInformation_GetParentSection_m6868 (SectionInformation_t1434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::SetParentSection(System.Configuration.ConfigurationSection)
extern "C" void SectionInformation_SetParentSection_m6869 (SectionInformation_t1434 * __this, ConfigurationSection_t1436 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::ProtectSection(System.String)
extern "C" void SectionInformation_ProtectSection_m6870 (SectionInformation_t1434 * __this, String_t* ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::SetRawXml(System.String)
extern "C" void SectionInformation_SetRawXml_m6871 (SectionInformation_t1434 * __this, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::SetName(System.String)
extern "C" void SectionInformation_SetName_m6872 (SectionInformation_t1434 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
