#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaAppInfo
struct XmlSchemaAppInfo_t1157;
// System.Xml.XmlNode[]
struct XmlNodeU5BU5D_t1158;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t1762;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t1144;

// System.Void System.Xml.Schema.XmlSchemaAppInfo::.ctor()
extern "C" void XmlSchemaAppInfo__ctor_m9049 (XmlSchemaAppInfo_t1157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode[] System.Xml.Schema.XmlSchemaAppInfo::get_Markup()
extern "C" XmlNodeU5BU5D_t1158* XmlSchemaAppInfo_get_Markup_m5224 (XmlSchemaAppInfo_t1157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAppInfo::set_Markup(System.Xml.XmlNode[])
extern "C" void XmlSchemaAppInfo_set_Markup_m9050 (XmlSchemaAppInfo_t1157 * __this, XmlNodeU5BU5D_t1158* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAppInfo System.Xml.Schema.XmlSchemaAppInfo::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler,System.Boolean&)
extern "C" XmlSchemaAppInfo_t1157 * XmlSchemaAppInfo_Read_m9051 (Object_t * __this /* static, unused */, XmlSchemaReader_t1762 * ___reader, ValidationEventHandler_t1144 * ___h, bool* ___skip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
