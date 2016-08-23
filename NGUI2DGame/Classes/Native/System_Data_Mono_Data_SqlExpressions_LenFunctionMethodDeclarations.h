#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Data.SqlExpressions.LenFunction
struct LenFunction_t1079;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t908;
// System.Object
struct Object_t;
// System.Data.DataRow
struct DataRow_t352;

// System.Void Mono.Data.SqlExpressions.LenFunction::.ctor(Mono.Data.SqlExpressions.IExpression)
extern "C" void LenFunction__ctor_m4908 (LenFunction_t1079 * __this, Object_t * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.LenFunction::Eval(System.Data.DataRow)
extern "C" Object_t * LenFunction_Eval_m4909 (LenFunction_t1079 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
