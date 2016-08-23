#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t1110;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaXPath
struct XmlSchemaXPath_t1156;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t1141;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t985;
// Mono.Xml.Schema.XsdIdentitySelector
struct XsdIdentitySelector_t1494;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1146;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1144;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1053;

// System.Void System.Xml.Schema.XmlSchemaIdentityConstraint::.ctor()
extern "C" void XmlSchemaIdentityConstraint__ctor_m9283 (XmlSchemaIdentityConstraint_t1110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaIdentityConstraint::get_Name()
extern "C" String_t* XmlSchemaIdentityConstraint_get_Name_m5221 (XmlSchemaIdentityConstraint_t1110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaIdentityConstraint::set_Name(System.String)
extern "C" void XmlSchemaIdentityConstraint_set_Name_m9284 (XmlSchemaIdentityConstraint_t1110 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaXPath System.Xml.Schema.XmlSchemaIdentityConstraint::get_Selector()
extern "C" XmlSchemaXPath_t1156 * XmlSchemaIdentityConstraint_get_Selector_m5218 (XmlSchemaIdentityConstraint_t1110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaIdentityConstraint::set_Selector(System.Xml.Schema.XmlSchemaXPath)
extern "C" void XmlSchemaIdentityConstraint_set_Selector_m9285 (XmlSchemaIdentityConstraint_t1110 * __this, XmlSchemaXPath_t1156 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaIdentityConstraint::get_Fields()
extern "C" XmlSchemaObjectCollection_t1141 * XmlSchemaIdentityConstraint_get_Fields_m5220 (XmlSchemaIdentityConstraint_t1110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaIdentityConstraint::get_QualifiedName()
extern "C" XmlQualifiedName_t985 * XmlSchemaIdentityConstraint_get_QualifiedName_m9286 (XmlSchemaIdentityConstraint_t1110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentitySelector System.Xml.Schema.XmlSchemaIdentityConstraint::get_CompiledSelector()
extern "C" XsdIdentitySelector_t1494 * XmlSchemaIdentityConstraint_get_CompiledSelector_m9287 (XmlSchemaIdentityConstraint_t1110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaIdentityConstraint::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaIdentityConstraint_SetParent_m9288 (XmlSchemaIdentityConstraint_t1110 * __this, XmlSchemaObject_t1146 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaIdentityConstraint::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaIdentityConstraint_Compile_m9289 (XmlSchemaIdentityConstraint_t1110 * __this, ValidationEventHandler_t1144 * ___h, XmlSchema_t1053 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
