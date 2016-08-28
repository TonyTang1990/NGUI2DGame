struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 77 classes
	//0. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//1. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//2. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//3. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//4. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//5. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//6. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//7. TrailRenderer
	void RegisterClass_TrailRenderer();
	RegisterClass_TrailRenderer();

	//8. LineRenderer
	void RegisterClass_LineRenderer();
	RegisterClass_LineRenderer();

	//9. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//10. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//11. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//12. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//13. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//14. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//15. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//16. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//17. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//18. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//19. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//20. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//21. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//22. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//23. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//24. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//25. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//26. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//27. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//28. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//29. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//30. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//31. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//32. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//33. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//34. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//35. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//36. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//37. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//38. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//39. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//40. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//41. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//42. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//43. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//44. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//45. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//46. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//47. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//48. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//49. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//50. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//51. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//52. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//53. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//54. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//55. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//56. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//57. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//58. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//59. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//60. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//61. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//62. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//63. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//64. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//65. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//66. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//67. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//68. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//69. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//70. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//71. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//72. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//73. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//74. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//75. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//76. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
