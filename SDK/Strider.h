
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/Strider.EHyperExtensionFixMethod
/// Size: 0x01 (1 bytes)
enum class EHyperExtensionFixMethod : uint8_t
{
	EHyperExtensionFixMethod__None                                                   = 0,
	EHyperExtensionFixMethod__MoveFootTowardsThigh                                   = 1,
	EHyperExtensionFixMethod__MoveFootUnderThigh                                     = 2
};

/// Enum /Script/Strider.ESlopeWarpQuality
/// Size: 0x01 (1 bytes)
enum class ESlopeWarpQuality : uint8_t
{
	ESlopeWarpQuality__Capsule                                                       = 0,
	ESlopeWarpQuality__PerFootRay                                                    = 1,
	ESlopeWarpQuality__PerFootShape                                                  = 2,
	ESlopeWarpQuality__LODBased                                                      = 3
};

/// Enum /Script/Strider.ESlopeRollCompensation
/// Size: 0x01 (1 bytes)
enum class ESlopeRollCompensation : uint8_t
{
	ESlopeRollCompensation__None                                                     = 0,
	ESlopeRollCompensation__AdjustHips                                               = 1,
	ESlopeRollCompensation__AdjustFeet                                               = 2
};

/// Enum /Script/Strider.ESlopeDetectionMode
/// Size: 0x01 (1 bytes)
enum class ESlopeDetectionMode : uint8_t
{
	ESlopeDetectionMode__ManualSlope                                                 = 0,
	ESlopeDetectionMode__AutomaticSlope                                              = 1
};

/// Enum /Script/Strider.EStrideVectorMethod
/// Size: 0x01 (1 bytes)
enum class EStrideVectorMethod : uint8_t
{
	EStrideVectorMethod__ManualVelocity                                              = 0,
	EStrideVectorMethod__ActorVelocity                                               = 1
};

