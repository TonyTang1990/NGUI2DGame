#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Data.SqlExpressions.Parser
struct Parser_t887;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t908;
// System.String
struct String_t;
// System.Object
struct Object_t;
// Mono.Data.SqlExpressions.yyParser.yyInput
struct yyInput_t1095;

// System.Void Mono.Data.SqlExpressions.Parser::.ctor()
extern "C" void Parser__ctor_m3624 (Parser_t887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.Parser::.cctor()
extern "C" void Parser__cctor_m3625 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.Parser::Compile(System.String)
extern "C" Object_t * Parser_Compile_m3626 (Parser_t887 * __this, String_t* ___sqlExpr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.SqlExpressions.Parser::yyname(System.Int32)
extern "C" String_t* Parser_yyname_m3627 (Object_t * __this /* static, unused */, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Parser::yyparse(Mono.Data.SqlExpressions.yyParser.yyInput,System.Object)
extern "C" Object_t * Parser_yyparse_m3628 (Parser_t887 * __this, Object_t * ___yyLex, Object_t * ___yyd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Parser::yyDefault(System.Object)
extern "C" Object_t * Parser_yyDefault_m3629 (Parser_t887 * __this, Object_t * ___first, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Parser::yyparse(Mono.Data.SqlExpressions.yyParser.yyInput)
extern "C" Object_t * Parser_yyparse_m3630 (Parser_t887 * __this, Object_t * ___yyLex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
