#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdGMonthDay
struct XsdGMonthDay_t1695;
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
// System.Xml.Schema.XmlSchemaFacet/Facet
#include "System_Xml_System_Xml_Schema_XmlSchemaFacet_Facet.h"
// System.Xml.Schema.XmlTypeCode
#include "System_Xml_System_Xml_Schema_XmlTypeCode.h"
// Mono.Xml.Schema.XsdOrdering
#include "System_Xml_Mono_Xml_Schema_XsdOrdering.h"

// System.Void Mono.Xml.Schema.XsdGMonthDay::.ctor()
extern "C" void XsdGMonthDay__ctor_m8885 (XsdGMonthDay_t1695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaFacet/Facet Mono.Xml.Schema.XsdGMonthDay::get_AllowedFacets()
extern "C" int32_t XsdGMonthDay_get_AllowedFacets_m8886 (XsdGMonthDay_t1695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdGMonthDay::get_TypeCode()
extern "C" int32_t XsdGMonthDay_get_TypeCode_m8887 (XsdGMonthDay_t1695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Mono.Xml.Schema.XsdGMonthDay::get_ValueType()
extern "C" Type_t * XsdGMonthDay_get_ValueType_m8888 (XsdGMonthDay_t1695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdGMonthDay::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" Object_t * XsdGMonthDay_ParseValue_m8889 (XsdGMonthDay_t1695 * __this, String_t* ___s, XmlNameTable_t1543 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdGMonthDay::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" ValueType_t402 * XsdGMonthDay_ParseValueType_m8890 (XsdGMonthDay_t1695 * __this, String_t* ___s, XmlNameTable_t1543 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdGMonthDay::Compare(System.Object,System.Object)
extern "C" int32_t XsdGMonthDay_Compare_m8891 (XsdGMonthDay_t1695 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
