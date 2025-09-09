
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PhysXVehicles

#pragma pack(push, 0x1)

/// Class /Game/VehicleAdv/Vehicle/VehicleAnimationBlueprint.VehicleAnimationBlueprint_C
/// Size: 0x3960 (14688 bytes) (0x000A50 - 0x003960) align 16 MaxSize: 0x3960
class UVehicleAnimationBlueprint_C : public UVehicleAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0A50   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0A58   (0x0030)  
	FAnimNode_WheelHandler                             AnimGraphNode_WheelHandler;                                 // 0x0A88   (0x00E0)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0B68   (0x0020)  
	FAnimNode_MeshSpaceRefPose                         AnimGraphNode_MeshRefPose;                                  // 0x0B88   (0x0010)  
	FAnimNode_CopyBone                                 AnimGraphNode_CopyBone;                                     // 0x0B98   (0x00F0)  
	FAnimNode_CopyBone                                 AnimGraphNode_CopyBone0;                                    // 0x0C88   (0x00F0)  
	FAnimNode_CopyBone                                 AnimGraphNode_CopyBone1;                                    // 0x0D78   (0x00F0)  
	FAnimNode_CopyBone                                 AnimGraphNode_CopyBone2;                                    // 0x0E68   (0x00F0)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0F58   (0x0008)  MISSED
	FAnimNode_LookAt                                   AnimGraphNode_LookAt;                                       // 0x0F60   (0x01B0)  
	FAnimNode_LookAt                                   AnimGraphNode_LookAt3;                                      // 0x1110   (0x01B0)  
	FAnimNode_LookAt                                   AnimGraphNode_LookAt4;                                      // 0x12C0   (0x01B0)  
	FAnimNode_LookAt                                   AnimGraphNode_LookAt5;                                      // 0x1470   (0x01B0)  
	FAnimNode_LookAt                                   AnimGraphNode_LookAt6;                                      // 0x1620   (0x01B0)  
	FAnimNode_LookAt                                   AnimGraphNode_LookAt7;                                      // 0x17D0   (0x01B0)  
	FAnimNode_CopyBone                                 AnimGraphNode_CopyBone8;                                    // 0x1980   (0x00F0)  
	FAnimNode_CopyBone                                 AnimGraphNode_CopyBone9;                                    // 0x1A70   (0x00F0)  
	FAnimNode_CopyBone                                 AnimGraphNode_CopyBone10;                                   // 0x1B60   (0x00F0)  
	FAnimNode_CopyBone                                 AnimGraphNode_CopyBone11;                                   // 0x1C50   (0x00F0)  
	FAnimNode_CopyBone                                 AnimGraphNode_CopyBone12;                                   // 0x1D40   (0x00F0)  
	FAnimNode_LookAt                                   AnimGraphNode_LookAt13;                                     // 0x1E30   (0x01B0)  
	FAnimNode_LookAt                                   AnimGraphNode_LookAt14;                                     // 0x1FE0   (0x01B0)  
	FAnimNode_LookAt                                   AnimGraphNode_LookAt15;                                     // 0x2190   (0x01B0)  
	FAnimNode_LookAt                                   AnimGraphNode_LookAt16;                                     // 0x2340   (0x01B0)  
	FAnimNode_CopyBone                                 AnimGraphNode_CopyBone17;                                   // 0x24F0   (0x00F0)  
	FAnimNode_CopyBone                                 AnimGraphNode_CopyBone18;                                   // 0x25E0   (0x00F0)  
	FAnimNode_CopyBone                                 AnimGraphNode_CopyBone19;                                   // 0x26D0   (0x00F0)  
	FAnimNode_CopyBone                                 AnimGraphNode_CopyBone20;                                   // 0x27C0   (0x00F0)  
	FAnimNode_CopyBone                                 AnimGraphNode_CopyBone21;                                   // 0x28B0   (0x00F0)  
	FAnimNode_CopyBone                                 AnimGraphNode_CopyBone22;                                   // 0x29A0   (0x00F0)  
	FAnimNode_CopyBone                                 AnimGraphNode_CopyBone23;                                   // 0x2A90   (0x00F0)  
	FAnimNode_LookAt                                   AnimGraphNode_LookAt24;                                     // 0x2B80   (0x01B0)  
	FAnimNode_CopyBone                                 AnimGraphNode_CopyBone25;                                   // 0x2D30   (0x00F0)  
	FAnimNode_LookAt                                   AnimGraphNode_LookAt26;                                     // 0x2E20   (0x01B0)  
	FAnimNode_LookAt                                   AnimGraphNode_LookAt27;                                     // 0x2FD0   (0x01B0)  
	FAnimNode_LookAt                                   AnimGraphNode_LookAt28;                                     // 0x3180   (0x01B0)  
	FAnimNode_CopyBone                                 AnimGraphNode_CopyBone29;                                   // 0x3330   (0x00F0)  
	FAnimNode_CopyBone                                 AnimGraphNode_CopyBone30;                                   // 0x3420   (0x00F0)  
	FAnimNode_CopyBone                                 AnimGraphNode_CopyBone31;                                   // 0x3510   (0x00F0)  
	FAnimNode_LookAt                                   AnimGraphNode_LookAt32;                                     // 0x3600   (0x01B0)  
	FAnimNode_LookAt                                   AnimGraphNode_LookAt33;                                     // 0x37B0   (0x01B0)  


	/// Functions
	// Function /Game/VehicleAdv/Vehicle/VehicleAnimationBlueprint.VehicleAnimationBlueprint_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x148e900] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/VehicleAdv/Vehicle/VehicleAnimationBlueprint.VehicleAnimationBlueprint_C.ExecuteUbergraph_VehicleAnimationBlueprint
	// void ExecuteUbergraph_VehicleAnimationBlueprint(int32_t EntryPoint);                                                     // [0x148e900] Final                
};

