#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.SqlTypes.SqlInt64
struct SqlInt64_t1036;
struct SqlInt64_t1036_marshaled;
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
// System.Data.SqlTypes.SqlInt64
#include "System_Data_System_Data_SqlTypes_SqlInt64.h"
// System.Data.SqlTypes.SqlBoolean
#include "System_Data_System_Data_SqlTypes_SqlBoolean.h"

// System.Void System.Data.SqlTypes.SqlInt64::.ctor(System.Int64)
extern "C" void SqlInt64__ctor_m4671 (SqlInt64_t1036 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlInt64::.cctor()
extern "C" void SqlInt64__cctor_m4672 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlInt64::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C" void SqlInt64_System_Xml_Serialization_IXmlSerializable_ReadXml_m4673 (SqlInt64_t1036 * __this, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlInt64::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C" void SqlInt64_System_Xml_Serialization_IXmlSerializable_WriteXml_m4674 (SqlInt64_t1036 * __this, XmlWriter_t1056 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlInt64::get_IsNull()
extern "C" bool SqlInt64_get_IsNull_m4675 (SqlInt64_t1036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.SqlTypes.SqlInt64::get_Value()
extern "C" int64_t SqlInt64_get_Value_m4676 (SqlInt64_t1036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlInt64::CompareTo(System.Object)
extern "C" int32_t SqlInt64_CompareTo_m4677 (SqlInt64_t1036 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlInt64::CompareSqlInt64(System.Data.SqlTypes.SqlInt64)
extern "C" int32_t SqlInt64_CompareSqlInt64_m4678 (SqlInt64_t1036 * __this, SqlInt64_t1036  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlInt64::Equals(System.Object)
extern "C" bool SqlInt64_Equals_m4679 (SqlInt64_t1036 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlInt64::GetHashCode()
extern "C" int32_t SqlInt64_GetHashCode_m4680 (SqlInt64_t1036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlInt64::ToString()
extern "C" String_t* SqlInt64_ToString_m4681 (SqlInt64_t1036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlInt64::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C" XmlQualifiedName_t985 * SqlInt64_GetXsdType_m4682 (Object_t * __this /* static, unused */, XmlSchemaSet_t1102 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlInt64::op_Equality(System.Data.SqlTypes.SqlInt64,System.Data.SqlTypes.SqlInt64)
extern "C" SqlBoolean_t1025  SqlInt64_op_Equality_m4683 (Object_t * __this /* static, unused */, SqlInt64_t1036  ___x, SqlInt64_t1036  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void SqlInt64_t1036_marshal(const SqlInt64_t1036& unmarshaled, SqlInt64_t1036_marshaled& marshaled);
void SqlInt64_t1036_marshal_back(const SqlInt64_t1036_marshaled& marshaled, SqlInt64_t1036& unmarshaled);
void SqlInt64_t1036_marshal_cleanup(SqlInt64_t1036_marshaled& marshaled);
