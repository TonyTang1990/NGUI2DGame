#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t1141;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1146;
// System.Xml.Schema.XmlSchemaObjectEnumerator
struct XmlSchemaObjectEnumerator_t1147;
// System.Object
struct Object_t;

// System.Void System.Xml.Schema.XmlSchemaObjectCollection::.ctor()
extern "C" void XmlSchemaObjectCollection__ctor_m9370 (XmlSchemaObjectCollection_t1141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectCollection::.ctor(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaObjectCollection__ctor_m9371 (XmlSchemaObjectCollection_t1141 * __this, XmlSchemaObject_t1146 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObjectCollection::get_Item(System.Int32)
extern "C" XmlSchemaObject_t1146 * XmlSchemaObjectCollection_get_Item_m9372 (XmlSchemaObjectCollection_t1141 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObjectCollection::Add(System.Xml.Schema.XmlSchemaObject)
extern "C" int32_t XmlSchemaObjectCollection_Add_m5125 (XmlSchemaObjectCollection_t1141 * __this, XmlSchemaObject_t1146 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaObjectCollection::Contains(System.Xml.Schema.XmlSchemaObject)
extern "C" bool XmlSchemaObjectCollection_Contains_m9373 (XmlSchemaObjectCollection_t1141 * __this, XmlSchemaObject_t1146 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectEnumerator System.Xml.Schema.XmlSchemaObjectCollection::GetEnumerator()
extern "C" XmlSchemaObjectEnumerator_t1147 * XmlSchemaObjectCollection_GetEnumerator_m5186 (XmlSchemaObjectCollection_t1141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectCollection::OnClear()
extern "C" void XmlSchemaObjectCollection_OnClear_m9374 (XmlSchemaObjectCollection_t1141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectCollection::OnInsert(System.Int32,System.Object)
extern "C" void XmlSchemaObjectCollection_OnInsert_m9375 (XmlSchemaObjectCollection_t1141 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectCollection::OnRemove(System.Int32,System.Object)
extern "C" void XmlSchemaObjectCollection_OnRemove_m9376 (XmlSchemaObjectCollection_t1141 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectCollection::OnSet(System.Int32,System.Object,System.Object)
extern "C" void XmlSchemaObjectCollection_OnSet_m9377 (XmlSchemaObjectCollection_t1141 * __this, int32_t ___index, Object_t * ___oldValue, Object_t * ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
