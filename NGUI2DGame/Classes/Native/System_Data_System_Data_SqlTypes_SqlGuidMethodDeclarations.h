#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.SqlTypes.SqlGuid
struct SqlGuid_t1033;
struct SqlGuid_t1033_marshaled;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Xml.XmlWriter
struct XmlWriter_t1056;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t985;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t1102;
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Data.SqlTypes.SqlGuid
#include "System_Data_System_Data_SqlTypes_SqlGuid.h"
// System.Data.SqlTypes.SqlBoolean
#include "System_Data_System_Data_SqlTypes_SqlBoolean.h"

// System.Void System.Data.SqlTypes.SqlGuid::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C" void SqlGuid_System_Xml_Serialization_IXmlSerializable_ReadXml_m4633 (SqlGuid_t1033 * __this, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlGuid::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C" void SqlGuid_System_Xml_Serialization_IXmlSerializable_WriteXml_m4634 (SqlGuid_t1033 * __this, XmlWriter_t1056 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlGuid::get_IsNull()
extern "C" bool SqlGuid_get_IsNull_m4635 (SqlGuid_t1033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Data.SqlTypes.SqlGuid::get_Value()
extern "C" Guid_t713  SqlGuid_get_Value_m4636 (SqlGuid_t1033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlGuid::CompareTo(System.Object)
extern "C" int32_t SqlGuid_CompareTo_m4637 (SqlGuid_t1033 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlGuid::CompareTo(System.Data.SqlTypes.SqlGuid)
extern "C" int32_t SqlGuid_CompareTo_m4638 (SqlGuid_t1033 * __this, SqlGuid_t1033  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlGuid::Equals(System.Object)
extern "C" bool SqlGuid_Equals_m4639 (SqlGuid_t1033 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlGuid::GetHashCode()
extern "C" int32_t SqlGuid_GetHashCode_m4640 (SqlGuid_t1033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Data.SqlTypes.SqlGuid::ToByteArray()
extern "C" ByteU5BU5D_t159* SqlGuid_ToByteArray_m4641 (SqlGuid_t1033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlGuid::ToString()
extern "C" String_t* SqlGuid_ToString_m4642 (SqlGuid_t1033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlGuid::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C" XmlQualifiedName_t985 * SqlGuid_GetXsdType_m4643 (Object_t * __this /* static, unused */, XmlSchemaSet_t1102 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlGuid::op_Equality(System.Data.SqlTypes.SqlGuid,System.Data.SqlTypes.SqlGuid)
extern "C" SqlBoolean_t1025  SqlGuid_op_Equality_m4644 (Object_t * __this /* static, unused */, SqlGuid_t1033  ___x, SqlGuid_t1033  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void SqlGuid_t1033_marshal(const SqlGuid_t1033& unmarshaled, SqlGuid_t1033_marshaled& marshaled);
void SqlGuid_t1033_marshal_back(const SqlGuid_t1033_marshaled& marshaled, SqlGuid_t1033& unmarshaled);
void SqlGuid_t1033_marshal_cleanup(SqlGuid_t1033_marshaled& marshaled);
