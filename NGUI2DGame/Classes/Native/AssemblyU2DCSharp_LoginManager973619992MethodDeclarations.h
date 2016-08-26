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

// LoginManager
struct LoginManager_t973619992;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void LoginManager::.ctor()
extern "C"  void LoginManager__ctor_m930990491 (LoginManager_t973619992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginManager::.cctor()
extern "C"  void LoginManager__cctor_m3427618314 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoginManager::get_IsLogin()
extern "C"  bool LoginManager_get_IsLogin_m2776291283 (LoginManager_t973619992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginManager::set_IsLogin(System.Boolean)
extern "C"  void LoginManager_set_IsLogin_m415815704 (LoginManager_t973619992 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoginManager::ValidateAccount(System.String,System.String)
extern "C"  bool LoginManager_ValidateAccount_m2426122382 (LoginManager_t973619992 * __this, String_t* ___account0, String_t* ___password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoginManager::Login(System.String,System.String)
extern "C"  bool LoginManager_Login_m151756034 (LoginManager_t973619992 * __this, String_t* ___account0, String_t* ___password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
