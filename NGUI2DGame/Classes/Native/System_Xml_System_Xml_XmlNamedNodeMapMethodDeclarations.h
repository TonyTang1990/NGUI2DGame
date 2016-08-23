#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t1587;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Xml.XmlNode
struct XmlNode_t1124;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.String
struct String_t;

// System.Void System.Xml.XmlNamedNodeMap::.ctor(System.Xml.XmlNode)
extern "C" void XmlNamedNodeMap__ctor_m7971 (XmlNamedNodeMap_t1587 * __this, XmlNode_t1124 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamedNodeMap::.cctor()
extern "C" void XmlNamedNodeMap__cctor_m7972 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.XmlNamedNodeMap::get_NodeList()
extern "C" ArrayList_t913 * XmlNamedNodeMap_get_NodeList_m7973 (XmlNamedNodeMap_t1587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNamedNodeMap::get_Count()
extern "C" int32_t XmlNamedNodeMap_get_Count_m7974 (XmlNamedNodeMap_t1587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlNamedNodeMap::GetEnumerator()
extern "C" Object_t * XmlNamedNodeMap_GetEnumerator_m7975 (XmlNamedNodeMap_t1587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::GetNamedItem(System.String)
extern "C" XmlNode_t1124 * XmlNamedNodeMap_GetNamedItem_m7976 (XmlNamedNodeMap_t1587 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::GetNamedItem(System.String,System.String)
extern "C" XmlNode_t1124 * XmlNamedNodeMap_GetNamedItem_m7977 (XmlNamedNodeMap_t1587 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::RemoveNamedItem(System.String)
extern "C" XmlNode_t1124 * XmlNamedNodeMap_RemoveNamedItem_m7978 (XmlNamedNodeMap_t1587 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::RemoveNamedItem(System.String,System.String)
extern "C" XmlNode_t1124 * XmlNamedNodeMap_RemoveNamedItem_m7979 (XmlNamedNodeMap_t1587 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::SetNamedItem(System.Xml.XmlNode)
extern "C" XmlNode_t1124 * XmlNamedNodeMap_SetNamedItem_m7980 (XmlNamedNodeMap_t1587 * __this, XmlNode_t1124 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::SetNamedItem(System.Xml.XmlNode,System.Int32,System.Boolean)
extern "C" XmlNode_t1124 * XmlNamedNodeMap_SetNamedItem_m7981 (XmlNamedNodeMap_t1587 * __this, XmlNode_t1124 * ___node, int32_t ___pos, bool ___raiseEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.XmlNamedNodeMap::get_Nodes()
extern "C" ArrayList_t913 * XmlNamedNodeMap_get_Nodes_m7982 (XmlNamedNodeMap_t1587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
