#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XdtDayTimeDuration
struct XdtDayTimeDuration_t1689;
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

// System.Void Mono.Xml.Schema.XdtDayTimeDuration::.ctor()
extern "C" void XdtDayTimeDuration__ctor_m8843 (XdtDayTimeDuration_t1689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XdtDayTimeDuration::get_TypeCode()
extern "C" int32_t XdtDayTimeDuration_get_TypeCode_m8844 (XdtDayTimeDuration_t1689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Mono.Xml.Schema.XdtDayTimeDuration::get_ValueType()
extern "C" Type_t * XdtDayTimeDuration_get_ValueType_m8845 (XdtDayTimeDuration_t1689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XdtDayTimeDuration::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" Object_t * XdtDayTimeDuration_ParseValue_m8846 (XdtDayTimeDuration_t1689 * __this, String_t* ___s, XmlNameTable_t1543 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XdtDayTimeDuration::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" ValueType_t402 * XdtDayTimeDuration_ParseValueType_m8847 (XdtDayTimeDuration_t1689 * __this, String_t* ___s, XmlNameTable_t1543 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
