#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t562;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t657;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t658;
// System.Collections.ICollection
struct ICollection_t793;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t690;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t691;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3339;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t652;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t669;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t659;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t661;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1360;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_18MethodDeclarations.h"
#define Dictionary_2__ctor_m3224(__this, method) (( void (*) (Dictionary_2_t562 *, const MethodInfo*))Dictionary_2__ctor_m20930_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m23169(__this, ___comparer, method) (( void (*) (Dictionary_2_t562 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20932_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m23170(__this, ___dictionary, method) (( void (*) (Dictionary_2_t562 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20934_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Int32)
#define Dictionary_2__ctor_m23171(__this, ___capacity, method) (( void (*) (Dictionary_2_t562 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m20936_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m23172(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t562 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20938_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m23173(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t562 *, SerializationInfo_t669 *, StreamingContext_t670 , const MethodInfo*))Dictionary_2__ctor_m20940_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23174(__this, method) (( Object_t* (*) (Dictionary_2_t562 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20942_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23175(__this, method) (( Object_t* (*) (Dictionary_2_t562 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20944_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m23176(__this, method) (( Object_t * (*) (Dictionary_2_t562 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m20946_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.get_Values()
#define Dictionary_2_System_Collections_IDictionary_get_Values_m23177(__this, method) (( Object_t * (*) (Dictionary_2_t562 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m20948_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m23178(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t562 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m20950_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m23179(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t562 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m20952_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m23180(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t562 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m20954_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m23181(__this, ___key, method) (( bool (*) (Dictionary_2_t562 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m20956_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m23182(__this, ___key, method) (( void (*) (Dictionary_2_t562 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m20958_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23183(__this, method) (( Object_t * (*) (Dictionary_2_t562 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20960_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23184(__this, method) (( bool (*) (Dictionary_2_t562 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20962_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23185(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t562 *, KeyValuePair_2_t660 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20964_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23186(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t562 *, KeyValuePair_2_t660 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20966_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23187(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t562 *, KeyValuePair_2U5BU5D_t659*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20968_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23188(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t562 *, KeyValuePair_2_t660 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20970_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m23189(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t562 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m20972_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23190(__this, method) (( Object_t * (*) (Dictionary_2_t562 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20974_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23191(__this, method) (( Object_t* (*) (Dictionary_2_t562 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20976_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23192(__this, method) (( Object_t * (*) (Dictionary_2_t562 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20978_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count()
#define Dictionary_2_get_Count_m23193(__this, method) (( int32_t (*) (Dictionary_2_t562 *, const MethodInfo*))Dictionary_2_get_Count_m20980_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(TKey)
#define Dictionary_2_get_Item_m23194(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t562 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m20982_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m23195(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t562 *, String_t*, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m20984_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m23196(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t562 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m20986_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m23197(__this, ___size, method) (( void (*) (Dictionary_2_t562 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m20988_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m23198(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t562 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m20990_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m23199(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t660  (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m20992_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Object>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m23200(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m20994_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m23201(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m20996_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m23202(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t562 *, KeyValuePair_2U5BU5D_t659*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m20998_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Resize()
#define Dictionary_2_Resize_m23203(__this, method) (( void (*) (Dictionary_2_t562 *, const MethodInfo*))Dictionary_2_Resize_m21000_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
#define Dictionary_2_Add_m23204(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t562 *, String_t*, Object_t *, const MethodInfo*))Dictionary_2_Add_m21002_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear()
#define Dictionary_2_Clear_m23205(__this, method) (( void (*) (Dictionary_2_t562 *, const MethodInfo*))Dictionary_2_Clear_m21004_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m23206(__this, ___key, method) (( bool (*) (Dictionary_2_t562 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m21006_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m23207(__this, ___value, method) (( bool (*) (Dictionary_2_t562 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m21008_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m23208(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t562 *, SerializationInfo_t669 *, StreamingContext_t670 , const MethodInfo*))Dictionary_2_GetObjectData_m21010_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m23209(__this, ___sender, method) (( void (*) (Dictionary_2_t562 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21012_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(TKey)
#define Dictionary_2_Remove_m23210(__this, ___key, method) (( bool (*) (Dictionary_2_t562 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m21014_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m23211(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t562 *, String_t*, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m21016_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Keys()
#define Dictionary_2_get_Keys_m3226(__this, method) (( KeyCollection_t690 * (*) (Dictionary_2_t562 *, const MethodInfo*))Dictionary_2_get_Keys_m21018_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Values()
#define Dictionary_2_get_Values_m3227(__this, method) (( ValueCollection_t691 * (*) (Dictionary_2_t562 *, const MethodInfo*))Dictionary_2_get_Values_m21020_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Object>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m23212(__this, ___key, method) (( String_t* (*) (Dictionary_2_t562 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21022_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m23213(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t562 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21024_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m23214(__this, ___pair, method) (( bool (*) (Dictionary_2_t562 *, KeyValuePair_2_t660 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21026_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m3225(__this, method) (( Enumerator_t689  (*) (Dictionary_2_t562 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21027_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Object>::<CopyTo>m__2(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__2_m23215(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1150  (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m21029_gshared)(__this /* static, unused */, ___key, ___value, method)
