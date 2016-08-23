#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t232;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Color>
struct IEnumerable_1_t4118;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Color>
struct IEnumerator_1_t4119;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Collections.Generic.ICollection`1<UnityEngine.Color>
struct ICollection_1_t4120;
// UnityEngine.Color[]
struct ColorU5BU5D_t139;
// System.Collections.Generic.IComparer`1<UnityEngine.Color>
struct IComparer_1_t4121;
// System.Comparison`1<UnityEngine.Color>
struct Comparison_1_t3631;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Color>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_17.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::.ctor()
extern "C" void List_1__ctor_m1741_gshared (List_1_t232 * __this, const MethodInfo* method);
#define List_1__ctor_m1741(__this, method) (( void (*) (List_1_t232 *, const MethodInfo*))List_1__ctor_m1741_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m21166_gshared (List_1_t232 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m21166(__this, ___collection, method) (( void (*) (List_1_t232 *, Object_t*, const MethodInfo*))List_1__ctor_m21166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::.ctor(System.Int32)
extern "C" void List_1__ctor_m21167_gshared (List_1_t232 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m21167(__this, ___capacity, method) (( void (*) (List_1_t232 *, int32_t, const MethodInfo*))List_1__ctor_m21167_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::.cctor()
extern "C" void List_1__cctor_m21168_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m21168(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21168_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Color>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21169_gshared (List_1_t232 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21169(__this, method) (( Object_t* (*) (List_1_t232 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21169_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m21170_gshared (List_1_t232 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m21170(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t232 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m21170_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Color>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m21171_gshared (List_1_t232 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m21171(__this, method) (( Object_t * (*) (List_1_t232 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m21171_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m21172_gshared (List_1_t232 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m21172(__this, ___item, method) (( int32_t (*) (List_1_t232 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m21172_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m21173_gshared (List_1_t232 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m21173(__this, ___item, method) (( bool (*) (List_1_t232 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m21173_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m21174_gshared (List_1_t232 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m21174(__this, ___item, method) (( int32_t (*) (List_1_t232 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m21174_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m21175_gshared (List_1_t232 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m21175(__this, ___index, ___item, method) (( void (*) (List_1_t232 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m21175_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m21176_gshared (List_1_t232 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m21176(__this, ___item, method) (( void (*) (List_1_t232 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m21176_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21177_gshared (List_1_t232 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21177(__this, method) (( bool (*) (List_1_t232 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21177_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Color>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m21178_gshared (List_1_t232 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m21178(__this, method) (( Object_t * (*) (List_1_t232 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m21178_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Color>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m21179_gshared (List_1_t232 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m21179(__this, ___index, method) (( Object_t * (*) (List_1_t232 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m21179_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m21180_gshared (List_1_t232 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m21180(__this, ___index, ___value, method) (( void (*) (List_1_t232 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m21180_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Add(T)
extern "C" void List_1_Add_m21181_gshared (List_1_t232 * __this, Color_t25  ___item, const MethodInfo* method);
#define List_1_Add_m21181(__this, ___item, method) (( void (*) (List_1_t232 *, Color_t25 , const MethodInfo*))List_1_Add_m21181_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m21182_gshared (List_1_t232 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m21182(__this, ___newCount, method) (( void (*) (List_1_t232 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21182_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m21183_gshared (List_1_t232 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m21183(__this, ___collection, method) (( void (*) (List_1_t232 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21183_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m21184_gshared (List_1_t232 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m21184(__this, ___enumerable, method) (( void (*) (List_1_t232 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21184_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Clear()
extern "C" void List_1_Clear_m21185_gshared (List_1_t232 * __this, const MethodInfo* method);
#define List_1_Clear_m21185(__this, method) (( void (*) (List_1_t232 *, const MethodInfo*))List_1_Clear_m21185_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color>::Contains(T)
extern "C" bool List_1_Contains_m21186_gshared (List_1_t232 * __this, Color_t25  ___item, const MethodInfo* method);
#define List_1_Contains_m21186(__this, ___item, method) (( bool (*) (List_1_t232 *, Color_t25 , const MethodInfo*))List_1_Contains_m21186_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::CopyTo(T[])
extern "C" void List_1_CopyTo_m21187_gshared (List_1_t232 * __this, ColorU5BU5D_t139* ___array, const MethodInfo* method);
#define List_1_CopyTo_m21187(__this, ___array, method) (( void (*) (List_1_t232 *, ColorU5BU5D_t139*, const MethodInfo*))List_1_CopyTo_m21187_gshared)(__this, ___array, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m21188_gshared (List_1_t232 * __this, ColorU5BU5D_t139* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m21188(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t232 *, ColorU5BU5D_t139*, int32_t, const MethodInfo*))List_1_CopyTo_m21188_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Color>::GetEnumerator()
extern "C" Enumerator_t3626  List_1_GetEnumerator_m21189_gshared (List_1_t232 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m21189(__this, method) (( Enumerator_t3626  (*) (List_1_t232 *, const MethodInfo*))List_1_GetEnumerator_m21189_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m21190_gshared (List_1_t232 * __this, Color_t25  ___item, const MethodInfo* method);
#define List_1_IndexOf_m21190(__this, ___item, method) (( int32_t (*) (List_1_t232 *, Color_t25 , const MethodInfo*))List_1_IndexOf_m21190_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m21191_gshared (List_1_t232 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m21191(__this, ___start, ___delta, method) (( void (*) (List_1_t232 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21191_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m21192_gshared (List_1_t232 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m21192(__this, ___index, method) (( void (*) (List_1_t232 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21192_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m21193_gshared (List_1_t232 * __this, int32_t ___index, Color_t25  ___item, const MethodInfo* method);
#define List_1_Insert_m21193(__this, ___index, ___item, method) (( void (*) (List_1_t232 *, int32_t, Color_t25 , const MethodInfo*))List_1_Insert_m21193_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m21194_gshared (List_1_t232 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m21194(__this, ___collection, method) (( void (*) (List_1_t232 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21194_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color>::Remove(T)
extern "C" bool List_1_Remove_m21195_gshared (List_1_t232 * __this, Color_t25  ___item, const MethodInfo* method);
#define List_1_Remove_m21195(__this, ___item, method) (( bool (*) (List_1_t232 *, Color_t25 , const MethodInfo*))List_1_Remove_m21195_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m21196_gshared (List_1_t232 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m21196(__this, ___index, method) (( void (*) (List_1_t232 *, int32_t, const MethodInfo*))List_1_RemoveAt_m21196_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Sort()
extern "C" void List_1_Sort_m21197_gshared (List_1_t232 * __this, const MethodInfo* method);
#define List_1_Sort_m21197(__this, method) (( void (*) (List_1_t232 *, const MethodInfo*))List_1_Sort_m21197_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m21198_gshared (List_1_t232 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m21198(__this, ___comparer, method) (( void (*) (List_1_t232 *, Object_t*, const MethodInfo*))List_1_Sort_m21198_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m21199_gshared (List_1_t232 * __this, Comparison_1_t3631 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m21199(__this, ___comparison, method) (( void (*) (List_1_t232 *, Comparison_1_t3631 *, const MethodInfo*))List_1_Sort_m21199_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Color>::ToArray()
extern "C" ColorU5BU5D_t139* List_1_ToArray_m21200_gshared (List_1_t232 * __this, const MethodInfo* method);
#define List_1_ToArray_m21200(__this, method) (( ColorU5BU5D_t139* (*) (List_1_t232 *, const MethodInfo*))List_1_ToArray_m21200_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m21201_gshared (List_1_t232 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m21201(__this, method) (( int32_t (*) (List_1_t232 *, const MethodInfo*))List_1_get_Capacity_m21201_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m21202_gshared (List_1_t232 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m21202(__this, ___value, method) (( void (*) (List_1_t232 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21202_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color>::get_Count()
extern "C" int32_t List_1_get_Count_m21203_gshared (List_1_t232 * __this, const MethodInfo* method);
#define List_1_get_Count_m21203(__this, method) (( int32_t (*) (List_1_t232 *, const MethodInfo*))List_1_get_Count_m21203_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Color>::get_Item(System.Int32)
extern "C" Color_t25  List_1_get_Item_m21204_gshared (List_1_t232 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m21204(__this, ___index, method) (( Color_t25  (*) (List_1_t232 *, int32_t, const MethodInfo*))List_1_get_Item_m21204_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m21205_gshared (List_1_t232 * __this, int32_t ___index, Color_t25  ___value, const MethodInfo* method);
#define List_1_set_Item_m21205(__this, ___index, ___value, method) (( void (*) (List_1_t232 *, int32_t, Color_t25 , const MethodInfo*))List_1_set_Item_m21205_gshared)(__this, ___index, ___value, method)
