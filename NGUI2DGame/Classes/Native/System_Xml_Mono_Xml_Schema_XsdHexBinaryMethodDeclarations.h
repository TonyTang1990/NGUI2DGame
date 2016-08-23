#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdHexBinary
struct XsdHexBinary_t1683;
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
// System.Xml.XmlTokenizedType
#include "System_Xml_System_Xml_XmlTokenizedType.h"

// System.Void Mono.Xml.Schema.XsdHexBinary::.ctor()
extern "C" void XsdHexBinary__ctor_m8801 (XsdHexBinary_t1683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaFacet/Facet Mono.Xml.Schema.XsdHexBinary::get_AllowedFacets()
extern "C" int32_t XsdHexBinary_get_AllowedFacets_m8802 (XsdHexBinary_t1683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdHexBinary::get_TypeCode()
extern "C" int32_t XsdHexBinary_get_TypeCode_m8803 (XsdHexBinary_t1683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdHexBinary::get_TokenizedType()
extern "C" int32_t XsdHexBinary_get_TokenizedType_m8804 (XsdHexBinary_t1683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Mono.Xml.Schema.XsdHexBinary::get_ValueType()
extern "C" Type_t * XsdHexBinary_get_ValueType_m8805 (XsdHexBinary_t1683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdHexBinary::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" Object_t * XsdHexBinary_ParseValue_m8806 (XsdHexBinary_t1683 * __this, String_t* ___s, XmlNameTable_t1543 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdHexBinary::Length(System.String)
extern "C" int32_t XsdHexBinary_Length_m8807 (XsdHexBinary_t1683 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdHexBinary::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" ValueType_t402 * XsdHexBinary_ParseValueType_m8808 (XsdHexBinary_t1683 * __this, String_t* ___s, XmlNameTable_t1543 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
