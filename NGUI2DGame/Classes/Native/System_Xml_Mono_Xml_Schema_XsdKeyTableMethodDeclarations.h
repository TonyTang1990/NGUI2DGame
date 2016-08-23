#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdKeyTable
struct XsdKeyTable_t1503;
// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t1110;
// Mono.Xml.Schema.XsdIdentitySelector
struct XsdIdentitySelector_t1494;
// Mono.Xml.Schema.XsdIdentityPath
struct XsdIdentityPath_t1497;
// System.Collections.ArrayList
struct ArrayList_t913;

// System.Void Mono.Xml.Schema.XsdKeyTable::.ctor(System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C" void XsdKeyTable__ctor_m7113 (XsdKeyTable_t1503 * __this, XmlSchemaIdentityConstraint_t1110 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaIdentityConstraint Mono.Xml.Schema.XsdKeyTable::get_SourceSchemaIdentity()
extern "C" XmlSchemaIdentityConstraint_t1110 * XsdKeyTable_get_SourceSchemaIdentity_m7114 (XsdKeyTable_t1503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentitySelector Mono.Xml.Schema.XsdKeyTable::get_Selector()
extern "C" XsdIdentitySelector_t1494 * XsdKeyTable_get_Selector_m7115 (XsdKeyTable_t1503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdKeyTable::Reset(System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C" void XsdKeyTable_Reset_m7116 (XsdKeyTable_t1503 * __this, XmlSchemaIdentityConstraint_t1110 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityPath Mono.Xml.Schema.XsdKeyTable::SelectorMatches(System.Collections.ArrayList,System.Int32)
extern "C" XsdIdentityPath_t1497 * XsdKeyTable_SelectorMatches_m7117 (XsdKeyTable_t1503 * __this, ArrayList_t913 * ___qnameStack, int32_t ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
