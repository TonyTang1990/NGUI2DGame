#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Data.SqlTypes.SqlXml
struct SqlXml_t1067318651;
// System.Xml.XmlReader
struct XmlReader_t3675626668;
// System.Xml.XmlWriter
struct XmlWriter_t1048088568;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t1944712516;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t313318308;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"
#include "System_Xml_System_Xml_XmlWriter1048088568.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet313318308.h"

// System.Void System.Data.SqlTypes.SqlXml::.ctor()
extern "C"  void SqlXml__ctor_m3744734361 (SqlXml_t1067318651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlXml::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlXml_System_Xml_Serialization_IXmlSerializable_ReadXml_m942744769 (SqlXml_t1067318651 * __this, XmlReader_t3675626668 * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlXml::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlXml_System_Xml_Serialization_IXmlSerializable_WriteXml_m3208254046 (SqlXml_t1067318651 * __this, XmlWriter_t1048088568 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlXml System.Data.SqlTypes.SqlXml::get_Null()
extern "C"  SqlXml_t1067318651 * SqlXml_get_Null_m622253677 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlXml::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t1944712516 * SqlXml_GetXsdType_m3691112624 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t313318308 * ___schemaSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
