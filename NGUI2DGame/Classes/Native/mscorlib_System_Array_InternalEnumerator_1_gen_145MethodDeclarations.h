#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Decimal>
struct InternalEnumerator_1_t4043;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.Array/InternalEnumerator`1<System.Decimal>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m25963_gshared (InternalEnumerator_1_t4043 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m25963(__this, ___array, method) (( void (*) (InternalEnumerator_1_t4043 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m25963_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Decimal>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25964_gshared (InternalEnumerator_1_t4043 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25964(__this, method) (( Object_t * (*) (InternalEnumerator_1_t4043 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25964_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m25965_gshared (InternalEnumerator_1_t4043 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m25965(__this, method) (( void (*) (InternalEnumerator_1_t4043 *, const MethodInfo*))InternalEnumerator_1_Dispose_m25965_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Decimal>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m25966_gshared (InternalEnumerator_1_t4043 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m25966(__this, method) (( bool (*) (InternalEnumerator_1_t4043 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m25966_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Decimal>::get_Current()
extern "C" Decimal_t698  InternalEnumerator_1_get_Current_m25967_gshared (InternalEnumerator_1_t4043 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m25967(__this, method) (( Decimal_t698  (*) (InternalEnumerator_1_t4043 *, const MethodInfo*))InternalEnumerator_1_get_Current_m25967_gshared)(__this, method)
