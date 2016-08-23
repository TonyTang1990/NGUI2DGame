#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1762;
// System.String
struct String_t;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Xml.XmlNameTable
struct XmlNameTable_t1543;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1144;
// System.Object
struct Object_t;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.Schema.XmlSchemaReader::.ctor(System.Xml.XmlReader,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaReader__ctor_m9684 (XmlSchemaReader_t1762 * __this, XmlReader_t843 * ___reader, ValidationEventHandler_t1144 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_FullName()
extern "C" String_t* XmlSchemaReader_get_FullName_m9685 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.Schema.XmlSchemaReader::get_Reader()
extern "C" XmlReader_t843 * XmlSchemaReader_get_Reader_m9686 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::RaiseInvalidElementError()
extern "C" void XmlSchemaReader_RaiseInvalidElementError_m9687 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::ReadNextElement()
extern "C" bool XmlSchemaReader_ReadNextElement_m9688 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::SkipToEnd()
extern "C" void XmlSchemaReader_SkipToEnd_m9689 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::HasLineInfo()
extern "C" bool XmlSchemaReader_HasLineInfo_m9690 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::get_LineNumber()
extern "C" int32_t XmlSchemaReader_get_LineNumber_m9691 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::get_LinePosition()
extern "C" int32_t XmlSchemaReader_get_LinePosition_m9692 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::get_AttributeCount()
extern "C" int32_t XmlSchemaReader_get_AttributeCount_m9693 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_BaseURI()
extern "C" String_t* XmlSchemaReader_get_BaseURI_m9694 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_CanResolveEntity()
extern "C" bool XmlSchemaReader_get_CanResolveEntity_m9695 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::get_Depth()
extern "C" int32_t XmlSchemaReader_get_Depth_m9696 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_EOF()
extern "C" bool XmlSchemaReader_get_EOF_m9697 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_HasAttributes()
extern "C" bool XmlSchemaReader_get_HasAttributes_m9698 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_HasValue()
extern "C" bool XmlSchemaReader_get_HasValue_m9699 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_IsDefault()
extern "C" bool XmlSchemaReader_get_IsDefault_m9700 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_IsEmptyElement()
extern "C" bool XmlSchemaReader_get_IsEmptyElement_m9701 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Item(System.Int32)
extern "C" String_t* XmlSchemaReader_get_Item_m9702 (XmlSchemaReader_t1762 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Item(System.String)
extern "C" String_t* XmlSchemaReader_get_Item_m9703 (XmlSchemaReader_t1762 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Item(System.String,System.String)
extern "C" String_t* XmlSchemaReader_get_Item_m9704 (XmlSchemaReader_t1762 * __this, String_t* ___name, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_LocalName()
extern "C" String_t* XmlSchemaReader_get_LocalName_m9705 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Name()
extern "C" String_t* XmlSchemaReader_get_Name_m9706 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_NamespaceURI()
extern "C" String_t* XmlSchemaReader_get_NamespaceURI_m9707 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.Schema.XmlSchemaReader::get_NameTable()
extern "C" XmlNameTable_t1543 * XmlSchemaReader_get_NameTable_m9708 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.Schema.XmlSchemaReader::get_NodeType()
extern "C" int32_t XmlSchemaReader_get_NodeType_m9709 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Prefix()
extern "C" String_t* XmlSchemaReader_get_Prefix_m9710 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState System.Xml.Schema.XmlSchemaReader::get_ReadState()
extern "C" int32_t XmlSchemaReader_get_ReadState_m9711 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Value()
extern "C" String_t* XmlSchemaReader_get_Value_m9712 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_XmlLang()
extern "C" String_t* XmlSchemaReader_get_XmlLang_m9713 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.Schema.XmlSchemaReader::get_XmlSpace()
extern "C" int32_t XmlSchemaReader_get_XmlSpace_m9714 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::Close()
extern "C" void XmlSchemaReader_Close_m9715 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::Equals(System.Object)
extern "C" bool XmlSchemaReader_Equals_m9716 (XmlSchemaReader_t1762 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::GetAttribute(System.Int32)
extern "C" String_t* XmlSchemaReader_GetAttribute_m9717 (XmlSchemaReader_t1762 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::GetAttribute(System.String)
extern "C" String_t* XmlSchemaReader_GetAttribute_m9718 (XmlSchemaReader_t1762 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::GetAttribute(System.String,System.String)
extern "C" String_t* XmlSchemaReader_GetAttribute_m9719 (XmlSchemaReader_t1762 * __this, String_t* ___name, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::GetHashCode()
extern "C" int32_t XmlSchemaReader_GetHashCode_m9720 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::LookupNamespace(System.String)
extern "C" String_t* XmlSchemaReader_LookupNamespace_m9721 (XmlSchemaReader_t1762 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::MoveToAttribute(System.Int32)
extern "C" void XmlSchemaReader_MoveToAttribute_m9722 (XmlSchemaReader_t1762 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToAttribute(System.String)
extern "C" bool XmlSchemaReader_MoveToAttribute_m9723 (XmlSchemaReader_t1762 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToAttribute(System.String,System.String)
extern "C" bool XmlSchemaReader_MoveToAttribute_m9724 (XmlSchemaReader_t1762 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.Schema.XmlSchemaReader::MoveToContent()
extern "C" int32_t XmlSchemaReader_MoveToContent_m9725 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToElement()
extern "C" bool XmlSchemaReader_MoveToElement_m9726 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToFirstAttribute()
extern "C" bool XmlSchemaReader_MoveToFirstAttribute_m9727 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToNextAttribute()
extern "C" bool XmlSchemaReader_MoveToNextAttribute_m9728 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::Read()
extern "C" bool XmlSchemaReader_Read_m9729 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::ReadAttributeValue()
extern "C" bool XmlSchemaReader_ReadAttributeValue_m9730 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::ReadElementString()
extern "C" String_t* XmlSchemaReader_ReadElementString_m9731 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::ReadEndElement()
extern "C" void XmlSchemaReader_ReadEndElement_m9732 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::ReadInnerXml()
extern "C" String_t* XmlSchemaReader_ReadInnerXml_m9733 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::ReadOuterXml()
extern "C" String_t* XmlSchemaReader_ReadOuterXml_m9734 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::ReadStartElement()
extern "C" void XmlSchemaReader_ReadStartElement_m9735 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::ReadStartElement(System.String,System.String)
extern "C" void XmlSchemaReader_ReadStartElement_m9736 (XmlSchemaReader_t1762 * __this, String_t* ___localname, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::ReadString()
extern "C" String_t* XmlSchemaReader_ReadString_m9737 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::ResolveEntity()
extern "C" void XmlSchemaReader_ResolveEntity_m9738 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::Skip()
extern "C" void XmlSchemaReader_Skip_m9739 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::ToString()
extern "C" String_t* XmlSchemaReader_ToString_m9740 (XmlSchemaReader_t1762 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
