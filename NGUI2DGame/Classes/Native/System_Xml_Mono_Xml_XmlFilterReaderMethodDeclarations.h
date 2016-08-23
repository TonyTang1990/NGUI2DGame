#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.XmlFilterReader
struct XmlFilterReader_t1526;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1543;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t1586;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t1485;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"

// System.Void Mono.Xml.XmlFilterReader::.ctor(System.Xml.XmlReader,System.Xml.XmlReaderSettings)
extern "C" void XmlFilterReader__ctor_m7288 (XmlFilterReader_t1526 * __this, XmlReader_t843 * ___reader, XmlReaderSettings_t1485 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.XmlFilterReader::get_LineNumber()
extern "C" int32_t XmlFilterReader_get_LineNumber_m7289 (XmlFilterReader_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.XmlFilterReader::get_LinePosition()
extern "C" int32_t XmlFilterReader_get_LinePosition_m7290 (XmlFilterReader_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType Mono.Xml.XmlFilterReader::get_NodeType()
extern "C" int32_t XmlFilterReader_get_NodeType_m7291 (XmlFilterReader_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XmlFilterReader::get_Name()
extern "C" String_t* XmlFilterReader_get_Name_m7292 (XmlFilterReader_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XmlFilterReader::get_LocalName()
extern "C" String_t* XmlFilterReader_get_LocalName_m7293 (XmlFilterReader_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XmlFilterReader::get_NamespaceURI()
extern "C" String_t* XmlFilterReader_get_NamespaceURI_m7294 (XmlFilterReader_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XmlFilterReader::get_Prefix()
extern "C" String_t* XmlFilterReader_get_Prefix_m7295 (XmlFilterReader_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XmlFilterReader::get_HasValue()
extern "C" bool XmlFilterReader_get_HasValue_m7296 (XmlFilterReader_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.XmlFilterReader::get_Depth()
extern "C" int32_t XmlFilterReader_get_Depth_m7297 (XmlFilterReader_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XmlFilterReader::get_Value()
extern "C" String_t* XmlFilterReader_get_Value_m7298 (XmlFilterReader_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XmlFilterReader::get_BaseURI()
extern "C" String_t* XmlFilterReader_get_BaseURI_m7299 (XmlFilterReader_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XmlFilterReader::get_IsEmptyElement()
extern "C" bool XmlFilterReader_get_IsEmptyElement_m7300 (XmlFilterReader_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XmlFilterReader::get_IsDefault()
extern "C" bool XmlFilterReader_get_IsDefault_m7301 (XmlFilterReader_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XmlFilterReader::get_XmlLang()
extern "C" String_t* XmlFilterReader_get_XmlLang_m7302 (XmlFilterReader_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace Mono.Xml.XmlFilterReader::get_XmlSpace()
extern "C" int32_t XmlFilterReader_get_XmlSpace_m7303 (XmlFilterReader_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.XmlFilterReader::get_AttributeCount()
extern "C" int32_t XmlFilterReader_get_AttributeCount_m7304 (XmlFilterReader_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XmlFilterReader::get_Item(System.Int32)
extern "C" String_t* XmlFilterReader_get_Item_m7305 (XmlFilterReader_t1526 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XmlFilterReader::get_Item(System.String)
extern "C" String_t* XmlFilterReader_get_Item_m7306 (XmlFilterReader_t1526 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XmlFilterReader::get_Item(System.String,System.String)
extern "C" String_t* XmlFilterReader_get_Item_m7307 (XmlFilterReader_t1526 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XmlFilterReader::get_EOF()
extern "C" bool XmlFilterReader_get_EOF_m7308 (XmlFilterReader_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState Mono.Xml.XmlFilterReader::get_ReadState()
extern "C" int32_t XmlFilterReader_get_ReadState_m7309 (XmlFilterReader_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.XmlFilterReader::get_NameTable()
extern "C" XmlNameTable_t1543 * XmlFilterReader_get_NameTable_m7310 (XmlFilterReader_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo Mono.Xml.XmlFilterReader::get_SchemaInfo()
extern "C" Object_t * XmlFilterReader_get_SchemaInfo_m7311 (XmlFilterReader_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings Mono.Xml.XmlFilterReader::get_Settings()
extern "C" XmlReaderSettings_t1485 * XmlFilterReader_get_Settings_m7312 (XmlFilterReader_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XmlFilterReader::GetAttribute(System.String)
extern "C" String_t* XmlFilterReader_GetAttribute_m7313 (XmlFilterReader_t1526 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XmlFilterReader::GetAttribute(System.String,System.String)
extern "C" String_t* XmlFilterReader_GetAttribute_m7314 (XmlFilterReader_t1526 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XmlFilterReader::GetAttribute(System.Int32)
extern "C" String_t* XmlFilterReader_GetAttribute_m7315 (XmlFilterReader_t1526 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XmlFilterReader::HasLineInfo()
extern "C" bool XmlFilterReader_HasLineInfo_m7316 (XmlFilterReader_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XmlFilterReader::MoveToAttribute(System.String)
extern "C" bool XmlFilterReader_MoveToAttribute_m7317 (XmlFilterReader_t1526 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XmlFilterReader::MoveToAttribute(System.String,System.String)
extern "C" bool XmlFilterReader_MoveToAttribute_m7318 (XmlFilterReader_t1526 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.XmlFilterReader::MoveToAttribute(System.Int32)
extern "C" void XmlFilterReader_MoveToAttribute_m7319 (XmlFilterReader_t1526 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XmlFilterReader::MoveToFirstAttribute()
extern "C" bool XmlFilterReader_MoveToFirstAttribute_m7320 (XmlFilterReader_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XmlFilterReader::MoveToNextAttribute()
extern "C" bool XmlFilterReader_MoveToNextAttribute_m7321 (XmlFilterReader_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XmlFilterReader::MoveToElement()
extern "C" bool XmlFilterReader_MoveToElement_m7322 (XmlFilterReader_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.XmlFilterReader::Close()
extern "C" void XmlFilterReader_Close_m7323 (XmlFilterReader_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XmlFilterReader::Read()
extern "C" bool XmlFilterReader_Read_m7324 (XmlFilterReader_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XmlFilterReader::ReadString()
extern "C" String_t* XmlFilterReader_ReadString_m7325 (XmlFilterReader_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XmlFilterReader::LookupNamespace(System.String)
extern "C" String_t* XmlFilterReader_LookupNamespace_m7326 (XmlFilterReader_t1526 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.XmlFilterReader::ResolveEntity()
extern "C" void XmlFilterReader_ResolveEntity_m7327 (XmlFilterReader_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XmlFilterReader::ReadAttributeValue()
extern "C" bool XmlFilterReader_ReadAttributeValue_m7328 (XmlFilterReader_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
