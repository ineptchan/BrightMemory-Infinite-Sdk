
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
/// dependency: PhysXVehicles
/// dependency: VehicleAdvBP

#pragma pack(push, 0x1)

/// Class /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C
/// Size: 0x0360 (864 bytes) (0x000290 - 0x000360) align 8 MaxSize: 0x0360
class ABMI_CarAI_C : public AWheeledVehicle
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class USphereComponent*                            AutoAnimCheckBox;                                           // 0x0298   (0x0008)  
	class UArrowComponent*                             AutoAnimCop;                                                // 0x02A0   (0x0008)  
	class UParticleSystemComponent*                    Fire_70__D;                                                 // 0x02A8   (0x0008)  
	class UParticleSystemComponent*                    Fire_70__C;                                                 // 0x02B0   (0x0008)  
	class UParticleSystemComponent*                    Fire_70__B;                                                 // 0x02B8   (0x0008)  
	class UParticleSystemComponent*                    Fire_70__A;                                                 // 0x02C0   (0x0008)  
	class UParticleSystemComponent*                    Fire_50__A;                                                 // 0x02C8   (0x0008)  
	class UParticleSystemComponent*                    Fire_30__A;                                                 // 0x02D0   (0x0008)  
	class UParticleSystemComponent*                    WeaponFirePar;                                              // 0x02D8   (0x0008)  
	class UAudioComponent*                             WeaponFireSound;                                            // 0x02E0   (0x0008)  
	class UArrowComponent*                             ParPoint;                                                   // 0x02E8   (0x0008)  
	class UArrowComponent*                             FirePoint;                                                  // 0x02F0   (0x0008)  
	class UStaticMeshComponent*                        GunRot;                                                     // 0x02F8   (0x0008)  
	class UStaticMeshComponent*                        MachineGun;                                                 // 0x0300   (0x0008)  
	class UParticleSystemComponent*                    HitPar;                                                     // 0x0308   (0x0008)  
	class UBoxComponent*                               TouchBox;                                                   // 0x0310   (0x0008)  
	class AVehicleBlueprint_C*                         PlayerCar;                                                  // 0x0318   (0x0008)  
	bool                                               FristSpawn_;                                                // 0x0320   (0x0001)  
	bool                                               PlayerHasTouchCarAISpawnLoc_;                               // 0x0321   (0x0001)  
	bool                                               LosePlayer;                                                 // 0x0322   (0x0001)  
	bool                                               SeePlayer;                                                  // 0x0323   (0x0001)  
	bool                                               PlayerHideHome;                                             // 0x0324   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0325   (0x0003)  MISSED
	TArray<float>                                      WeaponFireRange;                                            // 0x0328   (0x0010)  
	float                                              WeaponHit;                                                  // 0x0338   (0x0004)  
	bool                                               StopFire_;                                                  // 0x033C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x033D   (0x0003)  MISSED
	class UPostProcessComponent*                       LowHealth_PostProcess;                                      // 0x0340   (0x0008)  
	class UAudioComponent*                             LowHealthAudio;                                             // 0x0348   (0x0008)  
	bool                                               IsDead_;                                                    // 0x0350   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0351   (0x0003)  MISSED
	FName                                              PathTag;                                                    // 0x0354   (0x0008)  
	float                                              PlayerDistance;                                             // 0x035C   (0x0004)  


	/// Functions
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Get Path
	// void GetPath(TArray<ACarAI_Path_C*>& Array, float& NewParam);                                                            // [0x148e900] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_ShieldHit
	// void Send_ShieldHit();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_HitSword
	// void Send_HitSword(float Hit, int32_t FiretType);                                                                        // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_EMP
	// void Send_EMP(float Hit);                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_MeleePower
	// void Send_MeleePower(float Hit);                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_UpLightSword
	// void Send_UpLightSword(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_HuaChan
	// void Send_HuaChan();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_KanJi
	// void Send_KanJi(float Hit);                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_ZhaDi
	// void Send_ZhaDi();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_ShieldHitMeleeOrSword
	// void Send_ShieldHitMeleeOrSword(int32_t Hit);                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_AIQYQ
	// void Send_AIQYQ();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_NearDefu
	// void Send_NearDefu(int32_t FireType);                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_PerfectDefu
	// void Send_PerfectDefu(int32_t FireType);                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_AIFlyQYQ
	// void Send_AIFlyQYQ();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_AIBoat
	// void Send_AIBoat(class UPrimitiveComponent* HitBox, float Hit);                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_AIDEFUHealths
	// void Send_AIDEFUHealths(float DEFUHealth, float BloddHealth, bool HaveDefu_);                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_DisPlayAIHealthUI
	// void Send_DisPlayAIHealthUI(bool Vis_);                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_ForceAIHit
	// void Send_ForceAIHit();                                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_BloodHK
	// void Send_BloodHK();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_DefuHK
	// void Send_DefuHK();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_Add_Alerts
	// void Send_Add_Alerts(float DS);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_Dee_Alert
	// void Send_Dee_Alert();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_ForwardSeePlayer
	// void Send_ForwardSeePlayer();                                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_FootAI_Alert
	// void Send_FootAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_BackSeePlayer
	// void Send_BackSeePlayer();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_ShunAI_Alert
	// void Send_ShunAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_SprintAttack
	// void Send_SprintAttack(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_PlayerQYQAI
	// void Send_PlayerQYQAI(int32_t Number);                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_GERFire
	// void Send_GERFire();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_HealthUIVis
	// void Send_HealthUIVis();                                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_XuLiMelee
	// void Send_XuLiMelee(float Hit);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_GuLouHand_Hit
	// void Send_GuLouHand_Hit(float Hit);                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.VisWeaponRedSight
	// void VisWeaponRedSight();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.HideWeaponRedSight
	// void HideWeaponRedSight();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.ReloadWeaponSmoke
	// void ReloadWeaponSmoke();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.VisQYQ_Tip
	// void VisQYQ_Tip(bool Vis_);                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Race_CarFirePlayer
	// void Race_CarFirePlayer(float Hit);                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Race_CarDead
	// void Race_CarDead();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.ChangeFireModelUI
	// void ChangeFireModelUI(bool VisFitingUI_);                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.VisWeaponHUD
	// void VisWeaponHUD(bool Vis_);                                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.BndEvt__TouchBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__TouchBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.LookPlayer
	// void LookPlayer();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.CarFire
	// void CarFire();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.AutoFindPlayer
	// void AutoFindPlayer();                                                                                                   // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.AIFire
	// void AIFire();                                                                                                           // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.Send_PlayerHitCarAI
	// void Send_PlayerHitCarAI();                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.ForceDead
	// void ForceDead();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI.BMI_CarAI_C.ExecuteUbergraph_BMI_CarAI
	// void ExecuteUbergraph_BMI_CarAI(int32_t EntryPoint);                                                                     // [0x148e900] Final|HasDefaults    
};

