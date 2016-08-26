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
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t1944712516;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t313318308;
// System.Data.SqlTypes.SqlGuid
struct SqlGuid_t518445381;
struct SqlGuid_t518445381_marshaled_pinvoke;
struct SqlGuid_t518445381_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_SqlTypes_SqlGuid518445381.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"
#include "System_Xml_System_Xml_XmlWriter1048088568.h"
#include "mscorlib_System_Guid2533601593.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet313318308.h"
#include "System_Data_System_Data_SqlTypes_SqlBoolean3839138046.h"

// System.Void System.Data.SqlTypes.SqlGuid::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlGuid_System_Xml_Serialization_IXmlSerializable_ReadXml_m1203407187 (SqlGuid_t518445381 * __this, XmlReader_t3675626668 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlGuid::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlGuid_System_Xml_Serialization_IXmlSerializable_WriteXml_m3166762840 (SqlGuid_t518445381 * __this, XmlWriter_t1048088568 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlGuid::get_IsNull()
extern "C"  bool SqlGuid_get_IsNull_m281495307 (SqlGuid_t518445381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Data.SqlTypes.SqlGuid::get_Value()
extern "C"  Guid_t2533601593  SqlGuid_get_Value_m1946828662 (SqlGuid_t518445381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlGuid::CompareTo(System.Object)
extern "C"  int32_t SqlGuid_CompareTo_m3772648735 (SqlGuid_t518445381 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlGuid::CompareTo(System.Data.SqlTypes.SqlGuid)
extern "C"  int32_t SqlGuid_CompareTo_m3870721872 (SqlGuid_t518445381 * __this, SqlGuid_t518445381  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlGuid::Equals(System.Object)
extern "C"  bool SqlGuid_Equals_m3671285030 (SqlGuid_t518445381 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlGuid::GetHashCode()
extern "C"  int32_t SqlGuid_GetHashCode_m991116318 (SqlGuid_t518445381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Data.SqlTypes.SqlGuid::ToByteArray()
extern "C"  ByteU5BU5D_t3397334013* SqlGuid_ToByteArray_m2381622259 (SqlGuid_t518445381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlGuid::ToString()
extern "C"  String_t* SqlGuid_ToString_m1242610842 (SqlGuid_t518445381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlGuid::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t1944712516 * SqlGuid_GetXsdType_m2795968436 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t313318308 * ___schemaSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlGuid::op_Equality(System.Data.SqlTypes.SqlGuid,System.Data.SqlTypes.SqlGuid)
extern "C"  SqlBoolean_t3839138046  SqlGuid_op_Equality_m1449404922 (Il2CppObject * __this /* static, unused */, SqlGuid_t518445381  ___x0, SqlGuid_t518445381  ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SqlGuid_t518445381;
struct SqlGuid_t518445381_marshaled_pinvoke;

extern "C" void SqlGuid_t518445381_marshal_pinvoke(const SqlGuid_t518445381& unmarshaled, SqlGuid_t518445381_marshaled_pinvoke& marshaled);
extern "C" void SqlGuid_t518445381_marshal_pinvoke_back(const SqlGuid_t518445381_marshaled_pinvoke& marshaled, SqlGuid_t518445381& unmarshaled);
extern "C" void SqlGuid_t518445381_marshal_pinvoke_cleanup(SqlGuid_t518445381_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SqlGuid_t518445381;
struct SqlGuid_t518445381_marshaled_com;

extern "C" void SqlGuid_t518445381_marshal_com(const SqlGuid_t518445381& unmarshaled, SqlGuid_t518445381_marshaled_com& marshaled);
extern "C" void SqlGuid_t518445381_marshal_com_back(const SqlGuid_t518445381_marshaled_com& marshaled, SqlGuid_t518445381& unmarshaled);
extern "C" void SqlGuid_t518445381_marshal_com_cleanup(SqlGuid_t518445381_marshaled_com& marshaled);
