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

// System.Data.DataSet
struct DataSet_t3097402844;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Xml.XmlReader
struct XmlReader_t3675626668;
// System.Xml.XmlWriter
struct XmlWriter_t1048088568;
// System.Data.PropertyCollection
struct PropertyCollection_t2281048903;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.Data.DataRelationCollection
struct DataRelationCollection_t3958690162;
// System.ComponentModel.ISite
struct ISite_t1774720436;
// System.Data.DataTableCollection
struct DataTableCollection_t787171642;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Data.DataTable
struct DataTable_t3267612424;
// System.Data.DataRow
struct DataRow_t321465356;
// System.Xml.XmlDocument
struct XmlDocument_t3649534162;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.IO.TextReader
struct TextReader_t1561828458;
// System.Data.MergeFailedEventArgs
struct MergeFailedEventArgs_t1148725902;
// System.Object
struct Il2CppObject;
// System.Data.DataRow[]
struct DataRowU5BU5D_t3318761029;
// System.Data.DataColumn
struct DataColumn_t2152532948;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t4086789226;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t313318308;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"
#include "System_Xml_System_Xml_XmlWriter1048088568.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "System_Data_System_Data_DataSet3097402844.h"
#include "System_Data_System_Data_MissingSchemaAction1287182105.h"
#include "System_Data_System_Data_DataRowState3751910455.h"
#include "mscorlib_System_Collections_Hashtable909839986.h"
#include "System_Data_System_Data_DataTable3267612424.h"
#include "System_Data_System_Data_DataRow321465356.h"
#include "System_Xml_System_Xml_XmlDocument3649534162.h"
#include "System_Data_System_Data_XmlWriteMode996295013.h"
#include "mscorlib_System_IO_TextReader1561828458.h"
#include "System_Data_System_Data_XmlReadMode2037225274.h"
#include "System_Data_System_Data_MergeFailedEventArgs1148725902.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Data_System_Data_DataTableCollection787171642.h"
#include "System_Data_System_Data_DataRowVersion3411859714.h"
#include "System_Data_System_Data_DataColumn2152532948.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"
#include "System_Data_System_Data_SerializationFormat2880076079.h"
#include "System_Data_System_Data_SchemaSerializationMode367309070.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet313318308.h"

