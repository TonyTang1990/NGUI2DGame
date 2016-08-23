#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDOneOrMoreAutomata
struct DTDOneOrMoreAutomata_t1534;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1528;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t1530;
// System.String
struct String_t;

// System.Void Mono.Xml.DTDOneOrMoreAutomata::.ctor(Mono.Xml.DTDObjectModel,Mono.Xml.DTDAutomata)
extern "C" void DTDOneOrMoreAutomata__ctor_m7349 (DTDOneOrMoreAutomata_t1534 * __this, DTDObjectModel_t1528 * ___root, DTDAutomata_t1530 * ___children, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDOneOrMoreAutomata::TryStartElement(System.String)
extern "C" DTDAutomata_t1530 * DTDOneOrMoreAutomata_TryStartElement_m7350 (DTDOneOrMoreAutomata_t1534 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDOneOrMoreAutomata::TryEndElement()
extern "C" DTDAutomata_t1530 * DTDOneOrMoreAutomata_TryEndElement_m7351 (DTDOneOrMoreAutomata_t1534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
