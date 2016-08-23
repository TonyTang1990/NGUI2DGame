#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<InvBaseItem>
struct List_1_t27;
// System.Object
struct Object_t;
// InvBaseItem
struct InvBaseItem_t24;
// System.Collections.Generic.IEnumerable`1<InvBaseItem>
struct IEnumerable_1_t4058;
// System.Collections.Generic.IEnumerator`1<InvBaseItem>
struct IEnumerator_1_t4059;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Collections.Generic.ICollection`1<InvBaseItem>
struct ICollection_1_t4060;
// InvBaseItem[]
struct InvBaseItemU5BU5D_t3512;
// System.Collections.Generic.IComparer`1<InvBaseItem>
struct IComparer_1_t4061;
// System.Comparison`1<InvBaseItem>
struct Comparison_1_t3524;
// System.Collections.Generic.List`1/Enumerator<InvBaseItem>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_7.h"

// System.Void System.Collections.Generic.List`1<InvBaseItem>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_17MethodDeclarations.h"
#define List_1__ctor_m1294(__this, method) (( void (*) (List_1_t27 *, const MethodInfo*))List_1__ctor_m3223_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<InvBaseItem>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m19803(__this, ___collection, method) (( void (*) (List_1_t27 *, Object_t*, const MethodInfo*))List_1__ctor_m19804_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<InvBaseItem>::.ctor(System.Int32)
#define List_1__ctor_m19805(__this, ___capacity, method) (( void (*) (List_1_t27 *, int32_t, const MethodInfo*))List_1__ctor_m19806_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<InvBaseItem>::.cctor()
#define List_1__cctor_m19807(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m19808_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<InvBaseItem>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19809(__this, method) (( Object_t* (*) (List_1_t27 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3404_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<InvBaseItem>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m19810(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t27 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m3389_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<InvBaseItem>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m19811(__this, method) (( Object_t * (*) (List_1_t27 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m3386_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<InvBaseItem>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m19812(__this, ___item, method) (( int32_t (*) (List_1_t27 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m3392_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<InvBaseItem>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m19813(__this, ___item, method) (( bool (*) (List_1_t27 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m3394_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<InvBaseItem>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m19814(__this, ___item, method) (( int32_t (*) (List_1_t27 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m3395_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<InvBaseItem>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m19815(__this, ___index, ___item, method) (( void (*) (List_1_t27 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m3396_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<InvBaseItem>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m19816(__this, ___item, method) (( void (*) (List_1_t27 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m3397_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<InvBaseItem>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19817(__this, method) (( bool (*) (List_1_t27 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3399_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<InvBaseItem>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m19818(__this, method) (( Object_t * (*) (List_1_t27 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3388_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<InvBaseItem>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m19819(__this, ___index, method) (( Object_t * (*) (List_1_t27 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m3390_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<InvBaseItem>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m19820(__this, ___index, ___value, method) (( void (*) (List_1_t27 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m3391_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<InvBaseItem>::Add(T)
#define List_1_Add_m19821(__this, ___item, method) (( void (*) (List_1_t27 *, InvBaseItem_t24 *, const MethodInfo*))List_1_Add_m3400_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<InvBaseItem>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m19822(__this, ___newCount, method) (( void (*) (List_1_t27 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m19823_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<InvBaseItem>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m19824(__this, ___collection, method) (( void (*) (List_1_t27 *, Object_t*, const MethodInfo*))List_1_AddCollection_m19825_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<InvBaseItem>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m19826(__this, ___enumerable, method) (( void (*) (List_1_t27 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m19827_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<InvBaseItem>::Clear()
#define List_1_Clear_m19828(__this, method) (( void (*) (List_1_t27 *, const MethodInfo*))List_1_Clear_m3393_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<InvBaseItem>::Contains(T)
#define List_1_Contains_m19829(__this, ___item, method) (( bool (*) (List_1_t27 *, InvBaseItem_t24 *, const MethodInfo*))List_1_Contains_m3401_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<InvBaseItem>::CopyTo(T[])
#define List_1_CopyTo_m19830(__this, ___array, method) (( void (*) (List_1_t27 *, InvBaseItemU5BU5D_t3512*, const MethodInfo*))List_1_CopyTo_m19831_gshared)(__this, ___array, method)
// System.Void System.Collections.Generic.List`1<InvBaseItem>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m19832(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t27 *, InvBaseItemU5BU5D_t3512*, int32_t, const MethodInfo*))List_1_CopyTo_m3402_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<InvBaseItem>::GetEnumerator()
#define List_1_GetEnumerator_m19833(__this, method) (( Enumerator_t3523  (*) (List_1_t27 *, const MethodInfo*))List_1_GetEnumerator_m19834_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<InvBaseItem>::IndexOf(T)
#define List_1_IndexOf_m19835(__this, ___item, method) (( int32_t (*) (List_1_t27 *, InvBaseItem_t24 *, const MethodInfo*))List_1_IndexOf_m3405_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<InvBaseItem>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m19836(__this, ___start, ___delta, method) (( void (*) (List_1_t27 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m19837_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<InvBaseItem>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m19838(__this, ___index, method) (( void (*) (List_1_t27 *, int32_t, const MethodInfo*))List_1_CheckIndex_m19839_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<InvBaseItem>::Insert(System.Int32,T)
#define List_1_Insert_m19840(__this, ___index, ___item, method) (( void (*) (List_1_t27 *, int32_t, InvBaseItem_t24 *, const MethodInfo*))List_1_Insert_m3406_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<InvBaseItem>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m19841(__this, ___collection, method) (( void (*) (List_1_t27 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m19842_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<InvBaseItem>::Remove(T)
#define List_1_Remove_m19843(__this, ___item, method) (( bool (*) (List_1_t27 *, InvBaseItem_t24 *, const MethodInfo*))List_1_Remove_m3403_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<InvBaseItem>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m19844(__this, ___index, method) (( void (*) (List_1_t27 *, int32_t, const MethodInfo*))List_1_RemoveAt_m3398_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<InvBaseItem>::Sort()
#define List_1_Sort_m19845(__this, method) (( void (*) (List_1_t27 *, const MethodInfo*))List_1_Sort_m19846_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<InvBaseItem>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m19847(__this, ___comparer, method) (( void (*) (List_1_t27 *, Object_t*, const MethodInfo*))List_1_Sort_m19848_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<InvBaseItem>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m19849(__this, ___comparison, method) (( void (*) (List_1_t27 *, Comparison_1_t3524 *, const MethodInfo*))List_1_Sort_m19850_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<InvBaseItem>::ToArray()
#define List_1_ToArray_m19851(__this, method) (( InvBaseItemU5BU5D_t3512* (*) (List_1_t27 *, const MethodInfo*))List_1_ToArray_m19852_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<InvBaseItem>::get_Capacity()
#define List_1_get_Capacity_m19853(__this, method) (( int32_t (*) (List_1_t27 *, const MethodInfo*))List_1_get_Capacity_m19854_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<InvBaseItem>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m19855(__this, ___value, method) (( void (*) (List_1_t27 *, int32_t, const MethodInfo*))List_1_set_Capacity_m19856_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<InvBaseItem>::get_Count()
#define List_1_get_Count_m19857(__this, method) (( int32_t (*) (List_1_t27 *, const MethodInfo*))List_1_get_Count_m3387_gshared)(__this, method)
// T System.Collections.Generic.List`1<InvBaseItem>::get_Item(System.Int32)
#define List_1_get_Item_m19858(__this, ___index, method) (( InvBaseItem_t24 * (*) (List_1_t27 *, int32_t, const MethodInfo*))List_1_get_Item_m3407_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<InvBaseItem>::set_Item(System.Int32,T)
#define List_1_set_Item_m19859(__this, ___index, ___value, method) (( void (*) (List_1_t27 *, int32_t, InvBaseItem_t24 *, const MethodInfo*))List_1_set_Item_m3408_gshared)(__this, ___index, ___value, method)
