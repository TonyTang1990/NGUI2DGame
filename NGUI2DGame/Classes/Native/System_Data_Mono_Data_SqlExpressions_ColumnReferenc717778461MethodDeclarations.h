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

// Mono.Data.SqlExpressions.ColumnReference
struct ColumnReference_t717778461;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Data.DataRelation
struct DataRelation_t790111712;
// System.Data.DataRow
struct DataRow_t321465356;
// System.Data.DataColumn
struct DataColumn_t2152532948;
// System.Data.DataRow[]
struct DataRowU5BU5D_t3318761029;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Data.DataColumnCollection
struct DataColumnCollection_t195763618;
// System.Data.DataRelationCollection
struct DataRelationCollection_t3958690162;
// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_t1689446432;
// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t1734749345;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Data_Mono_Data_SqlExpressions_ReferencedTab2363768325.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Data_System_Data_DataRow321465356.h"
#include "System_Data_System_Data_DataColumn2152532948.h"
#include "System_Data_System_Data_DataColumnCollection195763618.h"
#include "System_Data_System_Data_DataRelationCollection3958690162.h"
#include "System_System_ComponentModel_PropertyChangedEventA1689446432.h"
#include "System_System_ComponentModel_CollectionChangeEvent1734749345.h"

// System.Void Mono.Data.SqlExpressions.ColumnReference::.ctor(System.String)
extern "C"  void ColumnReference__ctor_m514437477 (ColumnReference_t717778461 * __this, String_t* ___columnName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.ColumnReference::.ctor(Mono.Data.SqlExpressions.ReferencedTable,System.String,System.String)
extern "C"  void ColumnReference__ctor_m178494136 (ColumnReference_t717778461 * __this, int32_t ___refTable0, String_t* ___relationName1, String_t* ___columnName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.ColumnReference::Equals(System.Object)
extern "C"  bool ColumnReference_Equals_m1168441068 (ColumnReference_t717778461 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.ColumnReference::GetHashCode()
extern "C"  int32_t ColumnReference_GetHashCode_m62528456 (ColumnReference_t717778461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.SqlExpressions.ReferencedTable Mono.Data.SqlExpressions.ColumnReference::get_ReferencedTable()
extern "C"  int32_t ColumnReference_get_ReferencedTable_m845255771 (ColumnReference_t717778461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelation Mono.Data.SqlExpressions.ColumnReference::GetRelation(System.Data.DataRow)
extern "C"  DataRelation_t790111712 * ColumnReference_GetRelation_m617209058 (ColumnReference_t717778461 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn Mono.Data.SqlExpressions.ColumnReference::GetColumn(System.Data.DataRow)
extern "C"  DataColumn_t2152532948 * ColumnReference_GetColumn_m3141564162 (ColumnReference_t717778461 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow Mono.Data.SqlExpressions.ColumnReference::GetReferencedRow(System.Data.DataRow)
extern "C"  DataRow_t321465356 * ColumnReference_GetReferencedRow_m2845116871 (ColumnReference_t717778461 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow[] Mono.Data.SqlExpressions.ColumnReference::GetReferencedRows(System.Data.DataRow)
extern "C"  DataRowU5BU5D_t3318761029* ColumnReference_GetReferencedRows_m2779200606 (ColumnReference_t717778461 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] Mono.Data.SqlExpressions.ColumnReference::GetValues(System.Data.DataRow[])
extern "C"  ObjectU5BU5D_t3614634134* ColumnReference_GetValues_m1637767971 (ColumnReference_t717778461 * __this, DataRowU5BU5D_t3318761029* ___rows0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.ColumnReference::Unify(System.Object)
extern "C"  Il2CppObject * ColumnReference_Unify_m3477124317 (ColumnReference_t717778461 * __this, Il2CppObject * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.ColumnReference::Eval(System.Data.DataRow)
extern "C"  Il2CppObject * ColumnReference_Eval_m2752655755 (ColumnReference_t717778461 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.ColumnReference::EvalBoolean(System.Data.DataRow)
extern "C"  bool ColumnReference_EvalBoolean_m3580309338 (ColumnReference_t717778461 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.ColumnReference::DependsOn(System.Data.DataColumn)
extern "C"  bool ColumnReference_DependsOn_m29510530 (ColumnReference_t717778461 * __this, DataColumn_t2152532948 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.ColumnReference::DropCached(System.Data.DataColumnCollection,System.Data.DataRelationCollection)
extern "C"  void ColumnReference_DropCached_m3195602480 (ColumnReference_t717778461 * __this, DataColumnCollection_t195763618 * ___columnCollection0, DataRelationCollection_t3958690162 * ___relationCollection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.ColumnReference::OnColumnPropertyChanged(System.Object,System.ComponentModel.PropertyChangedEventArgs)
extern "C"  void ColumnReference_OnColumnPropertyChanged_m1237568502 (ColumnReference_t717778461 * __this, Il2CppObject * ___sender0, PropertyChangedEventArgs_t1689446432 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.ColumnReference::OnColumnRemoved(System.Object,System.ComponentModel.CollectionChangeEventArgs)
extern "C"  void ColumnReference_OnColumnRemoved_m964545358 (ColumnReference_t717778461 * __this, Il2CppObject * ___sender0, CollectionChangeEventArgs_t1734749345 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.ColumnReference::OnRelationRemoved(System.Object,System.ComponentModel.CollectionChangeEventArgs)
extern "C"  void ColumnReference_OnRelationRemoved_m626935180 (ColumnReference_t717778461 * __this, Il2CppObject * ___sender0, CollectionChangeEventArgs_t1734749345 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
