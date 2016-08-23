#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Data.SqlExpressions.StringFunction
struct StringFunction_t1076;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t908;
// System.Object
struct Object_t;
// System.Data.DataRow
struct DataRow_t352;

// System.Void Mono.Data.SqlExpressions.StringFunction::.ctor(Mono.Data.SqlExpressions.IExpression)
extern "C" void StringFunction__ctor_m4898 (StringFunction_t1076 * __this, Object_t * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.StringFunction::Eval(System.Data.DataRow)
extern "C" Object_t * StringFunction_Eval_m4899 (StringFunction_t1076 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
