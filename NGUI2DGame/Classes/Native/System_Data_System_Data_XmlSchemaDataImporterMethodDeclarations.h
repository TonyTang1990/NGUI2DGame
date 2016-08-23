#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.XmlSchemaDataImporter
struct XmlSchemaDataImporter_t1055;
// System.Data.TableAdapterSchemaInfo
struct TableAdapterSchemaInfo_t931;
// System.Data.DataSet
struct DataSet_t346;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t1054;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t1105;
// System.Data.DataRelation
struct DataRelation_t921;
// System.Data.RelationStructure
struct RelationStructure_t1048;
// System.Data.DataColumn
struct DataColumn_t858;
// System.Data.DataTable
struct DataTable_t296;
// System.Xml.Schema.XmlSchemaGroupBase
struct XmlSchemaGroupBase_t1106;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t1051;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t1107;
// System.Xml.Schema.XmlSchemaAnnotated
struct XmlSchemaAnnotated_t1108;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t985;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t1109;
// System.Type
struct Type_t;
// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t1110;
// System.Data.ConstraintStructure
struct ConstraintStructure_t1050;
// System.Xml.Schema.XmlSchemaKeyref
struct XmlSchemaKeyref_t1111;
// System.Data.UniqueConstraint
struct UniqueConstraint_t918;
// System.Xml.Schema.XmlSchemaAnnotation
struct XmlSchemaAnnotation_t1112;
// System.Xml.XmlElement
struct XmlElement_t1103;
// System.Data.Common.DbProviderFactory
struct DbProviderFactory_t970;
// System.Data.Common.DbCommand
struct DbCommand_t967;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Data.Common.DataTableMapping
struct DataTableMapping_t1016;

