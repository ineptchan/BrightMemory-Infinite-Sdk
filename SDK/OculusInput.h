
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

/// Enum /Script/OculusInput.ESystemGestureBehavior
/// Size: 0x01 (1 bytes)
enum class ESystemGestureBehavior : uint8_t
{
	ESystemGestureBehavior__None                                                     = 0,
	ESystemGestureBehavior__SwapMaterial                                             = 1
};

/// Enum /Script/OculusInput.EConfidenceBehavior
/// Size: 0x01 (1 bytes)
enum class EConfidenceBehavior : uint8_t
{
	EConfidenceBehavior__None                                                        = 0,
	EConfidenceBehavior__HideActor                                                   = 1
};

/// Enum /Script/OculusInput.EBone
/// Size: 0x01 (1 bytes)
enum class EBone : uint8_t
{
	EBone__Wrist_Root                                                                = 0,
	EBone__Hand_Start                                                                = 0,
	EBone__Forearm_Stub                                                              = 1,
	EBone__Thumb                                                                     = 2,
	EBone__Thumb5                                                                    = 3,
	EBone__Thumb6                                                                    = 4,
	EBone__Thumb7                                                                    = 5,
	EBone__Index                                                                     = 6,
	EBone__Index9                                                                    = 7,
	EBone__Index10                                                                   = 8,
	EBone__Middle                                                                    = 9,
	EBone__Middle12                                                                  = 10,
	EBone__Middle13                                                                  = 11,
	EBone__Ring                                                                      = 12,
	EBone__Ring15                                                                    = 13,
	EBone__Ring16                                                                    = 14,
	EBone__Pinky                                                                     = 15,
	EBone__Pinky18                                                                   = 16,
	EBone__Pinky19                                                                   = 17,
	EBone__Pinky20                                                                   = 18,
	EBone__Thumb_Tip                                                                 = 19,
	EBone__Max_Skinnable                                                             = 19,
	EBone__Index_Tip                                                                 = 20,
	EBone__Middle_Tip                                                                = 21,
	EBone__Ring_Tip                                                                  = 22,
	EBone__Pinky_Tip                                                                 = 23,
	EBone__Hand_End                                                                  = 24,
	EBone__Bone_Max                                                                  = 24,
	EBone__Invalid                                                                   = 25
};

/// Enum /Script/OculusInput.ETrackingConfidence
/// Size: 0x01 (1 bytes)
enum class ETrackingConfidence : uint8_t
{
	ETrackingConfidence__Low                                                         = 0,
	ETrackingConfidence__High                                                        = 1
};

/// Enum /Script/OculusInput.EOculusHandType
/// Size: 0x01 (1 bytes)
enum class EOculusHandType : uint8_t
{
	EOculusHandType__None                                                            = 0,
	EOculusHandType__HandLeft                                                        = 1,
	EOculusHandType__HandRight                                                       = 2
};

