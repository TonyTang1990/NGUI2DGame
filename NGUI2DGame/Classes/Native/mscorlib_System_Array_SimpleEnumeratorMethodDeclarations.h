#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/SimpleEnumerator
struct SimpleEnumerator_t2300;
// System.Object
struct Object_t;
// System.Array
struct Array_t;

// System.Void System.Array/SimpleEnumerator::.ctor(System.Array)
extern "C" void SimpleEnumerator__ctor_m13622 (SimpleEnumerator_t2300 * __this, Array_t * ___arrayToEnumerate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array/SimpleEnumerator::get_Current()
extern "C" Object_t * SimpleEnumerator_get_Current_m13623 (SimpleEnumerator_t2300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array/SimpleEnumerator::MoveNext()
extern "C" bool SimpleEnumerator_MoveNext_m13624 (SimpleEnumerator_t2300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array/SimpleEnumerator::Clone()
extern "C" Object_t * SimpleEnumerator_Clone_m13625 (SimpleEnumerator_t2300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
