﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t2146;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4075;
// System.Collections.ICollection
struct ICollection_t793;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t3976;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t3980;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t3583;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t4355;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t669;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t4356;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t4357;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1360;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_27.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__22.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m12870_gshared (Dictionary_2_t2146 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12870(__this, method) (( void (*) (Dictionary_2_t2146 *, const MethodInfo*))Dictionary_2__ctor_m12870_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m25418_gshared (Dictionary_2_t2146 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m25418(__this, ___comparer, method) (( void (*) (Dictionary_2_t2146 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25418_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m25419_gshared (Dictionary_2_t2146 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m25419(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2146 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25419_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m25420_gshared (Dictionary_2_t2146 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m25420(__this, ___capacity, method) (( void (*) (Dictionary_2_t2146 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m25420_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m25421_gshared (Dictionary_2_t2146 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m25421(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2146 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25421_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m25422_gshared (Dictionary_2_t2146 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m25422(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2146 *, SerializationInfo_t669 *, StreamingContext_t670 , const MethodInfo*))Dictionary_2__ctor_m25422_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25423_gshared (Dictionary_2_t2146 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25423(__this, method) (( Object_t* (*) (Dictionary_2_t2146 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25423_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25424_gshared (Dictionary_2_t2146 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25424(__this, method) (( Object_t* (*) (Dictionary_2_t2146 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25424_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m25425_gshared (Dictionary_2_t2146 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m25425(__this, method) (( Object_t * (*) (Dictionary_2_t2146 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m25425_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m25426_gshared (Dictionary_2_t2146 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m25426(__this, method) (( Object_t * (*) (Dictionary_2_t2146 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m25426_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m25427_gshared (Dictionary_2_t2146 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m25427(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2146 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m25427_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m25428_gshared (Dictionary_2_t2146 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m25428(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2146 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m25428_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m25429_gshared (Dictionary_2_t2146 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m25429(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2146 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m25429_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m25430_gshared (Dictionary_2_t2146 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m25430(__this, ___key, method) (( bool (*) (Dictionary_2_t2146 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m25430_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m25431_gshared (Dictionary_2_t2146 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m25431(__this, ___key, method) (( void (*) (Dictionary_2_t2146 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m25431_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25432_gshared (Dictionary_2_t2146 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25432(__this, method) (( Object_t * (*) (Dictionary_2_t2146 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25432_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25433_gshared (Dictionary_2_t2146 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25433(__this, method) (( bool (*) (Dictionary_2_t2146 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25433_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25434_gshared (Dictionary_2_t2146 * __this, KeyValuePair_2_t3974  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25434(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2146 *, KeyValuePair_2_t3974 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25434_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25435_gshared (Dictionary_2_t2146 * __this, KeyValuePair_2_t3974  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25435(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2146 *, KeyValuePair_2_t3974 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25435_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25436_gshared (Dictionary_2_t2146 * __this, KeyValuePair_2U5BU5D_t4356* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25436(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2146 *, KeyValuePair_2U5BU5D_t4356*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25436_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25437_gshared (Dictionary_2_t2146 * __this, KeyValuePair_2_t3974  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25437(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2146 *, KeyValuePair_2_t3974 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25437_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m25438_gshared (Dictionary_2_t2146 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m25438(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2146 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m25438_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25439_gshared (Dictionary_2_t2146 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25439(__this, method) (( Object_t * (*) (Dictionary_2_t2146 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25439_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25440_gshared (Dictionary_2_t2146 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25440(__this, method) (( Object_t* (*) (Dictionary_2_t2146 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25440_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25441_gshared (Dictionary_2_t2146 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25441(__this, method) (( Object_t * (*) (Dictionary_2_t2146 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25441_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m25442_gshared (Dictionary_2_t2146 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m25442(__this, method) (( int32_t (*) (Dictionary_2_t2146 *, const MethodInfo*))Dictionary_2_get_Count_m25442_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m25443_gshared (Dictionary_2_t2146 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m25443(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2146 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m25443_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m25444_gshared (Dictionary_2_t2146 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m25444(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2146 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m25444_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m25445_gshared (Dictionary_2_t2146 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m25445(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2146 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m25445_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m25446_gshared (Dictionary_2_t2146 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m25446(__this, ___size, method) (( void (*) (Dictionary_2_t2146 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m25446_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m25447_gshared (Dictionary_2_t2146 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m25447(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2146 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m25447_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3974  Dictionary_2_make_pair_m25448_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m25448(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3974  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m25448_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m25449_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m25449(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m25449_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m25450_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m25450(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m25450_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m25451_gshared (Dictionary_2_t2146 * __this, KeyValuePair_2U5BU5D_t4356* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m25451(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2146 *, KeyValuePair_2U5BU5D_t4356*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m25451_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m25452_gshared (Dictionary_2_t2146 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m25452(__this, method) (( void (*) (Dictionary_2_t2146 *, const MethodInfo*))Dictionary_2_Resize_m25452_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m25453_gshared (Dictionary_2_t2146 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m25453(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2146 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m25453_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m25454_gshared (Dictionary_2_t2146 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m25454(__this, method) (( void (*) (Dictionary_2_t2146 *, const MethodInfo*))Dictionary_2_Clear_m25454_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m25455_gshared (Dictionary_2_t2146 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m25455(__this, ___key, method) (( bool (*) (Dictionary_2_t2146 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m25455_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m25456_gshared (Dictionary_2_t2146 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m25456(__this, ___value, method) (( bool (*) (Dictionary_2_t2146 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m25456_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m25457_gshared (Dictionary_2_t2146 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m25457(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2146 *, SerializationInfo_t669 *, StreamingContext_t670 , const MethodInfo*))Dictionary_2_GetObjectData_m25457_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m25458_gshared (Dictionary_2_t2146 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m25458(__this, ___sender, method) (( void (*) (Dictionary_2_t2146 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m25458_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m25459_gshared (Dictionary_2_t2146 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m25459(__this, ___key, method) (( bool (*) (Dictionary_2_t2146 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m25459_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m25460_gshared (Dictionary_2_t2146 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m25460(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2146 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m25460_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t3976 * Dictionary_2_get_Keys_m25461_gshared (Dictionary_2_t2146 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m25461(__this, method) (( KeyCollection_t3976 * (*) (Dictionary_2_t2146 *, const MethodInfo*))Dictionary_2_get_Keys_m25461_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t3980 * Dictionary_2_get_Values_m25462_gshared (Dictionary_2_t2146 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m25462(__this, method) (( ValueCollection_t3980 * (*) (Dictionary_2_t2146 *, const MethodInfo*))Dictionary_2_get_Values_m25462_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m25463_gshared (Dictionary_2_t2146 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m25463(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2146 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m25463_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m25464_gshared (Dictionary_2_t2146 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m25464(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2146 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m25464_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m25465_gshared (Dictionary_2_t2146 * __this, KeyValuePair_2_t3974  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m25465(__this, ___pair, method) (( bool (*) (Dictionary_2_t2146 *, KeyValuePair_2_t3974 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m25465_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t3978  Dictionary_2_GetEnumerator_m25466_gshared (Dictionary_2_t2146 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m25466(__this, method) (( Enumerator_t3978  (*) (Dictionary_2_t2146 *, const MethodInfo*))Dictionary_2_GetEnumerator_m25466_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t1150  Dictionary_2_U3CCopyToU3Em__2_m25467_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m25467(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1150  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m25467_gshared)(__this /* static, unused */, ___key, ___value, method)
