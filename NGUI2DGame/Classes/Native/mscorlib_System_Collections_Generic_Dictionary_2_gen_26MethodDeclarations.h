#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t3952;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t658;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t4347;
// System.Collections.ICollection
struct ICollection_t793;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t3955;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t3959;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3537;
// System.Collections.Generic.IDictionary`2<System.Object,System.Byte>
struct IDictionary_2_t4348;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t669;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t4349;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t4350;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1360;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__20.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m25168_gshared (Dictionary_2_t3952 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m25168(__this, method) (( void (*) (Dictionary_2_t3952 *, const MethodInfo*))Dictionary_2__ctor_m25168_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m25169_gshared (Dictionary_2_t3952 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m25169(__this, ___comparer, method) (( void (*) (Dictionary_2_t3952 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25169_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m25171_gshared (Dictionary_2_t3952 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m25171(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3952 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25171_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m25173_gshared (Dictionary_2_t3952 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m25173(__this, ___capacity, method) (( void (*) (Dictionary_2_t3952 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m25173_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m25175_gshared (Dictionary_2_t3952 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m25175(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3952 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25175_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m25177_gshared (Dictionary_2_t3952 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m25177(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3952 *, SerializationInfo_t669 *, StreamingContext_t670 , const MethodInfo*))Dictionary_2__ctor_m25177_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25179_gshared (Dictionary_2_t3952 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25179(__this, method) (( Object_t* (*) (Dictionary_2_t3952 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25179_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25181_gshared (Dictionary_2_t3952 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25181(__this, method) (( Object_t* (*) (Dictionary_2_t3952 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25181_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m25183_gshared (Dictionary_2_t3952 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m25183(__this, method) (( Object_t * (*) (Dictionary_2_t3952 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m25183_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m25185_gshared (Dictionary_2_t3952 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m25185(__this, method) (( Object_t * (*) (Dictionary_2_t3952 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m25185_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m25187_gshared (Dictionary_2_t3952 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m25187(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3952 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m25187_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m25189_gshared (Dictionary_2_t3952 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m25189(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3952 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m25189_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m25191_gshared (Dictionary_2_t3952 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m25191(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3952 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m25191_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m25193_gshared (Dictionary_2_t3952 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m25193(__this, ___key, method) (( bool (*) (Dictionary_2_t3952 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m25193_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m25195_gshared (Dictionary_2_t3952 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m25195(__this, ___key, method) (( void (*) (Dictionary_2_t3952 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m25195_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25197_gshared (Dictionary_2_t3952 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25197(__this, method) (( Object_t * (*) (Dictionary_2_t3952 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25197_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25199_gshared (Dictionary_2_t3952 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25199(__this, method) (( bool (*) (Dictionary_2_t3952 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25199_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25201_gshared (Dictionary_2_t3952 * __this, KeyValuePair_2_t3953  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25201(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3952 *, KeyValuePair_2_t3953 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25201_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25203_gshared (Dictionary_2_t3952 * __this, KeyValuePair_2_t3953  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25203(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3952 *, KeyValuePair_2_t3953 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25203_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25205_gshared (Dictionary_2_t3952 * __this, KeyValuePair_2U5BU5D_t4349* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25205(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3952 *, KeyValuePair_2U5BU5D_t4349*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25205_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25207_gshared (Dictionary_2_t3952 * __this, KeyValuePair_2_t3953  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25207(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3952 *, KeyValuePair_2_t3953 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25207_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m25209_gshared (Dictionary_2_t3952 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m25209(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3952 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m25209_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25211_gshared (Dictionary_2_t3952 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25211(__this, method) (( Object_t * (*) (Dictionary_2_t3952 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25211_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25213_gshared (Dictionary_2_t3952 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25213(__this, method) (( Object_t* (*) (Dictionary_2_t3952 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25213_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25215_gshared (Dictionary_2_t3952 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25215(__this, method) (( Object_t * (*) (Dictionary_2_t3952 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25215_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m25217_gshared (Dictionary_2_t3952 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m25217(__this, method) (( int32_t (*) (Dictionary_2_t3952 *, const MethodInfo*))Dictionary_2_get_Count_m25217_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m25219_gshared (Dictionary_2_t3952 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m25219(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t3952 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m25219_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m25221_gshared (Dictionary_2_t3952 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m25221(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3952 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m25221_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m25223_gshared (Dictionary_2_t3952 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m25223(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3952 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m25223_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m25225_gshared (Dictionary_2_t3952 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m25225(__this, ___size, method) (( void (*) (Dictionary_2_t3952 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m25225_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m25227_gshared (Dictionary_2_t3952 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m25227(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3952 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m25227_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3953  Dictionary_2_make_pair_m25229_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m25229(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3953  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m25229_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m25231_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m25231(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m25231_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m25233_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m25233(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m25233_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m25235_gshared (Dictionary_2_t3952 * __this, KeyValuePair_2U5BU5D_t4349* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m25235(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3952 *, KeyValuePair_2U5BU5D_t4349*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m25235_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m25237_gshared (Dictionary_2_t3952 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m25237(__this, method) (( void (*) (Dictionary_2_t3952 *, const MethodInfo*))Dictionary_2_Resize_m25237_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m25239_gshared (Dictionary_2_t3952 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m25239(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3952 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_Add_m25239_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m25241_gshared (Dictionary_2_t3952 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m25241(__this, method) (( void (*) (Dictionary_2_t3952 *, const MethodInfo*))Dictionary_2_Clear_m25241_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m25243_gshared (Dictionary_2_t3952 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m25243(__this, ___key, method) (( bool (*) (Dictionary_2_t3952 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m25243_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m25245_gshared (Dictionary_2_t3952 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m25245(__this, ___value, method) (( bool (*) (Dictionary_2_t3952 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m25245_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m25247_gshared (Dictionary_2_t3952 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m25247(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3952 *, SerializationInfo_t669 *, StreamingContext_t670 , const MethodInfo*))Dictionary_2_GetObjectData_m25247_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m25249_gshared (Dictionary_2_t3952 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m25249(__this, ___sender, method) (( void (*) (Dictionary_2_t3952 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m25249_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m25251_gshared (Dictionary_2_t3952 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m25251(__this, ___key, method) (( bool (*) (Dictionary_2_t3952 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m25251_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m25253_gshared (Dictionary_2_t3952 * __this, Object_t * ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m25253(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3952 *, Object_t *, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m25253_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t3955 * Dictionary_2_get_Keys_m25255_gshared (Dictionary_2_t3952 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m25255(__this, method) (( KeyCollection_t3955 * (*) (Dictionary_2_t3952 *, const MethodInfo*))Dictionary_2_get_Keys_m25255_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t3959 * Dictionary_2_get_Values_m25257_gshared (Dictionary_2_t3952 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m25257(__this, method) (( ValueCollection_t3959 * (*) (Dictionary_2_t3952 *, const MethodInfo*))Dictionary_2_get_Values_m25257_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m25259_gshared (Dictionary_2_t3952 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m25259(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3952 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m25259_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m25261_gshared (Dictionary_2_t3952 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m25261(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t3952 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m25261_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m25263_gshared (Dictionary_2_t3952 * __this, KeyValuePair_2_t3953  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m25263(__this, ___pair, method) (( bool (*) (Dictionary_2_t3952 *, KeyValuePair_2_t3953 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m25263_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t3957  Dictionary_2_GetEnumerator_m25265_gshared (Dictionary_2_t3952 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m25265(__this, method) (( Enumerator_t3957  (*) (Dictionary_2_t3952 *, const MethodInfo*))Dictionary_2_GetEnumerator_m25265_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t1150  Dictionary_2_U3CCopyToU3Em__2_m25267_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m25267(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1150  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m25267_gshared)(__this /* static, unused */, ___key, ___value, method)