/// Class /Game/BMICarAI/Meshes/SkeletalMesh/BMICarAI_AnimBluePrint.BMICarAI_AnimBluePrint_C
/// Size: 0x1260 (4704 bytes) (0x000A50 - 0x001260) align 16 MaxSize: 0x1260
class UBMICarAI_AnimBluePrint_C : public UVehicleAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0A50   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0A58   (0x0030)  
	FAnimNode_MeshSpaceRefPose                         AnimGraphNode_MeshRefPose;                                  // 0x0A88   (0x0010)  
	FAnimNode_WheelHandler                             AnimGraphNode_WheelHandler;                                 // 0x0A98   (0x00E0)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0B78   (0x0008)  MISSED
	FAnimNode_LookAt                                   AnimGraphNode_LookAt;                                       // 0x0B80   (0x01B0)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0D30   (0x0020)  
	FAnimNode_LookAt                                   AnimGraphNode_LookAt0;                                      // 0x0D50   (0x01B0)  
	FAnimNode_LookAt                                   AnimGraphNode_LookAt1;                                      // 0x0F00   (0x01B0)  
	FAnimNode_LookAt                                   AnimGraphNode_LookAt2;                                      // 0x10B0   (0x01B0)  


	/// Functions
	// Function /Game/BMICarAI/Meshes/SkeletalMesh/BMICarAI_AnimBluePrint.BMICarAI_AnimBluePrint_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x148e900] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMICarAI/Meshes/SkeletalMesh/BMICarAI_AnimBluePrint.BMICarAI_AnimBluePrint_C.ExecuteUbergraph_BMICarAI_AnimBluePrint
	// void ExecuteUbergraph_BMICarAI_AnimBluePrint(int32_t EntryPoint);                                                        // [0x148e900] Final                
};

