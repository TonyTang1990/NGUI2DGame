#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.SqlTypes.SqlBoolean
struct SqlBoolean_t1025;
struct SqlBoolean_t1025_marshaled;
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
// System.Data.SqlTypes.SqlBoolean
#include "System_Data_System_Data_SqlTypes_SqlBoolean.h"

// System.Void System.Data.SqlTypes.SqlBoolean::.ctor(System.Boolean)
extern "C" void SqlBoolean__ctor_m4538 (SqlBoolean_t1025 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlBoolean::.ctor(System.Int32)
extern "C" void SqlBoolean__ctor_m4539 (SqlBoolean_t1025 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlBoolean::.cctor()
extern "C" void SqlBoolean__cctor_m4540 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlBoolean::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C" void SqlBoolean_System_Xml_Serialization_IXmlSerializable_ReadXml_m4541 (SqlBoolean_t1025 * __this, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlBoolean::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C" void SqlBoolean_System_Xml_Serialization_IXmlSerializable_WriteXml_m4542 (SqlBoolean_t1025 * __this, XmlWriter_t1056 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Data.SqlTypes.SqlBoolean::get_ByteValue()
extern "C" uint8_t SqlBoolean_get_ByteValue_m4543 (SqlBoolean_t1025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlBoolean::get_IsNull()
extern "C" bool SqlBoolean_get_IsNull_m4544 (SqlBoolean_t1025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlBoolean::get_IsTrue()
extern "C" bool SqlBoolean_get_IsTrue_m4545 (SqlBoolean_t1025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlBoolean::get_Value()
extern "C" bool SqlBoolean_get_Value_m4546 (SqlBoolean_t1025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlBoolean::CompareTo(System.Object)
extern "C" int32_t SqlBoolean_CompareTo_m4547 (SqlBoolean_t1025 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlBoolean::CompareTo(System.Data.SqlTypes.SqlBoolean)
extern "C" int32_t SqlBoolean_CompareTo_m4548 (SqlBoolean_t1025 * __this, SqlBoolean_t1025  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlBoolean::Equals(System.Object)
extern "C" bool SqlBoolean_Equals_m4549 (SqlBoolean_t1025 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlBoolean::GetHashCode()
extern "C" int32_t SqlBoolean_GetHashCode_m4550 (SqlBoolean_t1025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlBoolean::ToString()
extern "C" String_t* SqlBoolean_ToString_m4551 (SqlBoolean_t1025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlBoolean::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C" XmlQualifiedName_t985 * SqlBoolean_GetXsdType_m4552 (Object_t * __this /* static, unused */, XmlSchemaSet_t1102 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::op_Equality(System.Data.SqlTypes.SqlBoolean,System.Data.SqlTypes.SqlBoolean)
extern "C" SqlBoolean_t1025  SqlBoolean_op_Equality_m4553 (Object_t * __this /* static, unused */, SqlBoolean_t1025  ___x, SqlBoolean_t1025  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlBoolean::op_Explicit(System.Data.SqlTypes.SqlBoolean)
extern "C" bool SqlBoolean_op_Explicit_m4554 (Object_t * __this /* static, unused */, SqlBoolean_t1025  ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void SqlBoolean_t1025_marshal(const SqlBoolean_t1025& unmarshaled, SqlBoolean_t1025_marshaled& marshaled);
void SqlBoolean_t1025_marshal_back(const SqlBoolean_t1025_marshaled& marshaled, SqlBoolean_t1025& unmarshaled);
void SqlBoolean_t1025_marshal_cleanup(SqlBoolean_t1025_marshaled& marshaled);
