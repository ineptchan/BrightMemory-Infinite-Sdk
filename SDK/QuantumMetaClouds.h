
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

/// Enum /Game/QuantumMetaClouds/Meshes/Clouds.Clouds
/// Size: 0x01 (1 bytes)
enum class Clouds : uint8_t
{
	Clouds__NewEnumerator0                                                           = 0,
	Clouds__NewEnumerator1                                                           = 1,
	Clouds__NewEnumerator2                                                           = 2,
	Clouds__NewEnumerator3                                                           = 3,
	Clouds__NewEnumerator4                                                           = 4,
	Clouds__NewEnumerator5                                                           = 5,
	Clouds__NewEnumerator6                                                           = 6,
	Clouds__NewEnumerator7                                                           = 7,
	Clouds__NewEnumerator8                                                           = 8,
	Clouds__NewEnumerator10                                                          = 9,
	Clouds__NewEnumerator11                                                          = 10,
	Clouds__NewEnumerator12                                                          = 11,
	Clouds__NewEnumerator13                                                          = 12,
	Clouds__NewEnumerator14                                                          = 13
};

/// Class /Game/QuantumMetaClouds/BP_QuantumClouds.BP_QuantumClouds_C
/// Size: 0x0284 (644 bytes) (0x000220 - 0x000284) align 8 MaxSize: 0x0284
class ABP_QuantumClouds_C : public AActor
{ 
public:
	class UStaticMeshComponent*                        StaticMesh1;                                                // 0x0220   (0x0008)  
	bool                                               Update;                                                     // 0x0228   (0x0001)  
	TEnumAsByte<Clouds>                                Cloud;                                                      // 0x0229   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x022A   (0x0002)  MISSED
	FLinearColor                                       SunColor;                                                   // 0x022C   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x023C   (0x0004)  MISSED
	class UMaterial*                                   CloudMaterial;                                              // 0x0240   (0x0008)  
	class UMaterialInstanceDynamic*                    Mid;                                                        // 0x0248   (0x0008)  
	FLinearColor                                       AmbientColor;                                               // 0x0250   (0x0010)  
	float                                              Cloud_Thickness;                                            // 0x0260   (0x0004)  
	float                                              Cloud_Contrast;                                             // 0x0264   (0x0004)  
	float                                              Cloud_Density;                                              // 0x0268   (0x0004)  
	float                                              Cloud_Opacity;                                              // 0x026C   (0x0004)  
	float                                              Cloud_Scale;                                                // 0x0270   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0274   (0x0004)  MISSED
	class UTexture2D*                                  CloudTexture;                                               // 0x0278   (0x0008)  
	float                                              CloudBrightness;                                            // 0x0280   (0x0004)  


	/// Functions
	// Function /Game/QuantumMetaClouds/BP_QuantumClouds.BP_QuantumClouds_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x148e900] Event|Public|BlueprintCallable|BlueprintEvent 
};

#pragma pack(pop)


static_assert(sizeof(ABP_QuantumClouds_C) == 0x0284); // 644 bytes (0x000220 - 0x000284)
static_assert(offsetof(ABP_QuantumClouds_C, StaticMesh1) == 0x0220);
static_assert(offsetof(ABP_QuantumClouds_C, Cloud) == 0x0229);
static_assert(offsetof(ABP_QuantumClouds_C, SunColor) == 0x022C);
static_assert(offsetof(ABP_QuantumClouds_C, CloudMaterial) == 0x0240);
static_assert(offsetof(ABP_QuantumClouds_C, Mid) == 0x0248);
static_assert(offsetof(ABP_QuantumClouds_C, AmbientColor) == 0x0250);
static_assert(offsetof(ABP_QuantumClouds_C, CloudTexture) == 0x0278);
