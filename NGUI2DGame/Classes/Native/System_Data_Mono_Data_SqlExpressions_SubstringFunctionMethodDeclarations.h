#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Data.SqlExpressions.SubstringFunction
struct SubstringFunction_t1078;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t908;
// System.Object
struct Object_t;
// System.Data.DataRow
struct DataRow_t352;

// System.Void Mono.Data.SqlExpressions.SubstringFunction::.ctor(Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C" void SubstringFunction__ctor_m4904 (SubstringFunction_t1078 * __this, Object_t * ___e, Object_t * ___start, Object_t * ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.SubstringFunction::Equals(System.Object)
extern "C" bool SubstringFunction_Equals_m4905 (SubstringFunction_t1078 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.SubstringFunction::GetHashCode()
extern "C" int32_t SubstringFunction_GetHashCode_m4906 (SubstringFunction_t1078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.SubstringFunction::Eval(System.Data.DataRow)
extern "C" Object_t * SubstringFunction_Eval_m4907 (SubstringFunction_t1078 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
