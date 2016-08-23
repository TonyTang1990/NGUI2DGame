#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.XmlDataInferenceLoader
struct XmlDataInferenceLoader_t980;
// System.Data.DataSet
struct DataSet_t346;
// System.Xml.XmlDocument
struct XmlDocument_t978;
// System.String[]
struct StringU5BU5D_t258;
// System.Xml.XmlElement
struct XmlElement_t1103;
// System.Data.TableMapping
struct TableMapping_t977;
// System.String
struct String_t;
// System.Data.DataColumn
struct DataColumn_t858;
// System.Type
struct Type_t;
// System.Collections.Hashtable
struct Hashtable_t915;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Data.XmlReadMode
#include "System_Data_System_Data_XmlReadMode.h"
// System.Data.MappingType
#include "System_Data_System_Data_MappingType.h"
// System.Data.ElementMappingType
#include "System_Data_System_Data_ElementMappingType.h"

// System.Void System.Data.XmlDataInferenceLoader::.ctor(System.Data.DataSet,System.Xml.XmlDocument,System.Data.XmlReadMode,System.String[])
extern "C" void XmlDataInferenceLoader__ctor_m4218 (XmlDataInferenceLoader_t980 * __this, DataSet_t346 * ___ds, XmlDocument_t978 * ___doc, int32_t ___mode, StringU5BU5D_t258* ___ignoredNamespaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::Infer(System.Data.DataSet,System.Xml.XmlDocument,System.Data.XmlReadMode,System.String[])
extern "C" void XmlDataInferenceLoader_Infer_m4219 (Object_t * __this /* static, unused */, DataSet_t346 * ___dataset, XmlDocument_t978 * ___document, int32_t ___mode, StringU5BU5D_t258* ___ignoredNamespaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::ReadXml()
extern "C" void XmlDataInferenceLoader_ReadXml_m4220 (XmlDataInferenceLoader_t980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::InferTopLevelTable(System.Xml.XmlElement)
extern "C" void XmlDataInferenceLoader_InferTopLevelTable_m4221 (XmlDataInferenceLoader_t980 * __this, XmlElement_t1103 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::InferColumnElement(System.Data.TableMapping,System.Xml.XmlElement)
extern "C" void XmlDataInferenceLoader_InferColumnElement_m4222 (XmlDataInferenceLoader_t980 * __this, TableMapping_t977 * ___table, XmlElement_t1103 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::CheckExtraneousElementColumn(System.Data.TableMapping,System.Xml.XmlElement)
extern "C" void XmlDataInferenceLoader_CheckExtraneousElementColumn_m4223 (XmlDataInferenceLoader_t980 * __this, TableMapping_t977 * ___parentTable, XmlElement_t1103 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::PopulatePrimaryKey(System.Data.TableMapping)
extern "C" void XmlDataInferenceLoader_PopulatePrimaryKey_m4224 (XmlDataInferenceLoader_t980 * __this, TableMapping_t977 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::PopulateRelationStructure(System.String,System.String,System.String)
extern "C" void XmlDataInferenceLoader_PopulateRelationStructure_m4225 (XmlDataInferenceLoader_t980 * __this, String_t* ___parent, String_t* ___child, String_t* ___pkeyColumn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::InferRepeatedElement(System.Data.TableMapping,System.Xml.XmlElement)
extern "C" void XmlDataInferenceLoader_InferRepeatedElement_m4226 (XmlDataInferenceLoader_t980 * __this, TableMapping_t977 * ___parentTable, XmlElement_t1103 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::InferTableElement(System.Data.TableMapping,System.Xml.XmlElement)
extern "C" void XmlDataInferenceLoader_InferTableElement_m4227 (XmlDataInferenceLoader_t980 * __this, TableMapping_t977 * ___parentTable, XmlElement_t1103 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.TableMapping System.Data.XmlDataInferenceLoader::GetMappedTable(System.Data.TableMapping,System.String,System.String)
extern "C" TableMapping_t977 * XmlDataInferenceLoader_GetMappedTable_m4228 (XmlDataInferenceLoader_t980 * __this, TableMapping_t977 * ___parent, String_t* ___tableName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.XmlDataInferenceLoader::GetMappedColumn(System.Data.TableMapping,System.String,System.String,System.String,System.Data.MappingType,System.Type)
extern "C" DataColumn_t858 * XmlDataInferenceLoader_GetMappedColumn_m4229 (XmlDataInferenceLoader_t980 * __this, TableMapping_t977 * ___table, String_t* ___name, String_t* ___prefix, String_t* ___ns, int32_t ___type, Type_t * ___optColType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::SetAsExistingTable(System.Xml.XmlElement,System.Collections.Hashtable)
extern "C" void XmlDataInferenceLoader_SetAsExistingTable_m4230 (Object_t * __this /* static, unused */, XmlElement_t1103 * ___el, Hashtable_t915 * ___existingTables, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.ElementMappingType System.Data.XmlDataInferenceLoader::GetElementMappingType(System.Xml.XmlElement,System.Collections.ArrayList,System.Collections.Hashtable)
extern "C" int32_t XmlDataInferenceLoader_GetElementMappingType_m4231 (Object_t * __this /* static, unused */, XmlElement_t1103 * ___el, ArrayList_t913 * ___ignoredNamespaces, Hashtable_t915 * ___existingTables, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.XmlDataInferenceLoader::IsDocumentElementTable()
extern "C" bool XmlDataInferenceLoader_IsDocumentElementTable_m4232 (XmlDataInferenceLoader_t980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.XmlDataInferenceLoader::IsDocumentElementTable(System.Xml.XmlElement,System.Collections.ArrayList)
extern "C" bool XmlDataInferenceLoader_IsDocumentElementTable_m4233 (Object_t * __this /* static, unused */, XmlElement_t1103 * ___top, ArrayList_t913 * ___ignoredNamespaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
