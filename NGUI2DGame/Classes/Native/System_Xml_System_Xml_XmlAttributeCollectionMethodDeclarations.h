#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t1136;
// System.Object
struct Object_t;
// System.Xml.XmlAttribute
struct XmlAttribute_t1123;
// System.String
struct String_t;
// System.Xml.XmlNode
struct XmlNode_t1124;
// System.Array
struct Array_t;

// System.Void System.Xml.XmlAttributeCollection::.ctor(System.Xml.XmlNode)
extern "C" void XmlAttributeCollection__ctor_m7742 (XmlAttributeCollection_t1136 * __this, XmlNode_t1124 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XmlAttributeCollection::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * XmlAttributeCollection_System_Collections_ICollection_get_SyncRoot_m7743 (XmlAttributeCollection_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttributeCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void XmlAttributeCollection_System_Collections_ICollection_CopyTo_m7744 (XmlAttributeCollection_t1136 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlAttributeCollection::get_IsReadOnly()
extern "C" bool XmlAttributeCollection_get_IsReadOnly_m7745 (XmlAttributeCollection_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::get_ItemOf(System.String)
extern "C" XmlAttribute_t1123 * XmlAttributeCollection_get_ItemOf_m7746 (XmlAttributeCollection_t1136 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::get_ItemOf(System.Int32)
extern "C" XmlAttribute_t1123 * XmlAttributeCollection_get_ItemOf_m7747 (XmlAttributeCollection_t1136 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::get_ItemOf(System.String,System.String)
extern "C" XmlAttribute_t1123 * XmlAttributeCollection_get_ItemOf_m7748 (XmlAttributeCollection_t1136 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::Append(System.Xml.XmlAttribute)
extern "C" XmlAttribute_t1123 * XmlAttributeCollection_Append_m7749 (XmlAttributeCollection_t1136 * __this, XmlAttribute_t1123 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::Remove(System.Xml.XmlAttribute)
extern "C" XmlAttribute_t1123 * XmlAttributeCollection_Remove_m7750 (XmlAttributeCollection_t1136 * __this, XmlAttribute_t1123 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttributeCollection::RemoveAll()
extern "C" void XmlAttributeCollection_RemoveAll_m7751 (XmlAttributeCollection_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttributeCollection::SetNamedItem(System.Xml.XmlNode)
extern "C" XmlNode_t1124 * XmlAttributeCollection_SetNamedItem_m7752 (XmlAttributeCollection_t1136 * __this, XmlNode_t1124 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttributeCollection::AdjustIdenticalAttributes(System.Xml.XmlAttribute,System.Xml.XmlNode)
extern "C" void XmlAttributeCollection_AdjustIdenticalAttributes_m7753 (XmlAttributeCollection_t1136 * __this, XmlAttribute_t1123 * ___node, XmlNode_t1124 * ___existing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttributeCollection::RemoveIdenticalAttribute(System.Xml.XmlNode)
extern "C" XmlNode_t1124 * XmlAttributeCollection_RemoveIdenticalAttribute_m7754 (XmlAttributeCollection_t1136 * __this, XmlNode_t1124 * ___existing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
