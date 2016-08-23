#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlAtomicValue
struct XmlAtomicValue_t1705;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t1145;
// System.Type
struct Type_t;
// System.Xml.Schema.XmlTypeCode
#include "System_Xml_System_Xml_Schema_XmlTypeCode.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.Xml.Schema.XmlAtomicValue::.ctor(System.Object,System.Xml.Schema.XmlSchemaType)
extern "C" void XmlAtomicValue__ctor_m8937 (XmlAtomicValue_t1705 * __this, Object_t * ___value, XmlSchemaType_t1145 * ___xmlType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlAtomicValue::System.ICloneable.Clone()
extern "C" Object_t * XmlAtomicValue_System_ICloneable_Clone_m8938 (XmlAtomicValue_t1705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlAtomicValue::Init(System.Boolean,System.Xml.Schema.XmlSchemaType)
extern "C" void XmlAtomicValue_Init_m8939 (XmlAtomicValue_t1705 * __this, bool ___value, XmlSchemaType_t1145 * ___xmlType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlAtomicValue::Init(System.DateTime,System.Xml.Schema.XmlSchemaType)
extern "C" void XmlAtomicValue_Init_m8940 (XmlAtomicValue_t1705 * __this, DateTime_t445  ___value, XmlSchemaType_t1145 * ___xmlType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlAtomicValue::Init(System.Decimal,System.Xml.Schema.XmlSchemaType)
extern "C" void XmlAtomicValue_Init_m8941 (XmlAtomicValue_t1705 * __this, Decimal_t698  ___value, XmlSchemaType_t1145 * ___xmlType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlAtomicValue::Init(System.Double,System.Xml.Schema.XmlSchemaType)
extern "C" void XmlAtomicValue_Init_m8942 (XmlAtomicValue_t1705 * __this, double ___value, XmlSchemaType_t1145 * ___xmlType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlAtomicValue::Init(System.Int32,System.Xml.Schema.XmlSchemaType)
extern "C" void XmlAtomicValue_Init_m8943 (XmlAtomicValue_t1705 * __this, int32_t ___value, XmlSchemaType_t1145 * ___xmlType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlAtomicValue::Init(System.Int64,System.Xml.Schema.XmlSchemaType)
extern "C" void XmlAtomicValue_Init_m8944 (XmlAtomicValue_t1705 * __this, int64_t ___value, XmlSchemaType_t1145 * ___xmlType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlAtomicValue::Init(System.Single,System.Xml.Schema.XmlSchemaType)
extern "C" void XmlAtomicValue_Init_m8945 (XmlAtomicValue_t1705 * __this, float ___value, XmlSchemaType_t1145 * ___xmlType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlAtomicValue::Init(System.String,System.Xml.Schema.XmlSchemaType)
extern "C" void XmlAtomicValue_Init_m8946 (XmlAtomicValue_t1705 * __this, String_t* ___value, XmlSchemaType_t1145 * ___xmlType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlAtomicValue::Init(System.Object,System.Xml.Schema.XmlSchemaType)
extern "C" void XmlAtomicValue_Init_m8947 (XmlAtomicValue_t1705 * __this, Object_t * ___value, XmlSchemaType_t1145 * ___xmlType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlAtomicValue System.Xml.Schema.XmlAtomicValue::Clone()
extern "C" XmlAtomicValue_t1705 * XmlAtomicValue_Clone_m8948 (XmlAtomicValue_t1705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlAtomicValue::ToString()
extern "C" String_t* XmlAtomicValue_ToString_m8949 (XmlAtomicValue_t1705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode System.Xml.Schema.XmlAtomicValue::get_ResolvedTypeCode()
extern "C" int32_t XmlAtomicValue_get_ResolvedTypeCode_m8950 (XmlAtomicValue_t1705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlAtomicValue::get_Value()
extern "C" String_t* XmlAtomicValue_get_Value_m8951 (XmlAtomicValue_t1705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlAtomicValue::get_ValueAsBoolean()
extern "C" bool XmlAtomicValue_get_ValueAsBoolean_m8952 (XmlAtomicValue_t1705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Xml.Schema.XmlAtomicValue::get_ValueAsDateTime()
extern "C" DateTime_t445  XmlAtomicValue_get_ValueAsDateTime_m8953 (XmlAtomicValue_t1705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.Schema.XmlAtomicValue::get_ValueAsDouble()
extern "C" double XmlAtomicValue_get_ValueAsDouble_m8954 (XmlAtomicValue_t1705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlAtomicValue::get_ValueAsInt()
extern "C" int32_t XmlAtomicValue_get_ValueAsInt_m8955 (XmlAtomicValue_t1705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Xml.Schema.XmlAtomicValue::get_ValueAsLong()
extern "C" int64_t XmlAtomicValue_get_ValueAsLong_m8956 (XmlAtomicValue_t1705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode System.Xml.Schema.XmlAtomicValue::XmlTypeCodeFromRuntimeType(System.Type,System.Boolean)
extern "C" int32_t XmlAtomicValue_XmlTypeCodeFromRuntimeType_m8957 (Object_t * __this /* static, unused */, Type_t * ___cliType, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
