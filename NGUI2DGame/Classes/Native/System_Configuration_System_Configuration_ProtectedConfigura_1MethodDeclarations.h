#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ProtectedConfigurationProviderCollection
struct ProtectedConfigurationProviderCollection_t1459;
// System.Configuration.ProtectedConfigurationProvider
struct ProtectedConfigurationProvider_t1458;
// System.String
struct String_t;
// System.Configuration.Provider.ProviderBase
struct ProviderBase_t1396;

// System.Void System.Configuration.ProtectedConfigurationProviderCollection::.ctor()
extern "C" void ProtectedConfigurationProviderCollection__ctor_m6809 (ProtectedConfigurationProviderCollection_t1459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationProvider System.Configuration.ProtectedConfigurationProviderCollection::get_Item(System.String)
extern "C" ProtectedConfigurationProvider_t1458 * ProtectedConfigurationProviderCollection_get_Item_m6810 (ProtectedConfigurationProviderCollection_t1459 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProtectedConfigurationProviderCollection::Add(System.Configuration.Provider.ProviderBase)
extern "C" void ProtectedConfigurationProviderCollection_Add_m6811 (ProtectedConfigurationProviderCollection_t1459 * __this, ProviderBase_t1396 * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
