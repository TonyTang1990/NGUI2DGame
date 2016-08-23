#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Data.SqlExpressions.Negative
struct Negative_t1071;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t908;
// System.Object
struct Object_t;
// System.Data.DataRow
struct DataRow_t352;

// System.Void Mono.Data.SqlExpressions.Negative::.ctor(Mono.Data.SqlExpressions.IExpression)
extern "C" void Negative__ctor_m4883 (Negative_t1071 * __this, Object_t * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Negative::Eval(System.Data.DataRow)
extern "C" Object_t * Negative_Eval_m4884 (Negative_t1071 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
