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

// Mono.Data.SqlExpressions.BoolOperation
struct BoolOperation_t3116017511;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t2963205659;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t321465356;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_Mono_Data_SqlExpressions_Operation2847614977.h"
#include "System_Data_System_Data_DataRow321465356.h"

// System.Void Mono.Data.SqlExpressions.BoolOperation::.ctor(Mono.Data.SqlExpressions.Operation,Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C"  void BoolOperation__ctor_m2706601696 (BoolOperation_t3116017511 * __this, int32_t ___op0, Il2CppObject * ___e11, Il2CppObject * ___e22, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.BoolOperation::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * BoolOperation_Eval_m2052251309 (BoolOperation_t3116017511 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.BoolOperation::EvalBoolean(System.Data.DataRow)
extern "C"  bool BoolOperation_EvalBoolean_m44195644 (BoolOperation_t3116017511 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
