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

// Mono.Data.SqlExpressions.SubstringFunction
struct SubstringFunction_t927862047;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t2963205659;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t321465356;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Data_System_Data_DataRow321465356.h"

// System.Void Mono.Data.SqlExpressions.SubstringFunction::.ctor(Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C"  void SubstringFunction__ctor_m1423386530 (SubstringFunction_t927862047 * __this, Il2CppObject * ___e0, Il2CppObject * ___start1, Il2CppObject * ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.SubstringFunction::Equals(System.Object)
extern "C"  bool SubstringFunction_Equals_m3611492952 (SubstringFunction_t927862047 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.SubstringFunction::GetHashCode()
extern "C"  int32_t SubstringFunction_GetHashCode_m2491801020 (SubstringFunction_t927862047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.SubstringFunction::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * SubstringFunction_Eval_m4168639229 (SubstringFunction_t927862047 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
