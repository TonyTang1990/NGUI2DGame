#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Data.SqlExpressions.yydebug.yyDebugSimple
struct yyDebugSimple_t888;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void Mono.Data.SqlExpressions.yydebug.yyDebugSimple::.ctor()
extern "C" void yyDebugSimple__ctor_m3631 (yyDebugSimple_t888 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.yydebug.yyDebugSimple::println(System.String)
extern "C" void yyDebugSimple_println_m3632 (yyDebugSimple_t888 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.yydebug.yyDebugSimple::push(System.Int32,System.Object)
extern "C" void yyDebugSimple_push_m3633 (yyDebugSimple_t888 * __this, int32_t ___state, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.yydebug.yyDebugSimple::lex(System.Int32,System.Int32,System.String,System.Object)
extern "C" void yyDebugSimple_lex_m3634 (yyDebugSimple_t888 * __this, int32_t ___state, int32_t ___token, String_t* ___name, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.yydebug.yyDebugSimple::shift(System.Int32,System.Int32,System.Int32)
extern "C" void yyDebugSimple_shift_m3635 (yyDebugSimple_t888 * __this, int32_t ___from, int32_t ___to, int32_t ___errorFlag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.yydebug.yyDebugSimple::pop(System.Int32)
extern "C" void yyDebugSimple_pop_m3636 (yyDebugSimple_t888 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.yydebug.yyDebugSimple::discard(System.Int32,System.Int32,System.String,System.Object)
extern "C" void yyDebugSimple_discard_m3637 (yyDebugSimple_t888 * __this, int32_t ___state, int32_t ___token, String_t* ___name, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.yydebug.yyDebugSimple::reduce(System.Int32,System.Int32,System.Int32,System.String,System.Int32)
extern "C" void yyDebugSimple_reduce_m3638 (yyDebugSimple_t888 * __this, int32_t ___from, int32_t ___to, int32_t ___rule, String_t* ___text, int32_t ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.yydebug.yyDebugSimple::shift(System.Int32,System.Int32)
extern "C" void yyDebugSimple_shift_m3639 (yyDebugSimple_t888 * __this, int32_t ___from, int32_t ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.yydebug.yyDebugSimple::accept(System.Object)
extern "C" void yyDebugSimple_accept_m3640 (yyDebugSimple_t888 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.yydebug.yyDebugSimple::error(System.String)
extern "C" void yyDebugSimple_error_m3641 (yyDebugSimple_t888 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.SqlExpressions.yydebug.yyDebugSimple::reject()
extern "C" void yyDebugSimple_reject_m3642 (yyDebugSimple_t888 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
