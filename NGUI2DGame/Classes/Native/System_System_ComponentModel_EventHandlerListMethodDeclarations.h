#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.EventHandlerList
struct EventHandlerList_t896;
// System.Delegate
struct Delegate_t314;
// System.Object
struct Object_t;
// System.ComponentModel.ListEntry
struct ListEntry_t1906;

// System.Void System.ComponentModel.EventHandlerList::.ctor()
extern "C" void EventHandlerList__ctor_m4968 (EventHandlerList_t896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.ComponentModel.EventHandlerList::get_Item(System.Object)
extern "C" Delegate_t314 * EventHandlerList_get_Item_m4971 (EventHandlerList_t896 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EventHandlerList::AddHandler(System.Object,System.Delegate)
extern "C" void EventHandlerList_AddHandler_m4969 (EventHandlerList_t896 * __this, Object_t * ___key, Delegate_t314 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EventHandlerList::RemoveHandler(System.Object,System.Delegate)
extern "C" void EventHandlerList_RemoveHandler_m4970 (EventHandlerList_t896 * __this, Object_t * ___key, Delegate_t314 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EventHandlerList::Dispose()
extern "C" void EventHandlerList_Dispose_m10559 (EventHandlerList_t896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ListEntry System.ComponentModel.EventHandlerList::FindEntry(System.Object)
extern "C" ListEntry_t1906 * EventHandlerList_FindEntry_m10560 (EventHandlerList_t896 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
