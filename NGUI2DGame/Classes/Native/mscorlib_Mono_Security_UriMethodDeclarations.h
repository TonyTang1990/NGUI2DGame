#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Uri
struct Uri_t2366;
// System.String
struct String_t;
// System.Object
struct Object_t;
// Mono.Security.UriPartial
#include "mscorlib_Mono_Security_UriPartial.h"

// System.Void Mono.Security.Uri::.ctor(System.String)
extern "C" void Uri__ctor_m14103 (Uri_t2366 * __this, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::.ctor(System.String,System.Boolean)
extern "C" void Uri__ctor_m14104 (Uri_t2366 * __this, String_t* ___uriString, bool ___dontEscape, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::.ctor(System.String,System.Boolean,System.Boolean)
extern "C" void Uri__ctor_m14105 (Uri_t2366 * __this, String_t* ___uriString, bool ___dontEscape, bool ___reduce, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::.cctor()
extern "C" void Uri__cctor_m14106 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::get_AbsolutePath()
extern "C" String_t* Uri_get_AbsolutePath_m14107 (Uri_t2366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::get_Host()
extern "C" String_t* Uri_get_Host_m14108 (Uri_t2366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::get_IsFile()
extern "C" bool Uri_get_IsFile_m14109 (Uri_t2366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::get_IsLoopback()
extern "C" bool Uri_get_IsLoopback_m14110 (Uri_t2366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::get_IsUnc()
extern "C" bool Uri_get_IsUnc_m14111 (Uri_t2366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::get_LocalPath()
extern "C" String_t* Uri_get_LocalPath_m14112 (Uri_t2366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::get_Scheme()
extern "C" String_t* Uri_get_Scheme_m14113 (Uri_t2366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::Equals(System.Object)
extern "C" bool Uri_Equals_m14114 (Uri_t2366 * __this, Object_t * ___comparant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Uri::GetHashCode()
extern "C" int32_t Uri_GetHashCode_m14115 (Uri_t2366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::GetLeftPart(Mono.Security.UriPartial)
extern "C" String_t* Uri_GetLeftPart_m14116 (Uri_t2366 * __this, int32_t ___part, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Uri::FromHex(System.Char)
extern "C" int32_t Uri_FromHex_m14117 (Object_t * __this /* static, unused */, uint16_t ___digit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::HexEscape(System.Char)
extern "C" String_t* Uri_HexEscape_m14118 (Object_t * __this /* static, unused */, uint16_t ___character, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Mono.Security.Uri::HexUnescape(System.String,System.Int32&)
extern "C" uint16_t Uri_HexUnescape_m14119 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::IsHexDigit(System.Char)
extern "C" bool Uri_IsHexDigit_m14120 (Object_t * __this /* static, unused */, uint16_t ___digit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::IsHexEncoding(System.String,System.Int32)
extern "C" bool Uri_IsHexEncoding_m14121 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::ToString()
extern "C" String_t* Uri_ToString_m14122 (Uri_t2366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::EscapeString(System.String)
extern "C" String_t* Uri_EscapeString_m14123 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::EscapeString(System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C" String_t* Uri_EscapeString_m14124 (Object_t * __this /* static, unused */, String_t* ___str, bool ___escapeReserved, bool ___escapeHex, bool ___escapeBrackets, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::Parse()
extern "C" void Uri_Parse_m14125 (Uri_t2366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::Unescape(System.String)
extern "C" String_t* Uri_Unescape_m14126 (Uri_t2366 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::Unescape(System.String,System.Boolean)
extern "C" String_t* Uri_Unescape_m14127 (Uri_t2366 * __this, String_t* ___str, bool ___excludeSharp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::ParseAsWindowsUNC(System.String)
extern "C" void Uri_ParseAsWindowsUNC_m14128 (Uri_t2366 * __this, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::ParseAsWindowsAbsoluteFilePath(System.String)
extern "C" void Uri_ParseAsWindowsAbsoluteFilePath_m14129 (Uri_t2366 * __this, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::ParseAsUnixAbsoluteFilePath(System.String)
extern "C" void Uri_ParseAsUnixAbsoluteFilePath_m14130 (Uri_t2366 * __this, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::Parse(System.String)
extern "C" void Uri_Parse_m14131 (Uri_t2366 * __this, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::Reduce(System.String)
extern "C" String_t* Uri_Reduce_m14132 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::GetSchemeDelimiter(System.String)
extern "C" String_t* Uri_GetSchemeDelimiter_m14133 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Uri::GetDefaultPort(System.String)
extern "C" int32_t Uri_GetDefaultPort_m14134 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::GetOpaqueWiseSchemeDelimiter()
extern "C" String_t* Uri_GetOpaqueWiseSchemeDelimiter_m14135 (Uri_t2366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::IsPredefinedScheme(System.String)
extern "C" bool Uri_IsPredefinedScheme_m14136 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method) IL2CPP_METHOD_ATTR;
