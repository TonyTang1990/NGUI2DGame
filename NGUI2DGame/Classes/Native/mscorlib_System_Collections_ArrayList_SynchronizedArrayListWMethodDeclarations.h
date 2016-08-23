#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ArrayList/SynchronizedArrayListWrapper
struct SynchronizedArrayListWrapper_t2509;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Collections.ICollection
struct ICollection_t793;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Collections.IComparer
struct IComparer_t1418;
// System.Object[]
struct ObjectU5BU5D_t300;
// System.Type
struct Type_t;

// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::.ctor(System.Collections.ArrayList)
extern "C" void SynchronizedArrayListWrapper__ctor_m15382 (SynchronizedArrayListWrapper_t2509 * __this, ArrayList_t913 * ___innerArrayList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::get_Item(System.Int32)
extern "C" Object_t * SynchronizedArrayListWrapper_get_Item_m15383 (SynchronizedArrayListWrapper_t2509 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::set_Item(System.Int32,System.Object)
extern "C" void SynchronizedArrayListWrapper_set_Item_m15384 (SynchronizedArrayListWrapper_t2509 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::get_Count()
extern "C" int32_t SynchronizedArrayListWrapper_get_Count_m15385 (SynchronizedArrayListWrapper_t2509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::get_Capacity()
extern "C" int32_t SynchronizedArrayListWrapper_get_Capacity_m15386 (SynchronizedArrayListWrapper_t2509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::set_Capacity(System.Int32)
extern "C" void SynchronizedArrayListWrapper_set_Capacity_m15387 (SynchronizedArrayListWrapper_t2509 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::get_IsReadOnly()
extern "C" bool SynchronizedArrayListWrapper_get_IsReadOnly_m15388 (SynchronizedArrayListWrapper_t2509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::get_IsSynchronized()
extern "C" bool SynchronizedArrayListWrapper_get_IsSynchronized_m15389 (SynchronizedArrayListWrapper_t2509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::get_SyncRoot()
extern "C" Object_t * SynchronizedArrayListWrapper_get_SyncRoot_m15390 (SynchronizedArrayListWrapper_t2509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::Add(System.Object)
extern "C" int32_t SynchronizedArrayListWrapper_Add_m15391 (SynchronizedArrayListWrapper_t2509 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Clear()
extern "C" void SynchronizedArrayListWrapper_Clear_m15392 (SynchronizedArrayListWrapper_t2509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::Contains(System.Object)
extern "C" bool SynchronizedArrayListWrapper_Contains_m15393 (SynchronizedArrayListWrapper_t2509 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object)
extern "C" int32_t SynchronizedArrayListWrapper_IndexOf_m15394 (SynchronizedArrayListWrapper_t2509 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object,System.Int32)
extern "C" int32_t SynchronizedArrayListWrapper_IndexOf_m15395 (SynchronizedArrayListWrapper_t2509 * __this, Object_t * ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object,System.Int32,System.Int32)
extern "C" int32_t SynchronizedArrayListWrapper_IndexOf_m15396 (SynchronizedArrayListWrapper_t2509 * __this, Object_t * ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Insert(System.Int32,System.Object)
extern "C" void SynchronizedArrayListWrapper_Insert_m15397 (SynchronizedArrayListWrapper_t2509 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::InsertRange(System.Int32,System.Collections.ICollection)
extern "C" void SynchronizedArrayListWrapper_InsertRange_m15398 (SynchronizedArrayListWrapper_t2509 * __this, int32_t ___index, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Remove(System.Object)
extern "C" void SynchronizedArrayListWrapper_Remove_m15399 (SynchronizedArrayListWrapper_t2509 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::RemoveAt(System.Int32)
extern "C" void SynchronizedArrayListWrapper_RemoveAt_m15400 (SynchronizedArrayListWrapper_t2509 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Array)
extern "C" void SynchronizedArrayListWrapper_CopyTo_m15401 (SynchronizedArrayListWrapper_t2509 * __this, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Array,System.Int32)
extern "C" void SynchronizedArrayListWrapper_CopyTo_m15402 (SynchronizedArrayListWrapper_t2509 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
extern "C" void SynchronizedArrayListWrapper_CopyTo_m15403 (SynchronizedArrayListWrapper_t2509 * __this, int32_t ___index, Array_t * ___array, int32_t ___arrayIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList/SynchronizedArrayListWrapper::GetEnumerator()
extern "C" Object_t * SynchronizedArrayListWrapper_GetEnumerator_m15404 (SynchronizedArrayListWrapper_t2509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::AddRange(System.Collections.ICollection)
extern "C" void SynchronizedArrayListWrapper_AddRange_m15405 (SynchronizedArrayListWrapper_t2509 * __this, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::Clone()
extern "C" Object_t * SynchronizedArrayListWrapper_Clone_m15406 (SynchronizedArrayListWrapper_t2509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Sort()
extern "C" void SynchronizedArrayListWrapper_Sort_m15407 (SynchronizedArrayListWrapper_t2509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Sort(System.Collections.IComparer)
extern "C" void SynchronizedArrayListWrapper_Sort_m15408 (SynchronizedArrayListWrapper_t2509 * __this, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList/SynchronizedArrayListWrapper::ToArray()
extern "C" ObjectU5BU5D_t300* SynchronizedArrayListWrapper_ToArray_m15409 (SynchronizedArrayListWrapper_t2509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList/SynchronizedArrayListWrapper::ToArray(System.Type)
extern "C" Array_t * SynchronizedArrayListWrapper_ToArray_m15410 (SynchronizedArrayListWrapper_t2509 * __this, Type_t * ___elementType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
