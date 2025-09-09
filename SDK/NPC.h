
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

/// Class /Game/NPC/Army/Mod2/NPC_Army_AnimBlueprint.NPC_Army_AnimBlueprint_C
/// Size: 0x0ECC (3788 bytes) (0x0002B8 - 0x000ECC) align 16 MaxSize: 0x0ECC
class UNPC_Army_AnimBlueprint_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x02F8   (0x0048)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0340   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x0368   (0x0028)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x0390   (0x00E8)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x0478   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x0498   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x05A0   (0x0020)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x05C0   (0x0030)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone1;                                  // 0x05F0   (0x0108)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace2;                       // 0x06F8   (0x0020)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer3;                            // 0x0718   (0x00E8)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace4;                       // 0x0800   (0x0020)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult5;                                 // 0x0820   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0850   (0x00B0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer6;                            // 0x0900   (0x00E8)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x09E8   (0x00C0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x0AA8   (0x00A0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x0B48   (0x0028)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer7;                            // 0x0B70   (0x00E8)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend8;                            // 0x0C58   (0x00C0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose9;                               // 0x0D18   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x0D40   (0x0158)  
	class AActor*                                      AI;                                                         // 0x0E98   (0x0008)  
	FRotator                                           HeadRot;                                                    // 0x0EA0   (0x000C)  
	float                                              Speed;                                                      // 0x0EAC   (0x0004)  
	float                                              AILookPlayer_Cricle;                                        // 0x0EB0   (0x0004)  
	float                                              FireBlend;                                                  // 0x0EB4   (0x0004)  
	float                                              TurnRot;                                                    // 0x0EB8   (0x0004)  
	float                                              AIToPlayerRot;                                              // 0x0EBC   (0x0004)  
	float                                              Direction;                                                  // 0x0EC0   (0x0004)  
	float                                              HeadAngle;                                                  // 0x0EC4   (0x0004)  
	bool                                               CanCrouch_;                                                 // 0x0EC8   (0x0001)  
	bool                                               IsRun_;                                                     // 0x0EC9   (0x0001)  
	bool                                               IsHit_;                                                     // 0x0ECA   (0x0001)  
	bool                                               PlayerIsCrouch_;                                            // 0x0ECB   (0x0001)  


	/// Functions
	// Function /Game/NPC/Army/Mod2/NPC_Army_AnimBlueprint.NPC_Army_AnimBlueprint_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x148e900] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC/Army/Mod2/NPC_Army_AnimBlueprint.NPC_Army_AnimBlueprint_C.TurnHeadToPlayer
	// void TurnHeadToPlayer(class AActor* Player, class AActor* AI);                                                           // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC/Army/Mod2/NPC_Army_AnimBlueprint.NPC_Army_AnimBlueprint_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPC/Army/Mod2/NPC_Army_AnimBlueprint.NPC_Army_AnimBlueprint_C.Start_RTurn
	// void Start_RTurn();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC/Army/Mod2/NPC_Army_AnimBlueprint.NPC_Army_AnimBlueprint_C.Start_LTurn
	// void Start_LTurn();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC/Army/Mod2/NPC_Army_AnimBlueprint.NPC_Army_AnimBlueprint_C.Start_LTurn180
	// void Start_LTurn180();                                                                                                   // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC/Army/Mod2/NPC_Army_AnimBlueprint.NPC_Army_AnimBlueprint_C.Start_RTurn180
	// void Start_RTurn180();                                                                                                   // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC/Army/Mod2/NPC_Army_AnimBlueprint.NPC_Army_AnimBlueprint_C.AnimNotify_ShouLeiSpawn
	// void AnimNotify_ShouLeiSpawn();                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC/Army/Mod2/NPC_Army_AnimBlueprint.NPC_Army_AnimBlueprint_C.AnimNotify_TraceFootPar
	// void AnimNotify_TraceFootPar();                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC/Army/Mod2/NPC_Army_AnimBlueprint.NPC_Army_AnimBlueprint_C.ExecuteUbergraph_NPC_Army_AnimBlueprint
	// void ExecuteUbergraph_NPC_Army_AnimBlueprint(int32_t EntryPoint);                                                        // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPC/Army/Mod2/NPC_Army2_AnimBlueprint.NPC_Army2_AnimBlueprint_C
