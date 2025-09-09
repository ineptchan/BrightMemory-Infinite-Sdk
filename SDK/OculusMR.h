
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: HeadMountedDisplay
/// dependency: OculusHMD

#pragma pack(push, 0x1)

/// Enum /Script/OculusMR.EOculusMR_CompositionMethod
/// Size: 0x01 (1 bytes)
enum class EOculusMR_CompositionMethod : uint8_t
{
	EOculusMR_CompositionMethod__ExternalComposition                                 = 0,
	EOculusMR_CompositionMethod__DirectComposition                                   = 1
};

/// Enum /Script/OculusMR.EOculusMR_PostProcessEffects
/// Size: 0x01 (1 bytes)
enum class EOculusMR_PostProcessEffects : uint8_t
{
	EOculusMR_PostProcessEffects__PPE_Off                                            = 0,
	EOculusMR_PostProcessEffects__PPE_On                                             = 1
};

/// Enum /Script/OculusMR.EOculusMR_ClippingReference
/// Size: 0x01 (1 bytes)
enum class EOculusMR_ClippingReference : uint8_t
{
	EOculusMR_ClippingReference__CR_TrackingReference                                = 0,
	EOculusMR_ClippingReference__CR_Head                                             = 1
};

/// Enum /Script/OculusMR.EOculusMR_CameraDeviceEnum
/// Size: 0x01 (1 bytes)
enum class EOculusMR_CameraDeviceEnum : uint8_t
{
	EOculusMR_CameraDeviceEnum__CD_None                                              = 0,
	EOculusMR_CameraDeviceEnum__CD_WebCamera0                                        = 1,
	EOculusMR_CameraDeviceEnum__CD_WebCamera1                                        = 2
};

/// Class /Script/OculusMR.OculusMR_CastingCameraActor
/// Size: 0x0320 (800 bytes) (0x000238 - 0x000320) align 16 MaxSize: 0x0320
class AOculusMR_CastingCameraActor : public ASceneCapture2D
{ 
public:
	class UVRNotificationsComponent*                   VRNotificationComponent;                                    // 0x0238   (0x0008)  
	class UTexture2D*                                  CameraColorTexture;                                         // 0x0240   (0x0008)  
	class UTexture2D*                                  CameraDepthTexture;                                         // 0x0248   (0x0008)  
	class UOculusMR_PlaneMeshComponent*                PlaneMeshComponent;                                         // 0x0250   (0x0008)  
	class UMaterial*                                   ChromaKeyMaterial;                                          // 0x0258   (0x0008)  
	class UMaterial*                                   OpaqueColoredMaterial;                                      // 0x0260   (0x0008)  
	class UMaterialInstanceDynamic*                    ChromaKeyMaterialInstance;                                  // 0x0268   (0x0008)  
	class UMaterialInstanceDynamic*                    CameraFrameMaterialInstance;                                // 0x0270   (0x0008)  
	class UMaterialInstanceDynamic*                    BackdropMaterialInstance;                                   // 0x0278   (0x0008)  
	class UTexture2D*                                  DefaultTexture_White;                                       // 0x0280   (0x0008)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0288   (0x0050)  MISSED
	TArray<class UTextureRenderTarget2D*>              BackgroundRenderTargets;                                    // 0x02D8   (0x0010)  
	class ASceneCapture2D*                             ForegroundCaptureActor;                                     // 0x02E8   (0x0008)  
	TArray<class UTextureRenderTarget2D*>              ForegroundRenderTargets;                                    // 0x02F0   (0x0010)  
	TArray<double>                                     PoseTimes;                                                  // 0x0300   (0x0010)  
	class UOculusMR_Settings*                          MRSettings;                                                 // 0x0310   (0x0008)  
	class UOculusMR_State*                             MRState;                                                    // 0x0318   (0x0008)  
};

