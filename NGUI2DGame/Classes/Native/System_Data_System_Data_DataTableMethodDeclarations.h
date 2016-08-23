#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.DataTable
struct DataTable_t296;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Data.DataRelationCollection
struct DataRelationCollection_t923;
// System.Data.DataColumnCollection
struct DataColumnCollection_t350;
// System.Data.ConstraintCollection
struct ConstraintCollection_t899;
// System.Data.DataSet
struct DataSet_t346;
// System.String
struct String_t;
// System.Data.PropertyCollection
struct PropertyCollection_t897;
// System.Globalization.CultureInfo
struct CultureInfo_t693;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t920;
// System.Data.DataRowCollection
struct DataRowCollection_t349;
// System.ComponentModel.ISite
struct ISite_t934;
// System.Data.Common.RecordCache
struct RecordCache_t935;
// System.Data.DataRowBuilder
struct DataRowBuilder_t926;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t669;
// System.Data.DataRowChangeEventHandler
struct DataRowChangeEventHandler_t938;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Xml.XmlWriter
struct XmlWriter_t1056;
// System.Data.DataRow
struct DataRow_t352;
// System.Data.DataColumn
struct DataColumn_t858;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t300;
// System.Data.DataRow[]
struct DataRowU5BU5D_t883;
// System.Data.Common.Index
struct Index_t898;
// System.ComponentModel.ListSortDirection[]
struct ListSortDirectionU5BU5D_t1023;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t908;
// System.Data.DataColumnChangeEventArgs
struct DataColumnChangeEventArgs_t911;
// System.Data.DataRowChangeEventArgs
struct DataRowChangeEventArgs_t927;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t1052;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t1102;
// System.Collections.Generic.List`1<System.Data.DataTable>
struct List_1_t857;
// System.Collections.BitArray
struct BitArray_t993;
// System.Data.DataTableNewRowEventArgs
struct DataTableNewRowEventArgs_t940;
// System.Data.SerializationFormat
#include "System_Data_System_Data_SerializationFormat.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Data.DataRowAction
#include "System_Data_System_Data_DataRowAction.h"
// System.Data.DataRowState
#include "System_Data_System_Data_DataRowState.h"
// System.Data.DataViewRowState
#include "System_Data_System_Data_DataViewRowState.h"
// System.Data.XmlReadMode
#include "System_Data_System_Data_XmlReadMode.h"
// System.Data.XmlWriteMode
#include "System_Data_System_Data_XmlWriteMode.h"

