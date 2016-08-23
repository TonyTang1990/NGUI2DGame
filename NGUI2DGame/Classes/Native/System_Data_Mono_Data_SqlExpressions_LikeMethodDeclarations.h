#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Data.SqlExpressions.Like
struct Like_t1084;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t908;
// System.Object
struct Object_t;
// System.Data.DataRow
struct DataRow_t352;

// System.Void Mono.Data.SqlExpressions.Like::.ctor(Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C" void Like__ctor_m4925 (Like_t1084 * __this, Object_t * ___e, Object_t * ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Like::Equals(System.Object)
extern "C" bool Like_Equals_m4926 (Like_t1084 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.Like::GetHashCode()
extern "C" int32_t Like_GetHashCode_m4927 (Like_t1084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Like::Eval(System.Data.DataRow)
extern "C" Object_t * Like_Eval_m4928 (Like_t1084 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Like::EvalBoolean(System.Data.DataRow)
extern "C" bool Like_EvalBoolean_m4929 (Like_t1084 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