// System.Void System.Data.XmlSchemaDataImporter::.ctor(System.Data.DataSet,System.Xml.XmlReader,System.Boolean)
extern "C" void XmlSchemaDataImporter__ctor_m4750 (XmlSchemaDataImporter_t1055 * __this, DataSet_t346 * ___dataset, XmlReader_t843 * ___reader, bool ___forDataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::.cctor()
extern "C" void XmlSchemaDataImporter__cctor_m4751 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.TableAdapterSchemaInfo System.Data.XmlSchemaDataImporter::get_CurrentAdapter()
extern "C" TableAdapterSchemaInfo_t931 * XmlSchemaDataImporter_get_CurrentAdapter_m4752 (XmlSchemaDataImporter_t1055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::Process()
extern "C" void XmlSchemaDataImporter_Process_m4753 (XmlSchemaDataImporter_t1055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.XmlSchemaDataImporter::IsDataSetElement(System.Xml.Schema.XmlSchemaElement)
extern "C" bool XmlSchemaDataImporter_IsDataSetElement_m4754 (XmlSchemaDataImporter_t1055 * __this, XmlSchemaElement_t1054 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.XmlSchemaDataImporter::ContainsColumn(System.Xml.Schema.XmlSchemaParticle)
extern "C" bool XmlSchemaDataImporter_ContainsColumn_m4755 (XmlSchemaDataImporter_t1055 * __this, XmlSchemaParticle_t1105 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessGlobalElement(System.Xml.Schema.XmlSchemaElement)
extern "C" void XmlSchemaDataImporter_ProcessGlobalElement_m4756 (XmlSchemaDataImporter_t1055 * __this, XmlSchemaElement_t1054 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessDataSetElement(System.Xml.Schema.XmlSchemaElement)
extern "C" void XmlSchemaDataImporter_ProcessDataSetElement_m4757 (XmlSchemaDataImporter_t1055 * __this, XmlSchemaElement_t1054 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::HandleDataSetContentTypeParticle(System.Xml.Schema.XmlSchemaParticle)
extern "C" void XmlSchemaDataImporter_HandleDataSetContentTypeParticle_m4758 (XmlSchemaDataImporter_t1055 * __this, XmlSchemaParticle_t1105 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessDataTableElement(System.Xml.Schema.XmlSchemaElement)
extern "C" void XmlSchemaDataImporter_ProcessDataTableElement_m4759 (XmlSchemaDataImporter_t1055 * __this, XmlSchemaElement_t1054 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelation System.Data.XmlSchemaDataImporter::GenerateRelationship(System.Data.RelationStructure)
extern "C" DataRelation_t921 * XmlSchemaDataImporter_GenerateRelationship_m4760 (XmlSchemaDataImporter_t1055 * __this, RelationStructure_t1048 * ___rs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.XmlSchemaDataImporter::CreateChildColumn(System.Data.DataColumn,System.Data.DataTable)
extern "C" DataColumn_t858 * XmlSchemaDataImporter_CreateChildColumn_m4761 (XmlSchemaDataImporter_t1055 * __this, DataColumn_t858 * ___parentColumn, DataTable_t296 * ___childTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ImportColumnGroupBase(System.Xml.Schema.XmlSchemaElement,System.Xml.Schema.XmlSchemaGroupBase)
extern "C" void XmlSchemaDataImporter_ImportColumnGroupBase_m4762 (XmlSchemaDataImporter_t1055 * __this, XmlSchemaElement_t1054 * ___parent, XmlSchemaGroupBase_t1106 * ___gb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDatatype System.Data.XmlSchemaDataImporter::GetSchemaPrimitiveType(System.Object)
extern "C" XmlSchemaDatatype_t1051 * XmlSchemaDataImporter_GetSchemaPrimitiveType_m4763 (XmlSchemaDataImporter_t1055 * __this, Object_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ImportColumnAttribute(System.Xml.Schema.XmlSchemaAttribute)
extern "C" void XmlSchemaDataImporter_ImportColumnAttribute_m4764 (XmlSchemaDataImporter_t1055 * __this, XmlSchemaAttribute_t1107 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ImportColumnElement(System.Xml.Schema.XmlSchemaElement,System.Xml.Schema.XmlSchemaElement)
extern "C" void XmlSchemaDataImporter_ImportColumnElement_m4765 (XmlSchemaDataImporter_t1055 * __this, XmlSchemaElement_t1054 * ___parent, XmlSchemaElement_t1054 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ImportColumnMetaInfo(System.Xml.Schema.XmlSchemaAnnotated,System.Xml.XmlQualifiedName,System.Data.DataColumn)
extern "C" void XmlSchemaDataImporter_ImportColumnMetaInfo_m4766 (XmlSchemaDataImporter_t1055 * __this, XmlSchemaAnnotated_t1108 * ___obj, XmlQualifiedName_t985 * ___name, DataColumn_t858 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::FillDataColumnComplexElement(System.Xml.Schema.XmlSchemaElement,System.Xml.Schema.XmlSchemaElement,System.Data.DataColumn)
extern "C" void XmlSchemaDataImporter_FillDataColumnComplexElement_m4767 (XmlSchemaDataImporter_t1055 * __this, XmlSchemaElement_t1054 * ___parent, XmlSchemaElement_t1054 * ___el, DataColumn_t858 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.XmlSchemaDataImporter::DataSetDefinesKey(System.String)
extern "C" bool XmlSchemaDataImporter_DataSetDefinesKey_m4768 (XmlSchemaDataImporter_t1055 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::AddParentKeyColumn(System.Xml.Schema.XmlSchemaElement,System.Xml.Schema.XmlSchemaElement,System.Data.DataColumn)
extern "C" void XmlSchemaDataImporter_AddParentKeyColumn_m4769 (XmlSchemaDataImporter_t1055 * __this, XmlSchemaElement_t1054 * ___parent, XmlSchemaElement_t1054 * ___el, DataColumn_t858 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::FillDataColumnRepeatedSimpleElement(System.Xml.Schema.XmlSchemaElement,System.Xml.Schema.XmlSchemaElement,System.Data.DataColumn)
extern "C" void XmlSchemaDataImporter_FillDataColumnRepeatedSimpleElement_m4770 (XmlSchemaDataImporter_t1055 * __this, XmlSchemaElement_t1054 * ___parent, XmlSchemaElement_t1054 * ___el, DataColumn_t858 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::FillDataColumnSimpleElement(System.Xml.Schema.XmlSchemaElement,System.Data.DataColumn)
extern "C" void XmlSchemaDataImporter_FillDataColumnSimpleElement_m4771 (XmlSchemaDataImporter_t1055 * __this, XmlSchemaElement_t1054 * ___el, DataColumn_t858 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::AddColumn(System.Data.DataColumn)
extern "C" void XmlSchemaDataImporter_AddColumn_m4772 (XmlSchemaDataImporter_t1055 * __this, DataColumn_t858 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::FillFacet(System.Data.DataColumn,System.Xml.Schema.XmlSchemaSimpleType)
extern "C" void XmlSchemaDataImporter_FillFacet_m4773 (XmlSchemaDataImporter_t1055 * __this, DataColumn_t858 * ___col, XmlSchemaSimpleType_t1109 * ___st, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Data.XmlSchemaDataImporter::ConvertDatatype(System.Xml.Schema.XmlSchemaDatatype)
extern "C" Type_t * XmlSchemaDataImporter_ConvertDatatype_m4774 (XmlSchemaDataImporter_t1055 * __this, XmlSchemaDatatype_t1051 * ___dt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.XmlSchemaDataImporter::GetSelectorTarget(System.String)
extern "C" String_t* XmlSchemaDataImporter_GetSelectorTarget_m4775 (XmlSchemaDataImporter_t1055 * __this, String_t* ___xpath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ReserveSelfIdentity(System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C" void XmlSchemaDataImporter_ReserveSelfIdentity_m4776 (XmlSchemaDataImporter_t1055 * __this, XmlSchemaIdentityConstraint_t1110 * ___ic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessSelfIdentity(System.Data.ConstraintStructure)
extern "C" void XmlSchemaDataImporter_ProcessSelfIdentity_m4777 (XmlSchemaDataImporter_t1055 * __this, ConstraintStructure_t1050 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ReserveRelationIdentity(System.Xml.Schema.XmlSchemaElement,System.Xml.Schema.XmlSchemaKeyref)
extern "C" void XmlSchemaDataImporter_ReserveRelationIdentity_m4778 (XmlSchemaDataImporter_t1055 * __this, XmlSchemaElement_t1054 * ___element, XmlSchemaKeyref_t1111 * ___keyref, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessRelationIdentity(System.Xml.Schema.XmlSchemaElement,System.Data.ConstraintStructure)
extern "C" void XmlSchemaDataImporter_ProcessRelationIdentity_m4779 (XmlSchemaDataImporter_t1055 * __this, XmlSchemaElement_t1054 * ___element, ConstraintStructure_t1050 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.UniqueConstraint System.Data.XmlSchemaDataImporter::FindConstraint(System.String,System.Xml.Schema.XmlSchemaElement)
extern "C" UniqueConstraint_t918 * XmlSchemaDataImporter_FindConstraint_m4780 (XmlSchemaDataImporter_t1055 * __this, String_t* ___name, XmlSchemaElement_t1054 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::HandleAnnotations(System.Xml.Schema.XmlSchemaAnnotation,System.Boolean)
extern "C" void XmlSchemaDataImporter_HandleAnnotations_m4781 (XmlSchemaDataImporter_t1055 * __this, XmlSchemaAnnotation_t1112 * ___an, bool ___nested, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::HandleDataSourceAnnotation(System.Xml.XmlElement,System.Boolean)
extern "C" void XmlSchemaDataImporter_HandleDataSourceAnnotation_m4782 (XmlSchemaDataImporter_t1055 * __this, XmlElement_t1103 * ___el, bool ___nested, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessTableAdapter(System.Xml.XmlElement,System.Data.Common.DbProviderFactory,System.String)
extern "C" void XmlSchemaDataImporter_ProcessTableAdapter_m4783 (XmlSchemaDataImporter_t1055 * __this, XmlElement_t1103 * ___el, DbProviderFactory_t970 * ___provider, String_t* ___connStr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessDbSource(System.Xml.XmlElement)
extern "C" void XmlSchemaDataImporter_ProcessDbSource_m4784 (XmlSchemaDataImporter_t1055 * __this, XmlElement_t1103 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbCommand System.Data.XmlSchemaDataImporter::ProcessDbCommand(System.Xml.XmlElement)
extern "C" DbCommand_t967 * XmlSchemaDataImporter_ProcessDbCommand_m4785 (XmlSchemaDataImporter_t1055 * __this, XmlElement_t1103 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.XmlSchemaDataImporter::ProcessDbParameters(System.Xml.XmlElement)
extern "C" ArrayList_t913 * XmlSchemaDataImporter_ProcessDbParameters_m4786 (XmlSchemaDataImporter_t1055 * __this, XmlElement_t1103 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::ProcessColumnMapping(System.Xml.XmlElement,System.Data.Common.DataTableMapping)
extern "C" void XmlSchemaDataImporter_ProcessColumnMapping_m4787 (XmlSchemaDataImporter_t1055 * __this, XmlElement_t1103 * ___el, DataTableMapping_t1016 * ___tableMapping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.XmlSchemaDataImporter::HandleRelationshipAnnotation(System.Xml.XmlElement,System.Boolean)
extern "C" void XmlSchemaDataImporter_HandleRelationshipAnnotation_m4788 (XmlSchemaDataImporter_t1055 * __this, XmlElement_t1103 * ___el, bool ___nested, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.XmlSchemaDataImporter::GetElementDefaultValue(System.Xml.Schema.XmlSchemaElement)
extern "C" Object_t * XmlSchemaDataImporter_GetElementDefaultValue_m4789 (XmlSchemaDataImporter_t1055 * __this, XmlSchemaElement_t1054 * ___elem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.XmlSchemaDataImporter::GetAttributeDefaultValue(System.Xml.Schema.XmlSchemaAttribute)
extern "C" Object_t * XmlSchemaDataImporter_GetAttributeDefaultValue_m4790 (XmlSchemaDataImporter_t1055 * __this, XmlSchemaAttribute_t1107 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
