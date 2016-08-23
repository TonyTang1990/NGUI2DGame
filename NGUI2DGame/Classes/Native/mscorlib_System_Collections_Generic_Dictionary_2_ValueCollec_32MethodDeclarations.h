#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>
struct ValueCollection_t3993;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>
struct Dictionary_2_t2147;
// System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.Label>
struct IEnumerator_1_t4362;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Reflection.Emit.Label[]
struct LabelU5BU5D_t3984;
// System.Reflection.Emit.Label
#include "mscorlib_System_Reflection_Emit_Label.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Reflection.Emit.Label>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_33.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m25645_gshared (ValueCollection_t3993 * __this, Dictionary_2_t2147 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m25645(__this, ___dictionary, method) (( void (*) (ValueCollection_t3993 *, Dictionary_2_t2147 *, const MethodInfo*))ValueCollection__ctor_m25645_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m25646_gshared (ValueCollection_t3993 * __this, Label_t2144  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m25646(__this, ___item, method) (( void (*) (ValueCollection_t3993 *, Label_t2144 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m25646_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m25647_gshared (ValueCollection_t3993 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m25647(__this, method) (( void (*) (ValueCollection_t3993 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m25647_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m25648_gshared (ValueCollection_t3993 * __this, Label_t2144  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m25648(__this, ___item, method) (( bool (*) (ValueCollection_t3993 *, Label_t2144 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m25648_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m25649_gshared (ValueCollection_t3993 * __this, Label_t2144  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m25649(__this, ___item, method) (( bool (*) (ValueCollection_t3993 *, Label_t2144 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m25649_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m25650_gshared (ValueCollection_t3993 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m25650(__this, method) (( Object_t* (*) (ValueCollection_t3993 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m25650_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m25651_gshared (ValueCollection_t3993 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m25651(__this, ___array, ___index, method) (( void (*) (ValueCollection_t3993 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m25651_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m25652_gshared (ValueCollection_t3993 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m25652(__this, method) (( Object_t * (*) (ValueCollection_t3993 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m25652_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m25653_gshared (ValueCollection_t3993 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m25653(__this, method) (( bool (*) (ValueCollection_t3993 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m25653_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m25654_gshared (ValueCollection_t3993 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m25654(__this, method) (( Object_t * (*) (ValueCollection_t3993 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m25654_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m25655_gshared (ValueCollection_t3993 * __this, LabelU5BU5D_t3984* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m25655(__this, ___array, ___index, method) (( void (*) (ValueCollection_t3993 *, LabelU5BU5D_t3984*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m25655_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::GetEnumerator()
extern "C" Enumerator_t3994  ValueCollection_GetEnumerator_m25656_gshared (ValueCollection_t3993 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m25656(__this, method) (( Enumerator_t3994  (*) (ValueCollection_t3993 *, const MethodInfo*))ValueCollection_GetEnumerator_m25656_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m25657_gshared (ValueCollection_t3993 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m25657(__this, method) (( int32_t (*) (ValueCollection_t3993 *, const MethodInfo*))ValueCollection_get_Count_m25657_gshared)(__this, method)
