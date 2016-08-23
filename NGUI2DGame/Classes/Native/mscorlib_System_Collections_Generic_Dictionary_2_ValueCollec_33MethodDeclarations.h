#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Reflection.Emit.Label>
struct Enumerator_t3994;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>
struct Dictionary_2_t2147;
// System.Reflection.Emit.Label
#include "mscorlib_System_Reflection_Emit_Label.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25658_gshared (Enumerator_t3994 * __this, Dictionary_2_t2147 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m25658(__this, ___host, method) (( void (*) (Enumerator_t3994 *, Dictionary_2_t2147 *, const MethodInfo*))Enumerator__ctor_m25658_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25659_gshared (Enumerator_t3994 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m25659(__this, method) (( Object_t * (*) (Enumerator_t3994 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m25659_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Reflection.Emit.Label>::Dispose()
extern "C" void Enumerator_Dispose_m25660_gshared (Enumerator_t3994 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m25660(__this, method) (( void (*) (Enumerator_t3994 *, const MethodInfo*))Enumerator_Dispose_m25660_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Reflection.Emit.Label>::MoveNext()
extern "C" bool Enumerator_MoveNext_m25661_gshared (Enumerator_t3994 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m25661(__this, method) (( bool (*) (Enumerator_t3994 *, const MethodInfo*))Enumerator_MoveNext_m25661_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Reflection.Emit.Label>::get_Current()
extern "C" Label_t2144  Enumerator_get_Current_m25662_gshared (Enumerator_t3994 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m25662(__this, method) (( Label_t2144  (*) (Enumerator_t3994 *, const MethodInfo*))Enumerator_get_Current_m25662_gshared)(__this, method)
