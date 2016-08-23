#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t561;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t795;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t375;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t658;
// System.Object[]
struct ObjectU5BU5D_t300;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t4062;
// System.Comparison`1<System.Object>
struct Comparison_1_t3522;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_6.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m3223_gshared (List_1_t561 * __this, const MethodInfo* method);
#define List_1__ctor_m3223(__this, method) (( void (*) (List_1_t561 *, const MethodInfo*))List_1__ctor_m3223_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m19804_gshared (List_1_t561 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m19804(__this, ___collection, method) (( void (*) (List_1_t561 *, Object_t*, const MethodInfo*))List_1__ctor_m19804_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m19806_gshared (List_1_t561 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m19806(__this, ___capacity, method) (( void (*) (List_1_t561 *, int32_t, const MethodInfo*))List_1__ctor_m19806_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m19808_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m19808(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m19808_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3404_gshared (List_1_t561 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3404(__this, method) (( Object_t* (*) (List_1_t561 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3404_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m3389_gshared (List_1_t561 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m3389(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t561 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m3389_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m3386_gshared (List_1_t561 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m3386(__this, method) (( Object_t * (*) (List_1_t561 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m3386_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m3392_gshared (List_1_t561 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m3392(__this, ___item, method) (( int32_t (*) (List_1_t561 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m3392_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m3394_gshared (List_1_t561 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m3394(__this, ___item, method) (( bool (*) (List_1_t561 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m3394_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m3395_gshared (List_1_t561 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m3395(__this, ___item, method) (( int32_t (*) (List_1_t561 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m3395_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m3396_gshared (List_1_t561 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m3396(__this, ___index, ___item, method) (( void (*) (List_1_t561 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m3396_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m3397_gshared (List_1_t561 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m3397(__this, ___item, method) (( void (*) (List_1_t561 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m3397_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3399_gshared (List_1_t561 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3399(__this, method) (( bool (*) (List_1_t561 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3399_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m3388_gshared (List_1_t561 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m3388(__this, method) (( Object_t * (*) (List_1_t561 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3388_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m3390_gshared (List_1_t561 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m3390(__this, ___index, method) (( Object_t * (*) (List_1_t561 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m3390_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m3391_gshared (List_1_t561 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m3391(__this, ___index, ___value, method) (( void (*) (List_1_t561 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m3391_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m3400_gshared (List_1_t561 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m3400(__this, ___item, method) (( void (*) (List_1_t561 *, Object_t *, const MethodInfo*))List_1_Add_m3400_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m19823_gshared (List_1_t561 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m19823(__this, ___newCount, method) (( void (*) (List_1_t561 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m19823_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m19825_gshared (List_1_t561 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m19825(__this, ___collection, method) (( void (*) (List_1_t561 *, Object_t*, const MethodInfo*))List_1_AddCollection_m19825_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m19827_gshared (List_1_t561 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m19827(__this, ___enumerable, method) (( void (*) (List_1_t561 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m19827_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m3393_gshared (List_1_t561 * __this, const MethodInfo* method);
#define List_1_Clear_m3393(__this, method) (( void (*) (List_1_t561 *, const MethodInfo*))List_1_Clear_m3393_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m3401_gshared (List_1_t561 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m3401(__this, ___item, method) (( bool (*) (List_1_t561 *, Object_t *, const MethodInfo*))List_1_Contains_m3401_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[])
extern "C" void List_1_CopyTo_m19831_gshared (List_1_t561 * __this, ObjectU5BU5D_t300* ___array, const MethodInfo* method);
#define List_1_CopyTo_m19831(__this, ___array, method) (( void (*) (List_1_t561 *, ObjectU5BU5D_t300*, const MethodInfo*))List_1_CopyTo_m19831_gshared)(__this, ___array, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m3402_gshared (List_1_t561 * __this, ObjectU5BU5D_t300* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m3402(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t561 *, ObjectU5BU5D_t300*, int32_t, const MethodInfo*))List_1_CopyTo_m3402_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t3513  List_1_GetEnumerator_m19834_gshared (List_1_t561 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m19834(__this, method) (( Enumerator_t3513  (*) (List_1_t561 *, const MethodInfo*))List_1_GetEnumerator_m19834_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m3405_gshared (List_1_t561 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m3405(__this, ___item, method) (( int32_t (*) (List_1_t561 *, Object_t *, const MethodInfo*))List_1_IndexOf_m3405_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m19837_gshared (List_1_t561 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m19837(__this, ___start, ___delta, method) (( void (*) (List_1_t561 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m19837_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m19839_gshared (List_1_t561 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m19839(__this, ___index, method) (( void (*) (List_1_t561 *, int32_t, const MethodInfo*))List_1_CheckIndex_m19839_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m3406_gshared (List_1_t561 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m3406(__this, ___index, ___item, method) (( void (*) (List_1_t561 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m3406_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m19842_gshared (List_1_t561 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m19842(__this, ___collection, method) (( void (*) (List_1_t561 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m19842_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m3403_gshared (List_1_t561 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m3403(__this, ___item, method) (( bool (*) (List_1_t561 *, Object_t *, const MethodInfo*))List_1_Remove_m3403_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m3398_gshared (List_1_t561 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m3398(__this, ___index, method) (( void (*) (List_1_t561 *, int32_t, const MethodInfo*))List_1_RemoveAt_m3398_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m19846_gshared (List_1_t561 * __this, const MethodInfo* method);
#define List_1_Sort_m19846(__this, method) (( void (*) (List_1_t561 *, const MethodInfo*))List_1_Sort_m19846_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m19848_gshared (List_1_t561 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m19848(__this, ___comparer, method) (( void (*) (List_1_t561 *, Object_t*, const MethodInfo*))List_1_Sort_m19848_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m19850_gshared (List_1_t561 * __this, Comparison_1_t3522 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m19850(__this, ___comparison, method) (( void (*) (List_1_t561 *, Comparison_1_t3522 *, const MethodInfo*))List_1_Sort_m19850_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t300* List_1_ToArray_m19852_gshared (List_1_t561 * __this, const MethodInfo* method);
#define List_1_ToArray_m19852(__this, method) (( ObjectU5BU5D_t300* (*) (List_1_t561 *, const MethodInfo*))List_1_ToArray_m19852_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m19854_gshared (List_1_t561 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m19854(__this, method) (( int32_t (*) (List_1_t561 *, const MethodInfo*))List_1_get_Capacity_m19854_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m19856_gshared (List_1_t561 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m19856(__this, ___value, method) (( void (*) (List_1_t561 *, int32_t, const MethodInfo*))List_1_set_Capacity_m19856_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m3387_gshared (List_1_t561 * __this, const MethodInfo* method);
#define List_1_get_Count_m3387(__this, method) (( int32_t (*) (List_1_t561 *, const MethodInfo*))List_1_get_Count_m3387_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m3407_gshared (List_1_t561 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m3407(__this, ___index, method) (( Object_t * (*) (List_1_t561 *, int32_t, const MethodInfo*))List_1_get_Item_m3407_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m3408_gshared (List_1_t561 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m3408(__this, ___index, ___value, method) (( void (*) (List_1_t561 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m3408_gshared)(__this, ___index, ___value, method)
