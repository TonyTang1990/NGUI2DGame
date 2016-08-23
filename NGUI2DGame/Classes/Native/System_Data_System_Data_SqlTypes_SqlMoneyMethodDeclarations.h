#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.SqlTypes.SqlMoney
struct SqlMoney_t1038;
struct SqlMoney_t1038_marshaled;
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
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Data.SqlTypes.SqlMoney
#include "System_Data_System_Data_SqlTypes_SqlMoney.h"
// System.Data.SqlTypes.SqlBoolean
#include "System_Data_System_Data_SqlTypes_SqlBoolean.h"

// System.Void System.Data.SqlTypes.SqlMoney::.ctor(System.Decimal)
extern "C" void SqlMoney__ctor_m4684 (SqlMoney_t1038 * __this, Decimal_t698  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlMoney::.ctor(System.Int32)
extern "C" void SqlMoney__ctor_m4685 (SqlMoney_t1038 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlMoney::.cctor()
extern "C" void SqlMoney__cctor_m4686 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlMoney::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C" void SqlMoney_System_Xml_Serialization_IXmlSerializable_ReadXml_m4687 (SqlMoney_t1038 * __this, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlMoney::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C" void SqlMoney_System_Xml_Serialization_IXmlSerializable_WriteXml_m4688 (SqlMoney_t1038 * __this, XmlWriter_t1056 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlMoney::get_IsNull()
extern "C" bool SqlMoney_get_IsNull_m4689 (SqlMoney_t1038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Data.SqlTypes.SqlMoney::get_Value()
extern "C" Decimal_t698  SqlMoney_get_Value_m4690 (SqlMoney_t1038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlMoney::CompareTo(System.Object)
extern "C" int32_t SqlMoney_CompareTo_m4691 (SqlMoney_t1038 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlMoney::CompareSqlMoney(System.Data.SqlTypes.SqlMoney)
extern "C" int32_t SqlMoney_CompareSqlMoney_m4692 (SqlMoney_t1038 * __this, SqlMoney_t1038  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlMoney::Equals(System.Object)
extern "C" bool SqlMoney_Equals_m4693 (SqlMoney_t1038 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlMoney::GetHashCode()
extern "C" int32_t SqlMoney_GetHashCode_m4694 (SqlMoney_t1038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlMoney::ToString()
extern "C" String_t* SqlMoney_ToString_m4695 (SqlMoney_t1038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlMoney::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C" XmlQualifiedName_t985 * SqlMoney_GetXsdType_m4696 (Object_t * __this /* static, unused */, XmlSchemaSet_t1102 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlMoney::op_Equality(System.Data.SqlTypes.SqlMoney,System.Data.SqlTypes.SqlMoney)
extern "C" SqlBoolean_t1025  SqlMoney_op_Equality_m4697 (Object_t * __this /* static, unused */, SqlMoney_t1038  ___x, SqlMoney_t1038  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void SqlMoney_t1038_marshal(const SqlMoney_t1038& unmarshaled, SqlMoney_t1038_marshaled& marshaled);
void SqlMoney_t1038_marshal_back(const SqlMoney_t1038_marshaled& marshaled, SqlMoney_t1038& unmarshaled);
void SqlMoney_t1038_marshal_cleanup(SqlMoney_t1038_marshaled& marshaled);
