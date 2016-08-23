#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1528;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1543;
// System.Xml.XmlResolver
struct XmlResolver_t1520;
// System.Collections.Hashtable
struct Hashtable_t915;
// Mono.Xml.DTDAutomataFactory
struct DTDAutomataFactory_t1529;
// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t1538;
// Mono.Xml.DTDAttListDeclarationCollection
struct DTDAttListDeclarationCollection_t1539;
// Mono.Xml.DTDEntityDeclarationCollection
struct DTDEntityDeclarationCollection_t1541;
// Mono.Xml.DTDParameterEntityDeclarationCollection
struct DTDParameterEntityDeclarationCollection_t1540;
// Mono.Xml.DTDNotationDeclarationCollection
struct DTDNotationDeclarationCollection_t1542;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t1530;
// Mono.Xml.DTDEmptyAutomata
struct DTDEmptyAutomata_t1535;
// Mono.Xml.DTDAnyAutomata
struct DTDAnyAutomata_t1536;
// Mono.Xml.DTDInvalidAutomata
struct DTDInvalidAutomata_t1537;
// System.Xml.Schema.XmlSchemaException[]
struct XmlSchemaExceptionU5BU5D_t1783;
// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t1703;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t1622;
// System.Xml.XmlParserContext
struct XmlParserContext_t1571;

