#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.DataRow
struct DataRow_t352;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Data.DataColumn
struct DataColumn_t858;
// System.Data.DataTable
struct DataTable_t296;
// System.Data.DataRowBuilder
struct DataRowBuilder_t926;
// System.Data.ForeignKeyConstraint
struct ForeignKeyConstraint_t919;
// System.Data.DataRow[]
struct DataRowU5BU5D_t883;
// System.Data.DataRelation
struct DataRelation_t921;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t920;
// System.Data.DataRowVersion
#include "System_Data_System_Data_DataRowVersion.h"
// System.Data.DataRowState
#include "System_Data_System_Data_DataRowState.h"
// System.Data.DataRowAction
#include "System_Data_System_Data_DataRowAction.h"
// System.Data.Rule
#include "System_Data_System_Data_Rule.h"

// System.Void System.Data.DataRow::.ctor(System.Data.DataRowBuilder)
extern "C" void DataRow__ctor_m3831 (DataRow_t352 * __this, DataRowBuilder_t926 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.DataRow::get_ColumnErrors()
extern "C" ArrayList_t913 * DataRow_get_ColumnErrors_m3832 (DataRow_t352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRow::get_HasErrors()
extern "C" bool DataRow_get_HasErrors_m3833 (DataRow_t352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataRow::get_Item(System.String)
extern "C" Object_t * DataRow_get_Item_m3834 (DataRow_t352 * __this, String_t* ___columnName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_Item(System.String,System.Object)
extern "C" void DataRow_set_Item_m3835 (DataRow_t352 * __this, String_t* ___columnName, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataRow::get_Item(System.Data.DataColumn)
extern "C" Object_t * DataRow_get_Item_m3836 (DataRow_t352 * __this, DataColumn_t858 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_Item(System.Data.DataColumn,System.Object)
extern "C" void DataRow_set_Item_m3837 (DataRow_t352 * __this, DataColumn_t858 * ___column, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataRow::get_Item(System.Int32)
extern "C" Object_t * DataRow_get_Item_m1829 (DataRow_t352 * __this, int32_t ___columnIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_Item(System.Int32,System.Object)
extern "C" void DataRow_set_Item_m3838 (DataRow_t352 * __this, int32_t ___columnIndex, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataRow::get_Item(System.String,System.Data.DataRowVersion)
extern "C" Object_t * DataRow_get_Item_m3839 (DataRow_t352 * __this, String_t* ___columnName, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataRow::get_Item(System.Data.DataColumn,System.Data.DataRowVersion)
extern "C" Object_t * DataRow_get_Item_m3840 (DataRow_t352 * __this, DataColumn_t858 * ___column, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataRow::get_Item(System.Int32,System.Data.DataRowVersion)
extern "C" Object_t * DataRow_get_Item_m3841 (DataRow_t352 * __this, int32_t ___columnIndex, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRowState System.Data.DataRow::get_RowState()
extern "C" int32_t DataRow_get_RowState_m3842 (DataRow_t352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.DataRow::get_Table()
extern "C" DataTable_t296 * DataRow_get_Table_m3843 (DataRow_t352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRow::get_XmlRowID()
extern "C" int32_t DataRow_get_XmlRowID_m3844 (DataRow_t352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_XmlRowID(System.Int32)
extern "C" void DataRow_set_XmlRowID_m3845 (DataRow_t352 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRow::get_RowID()
extern "C" int32_t DataRow_get_RowID_m3846 (DataRow_t352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_RowID(System.Int32)
extern "C" void DataRow_set_RowID_m3847 (DataRow_t352 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRow::get_Original()
extern "C" int32_t DataRow_get_Original_m3848 (DataRow_t352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_Original(System.Int32)
extern "C" void DataRow_set_Original_m3849 (DataRow_t352 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRow::get_Current()
extern "C" int32_t DataRow_get_Current_m3850 (DataRow_t352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_Current(System.Int32)
extern "C" void DataRow_set_Current_m3851 (DataRow_t352 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRow::get_Proposed()
extern "C" int32_t DataRow_get_Proposed_m3852 (DataRow_t352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_Proposed(System.Int32)
extern "C" void DataRow_set_Proposed_m3853 (DataRow_t352 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::AttachAt(System.Int32,System.Data.DataRowAction)
extern "C" void DataRow_AttachAt_m3854 (DataRow_t352 * __this, int32_t ___row_id, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::Detach()
extern "C" void DataRow_Detach_m3855 (DataRow_t352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::ImportRecord(System.Int32)
extern "C" void DataRow_ImportRecord_m3856 (DataRow_t352 * __this, int32_t ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::CheckValue(System.Object,System.Data.DataColumn)
extern "C" void DataRow_CheckValue_m3857 (DataRow_t352 * __this, Object_t * ___v, DataColumn_t858 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::CheckValue(System.Object,System.Data.DataColumn,System.Boolean)
extern "C" void DataRow_CheckValue_m3858 (DataRow_t352 * __this, Object_t * ___v, DataColumn_t858 * ___col, bool ___doROCheck, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataRow::get_RowError()
extern "C" String_t* DataRow_get_RowError_m3859 (DataRow_t352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::set_RowError(System.String)
extern "C" void DataRow_set_RowError_m3860 (DataRow_t352 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRow::IndexFromVersion(System.Data.DataRowVersion)
extern "C" int32_t DataRow_IndexFromVersion_m3861 (DataRow_t352 * __this, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRow::AssertValidVersionIndex(System.Data.DataRowVersion,System.Int32)
extern "C" int32_t DataRow_AssertValidVersionIndex_m3862 (DataRow_t352 * __this, int32_t ___version, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::SetOriginalValue(System.String,System.Object)
extern "C" void DataRow_SetOriginalValue_m3863 (DataRow_t352 * __this, String_t* ___columnName, Object_t * ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::AcceptChanges()
extern "C" void DataRow_AcceptChanges_m3864 (DataRow_t352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::BeginEdit()
extern "C" void DataRow_BeginEdit_m3865 (DataRow_t352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::Delete()
extern "C" void DataRow_Delete_m3866 (DataRow_t352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::CheckChildRows(System.Data.DataRowAction)
extern "C" void DataRow_CheckChildRows_m3867 (DataRow_t352 * __this, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::CheckChildRows(System.Data.ForeignKeyConstraint,System.Data.DataRowAction,System.Data.Rule)
extern "C" void DataRow_CheckChildRows_m3868 (DataRow_t352 * __this, ForeignKeyConstraint_t919 * ___fkc, int32_t ___action, int32_t ___rule, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::EndEdit()
extern "C" void DataRow_EndEdit_m3869 (DataRow_t352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow[] System.Data.DataRow::GetChildRows(System.Data.DataRelation)
extern "C" DataRowU5BU5D_t883* DataRow_GetChildRows_m3870 (DataRow_t352 * __this, DataRelation_t921 * ___relation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow[] System.Data.DataRow::GetChildRows(System.Data.DataRelation,System.Data.DataRowVersion)
extern "C" DataRowU5BU5D_t883* DataRow_GetChildRows_m3871 (DataRow_t352 * __this, DataRelation_t921 * ___relation, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow[] System.Data.DataRow::GetChildRows(System.Data.ForeignKeyConstraint,System.Data.DataRowVersion)
extern "C" DataRowU5BU5D_t883* DataRow_GetChildRows_m3872 (DataRow_t352 * __this, ForeignKeyConstraint_t919 * ___fkc, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataRow::GetColumnError(System.Data.DataColumn)
extern "C" String_t* DataRow_GetColumnError_m3873 (DataRow_t352 * __this, DataColumn_t858 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataRow::GetColumnError(System.Int32)
extern "C" String_t* DataRow_GetColumnError_m3874 (DataRow_t352 * __this, int32_t ___columnIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn[] System.Data.DataRow::GetColumnsInError()
extern "C" DataColumnU5BU5D_t920* DataRow_GetColumnsInError_m3875 (DataRow_t352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataRow::GetParentRow(System.Data.DataRelation)
extern "C" DataRow_t352 * DataRow_GetParentRow_m3876 (DataRow_t352 * __this, DataRelation_t921 * ___relation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataRow::GetParentRow(System.Data.DataRelation,System.Data.DataRowVersion)
extern "C" DataRow_t352 * DataRow_GetParentRow_m3877 (DataRow_t352 * __this, DataRelation_t921 * ___relation, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow[] System.Data.DataRow::GetParentRows(System.Data.DataRelation)
extern "C" DataRowU5BU5D_t883* DataRow_GetParentRows_m3878 (DataRow_t352 * __this, DataRelation_t921 * ___relation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow[] System.Data.DataRow::GetParentRows(System.Data.DataRelation,System.Data.DataRowVersion)
extern "C" DataRowU5BU5D_t883* DataRow_GetParentRows_m3879 (DataRow_t352 * __this, DataRelation_t921 * ___relation, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRow::HasVersion(System.Data.DataRowVersion)
extern "C" bool DataRow_HasVersion_m3880 (DataRow_t352 * __this, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRow::IsNull(System.Data.DataColumn)
extern "C" bool DataRow_IsNull_m3881 (DataRow_t352 * __this, DataColumn_t858 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRow::IsNull(System.Int32)
extern "C" bool DataRow_IsNull_m3529 (DataRow_t352 * __this, int32_t ___columnIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRow::IsNull(System.Data.DataColumn,System.Data.DataRowVersion)
extern "C" bool DataRow_IsNull_m3882 (DataRow_t352 * __this, DataColumn_t858 * ___column, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRow::IsNullColumns(System.Data.DataColumn[])
extern "C" bool DataRow_IsNullColumns_m3883 (DataRow_t352 * __this, DataColumnU5BU5D_t920* ___columns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::RejectChanges()
extern "C" void DataRow_RejectChanges_m3884 (DataRow_t352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::SetColumnError(System.Data.DataColumn,System.String)
extern "C" void DataRow_SetColumnError_m3885 (DataRow_t352 * __this, DataColumn_t858 * ___column, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::SetColumnError(System.Int32,System.String)
extern "C" void DataRow_SetColumnError_m3886 (DataRow_t352 * __this, int32_t ___columnIndex, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::SetColumnError(System.String,System.String)
extern "C" void DataRow_SetColumnError_m3887 (DataRow_t352 * __this, String_t* ___columnName, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::SetNull(System.Data.DataColumn)
extern "C" void DataRow_SetNull_m3888 (DataRow_t352 * __this, DataColumn_t858 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::CopyValuesToRow(System.Data.DataRow)
extern "C" void DataRow_CopyValuesToRow_m3889 (DataRow_t352 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::MergeValuesToRow(System.Data.DataRow,System.Boolean)
extern "C" void DataRow_MergeValuesToRow_m3890 (DataRow_t352 * __this, DataRow_t352 * ___row, bool ___preserveChanges, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::CopyErrors(System.Data.DataRow)
extern "C" void DataRow_CopyErrors_m3891 (DataRow_t352 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRow::IsRowChanged(System.Data.DataRowState)
extern "C" bool DataRow_IsRowChanged_m3892 (DataRow_t352 * __this, int32_t ___rowState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::Validate()
extern "C" void DataRow_Validate_m3893 (DataRow_t352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::AssertConstraints()
extern "C" void DataRow_AssertConstraints_m3894 (DataRow_t352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRow::CheckReadOnlyStatus()
extern "C" void DataRow_CheckReadOnlyStatus_m3895 (DataRow_t352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
