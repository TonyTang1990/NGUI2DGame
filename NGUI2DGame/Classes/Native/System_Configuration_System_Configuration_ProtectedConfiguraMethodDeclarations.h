#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ProtectedConfiguration
struct ProtectedConfiguration_t1457;
// System.Configuration.ProtectedConfigurationProviderCollection
struct ProtectedConfigurationProviderCollection_t1459;
// System.Configuration.ProtectedConfigurationSection
struct ProtectedConfigurationSection_t1460;
// System.Configuration.ProtectedConfigurationProvider
struct ProtectedConfigurationProvider_t1458;
// System.String
struct String_t;

// System.Configuration.ProtectedConfigurationProviderCollection System.Configuration.ProtectedConfiguration::get_Providers()
extern "C" ProtectedConfigurationProviderCollection_t1459 * ProtectedConfiguration_get_Providers_m6806 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationSection System.Configuration.ProtectedConfiguration::get_Section()
extern "C" ProtectedConfigurationSection_t1460 * ProtectedConfiguration_get_Section_m6807 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationProvider System.Configuration.ProtectedConfiguration::GetProvider(System.String,System.Boolean)
extern "C" ProtectedConfigurationProvider_t1458 * ProtectedConfiguration_GetProvider_m6808 (Object_t * __this /* static, unused */, String_t* ___name, bool ___throwOnError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
