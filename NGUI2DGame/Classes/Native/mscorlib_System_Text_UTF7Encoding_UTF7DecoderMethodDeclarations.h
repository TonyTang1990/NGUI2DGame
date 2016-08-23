#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UTF7Encoding/UTF7Decoder
struct UTF7Decoder_t2939;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.Char[]
struct CharU5BU5D_t260;

// System.Void System.Text.UTF7Encoding/UTF7Decoder::.ctor()
extern "C" void UTF7Decoder__ctor_m18674 (UTF7Decoder_t2939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding/UTF7Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t UTF7Decoder_GetChars_m18675 (UTF7Decoder_t2939 * __this, ByteU5BU5D_t159* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t260* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
