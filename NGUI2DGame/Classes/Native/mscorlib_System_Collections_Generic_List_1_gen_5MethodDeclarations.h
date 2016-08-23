#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t144;
// System.Object
struct Object_t;
// UnityEngine.Transform
struct Transform_t8;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Transform>
struct IEnumerable_1_t4091;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform>
struct IEnumerator_1_t4092;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Collections.Generic.ICollection`1<UnityEngine.Transform>
struct ICollection_1_t4093;
// UnityEngine.Transform[]
struct TransformU5BU5D_t312;
// System.Collections.Generic.IComparer`1<UnityEngine.Transform>
struct IComparer_1_t4094;
// System.Comparison`1<UnityEngine.Transform>
struct Comparison_1_t316;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_13.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_17MethodDeclarations.h"
#define List_1__ctor_m1469(__this, method) (( void (*) (List_1_t144 *, const MethodInfo*))List_1__ctor_m3223_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m20460(__this, ___collection, method) (( void (*) (List_1_t144 *, Object_t*, const MethodInfo*))List_1__ctor_m19804_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor(System.Int32)
#define List_1__ctor_m20461(__this, ___capacity, method) (( void (*) (List_1_t144 *, int32_t, const MethodInfo*))List_1__ctor_m19806_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.cctor()
#define List_1__cctor_m20462(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m19808_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20463(__this, method) (( Object_t* (*) (List_1_t144 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3404_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m20464(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t144 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m3389_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m20465(__this, method) (( Object_t * (*) (List_1_t144 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m3386_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m20466(__this, ___item, method) (( int32_t (*) (List_1_t144 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m3392_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m20467(__this, ___item, method) (( bool (*) (List_1_t144 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m3394_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m20468(__this, ___item, method) (( int32_t (*) (List_1_t144 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m3395_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m20469(__this, ___index, ___item, method) (( void (*) (List_1_t144 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m3396_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m20470(__this, ___item, method) (( void (*) (List_1_t144 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m3397_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20471(__this, method) (( bool (*) (List_1_t144 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3399_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m20472(__this, method) (( Object_t * (*) (List_1_t144 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3388_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m20473(__this, ___index, method) (( Object_t * (*) (List_1_t144 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m3390_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m20474(__this, ___index, ___value, method) (( void (*) (List_1_t144 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m3391_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(T)
#define List_1_Add_m20475(__this, ___item, method) (( void (*) (List_1_t144 *, Transform_t8 *, const MethodInfo*))List_1_Add_m3400_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m20476(__this, ___newCount, method) (( void (*) (List_1_t144 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m19823_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m20477(__this, ___collection, method) (( void (*) (List_1_t144 *, Object_t*, const MethodInfo*))List_1_AddCollection_m19825_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m20478(__this, ___enumerable, method) (( void (*) (List_1_t144 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m19827_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Clear()
#define List_1_Clear_m20479(__this, method) (( void (*) (List_1_t144 *, const MethodInfo*))List_1_Clear_m3393_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Transform>::Contains(T)
#define List_1_Contains_m20480(__this, ___item, method) (( bool (*) (List_1_t144 *, Transform_t8 *, const MethodInfo*))List_1_Contains_m3401_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::CopyTo(T[])
#define List_1_CopyTo_m20481(__this, ___array, method) (( void (*) (List_1_t144 *, TransformU5BU5D_t312*, const MethodInfo*))List_1_CopyTo_m19831_gshared)(__this, ___array, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m20482(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t144 *, TransformU5BU5D_t312*, int32_t, const MethodInfo*))List_1_CopyTo_m3402_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Transform>::GetEnumerator()
#define List_1_GetEnumerator_m20483(__this, method) (( Enumerator_t3571  (*) (List_1_t144 *, const MethodInfo*))List_1_GetEnumerator_m19834_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::IndexOf(T)
#define List_1_IndexOf_m20484(__this, ___item, method) (( int32_t (*) (List_1_t144 *, Transform_t8 *, const MethodInfo*))List_1_IndexOf_m3405_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m20485(__this, ___start, ___delta, method) (( void (*) (List_1_t144 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m19837_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m20486(__this, ___index, method) (( void (*) (List_1_t144 *, int32_t, const MethodInfo*))List_1_CheckIndex_m19839_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Insert(System.Int32,T)
#define List_1_Insert_m20487(__this, ___index, ___item, method) (( void (*) (List_1_t144 *, int32_t, Transform_t8 *, const MethodInfo*))List_1_Insert_m3406_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m20488(__this, ___collection, method) (( void (*) (List_1_t144 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m19842_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Transform>::Remove(T)
#define List_1_Remove_m20489(__this, ___item, method) (( bool (*) (List_1_t144 *, Transform_t8 *, const MethodInfo*))List_1_Remove_m3403_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m20490(__this, ___index, method) (( void (*) (List_1_t144 *, int32_t, const MethodInfo*))List_1_RemoveAt_m3398_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Sort()
#define List_1_Sort_m20491(__this, method) (( void (*) (List_1_t144 *, const MethodInfo*))List_1_Sort_m19846_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m20492(__this, ___comparer, method) (( void (*) (List_1_t144 *, Object_t*, const MethodInfo*))List_1_Sort_m19848_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m1471(__this, ___comparison, method) (( void (*) (List_1_t144 *, Comparison_1_t316 *, const MethodInfo*))List_1_Sort_m19850_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Transform>::ToArray()
#define List_1_ToArray_m20493(__this, method) (( TransformU5BU5D_t312* (*) (List_1_t144 *, const MethodInfo*))List_1_ToArray_m19852_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Capacity()
#define List_1_get_Capacity_m20494(__this, method) (( int32_t (*) (List_1_t144 *, const MethodInfo*))List_1_get_Capacity_m19854_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m20495(__this, ___value, method) (( void (*) (List_1_t144 *, int32_t, const MethodInfo*))List_1_set_Capacity_m19856_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
#define List_1_get_Count_m20496(__this, method) (( int32_t (*) (List_1_t144 *, const MethodInfo*))List_1_get_Count_m3387_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
#define List_1_get_Item_m20497(__this, ___index, method) (( Transform_t8 * (*) (List_1_t144 *, int32_t, const MethodInfo*))List_1_get_Item_m3407_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::set_Item(System.Int32,T)
#define List_1_set_Item_m20498(__this, ___index, ___value, method) (( void (*) (List_1_t144 *, int32_t, Transform_t8 *, const MethodInfo*))List_1_set_Item_m3408_gshared)(__this, ___index, ___value, method)
