#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t629;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t624;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Events.BaseInvokableCall>
struct IEnumerable_1_t4285;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.BaseInvokableCall>
struct IEnumerator_1_t4286;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Collections.Generic.ICollection`1<UnityEngine.Events.BaseInvokableCall>
struct ICollection_1_t4287;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t3858;
// System.Collections.Generic.IComparer`1<UnityEngine.Events.BaseInvokableCall>
struct IComparer_1_t4288;
// System.Comparison`1<UnityEngine.Events.BaseInvokableCall>
struct Comparison_1_t3860;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_33.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_17MethodDeclarations.h"
#define List_1__ctor_m3288(__this, method) (( void (*) (List_1_t629 *, const MethodInfo*))List_1__ctor_m3223_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m24124(__this, ___collection, method) (( void (*) (List_1_t629 *, Object_t*, const MethodInfo*))List_1__ctor_m19804_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Int32)
#define List_1__ctor_m24125(__this, ___capacity, method) (( void (*) (List_1_t629 *, int32_t, const MethodInfo*))List_1__ctor_m19806_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.cctor()
#define List_1__cctor_m24126(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m19808_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24127(__this, method) (( Object_t* (*) (List_1_t629 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3404_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m24128(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t629 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m3389_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m24129(__this, method) (( Object_t * (*) (List_1_t629 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m3386_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m24130(__this, ___item, method) (( int32_t (*) (List_1_t629 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m3392_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m24131(__this, ___item, method) (( bool (*) (List_1_t629 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m3394_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m24132(__this, ___item, method) (( int32_t (*) (List_1_t629 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m3395_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m24133(__this, ___index, ___item, method) (( void (*) (List_1_t629 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m3396_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m24134(__this, ___item, method) (( void (*) (List_1_t629 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m3397_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24135(__this, method) (( bool (*) (List_1_t629 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3399_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m24136(__this, method) (( Object_t * (*) (List_1_t629 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3388_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m24137(__this, ___index, method) (( Object_t * (*) (List_1_t629 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m3390_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m24138(__this, ___index, ___value, method) (( void (*) (List_1_t629 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m3391_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(T)
#define List_1_Add_m24139(__this, ___item, method) (( void (*) (List_1_t629 *, BaseInvokableCall_t624 *, const MethodInfo*))List_1_Add_m3400_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m24140(__this, ___newCount, method) (( void (*) (List_1_t629 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m19823_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m24141(__this, ___collection, method) (( void (*) (List_1_t629 *, Object_t*, const MethodInfo*))List_1_AddCollection_m19825_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m24142(__this, ___enumerable, method) (( void (*) (List_1_t629 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m19827_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear()
#define List_1_Clear_m24143(__this, method) (( void (*) (List_1_t629 *, const MethodInfo*))List_1_Clear_m3393_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Contains(T)
#define List_1_Contains_m24144(__this, ___item, method) (( bool (*) (List_1_t629 *, BaseInvokableCall_t624 *, const MethodInfo*))List_1_Contains_m3401_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CopyTo(T[])
#define List_1_CopyTo_m24145(__this, ___array, method) (( void (*) (List_1_t629 *, BaseInvokableCallU5BU5D_t3858*, const MethodInfo*))List_1_CopyTo_m19831_gshared)(__this, ___array, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m24146(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t629 *, BaseInvokableCallU5BU5D_t3858*, int32_t, const MethodInfo*))List_1_CopyTo_m3402_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GetEnumerator()
#define List_1_GetEnumerator_m24147(__this, method) (( Enumerator_t3859  (*) (List_1_t629 *, const MethodInfo*))List_1_GetEnumerator_m19834_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::IndexOf(T)
#define List_1_IndexOf_m24148(__this, ___item, method) (( int32_t (*) (List_1_t629 *, BaseInvokableCall_t624 *, const MethodInfo*))List_1_IndexOf_m3405_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m24149(__this, ___start, ___delta, method) (( void (*) (List_1_t629 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m19837_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m24150(__this, ___index, method) (( void (*) (List_1_t629 *, int32_t, const MethodInfo*))List_1_CheckIndex_m19839_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Insert(System.Int32,T)
#define List_1_Insert_m24151(__this, ___index, ___item, method) (( void (*) (List_1_t629 *, int32_t, BaseInvokableCall_t624 *, const MethodInfo*))List_1_Insert_m3406_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m24152(__this, ___collection, method) (( void (*) (List_1_t629 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m19842_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Remove(T)
#define List_1_Remove_m24153(__this, ___item, method) (( bool (*) (List_1_t629 *, BaseInvokableCall_t624 *, const MethodInfo*))List_1_Remove_m3403_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m24154(__this, ___index, method) (( void (*) (List_1_t629 *, int32_t, const MethodInfo*))List_1_RemoveAt_m3398_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Sort()
#define List_1_Sort_m24155(__this, method) (( void (*) (List_1_t629 *, const MethodInfo*))List_1_Sort_m19846_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m24156(__this, ___comparer, method) (( void (*) (List_1_t629 *, Object_t*, const MethodInfo*))List_1_Sort_m19848_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m24157(__this, ___comparison, method) (( void (*) (List_1_t629 *, Comparison_1_t3860 *, const MethodInfo*))List_1_Sort_m19850_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::ToArray()
#define List_1_ToArray_m24158(__this, method) (( BaseInvokableCallU5BU5D_t3858* (*) (List_1_t629 *, const MethodInfo*))List_1_ToArray_m19852_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Capacity()
#define List_1_get_Capacity_m24159(__this, method) (( int32_t (*) (List_1_t629 *, const MethodInfo*))List_1_get_Capacity_m19854_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m24160(__this, ___value, method) (( void (*) (List_1_t629 *, int32_t, const MethodInfo*))List_1_set_Capacity_m19856_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
#define List_1_get_Count_m24161(__this, method) (( int32_t (*) (List_1_t629 *, const MethodInfo*))List_1_get_Count_m3387_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
#define List_1_get_Item_m24162(__this, ___index, method) (( BaseInvokableCall_t624 * (*) (List_1_t629 *, int32_t, const MethodInfo*))List_1_get_Item_m3407_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Item(System.Int32,T)
#define List_1_set_Item_m24163(__this, ___index, ___value, method) (( void (*) (List_1_t629 *, int32_t, BaseInvokableCall_t624 *, const MethodInfo*))List_1_set_Item_m3408_gshared)(__this, ___index, ___value, method)
