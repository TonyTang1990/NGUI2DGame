#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UpdateManager/UpdateEntry>
struct List_1_t76;
// System.Object
struct Object_t;
// UpdateManager/UpdateEntry
struct UpdateEntry_t68;
// System.Collections.Generic.IEnumerable`1<UpdateManager/UpdateEntry>
struct IEnumerable_1_t4086;
// System.Collections.Generic.IEnumerator`1<UpdateManager/UpdateEntry>
struct IEnumerator_1_t4087;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Collections.Generic.ICollection`1<UpdateManager/UpdateEntry>
struct ICollection_1_t4088;
// UpdateManager/UpdateEntry[]
struct UpdateEntryU5BU5D_t3560;
// System.Collections.Generic.IComparer`1<UpdateManager/UpdateEntry>
struct IComparer_1_t4089;
// System.Comparison`1<UpdateManager/UpdateEntry>
struct Comparison_1_t310;
// System.Collections.Generic.List`1/Enumerator<UpdateManager/UpdateEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_11.h"

// System.Void System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_17MethodDeclarations.h"
#define List_1__ctor_m1374(__this, method) (( void (*) (List_1_t76 *, const MethodInfo*))List_1__ctor_m3223_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m20328(__this, ___collection, method) (( void (*) (List_1_t76 *, Object_t*, const MethodInfo*))List_1__ctor_m19804_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::.ctor(System.Int32)
#define List_1__ctor_m20329(__this, ___capacity, method) (( void (*) (List_1_t76 *, int32_t, const MethodInfo*))List_1__ctor_m19806_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::.cctor()
#define List_1__cctor_m20330(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m19808_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20331(__this, method) (( Object_t* (*) (List_1_t76 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3404_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m20332(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t76 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m3389_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m20333(__this, method) (( Object_t * (*) (List_1_t76 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m3386_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m20334(__this, ___item, method) (( int32_t (*) (List_1_t76 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m3392_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m20335(__this, ___item, method) (( bool (*) (List_1_t76 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m3394_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m20336(__this, ___item, method) (( int32_t (*) (List_1_t76 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m3395_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m20337(__this, ___index, ___item, method) (( void (*) (List_1_t76 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m3396_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m20338(__this, ___item, method) (( void (*) (List_1_t76 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m3397_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20339(__this, method) (( bool (*) (List_1_t76 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3399_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m20340(__this, method) (( Object_t * (*) (List_1_t76 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3388_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m20341(__this, ___index, method) (( Object_t * (*) (List_1_t76 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m3390_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m20342(__this, ___index, ___value, method) (( void (*) (List_1_t76 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m3391_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::Add(T)
#define List_1_Add_m20343(__this, ___item, method) (( void (*) (List_1_t76 *, UpdateEntry_t68 *, const MethodInfo*))List_1_Add_m3400_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m20344(__this, ___newCount, method) (( void (*) (List_1_t76 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m19823_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m20345(__this, ___collection, method) (( void (*) (List_1_t76 *, Object_t*, const MethodInfo*))List_1_AddCollection_m19825_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m20346(__this, ___enumerable, method) (( void (*) (List_1_t76 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m19827_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::Clear()
#define List_1_Clear_m20347(__this, method) (( void (*) (List_1_t76 *, const MethodInfo*))List_1_Clear_m3393_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::Contains(T)
#define List_1_Contains_m20348(__this, ___item, method) (( bool (*) (List_1_t76 *, UpdateEntry_t68 *, const MethodInfo*))List_1_Contains_m3401_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::CopyTo(T[])
#define List_1_CopyTo_m20349(__this, ___array, method) (( void (*) (List_1_t76 *, UpdateEntryU5BU5D_t3560*, const MethodInfo*))List_1_CopyTo_m19831_gshared)(__this, ___array, method)
// System.Void System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m20350(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t76 *, UpdateEntryU5BU5D_t3560*, int32_t, const MethodInfo*))List_1_CopyTo_m3402_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::GetEnumerator()
#define List_1_GetEnumerator_m20351(__this, method) (( Enumerator_t3561  (*) (List_1_t76 *, const MethodInfo*))List_1_GetEnumerator_m19834_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::IndexOf(T)
#define List_1_IndexOf_m20352(__this, ___item, method) (( int32_t (*) (List_1_t76 *, UpdateEntry_t68 *, const MethodInfo*))List_1_IndexOf_m3405_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m20353(__this, ___start, ___delta, method) (( void (*) (List_1_t76 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m19837_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m20354(__this, ___index, method) (( void (*) (List_1_t76 *, int32_t, const MethodInfo*))List_1_CheckIndex_m19839_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::Insert(System.Int32,T)
#define List_1_Insert_m20355(__this, ___index, ___item, method) (( void (*) (List_1_t76 *, int32_t, UpdateEntry_t68 *, const MethodInfo*))List_1_Insert_m3406_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m20356(__this, ___collection, method) (( void (*) (List_1_t76 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m19842_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::Remove(T)
#define List_1_Remove_m20357(__this, ___item, method) (( bool (*) (List_1_t76 *, UpdateEntry_t68 *, const MethodInfo*))List_1_Remove_m3403_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m20358(__this, ___index, method) (( void (*) (List_1_t76 *, int32_t, const MethodInfo*))List_1_RemoveAt_m3398_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::Sort()
#define List_1_Sort_m20359(__this, method) (( void (*) (List_1_t76 *, const MethodInfo*))List_1_Sort_m19846_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m20360(__this, ___comparer, method) (( void (*) (List_1_t76 *, Object_t*, const MethodInfo*))List_1_Sort_m19848_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m1386(__this, ___comparison, method) (( void (*) (List_1_t76 *, Comparison_1_t310 *, const MethodInfo*))List_1_Sort_m19850_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::ToArray()
#define List_1_ToArray_m20361(__this, method) (( UpdateEntryU5BU5D_t3560* (*) (List_1_t76 *, const MethodInfo*))List_1_ToArray_m19852_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::get_Capacity()
#define List_1_get_Capacity_m20362(__this, method) (( int32_t (*) (List_1_t76 *, const MethodInfo*))List_1_get_Capacity_m19854_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m20363(__this, ___value, method) (( void (*) (List_1_t76 *, int32_t, const MethodInfo*))List_1_set_Capacity_m19856_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::get_Count()
#define List_1_get_Count_m20364(__this, method) (( int32_t (*) (List_1_t76 *, const MethodInfo*))List_1_get_Count_m3387_gshared)(__this, method)
// T System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::get_Item(System.Int32)
#define List_1_get_Item_m20365(__this, ___index, method) (( UpdateEntry_t68 * (*) (List_1_t76 *, int32_t, const MethodInfo*))List_1_get_Item_m3407_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::set_Item(System.Int32,T)
#define List_1_set_Item_m20366(__this, ___index, ___value, method) (( void (*) (List_1_t76 *, int32_t, UpdateEntry_t68 *, const MethodInfo*))List_1_set_Item_m3408_gshared)(__this, ___index, ___value, method)
