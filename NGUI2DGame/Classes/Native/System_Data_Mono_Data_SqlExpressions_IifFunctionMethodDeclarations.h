#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Data.SqlExpressions.IifFunction
struct IifFunction_t1081;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t908;
// System.Object
struct Object_t;
// System.Data.DataRow
struct DataRow_t352;

// System.Void Mono.Data.SqlExpressions.IifFunction::.ctor(Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C" void IifFunction__ctor_m4912 (IifFunction_t1081 * __this, Object_t * ___e, Object_t * ___trueExpr, Object_t * ___falseExpr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.IifFunction::Equals(System.Object)
extern "C" bool IifFunction_Equals_m4913 (IifFunction_t1081 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.IifFunction::GetHashCode()
extern "C" int32_t IifFunction_GetHashCode_m4914 (IifFunction_t1081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.IifFunction::Eval(System.Data.DataRow)
extern "C" Object_t * IifFunction_Eval_m4915 (IifFunction_t1081 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
