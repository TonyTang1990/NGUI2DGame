#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ProviderSettingsCollection
struct ProviderSettingsCollection_t1462;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1412;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1416;
// System.Object
struct Object_t;

// System.Void System.Configuration.ProviderSettingsCollection::.cctor()
extern "C" void ProviderSettingsCollection__cctor_m6827 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ProviderSettingsCollection::CreateNewElement()
extern "C" ConfigurationElement_t1416 * ProviderSettingsCollection_CreateNewElement_m6828 (ProviderSettingsCollection_t1462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ProviderSettingsCollection::GetElementKey(System.Configuration.ConfigurationElement)
extern "C" Object_t * ProviderSettingsCollection_GetElementKey_m6829 (ProviderSettingsCollection_t1462 * __this, ConfigurationElement_t1416 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProviderSettingsCollection::get_Properties()
extern "C" ConfigurationPropertyCollection_t1412 * ProviderSettingsCollection_get_Properties_m6830 (ProviderSettingsCollection_t1462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
