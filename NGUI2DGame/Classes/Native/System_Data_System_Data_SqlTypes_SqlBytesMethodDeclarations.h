#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.SqlTypes.SqlBytes
struct SqlBytes_t1027;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Xml.XmlWriter
struct XmlWriter_t1056;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t669;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t985;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t1102;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Data.SqlTypes.SqlBytes::.ctor()
extern "C" void SqlBytes__ctor_m4568 (SqlBytes_t1027 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlBytes::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C" void SqlBytes_System_Xml_Serialization_IXmlSerializable_ReadXml_m4569 (SqlBytes_t1027 * __this, XmlReader_t843 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlBytes::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C" void SqlBytes_System_Xml_Serialization_IXmlSerializable_WriteXml_m4570 (SqlBytes_t1027 * __this, XmlWriter_t1056 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlBytes::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SqlBytes_System_Runtime_Serialization_ISerializable_GetObjectData_m4571 (SqlBytes_t1027 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBytes System.Data.SqlTypes.SqlBytes::get_Null()
extern "C" SqlBytes_t1027 * SqlBytes_get_Null_m4572 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlBytes::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C" XmlQualifiedName_t985 * SqlBytes_GetXsdType_m4573 (Object_t * __this /* static, unused */, XmlSchemaSet_t1102 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
