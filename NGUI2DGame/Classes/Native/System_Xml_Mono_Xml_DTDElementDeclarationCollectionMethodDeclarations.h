#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t1538;
// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t1553;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1528;

// System.Void Mono.Xml.DTDElementDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDElementDeclarationCollection__ctor_m7415 (DTDElementDeclarationCollection_t1538 * __this, DTDObjectModel_t1528 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclaration Mono.Xml.DTDElementDeclarationCollection::get_Item(System.String)
extern "C" DTDElementDeclaration_t1553 * DTDElementDeclarationCollection_get_Item_m7416 (DTDElementDeclarationCollection_t1538 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclaration Mono.Xml.DTDElementDeclarationCollection::Get(System.String)
extern "C" DTDElementDeclaration_t1553 * DTDElementDeclarationCollection_Get_m7417 (DTDElementDeclarationCollection_t1538 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclarationCollection::Add(System.String,Mono.Xml.DTDElementDeclaration)
extern "C" void DTDElementDeclarationCollection_Add_m7418 (DTDElementDeclarationCollection_t1538 * __this, String_t* ___name, DTDElementDeclaration_t1553 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
