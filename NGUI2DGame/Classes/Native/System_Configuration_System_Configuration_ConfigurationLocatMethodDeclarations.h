#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationLocation
struct ConfigurationLocation_t1422;
// System.String
struct String_t;
// System.Configuration.Configuration
struct Configuration_t1398;

// System.Void System.Configuration.ConfigurationLocation::.ctor(System.String,System.String,System.Configuration.Configuration,System.Boolean)
extern "C" void ConfigurationLocation__ctor_m6638 (ConfigurationLocation_t1422 * __this, String_t* ___path, String_t* ___xmlContent, Configuration_t1398 * ___parent, bool ___allowOverride, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLocation::.cctor()
extern "C" void ConfigurationLocation__cctor_m6639 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationLocation::get_Path()
extern "C" String_t* ConfigurationLocation_get_Path_m6640 (ConfigurationLocation_t1422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.ConfigurationLocation::OpenConfiguration()
extern "C" Configuration_t1398 * ConfigurationLocation_OpenConfiguration_m6641 (ConfigurationLocation_t1422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLocation::SetParentConfiguration(System.Configuration.Configuration)
extern "C" void ConfigurationLocation_SetParentConfiguration_m6642 (ConfigurationLocation_t1422 * __this, Configuration_t1398 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
