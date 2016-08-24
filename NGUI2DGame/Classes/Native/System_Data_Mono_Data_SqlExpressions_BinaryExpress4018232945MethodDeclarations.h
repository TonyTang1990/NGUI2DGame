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

// Mono.Data.SqlExpressions.BinaryExpression
struct BinaryExpression_t4018232945;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t2963205659;
// System.Object
struct Il2CppObject;
// System.Data.DataColumn
struct DataColumn_t2152532948;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Data_System_Data_DataColumn2152532948.h"

// System.Void Mono.Data.SqlExpressions.BinaryExpression::.ctor(Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C"  void BinaryExpression__ctor_m90183519 (BinaryExpression_t4018232945 * __this, Il2CppObject * ___e10, Il2CppObject * ___e21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.BinaryExpression::Equals(System.Object)
extern "C"  bool BinaryExpression_Equals_m3042133974 (BinaryExpression_t4018232945 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.BinaryExpression::GetHashCode()
extern "C"  int32_t BinaryExpression_GetHashCode_m2306795542 (BinaryExpression_t4018232945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.BinaryExpression::DependsOn(System.Data.DataColumn)
extern "C"  bool BinaryExpression_DependsOn_m3910072432 (BinaryExpression_t4018232945 * __this, DataColumn_t2152532948 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
