#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlDocument
struct XmlDocument_t978;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t1583;
// System.String
struct String_t;
// System.Xml.XmlElement
struct XmlElement_t1103;
// System.Xml.XmlDocumentType
struct XmlDocumentType_t1598;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t1595;
// System.Xml.XmlNameTable
struct XmlNameTable_t1543;
// System.Xml.XmlResolver
struct XmlResolver_t1520;
// System.Xml.XmlNode
struct XmlNode_t1124;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t1586;
// System.Xml.XmlImplementation
struct XmlImplementation_t1594;
// System.Xml.XmlAttribute
struct XmlAttribute_t1123;
// System.Xml.XmlCDataSection
struct XmlCDataSection_t1588;
// System.Xml.XmlComment
struct XmlComment_t1591;
// System.Xml.XmlDocumentFragment
struct XmlDocumentFragment_t1597;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1528;
// System.Xml.XmlEntityReference
struct XmlEntityReference_t1599;
// System.Xml.XmlProcessingInstruction
struct XmlProcessingInstruction_t1615;
// System.Xml.XmlSignificantWhitespace
struct XmlSignificantWhitespace_t1619;
// System.Xml.XmlText
struct XmlText_t1621;
// System.Xml.XmlWhitespace
struct XmlWhitespace_t1636;
// System.Xml.XmlDeclaration
struct XmlDeclaration_t1593;
// System.IO.TextReader
struct TextReader_t1101;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlDocument::.ctor()
extern "C" void XmlDocument__ctor_m5010 (XmlDocument_t978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.ctor(System.Xml.XmlImplementation)
extern "C" void XmlDocument__ctor_m7809 (XmlDocument_t978 * __this, XmlImplementation_t1594 * ___imp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.ctor(System.Xml.XmlImplementation,System.Xml.XmlNameTable)
extern "C" void XmlDocument__ctor_m7810 (XmlDocument_t978 * __this, XmlImplementation_t1594 * ___impl, XmlNameTable_t1543 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.cctor()
extern "C" void XmlDocument__cctor_m7811 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlDocument::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C" XmlLinkedNode_t1583 * XmlDocument_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m7812 (XmlDocument_t978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C" void XmlDocument_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m7813 (XmlDocument_t978 * __this, XmlLinkedNode_t1583 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_BaseURI()
extern "C" String_t* XmlDocument_get_BaseURI_m7814 (XmlDocument_t978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::get_DocumentElement()
extern "C" XmlElement_t1103 * XmlDocument_get_DocumentElement_m5071 (XmlDocument_t978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentType System.Xml.XmlDocument::get_DocumentType()
extern "C" XmlDocumentType_t1598 * XmlDocument_get_DocumentType_m7815 (XmlDocument_t978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocument::get_IsReadOnly()
extern "C" bool XmlDocument_get_IsReadOnly_m7816 (XmlDocument_t978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_LocalName()
extern "C" String_t* XmlDocument_get_LocalName_m7817 (XmlDocument_t978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_Name()
extern "C" String_t* XmlDocument_get_Name_m7818 (XmlDocument_t978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameEntryCache System.Xml.XmlDocument::get_NameCache()
extern "C" XmlNameEntryCache_t1595 * XmlDocument_get_NameCache_m7819 (XmlDocument_t978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlDocument::get_NameTable()
extern "C" XmlNameTable_t1543 * XmlDocument_get_NameTable_m7820 (XmlDocument_t978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDocument::get_NodeType()
extern "C" int32_t XmlDocument_get_NodeType_m7821 (XmlDocument_t978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlDocument::get_OwnerDocument()
extern "C" XmlDocument_t978 * XmlDocument_get_OwnerDocument_m7822 (XmlDocument_t978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocument::get_PreserveWhitespace()
extern "C" bool XmlDocument_get_PreserveWhitespace_m7823 (XmlDocument_t978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver System.Xml.XmlDocument::get_Resolver()
extern "C" XmlResolver_t1520 * XmlDocument_get_Resolver_m7824 (XmlDocument_t978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_XmlLang()
extern "C" String_t* XmlDocument_get_XmlLang_m7825 (XmlDocument_t978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlDocument::get_XmlSpace()
extern "C" int32_t XmlDocument_get_XmlSpace_m7826 (XmlDocument_t978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::get_ParentNode()
extern "C" XmlNode_t1124 * XmlDocument_get_ParentNode_m7827 (XmlDocument_t978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::get_SchemaInfo()
extern "C" Object_t * XmlDocument_get_SchemaInfo_m7828 (XmlDocument_t978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C" void XmlDocument_set_SchemaInfo_m7829 (XmlDocument_t978 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::AddIdenticalAttribute(System.Xml.XmlAttribute)
extern "C" void XmlDocument_AddIdenticalAttribute_m7830 (XmlDocument_t978 * __this, XmlAttribute_t1123 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::CloneNode(System.Boolean)
extern "C" XmlNode_t1124 * XmlDocument_CloneNode_m7831 (XmlDocument_t978 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String)
extern "C" XmlAttribute_t1123 * XmlDocument_CreateAttribute_m7832 (XmlDocument_t978 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String,System.String)
extern "C" XmlAttribute_t1123 * XmlDocument_CreateAttribute_m7833 (XmlDocument_t978 * __this, String_t* ___qualifiedName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String,System.String,System.String)
extern "C" XmlAttribute_t1123 * XmlDocument_CreateAttribute_m7834 (XmlDocument_t978 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String,System.String,System.String,System.Boolean,System.Boolean)
extern "C" XmlAttribute_t1123 * XmlDocument_CreateAttribute_m7835 (XmlDocument_t978 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, bool ___atomizedNames, bool ___checkNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlCDataSection System.Xml.XmlDocument::CreateCDataSection(System.String)
extern "C" XmlCDataSection_t1588 * XmlDocument_CreateCDataSection_m7836 (XmlDocument_t978 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlComment System.Xml.XmlDocument::CreateComment(System.String)
extern "C" XmlComment_t1591 * XmlDocument_CreateComment_m7837 (XmlDocument_t978 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentFragment System.Xml.XmlDocument::CreateDocumentFragment()
extern "C" XmlDocumentFragment_t1597 * XmlDocument_CreateDocumentFragment_m7838 (XmlDocument_t978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentType System.Xml.XmlDocument::CreateDocumentType(System.String,System.String,System.String,System.String)
extern "C" XmlDocumentType_t1598 * XmlDocument_CreateDocumentType_m7839 (XmlDocument_t978 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentType System.Xml.XmlDocument::CreateDocumentType(Mono.Xml.DTDObjectModel)
extern "C" XmlDocumentType_t1598 * XmlDocument_CreateDocumentType_m7840 (XmlDocument_t978 * __this, DTDObjectModel_t1528 * ___dtd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String,System.String,System.String)
extern "C" XmlElement_t1103 * XmlDocument_CreateElement_m7841 (XmlDocument_t978 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String,System.String,System.String,System.Boolean)
extern "C" XmlElement_t1103 * XmlDocument_CreateElement_m7842 (XmlDocument_t978 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, bool ___nameAtomized, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlEntityReference System.Xml.XmlDocument::CreateEntityReference(System.String)
extern "C" XmlEntityReference_t1599 * XmlDocument_CreateEntityReference_m7843 (XmlDocument_t978 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlProcessingInstruction System.Xml.XmlDocument::CreateProcessingInstruction(System.String,System.String)
extern "C" XmlProcessingInstruction_t1615 * XmlDocument_CreateProcessingInstruction_m7844 (XmlDocument_t978 * __this, String_t* ___target, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSignificantWhitespace System.Xml.XmlDocument::CreateSignificantWhitespace(System.String)
extern "C" XmlSignificantWhitespace_t1619 * XmlDocument_CreateSignificantWhitespace_m7845 (XmlDocument_t978 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlText System.Xml.XmlDocument::CreateTextNode(System.String)
extern "C" XmlText_t1621 * XmlDocument_CreateTextNode_m7846 (XmlDocument_t978 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlWhitespace System.Xml.XmlDocument::CreateWhitespace(System.String)
extern "C" XmlWhitespace_t1636 * XmlDocument_CreateWhitespace_m7847 (XmlDocument_t978 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDeclaration System.Xml.XmlDocument::CreateXmlDeclaration(System.String,System.String,System.String)
extern "C" XmlDeclaration_t1593 * XmlDocument_CreateXmlDeclaration_m7848 (XmlDocument_t978 * __this, String_t* ___version, String_t* ___encoding, String_t* ___standalone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::GetIdenticalAttribute(System.String)
extern "C" XmlAttribute_t1123 * XmlDocument_GetIdenticalAttribute_m7849 (XmlDocument_t978 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::ImportNode(System.Xml.XmlNode,System.Boolean)
extern "C" XmlNode_t1124 * XmlDocument_ImportNode_m7850 (XmlDocument_t978 * __this, XmlNode_t1124 * ___node, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::Load(System.IO.TextReader)
extern "C" void XmlDocument_Load_m7851 (XmlDocument_t978 * __this, TextReader_t1101 * ___txtReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::Load(System.Xml.XmlReader)
extern "C" void XmlDocument_Load_m7852 (XmlDocument_t978 * __this, XmlReader_t843 * ___xmlReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::LoadXml(System.String)
extern "C" void XmlDocument_LoadXml_m7853 (XmlDocument_t978 * __this, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeChanged(System.Xml.XmlNode,System.Xml.XmlNode,System.String,System.String)
extern "C" void XmlDocument_onNodeChanged_m7854 (XmlDocument_t978 * __this, XmlNode_t1124 * ___node, XmlNode_t1124 * ___parent, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeChanging(System.Xml.XmlNode,System.Xml.XmlNode,System.String,System.String)
extern "C" void XmlDocument_onNodeChanging_m7855 (XmlDocument_t978 * __this, XmlNode_t1124 * ___node, XmlNode_t1124 * ___parent, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeInserted(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" void XmlDocument_onNodeInserted_m7856 (XmlDocument_t978 * __this, XmlNode_t1124 * ___node, XmlNode_t1124 * ___newParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeInserting(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" void XmlDocument_onNodeInserting_m7857 (XmlDocument_t978 * __this, XmlNode_t1124 * ___node, XmlNode_t1124 * ___newParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeRemoved(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" void XmlDocument_onNodeRemoved_m7858 (XmlDocument_t978 * __this, XmlNode_t1124 * ___node, XmlNode_t1124 * ___oldParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeRemoving(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" void XmlDocument_onNodeRemoving_m7859 (XmlDocument_t978 * __this, XmlNode_t1124 * ___node, XmlNode_t1124 * ___oldParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::ParseName(System.String,System.String&,System.String&)
extern "C" void XmlDocument_ParseName_m7860 (XmlDocument_t978 * __this, String_t* ___name, String_t** ___prefix, String_t** ___localName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::ReadAttributeNode(System.Xml.XmlReader)
extern "C" XmlAttribute_t1123 * XmlDocument_ReadAttributeNode_m7861 (XmlDocument_t978 * __this, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::ReadAttributeNodeValue(System.Xml.XmlReader,System.Xml.XmlAttribute)
extern "C" void XmlDocument_ReadAttributeNodeValue_m7862 (XmlDocument_t978 * __this, XmlReader_t843 * ___reader, XmlAttribute_t1123 * ___attribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::ReadNode(System.Xml.XmlReader)
extern "C" XmlNode_t1124 * XmlDocument_ReadNode_m7863 (XmlDocument_t978 * __this, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::ReadNodeCore(System.Xml.XmlReader)
extern "C" XmlNode_t1124 * XmlDocument_ReadNodeCore_m7864 (XmlDocument_t978 * __this, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::MakeReaderErrorMessage(System.String,System.Xml.XmlReader)
extern "C" String_t* XmlDocument_MakeReaderErrorMessage_m7865 (XmlDocument_t978 * __this, String_t* ___message, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::RemoveIdenticalAttribute(System.String)
extern "C" void XmlDocument_RemoveIdenticalAttribute_m7866 (XmlDocument_t978 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::AddDefaultNameTableKeys()
extern "C" void XmlDocument_AddDefaultNameTableKeys_m7867 (XmlDocument_t978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::CheckIdTableUpdate(System.Xml.XmlAttribute,System.String,System.String)
extern "C" void XmlDocument_CheckIdTableUpdate_m7868 (XmlDocument_t978 * __this, XmlAttribute_t1123 * ___attr, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
