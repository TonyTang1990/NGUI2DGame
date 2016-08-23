#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3539;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t658;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4075;
// System.Collections.ICollection
struct ICollection_t793;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t3543;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t3547;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3537;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t4079;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t669;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t4080;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t4081;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1360;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m20078_gshared (Dictionary_2_t3539 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m20078(__this, method) (( void (*) (Dictionary_2_t3539 *, const MethodInfo*))Dictionary_2__ctor_m20078_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20080_gshared (Dictionary_2_t3539 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m20080(__this, ___comparer, method) (( void (*) (Dictionary_2_t3539 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20080_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m20082_gshared (Dictionary_2_t3539 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m20082(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3539 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20082_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m20083_gshared (Dictionary_2_t3539 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m20083(__this, ___capacity, method) (( void (*) (Dictionary_2_t3539 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m20083_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20085_gshared (Dictionary_2_t3539 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m20085(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3539 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20085_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m20087_gshared (Dictionary_2_t3539 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m20087(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3539 *, SerializationInfo_t669 *, StreamingContext_t670 , const MethodInfo*))Dictionary_2__ctor_m20087_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20089_gshared (Dictionary_2_t3539 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20089(__this, method) (( Object_t* (*) (Dictionary_2_t3539 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20089_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20091_gshared (Dictionary_2_t3539 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20091(__this, method) (( Object_t* (*) (Dictionary_2_t3539 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20091_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m20093_gshared (Dictionary_2_t3539 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m20093(__this, method) (( Object_t * (*) (Dictionary_2_t3539 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m20093_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m20095_gshared (Dictionary_2_t3539 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m20095(__this, method) (( Object_t * (*) (Dictionary_2_t3539 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m20095_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m20097_gshared (Dictionary_2_t3539 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m20097(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3539 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m20097_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m20099_gshared (Dictionary_2_t3539 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m20099(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3539 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m20099_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m20101_gshared (Dictionary_2_t3539 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m20101(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3539 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m20101_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m20103_gshared (Dictionary_2_t3539 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m20103(__this, ___key, method) (( bool (*) (Dictionary_2_t3539 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m20103_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m20105_gshared (Dictionary_2_t3539 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m20105(__this, ___key, method) (( void (*) (Dictionary_2_t3539 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m20105_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20107_gshared (Dictionary_2_t3539 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20107(__this, method) (( Object_t * (*) (Dictionary_2_t3539 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20107_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20109_gshared (Dictionary_2_t3539 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20109(__this, method) (( bool (*) (Dictionary_2_t3539 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20109_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20111_gshared (Dictionary_2_t3539 * __this, KeyValuePair_2_t3540  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20111(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3539 *, KeyValuePair_2_t3540 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20111_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20113_gshared (Dictionary_2_t3539 * __this, KeyValuePair_2_t3540  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20113(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3539 *, KeyValuePair_2_t3540 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20113_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20115_gshared (Dictionary_2_t3539 * __this, KeyValuePair_2U5BU5D_t4080* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20115(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3539 *, KeyValuePair_2U5BU5D_t4080*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20115_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20117_gshared (Dictionary_2_t3539 * __this, KeyValuePair_2_t3540  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20117(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3539 *, KeyValuePair_2_t3540 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20117_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m20119_gshared (Dictionary_2_t3539 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m20119(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3539 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m20119_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20121_gshared (Dictionary_2_t3539 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20121(__this, method) (( Object_t * (*) (Dictionary_2_t3539 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20121_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20123_gshared (Dictionary_2_t3539 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20123(__this, method) (( Object_t* (*) (Dictionary_2_t3539 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20123_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20125_gshared (Dictionary_2_t3539 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20125(__this, method) (( Object_t * (*) (Dictionary_2_t3539 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20125_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m20127_gshared (Dictionary_2_t3539 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m20127(__this, method) (( int32_t (*) (Dictionary_2_t3539 *, const MethodInfo*))Dictionary_2_get_Count_m20127_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m20129_gshared (Dictionary_2_t3539 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m20129(__this, ___key, method) (( int32_t (*) (Dictionary_2_t3539 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m20129_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m20131_gshared (Dictionary_2_t3539 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m20131(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3539 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m20131_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m20133_gshared (Dictionary_2_t3539 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m20133(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3539 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m20133_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m20135_gshared (Dictionary_2_t3539 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m20135(__this, ___size, method) (( void (*) (Dictionary_2_t3539 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m20135_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m20137_gshared (Dictionary_2_t3539 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m20137(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3539 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m20137_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3540  Dictionary_2_make_pair_m20139_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m20139(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3540  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m20139_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m20141_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m20141(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m20141_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m20143_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m20143(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m20143_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m20145_gshared (Dictionary_2_t3539 * __this, KeyValuePair_2U5BU5D_t4080* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m20145(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3539 *, KeyValuePair_2U5BU5D_t4080*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m20145_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m20147_gshared (Dictionary_2_t3539 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m20147(__this, method) (( void (*) (Dictionary_2_t3539 *, const MethodInfo*))Dictionary_2_Resize_m20147_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m20149_gshared (Dictionary_2_t3539 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m20149(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3539 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m20149_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m20151_gshared (Dictionary_2_t3539 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m20151(__this, method) (( void (*) (Dictionary_2_t3539 *, const MethodInfo*))Dictionary_2_Clear_m20151_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m20153_gshared (Dictionary_2_t3539 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m20153(__this, ___key, method) (( bool (*) (Dictionary_2_t3539 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m20153_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m20155_gshared (Dictionary_2_t3539 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m20155(__this, ___value, method) (( bool (*) (Dictionary_2_t3539 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m20155_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m20157_gshared (Dictionary_2_t3539 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m20157(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3539 *, SerializationInfo_t669 *, StreamingContext_t670 , const MethodInfo*))Dictionary_2_GetObjectData_m20157_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m20159_gshared (Dictionary_2_t3539 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m20159(__this, ___sender, method) (( void (*) (Dictionary_2_t3539 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m20159_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m20161_gshared (Dictionary_2_t3539 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m20161(__this, ___key, method) (( bool (*) (Dictionary_2_t3539 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m20161_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m20163_gshared (Dictionary_2_t3539 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m20163(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3539 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m20163_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t3543 * Dictionary_2_get_Keys_m20165_gshared (Dictionary_2_t3539 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m20165(__this, method) (( KeyCollection_t3543 * (*) (Dictionary_2_t3539 *, const MethodInfo*))Dictionary_2_get_Keys_m20165_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t3547 * Dictionary_2_get_Values_m20167_gshared (Dictionary_2_t3539 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m20167(__this, method) (( ValueCollection_t3547 * (*) (Dictionary_2_t3539 *, const MethodInfo*))Dictionary_2_get_Values_m20167_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m20169_gshared (Dictionary_2_t3539 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m20169(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3539 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m20169_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m20171_gshared (Dictionary_2_t3539 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m20171(__this, ___value, method) (( int32_t (*) (Dictionary_2_t3539 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m20171_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m20173_gshared (Dictionary_2_t3539 * __this, KeyValuePair_2_t3540  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m20173(__this, ___pair, method) (( bool (*) (Dictionary_2_t3539 *, KeyValuePair_2_t3540 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m20173_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t3545  Dictionary_2_GetEnumerator_m20175_gshared (Dictionary_2_t3539 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m20175(__this, method) (( Enumerator_t3545  (*) (Dictionary_2_t3539 *, const MethodInfo*))Dictionary_2_GetEnumerator_m20175_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t1150  Dictionary_2_U3CCopyToU3Em__2_m20177_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m20177(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1150  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m20177_gshared)(__this /* static, unused */, ___key, ___value, method)
