#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlValidatingReader
struct XmlValidatingReader_t1567;
// System.Xml.XmlParserContext
struct XmlParserContext_t1571;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1543;
// System.Xml.XmlResolver
struct XmlResolver_t1520;
// System.Xml.Schema.XmlSchemaCollection
struct XmlSchemaCollection_t1635;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t1485;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Object
struct Object_t;
// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t1704;
// System.Xml.EntityHandling
#include "System_Xml_System_Xml_EntityHandling.h"
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.ValidationType
#include "System_Xml_System_Xml_ValidationType.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlValidatingReader::.ctor(System.Xml.XmlReader)
extern "C" void XmlValidatingReader__ctor_m8431 (XmlValidatingReader_t1567 * __this, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlValidatingReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C" XmlParserContext_t1571 * XmlValidatingReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m8432 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::System.Xml.IXmlNamespaceResolver.LookupPrefix(System.String)
extern "C" String_t* XmlValidatingReader_System_Xml_IXmlNamespaceResolver_LookupPrefix_m8433 (XmlValidatingReader_t1567 * __this, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlValidatingReader::get_AttributeCount()
extern "C" int32_t XmlValidatingReader_get_AttributeCount_m8434 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_BaseURI()
extern "C" String_t* XmlValidatingReader_get_BaseURI_m8435 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::get_CanResolveEntity()
extern "C" bool XmlValidatingReader_get_CanResolveEntity_m8436 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlValidatingReader::get_Depth()
extern "C" int32_t XmlValidatingReader_get_Depth_m8437 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling System.Xml.XmlValidatingReader::get_EntityHandling()
extern "C" int32_t XmlValidatingReader_get_EntityHandling_m8438 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlValidatingReader::set_EntityHandling(System.Xml.EntityHandling)
extern "C" void XmlValidatingReader_set_EntityHandling_m8439 (XmlValidatingReader_t1567 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::get_EOF()
extern "C" bool XmlValidatingReader_get_EOF_m8440 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::get_HasValue()
extern "C" bool XmlValidatingReader_get_HasValue_m8441 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::get_IsDefault()
extern "C" bool XmlValidatingReader_get_IsDefault_m8442 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::get_IsEmptyElement()
extern "C" bool XmlValidatingReader_get_IsEmptyElement_m8443 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlValidatingReader::get_LineNumber()
extern "C" int32_t XmlValidatingReader_get_LineNumber_m8444 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlValidatingReader::get_LinePosition()
extern "C" int32_t XmlValidatingReader_get_LinePosition_m8445 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_LocalName()
extern "C" String_t* XmlValidatingReader_get_LocalName_m8446 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_Name()
extern "C" String_t* XmlValidatingReader_get_Name_m8447 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::get_Namespaces()
extern "C" bool XmlValidatingReader_get_Namespaces_m8448 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_NamespaceURI()
extern "C" String_t* XmlValidatingReader_get_NamespaceURI_m8449 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlValidatingReader::get_NameTable()
extern "C" XmlNameTable_t1543 * XmlValidatingReader_get_NameTable_m8450 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlValidatingReader::get_NodeType()
extern "C" int32_t XmlValidatingReader_get_NodeType_m8451 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_Prefix()
extern "C" String_t* XmlValidatingReader_get_Prefix_m8452 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState System.Xml.XmlValidatingReader::get_ReadState()
extern "C" int32_t XmlValidatingReader_get_ReadState_m8453 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver System.Xml.XmlValidatingReader::get_Resolver()
extern "C" XmlResolver_t1520 * XmlValidatingReader_get_Resolver_m8454 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaCollection System.Xml.XmlValidatingReader::get_Schemas()
extern "C" XmlSchemaCollection_t1635 * XmlValidatingReader_get_Schemas_m8455 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings System.Xml.XmlValidatingReader::get_Settings()
extern "C" XmlReaderSettings_t1485 * XmlValidatingReader_get_Settings_m8456 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ValidationType System.Xml.XmlValidatingReader::get_ValidationType()
extern "C" int32_t XmlValidatingReader_get_ValidationType_m8457 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlValidatingReader::set_ValidationType(System.Xml.ValidationType)
extern "C" void XmlValidatingReader_set_ValidationType_m8458 (XmlValidatingReader_t1567 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_Value()
extern "C" String_t* XmlValidatingReader_get_Value_m8459 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_XmlLang()
extern "C" String_t* XmlValidatingReader_get_XmlLang_m8460 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlValidatingReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C" void XmlValidatingReader_set_XmlResolver_m8461 (XmlValidatingReader_t1567 * __this, XmlResolver_t1520 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlValidatingReader::get_XmlSpace()
extern "C" int32_t XmlValidatingReader_get_XmlSpace_m8462 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlValidatingReader::Close()
extern "C" void XmlValidatingReader_Close_m8463 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::GetAttribute(System.Int32)
extern "C" String_t* XmlValidatingReader_GetAttribute_m8464 (XmlValidatingReader_t1567 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::GetAttribute(System.String)
extern "C" String_t* XmlValidatingReader_GetAttribute_m8465 (XmlValidatingReader_t1567 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::GetAttribute(System.String,System.String)
extern "C" String_t* XmlValidatingReader_GetAttribute_m8466 (XmlValidatingReader_t1567 * __this, String_t* ___localName, String_t* ___namespaceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::HasLineInfo()
extern "C" bool XmlValidatingReader_HasLineInfo_m8467 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::LookupNamespace(System.String)
extern "C" String_t* XmlValidatingReader_LookupNamespace_m8468 (XmlValidatingReader_t1567 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlValidatingReader::MoveToAttribute(System.Int32)
extern "C" void XmlValidatingReader_MoveToAttribute_m8469 (XmlValidatingReader_t1567 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::MoveToAttribute(System.String)
extern "C" bool XmlValidatingReader_MoveToAttribute_m8470 (XmlValidatingReader_t1567 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::MoveToAttribute(System.String,System.String)
extern "C" bool XmlValidatingReader_MoveToAttribute_m8471 (XmlValidatingReader_t1567 * __this, String_t* ___localName, String_t* ___namespaceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::MoveToElement()
extern "C" bool XmlValidatingReader_MoveToElement_m8472 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::MoveToFirstAttribute()
extern "C" bool XmlValidatingReader_MoveToFirstAttribute_m8473 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::MoveToNextAttribute()
extern "C" bool XmlValidatingReader_MoveToNextAttribute_m8474 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::Read()
extern "C" bool XmlValidatingReader_Read_m8475 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::ReadAttributeValue()
extern "C" bool XmlValidatingReader_ReadAttributeValue_m8476 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::ReadString()
extern "C" String_t* XmlValidatingReader_ReadString_m8477 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlValidatingReader::ResolveEntity()
extern "C" void XmlValidatingReader_ResolveEntity_m8478 (XmlValidatingReader_t1567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlValidatingReader::OnValidationEvent(System.Object,System.Xml.Schema.ValidationEventArgs)
extern "C" void XmlValidatingReader_OnValidationEvent_m8479 (XmlValidatingReader_t1567 * __this, Object_t * ___o, ValidationEventArgs_t1704 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