/// Class /Script/OculusMR.OculusMR_PlaneMeshComponent
/// Size: 0x0490 (1168 bytes) (0x000470 - 0x000490) align 16 MaxSize: 0x0490
class UOculusMR_PlaneMeshComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0470   (0x0020)  MISSED


	/// Functions
	// Function /Script/OculusMR.OculusMR_PlaneMeshComponent.SetCustomMeshTriangles
	// bool SetCustomMeshTriangles(TArray<FOculusMR_PlaneMeshTriangle>& Triangles);                                             // [0x10cbe00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OculusMR.OculusMR_PlaneMeshComponent.ClearCustomMeshTriangles
	// void ClearCustomMeshTriangles();                                                                                         // [0x10cbb30] Final|Native|Public|BlueprintCallable 
	// Function /Script/OculusMR.OculusMR_PlaneMeshComponent.AddCustomMeshTriangles
	// void AddCustomMeshTriangles(TArray<FOculusMR_PlaneMeshTriangle>& Triangles);                                             // [0x10cb9f0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OculusMR.OculusMR_Settings
/// Size: 0x0098 (152 bytes) (0x000028 - 0x000098) align 8 MaxSize: 0x0098
class UOculusMR_Settings : public UObject
{ 
public:
	EOculusMR_ClippingReference                        ClippingReference;                                          // 0x0028   (0x0001)  
	bool                                               bUseTrackedCameraResolution;                                // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x002A   (0x0002)  MISSED
	int32_t                                            WidthPerView;                                               // 0x002C   (0x0004)  
	int32_t                                            HeightPerView;                                              // 0x0030   (0x0004)  
	float                                              CastingLatency;                                             // 0x0034   (0x0004)  
	FColor                                             BackdropColor;                                              // 0x0038   (0x0004)  
	float                                              HandPoseStateLatency;                                       // 0x003C   (0x0004)  
	FColor                                             ChromaKeyColor;                                             // 0x0040   (0x0004)  
	float                                              ChromaKeySimilarity;                                        // 0x0044   (0x0004)  
	float                                              ChromaKeySmoothRange;                                       // 0x0048   (0x0004)  
	float                                              ChromaKeySpillRange;                                        // 0x004C   (0x0004)  
	EOculusMR_PostProcessEffects                       ExternalCompositionPostProcessEffects;                      // 0x0050   (0x0001)  
	bool                                               bIsCasting;                                                 // 0x0051   (0x0001)  
	EOculusMR_CompositionMethod                        CompositionMethod;                                          // 0x0052   (0x0001)  
	EOculusMR_CameraDeviceEnum                         CapturingCamera;                                            // 0x0053   (0x0001)  
	unsigned char                                      UnknownData01_7[0x44];                                      // 0x0054   (0x0044)  MISSED


	/// Functions
	// Function /Script/OculusMR.OculusMR_Settings.SetIsCasting
	// void SetIsCasting(bool Val);                                                                                             // [0x10cbec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OculusMR.OculusMR_Settings.SetCompositionMethod
	// void SetCompositionMethod(EOculusMR_CompositionMethod Val);                                                              // [0x10cbd80] Final|Native|Public|BlueprintCallable 
	// Function /Script/OculusMR.OculusMR_Settings.SetCapturingCamera
	// void SetCapturingCamera(EOculusMR_CameraDeviceEnum Val);                                                                 // [0x10cbd00] Final|Native|Public|BlueprintCallable 
	// Function /Script/OculusMR.OculusMR_Settings.SaveToIni
	// void SaveToIni();                                                                                                        // [0x10cbce0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/OculusMR.OculusMR_Settings.LoadFromIni
	// void LoadFromIni();                                                                                                      // [0x10cbcc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OculusMR.OculusMR_Settings.GetIsCasting
	// bool GetIsCasting();                                                                                                     // [0x10cbbb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OculusMR.OculusMR_Settings.GetCompositionMethod
	// EOculusMR_CompositionMethod GetCompositionMethod();                                                                      // [0x10cbb90] Final|Native|Public|BlueprintCallable 
	// Function /Script/OculusMR.OculusMR_Settings.GetCapturingCamera
	// EOculusMR_CameraDeviceEnum GetCapturingCamera();                                                                         // [0x10cbb70] Final|Native|Public|BlueprintCallable 
	// Function /Script/OculusMR.OculusMR_Settings.GetBindToTrackedCameraIndex
	// int32_t GetBindToTrackedCameraIndex();                                                                                   // [0x10cbb50] Final|Native|Public|BlueprintCallable 
	// Function /Script/OculusMR.OculusMR_Settings.BindToTrackedCameraIndexIfAvailable
	// void BindToTrackedCameraIndexIfAvailable(int32_t InTrackedCameraIndex);                                                  // [0x10cbaa0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/OculusMR.TrackedCamera
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FTrackedCamera
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            Name;                                                       // 0x0008   (0x0010)  
	double                                             UpdateTime;                                                 // 0x0018   (0x0008)  
	float                                              FieldOfView;                                                // 0x0020   (0x0004)  
	int32_t                                            SizeX;                                                      // 0x0024   (0x0004)  
	int32_t                                            SizeY;                                                      // 0x0028   (0x0004)  
	ETrackedDeviceType                                 AttachedTrackedDevice;                                      // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x002D   (0x0003)  MISSED
	FRotator                                           CalibratedRotation;                                         // 0x0030   (0x000C)  
	FVector                                            CalibratedOffset;                                           // 0x003C   (0x000C)  
	FRotator                                           UserRotation;                                               // 0x0048   (0x000C)  
	FVector                                            UserOffset;                                                 // 0x0054   (0x000C)  
	FRotator                                           RawRotation;                                                // 0x0060   (0x000C)  
	FVector                                            RawOffset;                                                  // 0x006C   (0x000C)  
};

