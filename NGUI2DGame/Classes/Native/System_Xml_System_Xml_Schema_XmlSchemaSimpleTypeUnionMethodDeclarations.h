#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaSimpleTypeUnion
struct XmlSchemaSimpleTypeUnion_t1751;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t1141;
// System.Xml.XmlQualifiedName[]
struct XmlQualifiedNameU5BU5D_t1749;
// System.Object[]
struct ObjectU5BU5D_t300;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1146;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1144;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1053;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1762;

// System.Void System.Xml.Schema.XmlSchemaSimpleTypeUnion::.ctor()
extern "C" void XmlSchemaSimpleTypeUnion__ctor_m9550 (XmlSchemaSimpleTypeUnion_t1751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSimpleTypeUnion::get_BaseTypes()
extern "C" XmlSchemaObjectCollection_t1141 * XmlSchemaSimpleTypeUnion_get_BaseTypes_m9551 (XmlSchemaSimpleTypeUnion_t1751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName[] System.Xml.Schema.XmlSchemaSimpleTypeUnion::get_MemberTypes()
extern "C" XmlQualifiedNameU5BU5D_t1749* XmlSchemaSimpleTypeUnion_get_MemberTypes_m9552 (XmlSchemaSimpleTypeUnion_t1751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Xml.Schema.XmlSchemaSimpleTypeUnion::get_ValidatedTypes()
extern "C" ObjectU5BU5D_t300* XmlSchemaSimpleTypeUnion_get_ValidatedTypes_m9553 (XmlSchemaSimpleTypeUnion_t1751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeUnion::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaSimpleTypeUnion_SetParent_m9554 (XmlSchemaSimpleTypeUnion_t1751 * __this, XmlSchemaObject_t1146 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeUnion::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSimpleTypeUnion_Compile_m9555 (XmlSchemaSimpleTypeUnion_t1751 * __this, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeUnion::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSimpleTypeUnion_Validate_m9556 (XmlSchemaSimpleTypeUnion_t1751 * __this, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleTypeUnion System.Xml.Schema.XmlSchemaSimpleTypeUnion::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaSimpleTypeUnion_t1751 * XmlSchemaSimpleTypeUnion_Read_m9557 (Object_t * __this /* static, unused */, XmlSchemaReader_t1762 * ___reader, ValidationEventHandler_t1144 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
