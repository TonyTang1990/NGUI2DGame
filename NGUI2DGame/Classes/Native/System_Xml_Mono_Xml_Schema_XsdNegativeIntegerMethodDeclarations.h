#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdNegativeInteger
struct XsdNegativeInteger_t1679;
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
// System.Xml.Schema.XmlTypeCode
#include "System_Xml_System_Xml_Schema_XmlTypeCode.h"

// System.Void Mono.Xml.Schema.XsdNegativeInteger::.ctor()
extern "C" void XsdNegativeInteger__ctor_m8773 (XsdNegativeInteger_t1679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdNegativeInteger::get_TypeCode()
extern "C" int32_t XsdNegativeInteger_get_TypeCode_m8774 (XsdNegativeInteger_t1679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Mono.Xml.Schema.XsdNegativeInteger::get_ValueType()
extern "C" Type_t * XsdNegativeInteger_get_ValueType_m8775 (XsdNegativeInteger_t1679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdNegativeInteger::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" Object_t * XsdNegativeInteger_ParseValue_m8776 (XsdNegativeInteger_t1679 * __this, String_t* ___s, XmlNameTable_t1543 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdNegativeInteger::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" ValueType_t402 * XsdNegativeInteger_ParseValueType_m8777 (XsdNegativeInteger_t1679 * __this, String_t* ___s, XmlNameTable_t1543 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
