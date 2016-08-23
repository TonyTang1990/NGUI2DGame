#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Data.SqlExpressions.BaseExpression
struct BaseExpression_t1063;
// System.Object
struct Object_t;
// System.Data.DataRow
struct DataRow_t352;
// System.Data.DataColumn
struct DataColumn_t858;

// System.Void Mono.Data.SqlExpressions.BaseExpression::.ctor()
extern "C" void BaseExpression__ctor_m4844 (BaseExpression_t1063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.BaseExpression::Eval(System.Data.DataRow)
// System.Boolean Mono.Data.SqlExpressions.BaseExpression::DependsOn(System.Data.DataColumn)
// System.Boolean Mono.Data.SqlExpressions.BaseExpression::EvalBoolean(System.Data.DataRow)
extern "C" bool BaseExpression_EvalBoolean_m4845 (BaseExpression_t1063 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.BaseExpression::Equals(System.Object)
extern "C" bool BaseExpression_Equals_m4846 (BaseExpression_t1063 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.BaseExpression::GetHashCode()
extern "C" int32_t BaseExpression_GetHashCode_m4847 (BaseExpression_t1063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
