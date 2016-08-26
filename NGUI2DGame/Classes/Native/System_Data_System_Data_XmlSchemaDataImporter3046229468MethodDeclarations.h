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

// System.Data.XmlSchemaDataImporter
struct XmlSchemaDataImporter_t3046229468;
// System.Data.DataSet
struct DataSet_t3097402844;
// System.Xml.XmlReader
struct XmlReader_t3675626668;
// System.Data.TableAdapterSchemaInfo
struct TableAdapterSchemaInfo_t2137065232;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t2433337156;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3365045970;
// System.Data.DataRelation
struct DataRelation_t790111712;
// System.Data.RelationStructure
struct RelationStructure_t190084897;
// System.Data.DataColumn
struct DataColumn_t2152532948;
// System.Data.DataTable
struct DataTable_t3267612424;
// System.Xml.Schema.XmlSchemaGroupBase
struct XmlSchemaGroupBase_t3811767860;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t1195946242;
// System.Object
struct Il2CppObject;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t4015859774;
// System.Xml.Schema.XmlSchemaAnnotated
struct XmlSchemaAnnotated_t2082486936;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t1944712516;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t248156492;
// System.Type
struct Type_t;
// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t1058613623;
// System.Data.ConstraintStructure
struct ConstraintStructure_t1728327650;
// System.Xml.Schema.XmlSchemaKeyref
struct XmlSchemaKeyref_t1894386400;
// System.Data.UniqueConstraint
struct UniqueConstraint_t3624508568;
// System.Xml.Schema.XmlSchemaAnnotation
struct XmlSchemaAnnotation_t2400301303;
// System.Xml.XmlElement
struct XmlElement_t2877111883;
// System.Data.Common.DbProviderFactory
struct DbProviderFactory_t661609867;
// System.Data.Common.DbCommand
struct DbCommand_t673053565;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Data.Common.DataTableMapping
struct DataTableMapping_t3453937356;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataSet3097402844.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaElement2433337156.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaParticle3365045970.h"
#include "System_Data_System_Data_RelationStructure190084897.h"
#include "System_Data_System_Data_DataColumn2152532948.h"
#include "System_Data_System_Data_DataTable3267612424.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaGroupBase3811767860.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAttribute4015859774.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotated2082486936.h"
#include "System_Xml_System_Xml_XmlQualifiedName1944712516.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSimpleType248156492.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDatatype1195946242.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaIdentityCons1058613623.h"
#include "System_Data_System_Data_ConstraintStructure1728327650.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaKeyref1894386400.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotation2400301303.h"
#include "System_Xml_System_Xml_XmlElement2877111883.h"
#include "System_Data_System_Data_Common_DbProviderFactory661609867.h"
#include "System_Data_System_Data_Common_DataTableMapping3453937356.h"

