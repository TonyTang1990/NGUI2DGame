#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNodeReader
struct XmlNodeReader_t1125;
// System.Xml.XmlParserContext
struct XmlParserContext_t1571;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1543;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t1586;
// System.Xml.XmlNode
struct XmlNode_t1124;
// System.Xml.XmlNodeReaderImpl
struct XmlNodeReaderImpl_t1611;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlNodeReader::.ctor(System.Xml.XmlNode)
extern "C" void XmlNodeReader__ctor_m5011 (XmlNodeReader_t1125 * __this, XmlNode_t1124 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReader::.ctor(System.Xml.XmlNodeReaderImpl,System.Boolean)
extern "C" void XmlNodeReader__ctor_m8062 (XmlNodeReader_t1125 * __this, XmlNodeReaderImpl_t1611 * ___entityContainer, bool ___insideAttribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlNodeReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C" XmlParserContext_t1571 * XmlNodeReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m8063 (XmlNodeReader_t1125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::System.Xml.IXmlNamespaceResolver.LookupPrefix(System.String)
extern "C" String_t* XmlNodeReader_System_Xml_IXmlNamespaceResolver_LookupPrefix_m8064 (XmlNodeReader_t1125 * __this, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.XmlNodeReader::get_Current()
extern "C" XmlReader_t843 * XmlNodeReader_get_Current_m8065 (XmlNodeReader_t1125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNodeReader::get_AttributeCount()
extern "C" int32_t XmlNodeReader_get_AttributeCount_m8066 (XmlNodeReader_t1125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_BaseURI()
extern "C" String_t* XmlNodeReader_get_BaseURI_m8067 (XmlNodeReader_t1125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_CanResolveEntity()
extern "C" bool XmlNodeReader_get_CanResolveEntity_m8068 (XmlNodeReader_t1125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNodeReader::get_Depth()
extern "C" int32_t XmlNodeReader_get_Depth_m8069 (XmlNodeReader_t1125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_EOF()
extern "C" bool XmlNodeReader_get_EOF_m8070 (XmlNodeReader_t1125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_HasAttributes()
extern "C" bool XmlNodeReader_get_HasAttributes_m8071 (XmlNodeReader_t1125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_HasValue()
extern "C" bool XmlNodeReader_get_HasValue_m8072 (XmlNodeReader_t1125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_IsDefault()
extern "C" bool XmlNodeReader_get_IsDefault_m8073 (XmlNodeReader_t1125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_IsEmptyElement()
extern "C" bool XmlNodeReader_get_IsEmptyElement_m8074 (XmlNodeReader_t1125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_LocalName()
extern "C" String_t* XmlNodeReader_get_LocalName_m8075 (XmlNodeReader_t1125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_Name()
extern "C" String_t* XmlNodeReader_get_Name_m8076 (XmlNodeReader_t1125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_NamespaceURI()
extern "C" String_t* XmlNodeReader_get_NamespaceURI_m8077 (XmlNodeReader_t1125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlNodeReader::get_NameTable()
extern "C" XmlNameTable_t1543 * XmlNodeReader_get_NameTable_m8078 (XmlNodeReader_t1125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlNodeReader::get_NodeType()
extern "C" int32_t XmlNodeReader_get_NodeType_m8079 (XmlNodeReader_t1125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_Prefix()
extern "C" String_t* XmlNodeReader_get_Prefix_m8080 (XmlNodeReader_t1125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState System.Xml.XmlNodeReader::get_ReadState()
extern "C" int32_t XmlNodeReader_get_ReadState_m8081 (XmlNodeReader_t1125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlNodeReader::get_SchemaInfo()
extern "C" Object_t * XmlNodeReader_get_SchemaInfo_m8082 (XmlNodeReader_t1125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_Value()
extern "C" String_t* XmlNodeReader_get_Value_m8083 (XmlNodeReader_t1125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_XmlLang()
extern "C" String_t* XmlNodeReader_get_XmlLang_m8084 (XmlNodeReader_t1125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlNodeReader::get_XmlSpace()
extern "C" int32_t XmlNodeReader_get_XmlSpace_m8085 (XmlNodeReader_t1125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReader::Close()
extern "C" void XmlNodeReader_Close_m8086 (XmlNodeReader_t1125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::GetAttribute(System.Int32)
extern "C" String_t* XmlNodeReader_GetAttribute_m8087 (XmlNodeReader_t1125 * __this, int32_t ___attributeIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::GetAttribute(System.String)
extern "C" String_t* XmlNodeReader_GetAttribute_m8088 (XmlNodeReader_t1125 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::GetAttribute(System.String,System.String)
extern "C" String_t* XmlNodeReader_GetAttribute_m8089 (XmlNodeReader_t1125 * __this, String_t* ___name, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::LookupNamespace(System.String)
extern "C" String_t* XmlNodeReader_LookupNamespace_m8090 (XmlNodeReader_t1125 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReader::MoveToAttribute(System.Int32)
extern "C" void XmlNodeReader_MoveToAttribute_m8091 (XmlNodeReader_t1125 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::MoveToAttribute(System.String)
extern "C" bool XmlNodeReader_MoveToAttribute_m8092 (XmlNodeReader_t1125 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::MoveToAttribute(System.String,System.String)
extern "C" bool XmlNodeReader_MoveToAttribute_m8093 (XmlNodeReader_t1125 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::MoveToElement()
extern "C" bool XmlNodeReader_MoveToElement_m8094 (XmlNodeReader_t1125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::MoveToFirstAttribute()
extern "C" bool XmlNodeReader_MoveToFirstAttribute_m8095 (XmlNodeReader_t1125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::MoveToNextAttribute()
extern "C" bool XmlNodeReader_MoveToNextAttribute_m8096 (XmlNodeReader_t1125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::Read()
extern "C" bool XmlNodeReader_Read_m8097 (XmlNodeReader_t1125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::ReadAttributeValue()
extern "C" bool XmlNodeReader_ReadAttributeValue_m8098 (XmlNodeReader_t1125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::ReadString()
extern "C" String_t* XmlNodeReader_ReadString_m8099 (XmlNodeReader_t1125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReader::ResolveEntity()
extern "C" void XmlNodeReader_ResolveEntity_m8100 (XmlNodeReader_t1125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReader::Skip()
extern "C" void XmlNodeReader_Skip_m8101 (XmlNodeReader_t1125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
