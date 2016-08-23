#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdIDManager
struct XsdIDManager_t1522;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t1051;
// System.Object
struct Object_t;

// System.Void Mono.Xml.Schema.XsdIDManager::.ctor()
extern "C" void XsdIDManager__ctor_m7275 (XsdIDManager_t1522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Xml.Schema.XsdIDManager::get_MissingIDReferences()
extern "C" ArrayList_t913 * XsdIDManager_get_MissingIDReferences_m7276 (XsdIDManager_t1522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdIDManager::OnStartElement()
extern "C" void XsdIDManager_OnStartElement_m7277 (XsdIDManager_t1522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdIDManager::AssessEachAttributeIdentityConstraint(System.Xml.Schema.XmlSchemaDatatype,System.Object,System.String)
extern "C" String_t* XsdIDManager_AssessEachAttributeIdentityConstraint_m7278 (XsdIDManager_t1522 * __this, XmlSchemaDatatype_t1051 * ___dt, Object_t * ___parsedValue, String_t* ___elementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdIDManager::HasMissingIDReferences()
extern "C" bool XsdIDManager_HasMissingIDReferences_m7279 (XsdIDManager_t1522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdIDManager::GetMissingIDString()
extern "C" String_t* XsdIDManager_GetMissingIDString_m7280 (XsdIDManager_t1522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
