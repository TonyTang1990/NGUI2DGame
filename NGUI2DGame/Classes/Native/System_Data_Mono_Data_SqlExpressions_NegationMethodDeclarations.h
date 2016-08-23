#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Data.SqlExpressions.Negation
struct Negation_t1073;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t908;
// System.Object
struct Object_t;
// System.Data.DataRow
struct DataRow_t352;

// System.Void Mono.Data.SqlExpressions.Negation::.ctor(Mono.Data.SqlExpressions.IExpression)
extern "C" void Negation__ctor_m4887 (Negation_t1073 * __this, Object_t * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Negation::Eval(System.Data.DataRow)
extern "C" Object_t * Negation_Eval_m4888 (Negation_t1073 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Negation::EvalBoolean(System.Data.DataRow)
extern "C" bool Negation_EvalBoolean_m4889 (Negation_t1073 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
