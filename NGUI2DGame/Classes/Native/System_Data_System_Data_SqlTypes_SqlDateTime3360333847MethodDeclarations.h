#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Xml.XmlReader
struct XmlReader_t3675626668;
// System.Xml.XmlWriter
struct XmlWriter_t1048088568;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t1944712516;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t313318308;
// System.Data.SqlTypes.SqlDateTime
struct SqlDateTime_t3360333847;
struct SqlDateTime_t3360333847_marshaled_pinvoke;
struct SqlDateTime_t3360333847_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_SqlTypes_SqlDateTime3360333847.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"
#include "System_Xml_System_Xml_XmlWriter1048088568.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet313318308.h"
#include "System_Data_System_Data_SqlTypes_SqlBoolean3839138046.h"

// System.Void System.Data.SqlTypes.SqlDateTime::.cctor()
extern "C"  void SqlDateTime__cctor_m1014198222 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDateTime::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlDateTime_System_Xml_Serialization_IXmlSerializable_ReadXml_m311353265 (SqlDateTime_t3360333847 * __this, XmlReader_t3675626668 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDateTime::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlDateTime_System_Xml_Serialization_IXmlSerializable_WriteXml_m2873494592 (SqlDateTime_t3360333847 * __this, XmlWriter_t1048088568 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlDateTime::get_IsNull()
extern "C"  bool SqlDateTime_get_IsNull_m1117097445 (SqlDateTime_t3360333847 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Data.SqlTypes.SqlDateTime::get_Value()
extern "C"  DateTime_t693205669  SqlDateTime_get_Value_m1606848286 (SqlDateTime_t3360333847 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDateTime::CompareTo(System.Object)
extern "C"  int32_t SqlDateTime_CompareTo_m2998278097 (SqlDateTime_t3360333847 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDateTime::CompareTo(System.Data.SqlTypes.SqlDateTime)
extern "C"  int32_t SqlDateTime_CompareTo_m2879003664 (SqlDateTime_t3360333847 * __this, SqlDateTime_t3360333847  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlDateTime::Equals(System.Object)
extern "C"  bool SqlDateTime_Equals_m959672982 (SqlDateTime_t3360333847 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDateTime::GetHashCode()
extern "C"  int32_t SqlDateTime_GetHashCode_m3898863926 (SqlDateTime_t3360333847 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlDateTime::ToString()
extern "C"  String_t* SqlDateTime_ToString_m697163174 (SqlDateTime_t3360333847 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlDateTime::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t1944712516 * SqlDateTime_GetXsdType_m3203147424 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t313318308 * ___schemaSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlDateTime::op_Equality(System.Data.SqlTypes.SqlDateTime,System.Data.SqlTypes.SqlDateTime)
extern "C"  SqlBoolean_t3839138046  SqlDateTime_op_Equality_m543883470 (Il2CppObject * __this /* static, unused */, SqlDateTime_t3360333847  ___x0, SqlDateTime_t3360333847  ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SqlDateTime_t3360333847;
struct SqlDateTime_t3360333847_marshaled_pinvoke;

extern "C" void SqlDateTime_t3360333847_marshal_pinvoke(const SqlDateTime_t3360333847& unmarshaled, SqlDateTime_t3360333847_marshaled_pinvoke& marshaled);
extern "C" void SqlDateTime_t3360333847_marshal_pinvoke_back(const SqlDateTime_t3360333847_marshaled_pinvoke& marshaled, SqlDateTime_t3360333847& unmarshaled);
extern "C" void SqlDateTime_t3360333847_marshal_pinvoke_cleanup(SqlDateTime_t3360333847_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SqlDateTime_t3360333847;
struct SqlDateTime_t3360333847_marshaled_com;

extern "C" void SqlDateTime_t3360333847_marshal_com(const SqlDateTime_t3360333847& unmarshaled, SqlDateTime_t3360333847_marshaled_com& marshaled);
extern "C" void SqlDateTime_t3360333847_marshal_com_back(const SqlDateTime_t3360333847_marshaled_com& marshaled, SqlDateTime_t3360333847& unmarshaled);
extern "C" void SqlDateTime_t3360333847_marshal_com_cleanup(SqlDateTime_t3360333847_marshaled_com& marshaled);
