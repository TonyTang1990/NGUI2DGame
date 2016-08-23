#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.EntityResolvingXmlReader
struct EntityResolvingXmlReader_t1566;
// System.Xml.XmlParserContext
struct XmlParserContext_t1571;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1543;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"
// System.Xml.EntityHandling
#include "System_Xml_System_Xml_EntityHandling.h"

// System.Void Mono.Xml.EntityResolvingXmlReader::.ctor(System.Xml.XmlReader)
extern "C" void EntityResolvingXmlReader__ctor_m7650 (EntityResolvingXmlReader_t1566 * __this, XmlReader_t843 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::.ctor(System.Xml.XmlReader,System.Boolean)
extern "C" void EntityResolvingXmlReader__ctor_m7651 (EntityResolvingXmlReader_t1566 * __this, XmlReader_t843 * ___entityContainer, bool ___inside_attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml.EntityResolvingXmlReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C" XmlParserContext_t1571 * EntityResolvingXmlReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m7652 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::System.Xml.IXmlNamespaceResolver.LookupPrefix(System.String)
extern "C" String_t* EntityResolvingXmlReader_System_Xml_IXmlNamespaceResolver_LookupPrefix_m7653 (EntityResolvingXmlReader_t1566 * __this, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader Mono.Xml.EntityResolvingXmlReader::get_Current()
extern "C" XmlReader_t843 * EntityResolvingXmlReader_get_Current_m7654 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.EntityResolvingXmlReader::get_AttributeCount()
extern "C" int32_t EntityResolvingXmlReader_get_AttributeCount_m7655 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_BaseURI()
extern "C" String_t* EntityResolvingXmlReader_get_BaseURI_m7656 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::get_CanResolveEntity()
extern "C" bool EntityResolvingXmlReader_get_CanResolveEntity_m7657 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.EntityResolvingXmlReader::get_Depth()
extern "C" int32_t EntityResolvingXmlReader_get_Depth_m7658 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::get_EOF()
extern "C" bool EntityResolvingXmlReader_get_EOF_m7659 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::get_HasValue()
extern "C" bool EntityResolvingXmlReader_get_HasValue_m7660 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::get_IsDefault()
extern "C" bool EntityResolvingXmlReader_get_IsDefault_m7661 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::get_IsEmptyElement()
extern "C" bool EntityResolvingXmlReader_get_IsEmptyElement_m7662 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_LocalName()
extern "C" String_t* EntityResolvingXmlReader_get_LocalName_m7663 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_Name()
extern "C" String_t* EntityResolvingXmlReader_get_Name_m7664 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_NamespaceURI()
extern "C" String_t* EntityResolvingXmlReader_get_NamespaceURI_m7665 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.EntityResolvingXmlReader::get_NameTable()
extern "C" XmlNameTable_t1543 * EntityResolvingXmlReader_get_NameTable_m7666 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType Mono.Xml.EntityResolvingXmlReader::get_NodeType()
extern "C" int32_t EntityResolvingXmlReader_get_NodeType_m7667 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml.EntityResolvingXmlReader::get_ParserContext()
extern "C" XmlParserContext_t1571 * EntityResolvingXmlReader_get_ParserContext_m7668 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_Prefix()
extern "C" String_t* EntityResolvingXmlReader_get_Prefix_m7669 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState Mono.Xml.EntityResolvingXmlReader::get_ReadState()
extern "C" int32_t EntityResolvingXmlReader_get_ReadState_m7670 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_Value()
extern "C" String_t* EntityResolvingXmlReader_get_Value_m7671 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_XmlLang()
extern "C" String_t* EntityResolvingXmlReader_get_XmlLang_m7672 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace Mono.Xml.EntityResolvingXmlReader::get_XmlSpace()
extern "C" int32_t EntityResolvingXmlReader_get_XmlSpace_m7673 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::CopyProperties(Mono.Xml.EntityResolvingXmlReader)
extern "C" void EntityResolvingXmlReader_CopyProperties_m7674 (EntityResolvingXmlReader_t1566 * __this, EntityResolvingXmlReader_t1566 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling Mono.Xml.EntityResolvingXmlReader::get_EntityHandling()
extern "C" int32_t EntityResolvingXmlReader_get_EntityHandling_m7675 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::set_EntityHandling(System.Xml.EntityHandling)
extern "C" void EntityResolvingXmlReader_set_EntityHandling_m7676 (EntityResolvingXmlReader_t1566 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.EntityResolvingXmlReader::get_LineNumber()
extern "C" int32_t EntityResolvingXmlReader_get_LineNumber_m7677 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.EntityResolvingXmlReader::get_LinePosition()
extern "C" int32_t EntityResolvingXmlReader_get_LinePosition_m7678 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::Close()
extern "C" void EntityResolvingXmlReader_Close_m7679 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::GetAttribute(System.Int32)
extern "C" String_t* EntityResolvingXmlReader_GetAttribute_m7680 (EntityResolvingXmlReader_t1566 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::GetAttribute(System.String)
extern "C" String_t* EntityResolvingXmlReader_GetAttribute_m7681 (EntityResolvingXmlReader_t1566 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::GetAttribute(System.String,System.String)
extern "C" String_t* EntityResolvingXmlReader_GetAttribute_m7682 (EntityResolvingXmlReader_t1566 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::LookupNamespace(System.String)
extern "C" String_t* EntityResolvingXmlReader_LookupNamespace_m7683 (EntityResolvingXmlReader_t1566 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::MoveToAttribute(System.Int32)
extern "C" void EntityResolvingXmlReader_MoveToAttribute_m7684 (EntityResolvingXmlReader_t1566 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::MoveToAttribute(System.String)
extern "C" bool EntityResolvingXmlReader_MoveToAttribute_m7685 (EntityResolvingXmlReader_t1566 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::MoveToAttribute(System.String,System.String)
extern "C" bool EntityResolvingXmlReader_MoveToAttribute_m7686 (EntityResolvingXmlReader_t1566 * __this, String_t* ___localName, String_t* ___namespaceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::MoveToElement()
extern "C" bool EntityResolvingXmlReader_MoveToElement_m7687 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::MoveToFirstAttribute()
extern "C" bool EntityResolvingXmlReader_MoveToFirstAttribute_m7688 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::MoveToNextAttribute()
extern "C" bool EntityResolvingXmlReader_MoveToNextAttribute_m7689 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::Read()
extern "C" bool EntityResolvingXmlReader_Read_m7690 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::ReadAttributeValue()
extern "C" bool EntityResolvingXmlReader_ReadAttributeValue_m7691 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::ReadString()
extern "C" String_t* EntityResolvingXmlReader_ReadString_m7692 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::ResolveEntity()
extern "C" void EntityResolvingXmlReader_ResolveEntity_m7693 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::DoResolveEntity()
extern "C" void EntityResolvingXmlReader_DoResolveEntity_m7694 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::Skip()
extern "C" void EntityResolvingXmlReader_Skip_m7695 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::HasLineInfo()
extern "C" bool EntityResolvingXmlReader_HasLineInfo_m7696 (EntityResolvingXmlReader_t1566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
