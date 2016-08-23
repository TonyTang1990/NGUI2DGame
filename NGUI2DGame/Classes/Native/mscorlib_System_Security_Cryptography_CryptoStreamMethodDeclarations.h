#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.CryptoStream
struct CryptoStream_t1860;
// System.IO.Stream
struct Stream_t844;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1278;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.Security.Cryptography.CryptoStreamMode
#include "mscorlib_System_Security_Cryptography_CryptoStreamMode.h"
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.Security.Cryptography.CryptoStream::.ctor(System.IO.Stream,System.Security.Cryptography.ICryptoTransform,System.Security.Cryptography.CryptoStreamMode)
extern "C" void CryptoStream__ctor_m10295 (CryptoStream_t1860 * __this, Stream_t844 * ___stream, Object_t * ___transform, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::Finalize()
extern "C" void CryptoStream_Finalize_m17720 (CryptoStream_t1860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.CryptoStream::get_CanRead()
extern "C" bool CryptoStream_get_CanRead_m17721 (CryptoStream_t1860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.CryptoStream::get_CanSeek()
extern "C" bool CryptoStream_get_CanSeek_m17722 (CryptoStream_t1860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.CryptoStream::get_CanWrite()
extern "C" bool CryptoStream_get_CanWrite_m17723 (CryptoStream_t1860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Security.Cryptography.CryptoStream::get_Length()
extern "C" int64_t CryptoStream_get_Length_m17724 (CryptoStream_t1860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Security.Cryptography.CryptoStream::get_Position()
extern "C" int64_t CryptoStream_get_Position_m17725 (CryptoStream_t1860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::set_Position(System.Int64)
extern "C" void CryptoStream_set_Position_m17726 (CryptoStream_t1860 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::Close()
extern "C" void CryptoStream_Close_m17727 (CryptoStream_t1860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.CryptoStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t CryptoStream_Read_m17728 (CryptoStream_t1860 * __this, ByteU5BU5D_t159* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void CryptoStream_Write_m17729 (CryptoStream_t1860 * __this, ByteU5BU5D_t159* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::Flush()
extern "C" void CryptoStream_Flush_m17730 (CryptoStream_t1860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::FlushFinalBlock()
extern "C" void CryptoStream_FlushFinalBlock_m17731 (CryptoStream_t1860 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Security.Cryptography.CryptoStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t CryptoStream_Seek_m17732 (CryptoStream_t1860 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::SetLength(System.Int64)
extern "C" void CryptoStream_SetLength_m17733 (CryptoStream_t1860 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::Dispose(System.Boolean)
extern "C" void CryptoStream_Dispose_m17734 (CryptoStream_t1860 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
