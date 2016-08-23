#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDSequenceAutomata
struct DTDSequenceAutomata_t1533;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1528;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t1530;
// System.String
struct String_t;

// System.Void Mono.Xml.DTDSequenceAutomata::.ctor(Mono.Xml.DTDObjectModel,Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C" void DTDSequenceAutomata__ctor_m7345 (DTDSequenceAutomata_t1533 * __this, DTDObjectModel_t1528 * ___root, DTDAutomata_t1530 * ___left, DTDAutomata_t1530 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDSequenceAutomata::TryStartElement(System.String)
extern "C" DTDAutomata_t1530 * DTDSequenceAutomata_TryStartElement_m7346 (DTDSequenceAutomata_t1533 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDSequenceAutomata::TryEndElement()
extern "C" DTDAutomata_t1530 * DTDSequenceAutomata_TryEndElement_m7347 (DTDSequenceAutomata_t1533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDSequenceAutomata::get_Emptiable()
extern "C" bool DTDSequenceAutomata_get_Emptiable_m7348 (DTDSequenceAutomata_t1533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
