#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t1500;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1543;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t1478;
// System.ValueType
struct ValueType_t402;
// System.String[]
struct StringU5BU5D_t258;
// System.Xml.Schema.XmlSchemaFacet
struct XmlSchemaFacet_t1153;
// System.Xml.Schema.XmlTypeCode
#include "System_Xml_System_Xml_Schema_XmlTypeCode.h"
// System.Xml.XmlTokenizedType
#include "System_Xml_System_Xml_XmlTokenizedType.h"
// System.Xml.Schema.XmlSchemaFacet/Facet
#include "System_Xml_System_Xml_Schema_XmlSchemaFacet_Facet.h"
// Mono.Xml.Schema.XsdOrdering
#include "System_Xml_Mono_Xml_Schema_XsdOrdering.h"

// System.Void Mono.Xml.Schema.XsdAnySimpleType::.ctor()
extern "C" void XsdAnySimpleType__ctor_m8604 (XsdAnySimpleType_t1500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdAnySimpleType::.cctor()
extern "C" void XsdAnySimpleType__cctor_m8605 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAnySimpleType Mono.Xml.Schema.XsdAnySimpleType::get_Instance()
extern "C" XsdAnySimpleType_t1500 * XsdAnySimpleType_get_Instance_m8606 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdAnySimpleType::get_TypeCode()
extern "C" int32_t XsdAnySimpleType_get_TypeCode_m8607 (XsdAnySimpleType_t1500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Mono.Xml.Schema.XsdAnySimpleType::get_ValueType()
extern "C" Type_t * XsdAnySimpleType_get_ValueType_m8608 (XsdAnySimpleType_t1500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdAnySimpleType::get_TokenizedType()
extern "C" int32_t XsdAnySimpleType_get_TokenizedType_m8609 (XsdAnySimpleType_t1500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdAnySimpleType::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" Object_t * XsdAnySimpleType_ParseValue_m8610 (XsdAnySimpleType_t1500 * __this, String_t* ___s, XmlNameTable_t1543 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdAnySimpleType::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" ValueType_t402 * XsdAnySimpleType_ParseValueType_m8611 (XsdAnySimpleType_t1500 * __this, String_t* ___s, XmlNameTable_t1543 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Xml.Schema.XsdAnySimpleType::ParseListValue(System.String,System.Xml.XmlNameTable)
extern "C" StringU5BU5D_t258* XsdAnySimpleType_ParseListValue_m8612 (XsdAnySimpleType_t1500 * __this, String_t* ___s, XmlNameTable_t1543 * ___nameTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAnySimpleType::AllowsFacet(System.Xml.Schema.XmlSchemaFacet)
extern "C" bool XsdAnySimpleType_AllowsFacet_m8613 (XsdAnySimpleType_t1500 * __this, XmlSchemaFacet_t1153 * ___xsf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdAnySimpleType::Compare(System.Object,System.Object)
extern "C" int32_t XsdAnySimpleType_Compare_m8614 (XsdAnySimpleType_t1500 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdAnySimpleType::Length(System.String)
extern "C" int32_t XsdAnySimpleType_Length_m8615 (XsdAnySimpleType_t1500 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaFacet/Facet Mono.Xml.Schema.XsdAnySimpleType::get_AllowedFacets()
extern "C" int32_t XsdAnySimpleType_get_AllowedFacets_m8616 (XsdAnySimpleType_t1500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
