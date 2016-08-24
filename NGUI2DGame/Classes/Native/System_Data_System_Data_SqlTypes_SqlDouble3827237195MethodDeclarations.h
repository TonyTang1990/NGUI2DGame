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
// System.Data.SqlTypes.SqlDouble
struct SqlDouble_t3827237195;
struct SqlDouble_t3827237195_marshaled_pinvoke;
struct SqlDouble_t3827237195_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_SqlTypes_SqlDouble3827237195.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"
#include "System_Xml_System_Xml_XmlWriter1048088568.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet313318308.h"
#include "System_Data_System_Data_SqlTypes_SqlBoolean3839138046.h"

// System.Void System.Data.SqlTypes.SqlDouble::.ctor(System.Double)
extern "C"  void SqlDouble__ctor_m3523555415 (SqlDouble_t3827237195 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDouble::.cctor()
extern "C"  void SqlDouble__cctor_m1311865794 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDouble::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlDouble_System_Xml_Serialization_IXmlSerializable_ReadXml_m3715937349 (SqlDouble_t3827237195 * __this, XmlReader_t3675626668 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDouble::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlDouble_System_Xml_Serialization_IXmlSerializable_WriteXml_m4266064236 (SqlDouble_t3827237195 * __this, XmlWriter_t1048088568 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlDouble::get_IsNull()
extern "C"  bool SqlDouble_get_IsNull_m3098406409 (SqlDouble_t3827237195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Data.SqlTypes.SqlDouble::get_Value()
extern "C"  double SqlDouble_get_Value_m551839182 (SqlDouble_t3827237195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDouble::CompareTo(System.Object)
extern "C"  int32_t SqlDouble_CompareTo_m1499292045 (SqlDouble_t3827237195 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDouble::CompareTo(System.Data.SqlTypes.SqlDouble)
extern "C"  int32_t SqlDouble_CompareTo_m510235568 (SqlDouble_t3827237195 * __this, SqlDouble_t3827237195  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlDouble::Equals(System.Object)
extern "C"  bool SqlDouble_Equals_m1649046586 (SqlDouble_t3827237195 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDouble::GetHashCode()
extern "C"  int32_t SqlDouble_GetHashCode_m2927505050 (SqlDouble_t3827237195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlDouble::ToString()
extern "C"  String_t* SqlDouble_ToString_m4241528378 (SqlDouble_t3827237195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlDouble::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t1944712516 * SqlDouble_GetXsdType_m2363522100 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t313318308 * ___schemaSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlDouble::op_Equality(System.Data.SqlTypes.SqlDouble,System.Data.SqlTypes.SqlDouble)
extern "C"  SqlBoolean_t3839138046  SqlDouble_op_Equality_m707259826 (Il2CppObject * __this /* static, unused */, SqlDouble_t3827237195  ___x0, SqlDouble_t3827237195  ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SqlDouble_t3827237195;
struct SqlDouble_t3827237195_marshaled_pinvoke;

extern "C" void SqlDouble_t3827237195_marshal_pinvoke(const SqlDouble_t3827237195& unmarshaled, SqlDouble_t3827237195_marshaled_pinvoke& marshaled);
extern "C" void SqlDouble_t3827237195_marshal_pinvoke_back(const SqlDouble_t3827237195_marshaled_pinvoke& marshaled, SqlDouble_t3827237195& unmarshaled);
extern "C" void SqlDouble_t3827237195_marshal_pinvoke_cleanup(SqlDouble_t3827237195_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SqlDouble_t3827237195;
struct SqlDouble_t3827237195_marshaled_com;

extern "C" void SqlDouble_t3827237195_marshal_com(const SqlDouble_t3827237195& unmarshaled, SqlDouble_t3827237195_marshaled_com& marshaled);
extern "C" void SqlDouble_t3827237195_marshal_com_back(const SqlDouble_t3827237195_marshaled_com& marshaled, SqlDouble_t3827237195& unmarshaled);
extern "C" void SqlDouble_t3827237195_marshal_com_cleanup(SqlDouble_t3827237195_marshaled_com& marshaled);
