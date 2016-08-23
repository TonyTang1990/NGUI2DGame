#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.SqlTypes.SqlString
struct SqlString_t1042;
struct SqlString_t1042_marshaled;
// System.Globalization.CultureInfo
struct CultureInfo_t693;
// System.String
struct String_t;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Xml.XmlWriter
struct XmlWriter_t1056;
// System.Object
struct Object_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t985;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t1102;
// System.Globalization.CompareOptions
#include "mscorlib_System_Globalization_CompareOptions.h"
// System.Data.SqlTypes.SqlString
#include "System_Data_System_Data_SqlTypes_SqlString.h"
// System.Data.SqlTypes.SqlBoolean
#include "System_Data_System_Data_SqlTypes_SqlBoolean.h"

// System.Void System.Data.SqlTypes.SqlString::.cctor()
extern "C" void SqlString__cctor_m4715 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlString::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C" void SqlString_System_Xml_Serialization_IXmlSerializable_ReadXml_m4716 (SqlString_t1042 * __this, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlString::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C" void SqlString_System_Xml_Serialization_IXmlSerializable_WriteXml_m4717 (SqlString_t1042 * __this, XmlWriter_t1056 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Data.SqlTypes.SqlString::get_CultureInfo()
extern "C" CultureInfo_t693 * SqlString_get_CultureInfo_m4718 (SqlString_t1042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlString::get_IsNull()
extern "C" bool SqlString_get_IsNull_m4719 (SqlString_t1042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlString::get_Value()
extern "C" String_t* SqlString_get_Value_m4720 (SqlString_t1042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CompareOptions System.Data.SqlTypes.SqlString::get_CompareOptions()
extern "C" int32_t SqlString_get_CompareOptions_m4721 (SqlString_t1042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlString::CompareTo(System.Object)
extern "C" int32_t SqlString_CompareTo_m4722 (SqlString_t1042 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlString::CompareSqlString(System.Data.SqlTypes.SqlString)
extern "C" int32_t SqlString_CompareSqlString_m4723 (SqlString_t1042 * __this, SqlString_t1042  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlString::Equals(System.Object)
extern "C" bool SqlString_Equals_m4724 (SqlString_t1042 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlString::GetHashCode()
extern "C" int32_t SqlString_GetHashCode_m4725 (SqlString_t1042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlString::ToString()
extern "C" String_t* SqlString_ToString_m4726 (SqlString_t1042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlString::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C" XmlQualifiedName_t985 * SqlString_GetXsdType_m4727 (Object_t * __this /* static, unused */, XmlSchemaSet_t1102 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlString::op_Equality(System.Data.SqlTypes.SqlString,System.Data.SqlTypes.SqlString)
extern "C" SqlBoolean_t1025  SqlString_op_Equality_m4728 (Object_t * __this /* static, unused */, SqlString_t1042  ___x, SqlString_t1042  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlString::op_Explicit(System.Data.SqlTypes.SqlString)
extern "C" String_t* SqlString_op_Explicit_m4729 (Object_t * __this /* static, unused */, SqlString_t1042  ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void SqlString_t1042_marshal(const SqlString_t1042& unmarshaled, SqlString_t1042_marshaled& marshaled);
void SqlString_t1042_marshal_back(const SqlString_t1042_marshaled& marshaled, SqlString_t1042& unmarshaled);
void SqlString_t1042_marshal_cleanup(SqlString_t1042_marshaled& marshaled);
