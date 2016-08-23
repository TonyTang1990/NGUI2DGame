#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNodeReaderImpl
struct XmlNodeReaderImpl_t1611;
// System.Xml.XmlParserContext
struct XmlParserContext_t1571;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1543;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t1586;
// System.Xml.XmlNode
struct XmlNode_t1124;
// System.Xml.XmlElement
struct XmlElement_t1103;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlNodeReaderImpl::.ctor(System.Xml.XmlNodeReaderImpl)
extern "C" void XmlNodeReaderImpl__ctor_m8102 (XmlNodeReaderImpl_t1611 * __this, XmlNodeReaderImpl_t1611 * ___entityContainer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReaderImpl::.ctor(System.Xml.XmlNode)
extern "C" void XmlNodeReaderImpl__ctor_m8103 (XmlNodeReaderImpl_t1611 * __this, XmlNode_t1124 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlNodeReaderImpl::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C" XmlParserContext_t1571 * XmlNodeReaderImpl_Mono_Xml_IHasXmlParserContext_get_ParserContext_m8104 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNodeReaderImpl::get_AttributeCount()
extern "C" int32_t XmlNodeReaderImpl_get_AttributeCount_m8105 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_BaseURI()
extern "C" String_t* XmlNodeReaderImpl_get_BaseURI_m8106 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::get_CanResolveEntity()
extern "C" bool XmlNodeReaderImpl_get_CanResolveEntity_m8107 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNodeReaderImpl::get_Depth()
extern "C" int32_t XmlNodeReaderImpl_get_Depth_m8108 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::get_EOF()
extern "C" bool XmlNodeReaderImpl_get_EOF_m8109 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::get_HasAttributes()
extern "C" bool XmlNodeReaderImpl_get_HasAttributes_m8110 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::get_HasValue()
extern "C" bool XmlNodeReaderImpl_get_HasValue_m8111 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::get_IsDefault()
extern "C" bool XmlNodeReaderImpl_get_IsDefault_m8112 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::get_IsEmptyElement()
extern "C" bool XmlNodeReaderImpl_get_IsEmptyElement_m8113 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_LocalName()
extern "C" String_t* XmlNodeReaderImpl_get_LocalName_m8114 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_Name()
extern "C" String_t* XmlNodeReaderImpl_get_Name_m8115 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_NamespaceURI()
extern "C" String_t* XmlNodeReaderImpl_get_NamespaceURI_m8116 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlNodeReaderImpl::get_NameTable()
extern "C" XmlNameTable_t1543 * XmlNodeReaderImpl_get_NameTable_m8117 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlNodeReaderImpl::get_NodeType()
extern "C" int32_t XmlNodeReaderImpl_get_NodeType_m8118 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_Prefix()
extern "C" String_t* XmlNodeReaderImpl_get_Prefix_m8119 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState System.Xml.XmlNodeReaderImpl::get_ReadState()
extern "C" int32_t XmlNodeReaderImpl_get_ReadState_m8120 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlNodeReaderImpl::get_SchemaInfo()
extern "C" Object_t * XmlNodeReaderImpl_get_SchemaInfo_m8121 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_Value()
extern "C" String_t* XmlNodeReaderImpl_get_Value_m8122 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_XmlLang()
extern "C" String_t* XmlNodeReaderImpl_get_XmlLang_m8123 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlNodeReaderImpl::get_XmlSpace()
extern "C" int32_t XmlNodeReaderImpl_get_XmlSpace_m8124 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReaderImpl::Close()
extern "C" void XmlNodeReaderImpl_Close_m8125 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::GetAttribute(System.Int32)
extern "C" String_t* XmlNodeReaderImpl_GetAttribute_m8126 (XmlNodeReaderImpl_t1611 * __this, int32_t ___attributeIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::GetAttribute(System.String)
extern "C" String_t* XmlNodeReaderImpl_GetAttribute_m8127 (XmlNodeReaderImpl_t1611 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::GetAttribute(System.String,System.String)
extern "C" String_t* XmlNodeReaderImpl_GetAttribute_m8128 (XmlNodeReaderImpl_t1611 * __this, String_t* ___name, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::GetXmlDeclarationAttribute(System.String)
extern "C" String_t* XmlNodeReaderImpl_GetXmlDeclarationAttribute_m8129 (XmlNodeReaderImpl_t1611 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::GetDocumentTypeAttribute(System.String)
extern "C" String_t* XmlNodeReaderImpl_GetDocumentTypeAttribute_m8130 (XmlNodeReaderImpl_t1611 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlNodeReaderImpl::GetCurrentElement()
extern "C" XmlElement_t1103 * XmlNodeReaderImpl_GetCurrentElement_m8131 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::LookupNamespace(System.String)
extern "C" String_t* XmlNodeReaderImpl_LookupNamespace_m8132 (XmlNodeReaderImpl_t1611 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::LookupPrefix(System.String)
extern "C" String_t* XmlNodeReaderImpl_LookupPrefix_m8133 (XmlNodeReaderImpl_t1611 * __this, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::LookupPrefix(System.String,System.Boolean)
extern "C" String_t* XmlNodeReaderImpl_LookupPrefix_m8134 (XmlNodeReaderImpl_t1611 * __this, String_t* ___ns, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReaderImpl::MoveToAttribute(System.Int32)
extern "C" void XmlNodeReaderImpl_MoveToAttribute_m8135 (XmlNodeReaderImpl_t1611 * __this, int32_t ___attributeIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::MoveToAttribute(System.String)
extern "C" bool XmlNodeReaderImpl_MoveToAttribute_m8136 (XmlNodeReaderImpl_t1611 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::MoveToAttribute(System.String,System.String)
extern "C" bool XmlNodeReaderImpl_MoveToAttribute_m8137 (XmlNodeReaderImpl_t1611 * __this, String_t* ___name, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::MoveToElement()
extern "C" bool XmlNodeReaderImpl_MoveToElement_m8138 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::MoveToFirstAttribute()
extern "C" bool XmlNodeReaderImpl_MoveToFirstAttribute_m8139 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::MoveToNextAttribute()
extern "C" bool XmlNodeReaderImpl_MoveToNextAttribute_m8140 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::Read()
extern "C" bool XmlNodeReaderImpl_Read_m8141 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::ReadContent()
extern "C" bool XmlNodeReaderImpl_ReadContent_m8142 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::ReadAttributeValue()
extern "C" bool XmlNodeReaderImpl_ReadAttributeValue_m8143 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::ReadString()
extern "C" String_t* XmlNodeReaderImpl_ReadString_m8144 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReaderImpl::ResolveEntity()
extern "C" void XmlNodeReaderImpl_ResolveEntity_m8145 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReaderImpl::Skip()
extern "C" void XmlNodeReaderImpl_Skip_m8146 (XmlNodeReaderImpl_t1611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
