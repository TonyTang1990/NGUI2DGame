#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaSimpleContent
struct XmlSchemaSimpleContent_t1744;
// System.Xml.Schema.XmlSchemaContent
struct XmlSchemaContent_t1711;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1146;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1144;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1053;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1762;

// System.Void System.Xml.Schema.XmlSchemaSimpleContent::.ctor()
extern "C" void XmlSchemaSimpleContent__ctor_m9471 (XmlSchemaSimpleContent_t1744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContent System.Xml.Schema.XmlSchemaSimpleContent::get_Content()
extern "C" XmlSchemaContent_t1711 * XmlSchemaSimpleContent_get_Content_m9472 (XmlSchemaSimpleContent_t1744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleContent::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaSimpleContent_SetParent_m9473 (XmlSchemaSimpleContent_t1744 * __this, XmlSchemaObject_t1146 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleContent::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSimpleContent_Compile_m9474 (XmlSchemaSimpleContent_t1744 * __this, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleContent::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSimpleContent_Validate_m9475 (XmlSchemaSimpleContent_t1744 * __this, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleContent System.Xml.Schema.XmlSchemaSimpleContent::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaSimpleContent_t1744 * XmlSchemaSimpleContent_Read_m9476 (Object_t * __this /* static, unused */, XmlSchemaReader_t1762 * ___reader, ValidationEventHandler_t1144 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
