
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

/// Class /Game/AuroraBorealis/Blueprints/BP_Aurora.BP_Aurora_C
/// Size: 0x02A0 (672 bytes) (0x000220 - 0x0002A0) align 8 MaxSize: 0x02A0
class ABP_Aurora_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class USplineMeshComponent*                        SplineMesh;                                                 // 0x0228   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0230   (0x0008)  
	float                                              FadeInTimeline_Opacity_9055D3F04E81C3AF434575A28A793847;    // 0x0238   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    FadeInTimeline__Direction_9055D3F04E81C3AF434575A28A793847; // 0x023C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x023D   (0x0003)  MISSED
	class UTimelineComponent*                          FadeInTimeline;                                             // 0x0240   (0x0008)  
	class UStaticMesh*                                 MeshToUse;                                                  // 0x0248   (0x0008)  
	class UMaterialInstanceDynamic*                    AuroraDynMat;                                               // 0x0250   (0x0008)  
	class UMaterialInstanceDynamic*                    AuroraBottomDynMat;                                         // 0x0258   (0x0008)  
	float                                              StartOpacity;                                               // 0x0260   (0x0004)  
	bool                                               OverrideColor;                                              // 0x0264   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0265   (0x0003)  MISSED
	FLinearColor                                       TopColor;                                                   // 0x0268   (0x0010)  
	FLinearColor                                       BottomColor;                                                // 0x0278   (0x0010)  
	FLinearColor                                       UnderColor;                                                 // 0x0288   (0x0010)  
	bool                                               HasUnderside;                                               // 0x0298   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0299   (0x0003)  MISSED
	float                                              TopToBottomRatio;                                           // 0x029C   (0x0004)  


	/// Functions
	// Function /Game/AuroraBorealis/Blueprints/BP_Aurora.BP_Aurora_C.SetOpacity
	// void SetOpacity(float NewOpacity);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AuroraBorealis/Blueprints/BP_Aurora.BP_Aurora_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x148e900] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AuroraBorealis/Blueprints/BP_Aurora.BP_Aurora_C.FadeInTimeline__FinishedFunc
	// void FadeInTimeline__FinishedFunc();                                                                                     // [0x148e900] BlueprintEvent       
	// Function /Game/AuroraBorealis/Blueprints/BP_Aurora.BP_Aurora_C.FadeInTimeline__UpdateFunc
	// void FadeInTimeline__UpdateFunc();                                                                                       // [0x148e900] BlueprintEvent       
	// Function /Game/AuroraBorealis/Blueprints/BP_Aurora.BP_Aurora_C.FadeIn
	// void FadeIn(float FadeTimeSeconds);                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/AuroraBorealis/Blueprints/BP_Aurora.BP_Aurora_C.FadeOut
	// void FadeOut(float FadeTimeSeconds);                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/AuroraBorealis/Blueprints/BP_Aurora.BP_Aurora_C.ExecuteUbergraph_BP_Aurora
	// void ExecuteUbergraph_BP_Aurora(int32_t EntryPoint);                                                                     // [0x148e900] Final                
};

#pragma pack(pop)


static_assert(sizeof(ABP_Aurora_C) == 0x02A0); // 672 bytes (0x000220 - 0x0002A0)
static_assert(offsetof(ABP_Aurora_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ABP_Aurora_C, SplineMesh) == 0x0228);
static_assert(offsetof(ABP_Aurora_C, DefaultSceneRoot) == 0x0230);
static_assert(offsetof(ABP_Aurora_C, FadeInTimeline__Direction_9055D3F04E81C3AF434575A28A793847) == 0x023C);
static_assert(offsetof(ABP_Aurora_C, FadeInTimeline) == 0x0240);
static_assert(offsetof(ABP_Aurora_C, MeshToUse) == 0x0248);
static_assert(offsetof(ABP_Aurora_C, AuroraDynMat) == 0x0250);
static_assert(offsetof(ABP_Aurora_C, AuroraBottomDynMat) == 0x0258);
static_assert(offsetof(ABP_Aurora_C, TopColor) == 0x0268);
static_assert(offsetof(ABP_Aurora_C, BottomColor) == 0x0278);
static_assert(offsetof(ABP_Aurora_C, UnderColor) == 0x0288);
