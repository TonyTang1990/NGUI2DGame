#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<BMSymbol>
struct List_1_t230;
// System.Object
struct Object_t;
// BMSymbol
struct BMSymbol_t157;
// System.Collections.Generic.IEnumerable`1<BMSymbol>
struct IEnumerable_1_t4146;
// System.Collections.Generic.IEnumerator`1<BMSymbol>
struct IEnumerator_1_t4147;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Collections.Generic.ICollection`1<BMSymbol>
struct ICollection_1_t4148;
// BMSymbol[]
struct BMSymbolU5BU5D_t3668;
// System.Collections.Generic.IComparer`1<BMSymbol>
struct IComparer_1_t4149;
// System.Comparison`1<BMSymbol>
struct Comparison_1_t3670;
// System.Collections.Generic.List`1/Enumerator<BMSymbol>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_21.h"

// System.Void System.Collections.Generic.List`1<BMSymbol>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_17MethodDeclarations.h"
#define List_1__ctor_m1740(__this, method) (( void (*) (List_1_t230 *, const MethodInfo*))List_1__ctor_m3223_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<BMSymbol>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m21665(__this, ___collection, method) (( void (*) (List_1_t230 *, Object_t*, const MethodInfo*))List_1__ctor_m19804_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<BMSymbol>::.ctor(System.Int32)
#define List_1__ctor_m21666(__this, ___capacity, method) (( void (*) (List_1_t230 *, int32_t, const MethodInfo*))List_1__ctor_m19806_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<BMSymbol>::.cctor()
#define List_1__cctor_m21667(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m19808_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<BMSymbol>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21668(__this, method) (( Object_t* (*) (List_1_t230 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3404_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<BMSymbol>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m21669(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t230 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m3389_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<BMSymbol>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m21670(__this, method) (( Object_t * (*) (List_1_t230 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m3386_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<BMSymbol>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m21671(__this, ___item, method) (( int32_t (*) (List_1_t230 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m3392_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<BMSymbol>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m21672(__this, ___item, method) (( bool (*) (List_1_t230 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m3394_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<BMSymbol>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m21673(__this, ___item, method) (( int32_t (*) (List_1_t230 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m3395_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<BMSymbol>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m21674(__this, ___index, ___item, method) (( void (*) (List_1_t230 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m3396_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<BMSymbol>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m21675(__this, ___item, method) (( void (*) (List_1_t230 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m3397_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<BMSymbol>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21676(__this, method) (( bool (*) (List_1_t230 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3399_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<BMSymbol>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m21677(__this, method) (( Object_t * (*) (List_1_t230 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3388_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<BMSymbol>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m21678(__this, ___index, method) (( Object_t * (*) (List_1_t230 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m3390_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<BMSymbol>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m21679(__this, ___index, ___value, method) (( void (*) (List_1_t230 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m3391_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<BMSymbol>::Add(T)
#define List_1_Add_m21680(__this, ___item, method) (( void (*) (List_1_t230 *, BMSymbol_t157 *, const MethodInfo*))List_1_Add_m3400_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<BMSymbol>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m21681(__this, ___newCount, method) (( void (*) (List_1_t230 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m19823_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<BMSymbol>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m21682(__this, ___collection, method) (( void (*) (List_1_t230 *, Object_t*, const MethodInfo*))List_1_AddCollection_m19825_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<BMSymbol>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m21683(__this, ___enumerable, method) (( void (*) (List_1_t230 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m19827_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<BMSymbol>::Clear()
#define List_1_Clear_m21684(__this, method) (( void (*) (List_1_t230 *, const MethodInfo*))List_1_Clear_m3393_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<BMSymbol>::Contains(T)
#define List_1_Contains_m21685(__this, ___item, method) (( bool (*) (List_1_t230 *, BMSymbol_t157 *, const MethodInfo*))List_1_Contains_m3401_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<BMSymbol>::CopyTo(T[])
#define List_1_CopyTo_m21686(__this, ___array, method) (( void (*) (List_1_t230 *, BMSymbolU5BU5D_t3668*, const MethodInfo*))List_1_CopyTo_m19831_gshared)(__this, ___array, method)
// System.Void System.Collections.Generic.List`1<BMSymbol>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m21687(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t230 *, BMSymbolU5BU5D_t3668*, int32_t, const MethodInfo*))List_1_CopyTo_m3402_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<BMSymbol>::GetEnumerator()
#define List_1_GetEnumerator_m21688(__this, method) (( Enumerator_t3669  (*) (List_1_t230 *, const MethodInfo*))List_1_GetEnumerator_m19834_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<BMSymbol>::IndexOf(T)
#define List_1_IndexOf_m21689(__this, ___item, method) (( int32_t (*) (List_1_t230 *, BMSymbol_t157 *, const MethodInfo*))List_1_IndexOf_m3405_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<BMSymbol>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m21690(__this, ___start, ___delta, method) (( void (*) (List_1_t230 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m19837_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<BMSymbol>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m21691(__this, ___index, method) (( void (*) (List_1_t230 *, int32_t, const MethodInfo*))List_1_CheckIndex_m19839_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<BMSymbol>::Insert(System.Int32,T)
#define List_1_Insert_m21692(__this, ___index, ___item, method) (( void (*) (List_1_t230 *, int32_t, BMSymbol_t157 *, const MethodInfo*))List_1_Insert_m3406_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<BMSymbol>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m21693(__this, ___collection, method) (( void (*) (List_1_t230 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m19842_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<BMSymbol>::Remove(T)
#define List_1_Remove_m21694(__this, ___item, method) (( bool (*) (List_1_t230 *, BMSymbol_t157 *, const MethodInfo*))List_1_Remove_m3403_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<BMSymbol>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m21695(__this, ___index, method) (( void (*) (List_1_t230 *, int32_t, const MethodInfo*))List_1_RemoveAt_m3398_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<BMSymbol>::Sort()
#define List_1_Sort_m21696(__this, method) (( void (*) (List_1_t230 *, const MethodInfo*))List_1_Sort_m19846_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<BMSymbol>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m21697(__this, ___comparer, method) (( void (*) (List_1_t230 *, Object_t*, const MethodInfo*))List_1_Sort_m19848_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<BMSymbol>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m21698(__this, ___comparison, method) (( void (*) (List_1_t230 *, Comparison_1_t3670 *, const MethodInfo*))List_1_Sort_m19850_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<BMSymbol>::ToArray()
#define List_1_ToArray_m21699(__this, method) (( BMSymbolU5BU5D_t3668* (*) (List_1_t230 *, const MethodInfo*))List_1_ToArray_m19852_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<BMSymbol>::get_Capacity()
#define List_1_get_Capacity_m21700(__this, method) (( int32_t (*) (List_1_t230 *, const MethodInfo*))List_1_get_Capacity_m19854_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<BMSymbol>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m21701(__this, ___value, method) (( void (*) (List_1_t230 *, int32_t, const MethodInfo*))List_1_set_Capacity_m19856_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<BMSymbol>::get_Count()
#define List_1_get_Count_m21702(__this, method) (( int32_t (*) (List_1_t230 *, const MethodInfo*))List_1_get_Count_m3387_gshared)(__this, method)
// T System.Collections.Generic.List`1<BMSymbol>::get_Item(System.Int32)
#define List_1_get_Item_m21703(__this, ___index, method) (( BMSymbol_t157 * (*) (List_1_t230 *, int32_t, const MethodInfo*))List_1_get_Item_m3407_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<BMSymbol>::set_Item(System.Int32,T)
#define List_1_set_Item_m21704(__this, ___index, ___value, method) (( void (*) (List_1_t230 *, int32_t, BMSymbol_t157 *, const MethodInfo*))List_1_set_Item_m3408_gshared)(__this, ___index, ___value, method)
