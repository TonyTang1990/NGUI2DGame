#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>
struct Enumerator_t3991;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>
struct Dictionary_2_t2147;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_28.h"
// System.Reflection.Emit.Label
#include "mscorlib_System_Reflection_Emit_Label.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25629_gshared (Enumerator_t3991 * __this, Dictionary_2_t2147 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m25629(__this, ___dictionary, method) (( void (*) (Enumerator_t3991 *, Dictionary_2_t2147 *, const MethodInfo*))Enumerator__ctor_m25629_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25630_gshared (Enumerator_t3991 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m25630(__this, method) (( Object_t * (*) (Enumerator_t3991 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m25630_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1150  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25631_gshared (Enumerator_t3991 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25631(__this, method) (( DictionaryEntry_t1150  (*) (Enumerator_t3991 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25631_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25632_gshared (Enumerator_t3991 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25632(__this, method) (( Object_t * (*) (Enumerator_t3991 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25632_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25633_gshared (Enumerator_t3991 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25633(__this, method) (( Object_t * (*) (Enumerator_t3991 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25633_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::MoveNext()
extern "C" bool Enumerator_MoveNext_m25634_gshared (Enumerator_t3991 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m25634(__this, method) (( bool (*) (Enumerator_t3991 *, const MethodInfo*))Enumerator_MoveNext_m25634_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::get_Current()
extern "C" KeyValuePair_2_t3986  Enumerator_get_Current_m25635_gshared (Enumerator_t3991 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m25635(__this, method) (( KeyValuePair_2_t3986  (*) (Enumerator_t3991 *, const MethodInfo*))Enumerator_get_Current_m25635_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m25636_gshared (Enumerator_t3991 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m25636(__this, method) (( int32_t (*) (Enumerator_t3991 *, const MethodInfo*))Enumerator_get_CurrentKey_m25636_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::get_CurrentValue()
extern "C" Label_t2144  Enumerator_get_CurrentValue_m25637_gshared (Enumerator_t3991 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m25637(__this, method) (( Label_t2144  (*) (Enumerator_t3991 *, const MethodInfo*))Enumerator_get_CurrentValue_m25637_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::VerifyState()
extern "C" void Enumerator_VerifyState_m25638_gshared (Enumerator_t3991 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m25638(__this, method) (( void (*) (Enumerator_t3991 *, const MethodInfo*))Enumerator_VerifyState_m25638_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m25639_gshared (Enumerator_t3991 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m25639(__this, method) (( void (*) (Enumerator_t3991 *, const MethodInfo*))Enumerator_VerifyCurrent_m25639_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::Dispose()
extern "C" void Enumerator_Dispose_m25640_gshared (Enumerator_t3991 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m25640(__this, method) (( void (*) (Enumerator_t3991 *, const MethodInfo*))Enumerator_Dispose_m25640_gshared)(__this, method)
