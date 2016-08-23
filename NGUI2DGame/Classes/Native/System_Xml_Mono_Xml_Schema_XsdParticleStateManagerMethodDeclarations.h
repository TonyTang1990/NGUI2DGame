#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t1506;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t1508;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1146;
// Mono.Xml.Schema.XsdElementValidationState
struct XsdElementValidationState_t1509;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t1054;
// Mono.Xml.Schema.XsdSequenceValidationState
struct XsdSequenceValidationState_t1511;
// System.Xml.Schema.XmlSchemaSequence
struct XmlSchemaSequence_t1510;
// Mono.Xml.Schema.XsdChoiceValidationState
struct XsdChoiceValidationState_t1513;
// System.Xml.Schema.XmlSchemaChoice
struct XmlSchemaChoice_t1512;
// Mono.Xml.Schema.XsdAllValidationState
struct XsdAllValidationState_t1515;
// System.Xml.Schema.XmlSchemaAll
struct XmlSchemaAll_t1514;
// Mono.Xml.Schema.XsdAnyValidationState
struct XsdAnyValidationState_t1517;
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t1516;
// Mono.Xml.Schema.XsdEmptyValidationState
struct XsdEmptyValidationState_t1519;
// System.Xml.Schema.XmlSchemaContentProcessing
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProcessing.h"

// System.Void Mono.Xml.Schema.XsdParticleStateManager::.ctor()
extern "C" void XsdParticleStateManager__ctor_m7118 (XsdParticleStateManager_t1506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing Mono.Xml.Schema.XsdParticleStateManager::get_ProcessContents()
extern "C" int32_t XsdParticleStateManager_get_ProcessContents_m7119 (XsdParticleStateManager_t1506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdParticleStateManager::PushContext()
extern "C" void XsdParticleStateManager_PushContext_m7120 (XsdParticleStateManager_t1506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdParticleStateManager::PopContext()
extern "C" void XsdParticleStateManager_PopContext_m7121 (XsdParticleStateManager_t1506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdParticleStateManager::SetProcessContents(System.Xml.Schema.XmlSchemaContentProcessing)
extern "C" void XsdParticleStateManager_SetProcessContents_m7122 (XsdParticleStateManager_t1506 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdParticleStateManager::Create(System.Xml.Schema.XmlSchemaObject)
extern "C" XsdValidationState_t1508 * XsdParticleStateManager_Create_m7123 (XsdParticleStateManager_t1506 * __this, XmlSchemaObject_t1146 * ___xsobj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdParticleStateManager::MakeSequence(Mono.Xml.Schema.XsdValidationState,Mono.Xml.Schema.XsdValidationState)
extern "C" XsdValidationState_t1508 * XsdParticleStateManager_MakeSequence_m7124 (XsdParticleStateManager_t1506 * __this, XsdValidationState_t1508 * ___head, XsdValidationState_t1508 * ___rest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdElementValidationState Mono.Xml.Schema.XsdParticleStateManager::AddElement(System.Xml.Schema.XmlSchemaElement)
extern "C" XsdElementValidationState_t1509 * XsdParticleStateManager_AddElement_m7125 (XsdParticleStateManager_t1506 * __this, XmlSchemaElement_t1054 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdSequenceValidationState Mono.Xml.Schema.XsdParticleStateManager::AddSequence(System.Xml.Schema.XmlSchemaSequence)
extern "C" XsdSequenceValidationState_t1511 * XsdParticleStateManager_AddSequence_m7126 (XsdParticleStateManager_t1506 * __this, XmlSchemaSequence_t1510 * ___sequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdChoiceValidationState Mono.Xml.Schema.XsdParticleStateManager::AddChoice(System.Xml.Schema.XmlSchemaChoice)
extern "C" XsdChoiceValidationState_t1513 * XsdParticleStateManager_AddChoice_m7127 (XsdParticleStateManager_t1506 * __this, XmlSchemaChoice_t1512 * ___choice, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAllValidationState Mono.Xml.Schema.XsdParticleStateManager::AddAll(System.Xml.Schema.XmlSchemaAll)
extern "C" XsdAllValidationState_t1515 * XsdParticleStateManager_AddAll_m7128 (XsdParticleStateManager_t1506 * __this, XmlSchemaAll_t1514 * ___all, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAnyValidationState Mono.Xml.Schema.XsdParticleStateManager::AddAny(System.Xml.Schema.XmlSchemaAny)
extern "C" XsdAnyValidationState_t1517 * XsdParticleStateManager_AddAny_m7129 (XsdParticleStateManager_t1506 * __this, XmlSchemaAny_t1516 * ___any, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdEmptyValidationState Mono.Xml.Schema.XsdParticleStateManager::AddEmpty()
extern "C" XsdEmptyValidationState_t1519 * XsdParticleStateManager_AddEmpty_m7130 (XsdParticleStateManager_t1506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