#pragma pack(pop)


static_assert(sizeof(UVehicleAnimationBlueprint_C) == 0x3960); // 14688 bytes (0x000A50 - 0x003960)
static_assert(offsetof(UVehicleAnimationBlueprint_C, UberGraphFrame) == 0x0A50);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_Root) == 0x0A58);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_WheelHandler) == 0x0A88);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_ComponentToLocalSpace) == 0x0B68);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_MeshRefPose) == 0x0B88);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_CopyBone) == 0x0B98);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_CopyBone0) == 0x0C88);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_CopyBone1) == 0x0D78);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_CopyBone2) == 0x0E68);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_LookAt) == 0x0F60);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_LookAt3) == 0x1110);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_LookAt4) == 0x12C0);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_LookAt5) == 0x1470);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_LookAt6) == 0x1620);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_LookAt7) == 0x17D0);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_CopyBone8) == 0x1980);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_CopyBone9) == 0x1A70);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_CopyBone10) == 0x1B60);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_CopyBone11) == 0x1C50);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_CopyBone12) == 0x1D40);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_LookAt13) == 0x1E30);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_LookAt14) == 0x1FE0);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_LookAt15) == 0x2190);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_LookAt16) == 0x2340);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_CopyBone17) == 0x24F0);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_CopyBone18) == 0x25E0);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_CopyBone19) == 0x26D0);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_CopyBone20) == 0x27C0);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_CopyBone21) == 0x28B0);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_CopyBone22) == 0x29A0);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_CopyBone23) == 0x2A90);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_LookAt24) == 0x2B80);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_CopyBone25) == 0x2D30);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_LookAt26) == 0x2E20);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_LookAt27) == 0x2FD0);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_LookAt28) == 0x3180);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_CopyBone29) == 0x3330);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_CopyBone30) == 0x3420);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_CopyBone31) == 0x3510);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_LookAt32) == 0x3600);
static_assert(offsetof(UVehicleAnimationBlueprint_C, AnimGraphNode_LookAt33) == 0x37B0);
