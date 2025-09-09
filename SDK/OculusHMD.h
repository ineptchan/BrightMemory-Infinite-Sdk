
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/OculusHMD.EOculusDeviceType
/// Size: 0x01 (1 bytes)
enum class EOculusDeviceType : uint8_t
{
	EOculusDeviceType__OculusMobile_Deprecated0                                      = 0,
	EOculusDeviceType__OculusQuest                                                   = 1,
	EOculusDeviceType__OculusQuest2                                                  = 2,
	EOculusDeviceType__Rift                                                          = 100,
	EOculusDeviceType__Rift_S                                                        = 101,
	EOculusDeviceType__Quest_Link                                                    = 102,
	EOculusDeviceType__OculusUnknown                                                 = 200
};

/// Enum /Script/OculusHMD.EHandTrackingSupport
/// Size: 0x01 (1 bytes)
enum class EHandTrackingSupport : uint8_t
{
	EHandTrackingSupport__ControllersOnly                                            = 0,
	EHandTrackingSupport__ControllersAndHands                                        = 1,
	EHandTrackingSupport__HandsOnly                                                  = 2
};

/// Enum /Script/OculusHMD.EColorSpace
/// Size: 0x01 (1 bytes)
enum class EColorSpace : uint8_t
{
	EColorSpace__Unknown                                                             = 0,
	EColorSpace__Unmanaged                                                           = 1,
	EColorSpace__Rec                                                                 = 2,
	EColorSpace__Rec4                                                                = 3,
	EColorSpace__Rift_CV1                                                            = 4,
	EColorSpace__Rift_S                                                              = 5,
	EColorSpace__Quest                                                               = 6,
	EColorSpace__P3                                                                  = 7,
	EColorSpace__Adobe_RGB                                                           = 8
};

/// Enum /Script/OculusHMD.EBoundaryType
/// Size: 0x01 (1 bytes)
enum class EBoundaryType : uint8_t
{
	EBoundaryType__Boundary_Outer                                                    = 0,
	EBoundaryType__Boundary_PlayArea                                                 = 1
};

/// Enum /Script/OculusHMD.EFixedFoveatedRenderingLevel
/// Size: 0x01 (1 bytes)
enum class EFixedFoveatedRenderingLevel : uint8_t
{
	EFixedFoveatedRenderingLevel__FFR_Off                                            = 0,
	EFixedFoveatedRenderingLevel__FFR_Low                                            = 1,
	EFixedFoveatedRenderingLevel__FFR_Medium                                         = 2,
	EFixedFoveatedRenderingLevel__FFR_High                                           = 3,
	EFixedFoveatedRenderingLevel__FFR_HighTop                                        = 4
};

/// Enum /Script/OculusHMD.ETrackedDeviceType
/// Size: 0x01 (1 bytes)
enum class ETrackedDeviceType : uint8_t
{
	ETrackedDeviceType__None                                                         = 0,
	ETrackedDeviceType__HMD                                                          = 1,
	ETrackedDeviceType__LTouch                                                       = 2,
	ETrackedDeviceType__RTouch                                                       = 3,
	ETrackedDeviceType__Touch                                                        = 4,
	ETrackedDeviceType__DeviceObjectZero                                             = 5,
	ETrackedDeviceType__All                                                          = 6
};

