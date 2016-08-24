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
// System.Data.SqlTypes.SqlInt16
struct SqlInt16_t2033903892;
struct SqlInt16_t2033903892_marshaled_pinvoke;
struct SqlInt16_t2033903892_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_SqlTypes_SqlInt162033903892.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"
#include "System_Xml_System_Xml_XmlWriter1048088568.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet313318308.h"
#include "System_Data_System_Data_SqlTypes_SqlBoolean3839138046.h"

// System.Void System.Data.SqlTypes.SqlInt16::.ctor(System.Int16)
extern "C"  void SqlInt16__ctor_m3156178319 (SqlInt16_t2033903892 * __this, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlInt16::.cctor()
extern "C"  void SqlInt16__cctor_m3458869447 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlInt16::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlInt16_System_Xml_Serialization_IXmlSerializable_ReadXml_m159740352 (SqlInt16_t2033903892 * __this, XmlReader_t3675626668 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlInt16::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlInt16_System_Xml_Serialization_IXmlSerializable_WriteXml_m1604328229 (SqlInt16_t2033903892 * __this, XmlWriter_t1048088568 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlInt16::get_IsNull()
extern "C"  bool SqlInt16_get_IsNull_m2610465010 (SqlInt16_t2033903892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Data.SqlTypes.SqlInt16::get_Value()
extern "C"  int16_t SqlInt16_get_Value_m1957639940 (SqlInt16_t2033903892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlInt16::CompareTo(System.Object)
extern "C"  int32_t SqlInt16_CompareTo_m849835914 (SqlInt16_t2033903892 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlInt16::CompareSqlInt16(System.Data.SqlTypes.SqlInt16)
extern "C"  int32_t SqlInt16_CompareSqlInt16_m3655186855 (SqlInt16_t2033903892 * __this, SqlInt16_t2033903892  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlInt16::Equals(System.Object)
extern "C"  bool SqlInt16_Equals_m383308821 (SqlInt16_t2033903892 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlInt16::GetHashCode()
extern "C"  int32_t SqlInt16_GetHashCode_m2807880635 (SqlInt16_t2033903892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlInt16::ToString()
extern "C"  String_t* SqlInt16_ToString_m2359880795 (SqlInt16_t2033903892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlInt16::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t1944712516 * SqlInt16_GetXsdType_m1331465995 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t313318308 * ___schemaSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlInt16::op_Equality(System.Data.SqlTypes.SqlInt16,System.Data.SqlTypes.SqlInt16)
extern "C"  SqlBoolean_t3839138046  SqlInt16_op_Equality_m3869890303 (Il2CppObject * __this /* static, unused */, SqlInt16_t2033903892  ___x0, SqlInt16_t2033903892  ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SqlInt16_t2033903892;
struct SqlInt16_t2033903892_marshaled_pinvoke;

extern "C" void SqlInt16_t2033903892_marshal_pinvoke(const SqlInt16_t2033903892& unmarshaled, SqlInt16_t2033903892_marshaled_pinvoke& marshaled);
extern "C" void SqlInt16_t2033903892_marshal_pinvoke_back(const SqlInt16_t2033903892_marshaled_pinvoke& marshaled, SqlInt16_t2033903892& unmarshaled);
extern "C" void SqlInt16_t2033903892_marshal_pinvoke_cleanup(SqlInt16_t2033903892_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SqlInt16_t2033903892;
struct SqlInt16_t2033903892_marshaled_com;

extern "C" void SqlInt16_t2033903892_marshal_com(const SqlInt16_t2033903892& unmarshaled, SqlInt16_t2033903892_marshaled_com& marshaled);
extern "C" void SqlInt16_t2033903892_marshal_com_back(const SqlInt16_t2033903892_marshaled_com& marshaled, SqlInt16_t2033903892& unmarshaled);
extern "C" void SqlInt16_t2033903892_marshal_com_cleanup(SqlInt16_t2033903892_marshaled_com& marshaled);
