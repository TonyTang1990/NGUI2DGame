#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.SqlTypes.SqlByte
struct SqlByte_t1026;
struct SqlByte_t1026_marshaled;
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
// System.Data.SqlTypes.SqlByte
#include "System_Data_System_Data_SqlTypes_SqlByte.h"
// System.Data.SqlTypes.SqlBoolean
#include "System_Data_System_Data_SqlTypes_SqlBoolean.h"

// System.Void System.Data.SqlTypes.SqlByte::.ctor(System.Byte)
extern "C" void SqlByte__ctor_m4555 (SqlByte_t1026 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlByte::.cctor()
extern "C" void SqlByte__cctor_m4556 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlByte::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C" void SqlByte_System_Xml_Serialization_IXmlSerializable_ReadXml_m4557 (SqlByte_t1026 * __this, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlByte::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C" void SqlByte_System_Xml_Serialization_IXmlSerializable_WriteXml_m4558 (SqlByte_t1026 * __this, XmlWriter_t1056 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlByte::get_IsNull()
extern "C" bool SqlByte_get_IsNull_m4559 (SqlByte_t1026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Data.SqlTypes.SqlByte::get_Value()
extern "C" uint8_t SqlByte_get_Value_m4560 (SqlByte_t1026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlByte::CompareTo(System.Object)
extern "C" int32_t SqlByte_CompareTo_m4561 (SqlByte_t1026 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlByte::CompareTo(System.Data.SqlTypes.SqlByte)
extern "C" int32_t SqlByte_CompareTo_m4562 (SqlByte_t1026 * __this, SqlByte_t1026  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlByte::Equals(System.Object)
extern "C" bool SqlByte_Equals_m4563 (SqlByte_t1026 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlByte::GetHashCode()
extern "C" int32_t SqlByte_GetHashCode_m4564 (SqlByte_t1026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlByte::ToString()
extern "C" String_t* SqlByte_ToString_m4565 (SqlByte_t1026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlByte::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C" XmlQualifiedName_t985 * SqlByte_GetXsdType_m4566 (Object_t * __this /* static, unused */, XmlSchemaSet_t1102 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlByte::op_Equality(System.Data.SqlTypes.SqlByte,System.Data.SqlTypes.SqlByte)
extern "C" SqlBoolean_t1025  SqlByte_op_Equality_m4567 (Object_t * __this /* static, unused */, SqlByte_t1026  ___x, SqlByte_t1026  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void SqlByte_t1026_marshal(const SqlByte_t1026& unmarshaled, SqlByte_t1026_marshaled& marshaled);
void SqlByte_t1026_marshal_back(const SqlByte_t1026_marshaled& marshaled, SqlByte_t1026& unmarshaled);
void SqlByte_t1026_marshal_cleanup(SqlByte_t1026_marshaled& marshaled);
