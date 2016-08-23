#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UpdateManager
struct UpdateManager_t74;
// UpdateManager/UpdateEntry
struct UpdateEntry_t68;
// System.Collections.Generic.List`1<UpdateManager/UpdateEntry>
struct List_1_t76;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3;
// UpdateManager/OnUpdate
struct OnUpdate_t67;
// UnityEngine.Object
struct Object_t69;
struct Object_t69_marshaled;

// System.Void UpdateManager::.ctor()
extern "C" void UpdateManager__ctor_m132 (UpdateManager_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UpdateManager::Compare(UpdateManager/UpdateEntry,UpdateManager/UpdateEntry)
extern "C" int32_t UpdateManager_Compare_m133 (Object_t * __this /* static, unused */, UpdateEntry_t68 * ___a, UpdateEntry_t68 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::CreateInstance()
extern "C" void UpdateManager_CreateInstance_m134 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::UpdateList(System.Collections.Generic.List`1<UpdateManager/UpdateEntry>,System.Single)
extern "C" void UpdateManager_UpdateList_m135 (UpdateManager_t74 * __this, List_1_t76 * ___list, float ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::Start()
extern "C" void UpdateManager_Start_m136 (UpdateManager_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::OnApplicationQuit()
extern "C" void UpdateManager_OnApplicationQuit_m137 (UpdateManager_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::Update()
extern "C" void UpdateManager_Update_m138 (UpdateManager_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::LateUpdate()
extern "C" void UpdateManager_LateUpdate_m139 (UpdateManager_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UpdateManager::CoroutineUpdate()
extern "C" bool UpdateManager_CoroutineUpdate_m140 (UpdateManager_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UpdateManager::CoroutineFunction()
extern "C" Object_t * UpdateManager_CoroutineFunction_m141 (UpdateManager_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::Add(UnityEngine.MonoBehaviour,System.Int32,UpdateManager/OnUpdate,System.Collections.Generic.List`1<UpdateManager/UpdateEntry>)
extern "C" void UpdateManager_Add_m142 (UpdateManager_t74 * __this, MonoBehaviour_t3 * ___mb, int32_t ___updateOrder, OnUpdate_t67 * ___func, List_1_t76 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::AddUpdate(UnityEngine.MonoBehaviour,System.Int32,UpdateManager/OnUpdate)
extern "C" void UpdateManager_AddUpdate_m143 (Object_t * __this /* static, unused */, MonoBehaviour_t3 * ___mb, int32_t ___updateOrder, OnUpdate_t67 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::AddLateUpdate(UnityEngine.MonoBehaviour,System.Int32,UpdateManager/OnUpdate)
extern "C" void UpdateManager_AddLateUpdate_m144 (Object_t * __this /* static, unused */, MonoBehaviour_t3 * ___mb, int32_t ___updateOrder, OnUpdate_t67 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::AddCoroutine(UnityEngine.MonoBehaviour,System.Int32,UpdateManager/OnUpdate)
extern "C" void UpdateManager_AddCoroutine_m145 (Object_t * __this /* static, unused */, MonoBehaviour_t3 * ___mb, int32_t ___updateOrder, OnUpdate_t67 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::AddDestroy(UnityEngine.Object,System.Single)
extern "C" void UpdateManager_AddDestroy_m146 (Object_t * __this /* static, unused */, Object_t69 * ___obj, float ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
