#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigInfoCollection
struct ConfigInfoCollection_t1464;
// System.Collections.ICollection
struct ICollection_t793;
// System.Configuration.ConfigInfo
struct ConfigInfo_t1402;
// System.String
struct String_t;

// System.Void System.Configuration.ConfigInfoCollection::.ctor()
extern "C" void ConfigInfoCollection__ctor_m6851 (ConfigInfoCollection_t1464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Configuration.ConfigInfoCollection::get_AllKeys()
extern "C" Object_t * ConfigInfoCollection_get_AllKeys_m6852 (ConfigInfoCollection_t1464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigInfo System.Configuration.ConfigInfoCollection::get_Item(System.String)
extern "C" ConfigInfo_t1402 * ConfigInfoCollection_get_Item_m6853 (ConfigInfoCollection_t1464 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfoCollection::set_Item(System.String,System.Configuration.ConfigInfo)
extern "C" void ConfigInfoCollection_set_Item_m6854 (ConfigInfoCollection_t1464 * __this, String_t* ___name, ConfigInfo_t1402 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfoCollection::Add(System.String,System.Configuration.ConfigInfo)
extern "C" void ConfigInfoCollection_Add_m6855 (ConfigInfoCollection_t1464 * __this, String_t* ___name, ConfigInfo_t1402 * ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfoCollection::Clear()
extern "C" void ConfigInfoCollection_Clear_m6856 (ConfigInfoCollection_t1464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfoCollection::Remove(System.String)
extern "C" void ConfigInfoCollection_Remove_m6857 (ConfigInfoCollection_t1464 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
