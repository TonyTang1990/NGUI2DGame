#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.SqlTypes.SqlSingle
struct SqlSingle_t1041;
struct SqlSingle_t1041_marshaled;
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
// System.Data.SqlTypes.SqlSingle
#include "System_Data_System_Data_SqlTypes_SqlSingle.h"
// System.Data.SqlTypes.SqlBoolean
#include "System_Data_System_Data_SqlTypes_SqlBoolean.h"

// System.Void System.Data.SqlTypes.SqlSingle::.ctor(System.Single)
extern "C" void SqlSingle__ctor_m4702 (SqlSingle_t1041 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlSingle::.cctor()
extern "C" void SqlSingle__cctor_m4703 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlSingle::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C" void SqlSingle_System_Xml_Serialization_IXmlSerializable_ReadXml_m4704 (SqlSingle_t1041 * __this, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlSingle::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C" void SqlSingle_System_Xml_Serialization_IXmlSerializable_WriteXml_m4705 (SqlSingle_t1041 * __this, XmlWriter_t1056 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlSingle::get_IsNull()
extern "C" bool SqlSingle_get_IsNull_m4706 (SqlSingle_t1041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Data.SqlTypes.SqlSingle::get_Value()
extern "C" float SqlSingle_get_Value_m4707 (SqlSingle_t1041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlSingle::CompareTo(System.Object)
extern "C" int32_t SqlSingle_CompareTo_m4708 (SqlSingle_t1041 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlSingle::CompareSqlSingle(System.Data.SqlTypes.SqlSingle)
extern "C" int32_t SqlSingle_CompareSqlSingle_m4709 (SqlSingle_t1041 * __this, SqlSingle_t1041  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlSingle::Equals(System.Object)
extern "C" bool SqlSingle_Equals_m4710 (SqlSingle_t1041 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlSingle::GetHashCode()
extern "C" int32_t SqlSingle_GetHashCode_m4711 (SqlSingle_t1041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlSingle::ToString()
extern "C" String_t* SqlSingle_ToString_m4712 (SqlSingle_t1041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlSingle::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C" XmlQualifiedName_t985 * SqlSingle_GetXsdType_m4713 (Object_t * __this /* static, unused */, XmlSchemaSet_t1102 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlSingle::op_Equality(System.Data.SqlTypes.SqlSingle,System.Data.SqlTypes.SqlSingle)
extern "C" SqlBoolean_t1025  SqlSingle_op_Equality_m4714 (Object_t * __this /* static, unused */, SqlSingle_t1041  ___x, SqlSingle_t1041  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void SqlSingle_t1041_marshal(const SqlSingle_t1041& unmarshaled, SqlSingle_t1041_marshaled& marshaled);
void SqlSingle_t1041_marshal_back(const SqlSingle_t1041_marshaled& marshaled, SqlSingle_t1041& unmarshaled);
void SqlSingle_t1041_marshal_cleanup(SqlSingle_t1041_marshaled& marshaled);
