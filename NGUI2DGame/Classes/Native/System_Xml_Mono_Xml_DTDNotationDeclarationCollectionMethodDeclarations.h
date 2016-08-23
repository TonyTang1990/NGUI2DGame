#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDNotationDeclarationCollection
struct DTDNotationDeclarationCollection_t1542;
// Mono.Xml.DTDNotationDeclaration
struct DTDNotationDeclaration_t1558;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1528;

// System.Void Mono.Xml.DTDNotationDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDNotationDeclarationCollection__ctor_m7425 (DTDNotationDeclarationCollection_t1542 * __this, DTDObjectModel_t1528 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDNotationDeclaration Mono.Xml.DTDNotationDeclarationCollection::get_Item(System.String)
extern "C" DTDNotationDeclaration_t1558 * DTDNotationDeclarationCollection_get_Item_m7426 (DTDNotationDeclarationCollection_t1542 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDNotationDeclarationCollection::Add(System.String,Mono.Xml.DTDNotationDeclaration)
extern "C" void DTDNotationDeclarationCollection_Add_m7427 (DTDNotationDeclarationCollection_t1542 * __this, String_t* ___name, DTDNotationDeclaration_t1558 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
