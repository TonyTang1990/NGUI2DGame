#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDElementAutomata
struct DTDElementAutomata_t1531;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1528;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t1530;

// System.Void Mono.Xml.DTDElementAutomata::.ctor(Mono.Xml.DTDObjectModel,System.String)
extern "C" void DTDElementAutomata__ctor_m7338 (DTDElementAutomata_t1531 * __this, DTDObjectModel_t1528 * ___root, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDElementAutomata::get_Name()
extern "C" String_t* DTDElementAutomata_get_Name_m7339 (DTDElementAutomata_t1531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDElementAutomata::TryStartElement(System.String)
extern "C" DTDAutomata_t1530 * DTDElementAutomata_TryStartElement_m7340 (DTDElementAutomata_t1531 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
