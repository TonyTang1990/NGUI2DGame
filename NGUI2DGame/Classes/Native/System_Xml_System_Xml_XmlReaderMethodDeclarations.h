#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlReader
struct XmlReader_t843;
// System.String
struct String_t;
// System.Xml.XmlReaderBinarySupport
struct XmlReaderBinarySupport_t1616;
// System.Xml.XmlNameTable
struct XmlNameTable_t1543;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t1586;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t1485;
// System.Xml.XmlParserContext
struct XmlParserContext_t1571;
// System.IO.Stream
struct Stream_t844;
// System.Xml.XmlTextReader
struct XmlTextReader_t1121;
// System.Xml.XmlException
struct XmlException_t1137;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlReader::.ctor()
extern "C" void XmlReader__ctor_m8189 (XmlReader_t843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::System.IDisposable.Dispose()
extern "C" void XmlReader_System_IDisposable_Dispose_m6967 (XmlReader_t843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlReader::get_AttributeCount()
// System.String System.Xml.XmlReader::get_BaseURI()
// System.Xml.XmlReaderBinarySupport System.Xml.XmlReader::get_Binary()
extern "C" XmlReaderBinarySupport_t1616 * XmlReader_get_Binary_m8190 (XmlReader_t843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::get_CanResolveEntity()
extern "C" bool XmlReader_get_CanResolveEntity_m8191 (XmlReader_t843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlReader::get_Depth()
// System.Boolean System.Xml.XmlReader::get_EOF()
// System.Boolean System.Xml.XmlReader::get_HasAttributes()
extern "C" bool XmlReader_get_HasAttributes_m6973 (XmlReader_t843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::get_HasValue()
// System.Boolean System.Xml.XmlReader::get_IsEmptyElement()
// System.Boolean System.Xml.XmlReader::get_IsDefault()
extern "C" bool XmlReader_get_IsDefault_m8192 (XmlReader_t843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_Item(System.Int32)
extern "C" String_t* XmlReader_get_Item_m6977 (XmlReader_t843 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_Item(System.String)
extern "C" String_t* XmlReader_get_Item_m6978 (XmlReader_t843 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_Item(System.String,System.String)
extern "C" String_t* XmlReader_get_Item_m6979 (XmlReader_t843 * __this, String_t* ___name, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_LocalName()
// System.String System.Xml.XmlReader::get_Name()
extern "C" String_t* XmlReader_get_Name_m8193 (XmlReader_t843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_NamespaceURI()
// System.Xml.XmlNameTable System.Xml.XmlReader::get_NameTable()
// System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType()
// System.String System.Xml.XmlReader::get_Prefix()
// System.Xml.ReadState System.Xml.XmlReader::get_ReadState()
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlReader::get_SchemaInfo()
extern "C" Object_t * XmlReader_get_SchemaInfo_m6987 (XmlReader_t843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings System.Xml.XmlReader::get_Settings()
extern "C" XmlReaderSettings_t1485 * XmlReader_get_Settings_m8194 (XmlReader_t843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_Value()
// System.String System.Xml.XmlReader::get_XmlLang()
extern "C" String_t* XmlReader_get_XmlLang_m8195 (XmlReader_t843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlReader::get_XmlSpace()
extern "C" int32_t XmlReader_get_XmlSpace_m8196 (XmlReader_t843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::Close()
// System.Xml.XmlNameTable System.Xml.XmlReader::PopulateNameTable(System.Xml.XmlReaderSettings)
extern "C" XmlNameTable_t1543 * XmlReader_PopulateNameTable_m8197 (Object_t * __this /* static, unused */, XmlReaderSettings_t1485 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlReader::PopulateParserContext(System.Xml.XmlReaderSettings,System.String)
extern "C" XmlParserContext_t1571 * XmlReader_PopulateParserContext_m8198 (Object_t * __this /* static, unused */, XmlReaderSettings_t1485 * ___settings, String_t* ___baseUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlReader::GetNodeType(System.Xml.XmlReaderSettings)
extern "C" int32_t XmlReader_GetNodeType_m8199 (Object_t * __this /* static, unused */, XmlReaderSettings_t1485 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.XmlReader::Create(System.IO.Stream)
extern "C" XmlReader_t843 * XmlReader_Create_m3550 (Object_t * __this /* static, unused */, Stream_t844 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.XmlReader::Create(System.IO.Stream,System.Xml.XmlReaderSettings)
extern "C" XmlReader_t843 * XmlReader_Create_m8200 (Object_t * __this /* static, unused */, Stream_t844 * ___stream, XmlReaderSettings_t1485 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings System.Xml.XmlReader::PopulateSettings(System.Xml.XmlReaderSettings)
extern "C" XmlReaderSettings_t1485 * XmlReader_PopulateSettings_m8201 (Object_t * __this /* static, unused */, XmlReaderSettings_t1485 * ___src, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.XmlReader::Create(System.IO.Stream,System.Xml.XmlReaderSettings,System.String)
extern "C" XmlReader_t843 * XmlReader_Create_m8202 (Object_t * __this /* static, unused */, Stream_t844 * ___stream, XmlReaderSettings_t1485 * ___settings, String_t* ___baseUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.XmlReader::Create(System.IO.Stream,System.Xml.XmlReaderSettings,System.Xml.XmlParserContext)
extern "C" XmlReader_t843 * XmlReader_Create_m8203 (Object_t * __this /* static, unused */, Stream_t844 * ___stream, XmlReaderSettings_t1485 * ___settings, XmlParserContext_t1571 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.XmlReader::CreateCustomizedTextReader(System.Xml.XmlTextReader,System.Xml.XmlReaderSettings)
extern "C" XmlReader_t843 * XmlReader_CreateCustomizedTextReader_m8204 (Object_t * __this /* static, unused */, XmlTextReader_t1121 * ___reader, XmlReaderSettings_t1485 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.XmlReader::CreateFilteredXmlReader(System.Xml.XmlReader,System.Xml.XmlReaderSettings)
extern "C" XmlReader_t843 * XmlReader_CreateFilteredXmlReader_m8205 (Object_t * __this /* static, unused */, XmlReader_t843 * ___reader, XmlReaderSettings_t1485 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.XmlReader::CreateValidatingXmlReader(System.Xml.XmlReader,System.Xml.XmlReaderSettings)
extern "C" XmlReader_t843 * XmlReader_CreateValidatingXmlReader_m8206 (Object_t * __this /* static, unused */, XmlReader_t843 * ___reader, XmlReaderSettings_t1485 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::Dispose(System.Boolean)
extern "C" void XmlReader_Dispose_m6993 (XmlReader_t843 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::GetAttribute(System.Int32)
// System.String System.Xml.XmlReader::GetAttribute(System.String)
// System.String System.Xml.XmlReader::GetAttribute(System.String,System.String)
// System.String System.Xml.XmlReader::LookupNamespace(System.String)
// System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32)
extern "C" void XmlReader_MoveToAttribute_m8207 (XmlReader_t843 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::MoveToAttribute(System.String)
// System.Boolean System.Xml.XmlReader::MoveToAttribute(System.String,System.String)
// System.Boolean System.Xml.XmlReader::IsContent(System.Xml.XmlNodeType)
extern "C" bool XmlReader_IsContent_m8208 (XmlReader_t843 * __this, int32_t ___nodeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent()
extern "C" int32_t XmlReader_MoveToContent_m7001 (XmlReader_t843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::MoveToElement()
// System.Boolean System.Xml.XmlReader::MoveToFirstAttribute()
// System.Boolean System.Xml.XmlReader::MoveToNextAttribute()
// System.Boolean System.Xml.XmlReader::Read()
// System.Boolean System.Xml.XmlReader::ReadAttributeValue()
// System.String System.Xml.XmlReader::ReadElementString()
extern "C" String_t* XmlReader_ReadElementString_m7007 (XmlReader_t843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::ReadEndElement()
extern "C" void XmlReader_ReadEndElement_m7008 (XmlReader_t843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::ReadInnerXml()
extern "C" String_t* XmlReader_ReadInnerXml_m7009 (XmlReader_t843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::ReadOuterXml()
extern "C" String_t* XmlReader_ReadOuterXml_m7010 (XmlReader_t843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::ReadStartElement()
extern "C" void XmlReader_ReadStartElement_m7011 (XmlReader_t843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::ReadStartElement(System.String,System.String)
extern "C" void XmlReader_ReadStartElement_m7012 (XmlReader_t843 * __this, String_t* ___localName, String_t* ___namespaceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::ReadString()
extern "C" String_t* XmlReader_ReadString_m8209 (XmlReader_t843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::ReadToFollowing(System.String,System.String)
extern "C" bool XmlReader_ReadToFollowing_m7014 (XmlReader_t843 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::ReadContentString(System.Boolean)
extern "C" String_t* XmlReader_ReadContentString_m8210 (XmlReader_t843 * __this, bool ___isText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::GetLocation()
extern "C" String_t* XmlReader_GetLocation_m8211 (XmlReader_t843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::ReadElementContentAsString()
extern "C" String_t* XmlReader_ReadElementContentAsString_m7015 (XmlReader_t843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::ResolveEntity()
// System.Void System.Xml.XmlReader::Skip()
extern "C" void XmlReader_Skip_m8212 (XmlReader_t843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlException System.Xml.XmlReader::XmlError(System.String)
extern "C" XmlException_t1137 * XmlReader_XmlError_m8213 (XmlReader_t843 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
