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

// System.Int32[]
struct Int32U5BU5D_t3030399641;
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
// System.Data.SqlTypes.SqlDecimal
struct SqlDecimal_t3734586185;
struct SqlDecimal_t3734586185_marshaled_pinvoke;
struct SqlDecimal_t3734586185_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_SqlTypes_SqlDecimal3734586185.h"
#include "mscorlib_System_Decimal724701077.h"
#include "System_Xml_System_Xml_XmlReader3675626668.h"
#include "System_Xml_System_Xml_XmlWriter1048088568.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet313318308.h"
#include "System_Data_System_Data_SqlTypes_SqlBoolean3839138046.h"

// System.Void System.Data.SqlTypes.SqlDecimal::.ctor(System.Decimal)
extern "C"  void SqlDecimal__ctor_m2099418447 (SqlDecimal_t3734586185 * __this, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDecimal::.ctor(System.Int64)
extern "C"  void SqlDecimal__ctor_m3333458825 (SqlDecimal_t3734586185 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDecimal::.ctor(System.Byte,System.Byte,System.Boolean,System.Int32[])
extern "C"  void SqlDecimal__ctor_m1622357667 (SqlDecimal_t3734586185 * __this, uint8_t ___bPrecision0, uint8_t ___bScale1, bool ___fPositive2, Int32U5BU5D_t3030399641* ___bits3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDecimal::.ctor(System.Byte,System.Byte,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void SqlDecimal__ctor_m2554340474 (SqlDecimal_t3734586185 * __this, uint8_t ___bPrecision0, uint8_t ___bScale1, bool ___fPositive2, int32_t ___data13, int32_t ___data24, int32_t ___data35, int32_t ___data46, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDecimal::.cctor()
extern "C"  void SqlDecimal__cctor_m2295239394 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDecimal::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlDecimal_System_Xml_Serialization_IXmlSerializable_ReadXml_m2499422195 (SqlDecimal_t3734586185 * __this, XmlReader_t3675626668 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDecimal::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlDecimal_System_Xml_Serialization_IXmlSerializable_WriteXml_m1025209772 (SqlDecimal_t3734586185 * __this, XmlWriter_t1048088568 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Data.SqlTypes.SqlDecimal::get_Data()
extern "C"  Int32U5BU5D_t3030399641* SqlDecimal_get_Data_m437405754 (SqlDecimal_t3734586185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlDecimal::get_IsNull()
extern "C"  bool SqlDecimal_get_IsNull_m590265403 (SqlDecimal_t3734586185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlDecimal::get_IsPositive()
extern "C"  bool SqlDecimal_get_IsPositive_m3395883511 (SqlDecimal_t3734586185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Data.SqlTypes.SqlDecimal::get_Precision()
extern "C"  uint8_t SqlDecimal_get_Precision_m997609008 (SqlDecimal_t3734586185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Data.SqlTypes.SqlDecimal::get_Scale()
extern "C"  uint8_t SqlDecimal_get_Scale_m437663638 (SqlDecimal_t3734586185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Data.SqlTypes.SqlDecimal::get_Value()
extern "C"  Decimal_t724701077  SqlDecimal_get_Value_m2856520964 (SqlDecimal_t3734586185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::AdjustScale(System.Data.SqlTypes.SqlDecimal,System.Int32,System.Boolean)
extern "C"  SqlDecimal_t3734586185  SqlDecimal_AdjustScale_m1036651591 (Il2CppObject * __this /* static, unused */, SqlDecimal_t3734586185  ___n0, int32_t ___digits1, bool ___fRound2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDecimal::CompareTo(System.Object)
extern "C"  int32_t SqlDecimal_CompareTo_m894329975 (SqlDecimal_t3734586185 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDecimal::CompareTo(System.Data.SqlTypes.SqlDecimal)
extern "C"  int32_t SqlDecimal_CompareTo_m1340666602 (SqlDecimal_t3734586185 * __this, SqlDecimal_t3734586185  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlDecimal::Equals(System.Object)
extern "C"  bool SqlDecimal_Equals_m2003590938 (SqlDecimal_t3734586185 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDecimal::GetHashCode()
extern "C"  int32_t SqlDecimal_GetHashCode_m2848900138 (SqlDecimal_t3734586185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::Round(System.Data.SqlTypes.SqlDecimal,System.Int32)
extern "C"  SqlDecimal_t3734586185  SqlDecimal_Round_m957295511 (Il2CppObject * __this /* static, unused */, SqlDecimal_t3734586185  ___n0, int32_t ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Data.SqlTypes.SqlDecimal::GetPrecision(System.Decimal)
extern "C"  uint8_t SqlDecimal_GetPrecision_m4292129 (SqlDecimal_t3734586185 * __this, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Data.SqlTypes.SqlDecimal::ToDouble()
extern "C"  double SqlDecimal_ToDouble_m3985025332 (SqlDecimal_t3734586185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlDecimal::ToString()
extern "C"  String_t* SqlDecimal_ToString_m2628530420 (SqlDecimal_t3734586185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDecimal::Div128By32(System.UInt64&,System.UInt64&,System.UInt32,System.UInt32&)
extern "C"  int32_t SqlDecimal_Div128By32_m2094747981 (Il2CppObject * __this /* static, unused */, uint64_t* ___hi0, uint64_t* ___lo1, uint32_t ___divider2, uint32_t* ___rest3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::Truncate(System.Data.SqlTypes.SqlDecimal,System.Int32)
extern "C"  SqlDecimal_t3734586185  SqlDecimal_Truncate_m381674339 (Il2CppObject * __this /* static, unused */, SqlDecimal_t3734586185  ___n0, int32_t ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlDecimal::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t1944712516 * SqlDecimal_GetXsdType_m1502861726 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t313318308 * ___schemaSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlDecimal::op_Equality(System.Data.SqlTypes.SqlDecimal,System.Data.SqlTypes.SqlDecimal)
extern "C"  SqlBoolean_t3839138046  SqlDecimal_op_Equality_m172014346 (Il2CppObject * __this /* static, unused */, SqlDecimal_t3734586185  ___x0, SqlDecimal_t3734586185  ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::op_Multiply(System.Data.SqlTypes.SqlDecimal,System.Data.SqlTypes.SqlDecimal)
extern "C"  SqlDecimal_t3734586185  SqlDecimal_op_Multiply_m4145404439 (Il2CppObject * __this /* static, unused */, SqlDecimal_t3734586185  ___x0, SqlDecimal_t3734586185  ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::op_Implicit(System.Int64)
extern "C"  SqlDecimal_t3734586185  SqlDecimal_op_Implicit_m480779450 (Il2CppObject * __this /* static, unused */, int64_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SqlDecimal_t3734586185;
struct SqlDecimal_t3734586185_marshaled_pinvoke;

extern "C" void SqlDecimal_t3734586185_marshal_pinvoke(const SqlDecimal_t3734586185& unmarshaled, SqlDecimal_t3734586185_marshaled_pinvoke& marshaled);
extern "C" void SqlDecimal_t3734586185_marshal_pinvoke_back(const SqlDecimal_t3734586185_marshaled_pinvoke& marshaled, SqlDecimal_t3734586185& unmarshaled);
extern "C" void SqlDecimal_t3734586185_marshal_pinvoke_cleanup(SqlDecimal_t3734586185_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SqlDecimal_t3734586185;
struct SqlDecimal_t3734586185_marshaled_com;

extern "C" void SqlDecimal_t3734586185_marshal_com(const SqlDecimal_t3734586185& unmarshaled, SqlDecimal_t3734586185_marshaled_com& marshaled);
extern "C" void SqlDecimal_t3734586185_marshal_com_back(const SqlDecimal_t3734586185_marshaled_com& marshaled, SqlDecimal_t3734586185& unmarshaled);
extern "C" void SqlDecimal_t3734586185_marshal_com_cleanup(SqlDecimal_t3734586185_marshaled_com& marshaled);
