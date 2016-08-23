#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.SqlTypes.SqlInt16
struct SqlInt16_t1034;
struct SqlInt16_t1034_marshaled;
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
// System.Data.SqlTypes.SqlInt16
#include "System_Data_System_Data_SqlTypes_SqlInt16.h"
// System.Data.SqlTypes.SqlBoolean
#include "System_Data_System_Data_SqlTypes_SqlBoolean.h"

// System.Void System.Data.SqlTypes.SqlInt16::.ctor(System.Int16)
extern "C" void SqlInt16__ctor_m4645 (SqlInt16_t1034 * __this, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlInt16::.cctor()
extern "C" void SqlInt16__cctor_m4646 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlInt16::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C" void SqlInt16_System_Xml_Serialization_IXmlSerializable_ReadXml_m4647 (SqlInt16_t1034 * __this, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlInt16::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C" void SqlInt16_System_Xml_Serialization_IXmlSerializable_WriteXml_m4648 (SqlInt16_t1034 * __this, XmlWriter_t1056 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlInt16::get_IsNull()
extern "C" bool SqlInt16_get_IsNull_m4649 (SqlInt16_t1034 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Data.SqlTypes.SqlInt16::get_Value()
extern "C" int16_t SqlInt16_get_Value_m4650 (SqlInt16_t1034 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlInt16::CompareTo(System.Object)
extern "C" int32_t SqlInt16_CompareTo_m4651 (SqlInt16_t1034 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlInt16::CompareSqlInt16(System.Data.SqlTypes.SqlInt16)
extern "C" int32_t SqlInt16_CompareSqlInt16_m4652 (SqlInt16_t1034 * __this, SqlInt16_t1034  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlInt16::Equals(System.Object)
extern "C" bool SqlInt16_Equals_m4653 (SqlInt16_t1034 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlInt16::GetHashCode()
extern "C" int32_t SqlInt16_GetHashCode_m4654 (SqlInt16_t1034 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlInt16::ToString()
extern "C" String_t* SqlInt16_ToString_m4655 (SqlInt16_t1034 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlInt16::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C" XmlQualifiedName_t985 * SqlInt16_GetXsdType_m4656 (Object_t * __this /* static, unused */, XmlSchemaSet_t1102 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlInt16::op_Equality(System.Data.SqlTypes.SqlInt16,System.Data.SqlTypes.SqlInt16)
extern "C" SqlBoolean_t1025  SqlInt16_op_Equality_m4657 (Object_t * __this /* static, unused */, SqlInt16_t1034  ___x, SqlInt16_t1034  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void SqlInt16_t1034_marshal(const SqlInt16_t1034& unmarshaled, SqlInt16_t1034_marshaled& marshaled);
void SqlInt16_t1034_marshal_back(const SqlInt16_t1034_marshaled& marshaled, SqlInt16_t1034& unmarshaled);
void SqlInt16_t1034_marshal_cleanup(SqlInt16_t1034_marshaled& marshaled);
