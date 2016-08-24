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

// Mono.Data.SqlExpressions.IsNullFunction
struct IsNullFunction_t156305379;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t2963205659;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t321465356;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Data_System_Data_DataRow321465356.h"

// System.Void Mono.Data.SqlExpressions.IsNullFunction::.ctor(Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C"  void IsNullFunction__ctor_m2143542025 (IsNullFunction_t156305379 * __this, Il2CppObject * ___e0, Il2CppObject * ___defaultExpr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.IsNullFunction::Equals(System.Object)
extern "C"  bool IsNullFunction_Equals_m3373180116 (IsNullFunction_t156305379 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.IsNullFunction::GetHashCode()
extern "C"  int32_t IsNullFunction_GetHashCode_m2750205988 (IsNullFunction_t156305379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.IsNullFunction::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * IsNullFunction_Eval_m3759960801 (IsNullFunction_t156305379 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
