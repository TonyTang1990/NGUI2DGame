#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t3586;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4075;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t658;
// System.Collections.ICollection
struct ICollection_t793;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t3589;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t3593;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t3583;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t4106;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t669;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t4107;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t4108;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1360;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m20638_gshared (Dictionary_2_t3586 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m20638(__this, method) (( void (*) (Dictionary_2_t3586 *, const MethodInfo*))Dictionary_2__ctor_m20638_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20640_gshared (Dictionary_2_t3586 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m20640(__this, ___comparer, method) (( void (*) (Dictionary_2_t3586 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20640_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m20642_gshared (Dictionary_2_t3586 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m20642(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3586 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20642_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m20644_gshared (Dictionary_2_t3586 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m20644(__this, ___capacity, method) (( void (*) (Dictionary_2_t3586 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m20644_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20646_gshared (Dictionary_2_t3586 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m20646(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3586 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20646_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m20648_gshared (Dictionary_2_t3586 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m20648(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3586 *, SerializationInfo_t669 *, StreamingContext_t670 , const MethodInfo*))Dictionary_2__ctor_m20648_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20650_gshared (Dictionary_2_t3586 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20650(__this, method) (( Object_t* (*) (Dictionary_2_t3586 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20650_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20652_gshared (Dictionary_2_t3586 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20652(__this, method) (( Object_t* (*) (Dictionary_2_t3586 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20652_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m20654_gshared (Dictionary_2_t3586 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m20654(__this, method) (( Object_t * (*) (Dictionary_2_t3586 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m20654_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m20656_gshared (Dictionary_2_t3586 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m20656(__this, method) (( Object_t * (*) (Dictionary_2_t3586 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m20656_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m20658_gshared (Dictionary_2_t3586 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m20658(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3586 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m20658_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m20660_gshared (Dictionary_2_t3586 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m20660(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3586 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m20660_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m20662_gshared (Dictionary_2_t3586 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m20662(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3586 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m20662_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m20664_gshared (Dictionary_2_t3586 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m20664(__this, ___key, method) (( bool (*) (Dictionary_2_t3586 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m20664_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m20666_gshared (Dictionary_2_t3586 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m20666(__this, ___key, method) (( void (*) (Dictionary_2_t3586 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m20666_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20668_gshared (Dictionary_2_t3586 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20668(__this, method) (( Object_t * (*) (Dictionary_2_t3586 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20668_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20670_gshared (Dictionary_2_t3586 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20670(__this, method) (( bool (*) (Dictionary_2_t3586 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20670_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20672_gshared (Dictionary_2_t3586 * __this, KeyValuePair_2_t3587  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20672(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3586 *, KeyValuePair_2_t3587 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20672_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20674_gshared (Dictionary_2_t3586 * __this, KeyValuePair_2_t3587  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20674(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3586 *, KeyValuePair_2_t3587 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20674_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20676_gshared (Dictionary_2_t3586 * __this, KeyValuePair_2U5BU5D_t4107* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20676(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3586 *, KeyValuePair_2U5BU5D_t4107*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20676_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20678_gshared (Dictionary_2_t3586 * __this, KeyValuePair_2_t3587  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20678(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3586 *, KeyValuePair_2_t3587 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20678_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m20680_gshared (Dictionary_2_t3586 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m20680(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3586 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m20680_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20682_gshared (Dictionary_2_t3586 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20682(__this, method) (( Object_t * (*) (Dictionary_2_t3586 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20682_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20684_gshared (Dictionary_2_t3586 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20684(__this, method) (( Object_t* (*) (Dictionary_2_t3586 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20684_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20686_gshared (Dictionary_2_t3586 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20686(__this, method) (( Object_t * (*) (Dictionary_2_t3586 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20686_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m20688_gshared (Dictionary_2_t3586 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m20688(__this, method) (( int32_t (*) (Dictionary_2_t3586 *, const MethodInfo*))Dictionary_2_get_Count_m20688_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m20690_gshared (Dictionary_2_t3586 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m20690(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3586 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m20690_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m20692_gshared (Dictionary_2_t3586 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m20692(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3586 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m20692_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m20694_gshared (Dictionary_2_t3586 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m20694(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3586 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m20694_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m20696_gshared (Dictionary_2_t3586 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m20696(__this, ___size, method) (( void (*) (Dictionary_2_t3586 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m20696_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m20698_gshared (Dictionary_2_t3586 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m20698(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3586 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m20698_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3587  Dictionary_2_make_pair_m20700_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m20700(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3587  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m20700_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m20702_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m20702(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m20702_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m20704_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m20704(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m20704_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m20706_gshared (Dictionary_2_t3586 * __this, KeyValuePair_2U5BU5D_t4107* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m20706(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3586 *, KeyValuePair_2U5BU5D_t4107*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m20706_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m20708_gshared (Dictionary_2_t3586 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m20708(__this, method) (( void (*) (Dictionary_2_t3586 *, const MethodInfo*))Dictionary_2_Resize_m20708_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m20710_gshared (Dictionary_2_t3586 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m20710(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3586 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m20710_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m20712_gshared (Dictionary_2_t3586 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m20712(__this, method) (( void (*) (Dictionary_2_t3586 *, const MethodInfo*))Dictionary_2_Clear_m20712_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m20714_gshared (Dictionary_2_t3586 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m20714(__this, ___key, method) (( bool (*) (Dictionary_2_t3586 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m20714_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m20716_gshared (Dictionary_2_t3586 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m20716(__this, ___value, method) (( bool (*) (Dictionary_2_t3586 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m20716_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m20718_gshared (Dictionary_2_t3586 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m20718(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3586 *, SerializationInfo_t669 *, StreamingContext_t670 , const MethodInfo*))Dictionary_2_GetObjectData_m20718_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m20720_gshared (Dictionary_2_t3586 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m20720(__this, ___sender, method) (( void (*) (Dictionary_2_t3586 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m20720_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m20722_gshared (Dictionary_2_t3586 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m20722(__this, ___key, method) (( bool (*) (Dictionary_2_t3586 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m20722_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m20724_gshared (Dictionary_2_t3586 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m20724(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3586 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m20724_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t3589 * Dictionary_2_get_Keys_m20726_gshared (Dictionary_2_t3586 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m20726(__this, method) (( KeyCollection_t3589 * (*) (Dictionary_2_t3586 *, const MethodInfo*))Dictionary_2_get_Keys_m20726_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t3593 * Dictionary_2_get_Values_m20728_gshared (Dictionary_2_t3586 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m20728(__this, method) (( ValueCollection_t3593 * (*) (Dictionary_2_t3586 *, const MethodInfo*))Dictionary_2_get_Values_m20728_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m20730_gshared (Dictionary_2_t3586 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m20730(__this, ___key, method) (( int32_t (*) (Dictionary_2_t3586 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m20730_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m20732_gshared (Dictionary_2_t3586 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m20732(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t3586 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m20732_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m20734_gshared (Dictionary_2_t3586 * __this, KeyValuePair_2_t3587  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m20734(__this, ___pair, method) (( bool (*) (Dictionary_2_t3586 *, KeyValuePair_2_t3587 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m20734_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t3591  Dictionary_2_GetEnumerator_m20736_gshared (Dictionary_2_t3586 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m20736(__this, method) (( Enumerator_t3591  (*) (Dictionary_2_t3586 *, const MethodInfo*))Dictionary_2_GetEnumerator_m20736_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t1150  Dictionary_2_U3CCopyToU3Em__2_m20738_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m20738(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1150  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m20738_gshared)(__this /* static, unused */, ___key, ___value, method)
