#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameConfigurationManager/Account
struct Account_t268;
// System.String
struct String_t;

// System.Void GameConfigurationManager/Account::.ctor()
extern "C" void Account__ctor_m1146 (Account_t268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameConfigurationManager/Account::.ctor(System.String,System.String)
extern "C" void Account__ctor_m1147 (Account_t268 * __this, String_t* ___account, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameConfigurationManager/Account::get_AccountName()
extern "C" String_t* Account_get_AccountName_m1148 (Account_t268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameConfigurationManager/Account::set_AccountName(System.String)
extern "C" void Account_set_AccountName_m1149 (Account_t268 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameConfigurationManager/Account::get_Password()
extern "C" String_t* Account_get_Password_m1150 (Account_t268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameConfigurationManager/Account::set_Password(System.String)
extern "C" void Account_set_Password_m1151 (Account_t268 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
