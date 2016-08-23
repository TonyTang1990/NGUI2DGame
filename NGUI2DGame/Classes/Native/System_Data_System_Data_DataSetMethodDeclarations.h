#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.DataSet
struct DataSet_t346;
// System.String
struct String_t;
// System.Data.PropertyCollection
struct PropertyCollection_t897;
// System.Globalization.CultureInfo
struct CultureInfo_t693;
// System.Data.DataRelationCollection
struct DataRelationCollection_t923;
// System.ComponentModel.ISite
struct ISite_t934;
// System.Data.DataTableCollection
struct DataTableCollection_t348;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t669;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Xml.XmlWriter
struct XmlWriter_t1056;
// System.Collections.Hashtable
struct Hashtable_t915;
// System.Data.DataTable
struct DataTable_t296;
// System.Data.DataRow
struct DataRow_t352;
// System.Xml.XmlDocument
struct XmlDocument_t978;
// System.String[]
struct StringU5BU5D_t258;
// System.IO.TextReader
struct TextReader_t1101;
// System.Data.MergeFailedEventArgs
struct MergeFailedEventArgs_t950;
// System.Object
struct Object_t;
// System.Data.DataRow[]
struct DataRowU5BU5D_t883;
// System.Data.DataColumn
struct DataColumn_t858;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t1052;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t1102;
// System.Data.SerializationFormat
#include "System_Data_System_Data_SerializationFormat.h"
// System.Data.SchemaSerializationMode
#include "System_Data_System_Data_SchemaSerializationMode.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Data.MissingSchemaAction
#include "System_Data_System_Data_MissingSchemaAction.h"
// System.Data.DataRowState
#include "System_Data_System_Data_DataRowState.h"
// System.Data.XmlWriteMode
#include "System_Data_System_Data_XmlWriteMode.h"
// System.Data.XmlReadMode
#include "System_Data_System_Data_XmlReadMode.h"
// System.Data.DataRowVersion
#include "System_Data_System_Data_DataRowVersion.h"

