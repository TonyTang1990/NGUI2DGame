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

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 80 classes
	//0. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//1. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//2. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//3. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//4. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//5. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//6. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//7. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//8. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//9. TrailRenderer
	void RegisterClass_TrailRenderer();
	RegisterClass_TrailRenderer();

	//10. LineRenderer
	void RegisterClass_LineRenderer();
	RegisterClass_LineRenderer();

	//11. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//12. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//13. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//14. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//15. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//16. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//17. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//18. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//19. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//20. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//21. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//22. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//23. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//24. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//25. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//26. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//27. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//28. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//29. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//30. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//31. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//32. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//33. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//34. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//35. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//36. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//37. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//38. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//39. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//40. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//41. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//42. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//43. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//44. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//45. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//46. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//47. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//48. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//49. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//50. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//51. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//52. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//53. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//54. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//55. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//56. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//57. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//58. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//59. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//60. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//61. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//62. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//63. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//64. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//65. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//66. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//67. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//68. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//69. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//70. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//71. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//72. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//73. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//74. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//75. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//76. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//77. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//78. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//79. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
