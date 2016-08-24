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

// Mono.Data.SqlExpressions.BaseExpression
struct BaseExpression_t4067875947;
// System.Data.DataRow
struct DataRow_t321465356;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataRow321465356.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Mono.Data.SqlExpressions.BaseExpression::.ctor()
extern "C"  void BaseExpression__ctor_m1326851973 (BaseExpression_t4067875947 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.BaseExpression::EvalBoolean(System.Data.DataRow)
extern "C"  bool BaseExpression_EvalBoolean_m1568420440 (BaseExpression_t4067875947 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.BaseExpression::Equals(System.Object)
extern "C"  bool BaseExpression_Equals_m2224515350 (BaseExpression_t4067875947 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.BaseExpression::GetHashCode()
extern "C"  int32_t BaseExpression_GetHashCode_m2425194530 (BaseExpression_t4067875947 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
