#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.DateTime>
struct InternalEnumerator_1_t4042;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Array/InternalEnumerator`1<System.DateTime>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m25958_gshared (InternalEnumerator_1_t4042 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m25958(__this, ___array, method) (( void (*) (InternalEnumerator_1_t4042 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m25958_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25959_gshared (InternalEnumerator_1_t4042 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25959(__this, method) (( Object_t * (*) (InternalEnumerator_1_t4042 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25959_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m25960_gshared (InternalEnumerator_1_t4042 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m25960(__this, method) (( void (*) (InternalEnumerator_1_t4042 *, const MethodInfo*))InternalEnumerator_1_Dispose_m25960_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m25961_gshared (InternalEnumerator_1_t4042 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m25961(__this, method) (( bool (*) (InternalEnumerator_1_t4042 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m25961_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.DateTime>::get_Current()
extern "C" DateTime_t445  InternalEnumerator_1_get_Current_m25962_gshared (InternalEnumerator_1_t4042 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m25962(__this, method) (( DateTime_t445  (*) (InternalEnumerator_1_t4042 *, const MethodInfo*))InternalEnumerator_1_get_Current_m25962_gshared)(__this, method)
