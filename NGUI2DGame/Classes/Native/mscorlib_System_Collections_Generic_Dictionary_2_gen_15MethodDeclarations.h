#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>
struct Dictionary_2_t2147;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4075;
// System.Collections.Generic.ICollection`1<System.Reflection.Emit.Label>
struct ICollection_1_t4358;
// System.Collections.ICollection
struct ICollection_t793;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Reflection.Emit.Label>
struct KeyCollection_t3989;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>
struct ValueCollection_t3993;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t3583;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Reflection.Emit.Label>
struct IDictionary_2_t4359;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t669;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>[]
struct KeyValuePair_2U5BU5D_t4360;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>>
struct IEnumerator_1_t4361;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1360;
// System.Reflection.Emit.Label
#include "mscorlib_System_Reflection_Emit_Label.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_28.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__23.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor()
extern "C" void Dictionary_2__ctor_m12874_gshared (Dictionary_2_t2147 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12874(__this, method) (( void (*) (Dictionary_2_t2147 *, const MethodInfo*))Dictionary_2__ctor_m12874_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m25545_gshared (Dictionary_2_t2147 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m25545(__this, ___comparer, method) (( void (*) (Dictionary_2_t2147 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25545_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m25546_gshared (Dictionary_2_t2147 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m25546(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2147 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25546_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m25547_gshared (Dictionary_2_t2147 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m25547(__this, ___capacity, method) (( void (*) (Dictionary_2_t2147 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m25547_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m25548_gshared (Dictionary_2_t2147 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m25548(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2147 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25548_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m25549_gshared (Dictionary_2_t2147 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m25549(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2147 *, SerializationInfo_t669 *, StreamingContext_t670 , const MethodInfo*))Dictionary_2__ctor_m25549_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25550_gshared (Dictionary_2_t2147 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25550(__this, method) (( Object_t* (*) (Dictionary_2_t2147 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25550_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25551_gshared (Dictionary_2_t2147 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25551(__this, method) (( Object_t* (*) (Dictionary_2_t2147 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25551_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m25552_gshared (Dictionary_2_t2147 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m25552(__this, method) (( Object_t * (*) (Dictionary_2_t2147 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m25552_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m25553_gshared (Dictionary_2_t2147 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m25553(__this, method) (( Object_t * (*) (Dictionary_2_t2147 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m25553_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m25554_gshared (Dictionary_2_t2147 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m25554(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2147 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m25554_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m25555_gshared (Dictionary_2_t2147 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m25555(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2147 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m25555_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m25556_gshared (Dictionary_2_t2147 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m25556(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2147 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m25556_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m25557_gshared (Dictionary_2_t2147 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m25557(__this, ___key, method) (( bool (*) (Dictionary_2_t2147 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m25557_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m25558_gshared (Dictionary_2_t2147 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m25558(__this, ___key, method) (( void (*) (Dictionary_2_t2147 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m25558_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25559_gshared (Dictionary_2_t2147 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25559(__this, method) (( Object_t * (*) (Dictionary_2_t2147 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25559_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25560_gshared (Dictionary_2_t2147 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25560(__this, method) (( bool (*) (Dictionary_2_t2147 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25560_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25561_gshared (Dictionary_2_t2147 * __this, KeyValuePair_2_t3986  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25561(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2147 *, KeyValuePair_2_t3986 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25561_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25562_gshared (Dictionary_2_t2147 * __this, KeyValuePair_2_t3986  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25562(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2147 *, KeyValuePair_2_t3986 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25562_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25563_gshared (Dictionary_2_t2147 * __this, KeyValuePair_2U5BU5D_t4360* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25563(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2147 *, KeyValuePair_2U5BU5D_t4360*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25563_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25564_gshared (Dictionary_2_t2147 * __this, KeyValuePair_2_t3986  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25564(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2147 *, KeyValuePair_2_t3986 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25564_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m25565_gshared (Dictionary_2_t2147 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m25565(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2147 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m25565_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25566_gshared (Dictionary_2_t2147 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25566(__this, method) (( Object_t * (*) (Dictionary_2_t2147 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25566_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25567_gshared (Dictionary_2_t2147 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25567(__this, method) (( Object_t* (*) (Dictionary_2_t2147 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25567_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25568_gshared (Dictionary_2_t2147 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25568(__this, method) (( Object_t * (*) (Dictionary_2_t2147 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25568_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m25569_gshared (Dictionary_2_t2147 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m25569(__this, method) (( int32_t (*) (Dictionary_2_t2147 *, const MethodInfo*))Dictionary_2_get_Count_m25569_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::get_Item(TKey)
extern "C" Label_t2144  Dictionary_2_get_Item_m25570_gshared (Dictionary_2_t2147 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m25570(__this, ___key, method) (( Label_t2144  (*) (Dictionary_2_t2147 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m25570_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m25571_gshared (Dictionary_2_t2147 * __this, int32_t ___key, Label_t2144  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m25571(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2147 *, int32_t, Label_t2144 , const MethodInfo*))Dictionary_2_set_Item_m25571_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m25572_gshared (Dictionary_2_t2147 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m25572(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2147 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m25572_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m25573_gshared (Dictionary_2_t2147 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m25573(__this, ___size, method) (( void (*) (Dictionary_2_t2147 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m25573_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m25574_gshared (Dictionary_2_t2147 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m25574(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2147 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m25574_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3986  Dictionary_2_make_pair_m25575_gshared (Object_t * __this /* static, unused */, int32_t ___key, Label_t2144  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m25575(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3986  (*) (Object_t * /* static, unused */, int32_t, Label_t2144 , const MethodInfo*))Dictionary_2_make_pair_m25575_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m25576_gshared (Object_t * __this /* static, unused */, int32_t ___key, Label_t2144  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m25576(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Label_t2144 , const MethodInfo*))Dictionary_2_pick_key_m25576_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::pick_value(TKey,TValue)
extern "C" Label_t2144  Dictionary_2_pick_value_m25577_gshared (Object_t * __this /* static, unused */, int32_t ___key, Label_t2144  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m25577(__this /* static, unused */, ___key, ___value, method) (( Label_t2144  (*) (Object_t * /* static, unused */, int32_t, Label_t2144 , const MethodInfo*))Dictionary_2_pick_value_m25577_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m25578_gshared (Dictionary_2_t2147 * __this, KeyValuePair_2U5BU5D_t4360* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m25578(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2147 *, KeyValuePair_2U5BU5D_t4360*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m25578_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::Resize()
extern "C" void Dictionary_2_Resize_m25579_gshared (Dictionary_2_t2147 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m25579(__this, method) (( void (*) (Dictionary_2_t2147 *, const MethodInfo*))Dictionary_2_Resize_m25579_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m25580_gshared (Dictionary_2_t2147 * __this, int32_t ___key, Label_t2144  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m25580(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2147 *, int32_t, Label_t2144 , const MethodInfo*))Dictionary_2_Add_m25580_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::Clear()
extern "C" void Dictionary_2_Clear_m25581_gshared (Dictionary_2_t2147 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m25581(__this, method) (( void (*) (Dictionary_2_t2147 *, const MethodInfo*))Dictionary_2_Clear_m25581_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m25582_gshared (Dictionary_2_t2147 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m25582(__this, ___key, method) (( bool (*) (Dictionary_2_t2147 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m25582_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m25583_gshared (Dictionary_2_t2147 * __this, Label_t2144  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m25583(__this, ___value, method) (( bool (*) (Dictionary_2_t2147 *, Label_t2144 , const MethodInfo*))Dictionary_2_ContainsValue_m25583_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m25584_gshared (Dictionary_2_t2147 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m25584(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2147 *, SerializationInfo_t669 *, StreamingContext_t670 , const MethodInfo*))Dictionary_2_GetObjectData_m25584_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m25585_gshared (Dictionary_2_t2147 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m25585(__this, ___sender, method) (( void (*) (Dictionary_2_t2147 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m25585_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m25586_gshared (Dictionary_2_t2147 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m25586(__this, ___key, method) (( bool (*) (Dictionary_2_t2147 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m25586_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m25587_gshared (Dictionary_2_t2147 * __this, int32_t ___key, Label_t2144 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m25587(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2147 *, int32_t, Label_t2144 *, const MethodInfo*))Dictionary_2_TryGetValue_m25587_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::get_Keys()
extern "C" KeyCollection_t3989 * Dictionary_2_get_Keys_m25588_gshared (Dictionary_2_t2147 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m25588(__this, method) (( KeyCollection_t3989 * (*) (Dictionary_2_t2147 *, const MethodInfo*))Dictionary_2_get_Keys_m25588_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::get_Values()
extern "C" ValueCollection_t3993 * Dictionary_2_get_Values_m25589_gshared (Dictionary_2_t2147 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m25589(__this, method) (( ValueCollection_t3993 * (*) (Dictionary_2_t2147 *, const MethodInfo*))Dictionary_2_get_Values_m25589_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m25590_gshared (Dictionary_2_t2147 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m25590(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2147 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m25590_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::ToTValue(System.Object)
extern "C" Label_t2144  Dictionary_2_ToTValue_m25591_gshared (Dictionary_2_t2147 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m25591(__this, ___value, method) (( Label_t2144  (*) (Dictionary_2_t2147 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m25591_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m25592_gshared (Dictionary_2_t2147 * __this, KeyValuePair_2_t3986  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m25592(__this, ___pair, method) (( bool (*) (Dictionary_2_t2147 *, KeyValuePair_2_t3986 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m25592_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::GetEnumerator()
extern "C" Enumerator_t3991  Dictionary_2_GetEnumerator_m25593_gshared (Dictionary_2_t2147 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m25593(__this, method) (( Enumerator_t3991  (*) (Dictionary_2_t2147 *, const MethodInfo*))Dictionary_2_GetEnumerator_m25593_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t1150  Dictionary_2_U3CCopyToU3Em__2_m25594_gshared (Object_t * __this /* static, unused */, int32_t ___key, Label_t2144  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m25594(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1150  (*) (Object_t * /* static, unused */, int32_t, Label_t2144 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m25594_gshared)(__this /* static, unused */, ___key, ___value, method)
