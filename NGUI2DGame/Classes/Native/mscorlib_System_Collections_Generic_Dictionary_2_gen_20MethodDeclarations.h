#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3769;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t4224;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t658;
// System.Collections.ICollection
struct ICollection_t793;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
struct KeyCollection_t3773;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
struct ValueCollection_t3777;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t3767;
// System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>
struct IDictionary_2_t4225;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t669;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>[]
struct KeyValuePair_2U5BU5D_t4226;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct IEnumerator_1_t4227;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1360;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m22894_gshared (Dictionary_2_t3769 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m22894(__this, method) (( void (*) (Dictionary_2_t3769 *, const MethodInfo*))Dictionary_2__ctor_m22894_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m22896_gshared (Dictionary_2_t3769 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m22896(__this, ___comparer, method) (( void (*) (Dictionary_2_t3769 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m22896_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m22898_gshared (Dictionary_2_t3769 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m22898(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3769 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m22898_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m22900_gshared (Dictionary_2_t3769 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m22900(__this, ___capacity, method) (( void (*) (Dictionary_2_t3769 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m22900_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m22902_gshared (Dictionary_2_t3769 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m22902(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3769 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m22902_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m22904_gshared (Dictionary_2_t3769 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m22904(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3769 *, SerializationInfo_t669 *, StreamingContext_t670 , const MethodInfo*))Dictionary_2__ctor_m22904_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m22906_gshared (Dictionary_2_t3769 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m22906(__this, method) (( Object_t* (*) (Dictionary_2_t3769 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m22906_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m22908_gshared (Dictionary_2_t3769 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m22908(__this, method) (( Object_t* (*) (Dictionary_2_t3769 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m22908_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m22910_gshared (Dictionary_2_t3769 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m22910(__this, method) (( Object_t * (*) (Dictionary_2_t3769 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m22910_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m22912_gshared (Dictionary_2_t3769 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m22912(__this, method) (( Object_t * (*) (Dictionary_2_t3769 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m22912_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m22914_gshared (Dictionary_2_t3769 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m22914(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3769 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m22914_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m22916_gshared (Dictionary_2_t3769 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m22916(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3769 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m22916_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m22918_gshared (Dictionary_2_t3769 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m22918(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3769 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m22918_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m22920_gshared (Dictionary_2_t3769 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m22920(__this, ___key, method) (( bool (*) (Dictionary_2_t3769 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m22920_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m22922_gshared (Dictionary_2_t3769 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m22922(__this, ___key, method) (( void (*) (Dictionary_2_t3769 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m22922_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22924_gshared (Dictionary_2_t3769 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22924(__this, method) (( Object_t * (*) (Dictionary_2_t3769 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22924_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22926_gshared (Dictionary_2_t3769 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22926(__this, method) (( bool (*) (Dictionary_2_t3769 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22926_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22928_gshared (Dictionary_2_t3769 * __this, KeyValuePair_2_t3770  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22928(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3769 *, KeyValuePair_2_t3770 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22928_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22930_gshared (Dictionary_2_t3769 * __this, KeyValuePair_2_t3770  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22930(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3769 *, KeyValuePair_2_t3770 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22930_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22932_gshared (Dictionary_2_t3769 * __this, KeyValuePair_2U5BU5D_t4226* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22932(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3769 *, KeyValuePair_2U5BU5D_t4226*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22932_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22934_gshared (Dictionary_2_t3769 * __this, KeyValuePair_2_t3770  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22934(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3769 *, KeyValuePair_2_t3770 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22934_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m22936_gshared (Dictionary_2_t3769 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m22936(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3769 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m22936_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22938_gshared (Dictionary_2_t3769 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22938(__this, method) (( Object_t * (*) (Dictionary_2_t3769 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22938_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22940_gshared (Dictionary_2_t3769 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22940(__this, method) (( Object_t* (*) (Dictionary_2_t3769 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22940_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22942_gshared (Dictionary_2_t3769 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22942(__this, method) (( Object_t * (*) (Dictionary_2_t3769 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22942_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m22944_gshared (Dictionary_2_t3769 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m22944(__this, method) (( int32_t (*) (Dictionary_2_t3769 *, const MethodInfo*))Dictionary_2_get_Count_m22944_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m22946_gshared (Dictionary_2_t3769 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m22946(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3769 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m22946_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m22948_gshared (Dictionary_2_t3769 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m22948(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3769 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m22948_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m22950_gshared (Dictionary_2_t3769 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m22950(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3769 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m22950_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m22952_gshared (Dictionary_2_t3769 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m22952(__this, ___size, method) (( void (*) (Dictionary_2_t3769 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m22952_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m22954_gshared (Dictionary_2_t3769 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m22954(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3769 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m22954_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3770  Dictionary_2_make_pair_m22956_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m22956(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3770  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m22956_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m22958_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m22958(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m22958_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m22960_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m22960(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m22960_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m22962_gshared (Dictionary_2_t3769 * __this, KeyValuePair_2U5BU5D_t4226* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m22962(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3769 *, KeyValuePair_2U5BU5D_t4226*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m22962_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m22964_gshared (Dictionary_2_t3769 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m22964(__this, method) (( void (*) (Dictionary_2_t3769 *, const MethodInfo*))Dictionary_2_Resize_m22964_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m22966_gshared (Dictionary_2_t3769 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m22966(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3769 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m22966_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m22968_gshared (Dictionary_2_t3769 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m22968(__this, method) (( void (*) (Dictionary_2_t3769 *, const MethodInfo*))Dictionary_2_Clear_m22968_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m22970_gshared (Dictionary_2_t3769 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m22970(__this, ___key, method) (( bool (*) (Dictionary_2_t3769 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m22970_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m22972_gshared (Dictionary_2_t3769 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m22972(__this, ___value, method) (( bool (*) (Dictionary_2_t3769 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m22972_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m22974_gshared (Dictionary_2_t3769 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m22974(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3769 *, SerializationInfo_t669 *, StreamingContext_t670 , const MethodInfo*))Dictionary_2_GetObjectData_m22974_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m22976_gshared (Dictionary_2_t3769 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m22976(__this, ___sender, method) (( void (*) (Dictionary_2_t3769 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m22976_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m22978_gshared (Dictionary_2_t3769 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m22978(__this, ___key, method) (( bool (*) (Dictionary_2_t3769 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m22978_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m22980_gshared (Dictionary_2_t3769 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m22980(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3769 *, uint64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m22980_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Keys()
extern "C" KeyCollection_t3773 * Dictionary_2_get_Keys_m22982_gshared (Dictionary_2_t3769 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m22982(__this, method) (( KeyCollection_t3773 * (*) (Dictionary_2_t3769 *, const MethodInfo*))Dictionary_2_get_Keys_m22982_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Values()
extern "C" ValueCollection_t3777 * Dictionary_2_get_Values_m22984_gshared (Dictionary_2_t3769 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m22984(__this, method) (( ValueCollection_t3777 * (*) (Dictionary_2_t3769 *, const MethodInfo*))Dictionary_2_get_Values_m22984_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m22986_gshared (Dictionary_2_t3769 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m22986(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t3769 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m22986_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m22988_gshared (Dictionary_2_t3769 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m22988(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t3769 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m22988_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m22990_gshared (Dictionary_2_t3769 * __this, KeyValuePair_2_t3770  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m22990(__this, ___pair, method) (( bool (*) (Dictionary_2_t3769 *, KeyValuePair_2_t3770 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m22990_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t3775  Dictionary_2_GetEnumerator_m22992_gshared (Dictionary_2_t3769 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m22992(__this, method) (( Enumerator_t3775  (*) (Dictionary_2_t3769 *, const MethodInfo*))Dictionary_2_GetEnumerator_m22992_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t1150  Dictionary_2_U3CCopyToU3Em__2_m22994_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m22994(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1150  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m22994_gshared)(__this /* static, unused */, ___key, ___value, method)