// System.Void Mono.Xml.DTDObjectModel::.ctor(System.Xml.XmlNameTable)
extern "C" void DTDObjectModel__ctor_m7363 (DTDObjectModel_t1528 * __this, XmlNameTable_t1543 * ___nameTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_BaseURI()
extern "C" String_t* DTDObjectModel_get_BaseURI_m7364 (DTDObjectModel_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_BaseURI(System.String)
extern "C" void DTDObjectModel_set_BaseURI_m7365 (DTDObjectModel_t1528 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDObjectModel::get_IsStandalone()
extern "C" bool DTDObjectModel_get_IsStandalone_m7366 (DTDObjectModel_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_IsStandalone(System.Boolean)
extern "C" void DTDObjectModel_set_IsStandalone_m7367 (DTDObjectModel_t1528 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_Name()
extern "C" String_t* DTDObjectModel_get_Name_m7368 (DTDObjectModel_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_Name(System.String)
extern "C" void DTDObjectModel_set_Name_m7369 (DTDObjectModel_t1528 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.DTDObjectModel::get_NameTable()
extern "C" XmlNameTable_t1543 * DTDObjectModel_get_NameTable_m7370 (DTDObjectModel_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_PublicId()
extern "C" String_t* DTDObjectModel_get_PublicId_m7371 (DTDObjectModel_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_PublicId(System.String)
extern "C" void DTDObjectModel_set_PublicId_m7372 (DTDObjectModel_t1528 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_SystemId()
extern "C" String_t* DTDObjectModel_get_SystemId_m7373 (DTDObjectModel_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_SystemId(System.String)
extern "C" void DTDObjectModel_set_SystemId_m7374 (DTDObjectModel_t1528 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_InternalSubset()
extern "C" String_t* DTDObjectModel_get_InternalSubset_m7375 (DTDObjectModel_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_InternalSubset(System.String)
extern "C" void DTDObjectModel_set_InternalSubset_m7376 (DTDObjectModel_t1528 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDObjectModel::get_InternalSubsetHasPEReference()
extern "C" bool DTDObjectModel_get_InternalSubsetHasPEReference_m7377 (DTDObjectModel_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_InternalSubsetHasPEReference(System.Boolean)
extern "C" void DTDObjectModel_set_InternalSubsetHasPEReference_m7378 (DTDObjectModel_t1528 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDObjectModel::get_LineNumber()
extern "C" int32_t DTDObjectModel_get_LineNumber_m7379 (DTDObjectModel_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_LineNumber(System.Int32)
extern "C" void DTDObjectModel_set_LineNumber_m7380 (DTDObjectModel_t1528 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDObjectModel::get_LinePosition()
extern "C" int32_t DTDObjectModel_get_LinePosition_m7381 (DTDObjectModel_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_LinePosition(System.Int32)
extern "C" void DTDObjectModel_set_LinePosition_m7382 (DTDObjectModel_t1528 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::ResolveEntity(System.String)
extern "C" String_t* DTDObjectModel_ResolveEntity_m7383 (DTDObjectModel_t1528 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver Mono.Xml.DTDObjectModel::get_Resolver()
extern "C" XmlResolver_t1520 * DTDObjectModel_get_Resolver_m7384 (DTDObjectModel_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_XmlResolver(System.Xml.XmlResolver)
extern "C" void DTDObjectModel_set_XmlResolver_m7385 (DTDObjectModel_t1528 * __this, XmlResolver_t1520 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable Mono.Xml.DTDObjectModel::get_ExternalResources()
extern "C" Hashtable_t915 * DTDObjectModel_get_ExternalResources_m7386 (DTDObjectModel_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomataFactory Mono.Xml.DTDObjectModel::get_Factory()
extern "C" DTDAutomataFactory_t1529 * DTDObjectModel_get_Factory_m7387 (DTDObjectModel_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclarationCollection Mono.Xml.DTDObjectModel::get_ElementDecls()
extern "C" DTDElementDeclarationCollection_t1538 * DTDObjectModel_get_ElementDecls_m7388 (DTDObjectModel_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttListDeclarationCollection Mono.Xml.DTDObjectModel::get_AttListDecls()
extern "C" DTDAttListDeclarationCollection_t1539 * DTDObjectModel_get_AttListDecls_m7389 (DTDObjectModel_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEntityDeclarationCollection Mono.Xml.DTDObjectModel::get_EntityDecls()
extern "C" DTDEntityDeclarationCollection_t1541 * DTDObjectModel_get_EntityDecls_m7390 (DTDObjectModel_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDParameterEntityDeclarationCollection Mono.Xml.DTDObjectModel::get_PEDecls()
extern "C" DTDParameterEntityDeclarationCollection_t1540 * DTDObjectModel_get_PEDecls_m7391 (DTDObjectModel_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDNotationDeclarationCollection Mono.Xml.DTDObjectModel::get_NotationDecls()
extern "C" DTDNotationDeclarationCollection_t1542 * DTDObjectModel_get_NotationDecls_m7392 (DTDObjectModel_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDObjectModel::get_RootAutomata()
extern "C" DTDAutomata_t1530 * DTDObjectModel_get_RootAutomata_m7393 (DTDObjectModel_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEmptyAutomata Mono.Xml.DTDObjectModel::get_Empty()
extern "C" DTDEmptyAutomata_t1535 * DTDObjectModel_get_Empty_m7394 (DTDObjectModel_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAnyAutomata Mono.Xml.DTDObjectModel::get_Any()
extern "C" DTDAnyAutomata_t1536 * DTDObjectModel_get_Any_m7395 (DTDObjectModel_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDInvalidAutomata Mono.Xml.DTDObjectModel::get_Invalid()
extern "C" DTDInvalidAutomata_t1537 * DTDObjectModel_get_Invalid_m7396 (DTDObjectModel_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaException[] Mono.Xml.DTDObjectModel::get_Errors()
extern "C" XmlSchemaExceptionU5BU5D_t1783* DTDObjectModel_get_Errors_m7397 (DTDObjectModel_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::AddError(System.Xml.Schema.XmlSchemaException)
extern "C" void DTDObjectModel_AddError_m7398 (DTDObjectModel_t1528 * __this, XmlSchemaException_t1703 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::GenerateEntityAttributeText(System.String)
extern "C" String_t* DTDObjectModel_GenerateEntityAttributeText_m7399 (DTDObjectModel_t1528 * __this, String_t* ___entityName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml2.XmlTextReader Mono.Xml.DTDObjectModel::GenerateEntityContentReader(System.String,System.Xml.XmlParserContext)
extern "C" XmlTextReader_t1622 * DTDObjectModel_GenerateEntityContentReader_m7400 (DTDObjectModel_t1528 * __this, String_t* ___entityName, XmlParserContext_t1571 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
