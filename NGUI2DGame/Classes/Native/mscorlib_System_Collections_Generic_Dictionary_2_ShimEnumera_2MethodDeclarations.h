#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t3749;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t3737;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m22727_gshared (ShimEnumerator_t3749 * __this, Dictionary_2_t3737 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m22727(__this, ___host, method) (( void (*) (ShimEnumerator_t3749 *, Dictionary_2_t3737 *, const MethodInfo*))ShimEnumerator__ctor_m22727_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m22728_gshared (ShimEnumerator_t3749 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m22728(__this, method) (( bool (*) (ShimEnumerator_t3749 *, const MethodInfo*))ShimEnumerator_MoveNext_m22728_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t1150  ShimEnumerator_get_Entry_m22729_gshared (ShimEnumerator_t3749 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m22729(__this, method) (( DictionaryEntry_t1150  (*) (ShimEnumerator_t3749 *, const MethodInfo*))ShimEnumerator_get_Entry_m22729_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m22730_gshared (ShimEnumerator_t3749 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m22730(__this, method) (( Object_t * (*) (ShimEnumerator_t3749 *, const MethodInfo*))ShimEnumerator_get_Key_m22730_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m22731_gshared (ShimEnumerator_t3749 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m22731(__this, method) (( Object_t * (*) (ShimEnumerator_t3749 *, const MethodInfo*))ShimEnumerator_get_Value_m22731_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m22732_gshared (ShimEnumerator_t3749 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m22732(__this, method) (( Object_t * (*) (ShimEnumerator_t3749 *, const MethodInfo*))ShimEnumerator_get_Current_m22732_gshared)(__this, method)
