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
// System.Data.SqlTypes.SqlSingle
struct SqlSingle_t2352658522;
struct SqlSingle_t2352658522_marshaled_pinvoke;
struct SqlSingle_t2352658522_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_SqlTypes_SqlSingle2352658522.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"
#include "System_Xml_System_Xml_XmlWriter1048088568.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet313318308.h"
#include "System_Data_System_Data_SqlTypes_SqlBoolean3839138046.h"

// System.Void System.Data.SqlTypes.SqlSingle::.ctor(System.Single)
extern "C"  void SqlSingle__ctor_m1654037251 (SqlSingle_t2352658522 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlSingle::.cctor()
extern "C"  void SqlSingle__cctor_m3709750769 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlSingle::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlSingle_System_Xml_Serialization_IXmlSerializable_ReadXml_m3822659640 (SqlSingle_t2352658522 * __this, XmlReader_t3675626668 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlSingle::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlSingle_System_Xml_Serialization_IXmlSerializable_WriteXml_m2223337267 (SqlSingle_t2352658522 * __this, XmlWriter_t1048088568 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlSingle::get_IsNull()
extern "C"  bool SqlSingle_get_IsNull_m1203952298 (SqlSingle_t2352658522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Data.SqlTypes.SqlSingle::get_Value()
extern "C"  float SqlSingle_get_Value_m2539174860 (SqlSingle_t2352658522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlSingle::CompareTo(System.Object)
extern "C"  int32_t SqlSingle_CompareTo_m769398038 (SqlSingle_t2352658522 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlSingle::CompareSqlSingle(System.Data.SqlTypes.SqlSingle)
extern "C"  int32_t SqlSingle_CompareSqlSingle_m3343256441 (SqlSingle_t2352658522 * __this, SqlSingle_t2352658522  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlSingle::Equals(System.Object)
extern "C"  bool SqlSingle_Equals_m133244655 (SqlSingle_t2352658522 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlSingle::GetHashCode()
extern "C"  int32_t SqlSingle_GetHashCode_m4093612801 (SqlSingle_t2352658522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlSingle::ToString()
extern "C"  String_t* SqlSingle_ToString_m3843356441 (SqlSingle_t2352658522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlSingle::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t1944712516 * SqlSingle_GetXsdType_m3479096525 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t313318308 * ___schemaSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlSingle::op_Equality(System.Data.SqlTypes.SqlSingle,System.Data.SqlTypes.SqlSingle)
extern "C"  SqlBoolean_t3839138046  SqlSingle_op_Equality_m3193341253 (Il2CppObject * __this /* static, unused */, SqlSingle_t2352658522  ___x0, SqlSingle_t2352658522  ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SqlSingle_t2352658522;
struct SqlSingle_t2352658522_marshaled_pinvoke;

extern "C" void SqlSingle_t2352658522_marshal_pinvoke(const SqlSingle_t2352658522& unmarshaled, SqlSingle_t2352658522_marshaled_pinvoke& marshaled);
extern "C" void SqlSingle_t2352658522_marshal_pinvoke_back(const SqlSingle_t2352658522_marshaled_pinvoke& marshaled, SqlSingle_t2352658522& unmarshaled);
extern "C" void SqlSingle_t2352658522_marshal_pinvoke_cleanup(SqlSingle_t2352658522_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SqlSingle_t2352658522;
struct SqlSingle_t2352658522_marshaled_com;

extern "C" void SqlSingle_t2352658522_marshal_com(const SqlSingle_t2352658522& unmarshaled, SqlSingle_t2352658522_marshaled_com& marshaled);
extern "C" void SqlSingle_t2352658522_marshal_com_back(const SqlSingle_t2352658522_marshaled_com& marshaled, SqlSingle_t2352658522& unmarshaled);
extern "C" void SqlSingle_t2352658522_marshal_com_cleanup(SqlSingle_t2352658522_marshaled_com& marshaled);
