#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.Common.Key
struct Key_t1022;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t920;
// System.Data.DataTable
struct DataTable_t296;
// System.ComponentModel.ListSortDirection[]
struct ListSortDirectionU5BU5D_t1023;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t908;
// System.Data.DataRow
struct DataRow_t352;
// System.Data.DataColumn
struct DataColumn_t858;
// System.Data.DataViewRowState
#include "System_Data_System_Data_DataViewRowState.h"
// System.Data.DataRowState
#include "System_Data_System_Data_DataRowState.h"
// System.Data.DataRowVersion
#include "System_Data_System_Data_DataRowVersion.h"

// System.Void System.Data.Common.Key::.ctor(System.Data.DataTable,System.Data.DataColumn[],System.ComponentModel.ListSortDirection[],System.Data.DataViewRowState,Mono.Data.SqlExpressions.IExpression)
extern "C" void Key__ctor_m4506 (Key_t1022 * __this, DataTable_t296 * ___table, DataColumnU5BU5D_t920* ___columns, ListSortDirectionU5BU5D_t1023* ___sort, int32_t ___rowState, Object_t * ___filter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn[] System.Data.Common.Key::get_Columns()
extern "C" DataColumnU5BU5D_t920* Key_get_Columns_m4507 (Key_t1022 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.Common.Key::get_Table()
extern "C" DataTable_t296 * Key_get_Table_m4508 (Key_t1022 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ListSortDirection[] System.Data.Common.Key::get_Sort()
extern "C" ListSortDirectionU5BU5D_t1023* Key_get_Sort_m4509 (Key_t1022 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataViewRowState System.Data.Common.Key::get_RowStateFilter()
extern "C" int32_t Key_get_RowStateFilter_m4510 (Key_t1022 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.Key::get_HasFilter()
extern "C" bool Key_get_HasFilter_m4511 (Key_t1022 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Key::CompareRecords(System.Int32,System.Int32)
extern "C" int32_t Key_CompareRecords_m4512 (Key_t1022 * __this, int32_t ___first, int32_t ___second, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Key::GetRecord(System.Data.DataRow)
extern "C" int32_t Key_GetRecord_m4513 (Key_t1022 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.Key::CanContain(System.Int32)
extern "C" bool Key_CanContain_m4514 (Key_t1022 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.Key::ContainsVersion(System.Data.DataRowState,System.Data.DataRowVersion)
extern "C" bool Key_ContainsVersion_m4515 (Key_t1022 * __this, int32_t ___state, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Key::GetRecord(System.Data.DataRow,System.Data.DataViewRowState)
extern "C" int32_t Key_GetRecord_m4516 (Object_t * __this /* static, unused */, DataRow_t352 * ___row, int32_t ___rowStateFilter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.Key::Equals(System.Data.DataColumn[],System.ComponentModel.ListSortDirection[],System.Data.DataViewRowState,Mono.Data.SqlExpressions.IExpression)
extern "C" bool Key_Equals_m4517 (Key_t1022 * __this, DataColumnU5BU5D_t920* ___columns, ListSortDirectionU5BU5D_t1023* ___sort, int32_t ___rowState, Object_t * ___filter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.Key::DependsOn(System.Data.DataColumn)
extern "C" bool Key_DependsOn_m4518 (Key_t1022 * __this, DataColumn_t858 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
