#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t3983;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t2146;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m25539_gshared (ShimEnumerator_t3983 * __this, Dictionary_2_t2146 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m25539(__this, ___host, method) (( void (*) (ShimEnumerator_t3983 *, Dictionary_2_t2146 *, const MethodInfo*))ShimEnumerator__ctor_m25539_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m25540_gshared (ShimEnumerator_t3983 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m25540(__this, method) (( bool (*) (ShimEnumerator_t3983 *, const MethodInfo*))ShimEnumerator_MoveNext_m25540_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1150  ShimEnumerator_get_Entry_m25541_gshared (ShimEnumerator_t3983 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m25541(__this, method) (( DictionaryEntry_t1150  (*) (ShimEnumerator_t3983 *, const MethodInfo*))ShimEnumerator_get_Entry_m25541_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m25542_gshared (ShimEnumerator_t3983 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m25542(__this, method) (( Object_t * (*) (ShimEnumerator_t3983 *, const MethodInfo*))ShimEnumerator_get_Key_m25542_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m25543_gshared (ShimEnumerator_t3983 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m25543(__this, method) (( Object_t * (*) (ShimEnumerator_t3983 *, const MethodInfo*))ShimEnumerator_get_Value_m25543_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m25544_gshared (ShimEnumerator_t3983 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m25544(__this, method) (( Object_t * (*) (ShimEnumerator_t3983 *, const MethodInfo*))ShimEnumerator_get_Current_m25544_gshared)(__this, method)
