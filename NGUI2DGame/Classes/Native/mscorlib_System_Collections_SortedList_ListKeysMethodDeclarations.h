#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.SortedList/ListKeys
struct ListKeys_t2526;
// System.Object
struct Object_t;
// System.Collections.SortedList
struct SortedList_t1151;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;

// System.Void System.Collections.SortedList/ListKeys::.ctor(System.Collections.SortedList)
extern "C" void ListKeys__ctor_m15574 (ListKeys_t2526 * __this, SortedList_t1151 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList/ListKeys::get_Count()
extern "C" int32_t ListKeys_get_Count_m15575 (ListKeys_t2526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList/ListKeys::get_SyncRoot()
extern "C" Object_t * ListKeys_get_SyncRoot_m15576 (ListKeys_t2526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListKeys::CopyTo(System.Array,System.Int32)
extern "C" void ListKeys_CopyTo_m15577 (ListKeys_t2526 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList/ListKeys::get_Item(System.Int32)
extern "C" Object_t * ListKeys_get_Item_m15578 (ListKeys_t2526 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListKeys::set_Item(System.Int32,System.Object)
extern "C" void ListKeys_set_Item_m15579 (ListKeys_t2526 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList/ListKeys::Add(System.Object)
extern "C" int32_t ListKeys_Add_m15580 (ListKeys_t2526 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListKeys::Clear()
extern "C" void ListKeys_Clear_m15581 (ListKeys_t2526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList/ListKeys::Contains(System.Object)
extern "C" bool ListKeys_Contains_m15582 (ListKeys_t2526 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList/ListKeys::IndexOf(System.Object)
extern "C" int32_t ListKeys_IndexOf_m15583 (ListKeys_t2526 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListKeys::Insert(System.Int32,System.Object)
extern "C" void ListKeys_Insert_m15584 (ListKeys_t2526 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListKeys::Remove(System.Object)
extern "C" void ListKeys_Remove_m15585 (ListKeys_t2526 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListKeys::RemoveAt(System.Int32)
extern "C" void ListKeys_RemoveAt_m15586 (ListKeys_t2526 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.SortedList/ListKeys::GetEnumerator()
extern "C" Object_t * ListKeys_GetEnumerator_m15587 (ListKeys_t2526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
