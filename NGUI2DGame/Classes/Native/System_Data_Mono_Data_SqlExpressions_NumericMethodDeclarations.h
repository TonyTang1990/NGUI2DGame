#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Data.SqlExpressions.Numeric
struct Numeric_t1062;
// System.Object
struct Object_t;
// System.IConvertible
struct IConvertible_t373;
// System.TypeCode
#include "mscorlib_System_TypeCode.h"

// System.Boolean Mono.Data.SqlExpressions.Numeric::IsNumeric(System.Object)
extern "C" bool Numeric_IsNumeric_m4833 (Object_t * __this /* static, unused */, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConvertible Mono.Data.SqlExpressions.Numeric::Unify(System.IConvertible)
extern "C" Object_t * Numeric_Unify_m4834 (Object_t * __this /* static, unused */, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode Mono.Data.SqlExpressions.Numeric::ToSameType(System.IConvertible&,System.IConvertible&)
extern "C" int32_t Numeric_ToSameType_m4835 (Object_t * __this /* static, unused */, Object_t ** ___o1, Object_t ** ___o2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConvertible Mono.Data.SqlExpressions.Numeric::Add(System.IConvertible,System.IConvertible)
extern "C" Object_t * Numeric_Add_m4836 (Object_t * __this /* static, unused */, Object_t * ___o1, Object_t * ___o2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConvertible Mono.Data.SqlExpressions.Numeric::Subtract(System.IConvertible,System.IConvertible)
extern "C" Object_t * Numeric_Subtract_m4837 (Object_t * __this /* static, unused */, Object_t * ___o1, Object_t * ___o2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConvertible Mono.Data.SqlExpressions.Numeric::Multiply(System.IConvertible,System.IConvertible)
extern "C" Object_t * Numeric_Multiply_m4838 (Object_t * __this /* static, unused */, Object_t * ___o1, Object_t * ___o2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConvertible Mono.Data.SqlExpressions.Numeric::Divide(System.IConvertible,System.IConvertible)
extern "C" Object_t * Numeric_Divide_m4839 (Object_t * __this /* static, unused */, Object_t * ___o1, Object_t * ___o2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConvertible Mono.Data.SqlExpressions.Numeric::Modulo(System.IConvertible,System.IConvertible)
extern "C" Object_t * Numeric_Modulo_m4840 (Object_t * __this /* static, unused */, Object_t * ___o1, Object_t * ___o2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConvertible Mono.Data.SqlExpressions.Numeric::Negative(System.IConvertible)
extern "C" Object_t * Numeric_Negative_m4841 (Object_t * __this /* static, unused */, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConvertible Mono.Data.SqlExpressions.Numeric::Min(System.IConvertible,System.IConvertible)
extern "C" Object_t * Numeric_Min_m4842 (Object_t * __this /* static, unused */, Object_t * ___o1, Object_t * ___o2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConvertible Mono.Data.SqlExpressions.Numeric::Max(System.IConvertible,System.IConvertible)
extern "C" Object_t * Numeric_Max_m4843 (Object_t * __this /* static, unused */, Object_t * ___o1, Object_t * ___o2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
