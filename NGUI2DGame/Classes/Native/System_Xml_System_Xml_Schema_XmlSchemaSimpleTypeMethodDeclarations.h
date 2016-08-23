#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t1109;
// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t1500;
// System.Xml.Schema.XmlSchemaSimpleTypeContent
struct XmlSchemaSimpleTypeContent_t1154;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1146;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1144;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1053;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t1141;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1762;
// System.Xml.Schema.XmlSchemaDerivationMethod
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMethod.h"

// System.Void System.Xml.Schema.XmlSchemaSimpleType::.ctor()
extern "C" void XmlSchemaSimpleType__ctor_m9500 (XmlSchemaSimpleType_t1109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleType::.cctor()
extern "C" void XmlSchemaSimpleType__cctor_m9501 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleType::BuildSchemaType(System.String,System.String)
extern "C" XmlSchemaSimpleType_t1109 * XmlSchemaSimpleType_BuildSchemaType_m9502 (Object_t * __this /* static, unused */, String_t* ___name, String_t* ___baseName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleType::BuildSchemaType(System.String,System.String,System.Boolean,System.Boolean)
extern "C" XmlSchemaSimpleType_t1109 * XmlSchemaSimpleType_BuildSchemaType_m9503 (Object_t * __this /* static, unused */, String_t* ___name, String_t* ___baseName, bool ___xdt, bool ___baseXdt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAnySimpleType System.Xml.Schema.XmlSchemaSimpleType::get_AnySimpleType()
extern "C" XsdAnySimpleType_t1500 * XmlSchemaSimpleType_get_AnySimpleType_m9504 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleTypeContent System.Xml.Schema.XmlSchemaSimpleType::get_Content()
extern "C" XmlSchemaSimpleTypeContent_t1154 * XmlSchemaSimpleType_get_Content_m5214 (XmlSchemaSimpleType_t1109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleType::set_Content(System.Xml.Schema.XmlSchemaSimpleTypeContent)
extern "C" void XmlSchemaSimpleType_set_Content_m9505 (XmlSchemaSimpleType_t1109 * __this, XmlSchemaSimpleTypeContent_t1154 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaSimpleType::get_Variety()
extern "C" int32_t XmlSchemaSimpleType_get_Variety_m9506 (XmlSchemaSimpleType_t1109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleType::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaSimpleType_SetParent_m9507 (XmlSchemaSimpleType_t1109 * __this, XmlSchemaObject_t1146 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleType::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSimpleType_Compile_m9508 (XmlSchemaSimpleType_t1109 * __this, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleType::CollectBaseType(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaSimpleType_CollectBaseType_m9509 (XmlSchemaSimpleType_t1109 * __this, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleType::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSimpleType_Validate_m9510 (XmlSchemaSimpleType_t1109 * __this, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleType::ValidateDerivationValid(System.Object,System.Xml.Schema.XmlSchemaObjectCollection,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaSimpleType_ValidateDerivationValid_m9511 (XmlSchemaSimpleType_t1109 * __this, Object_t * ___baseType, XmlSchemaObjectCollection_t1141 * ___facets, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleType::ValidateTypeDerivationOK(System.Object,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" bool XmlSchemaSimpleType_ValidateTypeDerivationOK_m9512 (XmlSchemaSimpleType_t1109 * __this, Object_t * ___baseType, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleType::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaSimpleType_t1109 * XmlSchemaSimpleType_Read_m9513 (Object_t * __this /* static, unused */, XmlSchemaReader_t1762 * ___reader, ValidationEventHandler_t1144 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
