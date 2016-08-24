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

// Mono.Data.SqlExpressions.Literal
struct Literal_t3735181871;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t321465356;
// System.Data.DataColumn
struct DataColumn_t2152532948;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Data_System_Data_DataRow321465356.h"
#include "System_Data_System_Data_DataColumn2152532948.h"

// System.Void Mono.Data.SqlExpressions.Literal::.ctor(System.Object)
extern "C"  void Literal__ctor_m1968283475 (Literal_t3735181871 * __this, Il2CppObject * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Literal::Equals(System.Object)
extern "C"  bool Literal_Equals_m3724557176 (Literal_t3735181871 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.Literal::GetHashCode()
extern "C"  int32_t Literal_GetHashCode_m1573464772 (Literal_t3735181871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Literal::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * Literal_Eval_m3266011037 (Literal_t3735181871 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Literal::DependsOn(System.Data.DataColumn)
extern "C"  bool Literal_DependsOn_m4288386118 (Literal_t3735181871 * __this, DataColumn_t2152532948 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
