#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t3597;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t3586;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m20814_gshared (ShimEnumerator_t3597 * __this, Dictionary_2_t3586 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m20814(__this, ___host, method) (( void (*) (ShimEnumerator_t3597 *, Dictionary_2_t3586 *, const MethodInfo*))ShimEnumerator__ctor_m20814_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m20815_gshared (ShimEnumerator_t3597 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m20815(__this, method) (( bool (*) (ShimEnumerator_t3597 *, const MethodInfo*))ShimEnumerator_MoveNext_m20815_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1150  ShimEnumerator_get_Entry_m20816_gshared (ShimEnumerator_t3597 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m20816(__this, method) (( DictionaryEntry_t1150  (*) (ShimEnumerator_t3597 *, const MethodInfo*))ShimEnumerator_get_Entry_m20816_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m20817_gshared (ShimEnumerator_t3597 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m20817(__this, method) (( Object_t * (*) (ShimEnumerator_t3597 *, const MethodInfo*))ShimEnumerator_get_Key_m20817_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m20818_gshared (ShimEnumerator_t3597 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m20818(__this, method) (( Object_t * (*) (ShimEnumerator_t3597 *, const MethodInfo*))ShimEnumerator_get_Value_m20818_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m20819_gshared (ShimEnumerator_t3597 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m20819(__this, method) (( Object_t * (*) (ShimEnumerator_t3597 *, const MethodInfo*))ShimEnumerator_get_Current_m20819_gshared)(__this, method)
