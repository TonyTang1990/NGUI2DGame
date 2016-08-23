#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdElementValidationState
struct XsdElementValidationState_t1509;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t1054;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t1506;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t1508;

// System.Void Mono.Xml.Schema.XsdElementValidationState::.ctor(System.Xml.Schema.XmlSchemaElement,Mono.Xml.Schema.XsdParticleStateManager)
extern "C" void XsdElementValidationState__ctor_m7138 (XsdElementValidationState_t1509 * __this, XmlSchemaElement_t1054 * ___element, XsdParticleStateManager_t1506 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdElementValidationState::get_Name()
extern "C" String_t* XsdElementValidationState_get_Name_m7139 (XsdElementValidationState_t1509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdElementValidationState::get_NS()
extern "C" String_t* XsdElementValidationState_get_NS_m7140 (XsdElementValidationState_t1509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdElementValidationState::EvaluateStartElement(System.String,System.String)
extern "C" XsdValidationState_t1508 * XsdElementValidationState_EvaluateStartElement_m7141 (XsdElementValidationState_t1509 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdElementValidationState::CheckOccurence(System.Xml.Schema.XmlSchemaElement)
extern "C" XsdValidationState_t1508 * XsdElementValidationState_CheckOccurence_m7142 (XsdElementValidationState_t1509 * __this, XmlSchemaElement_t1054 * ___maybeSubstituted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdElementValidationState::EvaluateEndElement()
extern "C" bool XsdElementValidationState_EvaluateEndElement_m7143 (XsdElementValidationState_t1509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdElementValidationState::EvaluateIsEmptiable()
extern "C" bool XsdElementValidationState_EvaluateIsEmptiable_m7144 (XsdElementValidationState_t1509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
