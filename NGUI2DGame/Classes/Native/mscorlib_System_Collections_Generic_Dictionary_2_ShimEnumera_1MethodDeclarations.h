#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t3620;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t3610;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m21101_gshared (ShimEnumerator_t3620 * __this, Dictionary_2_t3610 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m21101(__this, ___host, method) (( void (*) (ShimEnumerator_t3620 *, Dictionary_2_t3610 *, const MethodInfo*))ShimEnumerator__ctor_m21101_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m21102_gshared (ShimEnumerator_t3620 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m21102(__this, method) (( bool (*) (ShimEnumerator_t3620 *, const MethodInfo*))ShimEnumerator_MoveNext_m21102_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1150  ShimEnumerator_get_Entry_m21103_gshared (ShimEnumerator_t3620 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m21103(__this, method) (( DictionaryEntry_t1150  (*) (ShimEnumerator_t3620 *, const MethodInfo*))ShimEnumerator_get_Entry_m21103_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m21104_gshared (ShimEnumerator_t3620 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m21104(__this, method) (( Object_t * (*) (ShimEnumerator_t3620 *, const MethodInfo*))ShimEnumerator_get_Key_m21104_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m21105_gshared (ShimEnumerator_t3620 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m21105(__this, method) (( Object_t * (*) (ShimEnumerator_t3620 *, const MethodInfo*))ShimEnumerator_get_Value_m21105_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m21106_gshared (ShimEnumerator_t3620 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m21106(__this, method) (( Object_t * (*) (ShimEnumerator_t3620 *, const MethodInfo*))ShimEnumerator_get_Current_m21106_gshared)(__this, method)
