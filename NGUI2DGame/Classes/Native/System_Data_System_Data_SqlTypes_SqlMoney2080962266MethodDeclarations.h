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
// System.Data.SqlTypes.SqlMoney
struct SqlMoney_t2080962266;
struct SqlMoney_t2080962266_marshaled_pinvoke;
struct SqlMoney_t2080962266_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_SqlTypes_SqlMoney2080962266.h"
#include "mscorlib_System_Decimal724701077.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"
#include "System_Xml_System_Xml_XmlWriter1048088568.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet313318308.h"
#include "System_Data_System_Data_SqlTypes_SqlBoolean3839138046.h"

// System.Void System.Data.SqlTypes.SqlMoney::.ctor(System.Decimal)
extern "C"  void SqlMoney__ctor_m3292197014 (SqlMoney_t2080962266 * __this, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlMoney::.ctor(System.Int32)
extern "C"  void SqlMoney__ctor_m1641042733 (SqlMoney_t2080962266 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlMoney::.cctor()
extern "C"  void SqlMoney__cctor_m2540024943 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlMoney::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlMoney_System_Xml_Serialization_IXmlSerializable_ReadXml_m132644594 (SqlMoney_t2080962266 * __this, XmlReader_t3675626668 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlMoney::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlMoney_System_Xml_Serialization_IXmlSerializable_WriteXml_m2654101845 (SqlMoney_t2080962266 * __this, XmlWriter_t1048088568 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlMoney::get_IsNull()
extern "C"  bool SqlMoney_get_IsNull_m4170733576 (SqlMoney_t2080962266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Data.SqlTypes.SqlMoney::get_Value()
extern "C"  Decimal_t724701077  SqlMoney_get_Value_m3006915021 (SqlMoney_t2080962266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlMoney::CompareTo(System.Object)
extern "C"  int32_t SqlMoney_CompareTo_m2104660224 (SqlMoney_t2080962266 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlMoney::CompareSqlMoney(System.Data.SqlTypes.SqlMoney)
extern "C"  int32_t SqlMoney_CompareSqlMoney_m2769859647 (SqlMoney_t2080962266 * __this, SqlMoney_t2080962266  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlMoney::Equals(System.Object)
extern "C"  bool SqlMoney_Equals_m2037911565 (SqlMoney_t2080962266 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlMoney::GetHashCode()
extern "C"  int32_t SqlMoney_GetHashCode_m389551459 (SqlMoney_t2080962266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlMoney::ToString()
extern "C"  String_t* SqlMoney_ToString_m2142934475 (SqlMoney_t2080962266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlMoney::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t1944712516 * SqlMoney_GetXsdType_m754989459 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t313318308 * ___schemaSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlMoney::op_Equality(System.Data.SqlTypes.SqlMoney,System.Data.SqlTypes.SqlMoney)
extern "C"  SqlBoolean_t3839138046  SqlMoney_op_Equality_m4000254183 (Il2CppObject * __this /* static, unused */, SqlMoney_t2080962266  ___x0, SqlMoney_t2080962266  ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SqlMoney_t2080962266;
struct SqlMoney_t2080962266_marshaled_pinvoke;

extern "C" void SqlMoney_t2080962266_marshal_pinvoke(const SqlMoney_t2080962266& unmarshaled, SqlMoney_t2080962266_marshaled_pinvoke& marshaled);
extern "C" void SqlMoney_t2080962266_marshal_pinvoke_back(const SqlMoney_t2080962266_marshaled_pinvoke& marshaled, SqlMoney_t2080962266& unmarshaled);
extern "C" void SqlMoney_t2080962266_marshal_pinvoke_cleanup(SqlMoney_t2080962266_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SqlMoney_t2080962266;
struct SqlMoney_t2080962266_marshaled_com;

extern "C" void SqlMoney_t2080962266_marshal_com(const SqlMoney_t2080962266& unmarshaled, SqlMoney_t2080962266_marshaled_com& marshaled);
extern "C" void SqlMoney_t2080962266_marshal_com_back(const SqlMoney_t2080962266_marshaled_com& marshaled, SqlMoney_t2080962266& unmarshaled);
extern "C" void SqlMoney_t2080962266_marshal_com_cleanup(SqlMoney_t2080962266_marshaled_com& marshaled);
