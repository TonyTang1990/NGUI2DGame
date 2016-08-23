#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Data.SqlExpressions.BinaryOpExpression
struct BinaryOpExpression_t1067;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t908;
// System.Object
struct Object_t;
// Mono.Data.SqlExpressions.Operation
#include "System_Data_Mono_Data_SqlExpressions_Operation.h"

// System.Void Mono.Data.SqlExpressions.BinaryOpExpression::.ctor(Mono.Data.SqlExpressions.Operation,Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C" void BinaryOpExpression__ctor_m4857 (BinaryOpExpression_t1067 * __this, int32_t ___op, Object_t * ___e1, Object_t * ___e2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.BinaryOpExpression::Equals(System.Object)
extern "C" bool BinaryOpExpression_Equals_m4858 (BinaryOpExpression_t1067 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.BinaryOpExpression::GetHashCode()
extern "C" int32_t BinaryOpExpression_GetHashCode_m4859 (BinaryOpExpression_t1067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
