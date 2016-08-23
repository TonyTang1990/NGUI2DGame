#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Data.SqlExpressions.ConvertFunction
struct ConvertFunction_t1083;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t908;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Data.DataRow
struct DataRow_t352;

// System.Void Mono.Data.SqlExpressions.ConvertFunction::.ctor(Mono.Data.SqlExpressions.IExpression,System.String)
extern "C" void ConvertFunction__ctor_m4920 (ConvertFunction_t1083 * __this, Object_t * ___e, String_t* ___targetType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.ConvertFunction::Equals(System.Object)
extern "C" bool ConvertFunction_Equals_m4921 (ConvertFunction_t1083 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.ConvertFunction::GetHashCode()
extern "C" int32_t ConvertFunction_GetHashCode_m4922 (ConvertFunction_t1083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.ConvertFunction::Eval(System.Data.DataRow)
extern "C" Object_t * ConvertFunction_Eval_m4923 (ConvertFunction_t1083 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.ConvertFunction::ThrowInvalidCastException(System.Object)
extern "C" void ConvertFunction_ThrowInvalidCastException_m4924 (ConvertFunction_t1083 * __this, Object_t * ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