/// Size: 0x0ECC (3788 bytes) (0x0002B8 - 0x000ECC) align 16 MaxSize: 0x0ECC
class UNPC_Army2_AnimBlueprint_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x02F8   (0x0048)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0340   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x0368   (0x0028)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x0390   (0x00E8)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x0478   (0x0020)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x0498   (0x0108)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x05A0   (0x0020)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x05C0   (0x0030)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone1;                                  // 0x05F0   (0x0108)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace2;                       // 0x06F8   (0x0020)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer3;                            // 0x0718   (0x00E8)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace4;                       // 0x0800   (0x0020)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult5;                                 // 0x0820   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0850   (0x00B0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer6;                            // 0x0900   (0x00E8)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x09E8   (0x00C0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x0AA8   (0x00A0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x0B48   (0x0028)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer7;                            // 0x0B70   (0x00E8)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend8;                            // 0x0C58   (0x00C0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose9;                               // 0x0D18   (0x0028)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x0D40   (0x0158)  
	class AActor*                                      AI;                                                         // 0x0E98   (0x0008)  
	FRotator                                           HeadRot;                                                    // 0x0EA0   (0x000C)  
	float                                              Speed;                                                      // 0x0EAC   (0x0004)  
	float                                              AILookPlayer_Cricle;                                        // 0x0EB0   (0x0004)  
	float                                              FireBlend;                                                  // 0x0EB4   (0x0004)  
	float                                              TurnRot;                                                    // 0x0EB8   (0x0004)  
	float                                              AIToPlayerRot;                                              // 0x0EBC   (0x0004)  
	float                                              Direction;                                                  // 0x0EC0   (0x0004)  
	float                                              HeadAngle;                                                  // 0x0EC4   (0x0004)  
	bool                                               CanCrouch_;                                                 // 0x0EC8   (0x0001)  
	bool                                               IsRun_;                                                     // 0x0EC9   (0x0001)  
	bool                                               IsHit_;                                                     // 0x0ECA   (0x0001)  
	bool                                               PlayerIsCrouch_;                                            // 0x0ECB   (0x0001)  


	/// Functions
	// Function /Game/NPC/Army/Mod2/NPC_Army2_AnimBlueprint.NPC_Army2_AnimBlueprint_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x148e900] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC/Army/Mod2/NPC_Army2_AnimBlueprint.NPC_Army2_AnimBlueprint_C.TurnHeadToPlayer
	// void TurnHeadToPlayer(class AActor* Player, class AActor* AI);                                                           // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC/Army/Mod2/NPC_Army2_AnimBlueprint.NPC_Army2_AnimBlueprint_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPC/Army/Mod2/NPC_Army2_AnimBlueprint.NPC_Army2_AnimBlueprint_C.Start_RTurn
	// void Start_RTurn();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC/Army/Mod2/NPC_Army2_AnimBlueprint.NPC_Army2_AnimBlueprint_C.Start_LTurn
	// void Start_LTurn();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC/Army/Mod2/NPC_Army2_AnimBlueprint.NPC_Army2_AnimBlueprint_C.Start_LTurn180
	// void Start_LTurn180();                                                                                                   // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC/Army/Mod2/NPC_Army2_AnimBlueprint.NPC_Army2_AnimBlueprint_C.Start_RTurn180
	// void Start_RTurn180();                                                                                                   // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC/Army/Mod2/NPC_Army2_AnimBlueprint.NPC_Army2_AnimBlueprint_C.AnimNotify_ShouLeiSpawn
	// void AnimNotify_ShouLeiSpawn();                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC/Army/Mod2/NPC_Army2_AnimBlueprint.NPC_Army2_AnimBlueprint_C.AnimNotify_TraceFootPar
	// void AnimNotify_TraceFootPar();                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC/Army/Mod2/NPC_Army2_AnimBlueprint.NPC_Army2_AnimBlueprint_C.ExecuteUbergraph_NPC_Army2_AnimBlueprint
	// void ExecuteUbergraph_NPC_Army2_AnimBlueprint(int32_t EntryPoint);                                                       // [0x148e900] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(UNPC_Army_AnimBlueprint_C) == 0x0ECC); // 3788 bytes (0x0002B8 - 0x000ECC)
