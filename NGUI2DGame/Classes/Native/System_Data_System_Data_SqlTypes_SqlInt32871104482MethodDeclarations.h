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
// System.Data.SqlTypes.SqlInt32
struct SqlInt32_t871104482;
struct SqlInt32_t871104482_marshaled_pinvoke;
struct SqlInt32_t871104482_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_SqlTypes_SqlInt32871104482.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"
#include "System_Xml_System_Xml_XmlWriter1048088568.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet313318308.h"
#include "System_Data_System_Data_SqlTypes_SqlBoolean3839138046.h"

// System.Void System.Data.SqlTypes.SqlInt32::.ctor(System.Int32)
extern "C"  void SqlInt32__ctor_m1064433807 (SqlInt32_t871104482 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlInt32::.cctor()
extern "C"  void SqlInt32__cctor_m184335289 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlInt32::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlInt32_System_Xml_Serialization_IXmlSerializable_ReadXml_m9159866 (SqlInt32_t871104482 * __this, XmlReader_t3675626668 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlInt32::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlInt32_System_Xml_Serialization_IXmlSerializable_WriteXml_m3709025843 (SqlInt32_t871104482 * __this, XmlWriter_t1048088568 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlInt32::get_IsNull()
extern "C"  bool SqlInt32_get_IsNull_m747492808 (SqlInt32_t871104482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlInt32::get_Value()
extern "C"  int32_t SqlInt32_get_Value_m1021672388 (SqlInt32_t871104482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlInt32::CompareTo(System.Object)
extern "C"  int32_t SqlInt32_CompareTo_m1655273396 (SqlInt32_t871104482 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlInt32::CompareSqlInt32(System.Data.SqlTypes.SqlInt32)
extern "C"  int32_t SqlInt32_CompareSqlInt32_m917070417 (SqlInt32_t871104482 * __this, SqlInt32_t871104482  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlInt32::Equals(System.Object)
extern "C"  bool SqlInt32_Equals_m502895783 (SqlInt32_t871104482 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlInt32::GetHashCode()
extern "C"  int32_t SqlInt32_GetHashCode_m3209012941 (SqlInt32_t871104482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlInt32::ToString()
extern "C"  String_t* SqlInt32_ToString_m4073729677 (SqlInt32_t871104482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlInt32::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t1944712516 * SqlInt32_GetXsdType_m3871217861 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t313318308 * ___schemaSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlInt32::op_Equality(System.Data.SqlTypes.SqlInt32,System.Data.SqlTypes.SqlInt32)
extern "C"  SqlBoolean_t3839138046  SqlInt32_op_Equality_m422981041 (Il2CppObject * __this /* static, unused */, SqlInt32_t871104482  ___x0, SqlInt32_t871104482  ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SqlInt32_t871104482;
struct SqlInt32_t871104482_marshaled_pinvoke;

extern "C" void SqlInt32_t871104482_marshal_pinvoke(const SqlInt32_t871104482& unmarshaled, SqlInt32_t871104482_marshaled_pinvoke& marshaled);
extern "C" void SqlInt32_t871104482_marshal_pinvoke_back(const SqlInt32_t871104482_marshaled_pinvoke& marshaled, SqlInt32_t871104482& unmarshaled);
extern "C" void SqlInt32_t871104482_marshal_pinvoke_cleanup(SqlInt32_t871104482_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SqlInt32_t871104482;
struct SqlInt32_t871104482_marshaled_com;

extern "C" void SqlInt32_t871104482_marshal_com(const SqlInt32_t871104482& unmarshaled, SqlInt32_t871104482_marshaled_com& marshaled);
extern "C" void SqlInt32_t871104482_marshal_com_back(const SqlInt32_t871104482_marshaled_com& marshaled, SqlInt32_t871104482& unmarshaled);
extern "C" void SqlInt32_t871104482_marshal_com_cleanup(SqlInt32_t871104482_marshaled_com& marshaled);
