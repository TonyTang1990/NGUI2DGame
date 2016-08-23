#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaImport
struct XmlSchemaImport_t1728;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaAnnotation
struct XmlSchemaAnnotation_t1112;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1762;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1144;

// System.Void System.Xml.Schema.XmlSchemaImport::.ctor()
extern "C" void XmlSchemaImport__ctor_m9290 (XmlSchemaImport_t1728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaImport::get_Namespace()
extern "C" String_t* XmlSchemaImport_get_Namespace_m9291 (XmlSchemaImport_t1728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaImport::set_Annotation(System.Xml.Schema.XmlSchemaAnnotation)
extern "C" void XmlSchemaImport_set_Annotation_m9292 (XmlSchemaImport_t1728 * __this, XmlSchemaAnnotation_t1112 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaImport System.Xml.Schema.XmlSchemaImport::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaImport_t1728 * XmlSchemaImport_Read_m9293 (Object_t * __this /* static, unused */, XmlSchemaReader_t1762 * ___reader, ValidationEventHandler_t1144 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
