#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t1149;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1146;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t985;
// System.Collections.ICollection
struct ICollection_t793;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1360;

// System.Void System.Xml.Schema.XmlSchemaObjectTable::.ctor()
extern "C" void XmlSchemaObjectTable__ctor_m9390 (XmlSchemaObjectTable_t1149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObjectTable::get_Count()
extern "C" int32_t XmlSchemaObjectTable_get_Count_m5191 (XmlSchemaObjectTable_t1149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObjectTable::get_Item(System.Xml.XmlQualifiedName)
extern "C" XmlSchemaObject_t1146 * XmlSchemaObjectTable_get_Item_m5230 (XmlSchemaObjectTable_t1149 * __this, XmlQualifiedName_t985 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Schema.XmlSchemaObjectTable::get_Names()
extern "C" Object_t * XmlSchemaObjectTable_get_Names_m9391 (XmlSchemaObjectTable_t1149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Schema.XmlSchemaObjectTable::get_Values()
extern "C" Object_t * XmlSchemaObjectTable_get_Values_m9392 (XmlSchemaObjectTable_t1149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaObjectTable::Contains(System.Xml.XmlQualifiedName)
extern "C" bool XmlSchemaObjectTable_Contains_m9393 (XmlSchemaObjectTable_t1149 * __this, XmlQualifiedName_t985 * ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Xml.Schema.XmlSchemaObjectTable::GetEnumerator()
extern "C" Object_t * XmlSchemaObjectTable_GetEnumerator_m5202 (XmlSchemaObjectTable_t1149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectTable::Add(System.Xml.XmlQualifiedName,System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaObjectTable_Add_m9394 (XmlSchemaObjectTable_t1149 * __this, XmlQualifiedName_t985 * ___name, XmlSchemaObject_t1146 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectTable::Clear()
extern "C" void XmlSchemaObjectTable_Clear_m9395 (XmlSchemaObjectTable_t1149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObjectTable::Set(System.Xml.XmlQualifiedName,System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaObjectTable_Set_m9396 (XmlSchemaObjectTable_t1149 * __this, XmlQualifiedName_t985 * ___name, XmlSchemaObject_t1146 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
