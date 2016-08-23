#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Specialized.StringCollection
struct StringCollection_t1524;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Collections.Specialized.StringEnumerator
struct StringEnumerator_t1795;

// System.Void System.Collections.Specialized.StringCollection::.ctor()
extern "C" void StringCollection__ctor_m9827 (StringCollection_t1524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.StringCollection::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * StringCollection_System_Collections_IList_get_Item_m10383 (StringCollection_t1524 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void StringCollection_System_Collections_IList_set_Item_m10384 (StringCollection_t1524 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.Add(System.Object)
extern "C" int32_t StringCollection_System_Collections_IList_Add_m10385 (StringCollection_t1524 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.Contains(System.Object)
extern "C" bool StringCollection_System_Collections_IList_Contains_m10386 (StringCollection_t1524 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t StringCollection_System_Collections_IList_IndexOf_m10387 (StringCollection_t1524 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void StringCollection_System_Collections_IList_Insert_m10388 (StringCollection_t1524 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Remove(System.Object)
extern "C" void StringCollection_System_Collections_IList_Remove_m10389 (StringCollection_t1524 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void StringCollection_System_Collections_ICollection_CopyTo_m10390 (StringCollection_t1524 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.StringCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * StringCollection_System_Collections_IEnumerable_GetEnumerator_m10391 (StringCollection_t1524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.StringCollection::get_Item(System.Int32)
extern "C" String_t* StringCollection_get_Item_m9823 (StringCollection_t1524 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::set_Item(System.Int32,System.String)
extern "C" void StringCollection_set_Item_m10392 (StringCollection_t1524 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::get_Count()
extern "C" int32_t StringCollection_get_Count_m10393 (StringCollection_t1524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::Add(System.String)
extern "C" int32_t StringCollection_Add_m9829 (StringCollection_t1524 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::Clear()
extern "C" void StringCollection_Clear_m10394 (StringCollection_t1524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::Contains(System.String)
extern "C" bool StringCollection_Contains_m9828 (StringCollection_t1524 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringEnumerator System.Collections.Specialized.StringCollection::GetEnumerator()
extern "C" StringEnumerator_t1795 * StringCollection_GetEnumerator_m9917 (StringCollection_t1524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::IndexOf(System.String)
extern "C" int32_t StringCollection_IndexOf_m10395 (StringCollection_t1524 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::Insert(System.Int32,System.String)
extern "C" void StringCollection_Insert_m10396 (StringCollection_t1524 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::Remove(System.String)
extern "C" void StringCollection_Remove_m10397 (StringCollection_t1524 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::RemoveAt(System.Int32)
extern "C" void StringCollection_RemoveAt_m10398 (StringCollection_t1524 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.StringCollection::get_SyncRoot()
extern "C" Object_t * StringCollection_get_SyncRoot_m10399 (StringCollection_t1524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