/// Class /Script/OculusHMD.OculusFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOculusFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/OculusHMD.OculusFunctionLibrary.SetReorientHMDOnControllerRecenter
	// void SetReorientHMDOnControllerRecenter(bool recenterMode);                                                              // [0x10b4d70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.SetPositionScale3D
	// void SetPositionScale3D(FVector PosScale3D);                                                                             // [0x10b4d10] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.SetGuardianVisibility
	// void SetGuardianVisibility(bool GuardianVisible);                                                                        // [0x10b4c90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.SetFixedFoveatedRenderingLevel
	// void SetFixedFoveatedRenderingLevel(EFixedFoveatedRenderingLevel Level, bool isDynamic);                                 // [0x10b4bd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.SetDisplayFrequency
	// void SetDisplayFrequency(float RequestedFrequency);                                                                      // [0x10b4b60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.SetCPUAndGPULevels
	// void SetCPUAndGPULevels(int32_t CPULevel, int32_t GPULevel);                                                             // [0x10b4920] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.SetColorScaleAndOffset
	// void SetColorScaleAndOffset(FLinearColor ColorScale, FLinearColor ColorOffset, bool bApplyToAllLayers);                  // [0x10b4a50] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.SetClientColorDesc
	// void SetClientColorDesc(EColorSpace ColorSpace);                                                                         // [0x10b49e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.SetBaseRotationAndPositionOffset
	// void SetBaseRotationAndPositionOffset(FRotator BaseRot, FVector PosOffset, TEnumAsByte<EOrientPositionSelector> Options); // [0x10b4800] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.SetBaseRotationAndBaseOffsetInMeters
	// void SetBaseRotationAndBaseOffsetInMeters(FRotator Rotation, FVector BaseOffsetInMeters, TEnumAsByte<EOrientPositionSelector> Options); // [0x10b46e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.IsGuardianDisplayed
	// bool IsGuardianDisplayed();                                                                                              // [0x10b46b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.IsGuardianConfigured
	// bool IsGuardianConfigured();                                                                                             // [0x10b4680] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.IsDeviceTracked
	// bool IsDeviceTracked(ETrackedDeviceType DeviceType);                                                                     // [0x10b4600] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.HasSystemOverlayPresent
	// bool HasSystemOverlayPresent();                                                                                          // [0x10b45d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.HasInputFocus
	// bool HasInputFocus();                                                                                                    // [0x10b45a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetUserProfile
	// bool GetUserProfile(FHmdUserProfile& Profile);                                                                           // [0x10b4470] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetSystemHmd3DofModeEnabled
	// bool GetSystemHmd3DofModeEnabled();                                                                                      // [0x10b4440] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetRawSensorData
	// void GetRawSensorData(FVector& AngularAcceleration, FVector& LinearAcceleration, FVector& AngularVelocity, FVector& LinearVelocity, float& TimeInSeconds, ETrackedDeviceType DeviceType); // [0x10b4210] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetPose
	// void GetPose(FRotator& DeviceRotation, FVector& DevicePosition, FVector& NeckPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, FVector PositionScale); // [0x10b4000] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetPointGuardianIntersection
	// FGuardianTestResult GetPointGuardianIntersection(FVector Point, EBoundaryType BoundaryType);                             // [0x10b3f20] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetPlayAreaTransform
	// FTransform GetPlayAreaTransform();                                                                                       // [0x10b3ec0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetNodeGuardianIntersection
	// FGuardianTestResult GetNodeGuardianIntersection(ETrackedDeviceType DeviceType, EBoundaryType BoundaryType);              // [0x10b3de0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetHmdColorDesc
	// EColorSpace GetHmdColorDesc();                                                                                           // [0x10b3db0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetGuardianPoints
	// TArray<FVector> GetGuardianPoints(EBoundaryType BoundaryType, bool UsePawnSpace);                                        // [0x10b3ca0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetGuardianDimensions
	// FVector GetGuardianDimensions(EBoundaryType BoundaryType);                                                               // [0x10b3c10] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetGPUUtilization
	// void GetGPUUtilization(bool& IsGPUAvailable, float& GPUUtilization);                                                     // [0x10b3b30] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetGPUFrameTime
	// float GetGPUFrameTime();                                                                                                 // [0x10b3b00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetFixedFoveatedRenderingLevel
	// EFixedFoveatedRenderingLevel GetFixedFoveatedRenderingLevel();                                                           // [0x10b3ad0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetDeviceType
	// EOculusDeviceType GetDeviceType();                                                                                       // [0x10b3aa0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetDeviceName
	// FString GetDeviceName();                                                                                                 // [0x10b3a20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetCurrentDisplayFrequency
	// float GetCurrentDisplayFrequency();                                                                                      // [0x10b39f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetBaseRotationAndPositionOffset
	// void GetBaseRotationAndPositionOffset(FRotator& OutRot, FVector& OutPosOffset);                                          // [0x10b3920] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters
	// void GetBaseRotationAndBaseOffsetInMeters(FRotator& OutRotation, FVector& OutBaseOffsetInMeters);                        // [0x10b3850] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetAvailableDisplayFrequencies
	// TArray<float> GetAvailableDisplayFrequencies();                                                                          // [0x10b37d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.EnablePositionTracking
	// void EnablePositionTracking(bool bPositionTracking);                                                                     // [0x10b3750] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.EnableOrientationTracking
	// void EnableOrientationTracking(bool bOrientationTracking);                                                               // [0x10b36d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.ClearLoadingSplashScreens
	// void ClearLoadingSplashScreens();                                                                                        // [0x10b36b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.AddLoadingSplashScreen
	// void AddLoadingSplashScreen(class UTexture2D* Texture, FVector TranslationInMeters, FRotator Rotation, FVector2D SizeInMeters, FRotator DeltaRotation, bool bClearBeforeAdd); // [0x10b34b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/OculusHMD.OculusSplashDesc
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FOculusSplashDesc
{ 
	FSoftObjectPath                                    TexturePath;                                                // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         TransformInMeters;                                          // 0x0020   (0x0030)  
	FVector2D                                          QuadSizeInMeters;                                           // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0058   (0x0008)  MISSED
	FQuat                                              DeltaRotation;                                              // 0x0060   (0x0010)  
	FVector2D                                          TextureOffset;                                              // 0x0070   (0x0008)  
	FVector2D                                          TextureScale;                                               // 0x0078   (0x0008)  
	bool                                               bNoAlphaChannel;                                            // 0x0080   (0x0001)  
	unsigned char                                      UnknownData02_7[0x1F];                                      // 0x0081   (0x001F)  MISSED
};

