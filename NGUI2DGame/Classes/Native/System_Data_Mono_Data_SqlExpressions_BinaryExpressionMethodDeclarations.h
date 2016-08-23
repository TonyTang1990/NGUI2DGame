#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Data.SqlExpressions.BinaryExpression
struct BinaryExpression_t1065;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t908;
// System.Object
struct Object_t;
// System.Data.DataColumn
struct DataColumn_t858;

// System.Void Mono.Data.SqlExpressions.BinaryExpression::.ctor(Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C" void BinaryExpression__ctor_m4853 (BinaryExpression_t1065 * __this, Object_t * ___e1, Object_t * ___e2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.BinaryExpression::Equals(System.Object)
extern "C" bool BinaryExpression_Equals_m4854 (BinaryExpression_t1065 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.BinaryExpression::GetHashCode()
extern "C" int32_t BinaryExpression_GetHashCode_m4855 (BinaryExpression_t1065 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.BinaryExpression::DependsOn(System.Data.DataColumn)
extern "C" bool BinaryExpression_DependsOn_m4856 (BinaryExpression_t1065 * __this, DataColumn_t858 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
