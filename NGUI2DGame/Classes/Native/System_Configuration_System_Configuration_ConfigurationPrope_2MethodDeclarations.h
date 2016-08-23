#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1412;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t1429;
// System.Collections.IEnumerator
struct IEnumerator_t288;

// System.Void System.Configuration.ConfigurationPropertyCollection::.ctor()
extern "C" void ConfigurationPropertyCollection__ctor_m6685 (ConfigurationPropertyCollection_t1412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationPropertyCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ConfigurationPropertyCollection_System_Collections_ICollection_CopyTo_m6686 (ConfigurationPropertyCollection_t1412 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationPropertyCollection::get_Count()
extern "C" int32_t ConfigurationPropertyCollection_get_Count_m6687 (ConfigurationPropertyCollection_t1412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationPropertyCollection::get_SyncRoot()
extern "C" Object_t * ConfigurationPropertyCollection_get_SyncRoot_m6688 (ConfigurationPropertyCollection_t1412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationPropertyCollection::Add(System.Configuration.ConfigurationProperty)
extern "C" void ConfigurationPropertyCollection_Add_m6689 (ConfigurationPropertyCollection_t1412 * __this, ConfigurationProperty_t1429 * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.ConfigurationPropertyCollection::GetEnumerator()
extern "C" Object_t * ConfigurationPropertyCollection_GetEnumerator_m6690 (ConfigurationPropertyCollection_t1412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
