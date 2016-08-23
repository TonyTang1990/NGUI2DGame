#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.SqlTypes.SqlXml
struct SqlXml_t1045;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Xml.XmlWriter
struct XmlWriter_t1056;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t985;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t1102;

// System.Void System.Data.SqlTypes.SqlXml::.ctor()
extern "C" void SqlXml__ctor_m4737 (SqlXml_t1045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlXml::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C" void SqlXml_System_Xml_Serialization_IXmlSerializable_ReadXml_m4738 (SqlXml_t1045 * __this, XmlReader_t843 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlXml::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C" void SqlXml_System_Xml_Serialization_IXmlSerializable_WriteXml_m4739 (SqlXml_t1045 * __this, XmlWriter_t1056 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlXml System.Data.SqlTypes.SqlXml::get_Null()
extern "C" SqlXml_t1045 * SqlXml_get_Null_m4740 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlXml::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C" XmlQualifiedName_t985 * SqlXml_GetXsdType_m4741 (Object_t * __this /* static, unused */, XmlSchemaSet_t1102 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
