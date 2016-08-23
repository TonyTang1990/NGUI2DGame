#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdAnyValidationState
struct XsdAnyValidationState_t1517;
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t1516;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t1506;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t1508;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdAnyValidationState::.ctor(System.Xml.Schema.XmlSchemaAny,Mono.Xml.Schema.XsdParticleStateManager)
extern "C" void XsdAnyValidationState__ctor_m7157 (XsdAnyValidationState_t1517 * __this, XmlSchemaAny_t1516 * ___any, XsdParticleStateManager_t1506 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAnyValidationState::EvaluateStartElement(System.String,System.String)
extern "C" XsdValidationState_t1508 * XsdAnyValidationState_EvaluateStartElement_m7158 (XsdAnyValidationState_t1517 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAnyValidationState::MatchesNamespace(System.String)
extern "C" bool XsdAnyValidationState_MatchesNamespace_m7159 (XsdAnyValidationState_t1517 * __this, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAnyValidationState::EvaluateEndElement()
extern "C" bool XsdAnyValidationState_EvaluateEndElement_m7160 (XsdAnyValidationState_t1517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAnyValidationState::EvaluateIsEmptiable()
extern "C" bool XsdAnyValidationState_EvaluateIsEmptiable_m7161 (XsdAnyValidationState_t1517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