/// Class /Game/BMICarAI/Blueprints/BMI_CarAI_Boom.BMI_CarAI_Boom_C
/// Size: 0x0280 (640 bytes) (0x000220 - 0x000280) align 8 MaxSize: 0x0280
class ABMI_CarAI_Boom_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UParticleSystemComponent*                    VFX_fire_row_horiz_Bright5;                                 // 0x0228   (0x0008)  
	class UParticleSystemComponent*                    VFX_fire_row_horiz_Bright4;                                 // 0x0230   (0x0008)  
	class UParticleSystemComponent*                    VFX_fire_row_horiz_Bright3;                                 // 0x0238   (0x0008)  
	class UParticleSystemComponent*                    VFX_fire_row_horiz_Bright2;                                 // 0x0240   (0x0008)  
	class UParticleSystemComponent*                    VFX_fire_row_horiz_Bright1;                                 // 0x0248   (0x0008)  
	class UParticleSystemComponent*                    VFX_fire_row_horiz_Bright;                                  // 0x0250   (0x0008)  
	class UParticleSystemComponent*                    Smoke2;                                                     // 0x0258   (0x0008)  
	class UParticleSystemComponent*                    Smoke1;                                                     // 0x0260   (0x0008)  
	class UAudioComponent*                             S_Broken_Cue;                                               // 0x0268   (0x0008)  
	class URadialForceComponent*                       RadialForce;                                                // 0x0270   (0x0008)  
	class USkeletalMeshComponent*                      CarBoom;                                                    // 0x0278   (0x0008)  


	/// Functions
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI_Boom.BMI_CarAI_Boom_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/BMICarAI/Blueprints/BMI_CarAI_Boom.BMI_CarAI_Boom_C.ExecuteUbergraph_BMI_CarAI_Boom
	// void ExecuteUbergraph_BMI_CarAI_Boom(int32_t EntryPoint);                                                                // [0x148e900] Final                
};

/// Class /Game/BMICarAI/Blueprints/BP_RTS12_SciFiMilitaryCar_Wheel_B.BP_RTS12_SciFiMilitaryCar_Wheel_B_C
/// Size: 0x00F0 (240 bytes) (0x0000F0 - 0x0000F0) align 8 MaxSize: 0x00F0
class UBP_RTS12_SciFiMilitaryCar_Wheel_B_C : public UVehicleWheel
{ 
public:
};

/// Class /Game/BMICarAI/Blueprints/BP_RTS12_SciFiMilitaryCar_Wheel_F.BP_RTS12_SciFiMilitaryCar_Wheel_F_C
/// Size: 0x00F0 (240 bytes) (0x0000F0 - 0x0000F0) align 8 MaxSize: 0x00F0
class UBP_RTS12_SciFiMilitaryCar_Wheel_F_C : public UVehicleWheel
{ 
public:
};

