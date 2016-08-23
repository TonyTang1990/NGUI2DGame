#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.SqlTypes.SqlBinary
struct SqlBinary_t1024;
struct SqlBinary_t1024_marshaled;
// System.Byte[]
struct ByteU5BU5D_t159;
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
// System.Data.SqlTypes.SqlBinary
#include "System_Data_System_Data_SqlTypes_SqlBinary.h"
// System.Data.SqlTypes.SqlBoolean
#include "System_Data_System_Data_SqlTypes_SqlBoolean.h"

// System.Void System.Data.SqlTypes.SqlBinary::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C" void SqlBinary_System_Xml_Serialization_IXmlSerializable_ReadXml_m4526 (SqlBinary_t1024 * __this, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlBinary::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C" void SqlBinary_System_Xml_Serialization_IXmlSerializable_WriteXml_m4527 (SqlBinary_t1024 * __this, XmlWriter_t1056 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlBinary::get_IsNull()
extern "C" bool SqlBinary_get_IsNull_m4528 (SqlBinary_t1024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Data.SqlTypes.SqlBinary::get_Value()
extern "C" ByteU5BU5D_t159* SqlBinary_get_Value_m4529 (SqlBinary_t1024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlBinary::CompareTo(System.Object)
extern "C" int32_t SqlBinary_CompareTo_m4530 (SqlBinary_t1024 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlBinary::CompareTo(System.Data.SqlTypes.SqlBinary)
extern "C" int32_t SqlBinary_CompareTo_m4531 (SqlBinary_t1024 * __this, SqlBinary_t1024  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlBinary::Equals(System.Object)
extern "C" bool SqlBinary_Equals_m4532 (SqlBinary_t1024 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlBinary::GetHashCode()
extern "C" int32_t SqlBinary_GetHashCode_m4533 (SqlBinary_t1024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlBinary::ToString()
extern "C" String_t* SqlBinary_ToString_m4534 (SqlBinary_t1024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlBinary::Compare(System.Data.SqlTypes.SqlBinary,System.Data.SqlTypes.SqlBinary)
extern "C" int32_t SqlBinary_Compare_m4535 (Object_t * __this /* static, unused */, SqlBinary_t1024  ___x, SqlBinary_t1024  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlBinary::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C" XmlQualifiedName_t985 * SqlBinary_GetXsdType_m4536 (Object_t * __this /* static, unused */, XmlSchemaSet_t1102 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBinary::op_Equality(System.Data.SqlTypes.SqlBinary,System.Data.SqlTypes.SqlBinary)
extern "C" SqlBoolean_t1025  SqlBinary_op_Equality_m4537 (Object_t * __this /* static, unused */, SqlBinary_t1024  ___x, SqlBinary_t1024  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void SqlBinary_t1024_marshal(const SqlBinary_t1024& unmarshaled, SqlBinary_t1024_marshaled& marshaled);
void SqlBinary_t1024_marshal_back(const SqlBinary_t1024_marshaled& marshaled, SqlBinary_t1024& unmarshaled);
void SqlBinary_t1024_marshal_cleanup(SqlBinary_t1024_marshaled& marshaled);