// System.Void System.Data.DataSet::.ctor()
extern "C" void DataSet__ctor_m3577 (DataSet_t346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::.ctor(System.String)
extern "C" void DataSet__ctor_m3914 (DataSet_t346 * __this, String_t* ___dataSetName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DataSet__ctor_m3915 (DataSet_t346 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C" void DataSet_System_Xml_Serialization_IXmlSerializable_ReadXml_m3916 (DataSet_t346 * __this, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C" void DataSet_System_Xml_Serialization_IXmlSerializable_WriteXml_m3917 (DataSet_t346 * __this, XmlWriter_t1056 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataSet::get_CaseSensitive()
extern "C" bool DataSet_get_CaseSensitive_m3918 (DataSet_t346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::set_CaseSensitive(System.Boolean)
extern "C" void DataSet_set_CaseSensitive_m3919 (DataSet_t346 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataSet::get_DataSetName()
extern "C" String_t* DataSet_get_DataSetName_m3920 (DataSet_t346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::set_DataSetName(System.String)
extern "C" void DataSet_set_DataSetName_m3921 (DataSet_t346 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataSet::get_EnforceConstraints()
extern "C" bool DataSet_get_EnforceConstraints_m3922 (DataSet_t346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::set_EnforceConstraints(System.Boolean)
extern "C" void DataSet_set_EnforceConstraints_m3923 (DataSet_t346 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.PropertyCollection System.Data.DataSet::get_ExtendedProperties()
extern "C" PropertyCollection_t897 * DataSet_get_ExtendedProperties_m3924 (DataSet_t346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Data.DataSet::get_Locale()
extern "C" CultureInfo_t693 * DataSet_get_Locale_m3925 (DataSet_t346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::set_Locale(System.Globalization.CultureInfo)
extern "C" void DataSet_set_Locale_m3926 (DataSet_t346 * __this, CultureInfo_t693 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataSet::get_LocaleSpecified()
extern "C" bool DataSet_get_LocaleSpecified_m3927 (DataSet_t346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::InternalEnforceConstraints(System.Boolean,System.Boolean)
extern "C" void DataSet_InternalEnforceConstraints_m3928 (DataSet_t346 * __this, bool ___value, bool ___resetIndexes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::Merge(System.Data.DataSet,System.Boolean,System.Data.MissingSchemaAction)
extern "C" void DataSet_Merge_m3929 (DataSet_t346 * __this, DataSet_t346 * ___dataSet, bool ___preserveChanges, int32_t ___missingSchemaAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataSet::IsLegalSchemaAction(System.Data.MissingSchemaAction)
extern "C" bool DataSet_IsLegalSchemaAction_m3930 (Object_t * __this /* static, unused */, int32_t ___missingSchemaAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataSet::get_Namespace()
extern "C" String_t* DataSet_get_Namespace_m3931 (DataSet_t346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::set_Namespace(System.String)
extern "C" void DataSet_set_Namespace_m3932 (DataSet_t346 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataSet::get_Prefix()
extern "C" String_t* DataSet_get_Prefix_m3933 (DataSet_t346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::set_Prefix(System.String)
extern "C" void DataSet_set_Prefix_m3934 (DataSet_t346 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelationCollection System.Data.DataSet::get_Relations()
extern "C" DataRelationCollection_t923 * DataSet_get_Relations_m3935 (DataSet_t346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ISite System.Data.DataSet::get_Site()
extern "C" Object_t * DataSet_get_Site_m3936 (DataSet_t346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::set_Site(System.ComponentModel.ISite)
extern "C" void DataSet_set_Site_m3937 (DataSet_t346 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTableCollection System.Data.DataSet::get_Tables()
extern "C" DataTableCollection_t348 * DataSet_get_Tables_m1823 (DataSet_t346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::AcceptChanges()
extern "C" void DataSet_AcceptChanges_m3581 (DataSet_t346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSet System.Data.DataSet::Clone()
extern "C" DataSet_t346 * DataSet_Clone_m3938 (DataSet_t346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::CopyProperties(System.Data.DataSet)
extern "C" void DataSet_CopyProperties_m3939 (DataSet_t346 * __this, DataSet_t346 * ___Copy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::CopyRelations(System.Data.DataSet)
extern "C" void DataSet_CopyRelations_m3940 (DataSet_t346 * __this, DataSet_t346 * ___Copy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSet System.Data.DataSet::GetChanges(System.Data.DataRowState)
extern "C" DataSet_t346 * DataSet_GetChanges_m3941 (DataSet_t346 * __this, int32_t ___rowStates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::AddChangedRow(System.Collections.Hashtable,System.Data.DataTable,System.Data.DataRow)
extern "C" void DataSet_AddChangedRow_m3942 (DataSet_t346 * __this, Hashtable_t915 * ___addedRows, DataTable_t296 * ___copyTable, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataSet::HasChanges(System.Data.DataRowState)
extern "C" bool DataSet_HasChanges_m3943 (DataSet_t346 * __this, int32_t ___rowStates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::InferXmlSchema(System.Xml.XmlDocument,System.String[])
extern "C" void DataSet_InferXmlSchema_m3944 (DataSet_t346 * __this, XmlDocument_t978 * ___doc, StringU5BU5D_t258* ___nsArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteXml(System.Xml.XmlWriter)
extern "C" void DataSet_WriteXml_m3945 (DataSet_t346 * __this, XmlWriter_t1056 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteXml(System.Xml.XmlWriter,System.Data.XmlWriteMode)
extern "C" void DataSet_WriteXml_m3946 (DataSet_t346 * __this, XmlWriter_t1056 * ___writer, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::ReadXmlSchema(System.IO.TextReader)
extern "C" void DataSet_ReadXmlSchema_m3947 (DataSet_t346 * __this, TextReader_t1101 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::ReadXmlSchema(System.Xml.XmlReader)
extern "C" void DataSet_ReadXmlSchema_m3948 (DataSet_t346 * __this, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.XmlReadMode System.Data.DataSet::ReadXml(System.Xml.XmlReader)
extern "C" int32_t DataSet_ReadXml_m3949 (DataSet_t346 * __this, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.XmlReadMode System.Data.DataSet::ReadXml(System.IO.TextReader,System.Data.XmlReadMode)
extern "C" int32_t DataSet_ReadXml_m3950 (DataSet_t346 * __this, TextReader_t1101 * ___reader, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.XmlReadMode System.Data.DataSet::ReadXml(System.Xml.XmlReader,System.Data.XmlReadMode)
extern "C" int32_t DataSet_ReadXml_m3951 (DataSet_t346 * __this, XmlReader_t843 * ___reader, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataSet::get_InitInProgress()
extern "C" bool DataSet_get_InitInProgress_m3952 (DataSet_t346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DataSet_GetObjectData_m3953 (DataSet_t346 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::GetSerializationData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DataSet_GetSerializationData_m3954 (DataSet_t346 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::ReadXmlSerializable(System.Xml.XmlReader)
extern "C" void DataSet_ReadXmlSerializable_m3955 (DataSet_t346 * __this, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::OnMergeFailed(System.Data.MergeFailedEventArgs)
extern "C" void DataSet_OnMergeFailed_m3956 (DataSet_t346 * __this, MergeFailedEventArgs_t950 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::RaisePropertyChanging(System.String)
extern "C" void DataSet_RaisePropertyChanging_m3957 (DataSet_t346 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataSet::WriteObjectXml(System.Object)
extern "C" String_t* DataSet_WriteObjectXml_m3958 (Object_t * __this /* static, unused */, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteTables(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.Data.DataTableCollection,System.Data.DataRowVersion)
extern "C" void DataSet_WriteTables_m3959 (DataSet_t346 * __this, XmlWriter_t1056 * ___writer, int32_t ___mode, DataTableCollection_t348 * ___tableCollection, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteTable(System.Xml.XmlWriter,System.Data.DataTable,System.Data.XmlWriteMode,System.Data.DataRowVersion)
extern "C" void DataSet_WriteTable_m3960 (Object_t * __this /* static, unused */, XmlWriter_t1056 * ___writer, DataTable_t296 * ___table, int32_t ___mode, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteTable(System.Xml.XmlWriter,System.Data.DataRow[],System.Data.XmlWriteMode,System.Data.DataRowVersion,System.Boolean)
extern "C" void DataSet_WriteTable_m3961 (Object_t * __this /* static, unused */, XmlWriter_t1056 * ___writer, DataRowU5BU5D_t883* ___rows, int32_t ___mode, int32_t ___version, bool ___skipIfNested, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteColumnAsElement(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.Data.DataColumn,System.Data.DataRow,System.Data.DataRowVersion)
extern "C" void DataSet_WriteColumnAsElement_m3962 (Object_t * __this /* static, unused */, XmlWriter_t1056 * ___writer, int32_t ___mode, DataColumn_t858 * ___col, DataRow_t352 * ___row, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteColumnAsAttribute(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.Data.DataColumn,System.Data.DataRow,System.Data.DataRowVersion)
extern "C" void DataSet_WriteColumnAsAttribute_m3963 (Object_t * __this /* static, unused */, XmlWriter_t1056 * ___writer, int32_t ___mode, DataColumn_t858 * ___col, DataRow_t352 * ___row, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteTableElement(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.Data.DataTable,System.Data.DataRow,System.Data.DataRowVersion)
extern "C" void DataSet_WriteTableElement_m3964 (Object_t * __this /* static, unused */, XmlWriter_t1056 * ___writer, int32_t ___mode, DataTable_t296 * ___table, DataRow_t352 * ___row, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteStartElement(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.String,System.String,System.String)
extern "C" void DataSet_WriteStartElement_m3965 (Object_t * __this /* static, unused */, XmlWriter_t1056 * ___writer, int32_t ___mode, String_t* ___nspc, String_t* ___prefix, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteAttributeString(System.Xml.XmlWriter,System.Data.XmlWriteMode,System.String,System.String,System.String,System.String)
extern "C" void DataSet_WriteAttributeString_m3966 (Object_t * __this /* static, unused */, XmlWriter_t1056 * ___writer, int32_t ___mode, String_t* ___nspc, String_t* ___prefix, String_t* ___name, String_t* ___stringValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteIndividualTableContent(System.Xml.XmlWriter,System.Data.DataTable,System.Data.XmlWriteMode)
extern "C" void DataSet_WriteIndividualTableContent_m3967 (DataSet_t346 * __this, XmlWriter_t1056 * ___writer, DataTable_t296 * ___table, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::DoWriteXmlSchema(System.Xml.XmlWriter)
extern "C" void DataSet_DoWriteXmlSchema_m3968 (DataSet_t346 * __this, XmlWriter_t1056 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::SplitColumns(System.Data.DataTable,System.Collections.ArrayList&,System.Collections.ArrayList&,System.Data.DataColumn&)
extern "C" void DataSet_SplitColumns_m3969 (Object_t * __this /* static, unused */, DataTable_t296 * ___table, ArrayList_t913 ** ___atts, ArrayList_t913 ** ___elements, DataColumn_t858 ** ___simple, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::WriteDiffGramElement(System.Xml.XmlWriter)
extern "C" void DataSet_WriteDiffGramElement_m3970 (Object_t * __this /* static, unused */, XmlWriter_t1056 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::SetRowsID()
extern "C" void DataSet_SetRowsID_m3971 (DataSet_t346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SerializationFormat System.Data.DataSet::get_RemotingFormat()
extern "C" int32_t DataSet_get_RemotingFormat_m3972 (DataSet_t346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SchemaSerializationMode System.Data.DataSet::get_SchemaSerializationMode()
extern "C" int32_t DataSet_get_SchemaSerializationMode_m3973 (DataSet_t346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaComplexType System.Data.DataSet::GetDataSetSchema(System.Xml.Schema.XmlSchemaSet)
extern "C" XmlSchemaComplexType_t1052 * DataSet_GetDataSetSchema_m3974 (Object_t * __this /* static, unused */, XmlSchemaSet_t1102 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::BinarySerialize(System.Runtime.Serialization.SerializationInfo)
extern "C" void DataSet_BinarySerialize_m3975 (DataSet_t346 * __this, SerializationInfo_t669 * ___si, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataSet::BinaryDeserialize(System.Runtime.Serialization.SerializationInfo)
extern "C" void DataSet_BinaryDeserialize_m3976 (DataSet_t346 * __this, SerializationInfo_t669 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataSet::IsBinarySerialized(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" bool DataSet_IsBinarySerialized_m3977 (DataSet_t346 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
