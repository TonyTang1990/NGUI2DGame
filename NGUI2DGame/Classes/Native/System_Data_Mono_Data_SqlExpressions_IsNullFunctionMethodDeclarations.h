#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Data.SqlExpressions.IsNullFunction
struct IsNullFunction_t1082;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t908;
// System.Object
struct Object_t;
// System.Data.DataRow
struct DataRow_t352;

// System.Void Mono.Data.SqlExpressions.IsNullFunction::.ctor(Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C" void IsNullFunction__ctor_m4916 (IsNullFunction_t1082 * __this, Object_t * ___e, Object_t * ___defaultExpr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.IsNullFunction::Equals(System.Object)
extern "C" bool IsNullFunction_Equals_m4917 (IsNullFunction_t1082 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.IsNullFunction::GetHashCode()
extern "C" int32_t IsNullFunction_GetHashCode_m4918 (IsNullFunction_t1082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.IsNullFunction::Eval(System.Data.DataRow)
extern "C" Object_t * IsNullFunction_Eval_m4919 (IsNullFunction_t1082 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
