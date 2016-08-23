#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t3610;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t658;
// System.Collections.ICollection
struct ICollection_t793;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t3613;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t3617;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3537;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t4114;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t669;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3815;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t4115;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1360;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m20930_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m20930(__this, method) (( void (*) (Dictionary_2_t3610 *, const MethodInfo*))Dictionary_2__ctor_m20930_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20932_gshared (Dictionary_2_t3610 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m20932(__this, ___comparer, method) (( void (*) (Dictionary_2_t3610 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20932_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m20934_gshared (Dictionary_2_t3610 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m20934(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3610 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20934_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m20936_gshared (Dictionary_2_t3610 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m20936(__this, ___capacity, method) (( void (*) (Dictionary_2_t3610 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m20936_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20938_gshared (Dictionary_2_t3610 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m20938(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3610 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20938_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m20940_gshared (Dictionary_2_t3610 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m20940(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3610 *, SerializationInfo_t669 *, StreamingContext_t670 , const MethodInfo*))Dictionary_2__ctor_m20940_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20942_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20942(__this, method) (( Object_t* (*) (Dictionary_2_t3610 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20942_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20944_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20944(__this, method) (( Object_t* (*) (Dictionary_2_t3610 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20944_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m20946_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m20946(__this, method) (( Object_t * (*) (Dictionary_2_t3610 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m20946_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m20948_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m20948(__this, method) (( Object_t * (*) (Dictionary_2_t3610 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m20948_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m20950_gshared (Dictionary_2_t3610 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m20950(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3610 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m20950_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m20952_gshared (Dictionary_2_t3610 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m20952(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3610 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m20952_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m20954_gshared (Dictionary_2_t3610 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m20954(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3610 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m20954_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m20956_gshared (Dictionary_2_t3610 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m20956(__this, ___key, method) (( bool (*) (Dictionary_2_t3610 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m20956_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m20958_gshared (Dictionary_2_t3610 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m20958(__this, ___key, method) (( void (*) (Dictionary_2_t3610 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m20958_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20960_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20960(__this, method) (( Object_t * (*) (Dictionary_2_t3610 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20960_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20962_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20962(__this, method) (( bool (*) (Dictionary_2_t3610 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20962_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20964_gshared (Dictionary_2_t3610 * __this, KeyValuePair_2_t3611  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20964(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3610 *, KeyValuePair_2_t3611 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20964_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20966_gshared (Dictionary_2_t3610 * __this, KeyValuePair_2_t3611  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20966(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3610 *, KeyValuePair_2_t3611 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20966_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20968_gshared (Dictionary_2_t3610 * __this, KeyValuePair_2U5BU5D_t3815* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20968(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3610 *, KeyValuePair_2U5BU5D_t3815*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20968_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20970_gshared (Dictionary_2_t3610 * __this, KeyValuePair_2_t3611  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20970(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3610 *, KeyValuePair_2_t3611 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20970_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m20972_gshared (Dictionary_2_t3610 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m20972(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3610 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m20972_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20974_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20974(__this, method) (( Object_t * (*) (Dictionary_2_t3610 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20974_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20976_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20976(__this, method) (( Object_t* (*) (Dictionary_2_t3610 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20976_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20978_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20978(__this, method) (( Object_t * (*) (Dictionary_2_t3610 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20978_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m20980_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m20980(__this, method) (( int32_t (*) (Dictionary_2_t3610 *, const MethodInfo*))Dictionary_2_get_Count_m20980_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m20982_gshared (Dictionary_2_t3610 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m20982(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3610 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m20982_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m20984_gshared (Dictionary_2_t3610 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m20984(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3610 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m20984_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m20986_gshared (Dictionary_2_t3610 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m20986(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3610 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m20986_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m20988_gshared (Dictionary_2_t3610 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m20988(__this, ___size, method) (( void (*) (Dictionary_2_t3610 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m20988_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m20990_gshared (Dictionary_2_t3610 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m20990(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3610 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m20990_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3611  Dictionary_2_make_pair_m20992_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m20992(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3611  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m20992_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m20994_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m20994(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m20994_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m20996_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m20996(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m20996_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m20998_gshared (Dictionary_2_t3610 * __this, KeyValuePair_2U5BU5D_t3815* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m20998(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3610 *, KeyValuePair_2U5BU5D_t3815*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m20998_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m21000_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m21000(__this, method) (( void (*) (Dictionary_2_t3610 *, const MethodInfo*))Dictionary_2_Resize_m21000_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m21002_gshared (Dictionary_2_t3610 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m21002(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3610 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m21002_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m21004_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m21004(__this, method) (( void (*) (Dictionary_2_t3610 *, const MethodInfo*))Dictionary_2_Clear_m21004_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m21006_gshared (Dictionary_2_t3610 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m21006(__this, ___key, method) (( bool (*) (Dictionary_2_t3610 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m21006_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m21008_gshared (Dictionary_2_t3610 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m21008(__this, ___value, method) (( bool (*) (Dictionary_2_t3610 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m21008_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m21010_gshared (Dictionary_2_t3610 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m21010(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3610 *, SerializationInfo_t669 *, StreamingContext_t670 , const MethodInfo*))Dictionary_2_GetObjectData_m21010_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m21012_gshared (Dictionary_2_t3610 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m21012(__this, ___sender, method) (( void (*) (Dictionary_2_t3610 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21012_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m21014_gshared (Dictionary_2_t3610 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m21014(__this, ___key, method) (( bool (*) (Dictionary_2_t3610 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m21014_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m21016_gshared (Dictionary_2_t3610 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m21016(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3610 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m21016_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t3613 * Dictionary_2_get_Keys_m21018_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m21018(__this, method) (( KeyCollection_t3613 * (*) (Dictionary_2_t3610 *, const MethodInfo*))Dictionary_2_get_Keys_m21018_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t3617 * Dictionary_2_get_Values_m21020_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m21020(__this, method) (( ValueCollection_t3617 * (*) (Dictionary_2_t3610 *, const MethodInfo*))Dictionary_2_get_Values_m21020_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m21022_gshared (Dictionary_2_t3610 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m21022(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3610 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21022_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m21024_gshared (Dictionary_2_t3610 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m21024(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t3610 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21024_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m21026_gshared (Dictionary_2_t3610 * __this, KeyValuePair_2_t3611  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m21026(__this, ___pair, method) (( bool (*) (Dictionary_2_t3610 *, KeyValuePair_2_t3611 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21026_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t3615  Dictionary_2_GetEnumerator_m21027_gshared (Dictionary_2_t3610 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m21027(__this, method) (( Enumerator_t3615  (*) (Dictionary_2_t3610 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21027_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t1150  Dictionary_2_U3CCopyToU3Em__2_m21029_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m21029(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1150  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m21029_gshared)(__this /* static, unused */, ___key, ___value, method)
