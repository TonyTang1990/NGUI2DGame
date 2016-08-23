#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t3552;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3539;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m20263_gshared (ShimEnumerator_t3552 * __this, Dictionary_2_t3539 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m20263(__this, ___host, method) (( void (*) (ShimEnumerator_t3552 *, Dictionary_2_t3539 *, const MethodInfo*))ShimEnumerator__ctor_m20263_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m20264_gshared (ShimEnumerator_t3552 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m20264(__this, method) (( bool (*) (ShimEnumerator_t3552 *, const MethodInfo*))ShimEnumerator_MoveNext_m20264_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1150  ShimEnumerator_get_Entry_m20265_gshared (ShimEnumerator_t3552 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m20265(__this, method) (( DictionaryEntry_t1150  (*) (ShimEnumerator_t3552 *, const MethodInfo*))ShimEnumerator_get_Entry_m20265_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m20266_gshared (ShimEnumerator_t3552 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m20266(__this, method) (( Object_t * (*) (ShimEnumerator_t3552 *, const MethodInfo*))ShimEnumerator_get_Key_m20266_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m20267_gshared (ShimEnumerator_t3552 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m20267(__this, method) (( Object_t * (*) (ShimEnumerator_t3552 *, const MethodInfo*))ShimEnumerator_get_Value_m20267_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m20268_gshared (ShimEnumerator_t3552 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m20268(__this, method) (( Object_t * (*) (ShimEnumerator_t3552 *, const MethodInfo*))ShimEnumerator_get_Current_m20268_gshared)(__this, method)
