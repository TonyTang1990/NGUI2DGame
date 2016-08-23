#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t3545;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3539;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m20212_gshared (Enumerator_t3545 * __this, Dictionary_2_t3539 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m20212(__this, ___dictionary, method) (( void (*) (Enumerator_t3545 *, Dictionary_2_t3539 *, const MethodInfo*))Enumerator__ctor_m20212_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m20213_gshared (Enumerator_t3545 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m20213(__this, method) (( Object_t * (*) (Enumerator_t3545 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m20213_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1150  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20214_gshared (Enumerator_t3545 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20214(__this, method) (( DictionaryEntry_t1150  (*) (Enumerator_t3545 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20214_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20215_gshared (Enumerator_t3545 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20215(__this, method) (( Object_t * (*) (Enumerator_t3545 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20215_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20216_gshared (Enumerator_t3545 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20216(__this, method) (( Object_t * (*) (Enumerator_t3545 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20216_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m20217_gshared (Enumerator_t3545 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m20217(__this, method) (( bool (*) (Enumerator_t3545 *, const MethodInfo*))Enumerator_MoveNext_m20217_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t3540  Enumerator_get_Current_m20218_gshared (Enumerator_t3545 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m20218(__this, method) (( KeyValuePair_2_t3540  (*) (Enumerator_t3545 *, const MethodInfo*))Enumerator_get_Current_m20218_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m20219_gshared (Enumerator_t3545 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m20219(__this, method) (( Object_t * (*) (Enumerator_t3545 *, const MethodInfo*))Enumerator_get_CurrentKey_m20219_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m20220_gshared (Enumerator_t3545 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m20220(__this, method) (( int32_t (*) (Enumerator_t3545 *, const MethodInfo*))Enumerator_get_CurrentValue_m20220_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m20221_gshared (Enumerator_t3545 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m20221(__this, method) (( void (*) (Enumerator_t3545 *, const MethodInfo*))Enumerator_VerifyState_m20221_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m20222_gshared (Enumerator_t3545 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m20222(__this, method) (( void (*) (Enumerator_t3545 *, const MethodInfo*))Enumerator_VerifyCurrent_m20222_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m20223_gshared (Enumerator_t3545 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m20223(__this, method) (( void (*) (Enumerator_t3545 *, const MethodInfo*))Enumerator_Dispose_m20223_gshared)(__this, method)
