#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_t3978;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t2146;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_27.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25497_gshared (Enumerator_t3978 * __this, Dictionary_2_t2146 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m25497(__this, ___dictionary, method) (( void (*) (Enumerator_t3978 *, Dictionary_2_t2146 *, const MethodInfo*))Enumerator__ctor_m25497_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25498_gshared (Enumerator_t3978 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m25498(__this, method) (( Object_t * (*) (Enumerator_t3978 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m25498_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1150  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25499_gshared (Enumerator_t3978 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25499(__this, method) (( DictionaryEntry_t1150  (*) (Enumerator_t3978 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25499_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25500_gshared (Enumerator_t3978 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25500(__this, method) (( Object_t * (*) (Enumerator_t3978 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25500_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25501_gshared (Enumerator_t3978 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25501(__this, method) (( Object_t * (*) (Enumerator_t3978 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25501_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m25502_gshared (Enumerator_t3978 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m25502(__this, method) (( bool (*) (Enumerator_t3978 *, const MethodInfo*))Enumerator_MoveNext_m25502_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t3974  Enumerator_get_Current_m25503_gshared (Enumerator_t3978 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m25503(__this, method) (( KeyValuePair_2_t3974  (*) (Enumerator_t3978 *, const MethodInfo*))Enumerator_get_Current_m25503_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m25504_gshared (Enumerator_t3978 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m25504(__this, method) (( int32_t (*) (Enumerator_t3978 *, const MethodInfo*))Enumerator_get_CurrentKey_m25504_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m25505_gshared (Enumerator_t3978 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m25505(__this, method) (( int32_t (*) (Enumerator_t3978 *, const MethodInfo*))Enumerator_get_CurrentValue_m25505_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m25506_gshared (Enumerator_t3978 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m25506(__this, method) (( void (*) (Enumerator_t3978 *, const MethodInfo*))Enumerator_VerifyState_m25506_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m25507_gshared (Enumerator_t3978 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m25507(__this, method) (( void (*) (Enumerator_t3978 *, const MethodInfo*))Enumerator_VerifyCurrent_m25507_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m25508_gshared (Enumerator_t3978 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m25508(__this, method) (( void (*) (Enumerator_t3978 *, const MethodInfo*))Enumerator_Dispose_m25508_gshared)(__this, method)
