#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Hashtable/SyncHashtable
struct SyncHashtable_t2520;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t793;
// System.Collections.Hashtable
struct Hashtable_t915;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t669;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1360;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Hashtable/SyncHashtable::.ctor(System.Collections.Hashtable)
extern "C" void SyncHashtable__ctor_m15513 (SyncHashtable_t2520 * __this, Hashtable_t915 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SyncHashtable__ctor_m15514 (SyncHashtable_t2520 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Hashtable/SyncHashtable::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * SyncHashtable_System_Collections_IEnumerable_GetEnumerator_m15515 (SyncHashtable_t2520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SyncHashtable_GetObjectData_m15516 (SyncHashtable_t2520 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable/SyncHashtable::get_Count()
extern "C" int32_t SyncHashtable_get_Count_m15517 (SyncHashtable_t2520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/SyncHashtable::get_SyncRoot()
extern "C" Object_t * SyncHashtable_get_SyncRoot_m15518 (SyncHashtable_t2520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable/SyncHashtable::get_Keys()
extern "C" Object_t * SyncHashtable_get_Keys_m15519 (SyncHashtable_t2520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable/SyncHashtable::get_Values()
extern "C" Object_t * SyncHashtable_get_Values_m15520 (SyncHashtable_t2520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/SyncHashtable::get_Item(System.Object)
extern "C" Object_t * SyncHashtable_get_Item_m15521 (SyncHashtable_t2520 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::set_Item(System.Object,System.Object)
extern "C" void SyncHashtable_set_Item_m15522 (SyncHashtable_t2520 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::CopyTo(System.Array,System.Int32)
extern "C" void SyncHashtable_CopyTo_m15523 (SyncHashtable_t2520 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::Add(System.Object,System.Object)
extern "C" void SyncHashtable_Add_m15524 (SyncHashtable_t2520 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::Clear()
extern "C" void SyncHashtable_Clear_m15525 (SyncHashtable_t2520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable/SyncHashtable::Contains(System.Object)
extern "C" bool SyncHashtable_Contains_m15526 (SyncHashtable_t2520 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Hashtable/SyncHashtable::GetEnumerator()
extern "C" Object_t * SyncHashtable_GetEnumerator_m15527 (SyncHashtable_t2520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::Remove(System.Object)
extern "C" void SyncHashtable_Remove_m15528 (SyncHashtable_t2520 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable/SyncHashtable::ContainsKey(System.Object)
extern "C" bool SyncHashtable_ContainsKey_m15529 (SyncHashtable_t2520 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/SyncHashtable::Clone()
extern "C" Object_t * SyncHashtable_Clone_m15530 (SyncHashtable_t2520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
