#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.Provider.ProviderCollection
struct ProviderCollection_t1397;
// System.Object
struct Object_t;
// System.Configuration.Provider.ProviderBase
struct ProviderBase_t1396;
// System.String
struct String_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;

// System.Void System.Configuration.Provider.ProviderCollection::.ctor()
extern "C" void ProviderCollection__ctor_m6482 (ProviderCollection_t1397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Provider.ProviderCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ProviderCollection_System_Collections_ICollection_CopyTo_m6483 (ProviderCollection_t1397 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Provider.ProviderCollection::Add(System.Configuration.Provider.ProviderBase)
extern "C" void ProviderCollection_Add_m6484 (ProviderCollection_t1397 * __this, ProviderBase_t1396 * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.Provider.ProviderCollection::GetEnumerator()
extern "C" Object_t * ProviderCollection_GetEnumerator_m6485 (ProviderCollection_t1397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.Provider.ProviderCollection::get_Count()
extern "C" int32_t ProviderCollection_get_Count_m6486 (ProviderCollection_t1397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.Provider.ProviderCollection::get_SyncRoot()
extern "C" Object_t * ProviderCollection_get_SyncRoot_m6487 (ProviderCollection_t1397 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Provider.ProviderBase System.Configuration.Provider.ProviderCollection::get_Item(System.String)
extern "C" ProviderBase_t1396 * ProviderCollection_get_Item_m6488 (ProviderCollection_t1397 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
