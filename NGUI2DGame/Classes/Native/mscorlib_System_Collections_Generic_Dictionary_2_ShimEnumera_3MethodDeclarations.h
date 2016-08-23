#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t3781;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3769;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m23075_gshared (ShimEnumerator_t3781 * __this, Dictionary_2_t3769 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m23075(__this, ___host, method) (( void (*) (ShimEnumerator_t3781 *, Dictionary_2_t3769 *, const MethodInfo*))ShimEnumerator__ctor_m23075_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m23076_gshared (ShimEnumerator_t3781 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m23076(__this, method) (( bool (*) (ShimEnumerator_t3781 *, const MethodInfo*))ShimEnumerator_MoveNext_m23076_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1150  ShimEnumerator_get_Entry_m23077_gshared (ShimEnumerator_t3781 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m23077(__this, method) (( DictionaryEntry_t1150  (*) (ShimEnumerator_t3781 *, const MethodInfo*))ShimEnumerator_get_Entry_m23077_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m23078_gshared (ShimEnumerator_t3781 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m23078(__this, method) (( Object_t * (*) (ShimEnumerator_t3781 *, const MethodInfo*))ShimEnumerator_get_Key_m23078_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m23079_gshared (ShimEnumerator_t3781 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m23079(__this, method) (( Object_t * (*) (ShimEnumerator_t3781 *, const MethodInfo*))ShimEnumerator_get_Value_m23079_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m23080_gshared (ShimEnumerator_t3781 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m23080(__this, method) (( Object_t * (*) (ShimEnumerator_t3781 *, const MethodInfo*))ShimEnumerator_get_Current_m23080_gshared)(__this, method)
