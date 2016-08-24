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

// System.Data.XmlSchemaWriter
struct XmlSchemaWriter_t3154544541;
// System.Data.DataSet
struct DataSet_t3097402844;
// System.Xml.XmlWriter
struct XmlWriter_t1048088568;
// System.Data.DataTableCollection
struct DataTableCollection_t787171642;
// System.Data.DataRelationCollection
struct DataRelationCollection_t3958690162;
// System.Data.DataTable[]
struct DataTableU5BU5D_t2488609753;
// System.Data.DataRelation[]
struct DataRelationU5BU5D_t241182369;
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.Data.DataRelation
struct DataRelation_t790111712;
// System.Data.UniqueConstraint
struct UniqueConstraint_t3624508568;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Data.PropertyCollection
struct PropertyCollection_t2281048903;
// System.Data.DataTable
struct DataTable_t3267612424;
// System.Data.DataColumn
struct DataColumn_t2152532948;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t1944712516;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t3458713452;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataSet3097402844.h"
#include "System_Xml_System_Xml_XmlWriter1048088568.h"
#include "System_Data_System_Data_DataTableCollection787171642.h"
#include "System_Data_System_Data_DataRelationCollection3958690162.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "System_Data_System_Data_DataRelation790111712.h"
#include "System_Data_System_Data_UniqueConstraint3624508568.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"
#include "System_Data_System_Data_PropertyCollection2281048903.h"
#include "System_Data_System_Data_DataTable3267612424.h"
#include "System_Data_System_Data_DataColumn2152532948.h"
#include "System_Xml_System_Xml_XmlQualifiedName1944712516.h"
#include "System_System_Collections_Specialized_ListDictiona3458713452.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void System.Data.XmlSchemaWriter::.ctor(System.Data.DataSet,System.Xml.XmlWriter,System.Data.DataTableCollection,System.Data.DataRelationCollection)
extern "C"  void XmlSchemaWriter__ctor_m2062041539 (XmlSchemaWriter_t3154544541 * __this, DataSet_t3097402844 * ___dataset0, XmlWriter_t1048088568 * ___writer1, DataTableCollection_t787171642 * ___tables2, DataRelationCollection_t3958690162 * ___relations3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::.ctor(System.Xml.XmlWriter,System.Data.DataTable[],System.Data.DataRelation[],System.String,System.String,System.Globalization.CultureInfo)
extern "C"  void XmlSchemaWriter__ctor_m2527119386 (XmlSchemaWriter_t3154544541 * __this, XmlWriter_t1048088568 * ___writer0, DataTableU5BU5D_t2488609753* ___tables1, DataRelationU5BU5D_t241182369* ___relations2, String_t* ___mainDataTable3, String_t* ___dataSetName4, CultureInfo_t3500843524 * ___locale5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteXmlSchema(System.Data.DataSet,System.Xml.XmlWriter)
extern "C"  void XmlSchemaWriter_WriteXmlSchema_m4230186502 (Il2CppObject * __this /* static, unused */, DataSet_t3097402844 * ___dataset0, XmlWriter_t1048088568 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteXmlSchema(System.Data.DataSet,System.Xml.XmlWriter,System.Data.DataTableCollection,System.Data.DataRelationCollection)
extern "C"  void XmlSchemaWriter_WriteXmlSchema_m556424756 (Il2CppObject * __this /* static, unused */, DataSet_t3097402844 * ___dataset0, XmlWriter_t1048088568 * ___writer1, DataTableCollection_t787171642 * ___tables2, DataRelationCollection_t3958690162 * ___relations3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteXmlSchema(System.Xml.XmlWriter,System.Data.DataTable[],System.Data.DataRelation[],System.String,System.String,System.Globalization.CultureInfo)
extern "C"  void XmlSchemaWriter_WriteXmlSchema_m1787532919 (Il2CppObject * __this /* static, unused */, XmlWriter_t1048088568 * ___writer0, DataTableU5BU5D_t2488609753* ___tables1, DataRelationU5BU5D_t241182369* ___relations2, String_t* ___mainDataTable3, String_t* ___dataSetName4, CultureInfo_t3500843524 * ___locale5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.XmlSchemaWriter::get_ConstraintPrefix()
extern "C"  String_t* XmlSchemaWriter_get_ConstraintPrefix_m342989415 (XmlSchemaWriter_t3154544541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteSchema()
extern "C"  void XmlSchemaWriter_WriteSchema_m3676814214 (XmlSchemaWriter_t3154544541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteDataSetElement()
extern "C"  void XmlSchemaWriter_WriteDataSetElement_m1173938991 (XmlSchemaWriter_t3154544541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteDataRelationAnnotation(System.Data.DataRelation)
extern "C"  void XmlSchemaWriter_WriteDataRelationAnnotation_m230288925 (XmlSchemaWriter_t3154544541 * __this, DataRelation_t790111712 * ___rel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteConstraints()
extern "C"  void XmlSchemaWriter_WriteConstraints_m3833857977 (XmlSchemaWriter_t3154544541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::AddUniqueConstraints(System.Data.UniqueConstraint,System.Collections.ArrayList)
extern "C"  void XmlSchemaWriter_AddUniqueConstraints_m82650008 (XmlSchemaWriter_t3154544541 * __this, UniqueConstraint_t3624508568 * ___uniq0, ArrayList_t4252133567 * ___names1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::AddForeignKeys(System.Data.DataRelation,System.Collections.ArrayList,System.Boolean)
extern "C"  void XmlSchemaWriter_AddForeignKeys_m1204299886 (XmlSchemaWriter_t3154544541 * __this, DataRelation_t790111712 * ___rel0, ArrayList_t4252133567 * ___names1, bool ___isConstraintOnly2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.XmlSchemaWriter::CheckExtendedPropertyExists(System.Data.DataTable[],System.Data.DataRelation[])
extern "C"  bool XmlSchemaWriter_CheckExtendedPropertyExists_m2330619378 (XmlSchemaWriter_t3154544541 * __this, DataTableU5BU5D_t2488609753* ___tables0, DataRelationU5BU5D_t241182369* ___relations1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::AddExtendedPropertyAttributes(System.Data.PropertyCollection)
extern "C"  void XmlSchemaWriter_AddExtendedPropertyAttributes_m1345973024 (XmlSchemaWriter_t3154544541 * __this, PropertyCollection_t2281048903 * ___props0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteTableElement(System.Data.DataTable)
extern "C"  void XmlSchemaWriter_WriteTableElement_m2458967300 (XmlSchemaWriter_t3154544541 * __this, DataTable_t3267612424 * ___table0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteTableType(System.Data.DataTable)
extern "C"  void XmlSchemaWriter_WriteTableType_m2045223376 (XmlSchemaWriter_t3154544541 * __this, DataTable_t3267612424 * ___table0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteTableTypeParticles(System.Data.DataColumn)
extern "C"  void XmlSchemaWriter_WriteTableTypeParticles_m3379552289 (XmlSchemaWriter_t3154544541 * __this, DataColumn_t2152532948 * ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteChildRelations(System.Data.DataRelation)
extern "C"  void XmlSchemaWriter_WriteChildRelations_m3087819407 (XmlSchemaWriter_t3154544541 * __this, DataRelation_t790111712 * ___rel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteTableAttributes(System.Collections.ArrayList)
extern "C"  void XmlSchemaWriter_WriteTableAttributes_m2303297061 (XmlSchemaWriter_t3154544541 * __this, ArrayList_t4252133567 * ___atts0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteSimpleType(System.Data.DataColumn)
extern "C"  void XmlSchemaWriter_WriteSimpleType_m200645530 (XmlSchemaWriter_t3154544541 * __this, DataColumn_t2152532948 * ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteQName(System.Xml.XmlQualifiedName)
extern "C"  void XmlSchemaWriter_WriteQName_m4053048853 (XmlSchemaWriter_t3154544541 * __this, XmlQualifiedName_t1944712516 * ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::CheckNamespace(System.String,System.String,System.Collections.Specialized.ListDictionary,System.Collections.Specialized.ListDictionary)
extern "C"  void XmlSchemaWriter_CheckNamespace_m674073411 (XmlSchemaWriter_t3154544541 * __this, String_t* ___prefix0, String_t* ___ns1, ListDictionary_t3458713452 * ___names2, ListDictionary_t3458713452 * ___includes3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::HandleExternalNamespace(System.String,System.String,System.Collections.Specialized.ListDictionary)
extern "C"  void XmlSchemaWriter_HandleExternalNamespace_m1890995597 (XmlSchemaWriter_t3154544541 * __this, String_t* ___prefix0, String_t* ___ns1, ListDictionary_t3458713452 * ___includes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.XmlSchemaWriter::MapType(System.Type)
extern "C"  XmlQualifiedName_t1944712516 * XmlSchemaWriter_MapType_m799364116 (XmlSchemaWriter_t3154544541 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
