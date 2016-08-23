#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdAppendedValidationState
struct XsdAppendedValidationState_t1518;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t1506;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t1508;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdAppendedValidationState::.ctor(Mono.Xml.Schema.XsdParticleStateManager,Mono.Xml.Schema.XsdValidationState,Mono.Xml.Schema.XsdValidationState)
extern "C" void XsdAppendedValidationState__ctor_m7162 (XsdAppendedValidationState_t1518 * __this, XsdParticleStateManager_t1506 * ___manager, XsdValidationState_t1508 * ___head, XsdValidationState_t1508 * ___rest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAppendedValidationState::EvaluateStartElement(System.String,System.String)
extern "C" XsdValidationState_t1508 * XsdAppendedValidationState_EvaluateStartElement_m7163 (XsdAppendedValidationState_t1518 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAppendedValidationState::EvaluateEndElement()
extern "C" bool XsdAppendedValidationState_EvaluateEndElement_m7164 (XsdAppendedValidationState_t1518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAppendedValidationState::EvaluateIsEmptiable()
extern "C" bool XsdAppendedValidationState_EvaluateIsEmptiable_m7165 (XsdAppendedValidationState_t1518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
