#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdSequenceValidationState
struct XsdSequenceValidationState_t1511;
// System.Xml.Schema.XmlSchemaSequence
struct XmlSchemaSequence_t1510;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t1506;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t1508;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdSequenceValidationState::.ctor(System.Xml.Schema.XmlSchemaSequence,Mono.Xml.Schema.XsdParticleStateManager)
extern "C" void XsdSequenceValidationState__ctor_m7145 (XsdSequenceValidationState_t1511 * __this, XmlSchemaSequence_t1510 * ___sequence, XsdParticleStateManager_t1506 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdSequenceValidationState::EvaluateStartElement(System.String,System.String)
extern "C" XsdValidationState_t1508 * XsdSequenceValidationState_EvaluateStartElement_m7146 (XsdSequenceValidationState_t1511 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdSequenceValidationState::EvaluateEndElement()
extern "C" bool XsdSequenceValidationState_EvaluateEndElement_m7147 (XsdSequenceValidationState_t1511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdSequenceValidationState::EvaluateIsEmptiable()
extern "C" bool XsdSequenceValidationState_EvaluateIsEmptiable_m7148 (XsdSequenceValidationState_t1511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
