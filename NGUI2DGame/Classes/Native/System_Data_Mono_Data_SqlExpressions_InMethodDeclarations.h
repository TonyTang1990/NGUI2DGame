#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Data.SqlExpressions.In
struct In_t1085;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t908;
// System.Collections.IList
struct IList_t794;
// System.Object
struct Object_t;
// System.Data.DataRow
struct DataRow_t352;

// System.Void Mono.Data.SqlExpressions.In::.ctor(Mono.Data.SqlExpressions.IExpression,System.Collections.IList)
extern "C" void In__ctor_m4930 (In_t1085 * __this, Object_t * ___e, Object_t * ___set, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.In::Equals(System.Object)
extern "C" bool In_Equals_m4931 (In_t1085 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.In::GetHashCode()
extern "C" int32_t In_GetHashCode_m4932 (In_t1085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.In::Eval(System.Data.DataRow)
extern "C" Object_t * In_Eval_m4933 (In_t1085 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.In::EvalBoolean(System.Data.DataRow)
extern "C" bool In_EvalBoolean_m4934 (In_t1085 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
