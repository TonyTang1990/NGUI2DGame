#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdKeyEntry
struct XsdKeyEntry_t1499;
// Mono.Xml.Schema.XsdKeyTable
struct XsdKeyTable_t1503;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t1469;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Object
struct Object_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1543;
// System.String
struct String_t;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t1478;

// System.Void Mono.Xml.Schema.XsdKeyEntry::.ctor(Mono.Xml.Schema.XsdKeyTable,System.Int32,System.Xml.IXmlLineInfo)
extern "C" void XsdKeyEntry__ctor_m7105 (XsdKeyEntry_t1499 * __this, XsdKeyTable_t1503 * ___keyseq, int32_t ___depth, Object_t * ___li, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdKeyEntry::get_KeyFound()
extern "C" bool XsdKeyEntry_get_KeyFound_m7106 (XsdKeyEntry_t1499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdKeyEntry::Init(Mono.Xml.Schema.XsdKeyTable,System.Int32,System.Xml.IXmlLineInfo)
extern "C" void XsdKeyEntry_Init_m7107 (XsdKeyEntry_t1499 * __this, XsdKeyTable_t1503 * ___keyseq, int32_t ___depth, Object_t * ___li, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdKeyEntry::CompareIdentity(Mono.Xml.Schema.XsdKeyEntry)
extern "C" bool XsdKeyEntry_CompareIdentity_m7108 (XsdKeyEntry_t1499 * __this, XsdKeyEntry_t1499 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdKeyEntry::ProcessMatch(System.Boolean,System.Collections.ArrayList,System.Object,System.Xml.XmlNameTable,System.String,System.Object,System.Xml.IXmlNamespaceResolver,System.Xml.IXmlLineInfo,System.Int32,System.String,System.String,System.Object,System.Boolean,System.Collections.ArrayList)
extern "C" void XsdKeyEntry_ProcessMatch_m7109 (XsdKeyEntry_t1499 * __this, bool ___isAttribute, ArrayList_t913 * ___qnameStack, Object_t * ___sender, XmlNameTable_t1543 * ___nameTable, String_t* ___sourceUri, Object_t * ___schemaType, Object_t * ___nsResolver, Object_t * ___li, int32_t ___depth, String_t* ___attrName, String_t* ___attrNS, Object_t * ___attrValue, bool ___isXsiNil, ArrayList_t913 * ___currentKeyFieldConsumers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
