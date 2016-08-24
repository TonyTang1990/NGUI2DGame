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

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream
struct InflaterInputStream_t663799889;
// System.IO.Stream
struct Stream_t3255436806;
// ICSharpCode.SharpZipLib.Zip.Compression.Inflater
struct Inflater_t3958302971;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zi3958302971.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::.ctor(System.IO.Stream,ICSharpCode.SharpZipLib.Zip.Compression.Inflater)
extern "C"  void InflaterInputStream__ctor_m151851384 (InflaterInputStream_t663799889 * __this, Stream_t3255436806 * ___baseInputStream0, Inflater_t3958302971 * ___inf1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::.ctor(System.IO.Stream,ICSharpCode.SharpZipLib.Zip.Compression.Inflater,System.Int32)
extern "C"  void InflaterInputStream__ctor_m2026116311 (InflaterInputStream_t663799889 * __this, Stream_t3255436806 * ___baseInputStream0, Inflater_t3958302971 * ___inflater1, int32_t ___bufferSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Fill()
extern "C"  void InflaterInputStream_Fill_m3290598767 (InflaterInputStream_t663799889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::get_CanRead()
extern "C"  bool InflaterInputStream_get_CanRead_m1913146067 (InflaterInputStream_t663799889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::get_CanSeek()
extern "C"  bool InflaterInputStream_get_CanSeek_m2841191721 (InflaterInputStream_t663799889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::get_CanWrite()
extern "C"  bool InflaterInputStream_get_CanWrite_m2864049414 (InflaterInputStream_t663799889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::get_Length()
extern "C"  int64_t InflaterInputStream_get_Length_m3697460204 (InflaterInputStream_t663799889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::get_Position()
extern "C"  int64_t InflaterInputStream_get_Position_m1849419937 (InflaterInputStream_t663799889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::set_Position(System.Int64)
extern "C"  void InflaterInputStream_set_Position_m4107520104 (InflaterInputStream_t663799889 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Flush()
extern "C"  void InflaterInputStream_Flush_m3998855354 (InflaterInputStream_t663799889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t InflaterInputStream_Seek_m2298159084 (InflaterInputStream_t663799889 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::SetLength(System.Int64)
extern "C"  void InflaterInputStream_SetLength_m3703035084 (InflaterInputStream_t663799889 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void InflaterInputStream_Write_m1446803052 (InflaterInputStream_t663799889 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::WriteByte(System.Byte)
extern "C"  void InflaterInputStream_WriteByte_m2246300832 (InflaterInputStream_t663799889 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * InflaterInputStream_BeginWrite_m1256988965 (InflaterInputStream_t663799889 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Close()
extern "C"  void InflaterInputStream_Close_m2859275264 (InflaterInputStream_t663799889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t InflaterInputStream_Read_m2526892531 (InflaterInputStream_t663799889 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
