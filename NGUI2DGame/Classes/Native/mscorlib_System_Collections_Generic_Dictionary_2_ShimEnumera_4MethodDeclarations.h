#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t3826;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t3817;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m23792_gshared (ShimEnumerator_t3826 * __this, Dictionary_2_t3817 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m23792(__this, ___host, method) (( void (*) (ShimEnumerator_t3826 *, Dictionary_2_t3817 *, const MethodInfo*))ShimEnumerator__ctor_m23792_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m23793_gshared (ShimEnumerator_t3826 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m23793(__this, method) (( bool (*) (ShimEnumerator_t3826 *, const MethodInfo*))ShimEnumerator_MoveNext_m23793_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t1150  ShimEnumerator_get_Entry_m23794_gshared (ShimEnumerator_t3826 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m23794(__this, method) (( DictionaryEntry_t1150  (*) (ShimEnumerator_t3826 *, const MethodInfo*))ShimEnumerator_get_Entry_m23794_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m23795_gshared (ShimEnumerator_t3826 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m23795(__this, method) (( Object_t * (*) (ShimEnumerator_t3826 *, const MethodInfo*))ShimEnumerator_get_Key_m23795_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m23796_gshared (ShimEnumerator_t3826 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m23796(__this, method) (( Object_t * (*) (ShimEnumerator_t3826 *, const MethodInfo*))ShimEnumerator_get_Value_m23796_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m23797_gshared (ShimEnumerator_t3826 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m23797(__this, method) (( Object_t * (*) (ShimEnumerator_t3826 *, const MethodInfo*))ShimEnumerator_get_Current_m23797_gshared)(__this, method)
