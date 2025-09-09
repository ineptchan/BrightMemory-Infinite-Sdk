
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

/// Class /Game/Animalia/BaldEagle/Meshes/BaldEagle_Skeleton_AnimBlueprint.BaldEagle_Skeleton_AnimBlueprint_C
/// Size: 0x0431 (1073 bytes) (0x0002B8 - 0x000431) align 16 MaxSize: 0x0431
class UBaldEagle_Skeleton_AnimBlueprint_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x02F8   (0x0048)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x0340   (0x00E8)  
	bool                                               bIsInAir;                                                   // 0x0428   (0x0001)  
	bool                                               IsWalking;                                                  // 0x0429   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x042A   (0x0002)  MISSED
	float                                              Speed;                                                      // 0x042C   (0x0004)  
	bool                                               PlayBlendSpace1D;                                           // 0x0430   (0x0001)  


	/// Functions
	// Function /Game/Animalia/BaldEagle/Meshes/BaldEagle_Skeleton_AnimBlueprint.BaldEagle_Skeleton_AnimBlueprint_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x148e900] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/BaldEagle/Meshes/BaldEagle_Skeleton_AnimBlueprint.BaldEagle_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/Animalia/BaldEagle/Meshes/BaldEagle_Skeleton_AnimBlueprint.BaldEagle_Skeleton_AnimBlueprint_C.AnimNotify_Spawn_FarFire
	// void AnimNotify_Spawn_FarFire();                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Animalia/BaldEagle/Meshes/BaldEagle_Skeleton_AnimBlueprint.BaldEagle_Skeleton_AnimBlueprint_C.ExecuteUbergraph_BaldEagle_Skeleton_AnimBlueprint
	// void ExecuteUbergraph_BaldEagle_Skeleton_AnimBlueprint(int32_t EntryPoint);                                              // [0x148e900] Final                
};

#pragma pack(pop)


static_assert(sizeof(UBaldEagle_Skeleton_AnimBlueprint_C) == 0x0431); // 1073 bytes (0x0002B8 - 0x000431)
static_assert(offsetof(UBaldEagle_Skeleton_AnimBlueprint_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UBaldEagle_Skeleton_AnimBlueprint_C, AnimGraphNode_Root) == 0x02C8);
static_assert(offsetof(UBaldEagle_Skeleton_AnimBlueprint_C, AnimGraphNode_Slot) == 0x02F8);
static_assert(offsetof(UBaldEagle_Skeleton_AnimBlueprint_C, AnimGraphNode_BlendSpacePlayer) == 0x0340);
