#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t3957;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t3952;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25297_gshared (Enumerator_t3957 * __this, Dictionary_2_t3952 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m25297(__this, ___dictionary, method) (( void (*) (Enumerator_t3957 *, Dictionary_2_t3952 *, const MethodInfo*))Enumerator__ctor_m25297_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25298_gshared (Enumerator_t3957 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m25298(__this, method) (( Object_t * (*) (Enumerator_t3957 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m25298_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1150  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25299_gshared (Enumerator_t3957 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25299(__this, method) (( DictionaryEntry_t1150  (*) (Enumerator_t3957 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25299_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25300_gshared (Enumerator_t3957 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25300(__this, method) (( Object_t * (*) (Enumerator_t3957 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25300_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25301_gshared (Enumerator_t3957 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25301(__this, method) (( Object_t * (*) (Enumerator_t3957 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25301_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m25302_gshared (Enumerator_t3957 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m25302(__this, method) (( bool (*) (Enumerator_t3957 *, const MethodInfo*))Enumerator_MoveNext_m25302_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t3953  Enumerator_get_Current_m25303_gshared (Enumerator_t3957 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m25303(__this, method) (( KeyValuePair_2_t3953  (*) (Enumerator_t3957 *, const MethodInfo*))Enumerator_get_Current_m25303_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m25304_gshared (Enumerator_t3957 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m25304(__this, method) (( Object_t * (*) (Enumerator_t3957 *, const MethodInfo*))Enumerator_get_CurrentKey_m25304_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m25305_gshared (Enumerator_t3957 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m25305(__this, method) (( uint8_t (*) (Enumerator_t3957 *, const MethodInfo*))Enumerator_get_CurrentValue_m25305_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m25306_gshared (Enumerator_t3957 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m25306(__this, method) (( void (*) (Enumerator_t3957 *, const MethodInfo*))Enumerator_VerifyState_m25306_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m25307_gshared (Enumerator_t3957 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m25307(__this, method) (( void (*) (Enumerator_t3957 *, const MethodInfo*))Enumerator_VerifyCurrent_m25307_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m25308_gshared (Enumerator_t3957 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m25308(__this, method) (( void (*) (Enumerator_t3957 *, const MethodInfo*))Enumerator_Dispose_m25308_gshared)(__this, method)
