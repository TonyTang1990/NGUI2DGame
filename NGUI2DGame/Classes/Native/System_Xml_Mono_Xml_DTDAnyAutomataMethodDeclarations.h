#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDAnyAutomata
struct DTDAnyAutomata_t1536;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1528;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t1530;
// System.String
struct String_t;

// System.Void Mono.Xml.DTDAnyAutomata::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDAnyAutomata__ctor_m7356 (DTDAnyAutomata_t1536 * __this, DTDObjectModel_t1528 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAnyAutomata::TryEndElement()
extern "C" DTDAutomata_t1530 * DTDAnyAutomata_TryEndElement_m7357 (DTDAnyAutomata_t1536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAnyAutomata::TryStartElement(System.String)
extern "C" DTDAutomata_t1530 * DTDAnyAutomata_TryStartElement_m7358 (DTDAnyAutomata_t1536 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDAnyAutomata::get_Emptiable()
extern "C" bool DTDAnyAutomata_get_Emptiable_m7359 (DTDAnyAutomata_t1536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
