#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.XmlSchemaWriter
struct XmlSchemaWriter_t1058;
// System.String
struct String_t;
// System.Data.DataSet
struct DataSet_t346;
// System.Xml.XmlWriter
struct XmlWriter_t1056;
// System.Data.DataTableCollection
struct DataTableCollection_t348;
// System.Data.DataRelationCollection
struct DataRelationCollection_t923;
// System.Data.DataTable[]
struct DataTableU5BU5D_t859;
// System.Data.DataRelation[]
struct DataRelationU5BU5D_t1057;
// System.Globalization.CultureInfo
struct CultureInfo_t693;
// System.Data.DataRelation
struct DataRelation_t921;
// System.Data.UniqueConstraint
struct UniqueConstraint_t918;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Data.PropertyCollection
struct PropertyCollection_t897;
// System.Data.DataTable
struct DataTable_t296;
// System.Data.DataColumn
struct DataColumn_t858;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t985;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t1113;
// System.Type
struct Type_t;

// System.Void System.Data.XmlSchemaWriter::.ctor(System.Data.DataSet,System.Xml.XmlWriter,System.Data.DataTableCollection,System.Data.DataRelationCollection)
extern "C" void XmlSchemaWriter__ctor_m4791 (XmlSchemaWriter_t1058 * __this, DataSet_t346 * ___dataset, XmlWriter_t1056 * ___writer, DataTableCollection_t348 * ___tables, DataRelationCollection_t923 * ___relations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::.ctor(System.Xml.XmlWriter,System.Data.DataTable[],System.Data.DataRelation[],System.String,System.String,System.Globalization.CultureInfo)
extern "C" void XmlSchemaWriter__ctor_m4792 (XmlSchemaWriter_t1058 * __this, XmlWriter_t1056 * ___writer, DataTableU5BU5D_t859* ___tables, DataRelationU5BU5D_t1057* ___relations, String_t* ___mainDataTable, String_t* ___dataSetName, CultureInfo_t693 * ___locale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteXmlSchema(System.Data.DataSet,System.Xml.XmlWriter)
extern "C" void XmlSchemaWriter_WriteXmlSchema_m4793 (Object_t * __this /* static, unused */, DataSet_t346 * ___dataset, XmlWriter_t1056 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteXmlSchema(System.Data.DataSet,System.Xml.XmlWriter,System.Data.DataTableCollection,System.Data.DataRelationCollection)
extern "C" void XmlSchemaWriter_WriteXmlSchema_m4794 (Object_t * __this /* static, unused */, DataSet_t346 * ___dataset, XmlWriter_t1056 * ___writer, DataTableCollection_t348 * ___tables, DataRelationCollection_t923 * ___relations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteXmlSchema(System.Xml.XmlWriter,System.Data.DataTable[],System.Data.DataRelation[],System.String,System.String,System.Globalization.CultureInfo)
extern "C" void XmlSchemaWriter_WriteXmlSchema_m4795 (Object_t * __this /* static, unused */, XmlWriter_t1056 * ___writer, DataTableU5BU5D_t859* ___tables, DataRelationU5BU5D_t1057* ___relations, String_t* ___mainDataTable, String_t* ___dataSetName, CultureInfo_t693 * ___locale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.XmlSchemaWriter::get_ConstraintPrefix()
extern "C" String_t* XmlSchemaWriter_get_ConstraintPrefix_m4796 (XmlSchemaWriter_t1058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteSchema()
extern "C" void XmlSchemaWriter_WriteSchema_m4797 (XmlSchemaWriter_t1058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteDataSetElement()
extern "C" void XmlSchemaWriter_WriteDataSetElement_m4798 (XmlSchemaWriter_t1058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteDataRelationAnnotation(System.Data.DataRelation)
extern "C" void XmlSchemaWriter_WriteDataRelationAnnotation_m4799 (XmlSchemaWriter_t1058 * __this, DataRelation_t921 * ___rel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteConstraints()
extern "C" void XmlSchemaWriter_WriteConstraints_m4800 (XmlSchemaWriter_t1058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::AddUniqueConstraints(System.Data.UniqueConstraint,System.Collections.ArrayList)
extern "C" void XmlSchemaWriter_AddUniqueConstraints_m4801 (XmlSchemaWriter_t1058 * __this, UniqueConstraint_t918 * ___uniq, ArrayList_t913 * ___names, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::AddForeignKeys(System.Data.DataRelation,System.Collections.ArrayList,System.Boolean)
extern "C" void XmlSchemaWriter_AddForeignKeys_m4802 (XmlSchemaWriter_t1058 * __this, DataRelation_t921 * ___rel, ArrayList_t913 * ___names, bool ___isConstraintOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.XmlSchemaWriter::CheckExtendedPropertyExists(System.Data.DataTable[],System.Data.DataRelation[])
extern "C" bool XmlSchemaWriter_CheckExtendedPropertyExists_m4803 (XmlSchemaWriter_t1058 * __this, DataTableU5BU5D_t859* ___tables, DataRelationU5BU5D_t1057* ___relations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::AddExtendedPropertyAttributes(System.Data.PropertyCollection)
extern "C" void XmlSchemaWriter_AddExtendedPropertyAttributes_m4804 (XmlSchemaWriter_t1058 * __this, PropertyCollection_t897 * ___props, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteTableElement(System.Data.DataTable)
extern "C" void XmlSchemaWriter_WriteTableElement_m4805 (XmlSchemaWriter_t1058 * __this, DataTable_t296 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteTableType(System.Data.DataTable)
extern "C" void XmlSchemaWriter_WriteTableType_m4806 (XmlSchemaWriter_t1058 * __this, DataTable_t296 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteTableTypeParticles(System.Data.DataColumn)
extern "C" void XmlSchemaWriter_WriteTableTypeParticles_m4807 (XmlSchemaWriter_t1058 * __this, DataColumn_t858 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteChildRelations(System.Data.DataRelation)
extern "C" void XmlSchemaWriter_WriteChildRelations_m4808 (XmlSchemaWriter_t1058 * __this, DataRelation_t921 * ___rel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteTableAttributes(System.Collections.ArrayList)
extern "C" void XmlSchemaWriter_WriteTableAttributes_m4809 (XmlSchemaWriter_t1058 * __this, ArrayList_t913 * ___atts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteSimpleType(System.Data.DataColumn)
extern "C" void XmlSchemaWriter_WriteSimpleType_m4810 (XmlSchemaWriter_t1058 * __this, DataColumn_t858 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::WriteQName(System.Xml.XmlQualifiedName)
extern "C" void XmlSchemaWriter_WriteQName_m4811 (XmlSchemaWriter_t1058 * __this, XmlQualifiedName_t985 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::CheckNamespace(System.String,System.String,System.Collections.Specialized.ListDictionary,System.Collections.Specialized.ListDictionary)
extern "C" void XmlSchemaWriter_CheckNamespace_m4812 (XmlSchemaWriter_t1058 * __this, String_t* ___prefix, String_t* ___ns, ListDictionary_t1113 * ___names, ListDictionary_t1113 * ___includes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaWriter::HandleExternalNamespace(System.String,System.String,System.Collections.Specialized.ListDictionary)
extern "C" void XmlSchemaWriter_HandleExternalNamespace_m4813 (XmlSchemaWriter_t1058 * __this, String_t* ___prefix, String_t* ___ns, ListDictionary_t1113 * ___includes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.XmlSchemaWriter::MapType(System.Type)
extern "C" XmlQualifiedName_t985 * XmlSchemaWriter_MapType_m4814 (XmlSchemaWriter_t1058 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
