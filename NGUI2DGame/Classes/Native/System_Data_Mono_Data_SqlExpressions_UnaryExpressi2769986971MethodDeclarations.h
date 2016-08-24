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

// Mono.Data.SqlExpressions.UnaryExpression
struct UnaryExpression_t2769986971;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t2963205659;
// System.Object
struct Il2CppObject;
// System.Data.DataColumn
struct DataColumn_t2152532948;
// System.Data.DataRow
struct DataRow_t321465356;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Data_System_Data_DataColumn2152532948.h"
#include "System_Data_System_Data_DataRow321465356.h"

// System.Void Mono.Data.SqlExpressions.UnaryExpression::.ctor(Mono.Data.SqlExpressions.IExpression)
extern "C"  void UnaryExpression__ctor_m1381704450 (UnaryExpression_t2769986971 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.UnaryExpression::Equals(System.Object)
extern "C"  bool UnaryExpression_Equals_m3022227326 (UnaryExpression_t2769986971 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.UnaryExpression::GetHashCode()
extern "C"  int32_t UnaryExpression_GetHashCode_m3011131974 (UnaryExpression_t2769986971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.UnaryExpression::DependsOn(System.Data.DataColumn)
extern "C"  bool UnaryExpression_DependsOn_m160585396 (UnaryExpression_t2769986971 * __this, DataColumn_t2152532948 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.UnaryExpression::EvalBoolean(System.Data.DataRow)
extern "C"  bool UnaryExpression_EvalBoolean_m2605276128 (UnaryExpression_t2769986971 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
