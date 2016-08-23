#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t3737;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t658;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t4201;
// System.Collections.ICollection
struct ICollection_t793;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t3741;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t3745;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3537;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t4205;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t669;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t4206;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t4207;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1360;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m22546_gshared (Dictionary_2_t3737 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m22546(__this, method) (( void (*) (Dictionary_2_t3737 *, const MethodInfo*))Dictionary_2__ctor_m22546_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m22548_gshared (Dictionary_2_t3737 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m22548(__this, ___comparer, method) (( void (*) (Dictionary_2_t3737 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m22548_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m22550_gshared (Dictionary_2_t3737 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m22550(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3737 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m22550_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m22552_gshared (Dictionary_2_t3737 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m22552(__this, ___capacity, method) (( void (*) (Dictionary_2_t3737 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m22552_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m22554_gshared (Dictionary_2_t3737 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m22554(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3737 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m22554_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m22556_gshared (Dictionary_2_t3737 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m22556(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3737 *, SerializationInfo_t669 *, StreamingContext_t670 , const MethodInfo*))Dictionary_2__ctor_m22556_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m22558_gshared (Dictionary_2_t3737 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m22558(__this, method) (( Object_t* (*) (Dictionary_2_t3737 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m22558_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m22560_gshared (Dictionary_2_t3737 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m22560(__this, method) (( Object_t* (*) (Dictionary_2_t3737 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m22560_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m22562_gshared (Dictionary_2_t3737 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m22562(__this, method) (( Object_t * (*) (Dictionary_2_t3737 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m22562_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m22564_gshared (Dictionary_2_t3737 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m22564(__this, method) (( Object_t * (*) (Dictionary_2_t3737 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m22564_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m22566_gshared (Dictionary_2_t3737 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m22566(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3737 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m22566_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m22568_gshared (Dictionary_2_t3737 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m22568(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3737 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m22568_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m22570_gshared (Dictionary_2_t3737 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m22570(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3737 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m22570_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m22572_gshared (Dictionary_2_t3737 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m22572(__this, ___key, method) (( bool (*) (Dictionary_2_t3737 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m22572_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m22574_gshared (Dictionary_2_t3737 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m22574(__this, ___key, method) (( void (*) (Dictionary_2_t3737 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m22574_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22576_gshared (Dictionary_2_t3737 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22576(__this, method) (( Object_t * (*) (Dictionary_2_t3737 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22576_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22578_gshared (Dictionary_2_t3737 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22578(__this, method) (( bool (*) (Dictionary_2_t3737 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22578_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22580_gshared (Dictionary_2_t3737 * __this, KeyValuePair_2_t3738  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22580(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3737 *, KeyValuePair_2_t3738 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22580_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22582_gshared (Dictionary_2_t3737 * __this, KeyValuePair_2_t3738  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22582(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3737 *, KeyValuePair_2_t3738 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22582_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22584_gshared (Dictionary_2_t3737 * __this, KeyValuePair_2U5BU5D_t4206* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22584(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3737 *, KeyValuePair_2U5BU5D_t4206*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22584_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22586_gshared (Dictionary_2_t3737 * __this, KeyValuePair_2_t3738  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22586(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3737 *, KeyValuePair_2_t3738 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22586_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m22588_gshared (Dictionary_2_t3737 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m22588(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3737 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m22588_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22590_gshared (Dictionary_2_t3737 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22590(__this, method) (( Object_t * (*) (Dictionary_2_t3737 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22590_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22592_gshared (Dictionary_2_t3737 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22592(__this, method) (( Object_t* (*) (Dictionary_2_t3737 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22592_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22594_gshared (Dictionary_2_t3737 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22594(__this, method) (( Object_t * (*) (Dictionary_2_t3737 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22594_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m22596_gshared (Dictionary_2_t3737 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m22596(__this, method) (( int32_t (*) (Dictionary_2_t3737 *, const MethodInfo*))Dictionary_2_get_Count_m22596_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m22598_gshared (Dictionary_2_t3737 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m22598(__this, ___key, method) (( int64_t (*) (Dictionary_2_t3737 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m22598_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m22600_gshared (Dictionary_2_t3737 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m22600(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3737 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m22600_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m22602_gshared (Dictionary_2_t3737 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m22602(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3737 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m22602_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m22604_gshared (Dictionary_2_t3737 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m22604(__this, ___size, method) (( void (*) (Dictionary_2_t3737 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m22604_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m22606_gshared (Dictionary_2_t3737 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m22606(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3737 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m22606_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3738  Dictionary_2_make_pair_m22608_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m22608(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3738  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m22608_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m22610_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m22610(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m22610_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m22612_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m22612(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m22612_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m22614_gshared (Dictionary_2_t3737 * __this, KeyValuePair_2U5BU5D_t4206* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m22614(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3737 *, KeyValuePair_2U5BU5D_t4206*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m22614_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m22616_gshared (Dictionary_2_t3737 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m22616(__this, method) (( void (*) (Dictionary_2_t3737 *, const MethodInfo*))Dictionary_2_Resize_m22616_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m22618_gshared (Dictionary_2_t3737 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m22618(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3737 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_Add_m22618_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m22620_gshared (Dictionary_2_t3737 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m22620(__this, method) (( void (*) (Dictionary_2_t3737 *, const MethodInfo*))Dictionary_2_Clear_m22620_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m22622_gshared (Dictionary_2_t3737 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m22622(__this, ___key, method) (( bool (*) (Dictionary_2_t3737 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m22622_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m22624_gshared (Dictionary_2_t3737 * __this, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m22624(__this, ___value, method) (( bool (*) (Dictionary_2_t3737 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m22624_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m22626_gshared (Dictionary_2_t3737 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m22626(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3737 *, SerializationInfo_t669 *, StreamingContext_t670 , const MethodInfo*))Dictionary_2_GetObjectData_m22626_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m22628_gshared (Dictionary_2_t3737 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m22628(__this, ___sender, method) (( void (*) (Dictionary_2_t3737 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m22628_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m22630_gshared (Dictionary_2_t3737 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m22630(__this, ___key, method) (( bool (*) (Dictionary_2_t3737 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m22630_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m22632_gshared (Dictionary_2_t3737 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m22632(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3737 *, Object_t *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m22632_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t3741 * Dictionary_2_get_Keys_m22634_gshared (Dictionary_2_t3737 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m22634(__this, method) (( KeyCollection_t3741 * (*) (Dictionary_2_t3737 *, const MethodInfo*))Dictionary_2_get_Keys_m22634_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t3745 * Dictionary_2_get_Values_m22636_gshared (Dictionary_2_t3737 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m22636(__this, method) (( ValueCollection_t3745 * (*) (Dictionary_2_t3737 *, const MethodInfo*))Dictionary_2_get_Values_m22636_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m22638_gshared (Dictionary_2_t3737 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m22638(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3737 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m22638_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m22640_gshared (Dictionary_2_t3737 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m22640(__this, ___value, method) (( int64_t (*) (Dictionary_2_t3737 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m22640_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m22642_gshared (Dictionary_2_t3737 * __this, KeyValuePair_2_t3738  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m22642(__this, ___pair, method) (( bool (*) (Dictionary_2_t3737 *, KeyValuePair_2_t3738 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m22642_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t3743  Dictionary_2_GetEnumerator_m22644_gshared (Dictionary_2_t3737 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m22644(__this, method) (( Enumerator_t3743  (*) (Dictionary_2_t3737 *, const MethodInfo*))Dictionary_2_GetEnumerator_m22644_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t1150  Dictionary_2_U3CCopyToU3Em__2_m22646_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m22646(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1150  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m22646_gshared)(__this /* static, unused */, ___key, ___value, method)
