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

// Mono.Data.SqlExpressions.Tokenizer
struct Tokenizer_t3681895715;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Mono.Data.SqlExpressions.Tokenizer::.ctor(System.String)
extern "C"  void Tokenizer__ctor_m1259084703 (Tokenizer_t3681895715 * __this, String_t* ___strInput0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.Tokenizer::.cctor()
extern "C"  void Tokenizer__cctor_m1564844154 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Mono.Data.SqlExpressions.Tokenizer::Current()
extern "C"  Il2CppChar Tokenizer_Current_m145393688 (Tokenizer_t3681895715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Mono.Data.SqlExpressions.Tokenizer::Next()
extern "C"  Il2CppChar Tokenizer_Next_m1448907644 (Tokenizer_t3681895715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Tokenizer::MoveNext()
extern "C"  bool Tokenizer_MoveNext_m2518499895 (Tokenizer_t3681895715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Tokenizer::SkipWhiteSpace()
extern "C"  bool Tokenizer_SkipWhiteSpace_m1660692151 (Tokenizer_t3681895715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Tokenizer::ReadNumber()
extern "C"  Il2CppObject * Tokenizer_ReadNumber_m2781572877 (Tokenizer_t3681895715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Mono.Data.SqlExpressions.Tokenizer::ProcessEscapes(System.Char)
extern "C"  Il2CppChar Tokenizer_ProcessEscapes_m1105296543 (Tokenizer_t3681895715 * __this, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.SqlExpressions.Tokenizer::ReadString(System.Char)
extern "C"  String_t* Tokenizer_ReadString_m3900087948 (Tokenizer_t3681895715 * __this, Il2CppChar ___terminator0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.SqlExpressions.Tokenizer::ReadString(System.Char,System.Boolean)
extern "C"  String_t* Tokenizer_ReadString_m1944948267 (Tokenizer_t3681895715 * __this, Il2CppChar ___terminator0, bool ___canEscape1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.SqlExpressions.Tokenizer::ReadIdentifier()
extern "C"  String_t* Tokenizer_ReadIdentifier_m205053117 (Tokenizer_t3681895715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.Tokenizer::ParseIdentifier()
extern "C"  int32_t Tokenizer_ParseIdentifier_m3259149389 (Tokenizer_t3681895715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.Tokenizer::ParseToken()
extern "C"  int32_t Tokenizer_ParseToken_m1985099477 (Tokenizer_t3681895715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Tokenizer::advance()
extern "C"  bool Tokenizer_advance_m3199981035 (Tokenizer_t3681895715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.Tokenizer::token()
extern "C"  int32_t Tokenizer_token_m1246873126 (Tokenizer_t3681895715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Tokenizer::value()
extern "C"  Il2CppObject * Tokenizer_value_m2238468539 (Tokenizer_t3681895715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
