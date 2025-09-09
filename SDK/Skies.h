
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Game/Skies/Blueprints/BP_Sky.BP_Sky_C
/// Size: 0x02B2 (690 bytes) (0x000220 - 0x0002B2) align 8 MaxSize: 0x02B2
class ABP_Sky_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UStaticMeshComponent*                        SM_SkyDome;                                                 // 0x0228   (0x0008)  
	class USceneComponent*                             Scene1;                                                     // 0x0230   (0x0008)  
	float                                              GlobalBrightness;                                           // 0x0238   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x023C   (0x0004)  MISSED
	class UDirectionalLightComponent*                  SunDirectionalLight;                                        // 0x0240   (0x0008)  
	bool                                               UseFog;                                                     // 0x0248   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0249   (0x0003)  MISSED
	float                                              FogBrightness;                                              // 0x024C   (0x0004)  
	FLinearColor                                       FogTint;                                                    // 0x0250   (0x0010)  
	float                                              FogAltitude;                                                // 0x0260   (0x0004)  
	float                                              FogMaxOpacity;                                              // 0x0264   (0x0004)  
	float                                              FogHeightFalloff;                                           // 0x0268   (0x0004)  
	float                                              FogDensity;                                                 // 0x026C   (0x0004)  
	float                                              FogStartDistance;                                           // 0x0270   (0x0004)  
	float                                              SkyBrightness;                                              // 0x0274   (0x0004)  
	float                                              SkyContrast;                                                // 0x0278   (0x0004)  
	FLinearColor                                       SkyTint;                                                    // 0x027C   (0x0010)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x028C   (0x0004)  MISSED
	class UTexture*                                    SkyTexture;                                                 // 0x0290   (0x0008)  
	float                                              HDRI_RotationSpeed;                                         // 0x0298   (0x0004)  
	float                                              HDRI_Rotation;                                              // 0x029C   (0x0004)  
	class UAtmosphericFogComponent*                    AtmosphericFog;                                             // 0x02A0   (0x0008)  
	class UMaterialInstanceDynamic*                    HDRI_MInst;                                                 // 0x02A8   (0x0008)  
	bool                                               Rotate_;                                                    // 0x02B0   (0x0001)  
	bool                                               UseSkylight_;                                               // 0x02B1   (0x0001)  


	/// Functions
	// Function /Game/Skies/Blueprints/BP_Sky.BP_Sky_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x148e900] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Skies/Blueprints/BP_Sky.BP_Sky_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/Skies/Blueprints/BP_Sky.BP_Sky_C.UpDataSky
	// void UpDataSky();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Skies/Blueprints/BP_Sky.BP_Sky_C.ExecuteUbergraph_BP_Sky
	// void ExecuteUbergraph_BP_Sky(int32_t EntryPoint);                                                                        // [0x148e900] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(ABP_Sky_C) == 0x02B2); // 690 bytes (0x000220 - 0x0002B2)
static_assert(offsetof(ABP_Sky_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ABP_Sky_C, SM_SkyDome) == 0x0228);
static_assert(offsetof(ABP_Sky_C, Scene1) == 0x0230);
static_assert(offsetof(ABP_Sky_C, SunDirectionalLight) == 0x0240);
static_assert(offsetof(ABP_Sky_C, FogTint) == 0x0250);
static_assert(offsetof(ABP_Sky_C, SkyTint) == 0x027C);
static_assert(offsetof(ABP_Sky_C, SkyTexture) == 0x0290);
static_assert(offsetof(ABP_Sky_C, AtmosphericFog) == 0x02A0);
static_assert(offsetof(ABP_Sky_C, HDRI_MInst) == 0x02A8);
