#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.CStreamWriter
struct CStreamWriter_t2424;
// System.IO.Stream
struct Stream_t844;
// System.Text.Encoding
struct Encoding_t321;
// System.Char[]
struct CharU5BU5D_t260;
// System.String
struct String_t;

// System.Void System.IO.CStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void CStreamWriter__ctor_m14547 (CStreamWriter_t2424 * __this, Stream_t844 * ___stream, Encoding_t321 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void CStreamWriter_Write_m14548 (CStreamWriter_t2424 * __this, CharU5BU5D_t260* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::Write(System.Char)
extern "C" void CStreamWriter_Write_m14549 (CStreamWriter_t2424 * __this, uint16_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::InternalWriteString(System.String)
extern "C" void CStreamWriter_InternalWriteString_m14550 (CStreamWriter_t2424 * __this, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::InternalWriteChar(System.Char)
extern "C" void CStreamWriter_InternalWriteChar_m14551 (CStreamWriter_t2424 * __this, uint16_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::InternalWriteChars(System.Char[],System.Int32)
extern "C" void CStreamWriter_InternalWriteChars_m14552 (CStreamWriter_t2424 * __this, CharU5BU5D_t260* ___buffer, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::Write(System.Char[])
extern "C" void CStreamWriter_Write_m14553 (CStreamWriter_t2424 * __this, CharU5BU5D_t260* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::Write(System.String)
extern "C" void CStreamWriter_Write_m14554 (CStreamWriter_t2424 * __this, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
