#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDAutomata
struct DTDAutomata_t1530;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1528;
// System.String
struct String_t;

// System.Void Mono.Xml.DTDAutomata::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDAutomata__ctor_m7332 (DTDAutomata_t1530 * __this, DTDObjectModel_t1528 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml.DTDAutomata::get_Root()
extern "C" DTDObjectModel_t1528 * DTDAutomata_get_Root_m7333 (DTDAutomata_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAutomata::MakeChoice(Mono.Xml.DTDAutomata)
extern "C" DTDAutomata_t1530 * DTDAutomata_MakeChoice_m7334 (DTDAutomata_t1530 * __this, DTDAutomata_t1530 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAutomata::MakeSequence(Mono.Xml.DTDAutomata)
extern "C" DTDAutomata_t1530 * DTDAutomata_MakeSequence_m7335 (DTDAutomata_t1530 * __this, DTDAutomata_t1530 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAutomata::TryStartElement(System.String)
// Mono.Xml.DTDAutomata Mono.Xml.DTDAutomata::TryEndElement()
extern "C" DTDAutomata_t1530 * DTDAutomata_TryEndElement_m7336 (DTDAutomata_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDAutomata::get_Emptiable()
extern "C" bool DTDAutomata_get_Emptiable_m7337 (DTDAutomata_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
