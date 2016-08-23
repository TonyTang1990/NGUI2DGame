#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t1704;
// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t1703;
// System.String
struct String_t;
// System.Xml.Schema.XmlSeverityType
#include "System_Xml_System_Xml_Schema_XmlSeverityType.h"

// System.Void System.Xml.Schema.ValidationEventArgs::.ctor(System.Xml.Schema.XmlSchemaException,System.String,System.Xml.Schema.XmlSeverityType)
extern "C" void ValidationEventArgs__ctor_m8934 (ValidationEventArgs_t1704 * __this, XmlSchemaException_t1703 * ___ex, String_t* ___message, int32_t ___severity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaException System.Xml.Schema.ValidationEventArgs::get_Exception()
extern "C" XmlSchemaException_t1703 * ValidationEventArgs_get_Exception_m8935 (ValidationEventArgs_t1704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSeverityType System.Xml.Schema.ValidationEventArgs::get_Severity()
extern "C" int32_t ValidationEventArgs_get_Severity_m8936 (ValidationEventArgs_t1704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