/// Class /Script/OculusMR.OculusMR_State
/// Size: 0x00B8 (184 bytes) (0x000028 - 0x0000B8) align 8 MaxSize: 0x00B8
class UOculusMR_State : public UObject
{ 
public:
	FTrackedCamera                                     TrackedCamera;                                              // 0x0028   (0x0078)  
	class USceneComponent*                             TrackingReferenceComponent;                                 // 0x00A0   (0x0008)  
	double                                             ScalingFactor;                                              // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00B0   (0x0004)  MISSED
	bool                                               ChangeCameraStateRequested;                                 // 0x00B4   (0x0001)  
	bool                                               BindToTrackedCameraIndexRequested;                          // 0x00B5   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2];                                       // 0x00B6   (0x0002)  MISSED
};

/// Class /Script/OculusMR.OculusMRFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOculusMRFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/OculusMR.OculusMRFunctionLibrary.SetTrackingReferenceComponent
	// bool SetTrackingReferenceComponent(class USceneComponent* Component);                                                    // [0x10cbfd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusMR.OculusMRFunctionLibrary.SetMrcScalingFactor
	// bool SetMrcScalingFactor(float ScalingFactor);                                                                           // [0x10cbf50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusMR.OculusMRFunctionLibrary.IsMrcEnabled
	// bool IsMrcEnabled();                                                                                                     // [0x10cbc90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusMR.OculusMRFunctionLibrary.IsMrcActive
	// bool IsMrcActive();                                                                                                      // [0x10cbc60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusMR.OculusMRFunctionLibrary.GetTrackingReferenceComponent
	// class USceneComponent* GetTrackingReferenceComponent();                                                                  // [0x10cbc30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusMR.OculusMRFunctionLibrary.GetOculusMRSettings
	// class UOculusMR_Settings* GetOculusMRSettings();                                                                         // [0x10cbc00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusMR.OculusMRFunctionLibrary.GetMrcScalingFactor
	// float GetMrcScalingFactor();                                                                                             // [0x10cbbd0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OculusMR.OculusMR_PlaneMeshTriangle
