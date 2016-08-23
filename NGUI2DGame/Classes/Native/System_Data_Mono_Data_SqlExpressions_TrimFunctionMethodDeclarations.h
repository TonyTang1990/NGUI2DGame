#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Data.SqlExpressions.TrimFunction
struct TrimFunction_t1080;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t908;
// System.Object
struct Object_t;
// System.Data.DataRow
struct DataRow_t352;

// System.Void Mono.Data.SqlExpressions.TrimFunction::.ctor(Mono.Data.SqlExpressions.IExpression)
extern "C" void TrimFunction__ctor_m4910 (TrimFunction_t1080 * __this, Object_t * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.TrimFunction::Eval(System.Data.DataRow)
extern "C" Object_t * TrimFunction_Eval_m4911 (TrimFunction_t1080 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
