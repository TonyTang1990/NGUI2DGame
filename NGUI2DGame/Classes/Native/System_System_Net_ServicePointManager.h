#pragma once
#include <stdint.h>
// System.Collections.Specialized.HybridDictionary
struct HybridDictionary_t1740;
// System.Net.ICertificatePolicy
struct ICertificatePolicy_t1381;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t1377;
// System.Net.Configuration.ConnectionManagementData
struct ConnectionManagementData_t1981;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.SecurityProtocolType
#include "System_System_Net_SecurityProtocolType.h"
// System.Net.ServicePointManager
struct  ServicePointManager_t1369  : public Object_t
{
};
struct ServicePointManager_t1369_StaticFields{
	// System.Collections.Specialized.HybridDictionary System.Net.ServicePointManager::servicePoints
	HybridDictionary_t1740 * ___servicePoints_0;
	// System.Net.ICertificatePolicy System.Net.ServicePointManager::policy
	Object_t * ___policy_1;
	// System.Int32 System.Net.ServicePointManager::defaultConnectionLimit
	int32_t ___defaultConnectionLimit_2;
	// System.Int32 System.Net.ServicePointManager::maxServicePointIdleTime
	int32_t ___maxServicePointIdleTime_3;
	// System.Int32 System.Net.ServicePointManager::maxServicePoints
	int32_t ___maxServicePoints_4;
	// System.Boolean System.Net.ServicePointManager::_checkCRL
	bool ____checkCRL_5;
	// System.Net.SecurityProtocolType System.Net.ServicePointManager::_securityProtocol
	int32_t ____securityProtocol_6;
	// System.Boolean System.Net.ServicePointManager::expectContinue
	bool ___expectContinue_7;
	// System.Boolean System.Net.ServicePointManager::useNagle
	bool ___useNagle_8;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.ServicePointManager::server_cert_cb
	RemoteCertificateValidationCallback_t1377 * ___server_cert_cb_9;
	// System.Net.Configuration.ConnectionManagementData System.Net.ServicePointManager::manager
	ConnectionManagementData_t1981 * ___manager_10;
};