/// Class /Script/OculusHMD.OculusHMDRuntimeSettings
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UOculusHMDRuntimeSettings : public UObject
{ 
public:
	bool                                               bAutoEnabled;                                               // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	TArray<FOculusSplashDesc>                          SplashDescs;                                                // 0x0030   (0x0010)  
	bool                                               bEnableSpecificColorGamut;                                  // 0x0040   (0x0001)  
	EColorSpace                                        ColorSpace;                                                 // 0x0041   (0x0001)  
	bool                                               bSupportsDash;                                              // 0x0042   (0x0001)  
	bool                                               bCompositesDepth;                                           // 0x0043   (0x0001)  
	bool                                               bHQDistortion;                                              // 0x0044   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0045   (0x0003)  MISSED
	float                                              PixelDensityMin;                                            // 0x0048   (0x0004)  
	float                                              PixelDensityMax;                                            // 0x004C   (0x0004)  
	int32_t                                            CPULevel;                                                   // 0x0050   (0x0004)  
	int32_t                                            GPULevel;                                                   // 0x0054   (0x0004)  
	EFixedFoveatedRenderingLevel                       FFRLevel;                                                   // 0x0058   (0x0001)  
	bool                                               FFRDynamic;                                                 // 0x0059   (0x0001)  
	bool                                               bChromaCorrection;                                          // 0x005A   (0x0001)  
	bool                                               bRecenterHMDWithController;                                 // 0x005B   (0x0001)  
	bool                                               bFocusAware;                                                // 0x005C   (0x0001)  
	bool                                               bRequiresSystemKeyboard;                                    // 0x005D   (0x0001)  
	EHandTrackingSupport                               HandTrackingSupport;                                        // 0x005E   (0x0001)  
	unsigned char                                      UnknownData02_7[0x1];                                       // 0x005F   (0x0001)  MISSED
};

