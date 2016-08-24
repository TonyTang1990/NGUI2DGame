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

// System.Data.XmlDataInferenceLoader
struct XmlDataInferenceLoader_t3296888569;
// System.Data.DataSet
struct DataSet_t3097402844;
// System.Xml.XmlDocument
struct XmlDocument_t3649534162;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Xml.XmlElement
struct XmlElement_t2877111883;
// System.Data.TableMapping
struct TableMapping_t1812080488;
// System.String
struct String_t;
// System.Data.DataColumn
struct DataColumn_t2152532948;
// System.Type
struct Type_t;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Collections.ArrayList
struct ArrayList_t4252133567;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataSet3097402844.h"
#include "System_Xml_System_Xml_XmlDocument3649534162.h"
#include "System_Data_System_Data_XmlReadMode2037225274.h"
#include "System_Xml_System_Xml_XmlElement2877111883.h"
#include "System_Data_System_Data_TableMapping1812080488.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Data_System_Data_MappingType2630770062.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Collections_Hashtable909839986.h"
#include "System_Data_System_Data_ElementMappingType2128901752.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"

// System.Void System.Data.XmlDataInferenceLoader::.ctor(System.Data.DataSet,System.Xml.XmlDocument,System.Data.XmlReadMode,System.String[])
extern "C"  void XmlDataInferenceLoader__ctor_m684950188 (XmlDataInferenceLoader_t3296888569 * __this, DataSet_t3097402844 * ___ds0, XmlDocument_t3649534162 * ___doc1, int32_t ___mode2, StringU5BU5D_t1642385972* ___ignoredNamespaces3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::Infer(System.Data.DataSet,System.Xml.XmlDocument,System.Data.XmlReadMode,System.String[])
extern "C"  void XmlDataInferenceLoader_Infer_m1499156976 (Il2CppObject * __this /* static, unused */, DataSet_t3097402844 * ___dataset0, XmlDocument_t3649534162 * ___document1, int32_t ___mode2, StringU5BU5D_t1642385972* ___ignoredNamespaces3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::ReadXml()
extern "C"  void XmlDataInferenceLoader_ReadXml_m1308735681 (XmlDataInferenceLoader_t3296888569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::InferTopLevelTable(System.Xml.XmlElement)
extern "C"  void XmlDataInferenceLoader_InferTopLevelTable_m3870977358 (XmlDataInferenceLoader_t3296888569 * __this, XmlElement_t2877111883 * ___el0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::InferColumnElement(System.Data.TableMapping,System.Xml.XmlElement)
extern "C"  void XmlDataInferenceLoader_InferColumnElement_m2314997536 (XmlDataInferenceLoader_t3296888569 * __this, TableMapping_t1812080488 * ___table0, XmlElement_t2877111883 * ___el1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::CheckExtraneousElementColumn(System.Data.TableMapping,System.Xml.XmlElement)
extern "C"  void XmlDataInferenceLoader_CheckExtraneousElementColumn_m1530511180 (XmlDataInferenceLoader_t3296888569 * __this, TableMapping_t1812080488 * ___parentTable0, XmlElement_t2877111883 * ___el1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::PopulatePrimaryKey(System.Data.TableMapping)
extern "C"  void XmlDataInferenceLoader_PopulatePrimaryKey_m1777186904 (XmlDataInferenceLoader_t3296888569 * __this, TableMapping_t1812080488 * ___table0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::PopulateRelationStructure(System.String,System.String,System.String)
extern "C"  void XmlDataInferenceLoader_PopulateRelationStructure_m3876480897 (XmlDataInferenceLoader_t3296888569 * __this, String_t* ___parent0, String_t* ___child1, String_t* ___pkeyColumn2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::InferRepeatedElement(System.Data.TableMapping,System.Xml.XmlElement)
extern "C"  void XmlDataInferenceLoader_InferRepeatedElement_m3736513928 (XmlDataInferenceLoader_t3296888569 * __this, TableMapping_t1812080488 * ___parentTable0, XmlElement_t2877111883 * ___el1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::InferTableElement(System.Data.TableMapping,System.Xml.XmlElement)
extern "C"  void XmlDataInferenceLoader_InferTableElement_m3994945564 (XmlDataInferenceLoader_t3296888569 * __this, TableMapping_t1812080488 * ___parentTable0, XmlElement_t2877111883 * ___el1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.TableMapping System.Data.XmlDataInferenceLoader::GetMappedTable(System.Data.TableMapping,System.String,System.String)
extern "C"  TableMapping_t1812080488 * XmlDataInferenceLoader_GetMappedTable_m352070190 (XmlDataInferenceLoader_t3296888569 * __this, TableMapping_t1812080488 * ___parent0, String_t* ___tableName1, String_t* ___ns2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.XmlDataInferenceLoader::GetMappedColumn(System.Data.TableMapping,System.String,System.String,System.String,System.Data.MappingType,System.Type)
extern "C"  DataColumn_t2152532948 * XmlDataInferenceLoader_GetMappedColumn_m2548924072 (XmlDataInferenceLoader_t3296888569 * __this, TableMapping_t1812080488 * ___table0, String_t* ___name1, String_t* ___prefix2, String_t* ___ns3, int32_t ___type4, Type_t * ___optColType5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlDataInferenceLoader::SetAsExistingTable(System.Xml.XmlElement,System.Collections.Hashtable)
extern "C"  void XmlDataInferenceLoader_SetAsExistingTable_m4015556322 (Il2CppObject * __this /* static, unused */, XmlElement_t2877111883 * ___el0, Hashtable_t909839986 * ___existingTables1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.ElementMappingType System.Data.XmlDataInferenceLoader::GetElementMappingType(System.Xml.XmlElement,System.Collections.ArrayList,System.Collections.Hashtable)
extern "C"  int32_t XmlDataInferenceLoader_GetElementMappingType_m1953279404 (Il2CppObject * __this /* static, unused */, XmlElement_t2877111883 * ___el0, ArrayList_t4252133567 * ___ignoredNamespaces1, Hashtable_t909839986 * ___existingTables2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.XmlDataInferenceLoader::IsDocumentElementTable()
extern "C"  bool XmlDataInferenceLoader_IsDocumentElementTable_m3705770247 (XmlDataInferenceLoader_t3296888569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.XmlDataInferenceLoader::IsDocumentElementTable(System.Xml.XmlElement,System.Collections.ArrayList)
extern "C"  bool XmlDataInferenceLoader_IsDocumentElementTable_m3336876403 (Il2CppObject * __this /* static, unused */, XmlElement_t2877111883 * ___top0, ArrayList_t4252133567 * ___ignoredNamespaces1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
