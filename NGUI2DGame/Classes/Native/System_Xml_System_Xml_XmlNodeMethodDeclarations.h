#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNode
struct XmlNode_t1124;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t1136;
// System.String
struct String_t;
// System.Xml.XmlNodeList
struct XmlNodeList_t1135;
// System.Xml.XmlDocument
struct XmlDocument_t978;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t1586;
// System.Xml.XmlElement
struct XmlElement_t1103;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Text.StringBuilder
struct StringBuilder_t294;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t1569;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlNode::.ctor(System.Xml.XmlDocument)
extern "C" void XmlNode__ctor_m8010 (XmlNode_t1124 * __this, XmlDocument_t978 * ___ownerDocument, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::.cctor()
extern "C" void XmlNode__cctor_m8011 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XmlNode::System.ICloneable.Clone()
extern "C" Object_t * XmlNode_System_ICloneable_Clone_m8012 (XmlNode_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlNode::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * XmlNode_System_Collections_IEnumerable_GetEnumerator_m8013 (XmlNode_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes()
extern "C" XmlAttributeCollection_t1136 * XmlNode_get_Attributes_m8014 (XmlNode_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_BaseURI()
extern "C" String_t* XmlNode_get_BaseURI_m8015 (XmlNode_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_ChildrenBaseURI()
extern "C" String_t* XmlNode_get_ChildrenBaseURI_m8016 (XmlNode_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes()
extern "C" XmlNodeList_t1135 * XmlNode_get_ChildNodes_m8017 (XmlNode_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_FirstChild()
extern "C" XmlNode_t1124 * XmlNode_get_FirstChild_m8018 (XmlNode_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNode::get_HasChildNodes()
extern "C" bool XmlNode_get_HasChildNodes_m8019 (XmlNode_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_InnerText()
extern "C" String_t* XmlNode_get_InnerText_m8020 (XmlNode_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::AppendChildValues(System.Text.StringBuilder&)
extern "C" void XmlNode_AppendChildValues_m8021 (XmlNode_t1124 * __this, StringBuilder_t294 ** ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNode::get_IsReadOnly()
extern "C" bool XmlNode_get_IsReadOnly_m8022 (XmlNode_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_LastChild()
extern "C" XmlNode_t1124 * XmlNode_get_LastChild_m8023 (XmlNode_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_LocalName()
// System.String System.Xml.XmlNode::get_Name()
// System.String System.Xml.XmlNode::get_NamespaceURI()
extern "C" String_t* XmlNode_get_NamespaceURI_m8024 (XmlNode_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_NextSibling()
extern "C" XmlNode_t1124 * XmlNode_get_NextSibling_m8025 (XmlNode_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType()
// System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument()
extern "C" XmlDocument_t978 * XmlNode_get_OwnerDocument_m8026 (XmlNode_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode()
extern "C" XmlNode_t1124 * XmlNode_get_ParentNode_m8027 (XmlNode_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_Prefix()
extern "C" String_t* XmlNode_get_Prefix_m8028 (XmlNode_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::set_Prefix(System.String)
extern "C" void XmlNode_set_Prefix_m8029 (XmlNode_t1124 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_PreviousSibling()
extern "C" XmlNode_t1124 * XmlNode_get_PreviousSibling_m8030 (XmlNode_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_Value()
extern "C" String_t* XmlNode_get_Value_m8031 (XmlNode_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::set_Value(System.String)
extern "C" void XmlNode_set_Value_m8032 (XmlNode_t1124 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_XmlLang()
extern "C" String_t* XmlNode_get_XmlLang_m8033 (XmlNode_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlNode::get_XmlSpace()
extern "C" int32_t XmlNode_get_XmlSpace_m8034 (XmlNode_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlNode::get_SchemaInfo()
extern "C" Object_t * XmlNode_get_SchemaInfo_m8035 (XmlNode_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C" void XmlNode_set_SchemaInfo_m8036 (XmlNode_t1124 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode)
extern "C" XmlNode_t1124 * XmlNode_AppendChild_m8037 (XmlNode_t1124 * __this, XmlNode_t1124 * ___newChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode,System.Boolean)
extern "C" XmlNode_t1124 * XmlNode_AppendChild_m8038 (XmlNode_t1124 * __this, XmlNode_t1124 * ___newChild, bool ___checkNodeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::Clone()
extern "C" XmlNode_t1124 * XmlNode_Clone_m8039 (XmlNode_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::CloneNode(System.Boolean)
// System.Collections.IEnumerator System.Xml.XmlNode::GetEnumerator()
extern "C" Object_t * XmlNode_GetEnumerator_m8040 (XmlNode_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::InsertBefore(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" XmlNode_t1124 * XmlNode_InsertBefore_m8041 (XmlNode_t1124 * __this, XmlNode_t1124 * ___newChild, XmlNode_t1124 * ___refChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNode::IsAncestor(System.Xml.XmlNode)
extern "C" bool XmlNode_IsAncestor_m8042 (XmlNode_t1124 * __this, XmlNode_t1124 * ___newChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::InsertBefore(System.Xml.XmlNode,System.Xml.XmlNode,System.Boolean,System.Boolean)
extern "C" XmlNode_t1124 * XmlNode_InsertBefore_m8043 (XmlNode_t1124 * __this, XmlNode_t1124 * ___newChild, XmlNode_t1124 * ___refChild, bool ___checkNodeType, bool ___raiseEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::CheckNodeInsertion(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" void XmlNode_CheckNodeInsertion_m8044 (XmlNode_t1124 * __this, XmlNode_t1124 * ___newChild, XmlNode_t1124 * ___refChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::RemoveAll()
extern "C" void XmlNode_RemoveAll_m8045 (XmlNode_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::RemoveChild(System.Xml.XmlNode)
extern "C" XmlNode_t1124 * XmlNode_RemoveChild_m8046 (XmlNode_t1124 * __this, XmlNode_t1124 * ___oldChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::CheckNodeRemoval()
extern "C" void XmlNode_CheckNodeRemoval_m8047 (XmlNode_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::RemoveChild(System.Xml.XmlNode,System.Boolean)
extern "C" XmlNode_t1124 * XmlNode_RemoveChild_m8048 (XmlNode_t1124 * __this, XmlNode_t1124 * ___oldChild, bool ___checkNodeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlNode::get_AttributeOwnerElement()
extern "C" XmlElement_t1103 * XmlNode_get_AttributeOwnerElement_m8049 (XmlNode_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::set_AttributeOwnerElement(System.Xml.XmlElement)
extern "C" void XmlNode_set_AttributeOwnerElement_m8050 (XmlNode_t1124 * __this, XmlElement_t1103 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamespaceManager System.Xml.XmlNode::ConstructNamespaceManager()
extern "C" XmlNamespaceManager_t1569 * XmlNode_ConstructNamespaceManager_m8051 (XmlNode_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
