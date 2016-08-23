#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XmlSchemaValidatingReader
struct XmlSchemaValidatingReader_t1486;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t1145;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1543;
// System.Xml.XmlParserContext
struct XmlParserContext_t1571;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t1586;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t1109;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t1107;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t1054;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t1485;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1144;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t985;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"
// System.Xml.Schema.XmlSchemaValidity
#include "System_Xml_System_Xml_Schema_XmlSchemaValidity.h"

// System.Void Mono.Xml.Schema.XmlSchemaValidatingReader::.ctor(System.Xml.XmlReader,System.Xml.XmlReaderSettings)
extern "C" void XmlSchemaValidatingReader__ctor_m7030 (XmlSchemaValidatingReader_t1486 * __this, XmlReader_t843 * ___reader, XmlReaderSettings_t1485 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XmlSchemaValidatingReader::.cctor()
extern "C" void XmlSchemaValidatingReader__cctor_m7031 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XmlSchemaValidatingReader::add_ValidationEventHandler(System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaValidatingReader_add_ValidationEventHandler_m7032 (XmlSchemaValidatingReader_t1486 * __this, ValidationEventHandler_t1144 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XmlSchemaValidatingReader::remove_ValidationEventHandler(System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaValidatingReader_remove_ValidationEventHandler_m7033 (XmlSchemaValidatingReader_t1486 * __this, ValidationEventHandler_t1144 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XmlSchemaValidatingReader::System.Xml.IXmlLineInfo.get_LineNumber()
extern "C" int32_t XmlSchemaValidatingReader_System_Xml_IXmlLineInfo_get_LineNumber_m7034 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XmlSchemaValidatingReader::System.Xml.IXmlLineInfo.get_LinePosition()
extern "C" int32_t XmlSchemaValidatingReader_System_Xml_IXmlLineInfo_get_LinePosition_m7035 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::System.Xml.IXmlLineInfo.HasLineInfo()
extern "C" bool XmlSchemaValidatingReader_System_Xml_IXmlLineInfo_HasLineInfo_m7036 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaType Mono.Xml.Schema.XmlSchemaValidatingReader::get_ElementSchemaType()
extern "C" XmlSchemaType_t1145 * XmlSchemaValidatingReader_get_ElementSchemaType_m7037 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XmlSchemaValidatingReader::ResetStateOnRead()
extern "C" void XmlSchemaValidatingReader_ResetStateOnRead_m7038 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XmlSchemaValidatingReader::get_LineNumber()
extern "C" int32_t XmlSchemaValidatingReader_get_LineNumber_m7039 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XmlSchemaValidatingReader::get_LinePosition()
extern "C" int32_t XmlSchemaValidatingReader_get_LinePosition_m7040 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaType Mono.Xml.Schema.XmlSchemaValidatingReader::get_SchemaType()
extern "C" XmlSchemaType_t1145 * XmlSchemaValidatingReader_get_SchemaType_m7041 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::LookupPrefix(System.String)
extern "C" String_t* XmlSchemaValidatingReader_LookupPrefix_m7042 (XmlSchemaValidatingReader_t1486 * __this, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XmlSchemaValidatingReader::get_AttributeCount()
extern "C" int32_t XmlSchemaValidatingReader_get_AttributeCount_m7043 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::get_BaseURI()
extern "C" String_t* XmlSchemaValidatingReader_get_BaseURI_m7044 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::get_CanResolveEntity()
extern "C" bool XmlSchemaValidatingReader_get_CanResolveEntity_m7045 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XmlSchemaValidatingReader::get_Depth()
extern "C" int32_t XmlSchemaValidatingReader_get_Depth_m7046 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::get_EOF()
extern "C" bool XmlSchemaValidatingReader_get_EOF_m7047 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::get_HasValue()
extern "C" bool XmlSchemaValidatingReader_get_HasValue_m7048 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::get_IsDefault()
extern "C" bool XmlSchemaValidatingReader_get_IsDefault_m7049 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::get_IsEmptyElement()
extern "C" bool XmlSchemaValidatingReader_get_IsEmptyElement_m7050 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::get_Item(System.Int32)
extern "C" String_t* XmlSchemaValidatingReader_get_Item_m7051 (XmlSchemaValidatingReader_t1486 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::get_Item(System.String)
extern "C" String_t* XmlSchemaValidatingReader_get_Item_m7052 (XmlSchemaValidatingReader_t1486 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::get_Item(System.String,System.String)
extern "C" String_t* XmlSchemaValidatingReader_get_Item_m7053 (XmlSchemaValidatingReader_t1486 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::get_LocalName()
extern "C" String_t* XmlSchemaValidatingReader_get_LocalName_m7054 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::get_Name()
extern "C" String_t* XmlSchemaValidatingReader_get_Name_m7055 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::get_NamespaceURI()
extern "C" String_t* XmlSchemaValidatingReader_get_NamespaceURI_m7056 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.Schema.XmlSchemaValidatingReader::get_NameTable()
extern "C" XmlNameTable_t1543 * XmlSchemaValidatingReader_get_NameTable_m7057 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType Mono.Xml.Schema.XmlSchemaValidatingReader::get_NodeType()
extern "C" int32_t XmlSchemaValidatingReader_get_NodeType_m7058 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml.Schema.XmlSchemaValidatingReader::get_ParserContext()
extern "C" XmlParserContext_t1571 * XmlSchemaValidatingReader_get_ParserContext_m7059 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::get_Prefix()
extern "C" String_t* XmlSchemaValidatingReader_get_Prefix_m7060 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState Mono.Xml.Schema.XmlSchemaValidatingReader::get_ReadState()
extern "C" int32_t XmlSchemaValidatingReader_get_ReadState_m7061 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo Mono.Xml.Schema.XmlSchemaValidatingReader::get_SchemaInfo()
extern "C" Object_t * XmlSchemaValidatingReader_get_SchemaInfo_m7062 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::get_Value()
extern "C" String_t* XmlSchemaValidatingReader_get_Value_m7063 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::get_XmlLang()
extern "C" String_t* XmlSchemaValidatingReader_get_XmlLang_m7064 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace Mono.Xml.Schema.XmlSchemaValidatingReader::get_XmlSpace()
extern "C" int32_t XmlSchemaValidatingReader_get_XmlSpace_m7065 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XmlSchemaValidatingReader::Close()
extern "C" void XmlSchemaValidatingReader_Close_m7066 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::GetAttribute(System.Int32)
extern "C" String_t* XmlSchemaValidatingReader_GetAttribute_m7067 (XmlSchemaValidatingReader_t1486 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::GetAttribute(System.String)
extern "C" String_t* XmlSchemaValidatingReader_GetAttribute_m7068 (XmlSchemaValidatingReader_t1486 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName Mono.Xml.Schema.XmlSchemaValidatingReader::SplitQName(System.String)
extern "C" XmlQualifiedName_t985 * XmlSchemaValidatingReader_SplitQName_m7069 (XmlSchemaValidatingReader_t1486 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::GetAttribute(System.String,System.String)
extern "C" String_t* XmlSchemaValidatingReader_GetAttribute_m7070 (XmlSchemaValidatingReader_t1486 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::GetDefaultAttribute(System.String,System.String)
extern "C" String_t* XmlSchemaValidatingReader_GetDefaultAttribute_m7071 (XmlSchemaValidatingReader_t1486 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XmlSchemaValidatingReader::FindDefaultAttribute(System.String,System.String)
extern "C" int32_t XmlSchemaValidatingReader_FindDefaultAttribute_m7072 (XmlSchemaValidatingReader_t1486 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::LookupNamespace(System.String)
extern "C" String_t* XmlSchemaValidatingReader_LookupNamespace_m7073 (XmlSchemaValidatingReader_t1486 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XmlSchemaValidatingReader::MoveToAttribute(System.Int32)
extern "C" void XmlSchemaValidatingReader_MoveToAttribute_m7074 (XmlSchemaValidatingReader_t1486 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::MoveToAttribute(System.String)
extern "C" bool XmlSchemaValidatingReader_MoveToAttribute_m7075 (XmlSchemaValidatingReader_t1486 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::MoveToAttribute(System.String,System.String)
extern "C" bool XmlSchemaValidatingReader_MoveToAttribute_m7076 (XmlSchemaValidatingReader_t1486 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::MoveToDefaultAttribute(System.String,System.String)
extern "C" bool XmlSchemaValidatingReader_MoveToDefaultAttribute_m7077 (XmlSchemaValidatingReader_t1486 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::MoveToElement()
extern "C" bool XmlSchemaValidatingReader_MoveToElement_m7078 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::MoveToFirstAttribute()
extern "C" bool XmlSchemaValidatingReader_MoveToFirstAttribute_m7079 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::MoveToNextAttribute()
extern "C" bool XmlSchemaValidatingReader_MoveToNextAttribute_m7080 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::Read()
extern "C" bool XmlSchemaValidatingReader_Read_m7081 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::ReadAttributeValue()
extern "C" bool XmlSchemaValidatingReader_ReadAttributeValue_m7082 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XmlSchemaValidatingReader::ResolveEntity()
extern "C" void XmlSchemaValidatingReader_ResolveEntity_m7083 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::get_IsNil()
extern "C" bool XmlSchemaValidatingReader_get_IsNil_m7084 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType Mono.Xml.Schema.XmlSchemaValidatingReader::get_MemberType()
extern "C" XmlSchemaSimpleType_t1109 * XmlSchemaValidatingReader_get_MemberType_m7085 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAttribute Mono.Xml.Schema.XmlSchemaValidatingReader::get_SchemaAttribute()
extern "C" XmlSchemaAttribute_t1107 * XmlSchemaValidatingReader_get_SchemaAttribute_m7086 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaElement Mono.Xml.Schema.XmlSchemaValidatingReader::get_SchemaElement()
extern "C" XmlSchemaElement_t1054 * XmlSchemaValidatingReader_get_SchemaElement_m7087 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaValidity Mono.Xml.Schema.XmlSchemaValidatingReader::get_Validity()
extern "C" int32_t XmlSchemaValidatingReader_get_Validity_m7088 (XmlSchemaValidatingReader_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
