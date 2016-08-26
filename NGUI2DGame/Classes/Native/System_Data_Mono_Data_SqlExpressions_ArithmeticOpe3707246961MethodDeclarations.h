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

// Mono.Data.SqlExpressions.ArithmeticOperation
struct ArithmeticOperation_t3707246961;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t2963205659;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t321465356;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_Mono_Data_SqlExpressions_Operation2847614977.h"
#include "System_Data_System_Data_DataRow321465356.h"

// System.Void Mono.Data.SqlExpressions.ArithmeticOperation::.ctor(Mono.Data.SqlExpressions.Operation,Mono.Data.SqlExpressions.IExpression,Mono.Data.SqlExpressions.IExpression)
extern "C"  void ArithmeticOperation__ctor_m395822884 (ArithmeticOperation_t3707246961 * __this, int32_t ___op0, Il2CppObject * ___e11, Il2CppObject * ___e22, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.ArithmeticOperation::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * ArithmeticOperation_Eval_m2224535735 (ArithmeticOperation_t3707246961 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
