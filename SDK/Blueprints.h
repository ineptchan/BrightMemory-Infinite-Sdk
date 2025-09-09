
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /HDRIBackdrop/Blueprints/HDRIBackdrop.HDRIBackdrop_C
/// Size: 0x026C (620 bytes) (0x000220 - 0x00026C) align 8 MaxSize: 0x026C
class AHDRIBackdrop_C : public AActor
{ 
public:
	class USkyLightComponent*                          SkyLight;                                                   // 0x0220   (0x0008)  
	class UStaticMeshComponent*                        Geometry;                                                   // 0x0228   (0x0008)  
	class USceneComponent*                             SceneComponent;                                             // 0x0230   (0x0008)  
	class UTextureCube*                                Cubemap;                                                    // 0x0238   (0x0008)  
	class UMaterialInstanceDynamic*                    MaterialInstance;                                           // 0x0240   (0x0008)  
	float                                              Intensity;                                                  // 0x0248   (0x0004)  
	float                                              Size;                                                       // 0x024C   (0x0004)  
	float                                              LightingDistanceFactor;                                     // 0x0250   (0x0004)  
	bool                                               UseCameraProjection;                                        // 0x0254   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0255   (0x0003)  MISSED
	class UStaticMesh*                                 Mesh;                                                       // 0x0258   (0x0008)  
	FVector                                            ProjectionCenter;                                           // 0x0260   (0x000C)  


	/// Functions
	// Function /HDRIBackdrop/Blueprints/HDRIBackdrop.HDRIBackdrop_C.CreateMaterial
	// void CreateMaterial();                                                                                                   // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /HDRIBackdrop/Blueprints/HDRIBackdrop.HDRIBackdrop_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x148e900] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Blueprints/BMI_NoPlayerHUD_GameMode.BMI_NoPlayerHUD_GameMode_C
/// Size: 0x02D4 (724 bytes) (0x0002C0 - 0x0002D4) align 8 MaxSize: 0x02D4
class ABMI_NoPlayerHUD_GameMode_C : public AGameModeBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x02C8   (0x0008)  
	float                                              NowGamePlayTime;                                            // 0x02D0   (0x0004)  


	/// Functions
	// Function /Game/Blueprints/BMI_NoPlayerHUD_GameMode.BMI_NoPlayerHUD_GameMode_C.GamePlayTimeSub
	// void GamePlayTimeSub();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/BMI_NoPlayerHUD_GameMode.BMI_NoPlayerHUD_GameMode_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/BMI_NoPlayerHUD_GameMode.BMI_NoPlayerHUD_GameMode_C.RestNowGamePlayTime
	// void RestNowGamePlayTime();                                                                                              // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/BMI_NoPlayerHUD_GameMode.BMI_NoPlayerHUD_GameMode_C.ExecuteUbergraph_BMI_NoPlayerHUD_GameMode
	// void ExecuteUbergraph_BMI_NoPlayerHUD_GameMode(int32_t EntryPoint);                                                      // [0x148e900] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(AHDRIBackdrop_C) == 0x026C); // 620 bytes (0x000220 - 0x00026C)
static_assert(sizeof(ABMI_NoPlayerHUD_GameMode_C) == 0x02D4); // 724 bytes (0x0002C0 - 0x0002D4)
static_assert(offsetof(AHDRIBackdrop_C, SkyLight) == 0x0220);
static_assert(offsetof(AHDRIBackdrop_C, Geometry) == 0x0228);
static_assert(offsetof(AHDRIBackdrop_C, SceneComponent) == 0x0230);
static_assert(offsetof(AHDRIBackdrop_C, Cubemap) == 0x0238);
static_assert(offsetof(AHDRIBackdrop_C, MaterialInstance) == 0x0240);
static_assert(offsetof(AHDRIBackdrop_C, Mesh) == 0x0258);
static_assert(offsetof(AHDRIBackdrop_C, ProjectionCenter) == 0x0260);
static_assert(offsetof(ABMI_NoPlayerHUD_GameMode_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(ABMI_NoPlayerHUD_GameMode_C, DefaultSceneRoot) == 0x02C8);
