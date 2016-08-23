#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Data.SqlExpressions.ColumnReference
struct ColumnReference_t1070;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Data.DataRelation
struct DataRelation_t921;
// System.Data.DataRow
struct DataRow_t352;
// System.Data.DataColumn
struct DataColumn_t858;
// System.Data.DataRow[]
struct DataRowU5BU5D_t883;
// System.Object[]
struct ObjectU5BU5D_t300;
// System.Data.DataColumnCollection
struct DataColumnCollection_t350;
// System.Data.DataRelationCollection
struct DataRelationCollection_t923;
// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_t1099;
// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t1097;
// Mono.Data.SqlExpressions.ReferencedTable
#include "System_Data_Mono_Data_SqlExpressions_ReferencedTable.h"

// System.Void Mono.Data.SqlExpressions.ColumnReference::.ctor(System.String)
extern "C" void ColumnReference__ctor_m4865 (ColumnReference_t1070 * __this, String_t* ___columnName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.ColumnReference::.ctor(Mono.Data.SqlExpressions.ReferencedTable,System.String,System.String)
extern "C" void ColumnReference__ctor_m4866 (ColumnReference_t1070 * __this, int32_t ___refTable, String_t* ___relationName, String_t* ___columnName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.ColumnReference::Equals(System.Object)
extern "C" bool ColumnReference_Equals_m4867 (ColumnReference_t1070 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.ColumnReference::GetHashCode()
extern "C" int32_t ColumnReference_GetHashCode_m4868 (ColumnReference_t1070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.SqlExpressions.ReferencedTable Mono.Data.SqlExpressions.ColumnReference::get_ReferencedTable()
extern "C" int32_t ColumnReference_get_ReferencedTable_m4869 (ColumnReference_t1070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelation Mono.Data.SqlExpressions.ColumnReference::GetRelation(System.Data.DataRow)
extern "C" DataRelation_t921 * ColumnReference_GetRelation_m4870 (ColumnReference_t1070 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn Mono.Data.SqlExpressions.ColumnReference::GetColumn(System.Data.DataRow)
extern "C" DataColumn_t858 * ColumnReference_GetColumn_m4871 (ColumnReference_t1070 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow Mono.Data.SqlExpressions.ColumnReference::GetReferencedRow(System.Data.DataRow)
extern "C" DataRow_t352 * ColumnReference_GetReferencedRow_m4872 (ColumnReference_t1070 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow[] Mono.Data.SqlExpressions.ColumnReference::GetReferencedRows(System.Data.DataRow)
extern "C" DataRowU5BU5D_t883* ColumnReference_GetReferencedRows_m4873 (ColumnReference_t1070 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] Mono.Data.SqlExpressions.ColumnReference::GetValues(System.Data.DataRow[])
extern "C" ObjectU5BU5D_t300* ColumnReference_GetValues_m4874 (ColumnReference_t1070 * __this, DataRowU5BU5D_t883* ___rows, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.ColumnReference::Unify(System.Object)
extern "C" Object_t * ColumnReference_Unify_m4875 (ColumnReference_t1070 * __this, Object_t * ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.ColumnReference::Eval(System.Data.DataRow)
extern "C" Object_t * ColumnReference_Eval_m4876 (ColumnReference_t1070 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.ColumnReference::EvalBoolean(System.Data.DataRow)
extern "C" bool ColumnReference_EvalBoolean_m4877 (ColumnReference_t1070 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.ColumnReference::DependsOn(System.Data.DataColumn)
extern "C" bool ColumnReference_DependsOn_m4878 (ColumnReference_t1070 * __this, DataColumn_t858 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.ColumnReference::DropCached(System.Data.DataColumnCollection,System.Data.DataRelationCollection)
extern "C" void ColumnReference_DropCached_m4879 (ColumnReference_t1070 * __this, DataColumnCollection_t350 * ___columnCollection, DataRelationCollection_t923 * ___relationCollection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.ColumnReference::OnColumnPropertyChanged(System.Object,System.ComponentModel.PropertyChangedEventArgs)
extern "C" void ColumnReference_OnColumnPropertyChanged_m4880 (ColumnReference_t1070 * __this, Object_t * ___sender, PropertyChangedEventArgs_t1099 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.ColumnReference::OnColumnRemoved(System.Object,System.ComponentModel.CollectionChangeEventArgs)
extern "C" void ColumnReference_OnColumnRemoved_m4881 (ColumnReference_t1070 * __this, Object_t * ___sender, CollectionChangeEventArgs_t1097 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.ColumnReference::OnRelationRemoved(System.Object,System.ComponentModel.CollectionChangeEventArgs)
extern "C" void ColumnReference_OnRelationRemoved_m4882 (ColumnReference_t1070 * __this, Object_t * ___sender, CollectionChangeEventArgs_t1097 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
