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

// ICSharpCode.SharpZipLib.Zip.Compression.Inflater
struct Inflater_t3958302971;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Inflater::.ctor(System.Boolean)
extern "C"  void Inflater__ctor_m1334719096 (Inflater_t3958302971 * __this, bool ___noHeader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::DecodeHeader()
extern "C"  bool Inflater_DecodeHeader_m308898150 (Inflater_t3958302971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::DecodeDict()
extern "C"  bool Inflater_DecodeDict_m4058750473 (Inflater_t3958302971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::DecodeHuffman()
extern "C"  bool Inflater_DecodeHuffman_m779657766 (Inflater_t3958302971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::DecodeChksum()
extern "C"  bool Inflater_DecodeChksum_m3189548788 (Inflater_t3958302971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::Decode()
extern "C"  bool Inflater_Decode_m891627623 (Inflater_t3958302971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Inflater::SetInput(System.Byte[],System.Int32,System.Int32)
extern "C"  void Inflater_SetInput_m1225927750 (Inflater_t3958302971 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::Inflate(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t Inflater_Inflate_m2382363959 (Inflater_t3958302971 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::get_IsNeedingInput()
extern "C"  bool Inflater_get_IsNeedingInput_m3454491888 (Inflater_t3958302971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::get_IsNeedingDictionary()
extern "C"  bool Inflater_get_IsNeedingDictionary_m130412086 (Inflater_t3958302971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::get_IsFinished()
extern "C"  bool Inflater_get_IsFinished_m3508682262 (Inflater_t3958302971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Inflater::.cctor()
extern "C"  void Inflater__cctor_m3421098168 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
