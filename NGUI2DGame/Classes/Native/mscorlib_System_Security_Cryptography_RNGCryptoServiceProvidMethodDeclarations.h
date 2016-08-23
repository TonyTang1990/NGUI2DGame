#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RNGCryptoServiceProvider
struct RNGCryptoServiceProvider_t2843;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::.ctor()
extern "C" void RNGCryptoServiceProvider__ctor_m17920 (RNGCryptoServiceProvider_t2843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::.cctor()
extern "C" void RNGCryptoServiceProvider__cctor_m17921 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::Check()
extern "C" void RNGCryptoServiceProvider_Check_m17922 (RNGCryptoServiceProvider_t2843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RNGCryptoServiceProvider::RngOpen()
extern "C" bool RNGCryptoServiceProvider_RngOpen_m17923 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::RngInitialize(System.Byte[])
extern "C" IntPtr_t RNGCryptoServiceProvider_RngInitialize_m17924 (Object_t * __this /* static, unused */, ByteU5BU5D_t159* ___seed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::RngGetBytes(System.IntPtr,System.Byte[])
extern "C" IntPtr_t RNGCryptoServiceProvider_RngGetBytes_m17925 (Object_t * __this /* static, unused */, IntPtr_t ___handle, ByteU5BU5D_t159* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::RngClose(System.IntPtr)
extern "C" void RNGCryptoServiceProvider_RngClose_m17926 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::GetBytes(System.Byte[])
extern "C" void RNGCryptoServiceProvider_GetBytes_m17927 (RNGCryptoServiceProvider_t2843 * __this, ByteU5BU5D_t159* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::GetNonZeroBytes(System.Byte[])
extern "C" void RNGCryptoServiceProvider_GetNonZeroBytes_m17928 (RNGCryptoServiceProvider_t2843 * __this, ByteU5BU5D_t159* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::Finalize()
extern "C" void RNGCryptoServiceProvider_Finalize_m17929 (RNGCryptoServiceProvider_t2843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
