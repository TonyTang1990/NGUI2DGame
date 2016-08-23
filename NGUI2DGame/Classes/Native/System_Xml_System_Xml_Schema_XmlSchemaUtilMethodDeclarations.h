#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaUtil
struct XmlSchemaUtil_t1761;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t1149;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1146;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t985;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1144;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t915;
// System.Xml.XmlParserContext
struct XmlParserContext_t1571;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t1109;
// System.Object
struct Object_t;
// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t1500;
// System.String[]
struct StringU5BU5D_t258;
// System.Xml.XmlAttribute
struct XmlAttribute_t1123;
// System.Exception
struct Exception_t306;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1053;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t1141;
// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t1706;
// System.Xml.Schema.XmlSchemaAttributeGroup
struct XmlSchemaAttributeGroup_t1707;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t1107;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t1102;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t1052;
// System.Xml.Schema.XmlSchemaDerivationMethod
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMethod.h"
// System.Xml.Schema.XmlSchemaForm
#include "System_Xml_System_Xml_Schema_XmlSchemaForm.h"
// System.Xml.Schema.XmlSchemaContentProcessing
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProcessing.h"
// System.Xml.Schema.XmlSchemaUse
#include "System_Xml_System_Xml_Schema_XmlSchemaUse.h"

// System.Void System.Xml.Schema.XmlSchemaUtil::.cctor()
extern "C" void XmlSchemaUtil__cctor_m9657 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::AddToTable(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.XmlSchemaObject,System.Xml.XmlQualifiedName,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaUtil_AddToTable_m9658 (Object_t * __this /* static, unused */, XmlSchemaObjectTable_t1149 * ___table, XmlSchemaObject_t1146 * ___obj, XmlQualifiedName_t985 * ___qname, ValidationEventHandler_t1144 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::CompileID(System.String,System.Xml.Schema.XmlSchemaObject,System.Collections.Hashtable,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaUtil_CompileID_m9659 (Object_t * __this /* static, unused */, String_t* ___id, XmlSchemaObject_t1146 * ___xso, Hashtable_t915 * ___idCollection, ValidationEventHandler_t1144 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckAnyUri(System.String)
extern "C" bool XmlSchemaUtil_CheckAnyUri_m9660 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckNormalizedString(System.String)
extern "C" bool XmlSchemaUtil_CheckNormalizedString_m9661 (Object_t * __this /* static, unused */, String_t* ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckNCName(System.String)
extern "C" bool XmlSchemaUtil_CheckNCName_m9662 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckQName(System.Xml.XmlQualifiedName)
extern "C" bool XmlSchemaUtil_CheckQName_m9663 (Object_t * __this /* static, unused */, XmlQualifiedName_t985 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.Schema.XmlSchemaUtil::GetParserContext(System.Xml.XmlReader)
extern "C" XmlParserContext_t1571 * XmlSchemaUtil_GetParserContext_m9664 (Object_t * __this /* static, unused */, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::IsBuiltInDatatypeName(System.Xml.XmlQualifiedName)
extern "C" bool XmlSchemaUtil_IsBuiltInDatatypeName_m9665 (Object_t * __this /* static, unused */, XmlQualifiedName_t985 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::AreSchemaDatatypeEqual(System.Xml.Schema.XmlSchemaSimpleType,System.Object,System.Xml.Schema.XmlSchemaSimpleType,System.Object)
extern "C" bool XmlSchemaUtil_AreSchemaDatatypeEqual_m9666 (Object_t * __this /* static, unused */, XmlSchemaSimpleType_t1109 * ___st1, Object_t * ___v1, XmlSchemaSimpleType_t1109 * ___st2, Object_t * ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::AreSchemaDatatypeEqual(Mono.Xml.Schema.XsdAnySimpleType,System.Object,Mono.Xml.Schema.XsdAnySimpleType,System.Object)
extern "C" bool XmlSchemaUtil_AreSchemaDatatypeEqual_m9667 (Object_t * __this /* static, unused */, XsdAnySimpleType_t1500 * ___st1, Object_t * ___v1, XsdAnySimpleType_t1500 * ___st2, Object_t * ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::IsValidQName(System.String)
extern "C" bool XmlSchemaUtil_IsValidQName_m9668 (Object_t * __this /* static, unused */, String_t* ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Xml.Schema.XmlSchemaUtil::SplitList(System.String)
extern "C" StringU5BU5D_t258* XmlSchemaUtil_SplitList_m9669 (Object_t * __this /* static, unused */, String_t* ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::ReadUnhandledAttribute(System.Xml.XmlReader,System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaUtil_ReadUnhandledAttribute_m9670 (Object_t * __this /* static, unused */, XmlReader_t843 * ___reader, XmlSchemaObject_t1146 * ___xso, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::ParseWsdlArrayType(System.Xml.XmlReader,System.Xml.XmlAttribute)
extern "C" void XmlSchemaUtil_ParseWsdlArrayType_m9671 (Object_t * __this /* static, unused */, XmlReader_t843 * ___reader, XmlAttribute_t1123 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::ReadBoolAttribute(System.Xml.XmlReader,System.Exception&)
extern "C" bool XmlSchemaUtil_ReadBoolAttribute_m9672 (Object_t * __this /* static, unused */, XmlReader_t843 * ___reader, Exception_t306 ** ___innerExcpetion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaUtil::ReadDerivationAttribute(System.Xml.XmlReader,System.Exception&,System.String,System.Xml.Schema.XmlSchemaDerivationMethod)
extern "C" int32_t XmlSchemaUtil_ReadDerivationAttribute_m9673 (Object_t * __this /* static, unused */, XmlReader_t843 * ___reader, Exception_t306 ** ___innerExcpetion, String_t* ___name, int32_t ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaUtil::AddFlag(System.Xml.Schema.XmlSchemaDerivationMethod,System.Xml.Schema.XmlSchemaDerivationMethod,System.Xml.Schema.XmlSchemaDerivationMethod)
extern "C" int32_t XmlSchemaUtil_AddFlag_m9674 (Object_t * __this /* static, unused */, int32_t ___dst, int32_t ___add, int32_t ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchemaUtil::ReadFormAttribute(System.Xml.XmlReader,System.Exception&)
extern "C" int32_t XmlSchemaUtil_ReadFormAttribute_m9675 (Object_t * __this /* static, unused */, XmlReader_t843 * ___reader, Exception_t306 ** ___innerExcpetion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaUtil::ReadProcessingAttribute(System.Xml.XmlReader,System.Exception&)
extern "C" int32_t XmlSchemaUtil_ReadProcessingAttribute_m9676 (Object_t * __this /* static, unused */, XmlReader_t843 * ___reader, Exception_t306 ** ___innerExcpetion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaUse System.Xml.Schema.XmlSchemaUtil::ReadUseAttribute(System.Xml.XmlReader,System.Exception&)
extern "C" int32_t XmlSchemaUtil_ReadUseAttribute_m9677 (Object_t * __this /* static, unused */, XmlReader_t843 * ___reader, Exception_t306 ** ___innerExcpetion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaUtil::ReadQNameAttribute(System.Xml.XmlReader,System.Exception&)
extern "C" XmlQualifiedName_t985 * XmlSchemaUtil_ReadQNameAttribute_m9678 (Object_t * __this /* static, unused */, XmlReader_t843 * ___reader, Exception_t306 ** ___innerEx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaUtil::ToQName(System.Xml.XmlReader,System.String,System.Exception&)
extern "C" XmlQualifiedName_t985 * XmlSchemaUtil_ToQName_m9679 (Object_t * __this /* static, unused */, XmlReader_t843 * ___reader, String_t* ___qnamestr, Exception_t306 ** ___innerEx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaUtil::ValidateAttributesResolved(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaObjectCollection,System.Xml.Schema.XmlSchemaAnyAttribute,System.Xml.Schema.XmlSchemaAnyAttribute&,System.Xml.Schema.XmlSchemaAttributeGroup,System.Boolean)
extern "C" int32_t XmlSchemaUtil_ValidateAttributesResolved_m9680 (Object_t * __this /* static, unused */, XmlSchemaObjectTable_t1149 * ___attributesResolved, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, XmlSchemaObjectCollection_t1141 * ___attributes, XmlSchemaAnyAttribute_t1706 * ___anyAttribute, XmlSchemaAnyAttribute_t1706 ** ___anyAttributeUse, XmlSchemaAttributeGroup_t1707 * ___redefined, bool ___skipEquivalent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::AreAttributesEqual(System.Xml.Schema.XmlSchemaAttribute,System.Xml.Schema.XmlSchemaAttribute)
extern "C" bool XmlSchemaUtil_AreAttributesEqual_m9681 (Object_t * __this /* static, unused */, XmlSchemaAttribute_t1107 * ___one, XmlSchemaAttribute_t1107 * ___another, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaUtil::FindAttributeDeclaration(System.String,System.Xml.Schema.XmlSchemaSet,System.Xml.Schema.XmlSchemaComplexType,System.Xml.XmlQualifiedName)
extern "C" XmlSchemaObject_t1146 * XmlSchemaUtil_FindAttributeDeclaration_m9682 (Object_t * __this /* static, unused */, String_t* ___ns, XmlSchemaSet_t1102 * ___schemas, XmlSchemaComplexType_t1052 * ___cType, XmlQualifiedName_t985 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::AttributeWildcardItemValid(System.Xml.Schema.XmlSchemaAnyAttribute,System.Xml.XmlQualifiedName,System.String)
extern "C" bool XmlSchemaUtil_AttributeWildcardItemValid_m9683 (Object_t * __this /* static, unused */, XmlSchemaAnyAttribute_t1706 * ___anyAttr, XmlQualifiedName_t985 * ___qname, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
