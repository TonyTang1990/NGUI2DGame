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

// System.Data.DataTable
struct DataTable_t3267612424;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Data.DataRowChangeEventHandler
struct DataRowChangeEventHandler_t167053918;
// System.Xml.XmlReader
struct XmlReader_t3675626668;
// System.Xml.XmlWriter
struct XmlWriter_t1048088568;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Data.DataRow
struct DataRow_t321465356;
// System.Data.DataColumn
struct DataColumn_t2152532948;
// System.Object
struct Il2CppObject;
// System.Data.DataRelationCollection
struct DataRelationCollection_t3958690162;
// System.Data.DataColumnCollection
struct DataColumnCollection_t195763618;
// System.Data.ConstraintCollection
struct ConstraintCollection_t4088681537;
// System.Data.DataSet
struct DataSet_t3097402844;
// System.Data.PropertyCollection
struct PropertyCollection_t2281048903;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t1080903261;
// System.Data.DataRowCollection
struct DataRowCollection_t111352322;
// System.ComponentModel.ISite
struct ISite_t1774720436;
// System.Data.Common.RecordCache
struct RecordCache_t828614321;
// System.Data.DataRowBuilder
struct DataRowBuilder_t1684492161;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Data.DataRow[]
struct DataRowU5BU5D_t3318761029;
// System.Data.Common.Index
struct Index_t1936973642;
// System.ComponentModel.ListSortDirection[]
struct ListSortDirectionU5BU5D_t2343897312;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t2963205659;
// System.Data.DataColumnChangeEventArgs
struct DataColumnChangeEventArgs_t3787575251;
// System.Data.DataRowChangeEventArgs
struct DataRowChangeEventArgs_t949966087;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t4086789226;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t313318308;
// System.Collections.Generic.List`1<System.Data.DataTable>
struct List_1_t2636733556;
// System.Collections.BitArray
struct BitArray_t4180138994;
// System.Data.DataTableNewRowEventArgs
struct DataTableNewRowEventArgs_t743281225;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "System_Data_System_Data_DataRowChangeEventHandler167053918.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"
#include "System_Xml_System_Xml_XmlWriter1048088568.h"
#include "System_Data_System_Data_DataRow321465356.h"
#include "System_Data_System_Data_DataColumn2152532948.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Data_System_Data_DataRowAction1701244498.h"
#include "System_Data_System_Data_ConstraintCollection4088681537.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "System_Data_System_Data_DataTable3267612424.h"
#include "System_Data_System_Data_DataRowState3751910455.h"
#include "System_Data_System_Data_DataRowBuilder1684492161.h"
#include "System_Data_System_Data_Common_Index1936973642.h"
#include "System_Data_System_Data_DataViewRowState2419600614.h"
#include "System_Data_System_Data_DataColumnChangeEventArgs3787575251.h"
#include "System_Data_System_Data_DataRowChangeEventArgs949966087.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet313318308.h"
#include "System_Data_System_Data_XmlReadMode2037225274.h"
#include "System_Data_System_Data_DataSet3097402844.h"
#include "System_Data_System_Data_XmlWriteMode996295013.h"
#include "System_Data_System_Data_SerializationFormat2880076079.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"
#include "mscorlib_System_Collections_BitArray4180138994.h"
#include "System_Data_System_Data_DataTableNewRowEventArgs743281225.h"

