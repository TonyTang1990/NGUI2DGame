#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDAttributeDefinition
struct DTDAttributeDefinition_t1554;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t1051;
// System.Collections.ArrayList
struct ArrayList_t913;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1528;
// Mono.Xml.DTDAttributeOccurenceType
#include "System_Xml_Mono_Xml_DTDAttributeOccurenceType.h"

// System.Void Mono.Xml.DTDAttributeDefinition::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDAttributeDefinition__ctor_m7468 (DTDAttributeDefinition_t1554 * __this, DTDObjectModel_t1528 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDAttributeDefinition::get_Name()
extern "C" String_t* DTDAttributeDefinition_get_Name_m7469 (DTDAttributeDefinition_t1554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttributeDefinition::set_Name(System.String)
extern "C" void DTDAttributeDefinition_set_Name_m7470 (DTDAttributeDefinition_t1554 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDatatype Mono.Xml.DTDAttributeDefinition::get_Datatype()
extern "C" XmlSchemaDatatype_t1051 * DTDAttributeDefinition_get_Datatype_m7471 (DTDAttributeDefinition_t1554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttributeDefinition::set_Datatype(System.Xml.Schema.XmlSchemaDatatype)
extern "C" void DTDAttributeDefinition_set_Datatype_m7472 (DTDAttributeDefinition_t1554 * __this, XmlSchemaDatatype_t1051 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeOccurenceType Mono.Xml.DTDAttributeDefinition::get_OccurenceType()
extern "C" int32_t DTDAttributeDefinition_get_OccurenceType_m7473 (DTDAttributeDefinition_t1554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttributeDefinition::set_OccurenceType(Mono.Xml.DTDAttributeOccurenceType)
extern "C" void DTDAttributeDefinition_set_OccurenceType_m7474 (DTDAttributeDefinition_t1554 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Xml.DTDAttributeDefinition::get_EnumeratedAttributeDeclaration()
extern "C" ArrayList_t913 * DTDAttributeDefinition_get_EnumeratedAttributeDeclaration_m7475 (DTDAttributeDefinition_t1554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Xml.DTDAttributeDefinition::get_EnumeratedNotations()
extern "C" ArrayList_t913 * DTDAttributeDefinition_get_EnumeratedNotations_m7476 (DTDAttributeDefinition_t1554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDAttributeDefinition::get_DefaultValue()
extern "C" String_t* DTDAttributeDefinition_get_DefaultValue_m7477 (DTDAttributeDefinition_t1554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDAttributeDefinition::get_UnresolvedDefaultValue()
extern "C" String_t* DTDAttributeDefinition_get_UnresolvedDefaultValue_m7478 (DTDAttributeDefinition_t1554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttributeDefinition::set_UnresolvedDefaultValue(System.String)
extern "C" void DTDAttributeDefinition_set_UnresolvedDefaultValue_m7479 (DTDAttributeDefinition_t1554 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDAttributeDefinition::ComputeDefaultValue()
extern "C" String_t* DTDAttributeDefinition_ComputeDefaultValue_m7480 (DTDAttributeDefinition_t1554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
