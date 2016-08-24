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
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t1944712516;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t313318308;
// System.Data.SqlTypes.SqlBinary
struct SqlBinary_t793232789;
struct SqlBinary_t793232789_marshaled_pinvoke;
struct SqlBinary_t793232789_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_SqlTypes_SqlBinary793232789.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"
#include "System_Xml_System_Xml_XmlWriter1048088568.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet313318308.h"
#include "System_Data_System_Data_SqlTypes_SqlBoolean3839138046.h"

// System.Void System.Data.SqlTypes.SqlBinary::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlBinary_System_Xml_Serialization_IXmlSerializable_ReadXml_m2290672131 (SqlBinary_t793232789 * __this, XmlReader_t3675626668 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlBinary::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlBinary_System_Xml_Serialization_IXmlSerializable_WriteXml_m2647155176 (SqlBinary_t793232789 * __this, XmlWriter_t1048088568 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlBinary::get_IsNull()
extern "C"  bool SqlBinary_get_IsNull_m523190267 (SqlBinary_t793232789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Data.SqlTypes.SqlBinary::get_Value()
extern "C"  ByteU5BU5D_t3397334013* SqlBinary_get_Value_m96271365 (SqlBinary_t793232789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlBinary::CompareTo(System.Object)
extern "C"  int32_t SqlBinary_CompareTo_m3229322127 (SqlBinary_t793232789 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlBinary::CompareTo(System.Data.SqlTypes.SqlBinary)
extern "C"  int32_t SqlBinary_CompareTo_m409340144 (SqlBinary_t793232789 * __this, SqlBinary_t793232789  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlBinary::Equals(System.Object)
extern "C"  bool SqlBinary_Equals_m1640696918 (SqlBinary_t793232789 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlBinary::GetHashCode()
extern "C"  int32_t SqlBinary_GetHashCode_m2850878734 (SqlBinary_t793232789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlBinary::ToString()
extern "C"  String_t* SqlBinary_ToString_m1920339914 (SqlBinary_t793232789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlBinary::Compare(System.Data.SqlTypes.SqlBinary,System.Data.SqlTypes.SqlBinary)
extern "C"  int32_t SqlBinary_Compare_m2604909424 (Il2CppObject * __this /* static, unused */, SqlBinary_t793232789  ___x0, SqlBinary_t793232789  ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlBinary::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t1944712516 * SqlBinary_GetXsdType_m3003403812 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t313318308 * ___schemaSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBinary::op_Equality(System.Data.SqlTypes.SqlBinary,System.Data.SqlTypes.SqlBinary)
extern "C"  SqlBoolean_t3839138046  SqlBinary_op_Equality_m277683178 (Il2CppObject * __this /* static, unused */, SqlBinary_t793232789  ___x0, SqlBinary_t793232789  ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SqlBinary_t793232789;
struct SqlBinary_t793232789_marshaled_pinvoke;

extern "C" void SqlBinary_t793232789_marshal_pinvoke(const SqlBinary_t793232789& unmarshaled, SqlBinary_t793232789_marshaled_pinvoke& marshaled);
extern "C" void SqlBinary_t793232789_marshal_pinvoke_back(const SqlBinary_t793232789_marshaled_pinvoke& marshaled, SqlBinary_t793232789& unmarshaled);
extern "C" void SqlBinary_t793232789_marshal_pinvoke_cleanup(SqlBinary_t793232789_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SqlBinary_t793232789;
struct SqlBinary_t793232789_marshaled_com;

extern "C" void SqlBinary_t793232789_marshal_com(const SqlBinary_t793232789& unmarshaled, SqlBinary_t793232789_marshaled_com& marshaled);
extern "C" void SqlBinary_t793232789_marshal_com_back(const SqlBinary_t793232789_marshaled_com& marshaled, SqlBinary_t793232789& unmarshaled);
extern "C" void SqlBinary_t793232789_marshal_com_cleanup(SqlBinary_t793232789_marshaled_com& marshaled);
