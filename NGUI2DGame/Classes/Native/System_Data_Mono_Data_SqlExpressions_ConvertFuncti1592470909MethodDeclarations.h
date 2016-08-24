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

// Mono.Data.SqlExpressions.ConvertFunction
struct ConvertFunction_t1592470909;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t2963205659;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t321465356;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Data_System_Data_DataRow321465356.h"

// System.Void Mono.Data.SqlExpressions.ConvertFunction::.ctor(Mono.Data.SqlExpressions.IExpression,System.String)
extern "C"  void ConvertFunction__ctor_m3844730292 (ConvertFunction_t1592470909 * __this, Il2CppObject * ___e0, String_t* ___targetType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.ConvertFunction::Equals(System.Object)
extern "C"  bool ConvertFunction_Equals_m1271450588 (ConvertFunction_t1592470909 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.ConvertFunction::GetHashCode()
extern "C"  int32_t ConvertFunction_GetHashCode_m2137628060 (ConvertFunction_t1592470909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.ConvertFunction::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * ConvertFunction_Eval_m1077252907 (ConvertFunction_t1592470909 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.ConvertFunction::ThrowInvalidCastException(System.Object)
extern "C"  void ConvertFunction_ThrowInvalidCastException_m3608139596 (ConvertFunction_t1592470909 * __this, Il2CppObject * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
