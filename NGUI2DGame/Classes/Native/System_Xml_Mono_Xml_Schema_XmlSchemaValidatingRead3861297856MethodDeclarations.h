#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Xml.Schema.XmlSchemaValidatingReader
struct XmlSchemaValidatingReader_t3861297856;
// System.Xml.XmlReader
struct XmlReader_t3675626668;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t1578612233;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1580700381;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t1795078578;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1345805268;
// System.Xml.XmlParserContext
struct XmlParserContext_t2728039553;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t2533799901;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t1944712516;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t248156492;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t4015859774;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t2433337156;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"
#include "System_Xml_System_Xml_XmlReaderSettings1578612233.h"
#include "System_Xml_System_Xml_Schema_ValidationEventHandle1580700381.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XmlNodeType739504597.h"
#include "System_Xml_System_Xml_ReadState3138905245.h"
#include "System_Xml_System_Xml_XmlSpace2880376877.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaValidity995929432.h"

// System.Void Mono.Xml.Schema.XmlSchemaValidatingReader::.ctor(System.Xml.XmlReader,System.Xml.XmlReaderSettings)
extern "C"  void XmlSchemaValidatingReader__ctor_m1021548035 (XmlSchemaValidatingReader_t3861297856 * __this, XmlReader_t3675626668 * ___reader0, XmlReaderSettings_t1578612233 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XmlSchemaValidatingReader::.cctor()
extern "C"  void XmlSchemaValidatingReader__cctor_m3703560697 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XmlSchemaValidatingReader::add_ValidationEventHandler(System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaValidatingReader_add_ValidationEventHandler_m216951819 (XmlSchemaValidatingReader_t3861297856 * __this, ValidationEventHandler_t1580700381 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XmlSchemaValidatingReader::remove_ValidationEventHandler(System.Xml.Schema.ValidationEventHandler)
extern "C"  void XmlSchemaValidatingReader_remove_ValidationEventHandler_m3226536078 (XmlSchemaValidatingReader_t3861297856 * __this, ValidationEventHandler_t1580700381 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XmlSchemaValidatingReader::System.Xml.IXmlLineInfo.get_LineNumber()
extern "C"  int32_t XmlSchemaValidatingReader_System_Xml_IXmlLineInfo_get_LineNumber_m506782338 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XmlSchemaValidatingReader::System.Xml.IXmlLineInfo.get_LinePosition()
extern "C"  int32_t XmlSchemaValidatingReader_System_Xml_IXmlLineInfo_get_LinePosition_m1232627336 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::System.Xml.IXmlLineInfo.HasLineInfo()
extern "C"  bool XmlSchemaValidatingReader_System_Xml_IXmlLineInfo_HasLineInfo_m2408095168 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaType Mono.Xml.Schema.XmlSchemaValidatingReader::get_ElementSchemaType()
extern "C"  XmlSchemaType_t1795078578 * XmlSchemaValidatingReader_get_ElementSchemaType_m1374573548 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XmlSchemaValidatingReader::ResetStateOnRead()
extern "C"  void XmlSchemaValidatingReader_ResetStateOnRead_m3205238443 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XmlSchemaValidatingReader::get_LineNumber()
extern "C"  int32_t XmlSchemaValidatingReader_get_LineNumber_m4127702922 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XmlSchemaValidatingReader::get_LinePosition()
extern "C"  int32_t XmlSchemaValidatingReader_get_LinePosition_m667612336 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaType Mono.Xml.Schema.XmlSchemaValidatingReader::get_SchemaType()
extern "C"  XmlSchemaType_t1795078578 * XmlSchemaValidatingReader_get_SchemaType_m2934030964 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::LookupPrefix(System.String)
extern "C"  String_t* XmlSchemaValidatingReader_LookupPrefix_m1496329779 (XmlSchemaValidatingReader_t3861297856 * __this, String_t* ___ns0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XmlSchemaValidatingReader::get_AttributeCount()
extern "C"  int32_t XmlSchemaValidatingReader_get_AttributeCount_m1535743234 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::get_BaseURI()
extern "C"  String_t* XmlSchemaValidatingReader_get_BaseURI_m2368610769 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::get_CanResolveEntity()
extern "C"  bool XmlSchemaValidatingReader_get_CanResolveEntity_m3801567880 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XmlSchemaValidatingReader::get_Depth()
extern "C"  int32_t XmlSchemaValidatingReader_get_Depth_m4142909876 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::get_EOF()
extern "C"  bool XmlSchemaValidatingReader_get_EOF_m1826870943 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::get_HasValue()
extern "C"  bool XmlSchemaValidatingReader_get_HasValue_m1033842120 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::get_IsDefault()
extern "C"  bool XmlSchemaValidatingReader_get_IsDefault_m3975096800 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::get_IsEmptyElement()
extern "C"  bool XmlSchemaValidatingReader_get_IsEmptyElement_m4113951834 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::get_Item(System.Int32)
extern "C"  String_t* XmlSchemaValidatingReader_get_Item_m3850525238 (XmlSchemaValidatingReader_t3861297856 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::get_Item(System.String)
extern "C"  String_t* XmlSchemaValidatingReader_get_Item_m1253347877 (XmlSchemaValidatingReader_t3861297856 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::get_Item(System.String,System.String)
extern "C"  String_t* XmlSchemaValidatingReader_get_Item_m3613006839 (XmlSchemaValidatingReader_t3861297856 * __this, String_t* ___localName0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::get_LocalName()
extern "C"  String_t* XmlSchemaValidatingReader_get_LocalName_m324161122 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::get_Name()
extern "C"  String_t* XmlSchemaValidatingReader_get_Name_m1751000269 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::get_NamespaceURI()
extern "C"  String_t* XmlSchemaValidatingReader_get_NamespaceURI_m471902983 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.Schema.XmlSchemaValidatingReader::get_NameTable()
extern "C"  XmlNameTable_t1345805268 * XmlSchemaValidatingReader_get_NameTable_m1479670545 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType Mono.Xml.Schema.XmlSchemaValidatingReader::get_NodeType()
extern "C"  int32_t XmlSchemaValidatingReader_get_NodeType_m1789205393 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml.Schema.XmlSchemaValidatingReader::get_ParserContext()
extern "C"  XmlParserContext_t2728039553 * XmlSchemaValidatingReader_get_ParserContext_m3601599405 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::get_Prefix()
extern "C"  String_t* XmlSchemaValidatingReader_get_Prefix_m3466022552 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState Mono.Xml.Schema.XmlSchemaValidatingReader::get_ReadState()
extern "C"  int32_t XmlSchemaValidatingReader_get_ReadState_m3708529150 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo Mono.Xml.Schema.XmlSchemaValidatingReader::get_SchemaInfo()
extern "C"  Il2CppObject * XmlSchemaValidatingReader_get_SchemaInfo_m500786319 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::get_Value()
extern "C"  String_t* XmlSchemaValidatingReader_get_Value_m1987733997 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::get_XmlLang()
extern "C"  String_t* XmlSchemaValidatingReader_get_XmlLang_m2294373003 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace Mono.Xml.Schema.XmlSchemaValidatingReader::get_XmlSpace()
extern "C"  int32_t XmlSchemaValidatingReader_get_XmlSpace_m889324412 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XmlSchemaValidatingReader::Close()
extern "C"  void XmlSchemaValidatingReader_Close_m2759144992 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::GetAttribute(System.Int32)
extern "C"  String_t* XmlSchemaValidatingReader_GetAttribute_m3383582492 (XmlSchemaValidatingReader_t3861297856 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::GetAttribute(System.String)
extern "C"  String_t* XmlSchemaValidatingReader_GetAttribute_m2080624343 (XmlSchemaValidatingReader_t3861297856 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName Mono.Xml.Schema.XmlSchemaValidatingReader::SplitQName(System.String)
extern "C"  XmlQualifiedName_t1944712516 * XmlSchemaValidatingReader_SplitQName_m3004714231 (XmlSchemaValidatingReader_t3861297856 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::GetAttribute(System.String,System.String)
extern "C"  String_t* XmlSchemaValidatingReader_GetAttribute_m420276201 (XmlSchemaValidatingReader_t3861297856 * __this, String_t* ___localName0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::GetDefaultAttribute(System.String,System.String)
extern "C"  String_t* XmlSchemaValidatingReader_GetDefaultAttribute_m1870276476 (XmlSchemaValidatingReader_t3861297856 * __this, String_t* ___localName0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XmlSchemaValidatingReader::FindDefaultAttribute(System.String,System.String)
extern "C"  int32_t XmlSchemaValidatingReader_FindDefaultAttribute_m2435652490 (XmlSchemaValidatingReader_t3861297856 * __this, String_t* ___localName0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XmlSchemaValidatingReader::LookupNamespace(System.String)
extern "C"  String_t* XmlSchemaValidatingReader_LookupNamespace_m159044306 (XmlSchemaValidatingReader_t3861297856 * __this, String_t* ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XmlSchemaValidatingReader::MoveToAttribute(System.Int32)
extern "C"  void XmlSchemaValidatingReader_MoveToAttribute_m3021675741 (XmlSchemaValidatingReader_t3861297856 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::MoveToAttribute(System.String)
extern "C"  bool XmlSchemaValidatingReader_MoveToAttribute_m3804705736 (XmlSchemaValidatingReader_t3861297856 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::MoveToAttribute(System.String,System.String)
extern "C"  bool XmlSchemaValidatingReader_MoveToAttribute_m958272272 (XmlSchemaValidatingReader_t3861297856 * __this, String_t* ___localName0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::MoveToDefaultAttribute(System.String,System.String)
extern "C"  bool XmlSchemaValidatingReader_MoveToDefaultAttribute_m2242045667 (XmlSchemaValidatingReader_t3861297856 * __this, String_t* ___localName0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::MoveToElement()
extern "C"  bool XmlSchemaValidatingReader_MoveToElement_m3969356550 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::MoveToFirstAttribute()
extern "C"  bool XmlSchemaValidatingReader_MoveToFirstAttribute_m509810670 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::MoveToNextAttribute()
extern "C"  bool XmlSchemaValidatingReader_MoveToNextAttribute_m249060863 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::Read()
extern "C"  bool XmlSchemaValidatingReader_Read_m1979458984 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::ReadAttributeValue()
extern "C"  bool XmlSchemaValidatingReader_ReadAttributeValue_m3785843911 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XmlSchemaValidatingReader::ResolveEntity()
extern "C"  void XmlSchemaValidatingReader_ResolveEntity_m47977965 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XmlSchemaValidatingReader::get_IsNil()
extern "C"  bool XmlSchemaValidatingReader_get_IsNil_m3492529082 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType Mono.Xml.Schema.XmlSchemaValidatingReader::get_MemberType()
extern "C"  XmlSchemaSimpleType_t248156492 * XmlSchemaValidatingReader_get_MemberType_m1911960689 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAttribute Mono.Xml.Schema.XmlSchemaValidatingReader::get_SchemaAttribute()
extern "C"  XmlSchemaAttribute_t4015859774 * XmlSchemaValidatingReader_get_SchemaAttribute_m1971520358 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaElement Mono.Xml.Schema.XmlSchemaValidatingReader::get_SchemaElement()
extern "C"  XmlSchemaElement_t2433337156 * XmlSchemaValidatingReader_get_SchemaElement_m3113351390 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaValidity Mono.Xml.Schema.XmlSchemaValidatingReader::get_Validity()
extern "C"  int32_t XmlSchemaValidatingReader_get_Validity_m2771951511 (XmlSchemaValidatingReader_t3861297856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
