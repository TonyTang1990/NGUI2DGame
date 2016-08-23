#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDValidatingReader
struct DTDValidatingReader_t1570;
// Mono.Xml.EntityResolvingXmlReader
struct EntityResolvingXmlReader_t1566;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1528;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1543;
// System.Xml.XmlParserContext
struct XmlParserContext_t1571;
// System.Object
struct Object_t;
// System.Xml.XmlResolver
struct XmlResolver_t1520;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Xml.XmlValidatingReader
struct XmlValidatingReader_t1567;
// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t1703;
// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t1555;
// Mono.Xml.DTDValidatingReader/AttributeSlot
struct AttributeSlot_t1565;
// System.Xml.EntityHandling
#include "System_Xml_System_Xml_EntityHandling.h"
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"
// System.Xml.Schema.XmlSeverityType
#include "System_Xml_System_Xml_Schema_XmlSeverityType.h"

// System.Void Mono.Xml.DTDValidatingReader::.ctor(System.Xml.XmlReader,System.Xml.XmlValidatingReader)
extern "C" void DTDValidatingReader__ctor_m7586 (DTDValidatingReader_t1570 * __this, XmlReader_t843 * ___reader, XmlValidatingReader_t1567 * ___validatingReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::System.Xml.IXmlLineInfo.HasLineInfo()
extern "C" bool DTDValidatingReader_System_Xml_IXmlLineInfo_HasLineInfo_m7587 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::System.Xml.IXmlNamespaceResolver.LookupPrefix(System.String)
extern "C" String_t* DTDValidatingReader_System_Xml_IXmlNamespaceResolver_LookupPrefix_m7588 (DTDValidatingReader_t1570 * __this, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.EntityResolvingXmlReader Mono.Xml.DTDValidatingReader::get_Source()
extern "C" EntityResolvingXmlReader_t1566 * DTDValidatingReader_get_Source_m7589 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml.DTDValidatingReader::get_DTD()
extern "C" DTDObjectModel_t1528 * DTDValidatingReader_get_DTD_m7590 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling Mono.Xml.DTDValidatingReader::get_EntityHandling()
extern "C" int32_t DTDValidatingReader_get_EntityHandling_m7591 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::set_EntityHandling(System.Xml.EntityHandling)
extern "C" void DTDValidatingReader_set_EntityHandling_m7592 (DTDValidatingReader_t1570 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::Close()
extern "C" void DTDValidatingReader_Close_m7593 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::GetAttributeIndex(System.String)
extern "C" int32_t DTDValidatingReader_GetAttributeIndex_m7594 (DTDValidatingReader_t1570 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::GetAttributeIndex(System.String,System.String)
extern "C" int32_t DTDValidatingReader_GetAttributeIndex_m7595 (DTDValidatingReader_t1570 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::GetAttribute(System.Int32)
extern "C" String_t* DTDValidatingReader_GetAttribute_m7596 (DTDValidatingReader_t1570 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::GetAttribute(System.String)
extern "C" String_t* DTDValidatingReader_GetAttribute_m7597 (DTDValidatingReader_t1570 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::GetAttribute(System.String,System.String)
extern "C" String_t* DTDValidatingReader_GetAttribute_m7598 (DTDValidatingReader_t1570 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::LookupNamespace(System.String)
extern "C" String_t* DTDValidatingReader_LookupNamespace_m7599 (DTDValidatingReader_t1570 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::MoveToAttribute(System.Int32)
extern "C" void DTDValidatingReader_MoveToAttribute_m7600 (DTDValidatingReader_t1570 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToAttribute(System.String)
extern "C" bool DTDValidatingReader_MoveToAttribute_m7601 (DTDValidatingReader_t1570 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToAttribute(System.String,System.String)
extern "C" bool DTDValidatingReader_MoveToAttribute_m7602 (DTDValidatingReader_t1570 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToElement()
extern "C" bool DTDValidatingReader_MoveToElement_m7603 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToFirstAttribute()
extern "C" bool DTDValidatingReader_MoveToFirstAttribute_m7604 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToNextAttribute()
extern "C" bool DTDValidatingReader_MoveToNextAttribute_m7605 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::Read()
extern "C" bool DTDValidatingReader_Read_m7606 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::ReadContent()
extern "C" bool DTDValidatingReader_ReadContent_m7607 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::ProcessContent()
extern "C" bool DTDValidatingReader_ProcessContent_m7608 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::FillAttributes()
extern "C" void DTDValidatingReader_FillAttributes_m7609 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ValidateText()
extern "C" void DTDValidatingReader_ValidateText_m7610 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ValidateWhitespaceNode()
extern "C" void DTDValidatingReader_ValidateWhitespaceNode_m7611 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::HandleError(System.String,System.Xml.Schema.XmlSeverityType)
extern "C" void DTDValidatingReader_HandleError_m7612 (DTDValidatingReader_t1570 * __this, String_t* ___message, int32_t ___severity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::HandleError(System.Xml.Schema.XmlSchemaException,System.Xml.Schema.XmlSeverityType)
extern "C" void DTDValidatingReader_HandleError_m7613 (DTDValidatingReader_t1570 * __this, XmlSchemaException_t1703 * ___ex, int32_t ___severity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ValidateAttributes(Mono.Xml.DTDAttListDeclaration,System.Boolean)
extern "C" void DTDValidatingReader_ValidateAttributes_m7614 (DTDValidatingReader_t1570 * __this, DTDAttListDeclaration_t1555 * ___decl, bool ___validate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDValidatingReader/AttributeSlot Mono.Xml.DTDValidatingReader::GetAttributeSlot()
extern "C" AttributeSlot_t1565 * DTDValidatingReader_GetAttributeSlot_m7615 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::DtdValidateAttributes(Mono.Xml.DTDAttListDeclaration,System.Boolean)
extern "C" void DTDValidatingReader_DtdValidateAttributes_m7616 (DTDValidatingReader_t1570 * __this, DTDAttListDeclaration_t1555 * ___decl, bool ___validate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ReadDoctype()
extern "C" void DTDValidatingReader_ReadDoctype_m7617 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ProcessStartElement()
extern "C" void DTDValidatingReader_ProcessStartElement_m7618 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ProcessEndElement()
extern "C" void DTDValidatingReader_ProcessEndElement_m7619 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::VerifyDeclaredAttributes(Mono.Xml.DTDAttListDeclaration)
extern "C" void DTDValidatingReader_VerifyDeclaredAttributes_m7620 (DTDValidatingReader_t1570 * __this, DTDAttListDeclaration_t1555 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::ReadAttributeValue()
extern "C" bool DTDValidatingReader_ReadAttributeValue_m7621 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ResolveEntity()
extern "C" void DTDValidatingReader_ResolveEntity_m7622 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::get_AttributeCount()
extern "C" int32_t DTDValidatingReader_get_AttributeCount_m7623 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_BaseURI()
extern "C" String_t* DTDValidatingReader_get_BaseURI_m7624 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_CanResolveEntity()
extern "C" bool DTDValidatingReader_get_CanResolveEntity_m7625 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::get_Depth()
extern "C" int32_t DTDValidatingReader_get_Depth_m7626 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_EOF()
extern "C" bool DTDValidatingReader_get_EOF_m7627 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_HasValue()
extern "C" bool DTDValidatingReader_get_HasValue_m7628 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_IsDefault()
extern "C" bool DTDValidatingReader_get_IsDefault_m7629 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_IsEmptyElement()
extern "C" bool DTDValidatingReader_get_IsEmptyElement_m7630 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Item(System.Int32)
extern "C" String_t* DTDValidatingReader_get_Item_m7631 (DTDValidatingReader_t1570 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Item(System.String)
extern "C" String_t* DTDValidatingReader_get_Item_m7632 (DTDValidatingReader_t1570 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Item(System.String,System.String)
extern "C" String_t* DTDValidatingReader_get_Item_m7633 (DTDValidatingReader_t1570 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::get_LineNumber()
extern "C" int32_t DTDValidatingReader_get_LineNumber_m7634 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::get_LinePosition()
extern "C" int32_t DTDValidatingReader_get_LinePosition_m7635 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_LocalName()
extern "C" String_t* DTDValidatingReader_get_LocalName_m7636 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Name()
extern "C" String_t* DTDValidatingReader_get_Name_m7637 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_NamespaceURI()
extern "C" String_t* DTDValidatingReader_get_NamespaceURI_m7638 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.DTDValidatingReader::get_NameTable()
extern "C" XmlNameTable_t1543 * DTDValidatingReader_get_NameTable_m7639 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType Mono.Xml.DTDValidatingReader::get_NodeType()
extern "C" int32_t DTDValidatingReader_get_NodeType_m7640 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml.DTDValidatingReader::get_ParserContext()
extern "C" XmlParserContext_t1571 * DTDValidatingReader_get_ParserContext_m7641 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Prefix()
extern "C" String_t* DTDValidatingReader_get_Prefix_m7642 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState Mono.Xml.DTDValidatingReader::get_ReadState()
extern "C" int32_t DTDValidatingReader_get_ReadState_m7643 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.DTDValidatingReader::get_SchemaType()
extern "C" Object_t * DTDValidatingReader_get_SchemaType_m7644 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::FilterNormalization(System.String,System.String)
extern "C" String_t* DTDValidatingReader_FilterNormalization_m7645 (DTDValidatingReader_t1570 * __this, String_t* ___attrName, String_t* ___rawValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Value()
extern "C" String_t* DTDValidatingReader_get_Value_m7646 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_XmlLang()
extern "C" String_t* DTDValidatingReader_get_XmlLang_m7647 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C" void DTDValidatingReader_set_XmlResolver_m7648 (DTDValidatingReader_t1570 * __this, XmlResolver_t1520 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace Mono.Xml.DTDValidatingReader::get_XmlSpace()
extern "C" int32_t DTDValidatingReader_get_XmlSpace_m7649 (DTDValidatingReader_t1570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
