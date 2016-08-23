#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.SortedList/ListValues
struct ListValues_t2527;
// System.Object
struct Object_t;
// System.Collections.SortedList
struct SortedList_t1151;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;

// System.Void System.Collections.SortedList/ListValues::.ctor(System.Collections.SortedList)
extern "C" void ListValues__ctor_m15588 (ListValues_t2527 * __this, SortedList_t1151 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList/ListValues::get_Count()
extern "C" int32_t ListValues_get_Count_m15589 (ListValues_t2527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList/ListValues::get_SyncRoot()
extern "C" Object_t * ListValues_get_SyncRoot_m15590 (ListValues_t2527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListValues::CopyTo(System.Array,System.Int32)
extern "C" void ListValues_CopyTo_m15591 (ListValues_t2527 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList/ListValues::get_Item(System.Int32)
extern "C" Object_t * ListValues_get_Item_m15592 (ListValues_t2527 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListValues::set_Item(System.Int32,System.Object)
extern "C" void ListValues_set_Item_m15593 (ListValues_t2527 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList/ListValues::Add(System.Object)
extern "C" int32_t ListValues_Add_m15594 (ListValues_t2527 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListValues::Clear()
extern "C" void ListValues_Clear_m15595 (ListValues_t2527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList/ListValues::Contains(System.Object)
extern "C" bool ListValues_Contains_m15596 (ListValues_t2527 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList/ListValues::IndexOf(System.Object)
extern "C" int32_t ListValues_IndexOf_m15597 (ListValues_t2527 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListValues::Insert(System.Int32,System.Object)
extern "C" void ListValues_Insert_m15598 (ListValues_t2527 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListValues::Remove(System.Object)
extern "C" void ListValues_Remove_m15599 (ListValues_t2527 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListValues::RemoveAt(System.Int32)
extern "C" void ListValues_RemoveAt_m15600 (ListValues_t2527 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.SortedList/ListValues::GetEnumerator()
extern "C" Object_t * ListValues_GetEnumerator_m15601 (ListValues_t2527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
