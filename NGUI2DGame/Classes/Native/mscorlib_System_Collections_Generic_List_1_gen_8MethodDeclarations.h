#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t154;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t4111;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t4082;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4075;
// System.Int32[]
struct Int32U5BU5D_t1;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t3328;
// System.Comparison`1<System.Int32>
struct Comparison_1_t3606;
// System.Collections.Generic.List`1/Enumerator<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_16.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m1521_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1__ctor_m1521(__this, method) (( void (*) (List_1_t154 *, const MethodInfo*))List_1__ctor_m1521_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m3573_gshared (List_1_t154 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m3573(__this, ___collection, method) (( void (*) (List_1_t154 *, Object_t*, const MethodInfo*))List_1__ctor_m3573_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m20868_gshared (List_1_t154 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m20868(__this, ___capacity, method) (( void (*) (List_1_t154 *, int32_t, const MethodInfo*))List_1__ctor_m20868_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m20869_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m20869(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m20869_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20870_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20870(__this, method) (( Object_t* (*) (List_1_t154 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20870_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m20871_gshared (List_1_t154 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m20871(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t154 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m20871_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m20872_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m20872(__this, method) (( Object_t * (*) (List_1_t154 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m20872_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m20873_gshared (List_1_t154 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m20873(__this, ___item, method) (( int32_t (*) (List_1_t154 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m20873_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m20874_gshared (List_1_t154 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m20874(__this, ___item, method) (( bool (*) (List_1_t154 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m20874_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m20875_gshared (List_1_t154 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m20875(__this, ___item, method) (( int32_t (*) (List_1_t154 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m20875_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m20876_gshared (List_1_t154 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m20876(__this, ___index, ___item, method) (( void (*) (List_1_t154 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m20876_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m20877_gshared (List_1_t154 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m20877(__this, ___item, method) (( void (*) (List_1_t154 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m20877_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20878_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20878(__this, method) (( bool (*) (List_1_t154 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20878_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m20879_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m20879(__this, method) (( Object_t * (*) (List_1_t154 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m20879_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m20880_gshared (List_1_t154 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m20880(__this, ___index, method) (( Object_t * (*) (List_1_t154 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m20880_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m20881_gshared (List_1_t154 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m20881(__this, ___index, ___value, method) (( void (*) (List_1_t154 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m20881_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m20882_gshared (List_1_t154 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m20882(__this, ___item, method) (( void (*) (List_1_t154 *, int32_t, const MethodInfo*))List_1_Add_m20882_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m20883_gshared (List_1_t154 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m20883(__this, ___newCount, method) (( void (*) (List_1_t154 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m20883_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m20884_gshared (List_1_t154 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m20884(__this, ___collection, method) (( void (*) (List_1_t154 *, Object_t*, const MethodInfo*))List_1_AddCollection_m20884_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m20885_gshared (List_1_t154 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m20885(__this, ___enumerable, method) (( void (*) (List_1_t154 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m20885_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m20886_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_Clear_m20886(__this, method) (( void (*) (List_1_t154 *, const MethodInfo*))List_1_Clear_m20886_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m20887_gshared (List_1_t154 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m20887(__this, ___item, method) (( bool (*) (List_1_t154 *, int32_t, const MethodInfo*))List_1_Contains_m20887_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[])
extern "C" void List_1_CopyTo_m20888_gshared (List_1_t154 * __this, Int32U5BU5D_t1* ___array, const MethodInfo* method);
#define List_1_CopyTo_m20888(__this, ___array, method) (( void (*) (List_1_t154 *, Int32U5BU5D_t1*, const MethodInfo*))List_1_CopyTo_m20888_gshared)(__this, ___array, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m20889_gshared (List_1_t154 * __this, Int32U5BU5D_t1* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m20889(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t154 *, Int32U5BU5D_t1*, int32_t, const MethodInfo*))List_1_CopyTo_m20889_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t3602  List_1_GetEnumerator_m20890_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m20890(__this, method) (( Enumerator_t3602  (*) (List_1_t154 *, const MethodInfo*))List_1_GetEnumerator_m20890_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m20891_gshared (List_1_t154 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m20891(__this, ___item, method) (( int32_t (*) (List_1_t154 *, int32_t, const MethodInfo*))List_1_IndexOf_m20891_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m20892_gshared (List_1_t154 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m20892(__this, ___start, ___delta, method) (( void (*) (List_1_t154 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m20892_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m20893_gshared (List_1_t154 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m20893(__this, ___index, method) (( void (*) (List_1_t154 *, int32_t, const MethodInfo*))List_1_CheckIndex_m20893_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m20894_gshared (List_1_t154 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m20894(__this, ___index, ___item, method) (( void (*) (List_1_t154 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m20894_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m20895_gshared (List_1_t154 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m20895(__this, ___collection, method) (( void (*) (List_1_t154 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m20895_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m20896_gshared (List_1_t154 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m20896(__this, ___item, method) (( bool (*) (List_1_t154 *, int32_t, const MethodInfo*))List_1_Remove_m20896_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m20897_gshared (List_1_t154 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m20897(__this, ___index, method) (( void (*) (List_1_t154 *, int32_t, const MethodInfo*))List_1_RemoveAt_m20897_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m20898_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_Sort_m20898(__this, method) (( void (*) (List_1_t154 *, const MethodInfo*))List_1_Sort_m20898_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m20899_gshared (List_1_t154 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m20899(__this, ___comparer, method) (( void (*) (List_1_t154 *, Object_t*, const MethodInfo*))List_1_Sort_m20899_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m20900_gshared (List_1_t154 * __this, Comparison_1_t3606 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m20900(__this, ___comparison, method) (( void (*) (List_1_t154 *, Comparison_1_t3606 *, const MethodInfo*))List_1_Sort_m20900_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t1* List_1_ToArray_m20901_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_ToArray_m20901(__this, method) (( Int32U5BU5D_t1* (*) (List_1_t154 *, const MethodInfo*))List_1_ToArray_m20901_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m20902_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m20902(__this, method) (( int32_t (*) (List_1_t154 *, const MethodInfo*))List_1_get_Capacity_m20902_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m20903_gshared (List_1_t154 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m20903(__this, ___value, method) (( void (*) (List_1_t154 *, int32_t, const MethodInfo*))List_1_set_Capacity_m20903_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m20904_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_get_Count_m20904(__this, method) (( int32_t (*) (List_1_t154 *, const MethodInfo*))List_1_get_Count_m20904_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m20905_gshared (List_1_t154 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m20905(__this, ___index, method) (( int32_t (*) (List_1_t154 *, int32_t, const MethodInfo*))List_1_get_Item_m20905_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m20906_gshared (List_1_t154 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m20906(__this, ___index, ___value, method) (( void (*) (List_1_t154 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m20906_gshared)(__this, ___index, ___value, method)
