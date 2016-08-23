#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t3963;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t3952;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m25343_gshared (ShimEnumerator_t3963 * __this, Dictionary_2_t3952 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m25343(__this, ___host, method) (( void (*) (ShimEnumerator_t3963 *, Dictionary_2_t3952 *, const MethodInfo*))ShimEnumerator__ctor_m25343_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m25344_gshared (ShimEnumerator_t3963 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m25344(__this, method) (( bool (*) (ShimEnumerator_t3963 *, const MethodInfo*))ShimEnumerator_MoveNext_m25344_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t1150  ShimEnumerator_get_Entry_m25345_gshared (ShimEnumerator_t3963 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m25345(__this, method) (( DictionaryEntry_t1150  (*) (ShimEnumerator_t3963 *, const MethodInfo*))ShimEnumerator_get_Entry_m25345_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m25346_gshared (ShimEnumerator_t3963 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m25346(__this, method) (( Object_t * (*) (ShimEnumerator_t3963 *, const MethodInfo*))ShimEnumerator_get_Key_m25346_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m25347_gshared (ShimEnumerator_t3963 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m25347(__this, method) (( Object_t * (*) (ShimEnumerator_t3963 *, const MethodInfo*))ShimEnumerator_get_Value_m25347_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m25348_gshared (ShimEnumerator_t3963 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m25348(__this, method) (( Object_t * (*) (ShimEnumerator_t3963 *, const MethodInfo*))ShimEnumerator_get_Current_m25348_gshared)(__this, method)