// System.Void System.Data.XmlSchemaDataImporter::.ctor(System.Data.DataSet,System.Xml.XmlReader,System.Boolean)
extern "C"  void XmlSchemaDataImporter__ctor_m2250537031 (XmlSchemaDataImporter_t3046229468 * __this, DataSet_t3097402844 * ___dataset0, XmlReader_t3675626668 * ___reader1, bool ___forDataSet2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::.cctor()
extern "C"  void XmlSchemaDataImporter__cctor_m1871473624 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.TableAdapterSchemaInfo System.Data.XmlSchemaDataImporter::get_CurrentAdapter()
extern "C"  TableAdapterSchemaInfo_t2137065232 * XmlSchemaDataImporter_get_CurrentAdapter_m696729282 (XmlSchemaDataImporter_t3046229468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::Process()
extern "C"  void XmlSchemaDataImporter_Process_m3959693080 (XmlSchemaDataImporter_t3046229468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.XmlSchemaDataImporter::IsDataSetElement(System.Xml.Schema.XmlSchemaElement)
extern "C"  bool XmlSchemaDataImporter_IsDataSetElement_m1233204986 (XmlSchemaDataImporter_t3046229468 * __this, XmlSchemaElement_t2433337156 * ___el0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.XmlSchemaDataImporter::ContainsColumn(System.Xml.Schema.XmlSchemaParticle)
extern "C"  bool XmlSchemaDataImporter_ContainsColumn_m727096665 (XmlSchemaDataImporter_t3046229468 * __this, XmlSchemaParticle_t3365045970 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessGlobalElement(System.Xml.Schema.XmlSchemaElement)
extern "C"  void XmlSchemaDataImporter_ProcessGlobalElement_m1756234060 (XmlSchemaDataImporter_t3046229468 * __this, XmlSchemaElement_t2433337156 * ___el0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessDataSetElement(System.Xml.Schema.XmlSchemaElement)
extern "C"  void XmlSchemaDataImporter_ProcessDataSetElement_m2121884841 (XmlSchemaDataImporter_t3046229468 * __this, XmlSchemaElement_t2433337156 * ___el0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::HandleDataSetContentTypeParticle(System.Xml.Schema.XmlSchemaParticle)
extern "C"  void XmlSchemaDataImporter_HandleDataSetContentTypeParticle_m4043795765 (XmlSchemaDataImporter_t3046229468 * __this, XmlSchemaParticle_t3365045970 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessDataTableElement(System.Xml.Schema.XmlSchemaElement)
extern "C"  void XmlSchemaDataImporter_ProcessDataTableElement_m2364720669 (XmlSchemaDataImporter_t3046229468 * __this, XmlSchemaElement_t2433337156 * ___el0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelation System.Data.XmlSchemaDataImporter::GenerateRelationship(System.Data.RelationStructure)
extern "C"  DataRelation_t790111712 * XmlSchemaDataImporter_GenerateRelationship_m2045827778 (XmlSchemaDataImporter_t3046229468 * __this, RelationStructure_t190084897 * ___rs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.XmlSchemaDataImporter::CreateChildColumn(System.Data.DataColumn,System.Data.DataTable)
extern "C"  DataColumn_t2152532948 * XmlSchemaDataImporter_CreateChildColumn_m3874934031 (XmlSchemaDataImporter_t3046229468 * __this, DataColumn_t2152532948 * ___parentColumn0, DataTable_t3267612424 * ___childTable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ImportColumnGroupBase(System.Xml.Schema.XmlSchemaElement,System.Xml.Schema.XmlSchemaGroupBase)
extern "C"  void XmlSchemaDataImporter_ImportColumnGroupBase_m3450965356 (XmlSchemaDataImporter_t3046229468 * __this, XmlSchemaElement_t2433337156 * ___parent0, XmlSchemaGroupBase_t3811767860 * ___gb1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDatatype System.Data.XmlSchemaDataImporter::GetSchemaPrimitiveType(System.Object)
extern "C"  XmlSchemaDatatype_t1195946242 * XmlSchemaDataImporter_GetSchemaPrimitiveType_m1147598347 (XmlSchemaDataImporter_t3046229468 * __this, Il2CppObject * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ImportColumnAttribute(System.Xml.Schema.XmlSchemaAttribute)
extern "C"  void XmlSchemaDataImporter_ImportColumnAttribute_m2284600143 (XmlSchemaDataImporter_t3046229468 * __this, XmlSchemaAttribute_t4015859774 * ___attr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ImportColumnElement(System.Xml.Schema.XmlSchemaElement,System.Xml.Schema.XmlSchemaElement)
extern "C"  void XmlSchemaDataImporter_ImportColumnElement_m3267878188 (XmlSchemaDataImporter_t3046229468 * __this, XmlSchemaElement_t2433337156 * ___parent0, XmlSchemaElement_t2433337156 * ___el1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ImportColumnMetaInfo(System.Xml.Schema.XmlSchemaAnnotated,System.Xml.XmlQualifiedName,System.Data.DataColumn)
extern "C"  void XmlSchemaDataImporter_ImportColumnMetaInfo_m3736491557 (XmlSchemaDataImporter_t3046229468 * __this, XmlSchemaAnnotated_t2082486936 * ___obj0, XmlQualifiedName_t1944712516 * ___name1, DataColumn_t2152532948 * ___col2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::FillDataColumnComplexElement(System.Xml.Schema.XmlSchemaElement,System.Xml.Schema.XmlSchemaElement,System.Data.DataColumn)
extern "C"  void XmlSchemaDataImporter_FillDataColumnComplexElement_m1394565075 (XmlSchemaDataImporter_t3046229468 * __this, XmlSchemaElement_t2433337156 * ___parent0, XmlSchemaElement_t2433337156 * ___el1, DataColumn_t2152532948 * ___col2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.XmlSchemaDataImporter::DataSetDefinesKey(System.String)
extern "C"  bool XmlSchemaDataImporter_DataSetDefinesKey_m1670523888 (XmlSchemaDataImporter_t3046229468 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::AddParentKeyColumn(System.Xml.Schema.XmlSchemaElement,System.Xml.Schema.XmlSchemaElement,System.Data.DataColumn)
extern "C"  void XmlSchemaDataImporter_AddParentKeyColumn_m1936869666 (XmlSchemaDataImporter_t3046229468 * __this, XmlSchemaElement_t2433337156 * ___parent0, XmlSchemaElement_t2433337156 * ___el1, DataColumn_t2152532948 * ___col2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::FillDataColumnRepeatedSimpleElement(System.Xml.Schema.XmlSchemaElement,System.Xml.Schema.XmlSchemaElement,System.Data.DataColumn)
extern "C"  void XmlSchemaDataImporter_FillDataColumnRepeatedSimpleElement_m553383923 (XmlSchemaDataImporter_t3046229468 * __this, XmlSchemaElement_t2433337156 * ___parent0, XmlSchemaElement_t2433337156 * ___el1, DataColumn_t2152532948 * ___col2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::FillDataColumnSimpleElement(System.Xml.Schema.XmlSchemaElement,System.Data.DataColumn)
extern "C"  void XmlSchemaDataImporter_FillDataColumnSimpleElement_m1903923828 (XmlSchemaDataImporter_t3046229468 * __this, XmlSchemaElement_t2433337156 * ___el0, DataColumn_t2152532948 * ___col1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::AddColumn(System.Data.DataColumn)
extern "C"  void XmlSchemaDataImporter_AddColumn_m2108354167 (XmlSchemaDataImporter_t3046229468 * __this, DataColumn_t2152532948 * ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::FillFacet(System.Data.DataColumn,System.Xml.Schema.XmlSchemaSimpleType)
extern "C"  void XmlSchemaDataImporter_FillFacet_m3932301551 (XmlSchemaDataImporter_t3046229468 * __this, DataColumn_t2152532948 * ___col0, XmlSchemaSimpleType_t248156492 * ___st1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Data.XmlSchemaDataImporter::ConvertDatatype(System.Xml.Schema.XmlSchemaDatatype)
extern "C"  Type_t * XmlSchemaDataImporter_ConvertDatatype_m1212215755 (XmlSchemaDataImporter_t3046229468 * __this, XmlSchemaDatatype_t1195946242 * ___dt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.XmlSchemaDataImporter::GetSelectorTarget(System.String)
extern "C"  String_t* XmlSchemaDataImporter_GetSelectorTarget_m3081867098 (XmlSchemaDataImporter_t3046229468 * __this, String_t* ___xpath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ReserveSelfIdentity(System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C"  void XmlSchemaDataImporter_ReserveSelfIdentity_m1145300869 (XmlSchemaDataImporter_t3046229468 * __this, XmlSchemaIdentityConstraint_t1058613623 * ___ic0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessSelfIdentity(System.Data.ConstraintStructure)
extern "C"  void XmlSchemaDataImporter_ProcessSelfIdentity_m3475453255 (XmlSchemaDataImporter_t3046229468 * __this, ConstraintStructure_t1728327650 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ReserveRelationIdentity(System.Xml.Schema.XmlSchemaElement,System.Xml.Schema.XmlSchemaKeyref)
extern "C"  void XmlSchemaDataImporter_ReserveRelationIdentity_m3737361223 (XmlSchemaDataImporter_t3046229468 * __this, XmlSchemaElement_t2433337156 * ___element0, XmlSchemaKeyref_t1894386400 * ___keyref1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessRelationIdentity(System.Xml.Schema.XmlSchemaElement,System.Data.ConstraintStructure)
extern "C"  void XmlSchemaDataImporter_ProcessRelationIdentity_m4143201804 (XmlSchemaDataImporter_t3046229468 * __this, XmlSchemaElement_t2433337156 * ___element0, ConstraintStructure_t1728327650 * ___c1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.UniqueConstraint System.Data.XmlSchemaDataImporter::FindConstraint(System.String,System.Xml.Schema.XmlSchemaElement)
extern "C"  UniqueConstraint_t3624508568 * XmlSchemaDataImporter_FindConstraint_m1712138076 (XmlSchemaDataImporter_t3046229468 * __this, String_t* ___name0, XmlSchemaElement_t2433337156 * ___element1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::HandleAnnotations(System.Xml.Schema.XmlSchemaAnnotation,System.Boolean)
extern "C"  void XmlSchemaDataImporter_HandleAnnotations_m3158465974 (XmlSchemaDataImporter_t3046229468 * __this, XmlSchemaAnnotation_t2400301303 * ___an0, bool ___nested1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::HandleDataSourceAnnotation(System.Xml.XmlElement,System.Boolean)
extern "C"  void XmlSchemaDataImporter_HandleDataSourceAnnotation_m4141940255 (XmlSchemaDataImporter_t3046229468 * __this, XmlElement_t2877111883 * ___el0, bool ___nested1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessTableAdapter(System.Xml.XmlElement,System.Data.Common.DbProviderFactory,System.String)
extern "C"  void XmlSchemaDataImporter_ProcessTableAdapter_m3373273769 (XmlSchemaDataImporter_t3046229468 * __this, XmlElement_t2877111883 * ___el0, DbProviderFactory_t661609867 * ___provider1, String_t* ___connStr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessDbSource(System.Xml.XmlElement)
extern "C"  void XmlSchemaDataImporter_ProcessDbSource_m2129500930 (XmlSchemaDataImporter_t3046229468 * __this, XmlElement_t2877111883 * ___el0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbCommand System.Data.XmlSchemaDataImporter::ProcessDbCommand(System.Xml.XmlElement)
extern "C"  DbCommand_t673053565 * XmlSchemaDataImporter_ProcessDbCommand_m2778018998 (XmlSchemaDataImporter_t3046229468 * __this, XmlElement_t2877111883 * ___el0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.XmlSchemaDataImporter::ProcessDbParameters(System.Xml.XmlElement)
extern "C"  ArrayList_t4252133567 * XmlSchemaDataImporter_ProcessDbParameters_m2746719111 (XmlSchemaDataImporter_t3046229468 * __this, XmlElement_t2877111883 * ___el0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessColumnMapping(System.Xml.XmlElement,System.Data.Common.DataTableMapping)
extern "C"  void XmlSchemaDataImporter_ProcessColumnMapping_m241334869 (XmlSchemaDataImporter_t3046229468 * __this, XmlElement_t2877111883 * ___el0, DataTableMapping_t3453937356 * ___tableMapping1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::HandleRelationshipAnnotation(System.Xml.XmlElement,System.Boolean)
extern "C"  void XmlSchemaDataImporter_HandleRelationshipAnnotation_m2369393102 (XmlSchemaDataImporter_t3046229468 * __this, XmlElement_t2877111883 * ___el0, bool ___nested1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.XmlSchemaDataImporter::GetElementDefaultValue(System.Xml.Schema.XmlSchemaElement)
extern "C"  Il2CppObject * XmlSchemaDataImporter_GetElementDefaultValue_m793753107 (XmlSchemaDataImporter_t3046229468 * __this, XmlSchemaElement_t2433337156 * ___elem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.XmlSchemaDataImporter::GetAttributeDefaultValue(System.Xml.Schema.XmlSchemaAttribute)
extern "C"  Il2CppObject * XmlSchemaDataImporter_GetAttributeDefaultValue_m4000737355 (XmlSchemaDataImporter_t3046229468 * __this, XmlSchemaAttribute_t4015859774 * ___attr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
