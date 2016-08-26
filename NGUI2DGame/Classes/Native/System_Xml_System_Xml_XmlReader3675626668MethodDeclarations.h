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

// System.Xml.XmlReader
struct XmlReader_t3675626668;
// System.Xml.XmlReaderBinarySupport
struct XmlReaderBinarySupport_t1548133672;
// System.String
struct String_t;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t2533799901;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t1578612233;
// System.Xml.XmlNameTable
struct XmlNameTable_t1345805268;
// System.Xml.XmlParserContext
struct XmlParserContext_t2728039553;
// System.IO.Stream
struct Stream_t3255436806;
// System.Xml.XmlTextReader
struct XmlTextReader_t3514170725;
// System.Xml.XmlException
struct XmlException_t4188277960;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_System_Xml_XmlSpace2880376877.h"
#include "System_Xml_System_Xml_XmlReaderSettings1578612233.h"
#include "System_Xml_System_Xml_XmlNodeType739504597.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "System_Xml_System_Xml_XmlParserContext2728039553.h"
#include "System_Xml_System_Xml_XmlTextReader3514170725.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"

// System.Void System.Xml.XmlReader::.ctor()
extern "C"  void XmlReader__ctor_m2906609633 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::System.IDisposable.Dispose()
extern "C"  void XmlReader_System_IDisposable_Dispose_m1699080386 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderBinarySupport System.Xml.XmlReader::get_Binary()
extern "C"  XmlReaderBinarySupport_t1548133672 * XmlReader_get_Binary_m4267712960 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::get_CanResolveEntity()
extern "C"  bool XmlReader_get_CanResolveEntity_m2249999087 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::get_HasAttributes()
extern "C"  bool XmlReader_get_HasAttributes_m2349560689 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::get_IsDefault()
extern "C"  bool XmlReader_get_IsDefault_m1510950801 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_Item(System.Int32)
extern "C"  String_t* XmlReader_get_Item_m1391114273 (XmlReader_t3675626668 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_Item(System.String)
extern "C"  String_t* XmlReader_get_Item_m262748378 (XmlReader_t3675626668 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_Item(System.String,System.String)
extern "C"  String_t* XmlReader_get_Item_m4288865690 (XmlReader_t3675626668 * __this, String_t* ___name0, String_t* ___namespaceURI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_Name()
extern "C"  String_t* XmlReader_get_Name_m2814912812 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlReader::get_SchemaInfo()
extern "C"  Il2CppObject * XmlReader_get_SchemaInfo_m2886262078 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings System.Xml.XmlReader::get_Settings()
extern "C"  XmlReaderSettings_t1578612233 * XmlReader_get_Settings_m72227715 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_XmlLang()
extern "C"  String_t* XmlReader_get_XmlLang_m832483730 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlReader::get_XmlSpace()
extern "C"  int32_t XmlReader_get_XmlSpace_m4205984803 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlReader::PopulateNameTable(System.Xml.XmlReaderSettings)
extern "C"  XmlNameTable_t1345805268 * XmlReader_PopulateNameTable_m2808051956 (Il2CppObject * __this /* static, unused */, XmlReaderSettings_t1578612233 * ___settings0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlReader::PopulateParserContext(System.Xml.XmlReaderSettings,System.String)
extern "C"  XmlParserContext_t2728039553 * XmlReader_PopulateParserContext_m3263105344 (Il2CppObject * __this /* static, unused */, XmlReaderSettings_t1578612233 * ___settings0, String_t* ___baseUri1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlReader::GetNodeType(System.Xml.XmlReaderSettings)
extern "C"  int32_t XmlReader_GetNodeType_m1830412762 (Il2CppObject * __this /* static, unused */, XmlReaderSettings_t1578612233 * ___settings0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.XmlReader::Create(System.IO.Stream)
extern "C"  XmlReader_t3675626668 * XmlReader_Create_m4030808605 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.XmlReader::Create(System.IO.Stream,System.Xml.XmlReaderSettings)
extern "C"  XmlReader_t3675626668 * XmlReader_Create_m252414112 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, XmlReaderSettings_t1578612233 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings System.Xml.XmlReader::PopulateSettings(System.Xml.XmlReaderSettings)
extern "C"  XmlReaderSettings_t1578612233 * XmlReader_PopulateSettings_m340556869 (Il2CppObject * __this /* static, unused */, XmlReaderSettings_t1578612233 * ___src0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.XmlReader::Create(System.IO.Stream,System.Xml.XmlReaderSettings,System.String)
extern "C"  XmlReader_t3675626668 * XmlReader_Create_m640904852 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, XmlReaderSettings_t1578612233 * ___settings1, String_t* ___baseUri2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.XmlReader::Create(System.IO.Stream,System.Xml.XmlReaderSettings,System.Xml.XmlParserContext)
extern "C"  XmlReader_t3675626668 * XmlReader_Create_m2581563141 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___stream0, XmlReaderSettings_t1578612233 * ___settings1, XmlParserContext_t2728039553 * ___context2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.XmlReader::CreateCustomizedTextReader(System.Xml.XmlTextReader,System.Xml.XmlReaderSettings)
extern "C"  XmlReader_t3675626668 * XmlReader_CreateCustomizedTextReader_m1665293043 (Il2CppObject * __this /* static, unused */, XmlTextReader_t3514170725 * ___reader0, XmlReaderSettings_t1578612233 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.XmlReader::CreateFilteredXmlReader(System.Xml.XmlReader,System.Xml.XmlReaderSettings)
extern "C"  XmlReader_t3675626668 * XmlReader_CreateFilteredXmlReader_m121306172 (Il2CppObject * __this /* static, unused */, XmlReader_t3675626668 * ___reader0, XmlReaderSettings_t1578612233 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.XmlReader::CreateValidatingXmlReader(System.Xml.XmlReader,System.Xml.XmlReaderSettings)
extern "C"  XmlReader_t3675626668 * XmlReader_CreateValidatingXmlReader_m2406772570 (Il2CppObject * __this /* static, unused */, XmlReader_t3675626668 * ___reader0, XmlReaderSettings_t1578612233 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::Dispose(System.Boolean)
extern "C"  void XmlReader_Dispose_m1559080013 (XmlReader_t3675626668 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32)
extern "C"  void XmlReader_MoveToAttribute_m92945686 (XmlReader_t3675626668 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::IsContent(System.Xml.XmlNodeType)
extern "C"  bool XmlReader_IsContent_m1996106507 (XmlReader_t3675626668 * __this, int32_t ___nodeType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent()
extern "C"  int32_t XmlReader_MoveToContent_m1469314666 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::ReadElementString()
extern "C"  String_t* XmlReader_ReadElementString_m1037752001 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::ReadEndElement()
extern "C"  void XmlReader_ReadEndElement_m2186922488 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::ReadInnerXml()
extern "C"  String_t* XmlReader_ReadInnerXml_m3777272761 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::ReadOuterXml()
extern "C"  String_t* XmlReader_ReadOuterXml_m3008583754 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::ReadStartElement()
extern "C"  void XmlReader_ReadStartElement_m2262733889 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::ReadStartElement(System.String,System.String)
extern "C"  void XmlReader_ReadStartElement_m3043702433 (XmlReader_t3675626668 * __this, String_t* ___localName0, String_t* ___namespaceName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::ReadString()
extern "C"  String_t* XmlReader_ReadString_m1231088435 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::ReadToFollowing(System.String,System.String)
extern "C"  bool XmlReader_ReadToFollowing_m440864957 (XmlReader_t3675626668 * __this, String_t* ___localName0, String_t* ___namespaceURI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::ReadContentString(System.Boolean)
extern "C"  String_t* XmlReader_ReadContentString_m3068761841 (XmlReader_t3675626668 * __this, bool ___isText0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::GetLocation()
extern "C"  String_t* XmlReader_GetLocation_m3334985179 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::ReadElementContentAsString()
extern "C"  String_t* XmlReader_ReadElementContentAsString_m3210438330 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::Skip()
extern "C"  void XmlReader_Skip_m1833707716 (XmlReader_t3675626668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlException System.Xml.XmlReader::XmlError(System.String)
extern "C"  XmlException_t4188277960 * XmlReader_XmlError_m2086844343 (XmlReader_t3675626668 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
