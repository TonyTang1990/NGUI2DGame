#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Data.SqlExpressions.ConcatFunction
struct ConcatFunction_t1077;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t908;
// System.Object
struct Object_t;
// System.Data.DataRow
struct DataRow_t352;

// System.Void Mono.Data.SqlExpressions.ConcatFunction::.ctor(Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C" void ConcatFunction__ctor_m4900 (ConcatFunction_t1077 * __this, Object_t * ___e, Object_t * ___add, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.ConcatFunction::Equals(System.Object)
extern "C" bool ConcatFunction_Equals_m4901 (ConcatFunction_t1077 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.ConcatFunction::GetHashCode()
extern "C" int32_t ConcatFunction_GetHashCode_m4902 (ConcatFunction_t1077 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.ConcatFunction::Eval(System.Data.DataRow)
extern "C" Object_t * ConcatFunction_Eval_m4903 (ConcatFunction_t1077 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
