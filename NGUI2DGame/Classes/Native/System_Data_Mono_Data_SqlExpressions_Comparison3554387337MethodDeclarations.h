#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Data.SqlExpressions.Comparison
struct Comparison_t3554387337;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t2963205659;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t321465356;
// System.IComparable
struct IComparable_t1857082765;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_Mono_Data_SqlExpressions_Operation2847614977.h"
#include "System_Data_System_Data_DataRow321465356.h"

// System.Void Mono.Data.SqlExpressions.Comparison::.ctor(Mono.Data.SqlExpressions.Operation,Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C"  void Comparison__ctor_m3895839914 (Comparison_t3554387337 * __this, int32_t ___op0, Il2CppObject * ___e11, Il2CppObject * ___e22, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.Comparison::.cctor()
extern "C"  void Comparison__cctor_m2846942712 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Comparison::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * Comparison_Eval_m3913725359 (Comparison_t3554387337 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Comparison::EvalBoolean(System.Data.DataRow)
extern "C"  bool Comparison_EvalBoolean_m1652502742 (Comparison_t3554387337 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.Comparison::Compare(System.IComparable,System.IComparable,System.Boolean)
extern "C"  int32_t Comparison_Compare_m3926507249 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o10, Il2CppObject * ___o21, bool ___caseSensitive2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
