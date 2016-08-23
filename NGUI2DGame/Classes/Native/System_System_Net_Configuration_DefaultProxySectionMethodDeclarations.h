#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Configuration.DefaultProxySection
struct DefaultProxySection_t1984;
// System.Net.Configuration.BypassElementCollection
struct BypassElementCollection_t1977;
// System.Net.Configuration.ModuleElement
struct ModuleElement_t1990;
// System.Net.Configuration.ProxyElement
struct ProxyElement_t1997;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1412;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1416;

// System.Void System.Net.Configuration.DefaultProxySection::.ctor()
extern "C" void DefaultProxySection__ctor_m10989 (DefaultProxySection_t1984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.DefaultProxySection::.cctor()
extern "C" void DefaultProxySection__cctor_m10990 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.BypassElementCollection System.Net.Configuration.DefaultProxySection::get_BypassList()
extern "C" BypassElementCollection_t1977 * DefaultProxySection_get_BypassList_m10991 (DefaultProxySection_t1984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Configuration.DefaultProxySection::get_Enabled()
extern "C" bool DefaultProxySection_get_Enabled_m10992 (DefaultProxySection_t1984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.DefaultProxySection::set_Enabled(System.Boolean)
extern "C" void DefaultProxySection_set_Enabled_m10993 (DefaultProxySection_t1984 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.ModuleElement System.Net.Configuration.DefaultProxySection::get_Module()
extern "C" ModuleElement_t1990 * DefaultProxySection_get_Module_m10994 (DefaultProxySection_t1984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.ProxyElement System.Net.Configuration.DefaultProxySection::get_Proxy()
extern "C" ProxyElement_t1997 * DefaultProxySection_get_Proxy_m10995 (DefaultProxySection_t1984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Configuration.DefaultProxySection::get_UseDefaultCredentials()
extern "C" bool DefaultProxySection_get_UseDefaultCredentials_m10996 (DefaultProxySection_t1984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.DefaultProxySection::set_UseDefaultCredentials(System.Boolean)
extern "C" void DefaultProxySection_set_UseDefaultCredentials_m10997 (DefaultProxySection_t1984 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.DefaultProxySection::get_Properties()
extern "C" ConfigurationPropertyCollection_t1412 * DefaultProxySection_get_Properties_m10998 (DefaultProxySection_t1984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.DefaultProxySection::PostDeserialize()
extern "C" void DefaultProxySection_PostDeserialize_m10999 (DefaultProxySection_t1984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.DefaultProxySection::Reset(System.Configuration.ConfigurationElement)
extern "C" void DefaultProxySection_Reset_m11000 (DefaultProxySection_t1984 * __this, ConfigurationElement_t1416 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
