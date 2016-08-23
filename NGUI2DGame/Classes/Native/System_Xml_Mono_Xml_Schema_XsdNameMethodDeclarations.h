#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdName
struct XsdName_t1658;
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
// System.Xml.XmlTokenizedType
#include "System_Xml_System_Xml_XmlTokenizedType.h"
// System.Xml.Schema.XmlTypeCode
#include "System_Xml_System_Xml_Schema_XmlTypeCode.h"

// System.Void Mono.Xml.Schema.XsdName::.ctor()
extern "C" void XsdName__ctor_m8651 (XsdName_t1658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdName::get_TokenizedType()
extern "C" int32_t XsdName_get_TokenizedType_m8652 (XsdName_t1658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdName::get_TypeCode()
extern "C" int32_t XsdName_get_TypeCode_m8653 (XsdName_t1658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Mono.Xml.Schema.XsdName::get_ValueType()
extern "C" Type_t * XsdName_get_ValueType_m8654 (XsdName_t1658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdName::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" Object_t * XsdName_ParseValue_m8655 (XsdName_t1658 * __this, String_t* ___s, XmlNameTable_t1543 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdName::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" ValueType_t402 * XsdName_ParseValueType_m8656 (XsdName_t1658 * __this, String_t* ___s, XmlNameTable_t1543 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
