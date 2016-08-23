#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Data.SqlExpressions.Tokenizer
struct Tokenizer_t1061;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void Mono.Data.SqlExpressions.Tokenizer::.ctor(System.String)
extern "C" void Tokenizer__ctor_m4817 (Tokenizer_t1061 * __this, String_t* ___strInput, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.Tokenizer::.cctor()
extern "C" void Tokenizer__cctor_m4818 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Mono.Data.SqlExpressions.Tokenizer::Current()
extern "C" uint16_t Tokenizer_Current_m4819 (Tokenizer_t1061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Mono.Data.SqlExpressions.Tokenizer::Next()
extern "C" uint16_t Tokenizer_Next_m4820 (Tokenizer_t1061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Tokenizer::MoveNext()
extern "C" bool Tokenizer_MoveNext_m4821 (Tokenizer_t1061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Tokenizer::SkipWhiteSpace()
extern "C" bool Tokenizer_SkipWhiteSpace_m4822 (Tokenizer_t1061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Tokenizer::ReadNumber()
extern "C" Object_t * Tokenizer_ReadNumber_m4823 (Tokenizer_t1061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Mono.Data.SqlExpressions.Tokenizer::ProcessEscapes(System.Char)
extern "C" uint16_t Tokenizer_ProcessEscapes_m4824 (Tokenizer_t1061 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.SqlExpressions.Tokenizer::ReadString(System.Char)
extern "C" String_t* Tokenizer_ReadString_m4825 (Tokenizer_t1061 * __this, uint16_t ___terminator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.SqlExpressions.Tokenizer::ReadString(System.Char,System.Boolean)
extern "C" String_t* Tokenizer_ReadString_m4826 (Tokenizer_t1061 * __this, uint16_t ___terminator, bool ___canEscape, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.SqlExpressions.Tokenizer::ReadIdentifier()
extern "C" String_t* Tokenizer_ReadIdentifier_m4827 (Tokenizer_t1061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.Tokenizer::ParseIdentifier()
extern "C" int32_t Tokenizer_ParseIdentifier_m4828 (Tokenizer_t1061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.Tokenizer::ParseToken()
extern "C" int32_t Tokenizer_ParseToken_m4829 (Tokenizer_t1061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.SqlExpressions.Tokenizer::advance()
extern "C" bool Tokenizer_advance_m4830 (Tokenizer_t1061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.SqlExpressions.Tokenizer::token()
extern "C" int32_t Tokenizer_token_m4831 (Tokenizer_t1061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Tokenizer::value()
extern "C" Object_t * Tokenizer_value_m4832 (Tokenizer_t1061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
