#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_t1404;
// System.Configuration.Configuration
struct Configuration_t1398;
// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t1440;
// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t1437;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t1406;

// System.Void System.Configuration.ConfigurationSectionGroup::.ctor()
extern "C" void ConfigurationSectionGroup__ctor_m6716 (ConfigurationSectionGroup_t1404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.ConfigurationSectionGroup::get_Config()
extern "C" Configuration_t1398 * ConfigurationSectionGroup_get_Config_m6717 (ConfigurationSectionGroup_t1404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionGroup::Initialize(System.Configuration.Configuration,System.Configuration.SectionGroupInfo)
extern "C" void ConfigurationSectionGroup_Initialize_m6718 (ConfigurationSectionGroup_t1404 * __this, Configuration_t1398 * ___config, SectionGroupInfo_t1406 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.ConfigurationSectionGroup::get_SectionGroups()
extern "C" ConfigurationSectionGroupCollection_t1440 * ConfigurationSectionGroup_get_SectionGroups_m6719 (ConfigurationSectionGroup_t1404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionCollection System.Configuration.ConfigurationSectionGroup::get_Sections()
extern "C" ConfigurationSectionCollection_t1437 * ConfigurationSectionGroup_get_Sections_m6720 (ConfigurationSectionGroup_t1404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
