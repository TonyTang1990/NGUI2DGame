#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ProtectedConfigurationSection
struct ProtectedConfigurationSection_t1460;
// System.Configuration.ProviderSettingsCollection
struct ProviderSettingsCollection_t1462;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1412;
// System.Configuration.ProtectedConfigurationProviderCollection
struct ProtectedConfigurationProviderCollection_t1459;
// System.Configuration.ProtectedConfigurationProvider
struct ProtectedConfigurationProvider_t1458;
// System.Configuration.ProviderSettings
struct ProviderSettings_t1461;

// System.Void System.Configuration.ProtectedConfigurationSection::.cctor()
extern "C" void ProtectedConfigurationSection__cctor_m6812 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProviderSettingsCollection System.Configuration.ProtectedConfigurationSection::get_Providers()
extern "C" ProviderSettingsCollection_t1462 * ProtectedConfigurationSection_get_Providers_m6813 (ProtectedConfigurationSection_t1460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProtectedConfigurationSection::get_Properties()
extern "C" ConfigurationPropertyCollection_t1412 * ProtectedConfigurationSection_get_Properties_m6814 (ProtectedConfigurationSection_t1460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationProviderCollection System.Configuration.ProtectedConfigurationSection::GetAllProviders()
extern "C" ProtectedConfigurationProviderCollection_t1459 * ProtectedConfigurationSection_GetAllProviders_m6815 (ProtectedConfigurationSection_t1460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationProvider System.Configuration.ProtectedConfigurationSection::InstantiateProvider(System.Configuration.ProviderSettings)
extern "C" ProtectedConfigurationProvider_t1458 * ProtectedConfigurationSection_InstantiateProvider_m6816 (ProtectedConfigurationSection_t1460 * __this, ProviderSettings_t1461 * ___ps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
