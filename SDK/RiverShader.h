
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

/// Class /Game/RiverShader/Blueprints/BP_RiverWater.BP_RiverWater_C
/// Size: 0x02C8 (712 bytes) (0x000220 - 0x0002C8) align 8 MaxSize: 0x02C8
class ABP_RiverWater_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class USplineComponent*                            Spline;                                                     // 0x0228   (0x0008)  
	class UMaterialInstance*                           River_Material;                                             // 0x0230   (0x0008)  
	float                                              EasyScale;                                                  // 0x0238   (0x0004)  
	float                                              WaterTriggerThickness;                                      // 0x023C   (0x0004)  
	TArray<class USplineMeshComponent*>                TriggerList;                                                // 0x0240   (0x0010)  
	TArray<class UStaticMeshComponent*>                ActorInWaterList;                                           // 0x0250   (0x0010)  
	float                                              WaterTriggerHeightOffset;                                   // 0x0260   (0x0004)  
	bool                                               EnableBuoyancy;                                             // 0x0264   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0265   (0x0003)  MISSED
	float                                              Physics_Flow_Speed;                                         // 0x0268   (0x0004)  
	float                                              Physics_Flow_Direction_Width;                               // 0x026C   (0x0004)  
	float                                              Physics_Flow_Direction_Length;                              // 0x0270   (0x0004)  
	TEnumAsByte<EDrawDebugTrace>                       Physics_Flow_Debug_Type;                                    // 0x0274   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0275   (0x0003)  MISSED
	TArray<FVector>                                    Impact_Normals;                                             // 0x0278   (0x0010)  
	float                                              Physics_Flow_Avoidance_Strength;                            // 0x0288   (0x0004)  
	bool                                               Physics_Flow_Debug;                                         // 0x028C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x028D   (0x0003)  MISSED
	FVector                                            RiverForce;                                                 // 0x0290   (0x000C)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x029C   (0x0004)  MISSED
	TArray<class UParticleSystemComponent*>            ListOfWaterfallParticles;                                   // 0x02A0   (0x0010)  
	bool                                               Waterfalls;                                                 // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x02B1   (0x0003)  MISSED
	float                                              Waterfall_Tangent_Start;                                    // 0x02B4   (0x0004)  
	float                                              Mist_Density;                                               // 0x02B8   (0x0004)  
	float                                              Splash_Density;                                             // 0x02BC   (0x0004)  
	FName                                              Fluid_Interaction_Tag;                                      // 0x02C0   (0x0008)  


	/// Functions
	// Function /Game/RiverShader/Blueprints/BP_RiverWater.BP_RiverWater_C.CreateTriggerMeshes
	// void CreateTriggerMeshes();                                                                                              // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/RiverShader/Blueprints/BP_RiverWater.BP_RiverWater_C.TraceNormal
	// void TraceNormal(FVector Start, FVector End, FVector& ImpactNormal);                                                     // [0x148e900] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/RiverShader/Blueprints/BP_RiverWater.BP_RiverWater_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x148e900] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/RiverShader/Blueprints/BP_RiverWater.BP_RiverWater_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/RiverShader/Blueprints/BP_RiverWater.BP_RiverWater_C.ReceiveActorEndOverlap
	// void ReceiveActorEndOverlap(class AActor* OtherActor);                                                                   // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/RiverShader/Blueprints/BP_RiverWater.BP_RiverWater_C.ReceiveActorBeginOverlap
	// void ReceiveActorBeginOverlap(class AActor* OtherActor);                                                                 // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/RiverShader/Blueprints/BP_RiverWater.BP_RiverWater_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/RiverShader/Blueprints/BP_RiverWater.BP_RiverWater_C.ExecuteUbergraph_BP_RiverWater
	// void ExecuteUbergraph_BP_RiverWater(int32_t EntryPoint);                                                                 // [0x148e900] Final                
};

#pragma pack(pop)


static_assert(sizeof(ABP_RiverWater_C) == 0x02C8); // 712 bytes (0x000220 - 0x0002C8)
static_assert(offsetof(ABP_RiverWater_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ABP_RiverWater_C, Spline) == 0x0228);
static_assert(offsetof(ABP_RiverWater_C, River_Material) == 0x0230);
static_assert(offsetof(ABP_RiverWater_C, TriggerList) == 0x0240);
static_assert(offsetof(ABP_RiverWater_C, ActorInWaterList) == 0x0250);
static_assert(offsetof(ABP_RiverWater_C, Physics_Flow_Debug_Type) == 0x0274);
static_assert(offsetof(ABP_RiverWater_C, Impact_Normals) == 0x0278);
static_assert(offsetof(ABP_RiverWater_C, RiverForce) == 0x0290);
static_assert(offsetof(ABP_RiverWater_C, ListOfWaterfallParticles) == 0x02A0);
static_assert(offsetof(ABP_RiverWater_C, Fluid_Interaction_Tag) == 0x02C0);