// System.Void System.Data.DataTable::.ctor()
extern "C"  void DataTable__ctor_m1933418411 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::.ctor(System.String)
extern "C"  void DataTable__ctor_m1389262201 (DataTable_t3267612424 * __this, String_t* ___tableName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DataTable__ctor_m3546418038 (DataTable_t3267612424 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::.cctor()
extern "C"  void DataTable__cctor_m1980679260 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::add_RowChanged(System.Data.DataRowChangeEventHandler)
extern "C"  void DataTable_add_RowChanged_m1628527976 (DataTable_t3267612424 * __this, DataRowChangeEventHandler_t167053918 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::remove_RowChanged(System.Data.DataRowChangeEventHandler)
extern "C"  void DataTable_remove_RowChanged_m18683811 (DataTable_t3267612424 * __this, DataRowChangeEventHandler_t167053918 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void DataTable_System_Xml_Serialization_IXmlSerializable_ReadXml_m1538504823 (DataTable_t3267612424 * __this, XmlReader_t3675626668 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void DataTable_System_Xml_Serialization_IXmlSerializable_WriteXml_m3681501510 (DataTable_t3267612424 * __this, XmlWriter_t1048088568 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTable::get_CaseSensitive()
extern "C"  bool DataTable_get_CaseSensitive_m1898712010 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_CaseSensitive(System.Boolean)
extern "C"  void DataTable_set_CaseSensitive_m2512744933 (DataTable_t3267612424 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.DataTable::get_Indexes()
extern "C"  ArrayList_t4252133567 * DataTable_get_Indexes_m1659033564 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::ChangedDataColumn(System.Data.DataRow,System.Data.DataColumn,System.Object)
extern "C"  void DataTable_ChangedDataColumn_m2423160365 (DataTable_t3267612424 * __this, DataRow_t321465356 * ___dr0, DataColumn_t2152532948 * ___dc1, Il2CppObject * ___pv2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::ChangingDataColumn(System.Data.DataRow,System.Data.DataColumn,System.Object)
extern "C"  void DataTable_ChangingDataColumn_m3921140940 (DataTable_t3267612424 * __this, DataRow_t321465356 * ___dr0, DataColumn_t2152532948 * ___dc1, Il2CppObject * ___pv2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::DeletedDataRow(System.Data.DataRow,System.Data.DataRowAction)
extern "C"  void DataTable_DeletedDataRow_m2019611382 (DataTable_t3267612424 * __this, DataRow_t321465356 * ___dr0, int32_t ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::DeletingDataRow(System.Data.DataRow,System.Data.DataRowAction)
extern "C"  void DataTable_DeletingDataRow_m2994239411 (DataTable_t3267612424 * __this, DataRow_t321465356 * ___dr0, int32_t ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::ChangedDataRow(System.Data.DataRow,System.Data.DataRowAction)
extern "C"  void DataTable_ChangedDataRow_m773150057 (DataTable_t3267612424 * __this, DataRow_t321465356 * ___dr0, int32_t ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::ChangingDataRow(System.Data.DataRow,System.Data.DataRowAction)
extern "C"  void DataTable_ChangingDataRow_m807219800 (DataTable_t3267612424 * __this, DataRow_t321465356 * ___dr0, int32_t ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelationCollection System.Data.DataTable::get_ChildRelations()
extern "C"  DataRelationCollection_t3958690162 * DataTable_get_ChildRelations_m1252997947 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumnCollection System.Data.DataTable::get_Columns()
extern "C"  DataColumnCollection_t195763618 * DataTable_get_Columns_m2034004513 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.ConstraintCollection System.Data.DataTable::get_Constraints()
extern "C"  ConstraintCollection_t4088681537 * DataTable_get_Constraints_m3363579377 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_Constraints(System.Data.ConstraintCollection)
extern "C"  void DataTable_set_Constraints_m1646855548 (DataTable_t3267612424 * __this, ConstraintCollection_t4088681537 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSet System.Data.DataTable::get_DataSet()
extern "C"  DataSet_t3097402844 * DataTable_get_DataSet_m2437602610 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataTable::get_DisplayExpression()
extern "C"  String_t* DataTable_get_DisplayExpression_m2152109131 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_DisplayExpression(System.String)
extern "C"  void DataTable_set_DisplayExpression_m3784708888 (DataTable_t3267612424 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.PropertyCollection System.Data.DataTable::get_ExtendedProperties()
extern "C"  PropertyCollection_t2281048903 * DataTable_get_ExtendedProperties_m330154551 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTable::get_HasErrors()
extern "C"  bool DataTable_get_HasErrors_m3482490331 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Data.DataTable::get_Locale()
extern "C"  CultureInfo_t3500843524 * DataTable_get_Locale_m3000031727 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_Locale(System.Globalization.CultureInfo)
extern "C"  void DataTable_set_Locale_m1400366888 (DataTable_t3267612424 * __this, CultureInfo_t3500843524 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTable::get_LocaleSpecified()
extern "C"  bool DataTable_get_LocaleSpecified_m3703011894 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataTable::get_MinimumCapacity()
extern "C"  int32_t DataTable_get_MinimumCapacity_m2846140478 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_MinimumCapacity(System.Int32)
extern "C"  void DataTable_set_MinimumCapacity_m402743553 (DataTable_t3267612424 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataTable::get_Namespace()
extern "C"  String_t* DataTable_get_Namespace_m1710385984 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_Namespace(System.String)
extern "C"  void DataTable_set_Namespace_m3625273155 (DataTable_t3267612424 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelationCollection System.Data.DataTable::get_ParentRelations()
extern "C"  DataRelationCollection_t3958690162 * DataTable_get_ParentRelations_m375615013 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataTable::get_Prefix()
extern "C"  String_t* DataTable_get_Prefix_m1538534727 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_Prefix(System.String)
extern "C"  void DataTable_set_Prefix_m3879432842 (DataTable_t3267612424 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn[] System.Data.DataTable::get_PrimaryKey()
extern "C"  DataColumnU5BU5D_t1080903261* DataTable_get_PrimaryKey_m2242086327 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_PrimaryKey(System.Data.DataColumn[])
extern "C"  void DataTable_set_PrimaryKey_m3483508516 (DataTable_t3267612424 * __this, DataColumnU5BU5D_t1080903261* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRowCollection System.Data.DataTable::get_Rows()
extern "C"  DataRowCollection_t111352322 * DataTable_get_Rows_m2382828861 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ISite System.Data.DataTable::get_Site()
extern "C"  Il2CppObject * DataTable_get_Site_m431016357 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_Site(System.ComponentModel.ISite)
extern "C"  void DataTable_set_Site_m1477406706 (DataTable_t3267612424 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataTable::get_TableName()
extern "C"  String_t* DataTable_get_TableName_m902397320 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_TableName(System.String)
extern "C"  void DataTable_set_TableName_m3938185417 (DataTable_t3267612424 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.RecordCache System.Data.DataTable::get_RecordCache()
extern "C"  RecordCache_t828614321 * DataTable_get_RecordCache_m2864006007 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRowBuilder System.Data.DataTable::get_RowBuilder()
extern "C"  DataRowBuilder_t1684492161 * DataTable_get_RowBuilder_m3520367362 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTable::get_EnforceConstraints()
extern "C"  bool DataTable_get_EnforceConstraints_m3589151074 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::set_EnforceConstraints(System.Boolean)
extern "C"  void DataTable_set_EnforceConstraints_m839052793 (DataTable_t3267612424 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::AssertNotNullConstraints()
extern "C"  void DataTable_AssertNotNullConstraints_m3897812853 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTable::RowsExist(System.Data.DataColumn[],System.Data.DataColumn[],System.Data.DataRow)
extern "C"  bool DataTable_RowsExist_m3569386694 (DataTable_t3267612424 * __this, DataColumnU5BU5D_t1080903261* ___columns0, DataColumnU5BU5D_t1080903261* ___relatedColumns1, DataRow_t321465356 * ___row2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTable::RowsExist(System.Data.DataColumn[],System.Int32)
extern "C"  bool DataTable_RowsExist_m524145105 (DataTable_t3267612424 * __this, DataColumnU5BU5D_t1080903261* ___columns0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::AcceptChanges()
extern "C"  void DataTable_AcceptChanges_m2344866412 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::BeginLoadData()
extern "C"  void DataTable_BeginLoadData_m301846368 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.DataTable::Clone()
extern "C"  DataTable_t3267612424 * DataTable_Clone_m836769200 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.DataTable::Copy()
extern "C"  DataTable_t3267612424 * DataTable_Copy_m2565091856 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::CopyRow(System.Data.DataRow,System.Data.DataRow)
extern "C"  void DataTable_CopyRow_m165073960 (DataTable_t3267612424 * __this, DataRow_t321465356 * ___fromRow0, DataRow_t321465356 * ___toRow1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::CopyProperties(System.Data.DataTable)
extern "C"  void DataTable_CopyProperties_m3215372196 (DataTable_t3267612424 * __this, DataTable_t3267612424 * ___Copy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::CopyConstraints(System.Data.DataTable)
extern "C"  void DataTable_CopyConstraints_m2047454115 (DataTable_t3267612424 * __this, DataTable_t3267612424 * ___copy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataTable::get_InitInProgress()
extern "C"  bool DataTable_get_InitInProgress_m891081378 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::EndLoadData()
extern "C"  void DataTable_EndLoadData_m3640582432 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.DataTable::GetChanges(System.Data.DataRowState)
extern "C"  DataTable_t3267612424 * DataTable_GetChanges_m2003642644 (DataTable_t3267612424 * __this, int32_t ___rowStates0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Data.DataTable::GetRowType()
extern "C"  Type_t * DataTable_GetRowType_m4111631039 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::ImportRow(System.Data.DataRow)
extern "C"  void DataTable_ImportRow_m398661987 (DataTable_t3267612424 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataTable::get_DefaultValuesRowIndex()
extern "C"  int32_t DataTable_get_DefaultValuesRowIndex_m616742963 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DataTable_GetObjectData_m3584049243 (DataTable_t3267612424 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataTable::LoadDataRow(System.Object[],System.Boolean)
extern "C"  DataRow_t321465356 * DataTable_LoadDataRow_m1553421618 (DataTable_t3267612424 * __this, ObjectU5BU5D_t3614634134* ___values0, bool ___fAcceptChanges1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataTable::NewRow()
extern "C"  DataRow_t321465356 * DataTable_NewRow_m380284585 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataTable::CreateRecord(System.Object[])
extern "C"  int32_t DataTable_CreateRecord_m3882530908 (DataTable_t3267612424 * __this, ObjectU5BU5D_t3614634134* ___values0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::EnsureDefaultValueRowIndex()
extern "C"  void DataTable_EnsureDefaultValueRowIndex_m4062403365 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow[] System.Data.DataTable::NewRowArray(System.Int32)
extern "C"  DataRowU5BU5D_t3318761029* DataTable_NewRowArray_m3995240555 (DataTable_t3267612424 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataTable::NewRowFromBuilder(System.Data.DataRowBuilder)
extern "C"  DataRow_t321465356 * DataTable_NewRowFromBuilder_m99735914 (DataTable_t3267612424 * __this, DataRowBuilder_t1684492161 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.DataTable::NewNotInitializedRow()
extern "C"  DataRow_t321465356 * DataTable_NewNotInitializedRow_m272724080 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::AddIndex(System.Data.Common.Index)
extern "C"  void DataTable_AddIndex_m1944958974 (DataTable_t3267612424 * __this, Index_t1936973642 * ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.Index System.Data.DataTable::GetIndex(System.Data.DataColumn[],System.ComponentModel.ListSortDirection[],System.Data.DataViewRowState,Mono.Data.SqlExpressions.IExpression,System.Boolean)
extern "C"  Index_t1936973642 * DataTable_GetIndex_m3480251810 (DataTable_t3267612424 * __this, DataColumnU5BU5D_t1080903261* ___columns0, ListSortDirectionU5BU5D_t2343897312* ___sort1, int32_t ___rowState2, Il2CppObject * ___filter3, bool ___reset4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.Index System.Data.DataTable::GetIndex(System.Data.DataColumn[],System.ComponentModel.ListSortDirection[],System.Data.DataViewRowState,Mono.Data.SqlExpressions.IExpression,System.Boolean,System.Boolean)
extern "C"  Index_t1936973642 * DataTable_GetIndex_m2040932387 (DataTable_t3267612424 * __this, DataColumnU5BU5D_t1080903261* ___columns0, ListSortDirectionU5BU5D_t2343897312* ___sort1, int32_t ___rowState2, Il2CppObject * ___filter3, bool ___reset4, bool ___addIndex5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.Index System.Data.DataTable::FindIndex(System.Data.DataColumn[])
extern "C"  Index_t1936973642 * DataTable_FindIndex_m2556907114 (DataTable_t3267612424 * __this, DataColumnU5BU5D_t1080903261* ___columns0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.Index System.Data.DataTable::FindIndex(System.Data.DataColumn[],System.ComponentModel.ListSortDirection[],System.Data.DataViewRowState,Mono.Data.SqlExpressions.IExpression)
extern "C"  Index_t1936973642 * DataTable_FindIndex_m1063897832 (DataTable_t3267612424 * __this, DataColumnU5BU5D_t1080903261* ___columns0, ListSortDirectionU5BU5D_t2343897312* ___sort1, int32_t ___rowState2, Il2CppObject * ___filter3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::ResetIndexes()
extern "C"  void DataTable_ResetIndexes_m3855052956 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::ResetCaseSensitiveIndexes()
extern "C"  void DataTable_ResetCaseSensitiveIndexes_m740199582 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::DropIndex(System.Data.Common.Index)
extern "C"  void DataTable_DropIndex_m3154564624 (DataTable_t3267612424 * __this, Index_t1936973642 * ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::AddRowToIndexes(System.Data.DataRow)
extern "C"  void DataTable_AddRowToIndexes_m3533824476 (DataTable_t3267612424 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::DeleteRowFromIndexes(System.Data.DataRow)
extern "C"  void DataTable_DeleteRowFromIndexes_m2542734989 (DataTable_t3267612424 * __this, DataRow_t321465356 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataTable::ToString()
extern "C"  String_t* DataTable_ToString_m1969124842 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::OnColumnChanged(System.Data.DataColumnChangeEventArgs)
extern "C"  void DataTable_OnColumnChanged_m732025218 (DataTable_t3267612424 * __this, DataColumnChangeEventArgs_t3787575251 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::OnColumnChanging(System.Data.DataColumnChangeEventArgs)
extern "C"  void DataTable_OnColumnChanging_m3724481813 (DataTable_t3267612424 * __this, DataColumnChangeEventArgs_t3787575251 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::OnRowChanged(System.Data.DataRowChangeEventArgs)
extern "C"  void DataTable_OnRowChanged_m2714135220 (DataTable_t3267612424 * __this, DataRowChangeEventArgs_t949966087 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::OnRowChanging(System.Data.DataRowChangeEventArgs)
extern "C"  void DataTable_OnRowChanging_m1195385477 (DataTable_t3267612424 * __this, DataRowChangeEventArgs_t949966087 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::OnRowDeleted(System.Data.DataRowChangeEventArgs)
extern "C"  void DataTable_OnRowDeleted_m1448095903 (DataTable_t3267612424 * __this, DataRowChangeEventArgs_t949966087 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::OnRowDeleting(System.Data.DataRowChangeEventArgs)
extern "C"  void DataTable_OnRowDeleting_m2805914046 (DataTable_t3267612424 * __this, DataRowChangeEventArgs_t949966087 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::ResetPropertyDescriptorsCache()
extern "C"  void DataTable_ResetPropertyDescriptorsCache_m1698713173 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::SetRowsID()
extern "C"  void DataTable_SetRowsID_m2074879517 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaComplexType System.Data.DataTable::GetDataTableSchema(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlSchemaComplexType_t4086789226 * DataTable_GetDataTableSchema_m1791541311 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t313318308 * ___schemaSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.XmlReadMode System.Data.DataTable::ReadXml_internal(System.Xml.XmlReader,System.Boolean)
extern "C"  int32_t DataTable_ReadXml_internal_m118400293 (DataTable_t3267612424 * __this, XmlReader_t3675626668 * ___reader0, bool ___serializable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::DenyXmlResolving(System.Data.DataTable,System.Data.DataSet,System.Data.XmlReadMode,System.Boolean,System.Boolean)
extern "C"  void DataTable_DenyXmlResolving_m741063322 (DataTable_t3267612424 * __this, DataTable_t3267612424 * ___table0, DataSet_t3097402844 * ___ds1, int32_t ___mode2, bool ___isTableNameBlank3, bool ___isPartOfDataSet4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::WriteXml(System.Xml.XmlWriter)
extern "C"  void DataTable_WriteXml_m691295733 (DataTable_t3267612424 * __this, XmlWriter_t1048088568 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::WriteXml(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.Boolean)
extern "C"  void DataTable_WriteXml_m2265432700 (DataTable_t3267612424 * __this, XmlWriter_t1048088568 * ___writer0, int32_t ___mode1, bool ___writeHierarchy2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::FindAllChildren(System.Collections.Generic.List`1<System.Data.DataTable>,System.Data.DataTable)
extern "C"  void DataTable_FindAllChildren_m2845668398 (DataTable_t3267612424 * __this, List_1_t2636733556 * ___list0, DataTable_t3267612424 * ___root1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SerializationFormat System.Data.DataTable::get_RemotingFormat()
extern "C"  int32_t DataTable_get_RemotingFormat_m1163334087 (DataTable_t3267612424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::DeserializeConstraints(System.Collections.ArrayList)
extern "C"  void DataTable_DeserializeConstraints_m1106260705 (DataTable_t3267612424 * __this, ArrayList_t4252133567 * ___arrayList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRowState System.Data.DataTable::GetCurrentRowState(System.Collections.BitArray,System.Int32)
extern "C"  int32_t DataTable_GetCurrentRowState_m1555769789 (DataTable_t3267612424 * __this, BitArray_t4180138994 * ___rowStateBitArray0, int32_t ___i1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::DeserializeRecords(System.Collections.ArrayList,System.Collections.ArrayList,System.Collections.BitArray)
extern "C"  void DataTable_DeserializeRecords_m3253764570 (DataTable_t3267612424 * __this, ArrayList_t4252133567 * ___arrayList0, ArrayList_t4252133567 * ___nullBits1, BitArray_t4180138994 * ___rowStateBitArray2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::BinaryDeserializeTable(System.Runtime.Serialization.SerializationInfo)
extern "C"  void DataTable_BinaryDeserializeTable_m2194137396 (DataTable_t3267612424 * __this, SerializationInfo_t228987430 * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::BinarySerializeProperty(System.Runtime.Serialization.SerializationInfo)
extern "C"  void DataTable_BinarySerializeProperty_m714492796 (DataTable_t3267612424 * __this, SerializationInfo_t228987430 * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::SerializeConstraints(System.Runtime.Serialization.SerializationInfo,System.String)
extern "C"  void DataTable_SerializeConstraints_m3787432662 (DataTable_t3267612424 * __this, SerializationInfo_t228987430 * ___info0, String_t* ___prefix1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::BinarySerialize(System.Runtime.Serialization.SerializationInfo,System.String)
extern "C"  void DataTable_BinarySerialize_m800091165 (DataTable_t3267612424 * __this, SerializationInfo_t228987430 * ___info0, String_t* ___prefix1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::OnTableNewRow(System.Data.DataTableNewRowEventArgs)
extern "C"  void DataTable_OnTableNewRow_m4115268234 (DataTable_t3267612424 * __this, DataTableNewRowEventArgs_t743281225 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTable::NewRowAdded(System.Data.DataRow)
extern "C"  void DataTable_NewRowAdded_m881158776 (DataTable_t3267612424 * __this, DataRow_t321465356 * ___dr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
