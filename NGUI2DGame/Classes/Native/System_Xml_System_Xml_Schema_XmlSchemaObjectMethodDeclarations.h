#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1146;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1053;
// System.Xml.Serialization.XmlSerializerNamespaces
struct XmlSerializerNamespaces_t1738;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1144;
// System.Exception
struct Exception_t306;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t1105;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Xml.Schema.XmlSchemaObject::.ctor()
extern "C" void XmlSchemaObject__ctor_m9349 (XmlSchemaObject_t1146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObject::get_LineNumber()
extern "C" int32_t XmlSchemaObject_get_LineNumber_m9350 (XmlSchemaObject_t1146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::set_LineNumber(System.Int32)
extern "C" void XmlSchemaObject_set_LineNumber_m9351 (XmlSchemaObject_t1146 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObject::get_LinePosition()
extern "C" int32_t XmlSchemaObject_get_LinePosition_m9352 (XmlSchemaObject_t1146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::set_LinePosition(System.Int32)
extern "C" void XmlSchemaObject_set_LinePosition_m9353 (XmlSchemaObject_t1146 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaObject::get_SourceUri()
extern "C" String_t* XmlSchemaObject_get_SourceUri_m9354 (XmlSchemaObject_t1146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::set_SourceUri(System.String)
extern "C" void XmlSchemaObject_set_SourceUri_m9355 (XmlSchemaObject_t1146 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObject::get_Parent()
extern "C" XmlSchemaObject_t1146 * XmlSchemaObject_get_Parent_m9356 (XmlSchemaObject_t1146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::set_Parent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaObject_set_Parent_m9357 (XmlSchemaObject_t1146 * __this, XmlSchemaObject_t1146 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchemaObject::get_AncestorSchema()
extern "C" XmlSchema_t1053 * XmlSchemaObject_get_AncestorSchema_m9358 (XmlSchemaObject_t1146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaObject_SetParent_m9359 (XmlSchemaObject_t1146 * __this, XmlSchemaObject_t1146 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializerNamespaces System.Xml.Schema.XmlSchemaObject::get_Namespaces()
extern "C" XmlSerializerNamespaces_t1738 * XmlSchemaObject_get_Namespaces_m9360 (XmlSchemaObject_t1146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::error(System.Xml.Schema.ValidationEventHandler,System.String)
extern "C" void XmlSchemaObject_error_m9361 (XmlSchemaObject_t1146 * __this, ValidationEventHandler_t1144 * ___handle, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::warn(System.Xml.Schema.ValidationEventHandler,System.String)
extern "C" void XmlSchemaObject_warn_m9362 (XmlSchemaObject_t1146 * __this, ValidationEventHandler_t1144 * ___handle, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::error(System.Xml.Schema.ValidationEventHandler,System.String,System.Exception)
extern "C" void XmlSchemaObject_error_m9363 (Object_t * __this /* static, unused */, ValidationEventHandler_t1144 * ___handle, String_t* ___message, Exception_t306 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::error(System.Xml.Schema.ValidationEventHandler,System.String,System.Exception,System.Xml.Schema.XmlSchemaObject,System.Object)
extern "C" void XmlSchemaObject_error_m9364 (Object_t * __this /* static, unused */, ValidationEventHandler_t1144 * ___handle, String_t* ___message, Exception_t306 * ___innerException, XmlSchemaObject_t1146 * ___xsobj, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::warn(System.Xml.Schema.ValidationEventHandler,System.String,System.Exception,System.Xml.Schema.XmlSchemaObject,System.Object)
extern "C" void XmlSchemaObject_warn_m9365 (Object_t * __this /* static, unused */, ValidationEventHandler_t1144 * ___handle, String_t* ___message, Exception_t306 * ___innerException, XmlSchemaObject_t1146 * ___xsobj, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObject::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaObject_Compile_m9366 (XmlSchemaObject_t1146 * __this, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaObject::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaObject_Validate_m9367 (XmlSchemaObject_t1146 * __this, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaObject::IsValidated(System.Guid)
extern "C" bool XmlSchemaObject_IsValidated_m9368 (XmlSchemaObject_t1146 * __this, Guid_t713  ___validationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaObject::CopyInfo(System.Xml.Schema.XmlSchemaParticle)
extern "C" void XmlSchemaObject_CopyInfo_m9369 (XmlSchemaObject_t1146 * __this, XmlSchemaParticle_t1105 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
