#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t525;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t4189;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t4190;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t4191;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t649;
// System.Collections.Generic.IComparer`1<UnityEngine.UIVertex>
struct IComparer_1_t4192;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t3720;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_26.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m22343_gshared (List_1_t525 * __this, const MethodInfo* method);
#define List_1__ctor_m22343(__this, method) (( void (*) (List_1_t525 *, const MethodInfo*))List_1__ctor_m22343_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m22344_gshared (List_1_t525 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m22344(__this, ___collection, method) (( void (*) (List_1_t525 *, Object_t*, const MethodInfo*))List_1__ctor_m22344_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3197_gshared (List_1_t525 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3197(__this, ___capacity, method) (( void (*) (List_1_t525 *, int32_t, const MethodInfo*))List_1__ctor_m3197_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m22345_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m22345(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22345_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22346_gshared (List_1_t525 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22346(__this, method) (( Object_t* (*) (List_1_t525 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22346_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m22347_gshared (List_1_t525 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m22347(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t525 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m22347_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m22348_gshared (List_1_t525 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m22348(__this, method) (( Object_t * (*) (List_1_t525 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m22348_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m22349_gshared (List_1_t525 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m22349(__this, ___item, method) (( int32_t (*) (List_1_t525 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m22349_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m22350_gshared (List_1_t525 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m22350(__this, ___item, method) (( bool (*) (List_1_t525 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m22350_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m22351_gshared (List_1_t525 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m22351(__this, ___item, method) (( int32_t (*) (List_1_t525 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m22351_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m22352_gshared (List_1_t525 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m22352(__this, ___index, ___item, method) (( void (*) (List_1_t525 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m22352_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m22353_gshared (List_1_t525 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m22353(__this, ___item, method) (( void (*) (List_1_t525 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m22353_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22354_gshared (List_1_t525 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22354(__this, method) (( bool (*) (List_1_t525 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22354_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m22355_gshared (List_1_t525 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m22355(__this, method) (( Object_t * (*) (List_1_t525 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m22355_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m22356_gshared (List_1_t525 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m22356(__this, ___index, method) (( Object_t * (*) (List_1_t525 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m22356_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m22357_gshared (List_1_t525 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m22357(__this, ___index, ___value, method) (( void (*) (List_1_t525 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m22357_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m22358_gshared (List_1_t525 * __this, UIVertex_t532  ___item, const MethodInfo* method);
#define List_1_Add_m22358(__this, ___item, method) (( void (*) (List_1_t525 *, UIVertex_t532 , const MethodInfo*))List_1_Add_m22358_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m22359_gshared (List_1_t525 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m22359(__this, ___newCount, method) (( void (*) (List_1_t525 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22359_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m22360_gshared (List_1_t525 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m22360(__this, ___collection, method) (( void (*) (List_1_t525 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22360_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m22361_gshared (List_1_t525 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m22361(__this, ___enumerable, method) (( void (*) (List_1_t525 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22361_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m22362_gshared (List_1_t525 * __this, const MethodInfo* method);
#define List_1_Clear_m22362(__this, method) (( void (*) (List_1_t525 *, const MethodInfo*))List_1_Clear_m22362_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m22363_gshared (List_1_t525 * __this, UIVertex_t532  ___item, const MethodInfo* method);
#define List_1_Contains_m22363(__this, ___item, method) (( bool (*) (List_1_t525 *, UIVertex_t532 , const MethodInfo*))List_1_Contains_m22363_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[])
extern "C" void List_1_CopyTo_m22364_gshared (List_1_t525 * __this, UIVertexU5BU5D_t649* ___array, const MethodInfo* method);
#define List_1_CopyTo_m22364(__this, ___array, method) (( void (*) (List_1_t525 *, UIVertexU5BU5D_t649*, const MethodInfo*))List_1_CopyTo_m22364_gshared)(__this, ___array, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m22365_gshared (List_1_t525 * __this, UIVertexU5BU5D_t649* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m22365(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t525 *, UIVertexU5BU5D_t649*, int32_t, const MethodInfo*))List_1_CopyTo_m22365_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t3715  List_1_GetEnumerator_m22366_gshared (List_1_t525 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m22366(__this, method) (( Enumerator_t3715  (*) (List_1_t525 *, const MethodInfo*))List_1_GetEnumerator_m22366_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m22367_gshared (List_1_t525 * __this, UIVertex_t532  ___item, const MethodInfo* method);
#define List_1_IndexOf_m22367(__this, ___item, method) (( int32_t (*) (List_1_t525 *, UIVertex_t532 , const MethodInfo*))List_1_IndexOf_m22367_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m22368_gshared (List_1_t525 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m22368(__this, ___start, ___delta, method) (( void (*) (List_1_t525 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22368_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m22369_gshared (List_1_t525 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m22369(__this, ___index, method) (( void (*) (List_1_t525 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22369_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m22370_gshared (List_1_t525 * __this, int32_t ___index, UIVertex_t532  ___item, const MethodInfo* method);
#define List_1_Insert_m22370(__this, ___index, ___item, method) (( void (*) (List_1_t525 *, int32_t, UIVertex_t532 , const MethodInfo*))List_1_Insert_m22370_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m22371_gshared (List_1_t525 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m22371(__this, ___collection, method) (( void (*) (List_1_t525 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22371_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m22372_gshared (List_1_t525 * __this, UIVertex_t532  ___item, const MethodInfo* method);
#define List_1_Remove_m22372(__this, ___item, method) (( bool (*) (List_1_t525 *, UIVertex_t532 , const MethodInfo*))List_1_Remove_m22372_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m22373_gshared (List_1_t525 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m22373(__this, ___index, method) (( void (*) (List_1_t525 *, int32_t, const MethodInfo*))List_1_RemoveAt_m22373_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m22374_gshared (List_1_t525 * __this, const MethodInfo* method);
#define List_1_Sort_m22374(__this, method) (( void (*) (List_1_t525 *, const MethodInfo*))List_1_Sort_m22374_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m22375_gshared (List_1_t525 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m22375(__this, ___comparer, method) (( void (*) (List_1_t525 *, Object_t*, const MethodInfo*))List_1_Sort_m22375_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m22376_gshared (List_1_t525 * __this, Comparison_1_t3720 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m22376(__this, ___comparison, method) (( void (*) (List_1_t525 *, Comparison_1_t3720 *, const MethodInfo*))List_1_Sort_m22376_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t649* List_1_ToArray_m22377_gshared (List_1_t525 * __this, const MethodInfo* method);
#define List_1_ToArray_m22377(__this, method) (( UIVertexU5BU5D_t649* (*) (List_1_t525 *, const MethodInfo*))List_1_ToArray_m22377_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m22378_gshared (List_1_t525 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m22378(__this, method) (( int32_t (*) (List_1_t525 *, const MethodInfo*))List_1_get_Capacity_m22378_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m22379_gshared (List_1_t525 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m22379(__this, ___value, method) (( void (*) (List_1_t525 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22379_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m22380_gshared (List_1_t525 * __this, const MethodInfo* method);
#define List_1_get_Count_m22380(__this, method) (( int32_t (*) (List_1_t525 *, const MethodInfo*))List_1_get_Count_m22380_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t532  List_1_get_Item_m22381_gshared (List_1_t525 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m22381(__this, ___index, method) (( UIVertex_t532  (*) (List_1_t525 *, int32_t, const MethodInfo*))List_1_get_Item_m22381_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m22382_gshared (List_1_t525 * __this, int32_t ___index, UIVertex_t532  ___value, const MethodInfo* method);
#define List_1_set_Item_m22382(__this, ___index, ___value, method) (( void (*) (List_1_t525 *, int32_t, UIVertex_t532 , const MethodInfo*))List_1_set_Item_m22382_gshared)(__this, ___index, ___value, method)
