#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t3795;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t658;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t3793;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3815;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t4115;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m23281_gshared (ThreadSafeDictionary_2_t3795 * __this, ThreadSafeDictionaryValueFactory_2_t3793 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m23281(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t3795 *, ThreadSafeDictionaryValueFactory_2_t3793 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m23281_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m23283_gshared (ThreadSafeDictionary_2_t3795 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m23283(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3795 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m23283_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m23285_gshared (ThreadSafeDictionary_2_t3795 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m23285(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3795 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m23285_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m23287_gshared (ThreadSafeDictionary_2_t3795 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m23287(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3795 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m23287_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m23289_gshared (ThreadSafeDictionary_2_t3795 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m23289(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t3795 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m23289_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m23291_gshared (ThreadSafeDictionary_2_t3795 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m23291(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t3795 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m23291_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m23293_gshared (ThreadSafeDictionary_2_t3795 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m23293(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t3795 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m23293_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m23295_gshared (ThreadSafeDictionary_2_t3795 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m23295(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t3795 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m23295_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m23297_gshared (ThreadSafeDictionary_2_t3795 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m23297(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t3795 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m23297_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m23299_gshared (ThreadSafeDictionary_2_t3795 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m23299(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t3795 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m23299_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m23301_gshared (ThreadSafeDictionary_2_t3795 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m23301(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t3795 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m23301_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m23303_gshared (ThreadSafeDictionary_2_t3795 * __this, KeyValuePair_2_t3611  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m23303(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t3795 *, KeyValuePair_2_t3611 , const MethodInfo*))ThreadSafeDictionary_2_Add_m23303_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m23305_gshared (ThreadSafeDictionary_2_t3795 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m23305(__this, method) (( void (*) (ThreadSafeDictionary_2_t3795 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m23305_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m23307_gshared (ThreadSafeDictionary_2_t3795 * __this, KeyValuePair_2_t3611  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m23307(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t3795 *, KeyValuePair_2_t3611 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m23307_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m23309_gshared (ThreadSafeDictionary_2_t3795 * __this, KeyValuePair_2U5BU5D_t3815* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m23309(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t3795 *, KeyValuePair_2U5BU5D_t3815*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m23309_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m23311_gshared (ThreadSafeDictionary_2_t3795 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m23311(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t3795 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m23311_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m23313_gshared (ThreadSafeDictionary_2_t3795 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m23313(__this, method) (( bool (*) (ThreadSafeDictionary_2_t3795 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m23313_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m23315_gshared (ThreadSafeDictionary_2_t3795 * __this, KeyValuePair_2_t3611  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m23315(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t3795 *, KeyValuePair_2_t3611 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m23315_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m23317_gshared (ThreadSafeDictionary_2_t3795 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m23317(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t3795 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m23317_gshared)(__this, method)
