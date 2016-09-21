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

// EventManager
struct EventManager_t2792515701;
// System.String
struct String_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t3438463199;
// UnityEngine.Events.UnityAction`1<UnityEngine.GameObject>
struct UnityAction_1_t3123118898;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Events_UnityAction4025899511.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void EventManager::.ctor()
extern "C"  void EventManager__ctor_m993597962 (EventManager_t2792515701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::.cctor()
extern "C"  void EventManager__cctor_m3658833159 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::Awake()
extern "C"  void EventManager_Awake_m1625449589 (EventManager_t2792515701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::Init()
extern "C"  void EventManager_Init_m1005927286 (EventManager_t2792515701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::StartListening(System.String,UnityEngine.Events.UnityAction)
extern "C"  void EventManager_StartListening_m58587976 (EventManager_t2792515701 * __this, String_t* ___eventname0, UnityAction_t4025899511 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::StopListening(System.String,UnityEngine.Events.UnityAction)
extern "C"  void EventManager_StopListening_m3432789178 (EventManager_t2792515701 * __this, String_t* ___eventname0, UnityAction_t4025899511 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::StartListening(System.String,UnityEngine.Events.UnityAction`1<System.Int32>)
extern "C"  void EventManager_StartListening_m2808758736 (EventManager_t2792515701 * __this, String_t* ___eventname0, UnityAction_1_t3438463199 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::StopListening(System.String,UnityEngine.Events.UnityAction`1<System.Int32>)
extern "C"  void EventManager_StopListening_m1400682426 (EventManager_t2792515701 * __this, String_t* ___eventname0, UnityAction_1_t3438463199 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::StartListening(System.String,UnityEngine.Events.UnityAction`1<UnityEngine.GameObject>)
extern "C"  void EventManager_StartListening_m4013829963 (EventManager_t2792515701 * __this, String_t* ___eventname0, UnityAction_1_t3123118898 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::StopListening(System.String,UnityEngine.Events.UnityAction`1<UnityEngine.GameObject>)
extern "C"  void EventManager_StopListening_m255527603 (EventManager_t2792515701 * __this, String_t* ___eventname0, UnityAction_1_t3123118898 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventManager::HasListening(System.String)
extern "C"  bool EventManager_HasListening_m1992590421 (EventManager_t2792515701 * __this, String_t* ___eventname0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::TriggerEvent(System.String,System.Int32,UnityEngine.GameObject)
extern "C"  void EventManager_TriggerEvent_m4178971215 (EventManager_t2792515701 * __this, String_t* ___eventname0, int32_t ___p1, GameObject_t1756533147 * ___go2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
