#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlDocumentFragment
struct XmlDocumentFragment_t1597;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t1583;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t978;
// System.Xml.XmlNode
struct XmlNode_t1124;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlDocumentFragment::.ctor(System.Xml.XmlDocument)
extern "C" void XmlDocumentFragment__ctor_m7869 (XmlDocumentFragment_t1597 * __this, XmlDocument_t978 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlDocumentFragment::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C" XmlLinkedNode_t1583 * XmlDocumentFragment_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m7870 (XmlDocumentFragment_t1597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentFragment::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C" void XmlDocumentFragment_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m7871 (XmlDocumentFragment_t1597 * __this, XmlLinkedNode_t1583 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentFragment::get_LocalName()
extern "C" String_t* XmlDocumentFragment_get_LocalName_m7872 (XmlDocumentFragment_t1597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentFragment::get_Name()
extern "C" String_t* XmlDocumentFragment_get_Name_m7873 (XmlDocumentFragment_t1597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDocumentFragment::get_NodeType()
extern "C" int32_t XmlDocumentFragment_get_NodeType_m7874 (XmlDocumentFragment_t1597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlDocumentFragment::get_OwnerDocument()
extern "C" XmlDocument_t978 * XmlDocumentFragment_get_OwnerDocument_m7875 (XmlDocumentFragment_t1597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocumentFragment::get_ParentNode()
extern "C" XmlNode_t1124 * XmlDocumentFragment_get_ParentNode_m7876 (XmlDocumentFragment_t1597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocumentFragment::CloneNode(System.Boolean)
extern "C" XmlNode_t1124 * XmlDocumentFragment_CloneNode_m7877 (XmlDocumentFragment_t1597 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
