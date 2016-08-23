#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t3905;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t4322;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t4115;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t4262;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3815;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IComparer_1_t4323;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t3909;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_37.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void List_1__ctor_m24665_gshared (List_1_t3905 * __this, const MethodInfo* method);
#define List_1__ctor_m24665(__this, method) (( void (*) (List_1_t3905 *, const MethodInfo*))List_1__ctor_m24665_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m24667_gshared (List_1_t3905 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m24667(__this, ___collection, method) (( void (*) (List_1_t3905 *, Object_t*, const MethodInfo*))List_1__ctor_m24667_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m24669_gshared (List_1_t3905 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m24669(__this, ___capacity, method) (( void (*) (List_1_t3905 *, int32_t, const MethodInfo*))List_1__ctor_m24669_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern "C" void List_1__cctor_m24671_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m24671(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24671_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24672_gshared (List_1_t3905 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24672(__this, method) (( Object_t* (*) (List_1_t3905 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24672_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m24673_gshared (List_1_t3905 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m24673(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3905 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m24673_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m24674_gshared (List_1_t3905 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m24674(__this, method) (( Object_t * (*) (List_1_t3905 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m24674_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m24675_gshared (List_1_t3905 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m24675(__this, ___item, method) (( int32_t (*) (List_1_t3905 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m24675_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m24676_gshared (List_1_t3905 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m24676(__this, ___item, method) (( bool (*) (List_1_t3905 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m24676_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m24677_gshared (List_1_t3905 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m24677(__this, ___item, method) (( int32_t (*) (List_1_t3905 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m24677_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m24678_gshared (List_1_t3905 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m24678(__this, ___index, ___item, method) (( void (*) (List_1_t3905 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m24678_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m24679_gshared (List_1_t3905 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m24679(__this, ___item, method) (( void (*) (List_1_t3905 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m24679_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24680_gshared (List_1_t3905 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24680(__this, method) (( bool (*) (List_1_t3905 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24680_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m24681_gshared (List_1_t3905 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m24681(__this, method) (( Object_t * (*) (List_1_t3905 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m24681_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m24682_gshared (List_1_t3905 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m24682(__this, ___index, method) (( Object_t * (*) (List_1_t3905 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m24682_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m24683_gshared (List_1_t3905 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m24683(__this, ___index, ___value, method) (( void (*) (List_1_t3905 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m24683_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
extern "C" void List_1_Add_m24684_gshared (List_1_t3905 * __this, KeyValuePair_2_t3611  ___item, const MethodInfo* method);
#define List_1_Add_m24684(__this, ___item, method) (( void (*) (List_1_t3905 *, KeyValuePair_2_t3611 , const MethodInfo*))List_1_Add_m24684_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m24686_gshared (List_1_t3905 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m24686(__this, ___newCount, method) (( void (*) (List_1_t3905 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24686_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m24688_gshared (List_1_t3905 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m24688(__this, ___collection, method) (( void (*) (List_1_t3905 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24688_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m24690_gshared (List_1_t3905 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m24690(__this, ___enumerable, method) (( void (*) (List_1_t3905 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24690_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void List_1_Clear_m24691_gshared (List_1_t3905 * __this, const MethodInfo* method);
#define List_1_Clear_m24691(__this, method) (( void (*) (List_1_t3905 *, const MethodInfo*))List_1_Clear_m24691_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
extern "C" bool List_1_Contains_m24692_gshared (List_1_t3905 * __this, KeyValuePair_2_t3611  ___item, const MethodInfo* method);
#define List_1_Contains_m24692(__this, ___item, method) (( bool (*) (List_1_t3905 *, KeyValuePair_2_t3611 , const MethodInfo*))List_1_Contains_m24692_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[])
extern "C" void List_1_CopyTo_m24694_gshared (List_1_t3905 * __this, KeyValuePair_2U5BU5D_t3815* ___array, const MethodInfo* method);
#define List_1_CopyTo_m24694(__this, ___array, method) (( void (*) (List_1_t3905 *, KeyValuePair_2U5BU5D_t3815*, const MethodInfo*))List_1_CopyTo_m24694_gshared)(__this, ___array, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m24695_gshared (List_1_t3905 * __this, KeyValuePair_2U5BU5D_t3815* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m24695(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3905 *, KeyValuePair_2U5BU5D_t3815*, int32_t, const MethodInfo*))List_1_CopyTo_m24695_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t3906  List_1_GetEnumerator_m24696_gshared (List_1_t3905 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m24696(__this, method) (( Enumerator_t3906  (*) (List_1_t3905 *, const MethodInfo*))List_1_GetEnumerator_m24696_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m24697_gshared (List_1_t3905 * __this, KeyValuePair_2_t3611  ___item, const MethodInfo* method);
#define List_1_IndexOf_m24697(__this, ___item, method) (( int32_t (*) (List_1_t3905 *, KeyValuePair_2_t3611 , const MethodInfo*))List_1_IndexOf_m24697_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m24699_gshared (List_1_t3905 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m24699(__this, ___start, ___delta, method) (( void (*) (List_1_t3905 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24699_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m24701_gshared (List_1_t3905 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m24701(__this, ___index, method) (( void (*) (List_1_t3905 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24701_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m24702_gshared (List_1_t3905 * __this, int32_t ___index, KeyValuePair_2_t3611  ___item, const MethodInfo* method);
#define List_1_Insert_m24702(__this, ___index, ___item, method) (( void (*) (List_1_t3905 *, int32_t, KeyValuePair_2_t3611 , const MethodInfo*))List_1_Insert_m24702_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m24704_gshared (List_1_t3905 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m24704(__this, ___collection, method) (( void (*) (List_1_t3905 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24704_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
extern "C" bool List_1_Remove_m24705_gshared (List_1_t3905 * __this, KeyValuePair_2_t3611  ___item, const MethodInfo* method);
#define List_1_Remove_m24705(__this, ___item, method) (( bool (*) (List_1_t3905 *, KeyValuePair_2_t3611 , const MethodInfo*))List_1_Remove_m24705_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m24706_gshared (List_1_t3905 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m24706(__this, ___index, method) (( void (*) (List_1_t3905 *, int32_t, const MethodInfo*))List_1_RemoveAt_m24706_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort()
extern "C" void List_1_Sort_m24708_gshared (List_1_t3905 * __this, const MethodInfo* method);
#define List_1_Sort_m24708(__this, method) (( void (*) (List_1_t3905 *, const MethodInfo*))List_1_Sort_m24708_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m24710_gshared (List_1_t3905 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m24710(__this, ___comparer, method) (( void (*) (List_1_t3905 *, Object_t*, const MethodInfo*))List_1_Sort_m24710_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m24712_gshared (List_1_t3905 * __this, Comparison_1_t3909 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m24712(__this, ___comparison, method) (( void (*) (List_1_t3905 *, Comparison_1_t3909 *, const MethodInfo*))List_1_Sort_m24712_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t3815* List_1_ToArray_m24714_gshared (List_1_t3905 * __this, const MethodInfo* method);
#define List_1_ToArray_m24714(__this, method) (( KeyValuePair_2U5BU5D_t3815* (*) (List_1_t3905 *, const MethodInfo*))List_1_ToArray_m24714_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m24716_gshared (List_1_t3905 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m24716(__this, method) (( int32_t (*) (List_1_t3905 *, const MethodInfo*))List_1_get_Capacity_m24716_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m24718_gshared (List_1_t3905 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m24718(__this, ___value, method) (( void (*) (List_1_t3905 *, int32_t, const MethodInfo*))List_1_set_Capacity_m24718_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t List_1_get_Count_m24719_gshared (List_1_t3905 * __this, const MethodInfo* method);
#define List_1_get_Count_m24719(__this, method) (( int32_t (*) (List_1_t3905 *, const MethodInfo*))List_1_get_Count_m24719_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t3611  List_1_get_Item_m24720_gshared (List_1_t3905 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m24720(__this, ___index, method) (( KeyValuePair_2_t3611  (*) (List_1_t3905 *, int32_t, const MethodInfo*))List_1_get_Item_m24720_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m24721_gshared (List_1_t3905 * __this, int32_t ___index, KeyValuePair_2_t3611  ___value, const MethodInfo* method);
#define List_1_set_Item_m24721(__this, ___index, ___value, method) (( void (*) (List_1_t3905 *, int32_t, KeyValuePair_2_t3611 , const MethodInfo*))List_1_set_Item_m24721_gshared)(__this, ___index, ___value, method)
