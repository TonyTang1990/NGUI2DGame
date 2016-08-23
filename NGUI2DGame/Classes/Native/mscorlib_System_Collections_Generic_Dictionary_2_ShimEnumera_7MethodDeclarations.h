#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Reflection.Emit.Label>
struct ShimEnumerator_t3997;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>
struct Dictionary_2_t2147;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m25675_gshared (ShimEnumerator_t3997 * __this, Dictionary_2_t2147 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m25675(__this, ___host, method) (( void (*) (ShimEnumerator_t3997 *, Dictionary_2_t2147 *, const MethodInfo*))ShimEnumerator__ctor_m25675_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Reflection.Emit.Label>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m25676_gshared (ShimEnumerator_t3997 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m25676(__this, method) (( bool (*) (ShimEnumerator_t3997 *, const MethodInfo*))ShimEnumerator_MoveNext_m25676_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Reflection.Emit.Label>::get_Entry()
extern "C" DictionaryEntry_t1150  ShimEnumerator_get_Entry_m25677_gshared (ShimEnumerator_t3997 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m25677(__this, method) (( DictionaryEntry_t1150  (*) (ShimEnumerator_t3997 *, const MethodInfo*))ShimEnumerator_get_Entry_m25677_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Reflection.Emit.Label>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m25678_gshared (ShimEnumerator_t3997 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m25678(__this, method) (( Object_t * (*) (ShimEnumerator_t3997 *, const MethodInfo*))ShimEnumerator_get_Key_m25678_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Reflection.Emit.Label>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m25679_gshared (ShimEnumerator_t3997 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m25679(__this, method) (( Object_t * (*) (ShimEnumerator_t3997 *, const MethodInfo*))ShimEnumerator_get_Value_m25679_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Reflection.Emit.Label>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m25680_gshared (ShimEnumerator_t3997 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m25680(__this, method) (( Object_t * (*) (ShimEnumerator_t3997 *, const MethodInfo*))ShimEnumerator_get_Current_m25680_gshared)(__this, method)