/// Class /Script/Strider.StriderMath
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UStriderMath : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Strider.StriderMath.WrapAngle
	// float WrapAngle(float Angle);                                                                                            // [0xbddac0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Strider.StriderMath.MoveTowardVector
	// void MoveTowardVector(FVector& InStart, FVector& End, float MaxDelta);                                                   // [0xbdd990] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Strider.StriderMath.MoveTowardAngle
	// float MoveTowardAngle(float StartAngle, float EndAngle, float MaxDelta);                                                 // [0xbdd870] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Strider.StriderMath.MoveToward
	// float MoveToward(float Start, float End, float MaxDelta);                                                                // [0xbdd750] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Strider.StriderMath.MoveComponentsToward
	// void MoveComponentsToward(FVector& InStart, FVector& End, float MaxDelta);                                               // [0xbdd620] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Strider.StriderMath.GetRotationRelativeToVelocity
	// float GetRotationRelativeToVelocity(class AActor* Actor);                                                                // [0xbdd590] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Strider.StriderMath.GetNextCardinalDirection
	// int32_t GetNextCardinalDirection(int32_t CurrentCardinalDirection, float RelativeDirection, float StepDelta, float SkipDelta); // [0xbdd450] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Strider.StriderMath.GetAngleDelta
	// float GetAngleDelta(float StartAngle, float EndAngle);                                                                   // [0xbdd380] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Strider.StriderMath.CalculateStrideScale
	// float CalculateStrideScale(float TotalSpeedScale, float PlayRate);                                                       // [0xbdd2b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Strider.StriderMath.CalculatePlayRate
	// float CalculatePlayRate(float TotalSpeedScale, float PlaybackWeight, float MinPlayRate, float MaxPlayRate);              // [0xbdd150] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Strider.StriderMath.CalculateCircleStrafeDirectionDelta
	// float CalculateCircleStrafeDirectionDelta(float LastDirection, float Direction, float DeltaTime);                        // [0xbdd030] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Strider.StriderMath.AngleBetween
	// float AngleBetween(FVector& A, FVector& B);                                                                              // [0xbdcf40] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Struct /Script/Strider.BoneChainLink
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FBoneChainLink
{ 
	FBoneReference                                     Bone;                                                       // 0x0000   (0x0010)  
	float                                              Weight;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/Strider.StriderBoneChain
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FStriderBoneChain
{ 
	TArray<FBoneChainLink>                             BoneChain;                                                  // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0010   (0x0010)  MISSED
};

/// Struct /Script/Strider.AnimNode_AccelerationWarp
/// Size: 0x0070 (112 bytes) (0x000010 - 0x000070) align 8 MaxSize: 0x0070
struct FAnimNode_AccelerationWarp : FAnimNode_Base
{ 
	FPoseLink                                          InputPose;                                                  // 0x0010   (0x0010)  
	float                                              Acceleration;                                               // 0x0020   (0x0004)  
	float                                              Direction;                                                  // 0x0024   (0x0004)  
	float                                              Alpha;                                                      // 0x0028   (0x0004)  
	FVector                                            UpAxis;                                                     // 0x002C   (0x000C)  
	float                                              TorsoBendRatio;                                             // 0x0038   (0x0004)  
	float                                              MaxTorsoBend;                                               // 0x003C   (0x0004)  
	float                                              Smoothing;                                                  // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FStriderBoneChain                                  SpineChain;                                                 // 0x0048   (0x0020)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0068   (0x0008)  MISSED
};

/// Struct /Script/Strider.AnimNode_BankWarp
/// Size: 0x00A0 (160 bytes) (0x000010 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FAnimNode_BankWarp : FAnimNode_Base
{ 
	FPoseLink                                          InputPose;                                                  // 0x0010   (0x0010)  
	float                                              BankValue;                                                  // 0x0020   (0x0004)  
	float                                              Alpha;                                                      // 0x0024   (0x0004)  
	FVector                                            UpAxis;                                                     // 0x0028   (0x000C)  
	FVector                                            ForwardAxis;                                                // 0x0034   (0x000C)  
	float                                              TwistRate;                                                  // 0x0040   (0x0004)  
	float                                              MaxTwist;                                                   // 0x0044   (0x0004)  
	float                                              LeanRate;                                                   // 0x0048   (0x0004)  
	float                                              MaxLean;                                                    // 0x004C   (0x0004)  
	float                                              Smoothing;                                                  // 0x0050   (0x0004)  
	FBoneReference                                     RootBone;                                                   // 0x0054   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0064   (0x0004)  MISSED
	FStriderBoneChain                                  SpineChain;                                                 // 0x0068   (0x0020)  
	TArray<FBoneReference>                             RootBonesToAdjust;                                          // 0x0088   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0098   (0x0008)  MISSED
};

/// Struct /Script/Strider.FootLockLimbDefinition
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 16 MaxSize: 0x00B0
struct FFootLockLimbDefinition
{ 
	FBoneReference                                     FootBone;                                                   // 0x0000   (0x0010)  
	FBoneReference                                     ToeBone;                                                    // 0x0010   (0x0010)  
	FBoneReference                                     IkTarget;                                                   // 0x0020   (0x0010)  
	int32_t                                            LimbBoneCount;                                              // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x7C];                                      // 0x0034   (0x007C)  MISSED
};

/// Struct /Script/Strider.AnimNode_FootLocker
/// Size: 0x0280 (640 bytes) (0x0000C8 - 0x000280) align 16 MaxSize: 0x0280
struct FAnimNode_FootLocker : FAnimNode_SkeletalControlBase
{ 
	bool                                               bLeftFootLock;                                              // 0x00C8   (0x0001)  
	bool                                               bRightFootLock;                                             // 0x00C9   (0x0001)  
	EHyperExtensionFixMethod                           LegHyperExtensionFixMethod;                                 // 0x00CA   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x00CB   (0x0001)  MISSED
	float                                              AllowLegExtensionRatio;                                     // 0x00CC   (0x0004)  
	float                                              LockReleaseSmoothTime;                                      // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x00D4   (0x000C)  MISSED
	FFootLockLimbDefinition                            LeftFootDefinition;                                         // 0x00E0   (0x00B0)  
	FFootLockLimbDefinition                            RightFootDefinition;                                        // 0x0190   (0x00B0)  
	unsigned char                                      UnknownData02_7[0x40];                                      // 0x0240   (0x0040)  MISSED
};

/// Struct /Script/Strider.AnimNode_OrientationWarp
/// Size: 0x0090 (144 bytes) (0x000010 - 0x000090) align 8 MaxSize: 0x0090
struct FAnimNode_OrientationWarp : FAnimNode_Base
{ 
	FPoseLink                                          InputPose;                                                  // 0x0010   (0x0010)  
	float                                              Direction;                                                  // 0x0020   (0x0004)  
	float                                              Offset;                                                     // 0x0024   (0x0004)  
	float                                              UpperBodyAlpha;                                             // 0x0028   (0x0004)  
	FVector                                            UpAxis;                                                     // 0x002C   (0x000C)  
	float                                              Alpha;                                                      // 0x0038   (0x0004)  
	float                                              MaxWarpDelta;                                               // 0x003C   (0x0004)  
	float                                              Smoothing;                                                  // 0x0040   (0x0004)  
	FBoneReference                                     RootBone;                                                   // 0x0044   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FStriderBoneChain                                  SpineChain;                                                 // 0x0058   (0x0020)  
	TArray<FBoneReference>                             RootBonesToCounterAdjust;                                   // 0x0078   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Struct /Script/Strider.HipAdjustment
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FHipAdjustment
{ 
	FBoneReference                                     Hips;                                                       // 0x0000   (0x0010)  
	float                                              AdjustmentRatio;                                            // 0x0010   (0x0004)  
	float                                              MaxRecoveryRate;                                            // 0x0014   (0x0004)  
};

/// Struct /Script/Strider.LimbDefinition
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 16 MaxSize: 0x0080
struct FLimbDefinition
{ 
	FBoneReference                                     Tip;                                                        // 0x0000   (0x0010)  
	FBoneReference                                     IkTarget;                                                   // 0x0010   (0x0010)  
	int32_t                                            BoneCount;                                                  // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x5C];                                      // 0x0024   (0x005C)  MISSED
};

/// Struct /Script/Strider.AnimNode_SlopeWarp
/// Size: 0x01B0 (432 bytes) (0x0000C8 - 0x0001B0) align 16 MaxSize: 0x01B0
struct FAnimNode_SlopeWarp : FAnimNode_SkeletalControlBase
{ 
	FVector                                            SlopeNormal;                                                // 0x00C8   (0x000C)  
	FVector                                            SlopePoint;                                                 // 0x00D4   (0x000C)  
	ESlopeDetectionMode                                SlopeDetectionMode;                                         // 0x00E0   (0x0001)  
	ESlopeRollCompensation                             SlopeRollCompensation;                                      // 0x00E1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00E2   (0x0002)  MISSED
	FVector                                            IKRootLeftVector;                                           // 0x00E4   (0x000C)  
	float                                              MaxSlopeAngle;                                              // 0x00F0   (0x0004)  
	float                                              HeightOffset;                                               // 0x00F4   (0x0004)  
	float                                              SlopeSmoothingRate;                                         // 0x00F8   (0x0004)  
	float                                              AllowExtensionPercent;                                      // 0x00FC   (0x0004)  
	float                                              DownSlopeShiftRate;                                         // 0x0100   (0x0004)  
	FBoneReference                                     IkRoot;                                                     // 0x0104   (0x0010)  
	FHipAdjustment                                     HipAdjustment;                                              // 0x0114   (0x0018)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x012C   (0x0004)  MISSED
	TArray<FLimbDefinition>                            Limbs;                                                      // 0x0130   (0x0010)  
	TArray<FBoneReference>                             AdditionalBonesToAdjustWithHips;                            // 0x0140   (0x0010)  
	unsigned char                                      UnknownData02_7[0x60];                                      // 0x0150   (0x0060)  MISSED
};

/// Struct /Script/Strider.StridePivot
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 MaxSize: 0x0060
struct FStridePivot
{ 
	FBoneReference                                     Root;                                                       // 0x0000   (0x0010)  
	bool                                               bProjectToGround;                                           // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              Offset;                                                     // 0x0014   (0x0004)  
	EStrideVectorMethod                                StrideVectorMethod;                                         // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	float                                              Smoothing;                                                  // 0x001C   (0x0004)  
	bool                                               bChooseNearestAxis;                                         // 0x0020   (0x0001)  
	unsigned char                                      UnknownData02_7[0x3F];                                      // 0x0021   (0x003F)  MISSED
};

/// Struct /Script/Strider.AnimNode_StrideWarp
/// Size: 0x0190 (400 bytes) (0x0000C8 - 0x000190) align 16 MaxSize: 0x0190
struct FAnimNode_StrideWarp : FAnimNode_SkeletalControlBase
{ 
	float                                              StrideScale;                                                // 0x00C8   (0x0004)  
	float                                              Direction;                                                  // 0x00CC   (0x0004)  
	float                                              Twist;                                                      // 0x00D0   (0x0004)  
	float                                              AllowExtensionPercent;                                      // 0x00D4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00D8   (0x0008)  MISSED
	FStridePivot                                       StridePivot;                                                // 0x00E0   (0x0060)  
	FHipAdjustment                                     HipAdjustment;                                              // 0x0140   (0x0018)  
	TArray<FLimbDefinition>                            Limbs;                                                      // 0x0158   (0x0010)  
	TArray<FBoneReference>                             AdditionalBonesToAdjustWithHips;                            // 0x0168   (0x0010)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0178   (0x0018)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UStriderMath) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FBoneChainLink) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FStriderBoneChain) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FAnimNode_AccelerationWarp) == 0x0070); // 112 bytes (0x000010 - 0x000070)
static_assert(sizeof(FAnimNode_BankWarp) == 0x00A0); // 160 bytes (0x000010 - 0x0000A0)
static_assert(sizeof(FFootLockLimbDefinition) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(FAnimNode_FootLocker) == 0x0280); // 640 bytes (0x0000C8 - 0x000280)
static_assert(sizeof(FAnimNode_OrientationWarp) == 0x0090); // 144 bytes (0x000010 - 0x000090)
static_assert(sizeof(FHipAdjustment) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FLimbDefinition) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FAnimNode_SlopeWarp) == 0x01B0); // 432 bytes (0x0000C8 - 0x0001B0)
static_assert(sizeof(FStridePivot) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FAnimNode_StrideWarp) == 0x0190); // 400 bytes (0x0000C8 - 0x000190)
static_assert(offsetof(FBoneChainLink, Bone) == 0x0000);
static_assert(offsetof(FStriderBoneChain, BoneChain) == 0x0000);
static_assert(offsetof(FAnimNode_AccelerationWarp, InputPose) == 0x0010);
static_assert(offsetof(FAnimNode_AccelerationWarp, UpAxis) == 0x002C);
static_assert(offsetof(FAnimNode_AccelerationWarp, SpineChain) == 0x0048);
static_assert(offsetof(FAnimNode_BankWarp, InputPose) == 0x0010);
static_assert(offsetof(FAnimNode_BankWarp, UpAxis) == 0x0028);
static_assert(offsetof(FAnimNode_BankWarp, ForwardAxis) == 0x0034);
static_assert(offsetof(FAnimNode_BankWarp, RootBone) == 0x0054);
static_assert(offsetof(FAnimNode_BankWarp, SpineChain) == 0x0068);
static_assert(offsetof(FAnimNode_BankWarp, RootBonesToAdjust) == 0x0088);
static_assert(offsetof(FFootLockLimbDefinition, FootBone) == 0x0000);
static_assert(offsetof(FFootLockLimbDefinition, ToeBone) == 0x0010);
static_assert(offsetof(FFootLockLimbDefinition, IkTarget) == 0x0020);
static_assert(offsetof(FAnimNode_FootLocker, LegHyperExtensionFixMethod) == 0x00CA);
static_assert(offsetof(FAnimNode_FootLocker, LeftFootDefinition) == 0x00E0);
static_assert(offsetof(FAnimNode_FootLocker, RightFootDefinition) == 0x0190);
static_assert(offsetof(FAnimNode_OrientationWarp, InputPose) == 0x0010);
static_assert(offsetof(FAnimNode_OrientationWarp, UpAxis) == 0x002C);
static_assert(offsetof(FAnimNode_OrientationWarp, RootBone) == 0x0044);
static_assert(offsetof(FAnimNode_OrientationWarp, SpineChain) == 0x0058);
static_assert(offsetof(FAnimNode_OrientationWarp, RootBonesToCounterAdjust) == 0x0078);
static_assert(offsetof(FHipAdjustment, Hips) == 0x0000);
static_assert(offsetof(FLimbDefinition, Tip) == 0x0000);
static_assert(offsetof(FLimbDefinition, IkTarget) == 0x0010);
static_assert(offsetof(FAnimNode_SlopeWarp, SlopeNormal) == 0x00C8);
static_assert(offsetof(FAnimNode_SlopeWarp, SlopePoint) == 0x00D4);
static_assert(offsetof(FAnimNode_SlopeWarp, SlopeDetectionMode) == 0x00E0);
static_assert(offsetof(FAnimNode_SlopeWarp, SlopeRollCompensation) == 0x00E1);
static_assert(offsetof(FAnimNode_SlopeWarp, IKRootLeftVector) == 0x00E4);
static_assert(offsetof(FAnimNode_SlopeWarp, IkRoot) == 0x0104);
static_assert(offsetof(FAnimNode_SlopeWarp, HipAdjustment) == 0x0114);
static_assert(offsetof(FAnimNode_SlopeWarp, Limbs) == 0x0130);
static_assert(offsetof(FAnimNode_SlopeWarp, AdditionalBonesToAdjustWithHips) == 0x0140);
static_assert(offsetof(FStridePivot, Root) == 0x0000);
static_assert(offsetof(FStridePivot, StrideVectorMethod) == 0x0018);
static_assert(offsetof(FAnimNode_StrideWarp, StridePivot) == 0x00E0);
static_assert(offsetof(FAnimNode_StrideWarp, HipAdjustment) == 0x0140);
static_assert(offsetof(FAnimNode_StrideWarp, Limbs) == 0x0158);
static_assert(offsetof(FAnimNode_StrideWarp, AdditionalBonesToAdjustWithHips) == 0x0168);
