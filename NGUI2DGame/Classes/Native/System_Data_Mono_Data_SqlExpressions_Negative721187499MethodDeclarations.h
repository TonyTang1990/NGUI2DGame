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

// Mono.Data.SqlExpressions.Negative
struct Negative_t721187499;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t2963205659;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t321465356;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataRow321465356.h"

// System.Void Mono.Data.SqlExpressions.Negative::.ctor(Mono.Data.SqlExpressions.IExpression)
extern "C"  void Negative__ctor_m3362634898 (Negative_t721187499 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Negative::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * Negative_Eval_m2189860497 (Negative_t721187499 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
