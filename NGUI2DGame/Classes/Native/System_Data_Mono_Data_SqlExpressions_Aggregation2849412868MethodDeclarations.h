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

// Mono.Data.SqlExpressions.Aggregation
struct Aggregation_t2849412868;
// System.Data.DataRow[]
struct DataRowU5BU5D_t3318761029;
// Mono.Data.SqlExpressions.ColumnReference
struct ColumnReference_t717778461;
// System.Object
struct Il2CppObject;
// System.Data.DataRow
struct DataRow_t321465356;
// System.Data.DataColumn
struct DataColumn_t2152532948;
// System.IConvertible
struct IConvertible_t908092482;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Data.DataRowChangeEventArgs
struct DataRowChangeEventArgs_t949966087;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_Mono_Data_SqlExpressions_AggregationFu2691828360.h"
#include "System_Data_Mono_Data_SqlExpressions_ColumnReferenc717778461.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Data_System_Data_DataRow321465356.h"
#include "System_Data_System_Data_DataColumn2152532948.h"
#include "System_Data_System_Data_DataRowChangeEventArgs949966087.h"

// System.Void Mono.Data.SqlExpressions.Aggregation::.ctor(System.Boolean,System.Data.DataRow[],Mono.Data.SqlExpressions.AggregationFunction,Mono.Data.SqlExpressions.ColumnReference)
extern "C"  void Aggregation__ctor_m2535285851 (Aggregation_t2849412868 * __this, bool ___cacheResults0, DataRowU5BU5D_t3318761029* ___rows1, int32_t ___function2, ColumnReference_t717778461 * ___column3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Aggregation::Equals(System.Object)
extern "C"  bool Aggregation_Equals_m3066718575 (Aggregation_t2849412868 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.Aggregation::GetHashCode()
extern "C"  int32_t Aggregation_GetHashCode_m3032721081 (Aggregation_t2849412868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Aggregation::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * Aggregation_Eval_m217142548 (Aggregation_t2849412868 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Aggregation::DependsOn(System.Data.DataColumn)
extern "C"  bool Aggregation_DependsOn_m1720488977 (Aggregation_t2849412868 * __this, DataColumn_t2152532948 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.Aggregation::Aggregate(System.IConvertible)
extern "C"  void Aggregation_Aggregate_m2716034488 (Aggregation_t2849412868 * __this, Il2CppObject * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConvertible Mono.Data.SqlExpressions.Aggregation::CalcStatisticalFunction(System.Object[])
extern "C"  Il2CppObject * Aggregation_CalcStatisticalFunction_m1682456970 (Aggregation_t2849412868 * __this, ObjectU5BU5D_t3614634134* ___values0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.Aggregation::InvalidateCache(System.Object,System.Data.DataRowChangeEventArgs)
extern "C"  void Aggregation_InvalidateCache_m3766765971 (Aggregation_t2849412868 * __this, Il2CppObject * ___sender0, DataRowChangeEventArgs_t949966087 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
