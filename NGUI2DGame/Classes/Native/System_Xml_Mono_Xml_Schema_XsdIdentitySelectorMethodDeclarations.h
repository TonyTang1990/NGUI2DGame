#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdIdentitySelector
struct XsdIdentitySelector_t1494;
// Mono.Xml.Schema.XsdIdentityPath[]
struct XsdIdentityPathU5BU5D_t1492;
// Mono.Xml.Schema.XsdIdentityField[]
struct XsdIdentityFieldU5BU5D_t1493;
// System.Xml.Schema.XmlSchemaXPath
struct XmlSchemaXPath_t1156;
// Mono.Xml.Schema.XsdIdentityField
struct XsdIdentityField_t1495;

// System.Void Mono.Xml.Schema.XsdIdentitySelector::.ctor(System.Xml.Schema.XmlSchemaXPath)
extern "C" void XsdIdentitySelector__ctor_m7089 (XsdIdentitySelector_t1494 * __this, XmlSchemaXPath_t1156 * ___selector, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityPath[] Mono.Xml.Schema.XsdIdentitySelector::get_Paths()
extern "C" XsdIdentityPathU5BU5D_t1492* XsdIdentitySelector_get_Paths_m7090 (XsdIdentitySelector_t1494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdIdentitySelector::AddField(Mono.Xml.Schema.XsdIdentityField)
extern "C" void XsdIdentitySelector_AddField_m7091 (XsdIdentitySelector_t1494 * __this, XsdIdentityField_t1495 * ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityField[] Mono.Xml.Schema.XsdIdentitySelector::get_Fields()
extern "C" XsdIdentityFieldU5BU5D_t1493* XsdIdentitySelector_get_Fields_m7092 (XsdIdentitySelector_t1494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
