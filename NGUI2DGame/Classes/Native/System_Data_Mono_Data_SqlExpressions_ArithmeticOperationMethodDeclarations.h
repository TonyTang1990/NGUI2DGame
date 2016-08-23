#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Data.SqlExpressions.ArithmeticOperation
struct ArithmeticOperation_t1072;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t908;
// System.Object
struct Object_t;
// System.Data.DataRow
struct DataRow_t352;
// Mono.Data.SqlExpressions.Operation
#include "System_Data_Mono_Data_SqlExpressions_Operation.h"

// System.Void Mono.Data.SqlExpressions.ArithmeticOperation::.ctor(Mono.Data.SqlExpressions.Operation,Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C" void ArithmeticOperation__ctor_m4885 (ArithmeticOperation_t1072 * __this, int32_t ___op, Object_t * ___e1, Object_t * ___e2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.ArithmeticOperation::Eval(System.Data.DataRow)
extern "C" Object_t * ArithmeticOperation_Eval_m4886 (ArithmeticOperation_t1072 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
