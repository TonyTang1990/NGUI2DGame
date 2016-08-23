#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Data.SqlExpressions.Literal
struct Literal_t1068;
// System.Object
struct Object_t;
// System.Data.DataRow
struct DataRow_t352;
// System.Data.DataColumn
struct DataColumn_t858;

// System.Void Mono.Data.SqlExpressions.Literal::.ctor(System.Object)
extern "C" void Literal__ctor_m4860 (Literal_t1068 * __this, Object_t * ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Literal::Equals(System.Object)
extern "C" bool Literal_Equals_m4861 (Literal_t1068 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.Literal::GetHashCode()
extern "C" int32_t Literal_GetHashCode_m4862 (Literal_t1068 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Literal::Eval(System.Data.DataRow)
extern "C" Object_t * Literal_Eval_m4863 (Literal_t1068 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Literal::DependsOn(System.Data.DataColumn)
extern "C" bool Literal_DependsOn_m4864 (Literal_t1068 * __this, DataColumn_t858 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
