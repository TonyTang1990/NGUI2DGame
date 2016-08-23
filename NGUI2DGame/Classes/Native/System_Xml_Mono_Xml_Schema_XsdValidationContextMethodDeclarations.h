#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdValidationContext
struct XsdValidationContext_t1505;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t1054;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t1145;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdValidationContext::.ctor()
extern "C" void XsdValidationContext__ctor_m7263 (XsdValidationContext_t1505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidationContext::get_XsiType()
extern "C" Object_t * XsdValidationContext_get_XsiType_m7264 (XsdValidationContext_t1505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationContext::set_XsiType(System.Object)
extern "C" void XsdValidationContext_set_XsiType_m7265 (XsdValidationContext_t1505 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaElement Mono.Xml.Schema.XsdValidationContext::get_Element()
extern "C" XmlSchemaElement_t1054 * XsdValidationContext_get_Element_m7266 (XsdValidationContext_t1505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationContext::PushCurrentElement(System.Xml.Schema.XmlSchemaElement)
extern "C" void XsdValidationContext_PushCurrentElement_m7267 (XsdValidationContext_t1505 * __this, XmlSchemaElement_t1054 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationContext::PopCurrentElement()
extern "C" void XsdValidationContext_PopCurrentElement_m7268 (XsdValidationContext_t1505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidationContext::get_ActualType()
extern "C" Object_t * XsdValidationContext_get_ActualType_m7269 (XsdValidationContext_t1505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaType Mono.Xml.Schema.XsdValidationContext::get_ActualSchemaType()
extern "C" XmlSchemaType_t1145 * XsdValidationContext_get_ActualSchemaType_m7270 (XsdValidationContext_t1505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidationContext::get_IsInvalid()
extern "C" bool XsdValidationContext_get_IsInvalid_m7271 (XsdValidationContext_t1505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidationContext::Clone()
extern "C" Object_t * XsdValidationContext_Clone_m7272 (XsdValidationContext_t1505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationContext::EvaluateStartElement(System.String,System.String)
extern "C" void XsdValidationContext_EvaluateStartElement_m7273 (XsdValidationContext_t1505 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidationContext::EvaluateEndElement()
extern "C" bool XsdValidationContext_EvaluateEndElement_m7274 (XsdValidationContext_t1505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
