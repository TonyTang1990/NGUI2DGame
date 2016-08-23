#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdNMTokens
struct XsdNMTokens_t1657;
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
// System.Xml.XmlTokenizedType
#include "System_Xml_System_Xml_XmlTokenizedType.h"
// System.Xml.Schema.XmlTypeCode
#include "System_Xml_System_Xml_Schema_XmlTypeCode.h"

// System.Void Mono.Xml.Schema.XsdNMTokens::.ctor()
extern "C" void XsdNMTokens__ctor_m8644 (XsdNMTokens_t1657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdNMTokens::get_TokenizedType()
extern "C" int32_t XsdNMTokens_get_TokenizedType_m8645 (XsdNMTokens_t1657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdNMTokens::get_TypeCode()
extern "C" int32_t XsdNMTokens_get_TypeCode_m8646 (XsdNMTokens_t1657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Mono.Xml.Schema.XsdNMTokens::get_ValueType()
extern "C" Type_t * XsdNMTokens_get_ValueType_m8647 (XsdNMTokens_t1657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdNMTokens::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" Object_t * XsdNMTokens_ParseValue_m8648 (XsdNMTokens_t1657 * __this, String_t* ___value, XmlNameTable_t1543 * ___nt, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdNMTokens::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" ValueType_t402 * XsdNMTokens_ParseValueType_m8649 (XsdNMTokens_t1657 * __this, String_t* ___s, XmlNameTable_t1543 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Xml.Schema.XsdNMTokens::GetValidatedArray(System.String,System.Xml.XmlNameTable)
extern "C" StringU5BU5D_t258* XsdNMTokens_GetValidatedArray_m8650 (XsdNMTokens_t1657 * __this, String_t* ___value, XmlNameTable_t1543 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
