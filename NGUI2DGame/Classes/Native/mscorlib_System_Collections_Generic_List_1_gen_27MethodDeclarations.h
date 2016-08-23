#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t627;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t626;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Events.PersistentCall>
struct IEnumerable_1_t4281;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.PersistentCall>
struct IEnumerator_1_t4282;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Collections.Generic.ICollection`1<UnityEngine.Events.PersistentCall>
struct ICollection_1_t4283;
// UnityEngine.Events.PersistentCall[]
struct PersistentCallU5BU5D_t3855;
// System.Collections.Generic.IComparer`1<UnityEngine.Events.PersistentCall>
struct IComparer_1_t4284;
// System.Comparison`1<UnityEngine.Events.PersistentCall>
struct Comparison_1_t3857;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_32.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_17MethodDeclarations.h"
#define List_1__ctor_m3287(__this, method) (( void (*) (List_1_t627 *, const MethodInfo*))List_1__ctor_m3223_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m24074(__this, ___collection, method) (( void (*) (List_1_t627 *, Object_t*, const MethodInfo*))List_1__ctor_m19804_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor(System.Int32)
#define List_1__ctor_m24075(__this, ___capacity, method) (( void (*) (List_1_t627 *, int32_t, const MethodInfo*))List_1__ctor_m19806_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.cctor()
#define List_1__cctor_m24076(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m19808_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24077(__this, method) (( Object_t* (*) (List_1_t627 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3404_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m24078(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t627 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m3389_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m24079(__this, method) (( Object_t * (*) (List_1_t627 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m3386_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m24080(__this, ___item, method) (( int32_t (*) (List_1_t627 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m3392_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m24081(__this, ___item, method) (( bool (*) (List_1_t627 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m3394_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m24082(__this, ___item, method) (( int32_t (*) (List_1_t627 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m3395_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m24083(__this, ___index, ___item, method) (( void (*) (List_1_t627 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m3396_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m24084(__this, ___item, method) (( void (*) (List_1_t627 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m3397_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24085(__this, method) (( bool (*) (List_1_t627 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3399_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m24086(__this, method) (( Object_t * (*) (List_1_t627 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3388_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m24087(__this, ___index, method) (( Object_t * (*) (List_1_t627 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m3390_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m24088(__this, ___index, ___value, method) (( void (*) (List_1_t627 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m3391_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Add(T)
#define List_1_Add_m24089(__this, ___item, method) (( void (*) (List_1_t627 *, PersistentCall_t626 *, const MethodInfo*))List_1_Add_m3400_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m24090(__this, ___newCount, method) (( void (*) (List_1_t627 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m19823_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m24091(__this, ___collection, method) (( void (*) (List_1_t627 *, Object_t*, const MethodInfo*))List_1_AddCollection_m19825_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m24092(__this, ___enumerable, method) (( void (*) (List_1_t627 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m19827_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Clear()
#define List_1_Clear_m24093(__this, method) (( void (*) (List_1_t627 *, const MethodInfo*))List_1_Clear_m3393_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Contains(T)
#define List_1_Contains_m24094(__this, ___item, method) (( bool (*) (List_1_t627 *, PersistentCall_t626 *, const MethodInfo*))List_1_Contains_m3401_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CopyTo(T[])
#define List_1_CopyTo_m24095(__this, ___array, method) (( void (*) (List_1_t627 *, PersistentCallU5BU5D_t3855*, const MethodInfo*))List_1_CopyTo_m19831_gshared)(__this, ___array, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m24096(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t627 *, PersistentCallU5BU5D_t3855*, int32_t, const MethodInfo*))List_1_CopyTo_m3402_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GetEnumerator()
#define List_1_GetEnumerator_m24097(__this, method) (( Enumerator_t3856  (*) (List_1_t627 *, const MethodInfo*))List_1_GetEnumerator_m19834_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::IndexOf(T)
#define List_1_IndexOf_m24098(__this, ___item, method) (( int32_t (*) (List_1_t627 *, PersistentCall_t626 *, const MethodInfo*))List_1_IndexOf_m3405_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m24099(__this, ___start, ___delta, method) (( void (*) (List_1_t627 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m19837_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m24100(__this, ___index, method) (( void (*) (List_1_t627 *, int32_t, const MethodInfo*))List_1_CheckIndex_m19839_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Insert(System.Int32,T)
#define List_1_Insert_m24101(__this, ___index, ___item, method) (( void (*) (List_1_t627 *, int32_t, PersistentCall_t626 *, const MethodInfo*))List_1_Insert_m3406_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m24102(__this, ___collection, method) (( void (*) (List_1_t627 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m19842_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Remove(T)
#define List_1_Remove_m24103(__this, ___item, method) (( bool (*) (List_1_t627 *, PersistentCall_t626 *, const MethodInfo*))List_1_Remove_m3403_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m24104(__this, ___index, method) (( void (*) (List_1_t627 *, int32_t, const MethodInfo*))List_1_RemoveAt_m3398_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Sort()
#define List_1_Sort_m24105(__this, method) (( void (*) (List_1_t627 *, const MethodInfo*))List_1_Sort_m19846_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m24106(__this, ___comparer, method) (( void (*) (List_1_t627 *, Object_t*, const MethodInfo*))List_1_Sort_m19848_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m24107(__this, ___comparison, method) (( void (*) (List_1_t627 *, Comparison_1_t3857 *, const MethodInfo*))List_1_Sort_m19850_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::ToArray()
#define List_1_ToArray_m24108(__this, method) (( PersistentCallU5BU5D_t3855* (*) (List_1_t627 *, const MethodInfo*))List_1_ToArray_m19852_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Capacity()
#define List_1_get_Capacity_m24109(__this, method) (( int32_t (*) (List_1_t627 *, const MethodInfo*))List_1_get_Capacity_m19854_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m24110(__this, ___value, method) (( void (*) (List_1_t627 *, int32_t, const MethodInfo*))List_1_set_Capacity_m19856_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Count()
#define List_1_get_Count_m24111(__this, method) (( int32_t (*) (List_1_t627 *, const MethodInfo*))List_1_get_Count_m3387_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Item(System.Int32)
#define List_1_get_Item_m24112(__this, ___index, method) (( PersistentCall_t626 * (*) (List_1_t627 *, int32_t, const MethodInfo*))List_1_get_Item_m3407_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::set_Item(System.Int32,T)
#define List_1_set_Item_m24113(__this, ___index, ___value, method) (( void (*) (List_1_t627 *, int32_t, PersistentCall_t626 *, const MethodInfo*))List_1_set_Item_m3408_gshared)(__this, ___index, ___value, method)
