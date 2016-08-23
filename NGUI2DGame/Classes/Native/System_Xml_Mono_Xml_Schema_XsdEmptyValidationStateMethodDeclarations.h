#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdEmptyValidationState
struct XsdEmptyValidationState_t1519;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t1506;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t1508;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdEmptyValidationState::.ctor(Mono.Xml.Schema.XsdParticleStateManager)
extern "C" void XsdEmptyValidationState__ctor_m7166 (XsdEmptyValidationState_t1519 * __this, XsdParticleStateManager_t1506 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdEmptyValidationState::EvaluateStartElement(System.String,System.String)
extern "C" XsdValidationState_t1508 * XsdEmptyValidationState_EvaluateStartElement_m7167 (XsdEmptyValidationState_t1519 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdEmptyValidationState::EvaluateEndElement()
extern "C" bool XsdEmptyValidationState_EvaluateEndElement_m7168 (XsdEmptyValidationState_t1519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdEmptyValidationState::EvaluateIsEmptiable()
extern "C" bool XsdEmptyValidationState_EvaluateIsEmptiable_m7169 (XsdEmptyValidationState_t1519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