static_assert(sizeof(UNPC_Army2_AnimBlueprint_C) == 0x0ECC); // 3788 bytes (0x0002B8 - 0x000ECC)
static_assert(offsetof(UNPC_Army_AnimBlueprint_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UNPC_Army_AnimBlueprint_C, AnimGraphNode_Root) == 0x02C8);
static_assert(offsetof(UNPC_Army_AnimBlueprint_C, AnimGraphNode_Slot) == 0x02F8);
static_assert(offsetof(UNPC_Army_AnimBlueprint_C, AnimGraphNode_TransitionResult) == 0x0340);
static_assert(offsetof(UNPC_Army_AnimBlueprint_C, AnimGraphNode_TransitionResult0) == 0x0368);
static_assert(offsetof(UNPC_Army_AnimBlueprint_C, AnimGraphNode_BlendSpacePlayer) == 0x0390);
static_assert(offsetof(UNPC_Army_AnimBlueprint_C, AnimGraphNode_LocalToComponentSpace) == 0x0478);
static_assert(offsetof(UNPC_Army_AnimBlueprint_C, AnimGraphNode_ModifyBone) == 0x0498);
static_assert(offsetof(UNPC_Army_AnimBlueprint_C, AnimGraphNode_ComponentToLocalSpace) == 0x05A0);
static_assert(offsetof(UNPC_Army_AnimBlueprint_C, AnimGraphNode_StateResult) == 0x05C0);
static_assert(offsetof(UNPC_Army_AnimBlueprint_C, AnimGraphNode_ModifyBone1) == 0x05F0);
static_assert(offsetof(UNPC_Army_AnimBlueprint_C, AnimGraphNode_LocalToComponentSpace2) == 0x06F8);
static_assert(offsetof(UNPC_Army_AnimBlueprint_C, AnimGraphNode_BlendSpacePlayer3) == 0x0718);
static_assert(offsetof(UNPC_Army_AnimBlueprint_C, AnimGraphNode_ComponentToLocalSpace4) == 0x0800);
static_assert(offsetof(UNPC_Army_AnimBlueprint_C, AnimGraphNode_StateResult5) == 0x0820);
static_assert(offsetof(UNPC_Army_AnimBlueprint_C, AnimGraphNode_StateMachine) == 0x0850);
static_assert(offsetof(UNPC_Army_AnimBlueprint_C, AnimGraphNode_BlendSpacePlayer6) == 0x0900);
static_assert(offsetof(UNPC_Army_AnimBlueprint_C, AnimGraphNode_LayeredBoneBlend) == 0x09E8);
static_assert(offsetof(UNPC_Army_AnimBlueprint_C, AnimGraphNode_BlendListByBool) == 0x0AA8);
static_assert(offsetof(UNPC_Army_AnimBlueprint_C, AnimGraphNode_UseCachedPose) == 0x0B48);
static_assert(offsetof(UNPC_Army_AnimBlueprint_C, AnimGraphNode_BlendSpacePlayer7) == 0x0B70);
static_assert(offsetof(UNPC_Army_AnimBlueprint_C, AnimGraphNode_LayeredBoneBlend8) == 0x0C58);
static_assert(offsetof(UNPC_Army_AnimBlueprint_C, AnimGraphNode_UseCachedPose9) == 0x0D18);
static_assert(offsetof(UNPC_Army_AnimBlueprint_C, AnimGraphNode_SaveCachedPose) == 0x0D40);
static_assert(offsetof(UNPC_Army_AnimBlueprint_C, AI) == 0x0E98);
static_assert(offsetof(UNPC_Army_AnimBlueprint_C, HeadRot) == 0x0EA0);
static_assert(offsetof(UNPC_Army2_AnimBlueprint_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UNPC_Army2_AnimBlueprint_C, AnimGraphNode_Root) == 0x02C8);
static_assert(offsetof(UNPC_Army2_AnimBlueprint_C, AnimGraphNode_Slot) == 0x02F8);
static_assert(offsetof(UNPC_Army2_AnimBlueprint_C, AnimGraphNode_TransitionResult) == 0x0340);
static_assert(offsetof(UNPC_Army2_AnimBlueprint_C, AnimGraphNode_TransitionResult0) == 0x0368);
static_assert(offsetof(UNPC_Army2_AnimBlueprint_C, AnimGraphNode_BlendSpacePlayer) == 0x0390);
static_assert(offsetof(UNPC_Army2_AnimBlueprint_C, AnimGraphNode_LocalToComponentSpace) == 0x0478);
static_assert(offsetof(UNPC_Army2_AnimBlueprint_C, AnimGraphNode_ModifyBone) == 0x0498);
static_assert(offsetof(UNPC_Army2_AnimBlueprint_C, AnimGraphNode_ComponentToLocalSpace) == 0x05A0);
static_assert(offsetof(UNPC_Army2_AnimBlueprint_C, AnimGraphNode_StateResult) == 0x05C0);
static_assert(offsetof(UNPC_Army2_AnimBlueprint_C, AnimGraphNode_ModifyBone1) == 0x05F0);
static_assert(offsetof(UNPC_Army2_AnimBlueprint_C, AnimGraphNode_LocalToComponentSpace2) == 0x06F8);
static_assert(offsetof(UNPC_Army2_AnimBlueprint_C, AnimGraphNode_BlendSpacePlayer3) == 0x0718);
static_assert(offsetof(UNPC_Army2_AnimBlueprint_C, AnimGraphNode_ComponentToLocalSpace4) == 0x0800);
static_assert(offsetof(UNPC_Army2_AnimBlueprint_C, AnimGraphNode_StateResult5) == 0x0820);
static_assert(offsetof(UNPC_Army2_AnimBlueprint_C, AnimGraphNode_StateMachine) == 0x0850);
static_assert(offsetof(UNPC_Army2_AnimBlueprint_C, AnimGraphNode_BlendSpacePlayer6) == 0x0900);
static_assert(offsetof(UNPC_Army2_AnimBlueprint_C, AnimGraphNode_LayeredBoneBlend) == 0x09E8);
static_assert(offsetof(UNPC_Army2_AnimBlueprint_C, AnimGraphNode_BlendListByBool) == 0x0AA8);
static_assert(offsetof(UNPC_Army2_AnimBlueprint_C, AnimGraphNode_UseCachedPose) == 0x0B48);
static_assert(offsetof(UNPC_Army2_AnimBlueprint_C, AnimGraphNode_BlendSpacePlayer7) == 0x0B70);
static_assert(offsetof(UNPC_Army2_AnimBlueprint_C, AnimGraphNode_LayeredBoneBlend8) == 0x0C58);
static_assert(offsetof(UNPC_Army2_AnimBlueprint_C, AnimGraphNode_UseCachedPose9) == 0x0D18);
static_assert(offsetof(UNPC_Army2_AnimBlueprint_C, AnimGraphNode_SaveCachedPose) == 0x0D40);
static_assert(offsetof(UNPC_Army2_AnimBlueprint_C, AI) == 0x0E98);
static_assert(offsetof(UNPC_Army2_AnimBlueprint_C, HeadRot) == 0x0EA0);