// System.Void System.Data.DataTable::.ctor()
extern "C" void DataTable__ctor_m3978 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::.ctor(System.String)
extern "C" void DataTable__ctor_m3578 (DataTable_t296 * __this, String_t* ___tableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DataTable__ctor_m3979 (DataTable_t296 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::.cctor()
extern "C" void DataTable__cctor_m3980 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::add_RowChanged(System.Data.DataRowChangeEventHandler)
extern "C" void DataTable_add_RowChanged_m3981 (DataTable_t296 * __this, DataRowChangeEventHandler_t938 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::remove_RowChanged(System.Data.DataRowChangeEventHandler)
extern "C" void DataTable_remove_RowChanged_m3982 (DataTable_t296 * __this, DataRowChangeEventHandler_t938 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C" void DataTable_System_Xml_Serialization_IXmlSerializable_ReadXml_m3983 (DataTable_t296 * __this, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C" void DataTable_System_Xml_Serialization_IXmlSerializable_WriteXml_m3984 (DataTable_t296 * __this, XmlWriter_t1056 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTable::get_CaseSensitive()
extern "C" bool DataTable_get_CaseSensitive_m3985 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_CaseSensitive(System.Boolean)
extern "C" void DataTable_set_CaseSensitive_m3986 (DataTable_t296 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.DataTable::get_Indexes()
extern "C" ArrayList_t913 * DataTable_get_Indexes_m3987 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::ChangedDataColumn(System.Data.DataRow,System.Data.DataColumn,System.Object)
extern "C" void DataTable_ChangedDataColumn_m3988 (DataTable_t296 * __this, DataRow_t352 * ___dr, DataColumn_t858 * ___dc, Object_t * ___pv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::ChangingDataColumn(System.Data.DataRow,System.Data.DataColumn,System.Object)
extern "C" void DataTable_ChangingDataColumn_m3989 (DataTable_t296 * __this, DataRow_t352 * ___dr, DataColumn_t858 * ___dc, Object_t * ___pv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::DeletedDataRow(System.Data.DataRow,System.Data.DataRowAction)
extern "C" void DataTable_DeletedDataRow_m3990 (DataTable_t296 * __this, DataRow_t352 * ___dr, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::DeletingDataRow(System.Data.DataRow,System.Data.DataRowAction)
extern "C" void DataTable_DeletingDataRow_m3991 (DataTable_t296 * __this, DataRow_t352 * ___dr, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::ChangedDataRow(System.Data.DataRow,System.Data.DataRowAction)
extern "C" void DataTable_ChangedDataRow_m3992 (DataTable_t296 * __this, DataRow_t352 * ___dr, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::ChangingDataRow(System.Data.DataRow,System.Data.DataRowAction)
extern "C" void DataTable_ChangingDataRow_m3993 (DataTable_t296 * __this, DataRow_t352 * ___dr, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelationCollection System.Data.DataTable::get_ChildRelations()
extern "C" DataRelationCollection_t923 * DataTable_get_ChildRelations_m3994 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumnCollection System.Data.DataTable::get_Columns()
extern "C" DataColumnCollection_t350 * DataTable_get_Columns_m1826 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.ConstraintCollection System.Data.DataTable::get_Constraints()
extern "C" ConstraintCollection_t899 * DataTable_get_Constraints_m3995 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_Constraints(System.Data.ConstraintCollection)
extern "C" void DataTable_set_Constraints_m3996 (DataTable_t296 * __this, ConstraintCollection_t899 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSet System.Data.DataTable::get_DataSet()
extern "C" DataSet_t346 * DataTable_get_DataSet_m3997 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataTable::get_DisplayExpression()
extern "C" String_t* DataTable_get_DisplayExpression_m3998 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_DisplayExpression(System.String)
extern "C" void DataTable_set_DisplayExpression_m3999 (DataTable_t296 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.PropertyCollection System.Data.DataTable::get_ExtendedProperties()
extern "C" PropertyCollection_t897 * DataTable_get_ExtendedProperties_m4000 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTable::get_HasErrors()
extern "C" bool DataTable_get_HasErrors_m4001 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Data.DataTable::get_Locale()
extern "C" CultureInfo_t693 * DataTable_get_Locale_m4002 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_Locale(System.Globalization.CultureInfo)
extern "C" void DataTable_set_Locale_m4003 (DataTable_t296 * __this, CultureInfo_t693 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTable::get_LocaleSpecified()
extern "C" bool DataTable_get_LocaleSpecified_m4004 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataTable::get_MinimumCapacity()
extern "C" int32_t DataTable_get_MinimumCapacity_m4005 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_MinimumCapacity(System.Int32)
extern "C" void DataTable_set_MinimumCapacity_m4006 (DataTable_t296 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataTable::get_Namespace()
extern "C" String_t* DataTable_get_Namespace_m4007 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_Namespace(System.String)
extern "C" void DataTable_set_Namespace_m4008 (DataTable_t296 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelationCollection System.Data.DataTable::get_ParentRelations()
extern "C" DataRelationCollection_t923 * DataTable_get_ParentRelations_m4009 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataTable::get_Prefix()
extern "C" String_t* DataTable_get_Prefix_m4010 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_Prefix(System.String)
extern "C" void DataTable_set_Prefix_m4011 (DataTable_t296 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn[] System.Data.DataTable::get_PrimaryKey()
extern "C" DataColumnU5BU5D_t920* DataTable_get_PrimaryKey_m4012 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_PrimaryKey(System.Data.DataColumn[])
extern "C" void DataTable_set_PrimaryKey_m4013 (DataTable_t296 * __this, DataColumnU5BU5D_t920* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRowCollection System.Data.DataTable::get_Rows()
extern "C" DataRowCollection_t349 * DataTable_get_Rows_m1825 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ISite System.Data.DataTable::get_Site()
extern "C" Object_t * DataTable_get_Site_m4014 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_Site(System.ComponentModel.ISite)
extern "C" void DataTable_set_Site_m4015 (DataTable_t296 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataTable::get_TableName()
extern "C" String_t* DataTable_get_TableName_m1827 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_TableName(System.String)
extern "C" void DataTable_set_TableName_m4016 (DataTable_t296 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.RecordCache System.Data.DataTable::get_RecordCache()
extern "C" RecordCache_t935 * DataTable_get_RecordCache_m4017 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRowBuilder System.Data.DataTable::get_RowBuilder()
extern "C" DataRowBuilder_t926 * DataTable_get_RowBuilder_m4018 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTable::get_EnforceConstraints()
extern "C" bool DataTable_get_EnforceConstraints_m4019 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_EnforceConstraints(System.Boolean)
extern "C" void DataTable_set_EnforceConstraints_m4020 (DataTable_t296 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::AssertNotNullConstraints()
extern "C" void DataTable_AssertNotNullConstraints_m4021 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTable::RowsExist(System.Data.DataColumn[],System.Data.DataColumn[],System.Data.DataRow)
extern "C" bool DataTable_RowsExist_m4022 (DataTable_t296 * __this, DataColumnU5BU5D_t920* ___columns, DataColumnU5BU5D_t920* ___relatedColumns, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTable::RowsExist(System.Data.DataColumn[],System.Int32)
extern "C" bool DataTable_RowsExist_m4023 (DataTable_t296 * __this, DataColumnU5BU5D_t920* ___columns, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::AcceptChanges()
extern "C" void DataTable_AcceptChanges_m4024 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::BeginLoadData()
extern "C" void DataTable_BeginLoadData_m3532 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.DataTable::Clone()
extern "C" DataTable_t296 * DataTable_Clone_m4025 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.DataTable::Copy()
extern "C" DataTable_t296 * DataTable_Copy_m4026 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::CopyRow(System.Data.DataRow,System.Data.DataRow)
extern "C" void DataTable_CopyRow_m4027 (DataTable_t296 * __this, DataRow_t352 * ___fromRow, DataRow_t352 * ___toRow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::CopyProperties(System.Data.DataTable)
extern "C" void DataTable_CopyProperties_m4028 (DataTable_t296 * __this, DataTable_t296 * ___Copy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::CopyConstraints(System.Data.DataTable)
extern "C" void DataTable_CopyConstraints_m4029 (DataTable_t296 * __this, DataTable_t296 * ___copy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTable::get_InitInProgress()
extern "C" bool DataTable_get_InitInProgress_m4030 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::EndLoadData()
extern "C" void DataTable_EndLoadData_m3534 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.DataTable::GetChanges(System.Data.DataRowState)
extern "C" DataTable_t296 * DataTable_GetChanges_m4031 (DataTable_t296 * __this, int32_t ___rowStates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Data.DataTable::GetRowType()
extern "C" Type_t * DataTable_GetRowType_m4032 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::ImportRow(System.Data.DataRow)
extern "C" void DataTable_ImportRow_m3533 (DataTable_t296 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataTable::get_DefaultValuesRowIndex()
extern "C" int32_t DataTable_get_DefaultValuesRowIndex_m4033 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DataTable_GetObjectData_m4034 (DataTable_t296 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataTable::LoadDataRow(System.Object[],System.Boolean)
extern "C" DataRow_t352 * DataTable_LoadDataRow_m4035 (DataTable_t296 * __this, ObjectU5BU5D_t300* ___values, bool ___fAcceptChanges, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataTable::NewRow()
extern "C" DataRow_t352 * DataTable_NewRow_m4036 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataTable::CreateRecord(System.Object[])
extern "C" int32_t DataTable_CreateRecord_m4037 (DataTable_t296 * __this, ObjectU5BU5D_t300* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::EnsureDefaultValueRowIndex()
extern "C" void DataTable_EnsureDefaultValueRowIndex_m4038 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow[] System.Data.DataTable::NewRowArray(System.Int32)
extern "C" DataRowU5BU5D_t883* DataTable_NewRowArray_m4039 (DataTable_t296 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataTable::NewRowFromBuilder(System.Data.DataRowBuilder)
extern "C" DataRow_t352 * DataTable_NewRowFromBuilder_m4040 (DataTable_t296 * __this, DataRowBuilder_t926 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataTable::NewNotInitializedRow()
extern "C" DataRow_t352 * DataTable_NewNotInitializedRow_m4041 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::AddIndex(System.Data.Common.Index)
extern "C" void DataTable_AddIndex_m4042 (DataTable_t296 * __this, Index_t898 * ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.Index System.Data.DataTable::GetIndex(System.Data.DataColumn[],System.ComponentModel.ListSortDirection[],System.Data.DataViewRowState,Mono.Data.SqlExpressions.IExpression,System.Boolean)
extern "C" Index_t898 * DataTable_GetIndex_m4043 (DataTable_t296 * __this, DataColumnU5BU5D_t920* ___columns, ListSortDirectionU5BU5D_t1023* ___sort, int32_t ___rowState, Object_t * ___filter, bool ___reset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.Index System.Data.DataTable::GetIndex(System.Data.DataColumn[],System.ComponentModel.ListSortDirection[],System.Data.DataViewRowState,Mono.Data.SqlExpressions.IExpression,System.Boolean,System.Boolean)
extern "C" Index_t898 * DataTable_GetIndex_m4044 (DataTable_t296 * __this, DataColumnU5BU5D_t920* ___columns, ListSortDirectionU5BU5D_t1023* ___sort, int32_t ___rowState, Object_t * ___filter, bool ___reset, bool ___addIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.Index System.Data.DataTable::FindIndex(System.Data.DataColumn[])
extern "C" Index_t898 * DataTable_FindIndex_m4045 (DataTable_t296 * __this, DataColumnU5BU5D_t920* ___columns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.Index System.Data.DataTable::FindIndex(System.Data.DataColumn[],System.ComponentModel.ListSortDirection[],System.Data.DataViewRowState,Mono.Data.SqlExpressions.IExpression)
extern "C" Index_t898 * DataTable_FindIndex_m4046 (DataTable_t296 * __this, DataColumnU5BU5D_t920* ___columns, ListSortDirectionU5BU5D_t1023* ___sort, int32_t ___rowState, Object_t * ___filter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::ResetIndexes()
extern "C" void DataTable_ResetIndexes_m4047 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::ResetCaseSensitiveIndexes()
extern "C" void DataTable_ResetCaseSensitiveIndexes_m4048 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::DropIndex(System.Data.Common.Index)
extern "C" void DataTable_DropIndex_m4049 (DataTable_t296 * __this, Index_t898 * ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::AddRowToIndexes(System.Data.DataRow)
extern "C" void DataTable_AddRowToIndexes_m4050 (DataTable_t296 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::DeleteRowFromIndexes(System.Data.DataRow)
extern "C" void DataTable_DeleteRowFromIndexes_m4051 (DataTable_t296 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataTable::ToString()
extern "C" String_t* DataTable_ToString_m4052 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::OnColumnChanged(System.Data.DataColumnChangeEventArgs)
extern "C" void DataTable_OnColumnChanged_m4053 (DataTable_t296 * __this, DataColumnChangeEventArgs_t911 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::OnColumnChanging(System.Data.DataColumnChangeEventArgs)
extern "C" void DataTable_OnColumnChanging_m4054 (DataTable_t296 * __this, DataColumnChangeEventArgs_t911 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::OnRowChanged(System.Data.DataRowChangeEventArgs)
extern "C" void DataTable_OnRowChanged_m4055 (DataTable_t296 * __this, DataRowChangeEventArgs_t927 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::OnRowChanging(System.Data.DataRowChangeEventArgs)
extern "C" void DataTable_OnRowChanging_m4056 (DataTable_t296 * __this, DataRowChangeEventArgs_t927 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::OnRowDeleted(System.Data.DataRowChangeEventArgs)
extern "C" void DataTable_OnRowDeleted_m4057 (DataTable_t296 * __this, DataRowChangeEventArgs_t927 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::OnRowDeleting(System.Data.DataRowChangeEventArgs)
extern "C" void DataTable_OnRowDeleting_m4058 (DataTable_t296 * __this, DataRowChangeEventArgs_t927 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::ResetPropertyDescriptorsCache()
extern "C" void DataTable_ResetPropertyDescriptorsCache_m4059 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::SetRowsID()
extern "C" void DataTable_SetRowsID_m4060 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaComplexType System.Data.DataTable::GetDataTableSchema(System.Xml.Schema.XmlSchemaSet)
extern "C" XmlSchemaComplexType_t1052 * DataTable_GetDataTableSchema_m4061 (Object_t * __this /* static, unused */, XmlSchemaSet_t1102 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.XmlReadMode System.Data.DataTable::ReadXml_internal(System.Xml.XmlReader,System.Boolean)
extern "C" int32_t DataTable_ReadXml_internal_m4062 (DataTable_t296 * __this, XmlReader_t843 * ___reader, bool ___serializable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::DenyXmlResolving(System.Data.DataTable,System.Data.DataSet,System.Data.XmlReadMode,System.Boolean,System.Boolean)
extern "C" void DataTable_DenyXmlResolving_m4063 (DataTable_t296 * __this, DataTable_t296 * ___table, DataSet_t346 * ___ds, int32_t ___mode, bool ___isTableNameBlank, bool ___isPartOfDataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::WriteXml(System.Xml.XmlWriter)
extern "C" void DataTable_WriteXml_m4064 (DataTable_t296 * __this, XmlWriter_t1056 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::WriteXml(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.Boolean)
extern "C" void DataTable_WriteXml_m4065 (DataTable_t296 * __this, XmlWriter_t1056 * ___writer, int32_t ___mode, bool ___writeHierarchy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::FindAllChildren(System.Collections.Generic.List`1<System.Data.DataTable>,System.Data.DataTable)
extern "C" void DataTable_FindAllChildren_m4066 (DataTable_t296 * __this, List_1_t857 * ___list, DataTable_t296 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SerializationFormat System.Data.DataTable::get_RemotingFormat()
extern "C" int32_t DataTable_get_RemotingFormat_m4067 (DataTable_t296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::DeserializeConstraints(System.Collections.ArrayList)
extern "C" void DataTable_DeserializeConstraints_m4068 (DataTable_t296 * __this, ArrayList_t913 * ___arrayList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRowState System.Data.DataTable::GetCurrentRowState(System.Collections.BitArray,System.Int32)
extern "C" int32_t DataTable_GetCurrentRowState_m4069 (DataTable_t296 * __this, BitArray_t993 * ___rowStateBitArray, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::DeserializeRecords(System.Collections.ArrayList,System.Collections.ArrayList,System.Collections.BitArray)
extern "C" void DataTable_DeserializeRecords_m4070 (DataTable_t296 * __this, ArrayList_t913 * ___arrayList, ArrayList_t913 * ___nullBits, BitArray_t993 * ___rowStateBitArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::BinaryDeserializeTable(System.Runtime.Serialization.SerializationInfo)
extern "C" void DataTable_BinaryDeserializeTable_m4071 (DataTable_t296 * __this, SerializationInfo_t669 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::BinarySerializeProperty(System.Runtime.Serialization.SerializationInfo)
extern "C" void DataTable_BinarySerializeProperty_m4072 (DataTable_t296 * __this, SerializationInfo_t669 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::SerializeConstraints(System.Runtime.Serialization.SerializationInfo,System.String)
extern "C" void DataTable_SerializeConstraints_m4073 (DataTable_t296 * __this, SerializationInfo_t669 * ___info, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::BinarySerialize(System.Runtime.Serialization.SerializationInfo,System.String)
extern "C" void DataTable_BinarySerialize_m4074 (DataTable_t296 * __this, SerializationInfo_t669 * ___info, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::OnTableNewRow(System.Data.DataTableNewRowEventArgs)
extern "C" void DataTable_OnTableNewRow_m4075 (DataTable_t296 * __this, DataTableNewRowEventArgs_t940 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::NewRowAdded(System.Data.DataRow)
extern "C" void DataTable_NewRowAdded_m4076 (DataTable_t296 * __this, DataRow_t352 * ___dr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
