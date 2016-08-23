#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Data.SqlExpressions.Comparison
struct Comparison_t1075;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t908;
// System.Object
struct Object_t;
// System.Data.DataRow
struct DataRow_t352;
// System.IComparable
struct IComparable_t374;
// Mono.Data.SqlExpressions.Operation
#include "System_Data_Mono_Data_SqlExpressions_Operation.h"

// System.Void Mono.Data.SqlExpressions.Comparison::.ctor(Mono.Data.SqlExpressions.Operation,Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C" void Comparison__ctor_m4893 (Comparison_t1075 * __this, int32_t ___op, Object_t * ___e1, Object_t * ___e2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.Comparison::.cctor()
extern "C" void Comparison__cctor_m4894 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Comparison::Eval(System.Data.DataRow)
extern "C" Object_t * Comparison_Eval_m4895 (Comparison_t1075 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Comparison::EvalBoolean(System.Data.DataRow)
extern "C" bool Comparison_EvalBoolean_m4896 (Comparison_t1075 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.Comparison::Compare(System.IComparable,System.IComparable,System.Boolean)
extern "C" int32_t Comparison_Compare_m4897 (Object_t * __this /* static, unused */, Object_t * ___o1, Object_t * ___o2, bool ___caseSensitive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