/// Class /Script/OculusHMD.OculusResourceHolder
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UOculusResourceHolder : public UObject
{ 
public:
	class UMaterial*                                   PokeAHoleMaterial;                                          // 0x0028   (0x0008)  
};

/// Class /Script/OculusHMD.OculusSceneCaptureCubemap
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 16 MaxSize: 0x0090
class UOculusSceneCaptureCubemap : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
	TArray<class USceneCaptureComponent2D*>            CaptureComponents;                                          // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_7[0x48];                                      // 0x0048   (0x0048)  MISSED
};

/// Struct /Script/OculusHMD.GuardianTestResult
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FGuardianTestResult
{ 
	bool                                               IsTriggering;                                               // 0x0000   (0x0001)  
	ETrackedDeviceType                                 DeviceType;                                                 // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              ClosestDistance;                                            // 0x0004   (0x0004)  
	FVector                                            ClosestPoint;                                               // 0x0008   (0x000C)  
	FVector                                            ClosestPointNormal;                                         // 0x0014   (0x000C)  
};

/// Struct /Script/OculusHMD.HmdUserProfileField
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FHmdUserProfileField
{ 
	FString                                            FieldName;                                                  // 0x0000   (0x0010)  
	FString                                            FieldValue;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/OculusHMD.HmdUserProfile
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FHmdUserProfile
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            Gender;                                                     // 0x0010   (0x0010)  
	float                                              PlayerHeight;                                               // 0x0020   (0x0004)  
	float                                              EyeHeight;                                                  // 0x0024   (0x0004)  
	float                                              IPD;                                                        // 0x0028   (0x0004)  
	FVector2D                                          NeckToEyeDistance;                                          // 0x002C   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<FHmdUserProfileField>                       ExtraFields;                                                // 0x0038   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UOculusFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FOculusSplashDesc) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(UOculusHMDRuntimeSettings) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UOculusResourceHolder) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UOculusSceneCaptureCubemap) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(FGuardianTestResult) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FHmdUserProfileField) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FHmdUserProfile) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(offsetof(FOculusSplashDesc, TexturePath) == 0x0000);
static_assert(offsetof(FOculusSplashDesc, TransformInMeters) == 0x0020);
static_assert(offsetof(FOculusSplashDesc, QuadSizeInMeters) == 0x0050);
static_assert(offsetof(FOculusSplashDesc, DeltaRotation) == 0x0060);
static_assert(offsetof(FOculusSplashDesc, TextureOffset) == 0x0070);
static_assert(offsetof(FOculusSplashDesc, TextureScale) == 0x0078);
static_assert(offsetof(UOculusHMDRuntimeSettings, SplashDescs) == 0x0030);
static_assert(offsetof(UOculusHMDRuntimeSettings, ColorSpace) == 0x0041);
static_assert(offsetof(UOculusHMDRuntimeSettings, FFRLevel) == 0x0058);
static_assert(offsetof(UOculusHMDRuntimeSettings, HandTrackingSupport) == 0x005E);
static_assert(offsetof(UOculusResourceHolder, PokeAHoleMaterial) == 0x0028);
static_assert(offsetof(UOculusSceneCaptureCubemap, CaptureComponents) == 0x0038);
static_assert(offsetof(FGuardianTestResult, DeviceType) == 0x0001);
static_assert(offsetof(FGuardianTestResult, ClosestPoint) == 0x0008);
static_assert(offsetof(FGuardianTestResult, ClosestPointNormal) == 0x0014);
static_assert(offsetof(FHmdUserProfileField, FieldName) == 0x0000);
static_assert(offsetof(FHmdUserProfileField, FieldValue) == 0x0010);
static_assert(offsetof(FHmdUserProfile, Name) == 0x0000);
static_assert(offsetof(FHmdUserProfile, Gender) == 0x0010);
static_assert(offsetof(FHmdUserProfile, NeckToEyeDistance) == 0x002C);
static_assert(offsetof(FHmdUserProfile, ExtraFields) == 0x0038);
