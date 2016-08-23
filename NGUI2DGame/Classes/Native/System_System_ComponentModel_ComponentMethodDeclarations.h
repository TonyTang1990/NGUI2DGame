#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.Component
struct Component_t990;
// System.ComponentModel.ISite
struct ISite_t934;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t896;
// System.EventHandler
struct EventHandler_t1926;
// System.String
struct String_t;

// System.Void System.ComponentModel.Component::add_Disposed(System.EventHandler)
extern "C" void Component_add_Disposed_m5433 (Component_t990 * __this, EventHandler_t1926 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::remove_Disposed(System.EventHandler)
extern "C" void Component_remove_Disposed_m5434 (Component_t990 * __this, EventHandler_t1926 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ISite System.ComponentModel.Component::get_Site()
extern "C" Object_t * Component_get_Site_m5435 (Component_t990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventHandlerList System.ComponentModel.Component::get_Events()
extern "C" EventHandlerList_t896 * Component_get_Events_m10461 (Component_t990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::Finalize()
extern "C" void Component_Finalize_m5430 (Component_t990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::Dispose()
extern "C" void Component_Dispose_m5432 (Component_t990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::Dispose(System.Boolean)
extern "C" void Component_Dispose_m5436 (Component_t990 * __this, bool ___release_all, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Component::ToString()
extern "C" String_t* Component_ToString_m5431 (Component_t990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
