#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDEmptyAutomata
struct DTDEmptyAutomata_t1535;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1528;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t1530;
// System.String
struct String_t;

// System.Void Mono.Xml.DTDEmptyAutomata::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDEmptyAutomata__ctor_m7352 (DTDEmptyAutomata_t1535 * __this, DTDObjectModel_t1528 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDEmptyAutomata::TryEndElement()
extern "C" DTDAutomata_t1530 * DTDEmptyAutomata_TryEndElement_m7353 (DTDEmptyAutomata_t1535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDEmptyAutomata::TryStartElement(System.String)
extern "C" DTDAutomata_t1530 * DTDEmptyAutomata_TryStartElement_m7354 (DTDEmptyAutomata_t1535 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDEmptyAutomata::get_Emptiable()
extern "C" bool DTDEmptyAutomata_get_Emptiable_m7355 (DTDEmptyAutomata_t1535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