/// Class /Game/BMICarAI/Blueprints/CarAI_Path.CarAI_Path_C
/// Size: 0x0230 (560 bytes) (0x000220 - 0x000230) align 8 MaxSize: 0x0230
class ACarAI_Path_C : public AActor
{ 
public:
	class USplineComponent*                            Spline;                                                     // 0x0220   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0228   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(ABMI_CarAI_C) == 0x0360); // 864 bytes (0x000290 - 0x000360)
static_assert(sizeof(UBMICarAI_AnimBluePrint_C) == 0x1260); // 4704 bytes (0x000A50 - 0x001260)
static_assert(sizeof(ABMI_CarAI_Boom_C) == 0x0280); // 640 bytes (0x000220 - 0x000280)
static_assert(sizeof(UBP_RTS12_SciFiMilitaryCar_Wheel_B_C) == 0x00F0); // 240 bytes (0x0000F0 - 0x0000F0)
static_assert(sizeof(UBP_RTS12_SciFiMilitaryCar_Wheel_F_C) == 0x00F0); // 240 bytes (0x0000F0 - 0x0000F0)
static_assert(sizeof(ACarAI_Path_C) == 0x0230); // 560 bytes (0x000220 - 0x000230)
static_assert(offsetof(ABMI_CarAI_C, UberGraphFrame) == 0x0290);
static_assert(offsetof(ABMI_CarAI_C, AutoAnimCheckBox) == 0x0298);
static_assert(offsetof(ABMI_CarAI_C, AutoAnimCop) == 0x02A0);
static_assert(offsetof(ABMI_CarAI_C, Fire_70__D) == 0x02A8);
static_assert(offsetof(ABMI_CarAI_C, Fire_70__C) == 0x02B0);
static_assert(offsetof(ABMI_CarAI_C, Fire_70__B) == 0x02B8);
static_assert(offsetof(ABMI_CarAI_C, Fire_70__A) == 0x02C0);
static_assert(offsetof(ABMI_CarAI_C, Fire_50__A) == 0x02C8);
static_assert(offsetof(ABMI_CarAI_C, Fire_30__A) == 0x02D0);
static_assert(offsetof(ABMI_CarAI_C, WeaponFirePar) == 0x02D8);
static_assert(offsetof(ABMI_CarAI_C, WeaponFireSound) == 0x02E0);
static_assert(offsetof(ABMI_CarAI_C, ParPoint) == 0x02E8);
static_assert(offsetof(ABMI_CarAI_C, FirePoint) == 0x02F0);
static_assert(offsetof(ABMI_CarAI_C, GunRot) == 0x02F8);
static_assert(offsetof(ABMI_CarAI_C, MachineGun) == 0x0300);
static_assert(offsetof(ABMI_CarAI_C, HitPar) == 0x0308);
static_assert(offsetof(ABMI_CarAI_C, TouchBox) == 0x0310);
static_assert(offsetof(ABMI_CarAI_C, PlayerCar) == 0x0318);
static_assert(offsetof(ABMI_CarAI_C, WeaponFireRange) == 0x0328);
static_assert(offsetof(ABMI_CarAI_C, LowHealth_PostProcess) == 0x0340);
static_assert(offsetof(ABMI_CarAI_C, LowHealthAudio) == 0x0348);
static_assert(offsetof(ABMI_CarAI_C, PathTag) == 0x0354);
static_assert(offsetof(UBMICarAI_AnimBluePrint_C, UberGraphFrame) == 0x0A50);
static_assert(offsetof(UBMICarAI_AnimBluePrint_C, AnimGraphNode_Root) == 0x0A58);
static_assert(offsetof(UBMICarAI_AnimBluePrint_C, AnimGraphNode_MeshRefPose) == 0x0A88);
static_assert(offsetof(UBMICarAI_AnimBluePrint_C, AnimGraphNode_WheelHandler) == 0x0A98);
static_assert(offsetof(UBMICarAI_AnimBluePrint_C, AnimGraphNode_LookAt) == 0x0B80);
static_assert(offsetof(UBMICarAI_AnimBluePrint_C, AnimGraphNode_ComponentToLocalSpace) == 0x0D30);
static_assert(offsetof(UBMICarAI_AnimBluePrint_C, AnimGraphNode_LookAt0) == 0x0D50);
static_assert(offsetof(UBMICarAI_AnimBluePrint_C, AnimGraphNode_LookAt1) == 0x0F00);
static_assert(offsetof(UBMICarAI_AnimBluePrint_C, AnimGraphNode_LookAt2) == 0x10B0);
static_assert(offsetof(ABMI_CarAI_Boom_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ABMI_CarAI_Boom_C, VFX_fire_row_horiz_Bright5) == 0x0228);
static_assert(offsetof(ABMI_CarAI_Boom_C, VFX_fire_row_horiz_Bright4) == 0x0230);
static_assert(offsetof(ABMI_CarAI_Boom_C, VFX_fire_row_horiz_Bright3) == 0x0238);
static_assert(offsetof(ABMI_CarAI_Boom_C, VFX_fire_row_horiz_Bright2) == 0x0240);
static_assert(offsetof(ABMI_CarAI_Boom_C, VFX_fire_row_horiz_Bright1) == 0x0248);
static_assert(offsetof(ABMI_CarAI_Boom_C, VFX_fire_row_horiz_Bright) == 0x0250);
static_assert(offsetof(ABMI_CarAI_Boom_C, Smoke2) == 0x0258);
static_assert(offsetof(ABMI_CarAI_Boom_C, Smoke1) == 0x0260);
static_assert(offsetof(ABMI_CarAI_Boom_C, S_Broken_Cue) == 0x0268);
static_assert(offsetof(ABMI_CarAI_Boom_C, RadialForce) == 0x0270);
static_assert(offsetof(ABMI_CarAI_Boom_C, CarBoom) == 0x0278);
static_assert(offsetof(ACarAI_Path_C, Spline) == 0x0220);
static_assert(offsetof(ACarAI_Path_C, DefaultSceneRoot) == 0x0228);
