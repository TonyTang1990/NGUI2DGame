#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Hashtable/HashValues
struct HashValues_t2519;
// System.Object
struct Object_t;
// System.Collections.Hashtable
struct Hashtable_t915;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;

// System.Void System.Collections.Hashtable/HashValues::.ctor(System.Collections.Hashtable)
extern "C" void HashValues__ctor_m15508 (HashValues_t2519 * __this, Hashtable_t915 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable/HashValues::get_Count()
extern "C" int32_t HashValues_get_Count_m15509 (HashValues_t2519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/HashValues::get_SyncRoot()
extern "C" Object_t * HashValues_get_SyncRoot_m15510 (HashValues_t2519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/HashValues::CopyTo(System.Array,System.Int32)
extern "C" void HashValues_CopyTo_m15511 (HashValues_t2519 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Hashtable/HashValues::GetEnumerator()
extern "C" Object_t * HashValues_GetEnumerator_m15512 (HashValues_t2519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
