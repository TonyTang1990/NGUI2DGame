#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Data.SqlExpressions.UnaryExpression
struct UnaryExpression_t1064;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t908;
// System.Object
struct Object_t;
// System.Data.DataColumn
struct DataColumn_t858;
// System.Data.DataRow
struct DataRow_t352;

// System.Void Mono.Data.SqlExpressions.UnaryExpression::.ctor(Mono.Data.SqlExpressions.IExpression)
extern "C" void UnaryExpression__ctor_m4848 (UnaryExpression_t1064 * __this, Object_t * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.UnaryExpression::Equals(System.Object)
extern "C" bool UnaryExpression_Equals_m4849 (UnaryExpression_t1064 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.UnaryExpression::GetHashCode()
extern "C" int32_t UnaryExpression_GetHashCode_m4850 (UnaryExpression_t1064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.UnaryExpression::DependsOn(System.Data.DataColumn)
extern "C" bool UnaryExpression_DependsOn_m4851 (UnaryExpression_t1064 * __this, DataColumn_t858 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.UnaryExpression::EvalBoolean(System.Data.DataRow)
extern "C" bool UnaryExpression_EvalBoolean_m4852 (UnaryExpression_t1064 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
