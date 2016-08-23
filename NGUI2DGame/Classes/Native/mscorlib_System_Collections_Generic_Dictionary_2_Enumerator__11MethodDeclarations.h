#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
struct Enumerator_t3775;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3769;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m23029_gshared (Enumerator_t3775 * __this, Dictionary_2_t3769 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m23029(__this, ___dictionary, method) (( void (*) (Enumerator_t3775 *, Dictionary_2_t3769 *, const MethodInfo*))Enumerator__ctor_m23029_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m23030_gshared (Enumerator_t3775 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m23030(__this, method) (( Object_t * (*) (Enumerator_t3775 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m23030_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1150  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23031_gshared (Enumerator_t3775 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23031(__this, method) (( DictionaryEntry_t1150  (*) (Enumerator_t3775 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23031_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23032_gshared (Enumerator_t3775 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23032(__this, method) (( Object_t * (*) (Enumerator_t3775 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23032_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23033_gshared (Enumerator_t3775 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23033(__this, method) (( Object_t * (*) (Enumerator_t3775 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23033_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m23034_gshared (Enumerator_t3775 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m23034(__this, method) (( bool (*) (Enumerator_t3775 *, const MethodInfo*))Enumerator_MoveNext_m23034_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t3770  Enumerator_get_Current_m23035_gshared (Enumerator_t3775 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m23035(__this, method) (( KeyValuePair_2_t3770  (*) (Enumerator_t3775 *, const MethodInfo*))Enumerator_get_Current_m23035_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m23036_gshared (Enumerator_t3775 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m23036(__this, method) (( uint64_t (*) (Enumerator_t3775 *, const MethodInfo*))Enumerator_get_CurrentKey_m23036_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m23037_gshared (Enumerator_t3775 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m23037(__this, method) (( Object_t * (*) (Enumerator_t3775 *, const MethodInfo*))Enumerator_get_CurrentValue_m23037_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m23038_gshared (Enumerator_t3775 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m23038(__this, method) (( void (*) (Enumerator_t3775 *, const MethodInfo*))Enumerator_VerifyState_m23038_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m23039_gshared (Enumerator_t3775 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m23039(__this, method) (( void (*) (Enumerator_t3775 *, const MethodInfo*))Enumerator_VerifyCurrent_m23039_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m23040_gshared (Enumerator_t3775 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m23040(__this, method) (( void (*) (Enumerator_t3775 *, const MethodInfo*))Enumerator_Dispose_m23040_gshared)(__this, method)
