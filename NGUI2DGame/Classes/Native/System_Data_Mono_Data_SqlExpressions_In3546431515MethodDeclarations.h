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

// Mono.Data.SqlExpressions.In
struct In_t3546431515;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t2963205659;
// System.Collections.IList
struct IList_t3321498491;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t321465356;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Data_System_Data_DataRow321465356.h"

// System.Void Mono.Data.SqlExpressions.In::.ctor(Mono.Data.SqlExpressions.IExpression,System.Collections.IList)
extern "C"  void In__ctor_m1469698191 (In_t3546431515 * __this, Il2CppObject * ___e0, Il2CppObject * ___set1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.In::Equals(System.Object)
extern "C"  bool In_Equals_m69810534 (In_t3546431515 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.In::GetHashCode()
extern "C"  int32_t In_GetHashCode_m541925130 (In_t3546431515 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.In::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * In_Eval_m3714271945 (In_t3546431515 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.In::EvalBoolean(System.Data.DataRow)
extern "C"  bool In_EvalBoolean_m2706620352 (In_t3546431515 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