/// Struct /Script/OculusInput.OculusCapsuleCollider
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FOculusCapsuleCollider
{ 
	class UCapsuleComponent*                           Capsule;                                                    // 0x0000   (0x0008)  
	EBone                                              BoneId;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Class /Script/OculusInput.OculusHandComponent
/// Size: 0x0890 (2192 bytes) (0x0007F8 - 0x000890) align 16 MaxSize: 0x0890
class UOculusHandComponent : public UPoseableMeshComponent
{ 
public:
	EOculusHandType                                    SkeletonType;                                               // 0x07F8   (0x0001)  
	EOculusHandType                                    MeshType;                                                   // 0x07F9   (0x0001)  
	EConfidenceBehavior                                ConfidenceBehavior;                                         // 0x07FA   (0x0001)  
	ESystemGestureBehavior                             SystemGestureBehavior;                                      // 0x07FB   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x07FC   (0x0004)  MISSED
	class UMaterialInterface*                          SystemGestureMaterial;                                      // 0x0800   (0x0008)  
	bool                                               bInitializePhysics;                                         // 0x0808   (0x0001)  
	bool                                               bUpdateHandScale;                                           // 0x0809   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x080A   (0x0006)  MISSED
	class UMaterialInterface*                          MaterialOverride;                                           // 0x0810   (0x0008)  
	TMap<EBone, FName>                                 BoneNameMappings;                                           // 0x0818   (0x0050)  
	TArray<FOculusCapsuleCollider>                     CollisionCapsules;                                          // 0x0868   (0x0010)  
	bool                                               bSkeletalMeshInitialized;                                   // 0x0878   (0x0001)  
	unsigned char                                      UnknownData02_7[0x17];                                      // 0x0879   (0x0017)  MISSED
};

/// Class /Script/OculusInput.OculusInputFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOculusInputFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/OculusInput.OculusInputFunctionLibrary.IsPointerPoseValid
	// bool IsPointerPoseValid(EOculusHandType DeviceHand, int32_t ControllerIndex);                                            // [0x10c3330] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusInput.OculusInputFunctionLibrary.IsHandTrackingEnabled
	// bool IsHandTrackingEnabled();                                                                                            // [0x10c3300] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusInput.OculusInputFunctionLibrary.InitializeHandPhysics
	// TArray<FOculusCapsuleCollider> InitializeHandPhysics(EOculusHandType SkeletonType, class USkinnedMeshComponent* HandComponent, float WorldToMeters); // [0x10c31c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusInput.OculusInputFunctionLibrary.GetTrackingConfidence
	// ETrackingConfidence GetTrackingConfidence(EOculusHandType DeviceHand, int32_t ControllerIndex);                          // [0x10c30f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusInput.OculusInputFunctionLibrary.GetPointerPose
	// FTransform GetPointerPose(EOculusHandType DeviceHand, int32_t ControllerIndex);                                          // [0x10c2ff0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusInput.OculusInputFunctionLibrary.GetHandSkeletalMesh
	// bool GetHandSkeletalMesh(class USkeletalMesh* HandSkeletalMesh, EOculusHandType SkeletonType, EOculusHandType MeshType, float WorldToMeters); // [0x10c2ea0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusInput.OculusInputFunctionLibrary.GetHandScale
	// float GetHandScale(EOculusHandType DeviceHand, int32_t ControllerIndex);                                                 // [0x10c2dd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusInput.OculusInputFunctionLibrary.GetDominantHand
	// EOculusHandType GetDominantHand(int32_t ControllerIndex);                                                                // [0x10c2d40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusInput.OculusInputFunctionLibrary.GetBoneRotation
	// FQuat GetBoneRotation(EOculusHandType DeviceHand, EBone BoneId, int32_t ControllerIndex);                                // [0x10c2c30] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusInput.OculusInputFunctionLibrary.GetBoneName
	// FString GetBoneName(EBone BoneId);                                                                                       // [0x10c2b60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

#pragma pack(pop)


static_assert(sizeof(FOculusCapsuleCollider) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UOculusHandComponent) == 0x0890); // 2192 bytes (0x0007F8 - 0x000890)
static_assert(sizeof(UOculusInputFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(offsetof(FOculusCapsuleCollider, Capsule) == 0x0000);
static_assert(offsetof(FOculusCapsuleCollider, BoneId) == 0x0008);
static_assert(offsetof(UOculusHandComponent, SkeletonType) == 0x07F8);
static_assert(offsetof(UOculusHandComponent, MeshType) == 0x07F9);
static_assert(offsetof(UOculusHandComponent, ConfidenceBehavior) == 0x07FA);
static_assert(offsetof(UOculusHandComponent, SystemGestureBehavior) == 0x07FB);
static_assert(offsetof(UOculusHandComponent, SystemGestureMaterial) == 0x0800);
static_assert(offsetof(UOculusHandComponent, MaterialOverride) == 0x0810);
static_assert(offsetof(UOculusHandComponent, BoneNameMappings) == 0x0818);
static_assert(offsetof(UOculusHandComponent, CollisionCapsules) == 0x0868);
