#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDChoiceAutomata
struct DTDChoiceAutomata_t1532;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1528;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t1530;
// System.String
struct String_t;

// System.Void Mono.Xml.DTDChoiceAutomata::.ctor(Mono.Xml.DTDObjectModel,Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C" void DTDChoiceAutomata__ctor_m7341 (DTDChoiceAutomata_t1532 * __this, DTDObjectModel_t1528 * ___root, DTDAutomata_t1530 * ___left, DTDAutomata_t1530 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDChoiceAutomata::TryStartElement(System.String)
extern "C" DTDAutomata_t1530 * DTDChoiceAutomata_TryStartElement_m7342 (DTDChoiceAutomata_t1532 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDChoiceAutomata::TryEndElement()
extern "C" DTDAutomata_t1530 * DTDChoiceAutomata_TryEndElement_m7343 (DTDChoiceAutomata_t1532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDChoiceAutomata::get_Emptiable()
extern "C" bool DTDChoiceAutomata_get_Emptiable_m7344 (DTDChoiceAutomata_t1532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
