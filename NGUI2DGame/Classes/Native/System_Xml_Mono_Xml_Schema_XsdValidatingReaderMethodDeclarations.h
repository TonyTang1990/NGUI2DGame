#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdValidatingReader
struct XsdValidatingReader_t1523;
// Mono.Xml.Schema.XsdValidationContext
struct XsdValidationContext_t1505;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Xml.XmlResolver
struct XmlResolver_t1520;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t1102;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1543;
// System.Xml.XmlParserContext
struct XmlParserContext_t1571;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t1569;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Exception
struct Exception_t306;
// System.Xml.Schema.XmlSchemaValidationException
struct XmlSchemaValidationException_t1757;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t1054;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t1145;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t985;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t1109;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t1051;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t1052;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t1107;
// Mono.Xml.Schema.XsdKeyEntry
struct XsdKeyEntry_t1499;
// Mono.Xml.Schema.XsdKeyTable
struct XsdKeyTable_t1503;
// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t1110;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1053;
// System.Xml.ValidationType
#include "System_Xml_System_Xml_ValidationType.h"
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"
// System.Xml.Schema.XmlSchemaDerivationMethod
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMethod.h"

// System.Void Mono.Xml.Schema.XsdValidatingReader::.ctor(System.Xml.XmlReader)
extern "C" void XsdValidatingReader__ctor_m7174 (XsdValidatingReader_t1523 * __this, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::.cctor()
extern "C" void XsdValidatingReader__cctor_m7175 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationContext Mono.Xml.Schema.XsdValidatingReader::get_Context()
extern "C" XsdValidationContext_t1505 * XsdValidatingReader_get_Context_m7176 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::get_CurrentKeyFieldConsumers()
extern "C" ArrayList_t913 * XsdValidatingReader_get_CurrentKeyFieldConsumers_m7177 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_XsiNilDepth()
extern "C" int32_t XsdValidatingReader_get_XsiNilDepth_m7178 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C" void XsdValidatingReader_set_XmlResolver_m7179 (XsdValidatingReader_t1523 * __this, XmlResolver_t1520 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::set_Schemas(System.Xml.Schema.XmlSchemaSet)
extern "C" void XsdValidatingReader_set_Schemas_m7180 (XsdValidatingReader_t1523 * __this, XmlSchemaSet_t1102 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidatingReader::get_SchemaType()
extern "C" Object_t * XsdValidatingReader_get_SchemaType_m7181 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidatingReader::get_SourceReaderSchemaType()
extern "C" Object_t * XsdValidatingReader_get_SourceReaderSchemaType_m7182 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ValidationType Mono.Xml.Schema.XsdValidatingReader::get_ValidationType()
extern "C" int32_t XsdValidatingReader_get_ValidationType_m7183 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::set_ValidationType(System.Xml.ValidationType)
extern "C" void XsdValidatingReader_set_ValidationType_m7184 (XsdValidatingReader_t1523 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_AttributeCount()
extern "C" int32_t XsdValidatingReader_get_AttributeCount_m7185 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_BaseURI()
extern "C" String_t* XsdValidatingReader_get_BaseURI_m7186 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_CanResolveEntity()
extern "C" bool XsdValidatingReader_get_CanResolveEntity_m7187 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_Depth()
extern "C" int32_t XsdValidatingReader_get_Depth_m7188 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_EOF()
extern "C" bool XsdValidatingReader_get_EOF_m7189 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_HasValue()
extern "C" bool XsdValidatingReader_get_HasValue_m7190 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_IsDefault()
extern "C" bool XsdValidatingReader_get_IsDefault_m7191 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_IsEmptyElement()
extern "C" bool XsdValidatingReader_get_IsEmptyElement_m7192 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Item(System.Int32)
extern "C" String_t* XsdValidatingReader_get_Item_m7193 (XsdValidatingReader_t1523 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Item(System.String)
extern "C" String_t* XsdValidatingReader_get_Item_m7194 (XsdValidatingReader_t1523 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Item(System.String,System.String)
extern "C" String_t* XsdValidatingReader_get_Item_m7195 (XsdValidatingReader_t1523 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_LineNumber()
extern "C" int32_t XsdValidatingReader_get_LineNumber_m7196 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_LinePosition()
extern "C" int32_t XsdValidatingReader_get_LinePosition_m7197 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_LocalName()
extern "C" String_t* XsdValidatingReader_get_LocalName_m7198 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Name()
extern "C" String_t* XsdValidatingReader_get_Name_m7199 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_NamespaceURI()
extern "C" String_t* XsdValidatingReader_get_NamespaceURI_m7200 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.Schema.XsdValidatingReader::get_NameTable()
extern "C" XmlNameTable_t1543 * XsdValidatingReader_get_NameTable_m7201 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType Mono.Xml.Schema.XsdValidatingReader::get_NodeType()
extern "C" int32_t XsdValidatingReader_get_NodeType_m7202 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml.Schema.XsdValidatingReader::get_ParserContext()
extern "C" XmlParserContext_t1571 * XsdValidatingReader_get_ParserContext_m7203 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamespaceManager Mono.Xml.Schema.XsdValidatingReader::get_NamespaceManager()
extern "C" XmlNamespaceManager_t1569 * XsdValidatingReader_get_NamespaceManager_m7204 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Prefix()
extern "C" String_t* XsdValidatingReader_get_Prefix_m7205 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState Mono.Xml.Schema.XsdValidatingReader::get_ReadState()
extern "C" int32_t XsdValidatingReader_get_ReadState_m7206 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Value()
extern "C" String_t* XsdValidatingReader_get_Value_m7207 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_XmlLang()
extern "C" String_t* XsdValidatingReader_get_XmlLang_m7208 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace Mono.Xml.Schema.XsdValidatingReader::get_XmlSpace()
extern "C" int32_t XsdValidatingReader_get_XmlSpace_m7209 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.String)
extern "C" void XsdValidatingReader_HandleError_m7210 (XsdValidatingReader_t1523 * __this, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.String,System.Exception)
extern "C" void XsdValidatingReader_HandleError_m7211 (XsdValidatingReader_t1523 * __this, String_t* ___error, Exception_t306 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.String,System.Exception,System.Boolean)
extern "C" void XsdValidatingReader_HandleError_m7212 (XsdValidatingReader_t1523 * __this, String_t* ___error, Exception_t306 * ___innerException, bool ___isWarning, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.Xml.Schema.XmlSchemaValidationException)
extern "C" void XsdValidatingReader_HandleError_m7213 (XsdValidatingReader_t1523 * __this, XmlSchemaValidationException_t1757 * ___schemaException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.Xml.Schema.XmlSchemaValidationException,System.Boolean)
extern "C" void XsdValidatingReader_HandleError_m7214 (XsdValidatingReader_t1523 * __this, XmlSchemaValidationException_t1757 * ___schemaException, bool ___isWarning, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaElement Mono.Xml.Schema.XsdValidatingReader::FindElement(System.String,System.String)
extern "C" XmlSchemaElement_t1054 * XsdValidatingReader_FindElement_m7215 (XsdValidatingReader_t1523 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaType Mono.Xml.Schema.XsdValidatingReader::FindType(System.Xml.XmlQualifiedName)
extern "C" XmlSchemaType_t1145 * XsdValidatingReader_FindType_m7216 (XsdValidatingReader_t1523 * __this, XmlQualifiedName_t985 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateStartElementParticle()
extern "C" void XsdValidatingReader_ValidateStartElementParticle_m7217 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateEndElementParticle()
extern "C" void XsdValidatingReader_ValidateEndElementParticle_m7218 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateCharacters()
extern "C" void XsdValidatingReader_ValidateCharacters_m7219 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateEndSimpleContent()
extern "C" void XsdValidatingReader_ValidateEndSimpleContent_m7220 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateEndSimpleContentCore()
extern "C" void XsdValidatingReader_ValidateEndSimpleContentCore_m7221 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessStringValid(System.Xml.Schema.XmlSchemaSimpleType,System.Xml.Schema.XmlSchemaDatatype,System.String)
extern "C" void XsdValidatingReader_AssessStringValid_m7222 (XsdValidatingReader_t1523 * __this, XmlSchemaSimpleType_t1109 * ___st, XmlSchemaDatatype_t1051 * ___dt, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateRestrictedSimpleTypeValue(System.Xml.Schema.XmlSchemaSimpleType,System.Xml.Schema.XmlSchemaDatatype&,System.String)
extern "C" void XsdValidatingReader_ValidateRestrictedSimpleTypeValue_m7223 (XsdValidatingReader_t1523 * __this, XmlSchemaSimpleType_t1109 * ___st, XmlSchemaDatatype_t1051 ** ___dt, String_t* ___normalized, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidatingReader::GetXsiType(System.String)
extern "C" Object_t * XsdValidatingReader_GetXsiType_m7224 (XsdValidatingReader_t1523 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessLocalTypeDerivationOK(System.Object,System.Object,System.Xml.Schema.XmlSchemaDerivationMethod)
extern "C" void XsdValidatingReader_AssessLocalTypeDerivationOK_m7225 (XsdValidatingReader_t1523 * __this, Object_t * ___xsiType, Object_t * ___baseType, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessStartElementSchemaValidity()
extern "C" void XsdValidatingReader_AssessStartElementSchemaValidity_m7226 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessElementLocallyValidElement(System.String)
extern "C" void XsdValidatingReader_AssessElementLocallyValidElement_m7227 (XsdValidatingReader_t1523 * __this, String_t* ___xsiNilValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessStartElementLocallyValidType(System.Object)
extern "C" void XsdValidatingReader_AssessStartElementLocallyValidType_m7228 (XsdValidatingReader_t1523 * __this, Object_t * ___schemaType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessElementLocallyValidComplexType(System.Xml.Schema.XmlSchemaComplexType)
extern "C" void XsdValidatingReader_AssessElementLocallyValidComplexType_m7229 (XsdValidatingReader_t1523 * __this, XmlSchemaComplexType_t1052 * ___cType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessAttributeLocallyValid(System.Xml.Schema.XmlSchemaAttribute)
extern "C" void XsdValidatingReader_AssessAttributeLocallyValid_m7230 (XsdValidatingReader_t1523 * __this, XmlSchemaAttribute_t1107 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessAttributeLocallyValidUse(System.Xml.Schema.XmlSchemaAttribute)
extern "C" void XsdValidatingReader_AssessAttributeLocallyValidUse_m7231 (XsdValidatingReader_t1523 * __this, XmlSchemaAttribute_t1107 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessEndElementSchemaValidity()
extern "C" void XsdValidatingReader_AssessEndElementSchemaValidity_m7232 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateEndElementKeyConstraints()
extern "C" void XsdValidatingReader_ValidateEndElementKeyConstraints_m7233 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateKeySelectors()
extern "C" void XsdValidatingReader_ValidateKeySelectors_m7234 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateKeyFields()
extern "C" void XsdValidatingReader_ValidateKeyFields_m7235 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ProcessKeyEntry(Mono.Xml.Schema.XsdKeyEntry)
extern "C" void XsdValidatingReader_ProcessKeyEntry_m7236 (XsdValidatingReader_t1523 * __this, XsdKeyEntry_t1499 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdKeyTable Mono.Xml.Schema.XsdValidatingReader::CreateNewKeyTable(System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C" XsdKeyTable_t1503 * XsdValidatingReader_CreateNewKeyTable_m7237 (XsdValidatingReader_t1523 * __this, XmlSchemaIdentityConstraint_t1110 * ___ident, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateSimpleContentIdentity(System.Xml.Schema.XmlSchemaDatatype,System.String)
extern "C" void XsdValidatingReader_ValidateSimpleContentIdentity_m7238 (XsdValidatingReader_t1523 * __this, XmlSchemaDatatype_t1051 * ___dt, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::EndIdentityValidation(Mono.Xml.Schema.XsdKeyTable)
extern "C" void XsdValidatingReader_EndIdentityValidation_m7239 (XsdValidatingReader_t1523 * __this, XsdKeyTable_t1503 * ___seq, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::EndKeyrefValidation(Mono.Xml.Schema.XsdKeyTable,System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C" void XsdValidatingReader_EndKeyrefValidation_m7240 (XsdValidatingReader_t1523 * __this, XsdKeyTable_t1503 * ___seq, XmlSchemaIdentityConstraint_t1110 * ___targetIdent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::Close()
extern "C" void XsdValidatingReader_Close_m7241 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::GetAttribute(System.Int32)
extern "C" String_t* XsdValidatingReader_GetAttribute_m7242 (XsdValidatingReader_t1523 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::GetAttribute(System.String)
extern "C" String_t* XsdValidatingReader_GetAttribute_m7243 (XsdValidatingReader_t1523 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName Mono.Xml.Schema.XsdValidatingReader::SplitQName(System.String)
extern "C" XmlQualifiedName_t985 * XsdValidatingReader_SplitQName_m7244 (XsdValidatingReader_t1523 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::GetAttribute(System.String,System.String)
extern "C" String_t* XsdValidatingReader_GetAttribute_m7245 (XsdValidatingReader_t1523 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::GetDefaultAttribute(System.String,System.String)
extern "C" String_t* XsdValidatingReader_GetDefaultAttribute_m7246 (XsdValidatingReader_t1523 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::FindDefaultAttribute(System.String,System.String)
extern "C" int32_t XsdValidatingReader_FindDefaultAttribute_m7247 (XsdValidatingReader_t1523 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::HasLineInfo()
extern "C" bool XsdValidatingReader_HasLineInfo_m7248 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::LookupNamespace(System.String)
extern "C" String_t* XsdValidatingReader_LookupNamespace_m7249 (XsdValidatingReader_t1523 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::MoveToAttribute(System.Int32)
extern "C" void XsdValidatingReader_MoveToAttribute_m7250 (XsdValidatingReader_t1523 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToAttribute(System.String)
extern "C" bool XsdValidatingReader_MoveToAttribute_m7251 (XsdValidatingReader_t1523 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToAttribute(System.String,System.String)
extern "C" bool XsdValidatingReader_MoveToAttribute_m7252 (XsdValidatingReader_t1523 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToDefaultAttribute(System.String,System.String)
extern "C" bool XsdValidatingReader_MoveToDefaultAttribute_m7253 (XsdValidatingReader_t1523 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToElement()
extern "C" bool XsdValidatingReader_MoveToElement_m7254 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToFirstAttribute()
extern "C" bool XsdValidatingReader_MoveToFirstAttribute_m7255 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToNextAttribute()
extern "C" bool XsdValidatingReader_MoveToNextAttribute_m7256 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema Mono.Xml.Schema.XsdValidatingReader::ReadExternalSchema(System.String)
extern "C" XmlSchema_t1053 * XsdValidatingReader_ReadExternalSchema_m7257 (XsdValidatingReader_t1523 * __this, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ExamineAdditionalSchema()
extern "C" void XsdValidatingReader_ExamineAdditionalSchema_m7258 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::Read()
extern "C" bool XsdValidatingReader_Read_m7259 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::ReadAttributeValue()
extern "C" bool XsdValidatingReader_ReadAttributeValue_m7260 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::ReadString()
extern "C" String_t* XsdValidatingReader_ReadString_m7261 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ResolveEntity()
extern "C" void XsdValidatingReader_ResolveEntity_m7262 (XsdValidatingReader_t1523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