/// Size: 0x003C (60 bytes) (0x000000 - 0x00003C) align 4 MaxSize: 0x003C
struct FOculusMR_PlaneMeshTriangle
{ 
	FVector                                            Vertex0;                                                    // 0x0000   (0x000C)  
	FVector2D                                          UV0;                                                        // 0x000C   (0x0008)  
	FVector                                            Vertex1;                                                    // 0x0014   (0x000C)  
	FVector2D                                          UV1;                                                        // 0x0020   (0x0008)  
	FVector                                            Vertex2;                                                    // 0x0028   (0x000C)  
	FVector2D                                          UV2;                                                        // 0x0034   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(AOculusMR_CastingCameraActor) == 0x0320); // 800 bytes (0x000238 - 0x000320)
static_assert(sizeof(UOculusMR_PlaneMeshComponent) == 0x0490); // 1168 bytes (0x000470 - 0x000490)
static_assert(sizeof(UOculusMR_Settings) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(FTrackedCamera) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(UOculusMR_State) == 0x00B8); // 184 bytes (0x000028 - 0x0000B8)
static_assert(sizeof(UOculusMRFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FOculusMR_PlaneMeshTriangle) == 0x003C); // 60 bytes (0x000000 - 0x00003C)
static_assert(offsetof(AOculusMR_CastingCameraActor, VRNotificationComponent) == 0x0238);
static_assert(offsetof(AOculusMR_CastingCameraActor, CameraColorTexture) == 0x0240);
static_assert(offsetof(AOculusMR_CastingCameraActor, CameraDepthTexture) == 0x0248);
static_assert(offsetof(AOculusMR_CastingCameraActor, PlaneMeshComponent) == 0x0250);
static_assert(offsetof(AOculusMR_CastingCameraActor, ChromaKeyMaterial) == 0x0258);
static_assert(offsetof(AOculusMR_CastingCameraActor, OpaqueColoredMaterial) == 0x0260);
static_assert(offsetof(AOculusMR_CastingCameraActor, ChromaKeyMaterialInstance) == 0x0268);
static_assert(offsetof(AOculusMR_CastingCameraActor, CameraFrameMaterialInstance) == 0x0270);
static_assert(offsetof(AOculusMR_CastingCameraActor, BackdropMaterialInstance) == 0x0278);
static_assert(offsetof(AOculusMR_CastingCameraActor, DefaultTexture_White) == 0x0280);
static_assert(offsetof(AOculusMR_CastingCameraActor, BackgroundRenderTargets) == 0x02D8);
static_assert(offsetof(AOculusMR_CastingCameraActor, ForegroundCaptureActor) == 0x02E8);
static_assert(offsetof(AOculusMR_CastingCameraActor, ForegroundRenderTargets) == 0x02F0);
static_assert(offsetof(AOculusMR_CastingCameraActor, PoseTimes) == 0x0300);
static_assert(offsetof(AOculusMR_CastingCameraActor, MRSettings) == 0x0310);
static_assert(offsetof(AOculusMR_CastingCameraActor, MRState) == 0x0318);
static_assert(offsetof(UOculusMR_Settings, ClippingReference) == 0x0028);
static_assert(offsetof(UOculusMR_Settings, BackdropColor) == 0x0038);
static_assert(offsetof(UOculusMR_Settings, ChromaKeyColor) == 0x0040);
static_assert(offsetof(UOculusMR_Settings, ExternalCompositionPostProcessEffects) == 0x0050);
static_assert(offsetof(UOculusMR_Settings, CompositionMethod) == 0x0052);
static_assert(offsetof(UOculusMR_Settings, CapturingCamera) == 0x0053);
static_assert(offsetof(FTrackedCamera, Name) == 0x0008);
static_assert(offsetof(FTrackedCamera, AttachedTrackedDevice) == 0x002C);
static_assert(offsetof(FTrackedCamera, CalibratedRotation) == 0x0030);
static_assert(offsetof(FTrackedCamera, CalibratedOffset) == 0x003C);
static_assert(offsetof(FTrackedCamera, UserRotation) == 0x0048);
static_assert(offsetof(FTrackedCamera, UserOffset) == 0x0054);
static_assert(offsetof(FTrackedCamera, RawRotation) == 0x0060);
static_assert(offsetof(FTrackedCamera, RawOffset) == 0x006C);
static_assert(offsetof(UOculusMR_State, TrackedCamera) == 0x0028);
static_assert(offsetof(UOculusMR_State, TrackingReferenceComponent) == 0x00A0);
static_assert(offsetof(FOculusMR_PlaneMeshTriangle, Vertex0) == 0x0000);
static_assert(offsetof(FOculusMR_PlaneMeshTriangle, UV0) == 0x000C);
static_assert(offsetof(FOculusMR_PlaneMeshTriangle, Vertex1) == 0x0014);
static_assert(offsetof(FOculusMR_PlaneMeshTriangle, UV1) == 0x0020);
static_assert(offsetof(FOculusMR_PlaneMeshTriangle, Vertex2) == 0x0028);
static_assert(offsetof(FOculusMR_PlaneMeshTriangle, UV2) == 0x0034);
