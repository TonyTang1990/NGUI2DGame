#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Data.SqlExpressions.Aggregation
struct Aggregation_t1087;
// System.Data.DataRow[]
struct DataRowU5BU5D_t883;
// Mono.Data.SqlExpressions.ColumnReference
struct ColumnReference_t1070;
// System.Object
struct Object_t;
// System.Data.DataRow
struct DataRow_t352;
// System.Data.DataColumn
struct DataColumn_t858;
// System.IConvertible
struct IConvertible_t373;
// System.Object[]
struct ObjectU5BU5D_t300;
// System.Data.DataRowChangeEventArgs
struct DataRowChangeEventArgs_t927;
// Mono.Data.SqlExpressions.AggregationFunction
#include "System_Data_Mono_Data_SqlExpressions_AggregationFunction.h"

// System.Void Mono.Data.SqlExpressions.Aggregation::.ctor(System.Boolean,System.Data.DataRow[],Mono.Data.SqlExpressions.AggregationFunction,Mono.Data.SqlExpressions.ColumnReference)
extern "C" void Aggregation__ctor_m4935 (Aggregation_t1087 * __this, bool ___cacheResults, DataRowU5BU5D_t883* ___rows, int32_t ___function, ColumnReference_t1070 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Aggregation::Equals(System.Object)
extern "C" bool Aggregation_Equals_m4936 (Aggregation_t1087 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.Aggregation::GetHashCode()
extern "C" int32_t Aggregation_GetHashCode_m4937 (Aggregation_t1087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Aggregation::Eval(System.Data.DataRow)
extern "C" Object_t * Aggregation_Eval_m4938 (Aggregation_t1087 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Aggregation::DependsOn(System.Data.DataColumn)
extern "C" bool Aggregation_DependsOn_m4939 (Aggregation_t1087 * __this, DataColumn_t858 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.Aggregation::Aggregate(System.IConvertible)
extern "C" void Aggregation_Aggregate_m4940 (Aggregation_t1087 * __this, Object_t * ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConvertible Mono.Data.SqlExpressions.Aggregation::CalcStatisticalFunction(System.Object[])
extern "C" Object_t * Aggregation_CalcStatisticalFunction_m4941 (Aggregation_t1087 * __this, ObjectU5BU5D_t300* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.Aggregation::InvalidateCache(System.Object,System.Data.DataRowChangeEventArgs)
extern "C" void Aggregation_InvalidateCache_m4942 (Aggregation_t1087 * __this, Object_t * ___sender, DataRowChangeEventArgs_t927 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
