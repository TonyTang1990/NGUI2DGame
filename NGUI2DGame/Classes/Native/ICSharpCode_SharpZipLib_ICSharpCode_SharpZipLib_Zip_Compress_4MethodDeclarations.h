#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ICSharpCode.SharpZipLib.Zip.Compression.Inflater
struct Inflater_t1826;
// System.Byte[]
struct ByteU5BU5D_t159;

// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Inflater::.ctor(System.Boolean)
extern "C" void Inflater__ctor_m10141 (Inflater_t1826 * __this, bool ___noHeader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::DecodeHeader()
extern "C" bool Inflater_DecodeHeader_m10142 (Inflater_t1826 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::DecodeDict()
extern "C" bool Inflater_DecodeDict_m10143 (Inflater_t1826 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::DecodeHuffman()
extern "C" bool Inflater_DecodeHuffman_m10144 (Inflater_t1826 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::DecodeChksum()
extern "C" bool Inflater_DecodeChksum_m10145 (Inflater_t1826 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::Decode()
extern "C" bool Inflater_Decode_m10146 (Inflater_t1826 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Inflater::SetInput(System.Byte[],System.Int32,System.Int32)
extern "C" void Inflater_SetInput_m10147 (Inflater_t1826 * __this, ByteU5BU5D_t159* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::Inflate(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t Inflater_Inflate_m10148 (Inflater_t1826 * __this, ByteU5BU5D_t159* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::get_IsNeedingInput()
extern "C" bool Inflater_get_IsNeedingInput_m10149 (Inflater_t1826 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::get_IsNeedingDictionary()
extern "C" bool Inflater_get_IsNeedingDictionary_m10150 (Inflater_t1826 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::get_IsFinished()
extern "C" bool Inflater_get_IsFinished_m10151 (Inflater_t1826 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Inflater::.cctor()
extern "C" void Inflater__cctor_m10152 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
