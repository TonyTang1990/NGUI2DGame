#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t3820;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t3817;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m23746_gshared (Enumerator_t3820 * __this, Dictionary_2_t3817 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m23746(__this, ___dictionary, method) (( void (*) (Enumerator_t3820 *, Dictionary_2_t3817 *, const MethodInfo*))Enumerator__ctor_m23746_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m23747_gshared (Enumerator_t3820 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m23747(__this, method) (( Object_t * (*) (Enumerator_t3820 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m23747_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1150  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23748_gshared (Enumerator_t3820 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23748(__this, method) (( DictionaryEntry_t1150  (*) (Enumerator_t3820 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23748_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23749_gshared (Enumerator_t3820 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23749(__this, method) (( Object_t * (*) (Enumerator_t3820 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23749_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23750_gshared (Enumerator_t3820 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23750(__this, method) (( Object_t * (*) (Enumerator_t3820 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23750_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m23751_gshared (Enumerator_t3820 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m23751(__this, method) (( bool (*) (Enumerator_t3820 *, const MethodInfo*))Enumerator_MoveNext_m23751_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t3791  Enumerator_get_Current_m23752_gshared (Enumerator_t3820 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m23752(__this, method) (( KeyValuePair_2_t3791  (*) (Enumerator_t3820 *, const MethodInfo*))Enumerator_get_Current_m23752_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m23753_gshared (Enumerator_t3820 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m23753(__this, method) (( Object_t * (*) (Enumerator_t3820 *, const MethodInfo*))Enumerator_get_CurrentKey_m23753_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t3611  Enumerator_get_CurrentValue_m23754_gshared (Enumerator_t3820 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m23754(__this, method) (( KeyValuePair_2_t3611  (*) (Enumerator_t3820 *, const MethodInfo*))Enumerator_get_CurrentValue_m23754_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m23755_gshared (Enumerator_t3820 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m23755(__this, method) (( void (*) (Enumerator_t3820 *, const MethodInfo*))Enumerator_VerifyState_m23755_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m23756_gshared (Enumerator_t3820 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m23756(__this, method) (( void (*) (Enumerator_t3820 *, const MethodInfo*))Enumerator_VerifyCurrent_m23756_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m23757_gshared (Enumerator_t3820 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m23757(__this, method) (( void (*) (Enumerator_t3820 *, const MethodInfo*))Enumerator_Dispose_m23757_gshared)(__this, method)
