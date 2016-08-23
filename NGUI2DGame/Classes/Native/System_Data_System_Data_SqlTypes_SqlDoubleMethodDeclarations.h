#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.SqlTypes.SqlDouble
struct SqlDouble_t1032;
struct SqlDouble_t1032_marshaled;
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
// System.Data.SqlTypes.SqlDouble
#include "System_Data_System_Data_SqlTypes_SqlDouble.h"
// System.Data.SqlTypes.SqlBoolean
#include "System_Data_System_Data_SqlTypes_SqlBoolean.h"

// System.Void System.Data.SqlTypes.SqlDouble::.ctor(System.Double)
extern "C" void SqlDouble__ctor_m4620 (SqlDouble_t1032 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDouble::.cctor()
extern "C" void SqlDouble__cctor_m4621 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDouble::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C" void SqlDouble_System_Xml_Serialization_IXmlSerializable_ReadXml_m4622 (SqlDouble_t1032 * __this, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDouble::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C" void SqlDouble_System_Xml_Serialization_IXmlSerializable_WriteXml_m4623 (SqlDouble_t1032 * __this, XmlWriter_t1056 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlDouble::get_IsNull()
extern "C" bool SqlDouble_get_IsNull_m4624 (SqlDouble_t1032 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Data.SqlTypes.SqlDouble::get_Value()
extern "C" double SqlDouble_get_Value_m4625 (SqlDouble_t1032 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDouble::CompareTo(System.Object)
extern "C" int32_t SqlDouble_CompareTo_m4626 (SqlDouble_t1032 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDouble::CompareTo(System.Data.SqlTypes.SqlDouble)
extern "C" int32_t SqlDouble_CompareTo_m4627 (SqlDouble_t1032 * __this, SqlDouble_t1032  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlDouble::Equals(System.Object)
extern "C" bool SqlDouble_Equals_m4628 (SqlDouble_t1032 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDouble::GetHashCode()
extern "C" int32_t SqlDouble_GetHashCode_m4629 (SqlDouble_t1032 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlDouble::ToString()
extern "C" String_t* SqlDouble_ToString_m4630 (SqlDouble_t1032 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlDouble::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C" XmlQualifiedName_t985 * SqlDouble_GetXsdType_m4631 (Object_t * __this /* static, unused */, XmlSchemaSet_t1102 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlDouble::op_Equality(System.Data.SqlTypes.SqlDouble,System.Data.SqlTypes.SqlDouble)
extern "C" SqlBoolean_t1025  SqlDouble_op_Equality_m4632 (Object_t * __this /* static, unused */, SqlDouble_t1032  ___x, SqlDouble_t1032  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void SqlDouble_t1032_marshal(const SqlDouble_t1032& unmarshaled, SqlDouble_t1032_marshaled& marshaled);
void SqlDouble_t1032_marshal_back(const SqlDouble_t1032_marshaled& marshaled, SqlDouble_t1032& unmarshaled);
void SqlDouble_t1032_marshal_cleanup(SqlDouble_t1032_marshaled& marshaled);
