#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<InvStat>
struct List_1_t23;
// System.Object
struct Object_t;
// InvStat
struct InvStat_t34;
// System.Collections.Generic.IEnumerable`1<InvStat>
struct IEnumerable_1_t4063;
// System.Collections.Generic.IEnumerator`1<InvStat>
struct IEnumerator_1_t4064;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Collections.Generic.ICollection`1<InvStat>
struct ICollection_1_t4065;
// InvStat[]
struct InvStatU5BU5D_t3526;
// System.Collections.Generic.IComparer`1<InvStat>
struct IComparer_1_t4066;
// System.Comparison`1<InvStat>
struct Comparison_1_t302;
// System.Collections.Generic.List`1/Enumerator<InvStat>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_8.h"

// System.Void System.Collections.Generic.List`1<InvStat>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_17MethodDeclarations.h"
#define List_1__ctor_m1290(__this, method) (( void (*) (List_1_t23 *, const MethodInfo*))List_1__ctor_m3223_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<InvStat>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m19919(__this, ___collection, method) (( void (*) (List_1_t23 *, Object_t*, const MethodInfo*))List_1__ctor_m19804_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<InvStat>::.ctor(System.Int32)
#define List_1__ctor_m19920(__this, ___capacity, method) (( void (*) (List_1_t23 *, int32_t, const MethodInfo*))List_1__ctor_m19806_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<InvStat>::.cctor()
#define List_1__cctor_m19921(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m19808_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<InvStat>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19922(__this, method) (( Object_t* (*) (List_1_t23 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3404_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<InvStat>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m19923(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t23 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m3389_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<InvStat>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m19924(__this, method) (( Object_t * (*) (List_1_t23 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m3386_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<InvStat>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m19925(__this, ___item, method) (( int32_t (*) (List_1_t23 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m3392_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<InvStat>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m19926(__this, ___item, method) (( bool (*) (List_1_t23 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m3394_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<InvStat>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m19927(__this, ___item, method) (( int32_t (*) (List_1_t23 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m3395_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<InvStat>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m19928(__this, ___index, ___item, method) (( void (*) (List_1_t23 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m3396_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<InvStat>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m19929(__this, ___item, method) (( void (*) (List_1_t23 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m3397_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<InvStat>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19930(__this, method) (( bool (*) (List_1_t23 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3399_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<InvStat>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m19931(__this, method) (( Object_t * (*) (List_1_t23 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3388_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<InvStat>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m19932(__this, ___index, method) (( Object_t * (*) (List_1_t23 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m3390_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<InvStat>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m19933(__this, ___index, ___value, method) (( void (*) (List_1_t23 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m3391_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<InvStat>::Add(T)
#define List_1_Add_m19934(__this, ___item, method) (( void (*) (List_1_t23 *, InvStat_t34 *, const MethodInfo*))List_1_Add_m3400_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<InvStat>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m19935(__this, ___newCount, method) (( void (*) (List_1_t23 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m19823_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<InvStat>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m19936(__this, ___collection, method) (( void (*) (List_1_t23 *, Object_t*, const MethodInfo*))List_1_AddCollection_m19825_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<InvStat>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m19937(__this, ___enumerable, method) (( void (*) (List_1_t23 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m19827_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<InvStat>::Clear()
#define List_1_Clear_m19938(__this, method) (( void (*) (List_1_t23 *, const MethodInfo*))List_1_Clear_m3393_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<InvStat>::Contains(T)
#define List_1_Contains_m19939(__this, ___item, method) (( bool (*) (List_1_t23 *, InvStat_t34 *, const MethodInfo*))List_1_Contains_m3401_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<InvStat>::CopyTo(T[])
#define List_1_CopyTo_m19940(__this, ___array, method) (( void (*) (List_1_t23 *, InvStatU5BU5D_t3526*, const MethodInfo*))List_1_CopyTo_m19831_gshared)(__this, ___array, method)
// System.Void System.Collections.Generic.List`1<InvStat>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m19941(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t23 *, InvStatU5BU5D_t3526*, int32_t, const MethodInfo*))List_1_CopyTo_m3402_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<InvStat>::GetEnumerator()
#define List_1_GetEnumerator_m19942(__this, method) (( Enumerator_t3527  (*) (List_1_t23 *, const MethodInfo*))List_1_GetEnumerator_m19834_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<InvStat>::IndexOf(T)
#define List_1_IndexOf_m19943(__this, ___item, method) (( int32_t (*) (List_1_t23 *, InvStat_t34 *, const MethodInfo*))List_1_IndexOf_m3405_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<InvStat>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m19944(__this, ___start, ___delta, method) (( void (*) (List_1_t23 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m19837_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<InvStat>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m19945(__this, ___index, method) (( void (*) (List_1_t23 *, int32_t, const MethodInfo*))List_1_CheckIndex_m19839_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<InvStat>::Insert(System.Int32,T)
#define List_1_Insert_m19946(__this, ___index, ___item, method) (( void (*) (List_1_t23 *, int32_t, InvStat_t34 *, const MethodInfo*))List_1_Insert_m3406_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<InvStat>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m19947(__this, ___collection, method) (( void (*) (List_1_t23 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m19842_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<InvStat>::Remove(T)
#define List_1_Remove_m19948(__this, ___item, method) (( bool (*) (List_1_t23 *, InvStat_t34 *, const MethodInfo*))List_1_Remove_m3403_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<InvStat>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m19949(__this, ___index, method) (( void (*) (List_1_t23 *, int32_t, const MethodInfo*))List_1_RemoveAt_m3398_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<InvStat>::Sort()
#define List_1_Sort_m19950(__this, method) (( void (*) (List_1_t23 *, const MethodInfo*))List_1_Sort_m19846_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<InvStat>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m19951(__this, ___comparer, method) (( void (*) (List_1_t23 *, Object_t*, const MethodInfo*))List_1_Sort_m19848_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<InvStat>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m1306(__this, ___comparison, method) (( void (*) (List_1_t23 *, Comparison_1_t302 *, const MethodInfo*))List_1_Sort_m19850_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<InvStat>::ToArray()
#define List_1_ToArray_m19952(__this, method) (( InvStatU5BU5D_t3526* (*) (List_1_t23 *, const MethodInfo*))List_1_ToArray_m19852_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<InvStat>::get_Capacity()
#define List_1_get_Capacity_m19953(__this, method) (( int32_t (*) (List_1_t23 *, const MethodInfo*))List_1_get_Capacity_m19854_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<InvStat>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m19954(__this, ___value, method) (( void (*) (List_1_t23 *, int32_t, const MethodInfo*))List_1_set_Capacity_m19856_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<InvStat>::get_Count()
#define List_1_get_Count_m19955(__this, method) (( int32_t (*) (List_1_t23 *, const MethodInfo*))List_1_get_Count_m3387_gshared)(__this, method)
// T System.Collections.Generic.List`1<InvStat>::get_Item(System.Int32)
#define List_1_get_Item_m19956(__this, ___index, method) (( InvStat_t34 * (*) (List_1_t23 *, int32_t, const MethodInfo*))List_1_get_Item_m3407_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<InvStat>::set_Item(System.Int32,T)
#define List_1_set_Item_m19957(__this, ___index, ___value, method) (( void (*) (List_1_t23 *, int32_t, InvStat_t34 *, const MethodInfo*))List_1_set_Item_m3408_gshared)(__this, ___index, ___value, method)
