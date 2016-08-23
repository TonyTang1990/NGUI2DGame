#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LoginManager
struct LoginManager_t282;
// System.String
struct String_t;

// System.Void LoginManager::.ctor()
extern "C" void LoginManager__ctor_m1219 (LoginManager_t282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginManager::.cctor()
extern "C" void LoginManager__cctor_m1220 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoginManager::get_IsLogin()
extern "C" bool LoginManager_get_IsLogin_m1221 (LoginManager_t282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginManager::set_IsLogin(System.Boolean)
extern "C" void LoginManager_set_IsLogin_m1222 (LoginManager_t282 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoginManager::ValidateAccount(System.String,System.String)
extern "C" bool LoginManager_ValidateAccount_m1223 (LoginManager_t282 * __this, String_t* ___account, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoginManager::Login(System.String,System.String)
extern "C" bool LoginManager_Login_m1224 (LoginManager_t282 * __this, String_t* ___account, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
