#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.SqlTypes.SqlDecimal
struct SqlDecimal_t1031;
struct SqlDecimal_t1031_marshaled;
// System.Int32[]
struct Int32U5BU5D_t1;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Xml.XmlWriter
struct XmlWriter_t1056;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t985;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t1102;
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Data.SqlTypes.SqlDecimal
#include "System_Data_System_Data_SqlTypes_SqlDecimal.h"
// System.Data.SqlTypes.SqlBoolean
#include "System_Data_System_Data_SqlTypes_SqlBoolean.h"

// System.Void System.Data.SqlTypes.SqlDecimal::.ctor(System.Decimal)
extern "C" void SqlDecimal__ctor_m4592 (SqlDecimal_t1031 * __this, Decimal_t698  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDecimal::.ctor(System.Int64)
extern "C" void SqlDecimal__ctor_m4593 (SqlDecimal_t1031 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDecimal::.ctor(System.Byte,System.Byte,System.Boolean,System.Int32[])
extern "C" void SqlDecimal__ctor_m4594 (SqlDecimal_t1031 * __this, uint8_t ___bPrecision, uint8_t ___bScale, bool ___fPositive, Int32U5BU5D_t1* ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDecimal::.ctor(System.Byte,System.Byte,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void SqlDecimal__ctor_m4595 (SqlDecimal_t1031 * __this, uint8_t ___bPrecision, uint8_t ___bScale, bool ___fPositive, int32_t ___data1, int32_t ___data2, int32_t ___data3, int32_t ___data4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDecimal::.cctor()
extern "C" void SqlDecimal__cctor_m4596 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDecimal::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C" void SqlDecimal_System_Xml_Serialization_IXmlSerializable_ReadXml_m4597 (SqlDecimal_t1031 * __this, XmlReader_t843 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDecimal::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C" void SqlDecimal_System_Xml_Serialization_IXmlSerializable_WriteXml_m4598 (SqlDecimal_t1031 * __this, XmlWriter_t1056 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Data.SqlTypes.SqlDecimal::get_Data()
extern "C" Int32U5BU5D_t1* SqlDecimal_get_Data_m4599 (SqlDecimal_t1031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlDecimal::get_IsNull()
extern "C" bool SqlDecimal_get_IsNull_m4600 (SqlDecimal_t1031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlDecimal::get_IsPositive()
extern "C" bool SqlDecimal_get_IsPositive_m4601 (SqlDecimal_t1031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Data.SqlTypes.SqlDecimal::get_Precision()
extern "C" uint8_t SqlDecimal_get_Precision_m4602 (SqlDecimal_t1031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Data.SqlTypes.SqlDecimal::get_Scale()
extern "C" uint8_t SqlDecimal_get_Scale_m4603 (SqlDecimal_t1031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Data.SqlTypes.SqlDecimal::get_Value()
extern "C" Decimal_t698  SqlDecimal_get_Value_m4604 (SqlDecimal_t1031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::AdjustScale(System.Data.SqlTypes.SqlDecimal,System.Int32,System.Boolean)
extern "C" SqlDecimal_t1031  SqlDecimal_AdjustScale_m4605 (Object_t * __this /* static, unused */, SqlDecimal_t1031  ___n, int32_t ___digits, bool ___fRound, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDecimal::CompareTo(System.Object)
extern "C" int32_t SqlDecimal_CompareTo_m4606 (SqlDecimal_t1031 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDecimal::CompareTo(System.Data.SqlTypes.SqlDecimal)
extern "C" int32_t SqlDecimal_CompareTo_m4607 (SqlDecimal_t1031 * __this, SqlDecimal_t1031  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlDecimal::Equals(System.Object)
extern "C" bool SqlDecimal_Equals_m4608 (SqlDecimal_t1031 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDecimal::GetHashCode()
extern "C" int32_t SqlDecimal_GetHashCode_m4609 (SqlDecimal_t1031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::Round(System.Data.SqlTypes.SqlDecimal,System.Int32)
extern "C" SqlDecimal_t1031  SqlDecimal_Round_m4610 (Object_t * __this /* static, unused */, SqlDecimal_t1031  ___n, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Data.SqlTypes.SqlDecimal::GetPrecision(System.Decimal)
extern "C" uint8_t SqlDecimal_GetPrecision_m4611 (SqlDecimal_t1031 * __this, Decimal_t698  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Data.SqlTypes.SqlDecimal::ToDouble()
extern "C" double SqlDecimal_ToDouble_m4612 (SqlDecimal_t1031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlDecimal::ToString()
extern "C" String_t* SqlDecimal_ToString_m4613 (SqlDecimal_t1031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDecimal::Div128By32(System.UInt64&,System.UInt64&,System.UInt32,System.UInt32&)
extern "C" int32_t SqlDecimal_Div128By32_m4614 (Object_t * __this /* static, unused */, uint64_t* ___hi, uint64_t* ___lo, uint32_t ___divider, uint32_t* ___rest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::Truncate(System.Data.SqlTypes.SqlDecimal,System.Int32)
extern "C" SqlDecimal_t1031  SqlDecimal_Truncate_m4615 (Object_t * __this /* static, unused */, SqlDecimal_t1031  ___n, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlDecimal::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C" XmlQualifiedName_t985 * SqlDecimal_GetXsdType_m4616 (Object_t * __this /* static, unused */, XmlSchemaSet_t1102 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlDecimal::op_Equality(System.Data.SqlTypes.SqlDecimal,System.Data.SqlTypes.SqlDecimal)
extern "C" SqlBoolean_t1025  SqlDecimal_op_Equality_m4617 (Object_t * __this /* static, unused */, SqlDecimal_t1031  ___x, SqlDecimal_t1031  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::op_Multiply(System.Data.SqlTypes.SqlDecimal,System.Data.SqlTypes.SqlDecimal)
extern "C" SqlDecimal_t1031  SqlDecimal_op_Multiply_m4618 (Object_t * __this /* static, unused */, SqlDecimal_t1031  ___x, SqlDecimal_t1031  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::op_Implicit(System.Int64)
extern "C" SqlDecimal_t1031  SqlDecimal_op_Implicit_m4619 (Object_t * __this /* static, unused */, int64_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void SqlDecimal_t1031_marshal(const SqlDecimal_t1031& unmarshaled, SqlDecimal_t1031_marshaled& marshaled);
void SqlDecimal_t1031_marshal_back(const SqlDecimal_t1031_marshaled& marshaled, SqlDecimal_t1031& unmarshaled);
void SqlDecimal_t1031_marshal_cleanup(SqlDecimal_t1031_marshaled& marshaled);
