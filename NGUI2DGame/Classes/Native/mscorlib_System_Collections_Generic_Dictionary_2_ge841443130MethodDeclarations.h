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

// System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>
struct Dictionary_2_t841443130;
// System.Collections.Generic.IEqualityComparer`1<MoveAction>
struct IEqualityComparer_1_t81248495;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Collections.ICollection
struct ICollection_t91669223;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<MoveAction,System.Int32>[]
struct KeyValuePair_2U5BU5D_t1190156033;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<MoveAction,System.Int32>>
struct IEnumerator_1_t369279475;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;
// System.Collections.Generic.Dictionary`2/KeyCollection<MoveAction,System.Int32>
struct KeyCollection_t3324940901;
// System.Collections.Generic.Dictionary`2/ValueCollection<MoveAction,System.Int32>
struct ValueCollection_t3839470269;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22893755648.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_MoveAction868615717.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E2161467832.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"

// System.Void System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::.ctor()
extern "C"  void Dictionary_2__ctor_m3220733925_gshared (Dictionary_2_t841443130 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m3220733925(__this, method) ((  void (*) (Dictionary_2_t841443130 *, const MethodInfo*))Dictionary_2__ctor_m3220733925_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m3628183814_gshared (Dictionary_2_t841443130 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m3628183814(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t841443130 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3628183814_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m4021473139_gshared (Dictionary_2_t841443130 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m4021473139(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t841443130 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m4021473139_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1863502899_gshared (Dictionary_2_t841443130 * __this, int32_t ___capacity0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m1863502899(__this, ___capacity0, ___comparer1, method) ((  void (*) (Dictionary_2_t841443130 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m1863502899_gshared)(__this, ___capacity0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m3611053512_gshared (Dictionary_2_t841443130 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m3611053512(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t841443130 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2__ctor_m3611053512_gshared)(__this, ___info0, ___context1, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Keys_m785483291_gshared (Dictionary_2_t841443130 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m785483291(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t841443130 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m785483291_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::System.Collections.IDictionary.get_Values()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Values_m2344842323_gshared (Dictionary_2_t841443130 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m2344842323(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t841443130 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m2344842323_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m1140336701_gshared (Dictionary_2_t841443130 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1140336701(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t841443130 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1140336701_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m2819486816_gshared (Dictionary_2_t841443130 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m2819486816(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t841443130 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m2819486816_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m2507862015_gshared (Dictionary_2_t841443130 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m2507862015(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t841443130 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m2507862015_gshared)(__this, ___key0, ___value1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m104588043_gshared (Dictionary_2_t841443130 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m104588043(__this, ___key0, method) ((  bool (*) (Dictionary_2_t841443130 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m104588043_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m838074452_gshared (Dictionary_2_t841443130 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m838074452(__this, ___key0, method) ((  void (*) (Dictionary_2_t841443130 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m838074452_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m428686169_gshared (Dictionary_2_t841443130 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m428686169(__this, method) ((  bool (*) (Dictionary_2_t841443130 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m428686169_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m992327989_gshared (Dictionary_2_t841443130 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m992327989(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t841443130 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m992327989_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14737699_gshared (Dictionary_2_t841443130 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14737699(__this, method) ((  bool (*) (Dictionary_2_t841443130 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14737699_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1622544862_gshared (Dictionary_2_t841443130 * __this, KeyValuePair_2_t2893755648  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1622544862(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t841443130 *, KeyValuePair_2_t2893755648 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1622544862_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m253826690_gshared (Dictionary_2_t841443130 * __this, KeyValuePair_2_t2893755648  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m253826690(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t841443130 *, KeyValuePair_2_t2893755648 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m253826690_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3607215754_gshared (Dictionary_2_t841443130 * __this, KeyValuePair_2U5BU5D_t1190156033* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3607215754(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t841443130 *, KeyValuePair_2U5BU5D_t1190156033*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3607215754_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m168188653_gshared (Dictionary_2_t841443130 * __this, KeyValuePair_2_t2893755648  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m168188653(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t841443130 *, KeyValuePair_2_t2893755648 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m168188653_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m858848869_gshared (Dictionary_2_t841443130 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m858848869(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t841443130 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m858848869_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m4106290284_gshared (Dictionary_2_t841443130 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m4106290284(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t841443130 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m4106290284_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1082803659_gshared (Dictionary_2_t841443130 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1082803659(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t841443130 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1082803659_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1467623878_gshared (Dictionary_2_t841443130 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1467623878(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t841443130 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1467623878_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m4053391417_gshared (Dictionary_2_t841443130 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m4053391417(__this, method) ((  int32_t (*) (Dictionary_2_t841443130 *, const MethodInfo*))Dictionary_2_get_Count_m4053391417_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::get_Item(TKey)
extern "C"  int32_t Dictionary_2_get_Item_m1425437934_gshared (Dictionary_2_t841443130 * __this, int32_t ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m1425437934(__this, ___key0, method) ((  int32_t (*) (Dictionary_2_t841443130 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m1425437934_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m3057928933_gshared (Dictionary_2_t841443130 * __this, int32_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m3057928933(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t841443130 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m3057928933_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m2463742809_gshared (Dictionary_2_t841443130 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m2463742809(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t841443130 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m2463742809_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m2238443410_gshared (Dictionary_2_t841443130 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m2238443410(__this, ___size0, method) ((  void (*) (Dictionary_2_t841443130 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m2238443410_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m2492643852_gshared (Dictionary_2_t841443130 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m2492643852(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t841443130 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m2492643852_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t2893755648  Dictionary_2_make_pair_m2678413198_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m2678413198(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t2893755648  (*) (Il2CppObject * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m2678413198_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::pick_key(TKey,TValue)
extern "C"  int32_t Dictionary_2_pick_key_m630321604_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m630321604(__this /* static, unused */, ___key0, ___value1, method) ((  int32_t (*) (Il2CppObject * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m630321604_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::pick_value(TKey,TValue)
extern "C"  int32_t Dictionary_2_pick_value_m2864163140_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m2864163140(__this /* static, unused */, ___key0, ___value1, method) ((  int32_t (*) (Il2CppObject * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m2864163140_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m2948620817_gshared (Dictionary_2_t841443130 * __this, KeyValuePair_2U5BU5D_t1190156033* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m2948620817(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t841443130 *, KeyValuePair_2U5BU5D_t1190156033*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m2948620817_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::Resize()
extern "C"  void Dictionary_2_Resize_m899386535_gshared (Dictionary_2_t841443130 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m899386535(__this, method) ((  void (*) (Dictionary_2_t841443130 *, const MethodInfo*))Dictionary_2_Resize_m899386535_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m211485976_gshared (Dictionary_2_t841443130 * __this, int32_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m211485976(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t841443130 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m211485976_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::Clear()
extern "C"  void Dictionary_2_Clear_m1505928130_gshared (Dictionary_2_t841443130 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1505928130(__this, method) ((  void (*) (Dictionary_2_t841443130 *, const MethodInfo*))Dictionary_2_Clear_m1505928130_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m3169556838_gshared (Dictionary_2_t841443130 * __this, int32_t ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m3169556838(__this, ___key0, method) ((  bool (*) (Dictionary_2_t841443130 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m3169556838_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m4189239366_gshared (Dictionary_2_t841443130 * __this, int32_t ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m4189239366(__this, ___value0, method) ((  bool (*) (Dictionary_2_t841443130 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m4189239366_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m1276033073_gshared (Dictionary_2_t841443130 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1276033073(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t841443130 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2_GetObjectData_m1276033073_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m2447325301_gshared (Dictionary_2_t841443130 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m2447325301(__this, ___sender0, method) ((  void (*) (Dictionary_2_t841443130 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m2447325301_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m4191626762_gshared (Dictionary_2_t841443130 * __this, int32_t ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m4191626762(__this, ___key0, method) ((  bool (*) (Dictionary_2_t841443130 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m4191626762_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m1451051269_gshared (Dictionary_2_t841443130 * __this, int32_t ___key0, int32_t* ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1451051269(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t841443130 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m1451051269_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::get_Keys()
extern "C"  KeyCollection_t3324940901 * Dictionary_2_get_Keys_m2585755162_gshared (Dictionary_2_t841443130 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m2585755162(__this, method) ((  KeyCollection_t3324940901 * (*) (Dictionary_2_t841443130 *, const MethodInfo*))Dictionary_2_get_Keys_m2585755162_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::get_Values()
extern "C"  ValueCollection_t3839470269 * Dictionary_2_get_Values_m4272023378_gshared (Dictionary_2_t841443130 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m4272023378(__this, method) ((  ValueCollection_t3839470269 * (*) (Dictionary_2_t841443130 *, const MethodInfo*))Dictionary_2_get_Values_m4272023378_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::ToTKey(System.Object)
extern "C"  int32_t Dictionary_2_ToTKey_m3329454247_gshared (Dictionary_2_t841443130 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m3329454247(__this, ___key0, method) ((  int32_t (*) (Dictionary_2_t841443130 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m3329454247_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::ToTValue(System.Object)
extern "C"  int32_t Dictionary_2_ToTValue_m2816759839_gshared (Dictionary_2_t841443130 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m2816759839(__this, ___value0, method) ((  int32_t (*) (Dictionary_2_t841443130 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m2816759839_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m3200893053_gshared (Dictionary_2_t841443130 * __this, KeyValuePair_2_t2893755648  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m3200893053(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t841443130 *, KeyValuePair_2_t2893755648 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m3200893053_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::GetEnumerator()
extern "C"  Enumerator_t2161467832  Dictionary_2_GetEnumerator_m3400580646_gshared (Dictionary_2_t841443130 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m3400580646(__this, method) ((  Enumerator_t2161467832  (*) (Dictionary_2_t841443130 *, const MethodInfo*))Dictionary_2_GetEnumerator_m3400580646_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>::<CopyTo>m__2(TKey,TValue)
extern "C"  DictionaryEntry_t3048875398  Dictionary_2_U3CCopyToU3Em__2_m3639064701_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m3639064701(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t3048875398  (*) (Il2CppObject * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m3639064701_gshared)(__this /* static, unused */, ___key0, ___value1, method)
