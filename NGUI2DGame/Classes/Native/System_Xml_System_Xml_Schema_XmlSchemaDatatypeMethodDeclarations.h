#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t1051;
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
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t985;
// Mono.Xml.Schema.XsdWhitespaceFacet
#include "System_Xml_Mono_Xml_Schema_XsdWhitespaceFacet.h"
// System.Xml.Schema.XmlTypeCode
#include "System_Xml_System_Xml_Schema_XmlTypeCode.h"
// System.Xml.XmlTokenizedType
#include "System_Xml_System_Xml_XmlTokenizedType.h"

// System.Void System.Xml.Schema.XmlSchemaDatatype::.ctor()
extern "C" void XmlSchemaDatatype__ctor_m9180 (XmlSchemaDatatype_t1051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaDatatype::.cctor()
extern "C" void XmlSchemaDatatype__cctor_m9181 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdWhitespaceFacet System.Xml.Schema.XmlSchemaDatatype::get_Whitespace()
extern "C" int32_t XmlSchemaDatatype_get_Whitespace_m9182 (XmlSchemaDatatype_t1051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode System.Xml.Schema.XmlSchemaDatatype::get_TypeCode()
extern "C" int32_t XmlSchemaDatatype_get_TypeCode_m9183 (XmlSchemaDatatype_t1051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType System.Xml.Schema.XmlSchemaDatatype::get_TokenizedType()
// System.Type System.Xml.Schema.XmlSchemaDatatype::get_ValueType()
// System.Object System.Xml.Schema.XmlSchemaDatatype::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
// System.ValueType System.Xml.Schema.XmlSchemaDatatype::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" ValueType_t402 * XmlSchemaDatatype_ParseValueType_m9184 (XmlSchemaDatatype_t1051 * __this, String_t* ___s, XmlNameTable_t1543 * ___nameTable, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaDatatype::Normalize(System.String)
extern "C" String_t* XmlSchemaDatatype_Normalize_m9185 (XmlSchemaDatatype_t1051 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaDatatype::Normalize(System.String,Mono.Xml.Schema.XsdWhitespaceFacet)
extern "C" String_t* XmlSchemaDatatype_Normalize_m9186 (XmlSchemaDatatype_t1051 * __this, String_t* ___s, int32_t ___whitespaceFacet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaDatatype::FromName(System.Xml.XmlQualifiedName)
extern "C" XmlSchemaDatatype_t1051 * XmlSchemaDatatype_FromName_m9187 (Object_t * __this /* static, unused */, XmlQualifiedName_t985 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaDatatype::FromName(System.String,System.String)
extern "C" XmlSchemaDatatype_t1051 * XmlSchemaDatatype_FromName_m9188 (Object_t * __this /* static, unused */, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
