
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Game/BloodPython/SnakeModels/BloodPython_Skeleton_AnimBlueprint.BloodPython_Skeleton_AnimBlueprint_C
/// Size: 0x0430 (1072 bytes) (0x0002B8 - 0x000430) align 16 MaxSize: 0x0430
class UBloodPython_Skeleton_AnimBlueprint_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x02F8   (0x0048)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x0340   (0x00E8)  
	bool                                               PlayBlendSpace1D;                                           // 0x0428   (0x0001)  
	bool                                               bIsInAir;                                                   // 0x0429   (0x0001)  
	bool                                               IsWalking;                                                  // 0x042A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x042B   (0x0001)  MISSED
	float                                              Speed;                                                      // 0x042C   (0x0004)  


	/// Functions
	// Function /Game/BloodPython/SnakeModels/BloodPython_Skeleton_AnimBlueprint.BloodPython_Skeleton_AnimBlueprint_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x148e900] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/BloodPython/SnakeModels/BloodPython_Skeleton_AnimBlueprint.BloodPython_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/BloodPython/SnakeModels/BloodPython_Skeleton_AnimBlueprint.BloodPython_Skeleton_AnimBlueprint_C.AnimNotify_OpenHitBox
	// void AnimNotify_OpenHitBox();                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BloodPython/SnakeModels/BloodPython_Skeleton_AnimBlueprint.BloodPython_Skeleton_AnimBlueprint_C.AnimNotify_CloseHitBox
	// void AnimNotify_CloseHitBox();                                                                                           // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BloodPython/SnakeModels/BloodPython_Skeleton_AnimBlueprint.BloodPython_Skeleton_AnimBlueprint_C.AnimNotify_FarFire
	// void AnimNotify_FarFire();                                                                                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BloodPython/SnakeModels/BloodPython_Skeleton_AnimBlueprint.BloodPython_Skeleton_AnimBlueprint_C.ExecuteUbergraph_BloodPython_Skeleton_AnimBlueprint
	// void ExecuteUbergraph_BloodPython_Skeleton_AnimBlueprint(int32_t EntryPoint);                                            // [0x148e900] Final                
};

#pragma pack(pop)


static_assert(sizeof(UBloodPython_Skeleton_AnimBlueprint_C) == 0x0430); // 1072 bytes (0x0002B8 - 0x000430)
static_assert(offsetof(UBloodPython_Skeleton_AnimBlueprint_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UBloodPython_Skeleton_AnimBlueprint_C, AnimGraphNode_Root) == 0x02C8);
static_assert(offsetof(UBloodPython_Skeleton_AnimBlueprint_C, AnimGraphNode_Slot) == 0x02F8);
static_assert(offsetof(UBloodPython_Skeleton_AnimBlueprint_C, AnimGraphNode_BlendSpacePlayer) == 0x0340);
