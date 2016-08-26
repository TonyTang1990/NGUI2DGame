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

// Mono.Data.SqlExpressions.Parser
struct Parser_t1744254983;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t2963205659;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// Mono.Data.SqlExpressions.yyParser.yyInput
struct yyInput_t1309011876;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Mono.Data.SqlExpressions.Parser::.ctor()
extern "C"  void Parser__ctor_m2219306977 (Parser_t1744254983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.Parser::.cctor()
extern "C"  void Parser__cctor_m3305443650 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.Parser::Compile(System.String)
extern "C"  Il2CppObject * Parser_Compile_m2315365160 (Parser_t1744254983 * __this, String_t* ___sqlExpr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.SqlExpressions.Parser::yyname(System.Int32)
extern "C"  String_t* Parser_yyname_m2837460352 (Il2CppObject * __this /* static, unused */, int32_t ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Parser::yyparse(Mono.Data.SqlExpressions.yyParser.yyInput,System.Object)
extern "C"  Il2CppObject * Parser_yyparse_m2654049910 (Parser_t1744254983 * __this, Il2CppObject * ___yyLex0, Il2CppObject * ___yyd1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Parser::yyDefault(System.Object)
extern "C"  Il2CppObject * Parser_yyDefault_m2713990485 (Parser_t1744254983 * __this, Il2CppObject * ___first0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.SqlExpressions.Parser::yyparse(Mono.Data.SqlExpressions.yyParser.yyInput)
extern "C"  Il2CppObject * Parser_yyparse_m274894088 (Parser_t1744254983 * __this, Il2CppObject * ___yyLex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
