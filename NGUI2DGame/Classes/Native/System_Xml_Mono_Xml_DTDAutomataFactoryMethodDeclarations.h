#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDAutomataFactory
struct DTDAutomataFactory_t1529;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1528;
// Mono.Xml.DTDChoiceAutomata
struct DTDChoiceAutomata_t1532;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t1530;
// Mono.Xml.DTDSequenceAutomata
struct DTDSequenceAutomata_t1533;

// System.Void Mono.Xml.DTDAutomataFactory::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDAutomataFactory__ctor_m7329 (DTDAutomataFactory_t1529 * __this, DTDObjectModel_t1528 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDChoiceAutomata Mono.Xml.DTDAutomataFactory::Choice(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C" DTDChoiceAutomata_t1532 * DTDAutomataFactory_Choice_m7330 (DTDAutomataFactory_t1529 * __this, DTDAutomata_t1530 * ___left, DTDAutomata_t1530 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDSequenceAutomata Mono.Xml.DTDAutomataFactory::Sequence(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C" DTDSequenceAutomata_t1533 * DTDAutomataFactory_Sequence_m7331 (DTDAutomataFactory_t1529 * __this, DTDAutomata_t1530 * ___left, DTDAutomata_t1530 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
