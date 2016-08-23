#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t3743;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t3737;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m22681_gshared (Enumerator_t3743 * __this, Dictionary_2_t3737 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m22681(__this, ___dictionary, method) (( void (*) (Enumerator_t3743 *, Dictionary_2_t3737 *, const MethodInfo*))Enumerator__ctor_m22681_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m22682_gshared (Enumerator_t3743 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m22682(__this, method) (( Object_t * (*) (Enumerator_t3743 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m22682_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1150  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m22683_gshared (Enumerator_t3743 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m22683(__this, method) (( DictionaryEntry_t1150  (*) (Enumerator_t3743 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m22683_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m22684_gshared (Enumerator_t3743 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m22684(__this, method) (( Object_t * (*) (Enumerator_t3743 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m22684_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m22685_gshared (Enumerator_t3743 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m22685(__this, method) (( Object_t * (*) (Enumerator_t3743 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m22685_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m22686_gshared (Enumerator_t3743 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m22686(__this, method) (( bool (*) (Enumerator_t3743 *, const MethodInfo*))Enumerator_MoveNext_m22686_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t3738  Enumerator_get_Current_m22687_gshared (Enumerator_t3743 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m22687(__this, method) (( KeyValuePair_2_t3738  (*) (Enumerator_t3743 *, const MethodInfo*))Enumerator_get_Current_m22687_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m22688_gshared (Enumerator_t3743 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m22688(__this, method) (( Object_t * (*) (Enumerator_t3743 *, const MethodInfo*))Enumerator_get_CurrentKey_m22688_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m22689_gshared (Enumerator_t3743 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m22689(__this, method) (( int64_t (*) (Enumerator_t3743 *, const MethodInfo*))Enumerator_get_CurrentValue_m22689_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m22690_gshared (Enumerator_t3743 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m22690(__this, method) (( void (*) (Enumerator_t3743 *, const MethodInfo*))Enumerator_VerifyState_m22690_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m22691_gshared (Enumerator_t3743 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m22691(__this, method) (( void (*) (Enumerator_t3743 *, const MethodInfo*))Enumerator_VerifyCurrent_m22691_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m22692_gshared (Enumerator_t3743 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m22692(__this, method) (( void (*) (Enumerator_t3743 *, const MethodInfo*))Enumerator_Dispose_m22692_gshared)(__this, method)
