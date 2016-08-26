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

// Mono.Xml.XmlFilterReader
struct XmlFilterReader_t256953178;
// System.Xml.XmlReader
struct XmlReader_t3675626668;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t1578612233;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1345805268;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t2533799901;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"
#include "System_Xml_System_Xml_XmlReaderSettings1578612233.h"
#include "System_Xml_System_Xml_XmlNodeType739504597.h"
#include "System_Xml_System_Xml_XmlSpace2880376877.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_ReadState3138905245.h"

// System.Void Mono.Xml.XmlFilterReader::.ctor(System.Xml.XmlReader,System.Xml.XmlReaderSettings)
extern "C"  void XmlFilterReader__ctor_m442614424 (XmlFilterReader_t256953178 * __this, XmlReader_t3675626668 * ___reader0, XmlReaderSettings_t1578612233 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.XmlFilterReader::get_LineNumber()
extern "C"  int32_t XmlFilterReader_get_LineNumber_m5851597 (XmlFilterReader_t256953178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.XmlFilterReader::get_LinePosition()
extern "C"  int32_t XmlFilterReader_get_LinePosition_m576631843 (XmlFilterReader_t256953178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType Mono.Xml.XmlFilterReader::get_NodeType()
extern "C"  int32_t XmlFilterReader_get_NodeType_m196804626 (XmlFilterReader_t256953178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XmlFilterReader::get_Name()
extern "C"  String_t* XmlFilterReader_get_Name_m3046676912 (XmlFilterReader_t256953178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XmlFilterReader::get_LocalName()
extern "C"  String_t* XmlFilterReader_get_LocalName_m184069489 (XmlFilterReader_t256953178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XmlFilterReader::get_NamespaceURI()
extern "C"  String_t* XmlFilterReader_get_NamespaceURI_m3685024248 (XmlFilterReader_t256953178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XmlFilterReader::get_Prefix()
extern "C"  String_t* XmlFilterReader_get_Prefix_m3590654323 (XmlFilterReader_t256953178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XmlFilterReader::get_HasValue()
extern "C"  bool XmlFilterReader_get_HasValue_m2310354579 (XmlFilterReader_t256953178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.XmlFilterReader::get_Depth()
extern "C"  int32_t XmlFilterReader_get_Depth_m607109577 (XmlFilterReader_t256953178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XmlFilterReader::get_Value()
extern "C"  String_t* XmlFilterReader_get_Value_m261498514 (XmlFilterReader_t256953178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XmlFilterReader::get_BaseURI()
extern "C"  String_t* XmlFilterReader_get_BaseURI_m1857381422 (XmlFilterReader_t256953178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XmlFilterReader::get_IsEmptyElement()
extern "C"  bool XmlFilterReader_get_IsEmptyElement_m2024191487 (XmlFilterReader_t256953178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XmlFilterReader::get_IsDefault()
extern "C"  bool XmlFilterReader_get_IsDefault_m1037721923 (XmlFilterReader_t256953178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XmlFilterReader::get_XmlLang()
extern "C"  String_t* XmlFilterReader_get_XmlLang_m2517470090 (XmlFilterReader_t256953178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace Mono.Xml.XmlFilterReader::get_XmlSpace()
extern "C"  int32_t XmlFilterReader_get_XmlSpace_m4234380469 (XmlFilterReader_t256953178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.XmlFilterReader::get_AttributeCount()
extern "C"  int32_t XmlFilterReader_get_AttributeCount_m1952937167 (XmlFilterReader_t256953178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XmlFilterReader::get_Item(System.Int32)
extern "C"  String_t* XmlFilterReader_get_Item_m3775454843 (XmlFilterReader_t256953178 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XmlFilterReader::get_Item(System.String)
extern "C"  String_t* XmlFilterReader_get_Item_m460747810 (XmlFilterReader_t256953178 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XmlFilterReader::get_Item(System.String,System.String)
extern "C"  String_t* XmlFilterReader_get_Item_m2299615702 (XmlFilterReader_t256953178 * __this, String_t* ___localName0, String_t* ___namespaceURI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XmlFilterReader::get_EOF()
extern "C"  bool XmlFilterReader_get_EOF_m3549274104 (XmlFilterReader_t256953178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState Mono.Xml.XmlFilterReader::get_ReadState()
extern "C"  int32_t XmlFilterReader_get_ReadState_m3909598953 (XmlFilterReader_t256953178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.XmlFilterReader::get_NameTable()
extern "C"  XmlNameTable_t1345805268 * XmlFilterReader_get_NameTable_m3939326664 (XmlFilterReader_t256953178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo Mono.Xml.XmlFilterReader::get_SchemaInfo()
extern "C"  Il2CppObject * XmlFilterReader_get_SchemaInfo_m3005065210 (XmlFilterReader_t256953178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings Mono.Xml.XmlFilterReader::get_Settings()
extern "C"  XmlReaderSettings_t1578612233 * XmlFilterReader_get_Settings_m610564693 (XmlFilterReader_t256953178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XmlFilterReader::GetAttribute(System.String)
extern "C"  String_t* XmlFilterReader_GetAttribute_m2427161928 (XmlFilterReader_t256953178 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XmlFilterReader::GetAttribute(System.String,System.String)
extern "C"  String_t* XmlFilterReader_GetAttribute_m716675388 (XmlFilterReader_t256953178 * __this, String_t* ___localName0, String_t* ___namespaceURI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XmlFilterReader::GetAttribute(System.Int32)
extern "C"  String_t* XmlFilterReader_GetAttribute_m3433411997 (XmlFilterReader_t256953178 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XmlFilterReader::HasLineInfo()
extern "C"  bool XmlFilterReader_HasLineInfo_m1333700961 (XmlFilterReader_t256953178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XmlFilterReader::MoveToAttribute(System.String)
extern "C"  bool XmlFilterReader_MoveToAttribute_m3193929899 (XmlFilterReader_t256953178 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XmlFilterReader::MoveToAttribute(System.String,System.String)
extern "C"  bool XmlFilterReader_MoveToAttribute_m1223986049 (XmlFilterReader_t256953178 * __this, String_t* ___localName0, String_t* ___namespaceURI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.XmlFilterReader::MoveToAttribute(System.Int32)
extern "C"  void XmlFilterReader_MoveToAttribute_m3984979342 (XmlFilterReader_t256953178 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XmlFilterReader::MoveToFirstAttribute()
extern "C"  bool XmlFilterReader_MoveToFirstAttribute_m872756395 (XmlFilterReader_t256953178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XmlFilterReader::MoveToNextAttribute()
extern "C"  bool XmlFilterReader_MoveToNextAttribute_m3188470406 (XmlFilterReader_t256953178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XmlFilterReader::MoveToElement()
extern "C"  bool XmlFilterReader_MoveToElement_m2358387795 (XmlFilterReader_t256953178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.XmlFilterReader::Close()
extern "C"  void XmlFilterReader_Close_m938130925 (XmlFilterReader_t256953178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XmlFilterReader::Read()
extern "C"  bool XmlFilterReader_Read_m894255129 (XmlFilterReader_t256953178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XmlFilterReader::ReadString()
extern "C"  String_t* XmlFilterReader_ReadString_m1270898961 (XmlFilterReader_t256953178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.XmlFilterReader::LookupNamespace(System.String)
extern "C"  String_t* XmlFilterReader_LookupNamespace_m2927550849 (XmlFilterReader_t256953178 * __this, String_t* ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.XmlFilterReader::ResolveEntity()
extern "C"  void XmlFilterReader_ResolveEntity_m3030481172 (XmlFilterReader_t256953178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.XmlFilterReader::ReadAttributeValue()
extern "C"  bool XmlFilterReader_ReadAttributeValue_m1805436976 (XmlFilterReader_t256953178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
