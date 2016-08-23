#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.ValidationHandler
struct ValidationHandler_t1760;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1144;
// System.Exception
struct Exception_t306;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1146;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSeverityType
#include "System_Xml_System_Xml_Schema_XmlSeverityType.h"

// System.Void System.Xml.Schema.ValidationHandler::RaiseValidationEvent(System.Xml.Schema.ValidationEventHandler,System.Exception,System.String,System.Xml.Schema.XmlSchemaObject,System.Object,System.String,System.Xml.Schema.XmlSeverityType)
extern "C" void ValidationHandler_RaiseValidationEvent_m9656 (Object_t * __this /* static, unused */, ValidationEventHandler_t1144 * ___handle, Exception_t306 * ___innerException, String_t* ___message, XmlSchemaObject_t1146 * ___xsobj, Object_t * ___sender, String_t* ___sourceUri, int32_t ___severity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
