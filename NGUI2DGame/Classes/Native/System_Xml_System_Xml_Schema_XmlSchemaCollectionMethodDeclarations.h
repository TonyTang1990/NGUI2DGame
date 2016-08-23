#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaCollection
struct XmlSchemaCollection_t1635;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t1102;
// System.Xml.XmlNameTable
struct XmlNameTable_t1543;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Xml.Schema.XmlSchemaCollectionEnumerator
struct XmlSchemaCollectionEnumerator_t1709;
// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t1704;

// System.Void System.Xml.Schema.XmlSchemaCollection::.ctor(System.Xml.XmlNameTable)
extern "C" void XmlSchemaCollection__ctor_m9095 (XmlSchemaCollection_t1635 * __this, XmlNameTable_t1543 * ___nameTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::.ctor(System.Xml.Schema.XmlSchemaSet)
extern "C" void XmlSchemaCollection__ctor_m9096 (XmlSchemaCollection_t1635 * __this, XmlSchemaSet_t1102 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.get_Count()
extern "C" int32_t XmlSchemaCollection_System_Collections_ICollection_get_Count_m9097 (XmlSchemaCollection_t1635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void XmlSchemaCollection_System_Collections_ICollection_CopyTo_m9098 (XmlSchemaCollection_t1635 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.Schema.XmlSchemaCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * XmlSchemaCollection_System_Collections_IEnumerable_GetEnumerator_m9099 (XmlSchemaCollection_t1635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaCollection::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * XmlSchemaCollection_System_Collections_ICollection_get_SyncRoot_m9100 (XmlSchemaCollection_t1635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSet System.Xml.Schema.XmlSchemaCollection::get_SchemaSet()
extern "C" XmlSchemaSet_t1102 * XmlSchemaCollection_get_SchemaSet_m9101 (XmlSchemaCollection_t1635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaCollection::get_Count()
extern "C" int32_t XmlSchemaCollection_get_Count_m9102 (XmlSchemaCollection_t1635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaCollectionEnumerator System.Xml.Schema.XmlSchemaCollection::GetEnumerator()
extern "C" XmlSchemaCollectionEnumerator_t1709 * XmlSchemaCollection_GetEnumerator_m9103 (XmlSchemaCollection_t1635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaCollection::OnValidationError(System.Object,System.Xml.Schema.ValidationEventArgs)
extern "C" void XmlSchemaCollection_OnValidationError_m9104 (XmlSchemaCollection_t1635 * __this, Object_t * ___o, ValidationEventArgs_t1704 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
