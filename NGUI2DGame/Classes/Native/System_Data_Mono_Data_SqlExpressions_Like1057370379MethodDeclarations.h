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

// Mono.Data.SqlExpressions.Like
struct Like_t1057370379;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t2963205659;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t321465356;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Data_System_Data_DataRow321465356.h"

// System.Void Mono.Data.SqlExpressions.Like::.ctor(Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C"  void Like__ctor_m3937506345 (Like_t1057370379 * __this, Il2CppObject * ___e0, Il2CppObject * ___pattern1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Like::Equals(System.Object)
extern "C"  bool Like_Equals_m2533816990 (Like_t1057370379 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.Like::GetHashCode()
extern "C"  int32_t Like_GetHashCode_m1554872782 (Like_t1057370379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Like::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * Like_Eval_m2921912417 (Like_t1057370379 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Like::EvalBoolean(System.Data.DataRow)
extern "C"  bool Like_EvalBoolean_m900524248 (Like_t1057370379 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
