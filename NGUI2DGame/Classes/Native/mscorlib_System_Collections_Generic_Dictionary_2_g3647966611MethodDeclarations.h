#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>
struct Dictionary_2_t3647966611;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector2>
struct IEqualityComparer_1_t1456340357;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Collections.ICollection
struct ICollection_t91669223;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector2,System.Object>[]
struct KeyValuePair_2U5BU5D_t953644836;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector2,System.Object>>
struct IEnumerator_1_t3175802956;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Vector2,System.Object>
struct KeyCollection_t1836497086;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Vector2,System.Object>
struct ValueCollection_t2351026454;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21405311833.h"
#include "mscorlib_System_Array3829468939.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_En673024017.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m3392025181_gshared (Dictionary_2_t3647966611 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m3392025181(__this, method) ((  void (*) (Dictionary_2_t3647966611 *, const MethodInfo*))Dictionary_2__ctor_m3392025181_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1623864136_gshared (Dictionary_2_t3647966611 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m1623864136(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t3647966611 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m1623864136_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m872223568_gshared (Dictionary_2_t3647966611 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m872223568(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t3647966611 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m872223568_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m3894417059_gshared (Dictionary_2_t3647966611 * __this, int32_t ___capacity0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m3894417059(__this, ___capacity0, ___comparer1, method) ((  void (*) (Dictionary_2_t3647966611 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3894417059_gshared)(__this, ___capacity0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m1679463366_gshared (Dictionary_2_t3647966611 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m1679463366(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t3647966611 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2__ctor_m1679463366_gshared)(__this, ___info0, ___context1, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Keys_m1579197539_gshared (Dictionary_2_t3647966611 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m1579197539(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3647966611 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m1579197539_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::System.Collections.IDictionary.get_Values()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Values_m2034302723_gshared (Dictionary_2_t3647966611 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m2034302723(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3647966611 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m2034302723_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m2714983725_gshared (Dictionary_2_t3647966611 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m2714983725(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t3647966611 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m2714983725_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m2996268270_gshared (Dictionary_2_t3647966611 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m2996268270(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t3647966611 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m2996268270_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m2661984623_gshared (Dictionary_2_t3647966611 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m2661984623(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t3647966611 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m2661984623_gshared)(__this, ___key0, ___value1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m1099735707_gshared (Dictionary_2_t3647966611 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1099735707(__this, ___key0, method) ((  bool (*) (Dictionary_2_t3647966611 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1099735707_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m2334873594_gshared (Dictionary_2_t3647966611 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m2334873594(__this, ___key0, method) ((  void (*) (Dictionary_2_t3647966611 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m2334873594_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1871345497_gshared (Dictionary_2_t3647966611 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1871345497(__this, method) ((  bool (*) (Dictionary_2_t3647966611 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1871345497_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m4046616853_gshared (Dictionary_2_t3647966611 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m4046616853(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3647966611 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m4046616853_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m206737043_gshared (Dictionary_2_t3647966611 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m206737043(__this, method) ((  bool (*) (Dictionary_2_t3647966611 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m206737043_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1110994304_gshared (Dictionary_2_t3647966611 * __this, KeyValuePair_2_t1405311833  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1110994304(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t3647966611 *, KeyValuePair_2_t1405311833 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1110994304_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2341280184_gshared (Dictionary_2_t3647966611 * __this, KeyValuePair_2_t1405311833  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2341280184(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t3647966611 *, KeyValuePair_2_t1405311833 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2341280184_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2019305620_gshared (Dictionary_2_t3647966611 * __this, KeyValuePair_2U5BU5D_t953644836* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2019305620(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t3647966611 *, KeyValuePair_2U5BU5D_t953644836*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2019305620_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3437379157_gshared (Dictionary_2_t3647966611 * __this, KeyValuePair_2_t1405311833  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3437379157(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t3647966611 *, KeyValuePair_2_t1405311833 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3437379157_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m867384565_gshared (Dictionary_2_t3647966611 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m867384565(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t3647966611 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m867384565_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3857411606_gshared (Dictionary_2_t3647966611 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3857411606(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3647966611 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3857411606_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1945680347_gshared (Dictionary_2_t3647966611 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1945680347(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t3647966611 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1945680347_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m865042816_gshared (Dictionary_2_t3647966611 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m865042816(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3647966611 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m865042816_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m1000606993_gshared (Dictionary_2_t3647966611 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1000606993(__this, method) ((  int32_t (*) (Dictionary_2_t3647966611 *, const MethodInfo*))Dictionary_2_get_Count_m1000606993_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::get_Item(TKey)
extern "C"  Il2CppObject * Dictionary_2_get_Item_m3812056544_gshared (Dictionary_2_t3647966611 * __this, Vector2_t2243707579  ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m3812056544(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t3647966611 *, Vector2_t2243707579 , const MethodInfo*))Dictionary_2_get_Item_m3812056544_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m1130989573_gshared (Dictionary_2_t3647966611 * __this, Vector2_t2243707579  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m1130989573(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t3647966611 *, Vector2_t2243707579 , Il2CppObject *, const MethodInfo*))Dictionary_2_set_Item_m1130989573_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m4294958377_gshared (Dictionary_2_t3647966611 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m4294958377(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t3647966611 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m4294958377_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m811774400_gshared (Dictionary_2_t3647966611 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m811774400(__this, ___size0, method) ((  void (*) (Dictionary_2_t3647966611 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m811774400_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m2218773586_gshared (Dictionary_2_t3647966611 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m2218773586(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t3647966611 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m2218773586_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t1405311833  Dictionary_2_make_pair_m754439932_gshared (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m754439932(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t1405311833  (*) (Il2CppObject * /* static, unused */, Vector2_t2243707579 , Il2CppObject *, const MethodInfo*))Dictionary_2_make_pair_m754439932_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::pick_key(TKey,TValue)
extern "C"  Vector2_t2243707579  Dictionary_2_pick_key_m2501317062_gshared (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m2501317062(__this /* static, unused */, ___key0, ___value1, method) ((  Vector2_t2243707579  (*) (Il2CppObject * /* static, unused */, Vector2_t2243707579 , Il2CppObject *, const MethodInfo*))Dictionary_2_pick_key_m2501317062_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::pick_value(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_value_m2159309710_gshared (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m2159309710(__this /* static, unused */, ___key0, ___value1, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Vector2_t2243707579 , Il2CppObject *, const MethodInfo*))Dictionary_2_pick_value_m2159309710_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m621304385_gshared (Dictionary_2_t3647966611 * __this, KeyValuePair_2U5BU5D_t953644836* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m621304385(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t3647966611 *, KeyValuePair_2U5BU5D_t953644836*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m621304385_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::Resize()
extern "C"  void Dictionary_2_Resize_m3541310815_gshared (Dictionary_2_t3647966611 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m3541310815(__this, method) ((  void (*) (Dictionary_2_t3647966611 *, const MethodInfo*))Dictionary_2_Resize_m3541310815_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m1077086220_gshared (Dictionary_2_t3647966611 * __this, Vector2_t2243707579  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m1077086220(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t3647966611 *, Vector2_t2243707579 , Il2CppObject *, const MethodInfo*))Dictionary_2_Add_m1077086220_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m835954608_gshared (Dictionary_2_t3647966611 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m835954608(__this, method) ((  void (*) (Dictionary_2_t3647966611 *, const MethodInfo*))Dictionary_2_Clear_m835954608_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m3402689888_gshared (Dictionary_2_t3647966611 * __this, Vector2_t2243707579  ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m3402689888(__this, ___key0, method) ((  bool (*) (Dictionary_2_t3647966611 *, Vector2_t2243707579 , const MethodInfo*))Dictionary_2_ContainsKey_m3402689888_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m2236000216_gshared (Dictionary_2_t3647966611 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m2236000216(__this, ___value0, method) ((  bool (*) (Dictionary_2_t3647966611 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsValue_m2236000216_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m704714081_gshared (Dictionary_2_t3647966611 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m704714081(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t3647966611 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2_GetObjectData_m704714081_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m241768541_gshared (Dictionary_2_t3647966611 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m241768541(__this, ___sender0, method) ((  void (*) (Dictionary_2_t3647966611 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m241768541_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m1382106088_gshared (Dictionary_2_t3647966611 * __this, Vector2_t2243707579  ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m1382106088(__this, ___key0, method) ((  bool (*) (Dictionary_2_t3647966611 *, Vector2_t2243707579 , const MethodInfo*))Dictionary_2_Remove_m1382106088_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m1580060125_gshared (Dictionary_2_t3647966611 * __this, Vector2_t2243707579  ___key0, Il2CppObject ** ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1580060125(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t3647966611 *, Vector2_t2243707579 , Il2CppObject **, const MethodInfo*))Dictionary_2_TryGetValue_m1580060125_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::get_Keys()
extern "C"  KeyCollection_t1836497086 * Dictionary_2_get_Keys_m1380583468_gshared (Dictionary_2_t3647966611 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1380583468(__this, method) ((  KeyCollection_t1836497086 * (*) (Dictionary_2_t3647966611 *, const MethodInfo*))Dictionary_2_get_Keys_m1380583468_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::get_Values()
extern "C"  ValueCollection_t2351026454 * Dictionary_2_get_Values_m858995660_gshared (Dictionary_2_t3647966611 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m858995660(__this, method) ((  ValueCollection_t2351026454 * (*) (Dictionary_2_t3647966611 *, const MethodInfo*))Dictionary_2_get_Values_m858995660_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::ToTKey(System.Object)
extern "C"  Vector2_t2243707579  Dictionary_2_ToTKey_m2515087359_gshared (Dictionary_2_t3647966611 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m2515087359(__this, ___key0, method) ((  Vector2_t2243707579  (*) (Dictionary_2_t3647966611 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m2515087359_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::ToTValue(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTValue_m1340046271_gshared (Dictionary_2_t3647966611 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1340046271(__this, ___value0, method) ((  Il2CppObject * (*) (Dictionary_2_t3647966611 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m1340046271_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m2893728141_gshared (Dictionary_2_t3647966611 * __this, KeyValuePair_2_t1405311833  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m2893728141(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t3647966611 *, KeyValuePair_2_t1405311833 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m2893728141_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::GetEnumerator()
extern "C"  Enumerator_t673024017  Dictionary_2_GetEnumerator_m3475164076_gshared (Dictionary_2_t3647966611 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m3475164076(__this, method) ((  Enumerator_t673024017  (*) (Dictionary_2_t3647966611 *, const MethodInfo*))Dictionary_2_GetEnumerator_m3475164076_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Object>::<CopyTo>m__2(TKey,TValue)
extern "C"  DictionaryEntry_t3048875398  Dictionary_2_U3CCopyToU3Em__2_m1774996205_gshared (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m1774996205(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t3048875398  (*) (Il2CppObject * /* static, unused */, Vector2_t2243707579 , Il2CppObject *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m1774996205_gshared)(__this /* static, unused */, ___key0, ___value1, method)
