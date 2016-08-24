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

// Mono.Data.SqlExpressions.IifFunction
struct IifFunction_t224081018;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t2963205659;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t321465356;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Data_System_Data_DataRow321465356.h"

// System.Void Mono.Data.SqlExpressions.IifFunction::.ctor(Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C"  void IifFunction__ctor_m3809024231 (IifFunction_t224081018 * __this, Il2CppObject * ___e0, Il2CppObject * ___trueExpr1, Il2CppObject * ___falseExpr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.IifFunction::Equals(System.Object)
extern "C"  bool IifFunction_Equals_m1049583507 (IifFunction_t224081018 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.IifFunction::GetHashCode()
extern "C"  int32_t IifFunction_GetHashCode_m3501749217 (IifFunction_t224081018 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.IifFunction::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * IifFunction_Eval_m2016566110 (IifFunction_t224081018 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
