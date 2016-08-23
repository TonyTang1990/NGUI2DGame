#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t3817;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t658;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t4262;
// System.Collections.ICollection
struct ICollection_t793;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct KeyCollection_t3818;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ValueCollection_t3822;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3537;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IDictionary_2_t4263;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t669;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t4264;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
struct IEnumerator_1_t4265;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1360;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void Dictionary_2__ctor_m23627_gshared (Dictionary_2_t3817 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m23627(__this, method) (( void (*) (Dictionary_2_t3817 *, const MethodInfo*))Dictionary_2__ctor_m23627_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m23629_gshared (Dictionary_2_t3817 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m23629(__this, ___comparer, method) (( void (*) (Dictionary_2_t3817 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23629_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m23631_gshared (Dictionary_2_t3817 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m23631(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3817 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23631_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m23633_gshared (Dictionary_2_t3817 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m23633(__this, ___capacity, method) (( void (*) (Dictionary_2_t3817 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m23633_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m23635_gshared (Dictionary_2_t3817 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m23635(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3817 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23635_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m23637_gshared (Dictionary_2_t3817 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m23637(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3817 *, SerializationInfo_t669 *, StreamingContext_t670 , const MethodInfo*))Dictionary_2__ctor_m23637_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23639_gshared (Dictionary_2_t3817 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23639(__this, method) (( Object_t* (*) (Dictionary_2_t3817 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23639_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23641_gshared (Dictionary_2_t3817 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23641(__this, method) (( Object_t* (*) (Dictionary_2_t3817 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23641_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m23643_gshared (Dictionary_2_t3817 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m23643(__this, method) (( Object_t * (*) (Dictionary_2_t3817 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m23643_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m23645_gshared (Dictionary_2_t3817 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m23645(__this, method) (( Object_t * (*) (Dictionary_2_t3817 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m23645_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m23647_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m23647(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3817 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m23647_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m23649_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m23649(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3817 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m23649_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m23651_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m23651(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3817 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m23651_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m23653_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m23653(__this, ___key, method) (( bool (*) (Dictionary_2_t3817 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m23653_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m23655_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m23655(__this, ___key, method) (( void (*) (Dictionary_2_t3817 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m23655_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23657_gshared (Dictionary_2_t3817 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23657(__this, method) (( Object_t * (*) (Dictionary_2_t3817 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23657_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23659_gshared (Dictionary_2_t3817 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23659(__this, method) (( bool (*) (Dictionary_2_t3817 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23659_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23661_gshared (Dictionary_2_t3817 * __this, KeyValuePair_2_t3791  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23661(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3817 *, KeyValuePair_2_t3791 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23661_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23663_gshared (Dictionary_2_t3817 * __this, KeyValuePair_2_t3791  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23663(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3817 *, KeyValuePair_2_t3791 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23663_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23665_gshared (Dictionary_2_t3817 * __this, KeyValuePair_2U5BU5D_t4264* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23665(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3817 *, KeyValuePair_2U5BU5D_t4264*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23665_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23667_gshared (Dictionary_2_t3817 * __this, KeyValuePair_2_t3791  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23667(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3817 *, KeyValuePair_2_t3791 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23667_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m23669_gshared (Dictionary_2_t3817 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m23669(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3817 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m23669_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23671_gshared (Dictionary_2_t3817 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23671(__this, method) (( Object_t * (*) (Dictionary_2_t3817 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23671_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23673_gshared (Dictionary_2_t3817 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23673(__this, method) (( Object_t* (*) (Dictionary_2_t3817 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23673_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23675_gshared (Dictionary_2_t3817 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23675(__this, method) (( Object_t * (*) (Dictionary_2_t3817 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23675_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m23677_gshared (Dictionary_2_t3817 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m23677(__this, method) (( int32_t (*) (Dictionary_2_t3817 *, const MethodInfo*))Dictionary_2_get_Count_m23677_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(TKey)
extern "C" KeyValuePair_2_t3611  Dictionary_2_get_Item_m23679_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m23679(__this, ___key, method) (( KeyValuePair_2_t3611  (*) (Dictionary_2_t3817 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m23679_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m23681_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, KeyValuePair_2_t3611  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m23681(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3817 *, Object_t *, KeyValuePair_2_t3611 , const MethodInfo*))Dictionary_2_set_Item_m23681_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m23683_gshared (Dictionary_2_t3817 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m23683(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3817 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m23683_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m23685_gshared (Dictionary_2_t3817 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m23685(__this, ___size, method) (( void (*) (Dictionary_2_t3817 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m23685_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m23687_gshared (Dictionary_2_t3817 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m23687(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3817 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m23687_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3791  Dictionary_2_make_pair_m23689_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t3611  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m23689(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3791  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t3611 , const MethodInfo*))Dictionary_2_make_pair_m23689_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m23691_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t3611  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m23691(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t3611 , const MethodInfo*))Dictionary_2_pick_key_m23691_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_value(TKey,TValue)
extern "C" KeyValuePair_2_t3611  Dictionary_2_pick_value_m23693_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t3611  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m23693(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3611  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t3611 , const MethodInfo*))Dictionary_2_pick_value_m23693_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m23695_gshared (Dictionary_2_t3817 * __this, KeyValuePair_2U5BU5D_t4264* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m23695(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3817 *, KeyValuePair_2U5BU5D_t4264*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m23695_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Resize()
extern "C" void Dictionary_2_Resize_m23697_gshared (Dictionary_2_t3817 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m23697(__this, method) (( void (*) (Dictionary_2_t3817 *, const MethodInfo*))Dictionary_2_Resize_m23697_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m23699_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, KeyValuePair_2_t3611  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m23699(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3817 *, Object_t *, KeyValuePair_2_t3611 , const MethodInfo*))Dictionary_2_Add_m23699_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void Dictionary_2_Clear_m23701_gshared (Dictionary_2_t3817 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m23701(__this, method) (( void (*) (Dictionary_2_t3817 *, const MethodInfo*))Dictionary_2_Clear_m23701_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m23703_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m23703(__this, ___key, method) (( bool (*) (Dictionary_2_t3817 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m23703_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m23705_gshared (Dictionary_2_t3817 * __this, KeyValuePair_2_t3611  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m23705(__this, ___value, method) (( bool (*) (Dictionary_2_t3817 *, KeyValuePair_2_t3611 , const MethodInfo*))Dictionary_2_ContainsValue_m23705_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m23707_gshared (Dictionary_2_t3817 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m23707(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3817 *, SerializationInfo_t669 *, StreamingContext_t670 , const MethodInfo*))Dictionary_2_GetObjectData_m23707_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m23709_gshared (Dictionary_2_t3817 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m23709(__this, ___sender, method) (( void (*) (Dictionary_2_t3817 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m23709_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m23711_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m23711(__this, ___key, method) (( bool (*) (Dictionary_2_t3817 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m23711_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m23713_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, KeyValuePair_2_t3611 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m23713(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3817 *, Object_t *, KeyValuePair_2_t3611 *, const MethodInfo*))Dictionary_2_TryGetValue_m23713_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Keys()
extern "C" KeyCollection_t3818 * Dictionary_2_get_Keys_m23715_gshared (Dictionary_2_t3817 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m23715(__this, method) (( KeyCollection_t3818 * (*) (Dictionary_2_t3817 *, const MethodInfo*))Dictionary_2_get_Keys_m23715_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Values()
extern "C" ValueCollection_t3822 * Dictionary_2_get_Values_m23717_gshared (Dictionary_2_t3817 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m23717(__this, method) (( ValueCollection_t3822 * (*) (Dictionary_2_t3817 *, const MethodInfo*))Dictionary_2_get_Values_m23717_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m23719_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m23719(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3817 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m23719_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTValue(System.Object)
extern "C" KeyValuePair_2_t3611  Dictionary_2_ToTValue_m23721_gshared (Dictionary_2_t3817 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m23721(__this, ___value, method) (( KeyValuePair_2_t3611  (*) (Dictionary_2_t3817 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m23721_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m23723_gshared (Dictionary_2_t3817 * __this, KeyValuePair_2_t3791  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m23723(__this, ___pair, method) (( bool (*) (Dictionary_2_t3817 *, KeyValuePair_2_t3791 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m23723_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t3820  Dictionary_2_GetEnumerator_m23725_gshared (Dictionary_2_t3817 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m23725(__this, method) (( Enumerator_t3820  (*) (Dictionary_2_t3817 *, const MethodInfo*))Dictionary_2_GetEnumerator_m23725_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t1150  Dictionary_2_U3CCopyToU3Em__2_m23727_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t3611  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m23727(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1150  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t3611 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m23727_gshared)(__this /* static, unused */, ___key, ___value, method)
