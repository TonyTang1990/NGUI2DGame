#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ReadOnlyCollectionBase
struct ReadOnlyCollectionBase_t1423;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Array
struct Array_t;

// System.Void System.Collections.ReadOnlyCollectionBase::.ctor()
extern "C" void ReadOnlyCollectionBase__ctor_m6897 (ReadOnlyCollectionBase_t1423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ReadOnlyCollectionBase::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ReadOnlyCollectionBase_System_Collections_IEnumerable_GetEnumerator_m6962 (ReadOnlyCollectionBase_t1423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ReadOnlyCollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ReadOnlyCollectionBase_System_Collections_ICollection_CopyTo_m6965 (ReadOnlyCollectionBase_t1423 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ReadOnlyCollectionBase::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollectionBase_System_Collections_ICollection_get_SyncRoot_m6964 (ReadOnlyCollectionBase_t1423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ReadOnlyCollectionBase::get_Count()
extern "C" int32_t ReadOnlyCollectionBase_get_Count_m6963 (ReadOnlyCollectionBase_t1423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ReadOnlyCollectionBase::GetEnumerator()
extern "C" Object_t * ReadOnlyCollectionBase_GetEnumerator_m6966 (ReadOnlyCollectionBase_t1423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::get_InnerList()
extern "C" ArrayList_t913 * ReadOnlyCollectionBase_get_InnerList_m6898 (ReadOnlyCollectionBase_t1423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
