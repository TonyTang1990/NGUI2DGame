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

// Mono.Data.SqlExpressions.Negation
struct Negation_t3355962509;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t2963205659;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t321465356;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataRow321465356.h"

// System.Void Mono.Data.SqlExpressions.Negation::.ctor(Mono.Data.SqlExpressions.IExpression)
extern "C"  void Negation__ctor_m1942691038 (Negation_t3355962509 * __this, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Negation::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * Negation_Eval_m1179473483 (Negation_t3355962509 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Negation::EvalBoolean(System.Data.DataRow)
extern "C"  bool Negation_EvalBoolean_m895961148 (Negation_t3355962509 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
