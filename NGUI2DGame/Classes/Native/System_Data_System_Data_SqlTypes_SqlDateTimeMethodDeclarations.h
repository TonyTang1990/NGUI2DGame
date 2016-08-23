#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.SqlTypes.SqlDateTime
struct SqlDateTime_t1030;
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
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Data.SqlTypes.SqlDateTime
#include "System_Data_System_Data_SqlTypes_SqlDateTime.h"
// System.Data.SqlTypes.SqlBoolean
#include "System_Data_System_Data_SqlTypes_SqlBoolean.h"

// System.Void System.Data.SqlTypes.SqlDateTime::.cctor()
extern "C" void SqlDateTime__cctor_m4580 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDateTime::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C" void SqlDateTime_System_Xml_Serialization_IXmlSerializable_ReadXml_m4581 (SqlDateTime_t1030 * __this, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDateTime::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C" void SqlDateTime_System_Xml_Serialization_IXmlSerializable_WriteXml_m4582 (SqlDateTime_t1030 * __this, XmlWriter_t1056 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlDateTime::get_IsNull()
extern "C" bool SqlDateTime_get_IsNull_m4583 (SqlDateTime_t1030 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Data.SqlTypes.SqlDateTime::get_Value()
extern "C" DateTime_t445  SqlDateTime_get_Value_m4584 (SqlDateTime_t1030 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDateTime::CompareTo(System.Object)
extern "C" int32_t SqlDateTime_CompareTo_m4585 (SqlDateTime_t1030 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDateTime::CompareTo(System.Data.SqlTypes.SqlDateTime)
extern "C" int32_t SqlDateTime_CompareTo_m4586 (SqlDateTime_t1030 * __this, SqlDateTime_t1030  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlDateTime::Equals(System.Object)
extern "C" bool SqlDateTime_Equals_m4587 (SqlDateTime_t1030 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDateTime::GetHashCode()
extern "C" int32_t SqlDateTime_GetHashCode_m4588 (SqlDateTime_t1030 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlDateTime::ToString()
extern "C" String_t* SqlDateTime_ToString_m4589 (SqlDateTime_t1030 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlDateTime::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C" XmlQualifiedName_t985 * SqlDateTime_GetXsdType_m4590 (Object_t * __this /* static, unused */, XmlSchemaSet_t1102 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlDateTime::op_Equality(System.Data.SqlTypes.SqlDateTime,System.Data.SqlTypes.SqlDateTime)
extern "C" SqlBoolean_t1025  SqlDateTime_op_Equality_m4591 (Object_t * __this /* static, unused */, SqlDateTime_t1030  ___x, SqlDateTime_t1030  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
