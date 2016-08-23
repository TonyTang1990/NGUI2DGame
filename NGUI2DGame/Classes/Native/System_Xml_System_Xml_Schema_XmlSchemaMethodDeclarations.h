#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchema
struct XmlSchema_t1053;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t1141;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t1149;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t1102;
// System.Collections.Hashtable
struct Hashtable_t915;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1144;
// System.Xml.XmlResolver
struct XmlResolver_t1520;
// System.Xml.Schema.XmlSchemaExternal
struct XmlSchemaExternal_t1721;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t1107;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t985;
// System.Xml.Schema.XmlSchemaAttributeGroup
struct XmlSchemaAttributeGroup_t1707;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t1054;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t1145;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1762;
// System.Xml.Schema.XmlSchemaForm
#include "System_Xml_System_Xml_Schema_XmlSchemaForm.h"
// System.Xml.Schema.XmlSchemaDerivationMethod
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMethod.h"

// System.Void System.Xml.Schema.XmlSchema::.ctor()
extern "C" void XmlSchema__ctor_m5122 (XmlSchema_t1053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchema::get_AttributeFormDefault()
extern "C" int32_t XmlSchema_get_AttributeFormDefault_m8958 (XmlSchema_t1053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchema::get_BlockDefault()
extern "C" int32_t XmlSchema_get_BlockDefault_m8959 (XmlSchema_t1053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchema::get_FinalDefault()
extern "C" int32_t XmlSchema_get_FinalDefault_m8960 (XmlSchema_t1053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchema::get_ElementFormDefault()
extern "C" int32_t XmlSchema_get_ElementFormDefault_m8961 (XmlSchema_t1053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::get_TargetNamespace()
extern "C" String_t* XmlSchema_get_TargetNamespace_m5185 (XmlSchema_t1053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::set_TargetNamespace(System.String)
extern "C" void XmlSchema_set_TargetNamespace_m8962 (XmlSchema_t1053 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::get_Version()
extern "C" String_t* XmlSchema_get_Version_m8963 (XmlSchema_t1053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchema::get_Includes()
extern "C" XmlSchemaObjectCollection_t1141 * XmlSchema_get_Includes_m8964 (XmlSchema_t1053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchema::get_Items()
extern "C" XmlSchemaObjectCollection_t1141 * XmlSchema_get_Items_m5124 (XmlSchema_t1053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchema::get_IsCompiled()
extern "C" bool XmlSchema_get_IsCompiled_m8965 (XmlSchema_t1053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Attributes()
extern "C" XmlSchemaObjectTable_t1149 * XmlSchema_get_Attributes_m5234 (XmlSchema_t1053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_AttributeGroups()
extern "C" XmlSchemaObjectTable_t1149 * XmlSchema_get_AttributeGroups_m8966 (XmlSchema_t1053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_SchemaTypes()
extern "C" XmlSchemaObjectTable_t1149 * XmlSchema_get_SchemaTypes_m8967 (XmlSchema_t1053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Elements()
extern "C" XmlSchemaObjectTable_t1149 * XmlSchema_get_Elements_m5190 (XmlSchema_t1053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::get_Id()
extern "C" String_t* XmlSchema_get_Id_m5184 (XmlSchema_t1053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Groups()
extern "C" XmlSchemaObjectTable_t1149 * XmlSchema_get_Groups_m8968 (XmlSchema_t1053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_Notations()
extern "C" XmlSchemaObjectTable_t1149 * XmlSchema_get_Notations_m8969 (XmlSchema_t1053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::get_NamedIdentities()
extern "C" XmlSchemaObjectTable_t1149 * XmlSchema_get_NamedIdentities_m8970 (XmlSchema_t1053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSet System.Xml.Schema.XmlSchema::get_Schemas()
extern "C" XmlSchemaSet_t1102 * XmlSchema_get_Schemas_m8971 (XmlSchema_t1053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Xml.Schema.XmlSchema::get_IDCollection()
extern "C" Hashtable_t915 * XmlSchema_get_IDCollection_m8972 (XmlSchema_t1053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::Compile(System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchema_Compile_m5175 (XmlSchema_t1053 * __this, ValidationEventHandler_t1144 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.XmlResolver)
extern "C" void XmlSchema_Compile_m8973 (XmlSchema_t1053 * __this, ValidationEventHandler_t1144 * ___handler, XmlResolver_t1520 * ___resolver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::CompileSubset(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchemaSet,System.Xml.XmlResolver,System.Collections.Hashtable)
extern "C" void XmlSchema_CompileSubset_m8974 (XmlSchema_t1053 * __this, ValidationEventHandler_t1144 * ___handler, XmlSchemaSet_t1102 * ___col, XmlResolver_t1520 * ___resolver, Hashtable_t915 * ___handledUris, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::SetParent()
extern "C" void XmlSchema_SetParent_m8975 (XmlSchema_t1053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::DoCompile(System.Xml.Schema.ValidationEventHandler,System.Collections.Hashtable,System.Xml.Schema.XmlSchemaSet,System.Xml.XmlResolver)
extern "C" void XmlSchema_DoCompile_m8976 (XmlSchema_t1053 * __this, ValidationEventHandler_t1144 * ___handler, Hashtable_t915 * ___handledUris, XmlSchemaSet_t1102 * ___col, XmlResolver_t1520 * ___resolver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchema::GetResolvedUri(System.Xml.XmlResolver,System.String)
extern "C" String_t* XmlSchema_GetResolvedUri_m8977 (XmlSchema_t1053 * __this, XmlResolver_t1520 * ___resolver, String_t* ___relativeUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::ProcessExternal(System.Xml.Schema.ValidationEventHandler,System.Collections.Hashtable,System.Xml.XmlResolver,System.Xml.Schema.XmlSchemaExternal,System.Xml.Schema.XmlSchemaSet)
extern "C" void XmlSchema_ProcessExternal_m8978 (XmlSchema_t1053 * __this, ValidationEventHandler_t1144 * ___handler, Hashtable_t915 * ___handledUris, XmlResolver_t1520 * ___resolver, XmlSchemaExternal_t1721 * ___ext, XmlSchemaSet_t1102 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::AddExternalComponentsTo(System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaObjectCollection,System.Xml.Schema.ValidationEventHandler,System.Collections.Hashtable,System.Xml.XmlResolver,System.Xml.Schema.XmlSchemaSet)
extern "C" void XmlSchema_AddExternalComponentsTo_m8979 (XmlSchema_t1053 * __this, XmlSchema_t1053 * ___s, XmlSchemaObjectCollection_t1141 * ___items, ValidationEventHandler_t1144 * ___handler, Hashtable_t915 * ___handledUris, XmlResolver_t1520 * ___resolver, XmlSchemaSet_t1102 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchema::IsNamespaceAbsent(System.String)
extern "C" bool XmlSchema_IsNamespaceAbsent_m8980 (XmlSchema_t1053 * __this, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAttribute System.Xml.Schema.XmlSchema::FindAttribute(System.Xml.XmlQualifiedName)
extern "C" XmlSchemaAttribute_t1107 * XmlSchema_FindAttribute_m8981 (XmlSchema_t1053 * __this, XmlQualifiedName_t985 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAttributeGroup System.Xml.Schema.XmlSchema::FindAttributeGroup(System.Xml.XmlQualifiedName)
extern "C" XmlSchemaAttributeGroup_t1707 * XmlSchema_FindAttributeGroup_m8982 (XmlSchema_t1053 * __this, XmlQualifiedName_t985 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaElement System.Xml.Schema.XmlSchema::FindElement(System.Xml.XmlQualifiedName)
extern "C" XmlSchemaElement_t1054 * XmlSchema_FindElement_m8983 (XmlSchema_t1053 * __this, XmlQualifiedName_t985 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchema::FindSchemaType(System.Xml.XmlQualifiedName)
extern "C" XmlSchemaType_t1145 * XmlSchema_FindSchemaType_m8984 (XmlSchema_t1053 * __this, XmlQualifiedName_t985 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::Validate(System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchema_Validate_m8985 (XmlSchema_t1053 * __this, ValidationEventHandler_t1144 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchema::Read(System.Xml.XmlReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchema_t1053 * XmlSchema_Read_m5174 (Object_t * __this /* static, unused */, XmlReader_t843 * ___rdr, ValidationEventHandler_t1144 * ___validationEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::ReadAttributes(System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchema_ReadAttributes_m8986 (Object_t * __this /* static, unused */, XmlSchema_t1053 * ___schema, XmlSchemaReader_t1762 * ___reader, ValidationEventHandler_t1144 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchema::ReadContent(System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchema_ReadContent_m8987 (Object_t * __this /* static, unused */, XmlSchema_t1053 * ___schema, XmlSchemaReader_t1762 * ___reader, ValidationEventHandler_t1144 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
