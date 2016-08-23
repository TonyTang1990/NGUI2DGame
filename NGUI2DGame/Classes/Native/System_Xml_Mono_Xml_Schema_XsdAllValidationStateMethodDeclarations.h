#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdAllValidationState
struct XsdAllValidationState_t1515;
// System.Xml.Schema.XmlSchemaAll
struct XmlSchemaAll_t1514;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t1506;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t1508;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdAllValidationState::.ctor(System.Xml.Schema.XmlSchemaAll,Mono.Xml.Schema.XsdParticleStateManager)
extern "C" void XsdAllValidationState__ctor_m7153 (XsdAllValidationState_t1515 * __this, XmlSchemaAll_t1514 * ___all, XsdParticleStateManager_t1506 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAllValidationState::EvaluateStartElement(System.String,System.String)
extern "C" XsdValidationState_t1508 * XsdAllValidationState_EvaluateStartElement_m7154 (XsdAllValidationState_t1515 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAllValidationState::EvaluateEndElement()
extern "C" bool XsdAllValidationState_EvaluateEndElement_m7155 (XsdAllValidationState_t1515 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAllValidationState::EvaluateIsEmptiable()
extern "C" bool XsdAllValidationState_EvaluateIsEmptiable_m7156 (XsdAllValidationState_t1515 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
