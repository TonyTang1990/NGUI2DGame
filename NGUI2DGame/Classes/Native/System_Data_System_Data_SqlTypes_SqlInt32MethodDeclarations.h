#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.SqlTypes.SqlInt32
struct SqlInt32_t1035;
struct SqlInt32_t1035_marshaled;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Xml.XmlWriter
struct XmlWriter_t1056;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t985;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t1102;
// System.Data.SqlTypes.SqlInt32
#include "System_Data_System_Data_SqlTypes_SqlInt32.h"
// System.Data.SqlTypes.SqlBoolean
#include "System_Data_System_Data_SqlTypes_SqlBoolean.h"

// System.Void System.Data.SqlTypes.SqlInt32::.ctor(System.Int32)
extern "C" void SqlInt32__ctor_m4658 (SqlInt32_t1035 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlInt32::.cctor()
extern "C" void SqlInt32__cctor_m4659 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlInt32::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C" void SqlInt32_System_Xml_Serialization_IXmlSerializable_ReadXml_m4660 (SqlInt32_t1035 * __this, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlInt32::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C" void SqlInt32_System_Xml_Serialization_IXmlSerializable_WriteXml_m4661 (SqlInt32_t1035 * __this, XmlWriter_t1056 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlInt32::get_IsNull()
extern "C" bool SqlInt32_get_IsNull_m4662 (SqlInt32_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlInt32::get_Value()
extern "C" int32_t SqlInt32_get_Value_m4663 (SqlInt32_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlInt32::CompareTo(System.Object)
extern "C" int32_t SqlInt32_CompareTo_m4664 (SqlInt32_t1035 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlInt32::CompareSqlInt32(System.Data.SqlTypes.SqlInt32)
extern "C" int32_t SqlInt32_CompareSqlInt32_m4665 (SqlInt32_t1035 * __this, SqlInt32_t1035  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlInt32::Equals(System.Object)
extern "C" bool SqlInt32_Equals_m4666 (SqlInt32_t1035 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlInt32::GetHashCode()
extern "C" int32_t SqlInt32_GetHashCode_m4667 (SqlInt32_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlInt32::ToString()
extern "C" String_t* SqlInt32_ToString_m4668 (SqlInt32_t1035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlInt32::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C" XmlQualifiedName_t985 * SqlInt32_GetXsdType_m4669 (Object_t * __this /* static, unused */, XmlSchemaSet_t1102 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlInt32::op_Equality(System.Data.SqlTypes.SqlInt32,System.Data.SqlTypes.SqlInt32)
extern "C" SqlBoolean_t1025  SqlInt32_op_Equality_m4670 (Object_t * __this /* static, unused */, SqlInt32_t1035  ___x, SqlInt32_t1035  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void SqlInt32_t1035_marshal(const SqlInt32_t1035& unmarshaled, SqlInt32_t1035_marshaled& marshaled);
void SqlInt32_t1035_marshal_back(const SqlInt32_t1035_marshaled& marshaled, SqlInt32_t1035& unmarshaled);
void SqlInt32_t1035_marshal_cleanup(SqlInt32_t1035_marshaled& marshaled);