// System.Void System.Data.DataSet::.ctor()
extern "C"  void DataSet__ctor_m3533586871 (DataSet_t3097402844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::.ctor(System.String)
extern "C"  void DataSet__ctor_m1141829261 (DataSet_t3097402844 * __this, String_t* ___dataSetName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DataSet__ctor_m3563034786 (DataSet_t3097402844 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void DataSet_System_Xml_Serialization_IXmlSerializable_ReadXml_m2169631227 (DataSet_t3097402844 * __this, XmlReader_t3675626668 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void DataSet_System_Xml_Serialization_IXmlSerializable_WriteXml_m4262521514 (DataSet_t3097402844 * __this, XmlWriter_t1048088568 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataSet::get_CaseSensitive()
extern "C"  bool DataSet_get_CaseSensitive_m50774382 (DataSet_t3097402844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::set_CaseSensitive(System.Boolean)
extern "C"  void DataSet_set_CaseSensitive_m2797063297 (DataSet_t3097402844 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataSet::get_DataSetName()
extern "C"  String_t* DataSet_get_DataSetName_m3599040336 (DataSet_t3097402844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::set_DataSetName(System.String)
extern "C"  void DataSet_set_DataSetName_m2531317617 (DataSet_t3097402844 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataSet::get_EnforceConstraints()
extern "C"  bool DataSet_get_EnforceConstraints_m1632853758 (DataSet_t3097402844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::set_EnforceConstraints(System.Boolean)
extern "C"  void DataSet_set_EnforceConstraints_m293217397 (DataSet_t3097402844 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.PropertyCollection System.Data.DataSet::get_ExtendedProperties()
extern "C"  PropertyCollection_t2281048903 * DataSet_get_ExtendedProperties_m3804934427 (DataSet_t3097402844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Data.DataSet::get_Locale()
extern "C"  CultureInfo_t3500843524 * DataSet_get_Locale_m3418361675 (DataSet_t3097402844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::set_Locale(System.Globalization.CultureInfo)
extern "C"  void DataSet_set_Locale_m325046636 (DataSet_t3097402844 * __this, CultureInfo_t3500843524 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataSet::get_LocaleSpecified()
extern "C"  bool DataSet_get_LocaleSpecified_m1285363274 (DataSet_t3097402844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::InternalEnforceConstraints(System.Boolean,System.Boolean)
extern "C"  void DataSet_InternalEnforceConstraints_m2390399522 (DataSet_t3097402844 * __this, bool ___value0, bool ___resetIndexes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::Merge(System.Data.DataSet,System.Boolean,System.Data.MissingSchemaAction)
extern "C"  void DataSet_Merge_m3812306373 (DataSet_t3097402844 * __this, DataSet_t3097402844 * ___dataSet0, bool ___preserveChanges1, int32_t ___missingSchemaAction2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataSet::IsLegalSchemaAction(System.Data.MissingSchemaAction)
extern "C"  bool DataSet_IsLegalSchemaAction_m3724362239 (Il2CppObject * __this /* static, unused */, int32_t ___missingSchemaAction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataSet::get_Namespace()
extern "C"  String_t* DataSet_get_Namespace_m575086428 (DataSet_t3097402844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::set_Namespace(System.String)
extern "C"  void DataSet_set_Namespace_m4158910727 (DataSet_t3097402844 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataSet::get_Prefix()
extern "C"  String_t* DataSet_get_Prefix_m4029831411 (DataSet_t3097402844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::set_Prefix(System.String)
extern "C"  void DataSet_set_Prefix_m2177792406 (DataSet_t3097402844 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelationCollection System.Data.DataSet::get_Relations()
extern "C"  DataRelationCollection_t3958690162 * DataSet_get_Relations_m2010760349 (DataSet_t3097402844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ISite System.Data.DataSet::get_Site()
extern "C"  Il2CppObject * DataSet_get_Site_m2914819241 (DataSet_t3097402844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::set_Site(System.ComponentModel.ISite)
extern "C"  void DataSet_set_Site_m1092201398 (DataSet_t3097402844 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTableCollection System.Data.DataSet::get_Tables()
extern "C"  DataTableCollection_t787171642 * DataSet_get_Tables_m3728796977 (DataSet_t3097402844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::AcceptChanges()
extern "C"  void DataSet_AcceptChanges_m2900346336 (DataSet_t3097402844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSet System.Data.DataSet::Clone()
extern "C"  DataSet_t3097402844 * DataSet_Clone_m2793059152 (DataSet_t3097402844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::CopyProperties(System.Data.DataSet)
extern "C"  void DataSet_CopyProperties_m2873302980 (DataSet_t3097402844 * __this, DataSet_t3097402844 * ___Copy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::CopyRelations(System.Data.DataSet)
extern "C"  void DataSet_CopyRelations_m3445992058 (DataSet_t3097402844 * __this, DataSet_t3097402844 * ___Copy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSet System.Data.DataSet::GetChanges(System.Data.DataRowState)
extern "C"  DataSet_t3097402844 * DataSet_GetChanges_m2429107380 (DataSet_t3097402844 * __this, int32_t ___rowStates0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::AddChangedRow(System.Collections.Hashtable,System.Data.DataTable,System.Data.DataRow)
extern "C"  void DataSet_AddChangedRow_m3343791990 (DataSet_t3097402844 * __this, Hashtable_t909839986 * ___addedRows0, DataTable_t3267612424 * ___copyTable1, DataRow_t321465356 * ___row2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataSet::HasChanges(System.Data.DataRowState)
extern "C"  bool DataSet_HasChanges_m4110960064 (DataSet_t3097402844 * __this, int32_t ___rowStates0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::InferXmlSchema(System.Xml.XmlDocument,System.String[])
extern "C"  void DataSet_InferXmlSchema_m2054040963 (DataSet_t3097402844 * __this, XmlDocument_t3649534162 * ___doc0, StringU5BU5D_t1642385972* ___nsArray1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteXml(System.Xml.XmlWriter)
extern "C"  void DataSet_WriteXml_m3261741713 (DataSet_t3097402844 * __this, XmlWriter_t1048088568 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteXml(System.Xml.XmlWriter,System.Data.XmlWriteMode)
extern "C"  void DataSet_WriteXml_m2215249435 (DataSet_t3097402844 * __this, XmlWriter_t1048088568 * ___writer0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::ReadXmlSchema(System.IO.TextReader)
extern "C"  void DataSet_ReadXmlSchema_m1454591420 (DataSet_t3097402844 * __this, TextReader_t1561828458 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::ReadXmlSchema(System.Xml.XmlReader)
extern "C"  void DataSet_ReadXmlSchema_m197103709 (DataSet_t3097402844 * __this, XmlReader_t3675626668 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.XmlReadMode System.Data.DataSet::ReadXml(System.Xml.XmlReader)
extern "C"  int32_t DataSet_ReadXml_m1331279508 (DataSet_t3097402844 * __this, XmlReader_t3675626668 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.XmlReadMode System.Data.DataSet::ReadXml(System.IO.TextReader,System.Data.XmlReadMode)
extern "C"  int32_t DataSet_ReadXml_m2895269194 (DataSet_t3097402844 * __this, TextReader_t1561828458 * ___reader0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.XmlReadMode System.Data.DataSet::ReadXml(System.Xml.XmlReader,System.Data.XmlReadMode)
extern "C"  int32_t DataSet_ReadXml_m1687787759 (DataSet_t3097402844 * __this, XmlReader_t3675626668 * ___reader0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataSet::get_InitInProgress()
extern "C"  bool DataSet_get_InitInProgress_m2235691486 (DataSet_t3097402844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DataSet_GetObjectData_m1658932847 (DataSet_t3097402844 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::GetSerializationData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DataSet_GetSerializationData_m1534592590 (DataSet_t3097402844 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::ReadXmlSerializable(System.Xml.XmlReader)
extern "C"  void DataSet_ReadXmlSerializable_m3088814177 (DataSet_t3097402844 * __this, XmlReader_t3675626668 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::OnMergeFailed(System.Data.MergeFailedEventArgs)
extern "C"  void DataSet_OnMergeFailed_m1891966662 (DataSet_t3097402844 * __this, MergeFailedEventArgs_t1148725902 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::RaisePropertyChanging(System.String)
extern "C"  void DataSet_RaisePropertyChanging_m362822801 (DataSet_t3097402844 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataSet::WriteObjectXml(System.Object)
extern "C"  String_t* DataSet_WriteObjectXml_m303333873 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteTables(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.Data.DataTableCollection,System.Data.DataRowVersion)
extern "C"  void DataSet_WriteTables_m2033711251 (DataSet_t3097402844 * __this, XmlWriter_t1048088568 * ___writer0, int32_t ___mode1, DataTableCollection_t787171642 * ___tableCollection2, int32_t ___version3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteTable(System.Xml.XmlWriter,System.Data.DataTable,System.Data.XmlWriteMode,System.Data.DataRowVersion)
extern "C"  void DataSet_WriteTable_m3821859254 (Il2CppObject * __this /* static, unused */, XmlWriter_t1048088568 * ___writer0, DataTable_t3267612424 * ___table1, int32_t ___mode2, int32_t ___version3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteTable(System.Xml.XmlWriter,System.Data.DataRow[],System.Data.XmlWriteMode,System.Data.DataRowVersion,System.Boolean)
extern "C"  void DataSet_WriteTable_m1770836515 (Il2CppObject * __this /* static, unused */, XmlWriter_t1048088568 * ___writer0, DataRowU5BU5D_t3318761029* ___rows1, int32_t ___mode2, int32_t ___version3, bool ___skipIfNested4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteColumnAsElement(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.Data.DataColumn,System.Data.DataRow,System.Data.DataRowVersion)
extern "C"  void DataSet_WriteColumnAsElement_m1114127161 (Il2CppObject * __this /* static, unused */, XmlWriter_t1048088568 * ___writer0, int32_t ___mode1, DataColumn_t2152532948 * ___col2, DataRow_t321465356 * ___row3, int32_t ___version4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteColumnAsAttribute(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.Data.DataColumn,System.Data.DataRow,System.Data.DataRowVersion)
extern "C"  void DataSet_WriteColumnAsAttribute_m3950754915 (Il2CppObject * __this /* static, unused */, XmlWriter_t1048088568 * ___writer0, int32_t ___mode1, DataColumn_t2152532948 * ___col2, DataRow_t321465356 * ___row3, int32_t ___version4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteTableElement(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.Data.DataTable,System.Data.DataRow,System.Data.DataRowVersion)
extern "C"  void DataSet_WriteTableElement_m3433211047 (Il2CppObject * __this /* static, unused */, XmlWriter_t1048088568 * ___writer0, int32_t ___mode1, DataTable_t3267612424 * ___table2, DataRow_t321465356 * ___row3, int32_t ___version4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteStartElement(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.String,System.String,System.String)
extern "C"  void DataSet_WriteStartElement_m1198324208 (Il2CppObject * __this /* static, unused */, XmlWriter_t1048088568 * ___writer0, int32_t ___mode1, String_t* ___nspc2, String_t* ___prefix3, String_t* ___name4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteAttributeString(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.String,System.String,System.String,System.String)
extern "C"  void DataSet_WriteAttributeString_m2590713299 (Il2CppObject * __this /* static, unused */, XmlWriter_t1048088568 * ___writer0, int32_t ___mode1, String_t* ___nspc2, String_t* ___prefix3, String_t* ___name4, String_t* ___stringValue5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteIndividualTableContent(System.Xml.XmlWriter,System.Data.DataTable,System.Data.XmlWriteMode)
extern "C"  void DataSet_WriteIndividualTableContent_m714692103 (DataSet_t3097402844 * __this, XmlWriter_t1048088568 * ___writer0, DataTable_t3267612424 * ___table1, int32_t ___mode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::DoWriteXmlSchema(System.Xml.XmlWriter)
extern "C"  void DataSet_DoWriteXmlSchema_m1443107091 (DataSet_t3097402844 * __this, XmlWriter_t1048088568 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::SplitColumns(System.Data.DataTable,System.Collections.ArrayList&,System.Collections.ArrayList&,System.Data.DataColumn&)
extern "C"  void DataSet_SplitColumns_m1435666352 (Il2CppObject * __this /* static, unused */, DataTable_t3267612424 * ___table0, ArrayList_t4252133567 ** ___atts1, ArrayList_t4252133567 ** ___elements2, DataColumn_t2152532948 ** ___simple3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteDiffGramElement(System.Xml.XmlWriter)
extern "C"  void DataSet_WriteDiffGramElement_m2731002698 (Il2CppObject * __this /* static, unused */, XmlWriter_t1048088568 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::SetRowsID()
extern "C"  void DataSet_SetRowsID_m4117219233 (DataSet_t3097402844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SerializationFormat System.Data.DataSet::get_RemotingFormat()
extern "C"  int32_t DataSet_get_RemotingFormat_m165050203 (DataSet_t3097402844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SchemaSerializationMode System.Data.DataSet::get_SchemaSerializationMode()
extern "C"  int32_t DataSet_get_SchemaSerializationMode_m3449513530 (DataSet_t3097402844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaComplexType System.Data.DataSet::GetDataSetSchema(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlSchemaComplexType_t4086789226 * DataSet_GetDataSetSchema_m1305842303 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t313318308 * ___schemaSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::BinarySerialize(System.Runtime.Serialization.SerializationInfo)
extern "C"  void DataSet_BinarySerialize_m147618859 (DataSet_t3097402844 * __this, SerializationInfo_t228987430 * ___si0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::BinaryDeserialize(System.Runtime.Serialization.SerializationInfo)
extern "C"  void DataSet_BinaryDeserialize_m2483280828 (DataSet_t3097402844 * __this, SerializationInfo_t228987430 * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataSet::IsBinarySerialized(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  bool DataSet_IsBinarySerialized_m4235768187 (DataSet_t3097402844 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
