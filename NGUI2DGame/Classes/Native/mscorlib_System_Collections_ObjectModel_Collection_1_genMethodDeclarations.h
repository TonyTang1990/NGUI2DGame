﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t4007;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Object[]
struct ObjectU5BU5D_t300;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t375;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t796;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m25744_gshared (Collection_1_t4007 * __this, const MethodInfo* method);
#define Collection_1__ctor_m25744(__this, method) (( void (*) (Collection_1_t4007 *, const MethodInfo*))Collection_1__ctor_m25744_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25745_gshared (Collection_1_t4007 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25745(__this, method) (( bool (*) (Collection_1_t4007 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25745_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m25746_gshared (Collection_1_t4007 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m25746(__this, ___array, ___index, method) (( void (*) (Collection_1_t4007 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m25746_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m25747_gshared (Collection_1_t4007 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m25747(__this, method) (( Object_t * (*) (Collection_1_t4007 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m25747_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m25748_gshared (Collection_1_t4007 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m25748(__this, ___value, method) (( int32_t (*) (Collection_1_t4007 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m25748_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m25749_gshared (Collection_1_t4007 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m25749(__this, ___value, method) (( bool (*) (Collection_1_t4007 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m25749_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m25750_gshared (Collection_1_t4007 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m25750(__this, ___value, method) (( int32_t (*) (Collection_1_t4007 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m25750_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m25751_gshared (Collection_1_t4007 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m25751(__this, ___index, ___value, method) (( void (*) (Collection_1_t4007 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m25751_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m25752_gshared (Collection_1_t4007 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m25752(__this, ___value, method) (( void (*) (Collection_1_t4007 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m25752_gshared)(__this, ___value, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m25753_gshared (Collection_1_t4007 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m25753(__this, method) (( Object_t * (*) (Collection_1_t4007 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m25753_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m25754_gshared (Collection_1_t4007 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m25754(__this, ___index, method) (( Object_t * (*) (Collection_1_t4007 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m25754_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m25755_gshared (Collection_1_t4007 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m25755(__this, ___index, ___value, method) (( void (*) (Collection_1_t4007 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m25755_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m25756_gshared (Collection_1_t4007 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m25756(__this, ___item, method) (( void (*) (Collection_1_t4007 *, Object_t *, const MethodInfo*))Collection_1_Add_m25756_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m25757_gshared (Collection_1_t4007 * __this, const MethodInfo* method);
#define Collection_1_Clear_m25757(__this, method) (( void (*) (Collection_1_t4007 *, const MethodInfo*))Collection_1_Clear_m25757_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m25758_gshared (Collection_1_t4007 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m25758(__this, method) (( void (*) (Collection_1_t4007 *, const MethodInfo*))Collection_1_ClearItems_m25758_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m25759_gshared (Collection_1_t4007 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m25759(__this, ___item, method) (( bool (*) (Collection_1_t4007 *, Object_t *, const MethodInfo*))Collection_1_Contains_m25759_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m25760_gshared (Collection_1_t4007 * __this, ObjectU5BU5D_t300* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m25760(__this, ___array, ___index, method) (( void (*) (Collection_1_t4007 *, ObjectU5BU5D_t300*, int32_t, const MethodInfo*))Collection_1_CopyTo_m25760_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m25761_gshared (Collection_1_t4007 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m25761(__this, method) (( Object_t* (*) (Collection_1_t4007 *, const MethodInfo*))Collection_1_GetEnumerator_m25761_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m25762_gshared (Collection_1_t4007 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m25762(__this, ___item, method) (( int32_t (*) (Collection_1_t4007 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m25762_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m25763_gshared (Collection_1_t4007 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m25763(__this, ___index, ___item, method) (( void (*) (Collection_1_t4007 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m25763_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m25764_gshared (Collection_1_t4007 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m25764(__this, ___index, ___item, method) (( void (*) (Collection_1_t4007 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m25764_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m25765_gshared (Collection_1_t4007 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m25765(__this, ___item, method) (( bool (*) (Collection_1_t4007 *, Object_t *, const MethodInfo*))Collection_1_Remove_m25765_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m25766_gshared (Collection_1_t4007 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m25766(__this, ___index, method) (( void (*) (Collection_1_t4007 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m25766_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m25767_gshared (Collection_1_t4007 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m25767(__this, ___index, method) (( void (*) (Collection_1_t4007 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m25767_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m25768_gshared (Collection_1_t4007 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m25768(__this, method) (( int32_t (*) (Collection_1_t4007 *, const MethodInfo*))Collection_1_get_Count_m25768_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m25769_gshared (Collection_1_t4007 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m25769(__this, ___index, method) (( Object_t * (*) (Collection_1_t4007 *, int32_t, const MethodInfo*))Collection_1_get_Item_m25769_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m25770_gshared (Collection_1_t4007 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m25770(__this, ___index, ___value, method) (( void (*) (Collection_1_t4007 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m25770_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m25771_gshared (Collection_1_t4007 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m25771(__this, ___index, ___item, method) (( void (*) (Collection_1_t4007 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m25771_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m25772_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m25772(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m25772_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m25773_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m25773(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m25773_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m25774_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m25774(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m25774_gshared)(__this /* static, unused */, ___list, method)
