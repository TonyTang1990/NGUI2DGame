#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDInvalidAutomata
struct DTDInvalidAutomata_t1537;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1528;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t1530;
// System.String
struct String_t;

// System.Void Mono.Xml.DTDInvalidAutomata::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDInvalidAutomata__ctor_m7360 (DTDInvalidAutomata_t1537 * __this, DTDObjectModel_t1528 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDInvalidAutomata::TryEndElement()
extern "C" DTDAutomata_t1530 * DTDInvalidAutomata_TryEndElement_m7361 (DTDInvalidAutomata_t1537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDInvalidAutomata::TryStartElement(System.String)
extern "C" DTDAutomata_t1530 * DTDInvalidAutomata_TryStartElement_m7362 (DTDInvalidAutomata_t1537 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
