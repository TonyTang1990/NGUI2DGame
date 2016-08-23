#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t3615;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t3610;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m21059_gshared (Enumerator_t3615 * __this, Dictionary_2_t3610 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m21059(__this, ___dictionary, method) (( void (*) (Enumerator_t3615 *, Dictionary_2_t3610 *, const MethodInfo*))Enumerator__ctor_m21059_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m21060_gshared (Enumerator_t3615 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m21060(__this, method) (( Object_t * (*) (Enumerator_t3615 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m21060_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1150  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21061_gshared (Enumerator_t3615 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21061(__this, method) (( DictionaryEntry_t1150  (*) (Enumerator_t3615 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21061_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21062_gshared (Enumerator_t3615 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21062(__this, method) (( Object_t * (*) (Enumerator_t3615 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21062_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21063_gshared (Enumerator_t3615 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21063(__this, method) (( Object_t * (*) (Enumerator_t3615 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21063_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m21064_gshared (Enumerator_t3615 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m21064(__this, method) (( bool (*) (Enumerator_t3615 *, const MethodInfo*))Enumerator_MoveNext_m21064_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t3611  Enumerator_get_Current_m21065_gshared (Enumerator_t3615 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m21065(__this, method) (( KeyValuePair_2_t3611  (*) (Enumerator_t3615 *, const MethodInfo*))Enumerator_get_Current_m21065_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m21066_gshared (Enumerator_t3615 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m21066(__this, method) (( Object_t * (*) (Enumerator_t3615 *, const MethodInfo*))Enumerator_get_CurrentKey_m21066_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m21067_gshared (Enumerator_t3615 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m21067(__this, method) (( Object_t * (*) (Enumerator_t3615 *, const MethodInfo*))Enumerator_get_CurrentValue_m21067_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m21068_gshared (Enumerator_t3615 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m21068(__this, method) (( void (*) (Enumerator_t3615 *, const MethodInfo*))Enumerator_VerifyState_m21068_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m21069_gshared (Enumerator_t3615 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m21069(__this, method) (( void (*) (Enumerator_t3615 *, const MethodInfo*))Enumerator_VerifyCurrent_m21069_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m21070_gshared (Enumerator_t3615 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m21070(__this, method) (( void (*) (Enumerator_t3615 *, const MethodInfo*))Enumerator_Dispose_m21070_gshared)(__this, method)
