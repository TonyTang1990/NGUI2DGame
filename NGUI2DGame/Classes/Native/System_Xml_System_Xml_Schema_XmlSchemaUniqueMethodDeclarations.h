#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaUnique
struct XmlSchemaUnique_t1753;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1144;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1053;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1762;

// System.Void System.Xml.Schema.XmlSchemaUnique::.ctor()
extern "C" void XmlSchemaUnique__ctor_m9575 (XmlSchemaUnique_t1753 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaUnique::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaUnique_Compile_m9576 (XmlSchemaUnique_t1753 * __this, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaUnique::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaUnique_Validate_m9577 (XmlSchemaUnique_t1753 * __this, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaUnique System.Xml.Schema.XmlSchemaUnique::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaUnique_t1753 * XmlSchemaUnique_Read_m9578 (Object_t * __this /* static, unused */, XmlSchemaReader_t1762 * ___reader, ValidationEventHandler_t1144 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
