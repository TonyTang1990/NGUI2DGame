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

// System.Data.DataRow
struct DataRow_t321465356;
// System.Data.DataRowBuilder
struct DataRowBuilder_t1684492161;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Data.DataColumn
struct DataColumn_t2152532948;
// System.Data.DataTable
struct DataTable_t3267612424;
// System.Data.ForeignKeyConstraint
struct ForeignKeyConstraint_t173811822;
// System.Data.DataRow[]
struct DataRowU5BU5D_t3318761029;
// System.Data.DataRelation
struct DataRelation_t790111712;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t1080903261;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataRowBuilder1684492161.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Data_System_Data_DataColumn2152532948.h"
#include "System_Data_System_Data_DataRowVersion3411859714.h"
#include "System_Data_System_Data_DataRowState3751910455.h"
#include "System_Data_System_Data_DataRowAction1701244498.h"
#include "System_Data_System_Data_ForeignKeyConstraint173811822.h"
#include "System_Data_System_Data_Rule1417458836.h"
#include "System_Data_System_Data_DataRelation790111712.h"
#include "System_Data_System_Data_DataRow321465356.h"

// System.Void System.Data.DataRow::.ctor(System.Data.DataRowBuilder)
extern "C"  void DataRow__ctor_m2581695525 (DataRow_t321465356 * __this, DataRowBuilder_t1684492161 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.DataRow::get_ColumnErrors()
extern "C"  ArrayList_t4252133567 * DataRow_get_ColumnErrors_m2016396687 (DataRow_t321465356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRow::get_HasErrors()
extern "C"  bool DataRow_get_HasErrors_m3424468503 (DataRow_t321465356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataRow::get_Item(System.String)
extern "C"  Il2CppObject * DataRow_get_Item_m3981061996 (DataRow_t321465356 * __this, String_t* ___columnName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_Item(System.String,System.Object)
extern "C"  void DataRow_set_Item_m1231713031 (DataRow_t321465356 * __this, String_t* ___columnName0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataRow::get_Item(System.Data.DataColumn)
extern "C"  Il2CppObject * DataRow_get_Item_m3685904769 (DataRow_t321465356 * __this, DataColumn_t2152532948 * ___column0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_Item(System.Data.DataColumn,System.Object)
extern "C"  void DataRow_set_Item_m1582617116 (DataRow_t321465356 * __this, DataColumn_t2152532948 * ___column0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataRow::get_Item(System.Int32)
extern "C"  Il2CppObject * DataRow_get_Item_m1037934775 (DataRow_t321465356 * __this, int32_t ___columnIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_Item(System.Int32,System.Object)
extern "C"  void DataRow_set_Item_m2112158908 (DataRow_t321465356 * __this, int32_t ___columnIndex0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataRow::get_Item(System.String,System.Data.DataRowVersion)
extern "C"  Il2CppObject * DataRow_get_Item_m527328117 (DataRow_t321465356 * __this, String_t* ___columnName0, int32_t ___version1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataRow::get_Item(System.Data.DataColumn,System.Data.DataRowVersion)
extern "C"  Il2CppObject * DataRow_get_Item_m480772012 (DataRow_t321465356 * __this, DataColumn_t2152532948 * ___column0, int32_t ___version1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataRow::get_Item(System.Int32,System.Data.DataRowVersion)
extern "C"  Il2CppObject * DataRow_get_Item_m3461883216 (DataRow_t321465356 * __this, int32_t ___columnIndex0, int32_t ___version1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRowState System.Data.DataRow::get_RowState()
extern "C"  int32_t DataRow_get_RowState_m1997472498 (DataRow_t321465356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.DataRow::get_Table()
extern "C"  DataTable_t3267612424 * DataRow_get_Table_m218788114 (DataRow_t321465356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRow::get_XmlRowID()
extern "C"  int32_t DataRow_get_XmlRowID_m3392058174 (DataRow_t321465356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_XmlRowID(System.Int32)
extern "C"  void DataRow_set_XmlRowID_m3341620657 (DataRow_t321465356 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRow::get_RowID()
extern "C"  int32_t DataRow_get_RowID_m3053225011 (DataRow_t321465356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_RowID(System.Int32)
extern "C"  void DataRow_set_RowID_m3722949394 (DataRow_t321465356 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRow::get_Original()
extern "C"  int32_t DataRow_get_Original_m100636433 (DataRow_t321465356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_Original(System.Int32)
extern "C"  void DataRow_set_Original_m2923452842 (DataRow_t321465356 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRow::get_Current()
extern "C"  int32_t DataRow_get_Current_m2459802681 (DataRow_t321465356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_Current(System.Int32)
extern "C"  void DataRow_set_Current_m3221077578 (DataRow_t321465356 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRow::get_Proposed()
extern "C"  int32_t DataRow_get_Proposed_m3186590894 (DataRow_t321465356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_Proposed(System.Int32)
extern "C"  void DataRow_set_Proposed_m4173618943 (DataRow_t321465356 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::AttachAt(System.Int32,System.Data.DataRowAction)
extern "C"  void DataRow_AttachAt_m511559393 (DataRow_t321465356 * __this, int32_t ___row_id0, int32_t ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::Detach()
extern "C"  void DataRow_Detach_m342439018 (DataRow_t321465356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::ImportRecord(System.Int32)
extern "C"  void DataRow_ImportRecord_m762418884 (DataRow_t321465356 * __this, int32_t ___record0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::CheckValue(System.Object,System.Data.DataColumn)
extern "C"  void DataRow_CheckValue_m3311637919 (DataRow_t321465356 * __this, Il2CppObject * ___v0, DataColumn_t2152532948 * ___col1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::CheckValue(System.Object,System.Data.DataColumn,System.Boolean)
extern "C"  void DataRow_CheckValue_m2722065918 (DataRow_t321465356 * __this, Il2CppObject * ___v0, DataColumn_t2152532948 * ___col1, bool ___doROCheck2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataRow::get_RowError()
extern "C"  String_t* DataRow_get_RowError_m1155736309 (DataRow_t321465356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_RowError(System.String)
extern "C"  void DataRow_set_RowError_m2632929444 (DataRow_t321465356 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRow::IndexFromVersion(System.Data.DataRowVersion)
extern "C"  int32_t DataRow_IndexFromVersion_m3239061550 (DataRow_t321465356 * __this, int32_t ___version0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRow::AssertValidVersionIndex(System.Data.DataRowVersion,System.Int32)
extern "C"  int32_t DataRow_AssertValidVersionIndex_m1377396577 (DataRow_t321465356 * __this, int32_t ___version0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::SetOriginalValue(System.String,System.Object)
extern "C"  void DataRow_SetOriginalValue_m1089861931 (DataRow_t321465356 * __this, String_t* ___columnName0, Il2CppObject * ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::AcceptChanges()
extern "C"  void DataRow_AcceptChanges_m2086245136 (DataRow_t321465356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::BeginEdit()
extern "C"  void DataRow_BeginEdit_m3386272688 (DataRow_t321465356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::Delete()
extern "C"  void DataRow_Delete_m2140241174 (DataRow_t321465356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::CheckChildRows(System.Data.DataRowAction)
extern "C"  void DataRow_CheckChildRows_m1304888675 (DataRow_t321465356 * __this, int32_t ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::CheckChildRows(System.Data.ForeignKeyConstraint,System.Data.DataRowAction,System.Data.Rule)
extern "C"  void DataRow_CheckChildRows_m1586246673 (DataRow_t321465356 * __this, ForeignKeyConstraint_t173811822 * ___fkc0, int32_t ___action1, int32_t ___rule2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::EndEdit()
extern "C"  void DataRow_EndEdit_m3829179740 (DataRow_t321465356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow[] System.Data.DataRow::GetChildRows(System.Data.DataRelation)
extern "C"  DataRowU5BU5D_t3318761029* DataRow_GetChildRows_m2079526919 (DataRow_t321465356 * __this, DataRelation_t790111712 * ___relation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow[] System.Data.DataRow::GetChildRows(System.Data.DataRelation,System.Data.DataRowVersion)
extern "C"  DataRowU5BU5D_t3318761029* DataRow_GetChildRows_m2511228150 (DataRow_t321465356 * __this, DataRelation_t790111712 * ___relation0, int32_t ___version1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow[] System.Data.DataRow::GetChildRows(System.Data.ForeignKeyConstraint,System.Data.DataRowVersion)
extern "C"  DataRowU5BU5D_t3318761029* DataRow_GetChildRows_m2682545230 (DataRow_t321465356 * __this, ForeignKeyConstraint_t173811822 * ___fkc0, int32_t ___version1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataRow::GetColumnError(System.Data.DataColumn)
extern "C"  String_t* DataRow_GetColumnError_m473710693 (DataRow_t321465356 * __this, DataColumn_t2152532948 * ___column0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataRow::GetColumnError(System.Int32)
extern "C"  String_t* DataRow_GetColumnError_m1250345475 (DataRow_t321465356 * __this, int32_t ___columnIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn[] System.Data.DataRow::GetColumnsInError()
extern "C"  DataColumnU5BU5D_t1080903261* DataRow_GetColumnsInError_m3914872913 (DataRow_t321465356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataRow::GetParentRow(System.Data.DataRelation)
extern "C"  DataRow_t321465356 * DataRow_GetParentRow_m4223827902 (DataRow_t321465356 * __this, DataRelation_t790111712 * ___relation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataRow::GetParentRow(System.Data.DataRelation,System.Data.DataRowVersion)
extern "C"  DataRow_t321465356 * DataRow_GetParentRow_m3085017801 (DataRow_t321465356 * __this, DataRelation_t790111712 * ___relation0, int32_t ___version1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow[] System.Data.DataRow::GetParentRows(System.Data.DataRelation)
extern "C"  DataRowU5BU5D_t3318761029* DataRow_GetParentRows_m827875613 (DataRow_t321465356 * __this, DataRelation_t790111712 * ___relation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow[] System.Data.DataRow::GetParentRows(System.Data.DataRelation,System.Data.DataRowVersion)
extern "C"  DataRowU5BU5D_t3318761029* DataRow_GetParentRows_m3629410564 (DataRow_t321465356 * __this, DataRelation_t790111712 * ___relation0, int32_t ___version1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRow::HasVersion(System.Data.DataRowVersion)
extern "C"  bool DataRow_HasVersion_m2328934682 (DataRow_t321465356 * __this, int32_t ___version0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRow::IsNull(System.Data.DataColumn)
extern "C"  bool DataRow_IsNull_m1008919709 (DataRow_t321465356 * __this, DataColumn_t2152532948 * ___column0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRow::IsNull(System.Int32)
extern "C"  bool DataRow_IsNull_m1545757187 (DataRow_t321465356 * __this, int32_t ___columnIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRow::IsNull(System.Data.DataColumn,System.Data.DataRowVersion)
extern "C"  bool DataRow_IsNull_m3957691718 (DataRow_t321465356 * __this, DataColumn_t2152532948 * ___column0, int32_t ___version1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRow::IsNullColumns(System.Data.DataColumn[])
extern "C"  bool DataRow_IsNullColumns_m1178753100 (DataRow_t321465356 * __this, DataColumnU5BU5D_t1080903261* ___columns0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::RejectChanges()
extern "C"  void DataRow_RejectChanges_m2461041877 (DataRow_t321465356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::SetColumnError(System.Data.DataColumn,System.String)
extern "C"  void DataRow_SetColumnError_m3969815832 (DataRow_t321465356 * __this, DataColumn_t2152532948 * ___column0, String_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::SetColumnError(System.Int32,System.String)
extern "C"  void DataRow_SetColumnError_m2315466480 (DataRow_t321465356 * __this, int32_t ___columnIndex0, String_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::SetColumnError(System.String,System.String)
extern "C"  void DataRow_SetColumnError_m1844279707 (DataRow_t321465356 * __this, String_t* ___columnName0, String_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::SetNull(System.Data.DataColumn)
extern "C"  void DataRow_SetNull_m3726656801 (DataRow_t321465356 * __this, DataColumn_t2152532948 * ___column0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::CopyValuesToRow(System.Data.DataRow)
extern "C"  void DataRow_CopyValuesToRow_m487602334 (DataRow_t321465356 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::MergeValuesToRow(System.Data.DataRow,System.Boolean)
extern "C"  void DataRow_MergeValuesToRow_m3402476490 (DataRow_t321465356 * __this, DataRow_t321465356 * ___row0, bool ___preserveChanges1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::CopyErrors(System.Data.DataRow)
extern "C"  void DataRow_CopyErrors_m3147658502 (DataRow_t321465356 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRow::IsRowChanged(System.Data.DataRowState)
extern "C"  bool DataRow_IsRowChanged_m1281561445 (DataRow_t321465356 * __this, int32_t ___rowState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::Validate()
extern "C"  void DataRow_Validate_m1348004989 (DataRow_t321465356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::AssertConstraints()
extern "C"  void DataRow_AssertConstraints_m3473051627 (DataRow_t321465356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::CheckReadOnlyStatus()
extern "C"  void DataRow_CheckReadOnlyStatus_m137362407 (DataRow_t321465356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
