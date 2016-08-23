#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdGYear
struct XsdGYear_t1696;
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

// System.Void Mono.Xml.Schema.XsdGYear::.ctor()
extern "C" void XsdGYear__ctor_m8892 (XsdGYear_t1696 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaFacet/Facet Mono.Xml.Schema.XsdGYear::get_AllowedFacets()
extern "C" int32_t XsdGYear_get_AllowedFacets_m8893 (XsdGYear_t1696 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdGYear::get_TypeCode()
extern "C" int32_t XsdGYear_get_TypeCode_m8894 (XsdGYear_t1696 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Mono.Xml.Schema.XsdGYear::get_ValueType()
extern "C" Type_t * XsdGYear_get_ValueType_m8895 (XsdGYear_t1696 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdGYear::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" Object_t * XsdGYear_ParseValue_m8896 (XsdGYear_t1696 * __this, String_t* ___s, XmlNameTable_t1543 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdGYear::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" ValueType_t402 * XsdGYear_ParseValueType_m8897 (XsdGYear_t1696 * __this, String_t* ___s, XmlNameTable_t1543 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdGYear::Compare(System.Object,System.Object)
extern "C" int32_t XsdGYear_Compare_m8898 (XsdGYear_t1696 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
