#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Data.SqlExpressions.BoolOperation
struct BoolOperation_t1074;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t908;
// System.Object
struct Object_t;
// System.Data.DataRow
struct DataRow_t352;
// Mono.Data.SqlExpressions.Operation
#include "System_Data_Mono_Data_SqlExpressions_Operation.h"

// System.Void Mono.Data.SqlExpressions.BoolOperation::.ctor(Mono.Data.SqlExpressions.Operation,Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C" void BoolOperation__ctor_m4890 (BoolOperation_t1074 * __this, int32_t ___op, Object_t * ___e1, Object_t * ___e2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.BoolOperation::Eval(System.Data.DataRow)
extern "C" Object_t * BoolOperation_Eval_m4891 (BoolOperation_t1074 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.BoolOperation::EvalBoolean(System.Data.DataRow)
extern "C" bool BoolOperation_EvalBoolean_m4892 (BoolOperation_t1074 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
