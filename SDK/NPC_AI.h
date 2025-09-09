
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C
/// Size: 0x0869 (2153 bytes) (0x0004B8 - 0x000869) align 16 MaxSize: 0x0869
class ANPC_Army_BMI01_C : public ACharacter
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x04B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04C0   (0x0008)  
	class UParticleSystemComponent*                    PS_FireSmall;                                               // 0x04C8   (0x0008)  
	class UArrowComponent*                             Right_Arrow;                                                // 0x04D0   (0x0008)  
	class UArrowComponent*                             Left_Arrow;                                                 // 0x04D8   (0x0008)  
	class UParticleSystemComponent*                    AirEdm;                                                     // 0x04E0   (0x0008)  
	class UArrowComponent*                             ChuJueLoc;                                                  // 0x04E8   (0x0008)  
	class UWidgetComponent*                            HealthAI;                                                   // 0x04F0   (0x0008)  
	class UStaticMeshComponent*                        NPC_Army_HeadRou;                                           // 0x04F8   (0x0008)  
	class UBoxComponent*                               RightFootBox;                                               // 0x0500   (0x0008)  
	class UBoxComponent*                               LeftFootBox;                                                // 0x0508   (0x0008)  
	class UBoxComponent*                               RightHandBox;                                               // 0x0510   (0x0008)  
	class UBoxComponent*                               LeftHandBox;                                                // 0x0518   (0x0008)  
	class UParticleSystemComponent*                    NPC_ShouDianTong;                                           // 0x0520   (0x0008)  
	class UArrowComponent*                             ParPoint;                                                   // 0x0528   (0x0008)  
	class UArrowComponent*                             AirZ;                                                       // 0x0530   (0x0008)  
	class USphereComponent*                            QYQTouch;                                                   // 0x0538   (0x0008)  
	class UAudioComponent*                             FrighingAudio;                                              // 0x0540   (0x0008)  
	class UArrowComponent*                             WeaponFallArrow;                                            // 0x0548   (0x0008)  
	class UArrowComponent*                             BackMovePonit;                                              // 0x0550   (0x0008)  
	class USceneComponent*                             Pivot;                                                      // 0x0558   (0x0008)  
	class UPhysicalAnimationComponent*                 PhysicalAnimation;                                          // 0x0560   (0x0008)  
	class UBoxComponent*                               HeadShot;                                                   // 0x0568   (0x0008)  
	class UArrowComponent*                             Melee_Arrow;                                                // 0x0570   (0x0008)  
	class UArrowComponent*                             RightForward_Arrow;                                         // 0x0578   (0x0008)  
	class UArrowComponent*                             Forward_Arrow;                                              // 0x0580   (0x0008)  
	class UArrowComponent*                             LeftForward_Arrow;                                          // 0x0588   (0x0008)  
	class UAudioComponent*                             WeaponFireSound;                                            // 0x0590   (0x0008)  
	class UParticleSystemComponent*                    WeaponFirePar;                                              // 0x0598   (0x0008)  
	class UPawnSensingComponent*                       PawnSensing;                                                // 0x05A0   (0x0008)  
	class UArrowComponent*                             FirePoint;                                                  // 0x05A8   (0x0008)  
	class USkeletalMeshComponent*                      WeaponMesh;                                                 // 0x05B0   (0x0008)  
	float                                              Timeline_0_Speed_C627F4284F38D16166B9288B6EF32787;          // 0x05B8   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_C627F4284F38D16166B9288B6EF32787;     // 0x05BC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x05BD   (0x0003)  MISSED
	class UTimelineComponent*                          Timeline;                                                   // 0x05C0   (0x0008)  
	float                                              HitSpeed_Speed_24D071ED423285A28EBE4BAEE29BFF65;            // 0x05C8   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    HitSpeed__Direction_24D071ED423285A28EBE4BAEE29BFF65;       // 0x05CC   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x05CD   (0x0003)  MISSED
	class UTimelineComponent*                          HitSpeed;                                                   // 0x05D0   (0x0008)  
	float                                              Melee_Speed_F87D7D204252A12A0F6029A6A203A10E;               // 0x05D8   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Melee__Direction_F87D7D204252A12A0F6029A6A203A10E;          // 0x05DC   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x05DD   (0x0003)  MISSED
	class UTimelineComponent*                          Melee;                                                      // 0x05E0   (0x0008)  
	float                                              WalkToStand_Speed_890A5F734774EAD1C7CA448EA3BA13E8;         // 0x05E8   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    WalkToStand__Direction_890A5F734774EAD1C7CA448EA3BA13E8;    // 0x05EC   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x05ED   (0x0003)  MISSED
	class UTimelineComponent*                          WalkToStand;                                                // 0x05F0   (0x0008)  
	float                                              WalkToRun_Speed_34C4556A4A552517E2933097B284CA15;           // 0x05F8   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    WalkToRun__Direction_34C4556A4A552517E2933097B284CA15;      // 0x05FC   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x05FD   (0x0003)  MISSED
	class UTimelineComponent*                          WalkToRun;                                                  // 0x0600   (0x0008)  
	float                                              RunToWalk_Speed_2AFE5998484B78149D4D4C9C6442CB8C;           // 0x0608   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    RunToWalk__Direction_2AFE5998484B78149D4D4C9C6442CB8C;      // 0x060C   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x060D   (0x0003)  MISSED
	class UTimelineComponent*                          RunToWalk;                                                  // 0x0610   (0x0008)  
	FName                                              AirTouchTag;                                                // 0x0618   (0x0008)  
	FName                                              Phys_Bone;                                                  // 0x0620   (0x0008)  
	FName                                              AirTouchBone;                                               // 0x0628   (0x0008)  
	class UAnimMontage*                                StandHitMon;                                                // 0x0630   (0x0008)  
	class UAnimMontage*                                CrouchHitMon;                                               // 0x0638   (0x0008)  
	class UAnimMontage*                                DeadMon_Forward;                                            // 0x0640   (0x0008)  
	class UAnimMontage*                                DeadMon_Backward;                                           // 0x0648   (0x0008)  
	class UAnimMontage*                                DeadMon_Backward2;                                          // 0x0650   (0x0008)  
	class UAnimMontage*                                DeadMon_Backward3;                                          // 0x0658   (0x0008)  
	class UAnimMontage*                                DeadMon_Left;                                               // 0x0660   (0x0008)  
	class UAnimMontage*                                DeadMon_Right;                                              // 0x0668   (0x0008)  
	TArray<FName>                                      StandHit_Random;                                            // 0x0670   (0x0010)  
	TArray<FName>                                      CrouchHit_Random;                                           // 0x0680   (0x0010)  
	float                                              WeaponHit;                                                  // 0x0690   (0x0004)  
	float                                              AIToPlayerRange;                                            // 0x0694   (0x0004)  
	float                                              AIWalkSpeed;                                                // 0x0698   (0x0004)  
	float                                              Direction;                                                  // 0x069C   (0x0004)  
	float                                              NearMeleeDistance;                                          // 0x06A0   (0x0004)  
	float                                              AIToPlayerRot;                                              // 0x06A4   (0x0004)  
	float                                              AIRunSpeed;                                                 // 0x06A8   (0x0004)  
	float                                              AIHit_AnimTime;                                             // 0x06AC   (0x0004)  
	float                                              HitBackTime;                                                // 0x06B0   (0x0004)  
	float                                              AIHealth;                                                   // 0x06B4   (0x0004)  
	int32_t                                            WalkWardRandom;                                             // 0x06B8   (0x0004)  
	int32_t                                            GetDamage;                                                  // 0x06BC   (0x0004)  
	int32_t                                            StandHitRandom;                                             // 0x06C0   (0x0004)  
	bool                                               IsDead_;                                                    // 0x06C4   (0x0001)  
	bool                                               Is_Fire_;                                                   // 0x06C5   (0x0001)  
	bool                                               CanLookPlayer_;                                             // 0x06C6   (0x0001)  
	bool                                               CanFire_;                                                   // 0x06C7   (0x0001)  
	bool                                               CanSee_;                                                    // 0x06C8   (0x0001)  
	bool                                               IsFreeze_;                                                  // 0x06C9   (0x0001)  
	bool                                               IsCrouch_;                                                  // 0x06CA   (0x0001)  
	bool                                               IsRun_;                                                     // 0x06CB   (0x0001)  
	bool                                               IsWalk_;                                                    // 0x06CC   (0x0001)  
	bool                                               IsStand_;                                                   // 0x06CD   (0x0001)  
	bool                                               IsHit_;                                                     // 0x06CE   (0x0001)  
	bool                                               StandHitOnce_;                                              // 0x06CF   (0x0001)  
	bool                                               IsAirFire_;                                                 // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData07_6[0x7];                                       // 0x06D1   (0x0007)  MISSED
	TArray<float>                                      FireInterval;                                               // 0x06D8   (0x0010)  
	TArray<float>                                      StopFireInterval;                                           // 0x06E8   (0x0010)  
	TArray<float>                                      WeaponFireUpRange;                                          // 0x06F8   (0x0010)  
	TArray<float>                                      NearFireInterval;                                           // 0x0708   (0x0010)  
	TArray<float>                                      FarFireInterval;                                            // 0x0718   (0x0010)  
	TArray<float>                                      WeaponFireRightRange;                                       // 0x0728   (0x0010)  
	bool                                               CanRRot_;                                                   // 0x0738   (0x0001)  
	bool                                               CanLRot_;                                                   // 0x0739   (0x0001)  
	bool                                               CanLRot180_;                                                // 0x073A   (0x0001)  
	bool                                               CanRRot180_;                                                // 0x073B   (0x0001)  
	bool                                               CanLRMove;                                                  // 0x073C   (0x0001)  
	bool                                               IsCanAttack_;                                               // 0x073D   (0x0001)  
	unsigned char                                      UnknownData08_6[0x2];                                       // 0x073E   (0x0002)  MISSED
	int32_t                                            AttackNumber;                                               // 0x0740   (0x0004)  
	float                                              AttackRange;                                                // 0x0744   (0x0004)  
	float                                              SpawnFirePlayerTimeMin;                                     // 0x0748   (0x0004)  
	float                                              SpawnFirePlayerTimeMax;                                     // 0x074C   (0x0004)  
	float                                              SprintRunMax;                                               // 0x0750   (0x0004)  
	unsigned char                                      UnknownData09_6[0x4];                                       // 0x0754   (0x0004)  MISSED
	SDK_UNDEFINED(16,320) /* FMulticastInlineDelegate */ __um(AIDEAD);                                             // 0x0758   (0x0010)  
	bool                                               IsSwordHitTime_;                                            // 0x0768   (0x0001)  
	bool                                               IsAirTime_;                                                 // 0x0769   (0x0001)  
	bool                                               IsPlayerAirUseQYQ_;                                         // 0x076A   (0x0001)  
	bool                                               IsAirAnimFinish_;                                           // 0x076B   (0x0001)  
	bool                                               CanBoken;                                                   // 0x076C   (0x0001)  
	bool                                               IsKanJiorEMP;                                               // 0x076D   (0x0001)  
	unsigned char                                      UnknownData10_6[0x2];                                       // 0x076E   (0x0002)  MISSED
	class USkeletalMeshComponent*                      head;                                                       // 0x0770   (0x0008)  
	class USkeletalMeshComponent*                      LeftHand;                                                   // 0x0778   (0x0008)  
	class USkeletalMeshComponent*                      RightFoot;                                                  // 0x0780   (0x0008)  
	class USkeletalMeshComponent*                      LeftFoot;                                                   // 0x0788   (0x0008)  
	class USkeletalMeshComponent*                      RightHand;                                                  // 0x0790   (0x0008)  
	float                                              AIMAXHealth;                                                // 0x0798   (0x0004)  
	bool                                               XunLuoAI_;                                                  // 0x079C   (0x0001)  
	bool                                               AIXunLuoToFire_;                                            // 0x079D   (0x0001)  
	bool                                               XunLuoAIIsTraceWall;                                        // 0x079E   (0x0001)  
	bool                                               XunLuoFristFindPlayerAI;                                    // 0x079F   (0x0001)  
	bool                                               IshearFindPlayer;                                           // 0x07A0   (0x0001)  
	bool                                               IsSpawn_;                                                   // 0x07A1   (0x0001)  
	unsigned char                                      UnknownData11_6[0x2];                                       // 0x07A2   (0x0002)  MISSED
	int32_t                                            XunLuoType;                                                 // 0x07A4   (0x0004)  
	bool                                               CanStealthKill;                                             // 0x07A8   (0x0001)  
	bool                                               NewPlayerKill_;                                             // 0x07A9   (0x0001)  
	unsigned char                                      UnknownData12_6[0x2];                                       // 0x07AA   (0x0002)  MISSED
	FHitResult                                         HitInfo;                                                    // 0x07AC   (0x008C)  
	float                                              BorkenSlowDistace_;                                         // 0x0838   (0x0004)  
	bool                                               NewPlayerAI_;                                               // 0x083C   (0x0001)  
	unsigned char                                      UnknownData13_6[0x3];                                       // 0x083D   (0x0003)  MISSED
	class ATargetPoint*                                Cover;                                                      // 0x0840   (0x0008)  
	FVector                                            CoverLoc;                                                   // 0x0848   (0x000C)  
	bool                                               CanCover_;                                                  // 0x0854   (0x0001)  
	bool                                               IsFireDead_;                                                // 0x0855   (0x0001)  
	unsigned char                                      UnknownData14_6[0x2];                                       // 0x0856   (0x0002)  MISSED
	class UAudioComponent*                             SearchAudio;                                                // 0x0858   (0x0008)  
	bool                                               MustHideKill_;                                              // 0x0860   (0x0001)  
	unsigned char                                      UnknownData15_6[0x3];                                       // 0x0861   (0x0003)  MISSED
	float                                              MeleeDamage;                                                // 0x0864   (0x0004)  
	bool                                               IsJieShuFanYing_;                                           // 0x0868   (0x0001)  


	/// Functions
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_Add_Alerts
	// void Send_Add_Alerts(float DS);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.HealthUI_Vis?
	// void HealthUI_Vis_();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.XunLuoEyeTrace
	// void XunLuoEyeTrace();                                                                                                   // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.HealthUIRotToPlayer
	// void HealthUIRotToPlayer();                                                                                              // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.LookAtPlayer
	// void LookAtPlayer();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.HitEdm2
	// void HitEdm2();                                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.HitBlood_EMP
	// void HitBlood_EMP();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.HitEdm
	// void HitEdm();                                                                                                           // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.HitBlood
	// void HitBlood();                                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.MeleeTrace
	// void MeleeTrace();                                                                                                       // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.LookPlayer
	// void LookPlayer();                                                                                                       // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.WeaponFire
	// void WeaponFire();                                                                                                       // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.RunToWalk__FinishedFunc
	// void RunToWalk__FinishedFunc();                                                                                          // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.RunToWalk__UpdateFunc
	// void RunToWalk__UpdateFunc();                                                                                            // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.WalkToRun__FinishedFunc
	// void WalkToRun__FinishedFunc();                                                                                          // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.WalkToRun__UpdateFunc
	// void WalkToRun__UpdateFunc();                                                                                            // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.WalkToStand__FinishedFunc
	// void WalkToStand__FinishedFunc();                                                                                        // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.WalkToStand__UpdateFunc
	// void WalkToStand__UpdateFunc();                                                                                          // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Melee__FinishedFunc
	// void Melee__FinishedFunc();                                                                                              // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Melee__UpdateFunc
	// void Melee__UpdateFunc();                                                                                                // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Melee__Melee__EventFunc
	// void Melee__Melee__EventFunc();                                                                                          // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.HitSpeed__FinishedFunc
	// void HitSpeed__FinishedFunc();                                                                                           // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.HitSpeed__UpdateFunc
	// void HitSpeed__UpdateFunc();                                                                                             // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Timeline_0__FinishedFunc
	// void Timeline_0__FinishedFunc();                                                                                         // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Timeline_0__UpdateFunc
	// void Timeline_0__UpdateFunc();                                                                                           // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Timeline_0__ShouLei__EventFunc
	// void Timeline_0__ShouLei__EventFunc();                                                                                   // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.OnNotifyEnd_3CC189504F54CAE5527C8384CA433FB7
	// void OnNotifyEnd_3CC189504F54CAE5527C8384CA433FB7(FName NotifyName);                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.OnNotifyBegin_3CC189504F54CAE5527C8384CA433FB7
	// void OnNotifyBegin_3CC189504F54CAE5527C8384CA433FB7(FName NotifyName);                                                   // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.OnInterrupted_3CC189504F54CAE5527C8384CA433FB7
	// void OnInterrupted_3CC189504F54CAE5527C8384CA433FB7(FName NotifyName);                                                   // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.OnBlendOut_3CC189504F54CAE5527C8384CA433FB7
	// void OnBlendOut_3CC189504F54CAE5527C8384CA433FB7(FName NotifyName);                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.OnCompleted_3CC189504F54CAE5527C8384CA433FB7
	// void OnCompleted_3CC189504F54CAE5527C8384CA433FB7(FName NotifyName);                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.OnNotifyEnd_3EF53D3A4895943F5657C59EFD3BBCCD
	// void OnNotifyEnd_3EF53D3A4895943F5657C59EFD3BBCCD(FName NotifyName);                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.OnNotifyBegin_3EF53D3A4895943F5657C59EFD3BBCCD
	// void OnNotifyBegin_3EF53D3A4895943F5657C59EFD3BBCCD(FName NotifyName);                                                   // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.OnInterrupted_3EF53D3A4895943F5657C59EFD3BBCCD
	// void OnInterrupted_3EF53D3A4895943F5657C59EFD3BBCCD(FName NotifyName);                                                   // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.OnBlendOut_3EF53D3A4895943F5657C59EFD3BBCCD
	// void OnBlendOut_3EF53D3A4895943F5657C59EFD3BBCCD(FName NotifyName);                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.OnCompleted_3EF53D3A4895943F5657C59EFD3BBCCD
	// void OnCompleted_3EF53D3A4895943F5657C59EFD3BBCCD(FName NotifyName);                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Completed_1050B8FE41F2951A69B409A9133A35CB
	// void Completed_1050B8FE41F2951A69B409A9133A35CB(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_ShieldHit
	// void Send_ShieldHit();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_HuaChan
	// void Send_HuaChan();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_ZhaDi
	// void Send_ZhaDi();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_ShieldHitMeleeOrSword
	// void Send_ShieldHitMeleeOrSword(int32_t Hit);                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_NearDefu
	// void Send_NearDefu(int32_t FireType);                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_PerfectDefu
	// void Send_PerfectDefu(int32_t FireType);                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_AIBoat
	// void Send_AIBoat(class UPrimitiveComponent* HitBox, float Hit);                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_AIDEFUHealths
	// void Send_AIDEFUHealths(float DEFUHealth, float BloddHealth, bool HaveDefu_);                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_ForceAIHit
	// void Send_ForceAIHit();                                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_BloodHK
	// void Send_BloodHK();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_DefuHK
	// void Send_DefuHK();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_Dee_Alert
	// void Send_Dee_Alert();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_FootAI_Alert
	// void Send_FootAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_BackSeePlayer
	// void Send_BackSeePlayer();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_ShunAI_Alert
	// void Send_ShunAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_PlayerHitCarAI
	// void Send_PlayerHitCarAI();                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_PlayerQYQAI
	// void Send_PlayerQYQAI(int32_t Number);                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_GuLouHand_Hit
	// void Send_GuLouHand_Hit(float Hit);                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_PlayerToDamage
	// void Send_PlayerToDamage(int32_t Damage);                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_PlayerToAirDamage
	// void Send_PlayerToAirDamage(int32_t AirDamage);                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_PlayerToSkillDamage
	// void Send_PlayerToSkillDamage(int32_t SkillDamage);                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature
	// void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Pawn);             // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.ReceiveAnyDamage
	// void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser); // [0x148e900] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.StartWalk
	// void StartWalk();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.StartRun
	// void StartRun();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.StartStand
	// void StartStand();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.RestStand
	// void RestStand();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.RestWalk
	// void RestWalk();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.RestRun
	// void RestRun();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.StartMelee
	// void StartMelee();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.RestMelee
	// void RestMelee();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.StartRandomAIWalkMove
	// void StartRandomAIWalkMove();                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.AIHeadShot
	// void AIHeadShot();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Dead
	// void Dead();                                                                                                             // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.AIHit_All
	// void AIHit_All();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_HitSword
	// void Send_HitSword(float Hit, int32_t FiretType);                                                                        // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.-Health
	// void _Health();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_KanJi
	// void Send_KanJi(float Hit);                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_UpLightSword
	// void Send_UpLightSword(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_AIQYQ
	// void Send_AIQYQ();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_AIFlyQYQ
	// void Send_AIFlyQYQ();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.UpDataAirZ
	// void UpDataAirZ();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.FallGround
	// void FallGround();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.StartShouLei
	// void StartShouLei();                                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.RestShouLei
	// void RestShouLei();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.ShouLeiSpawnEvent
	// void ShouLeiSpawnEvent();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_EMP
	// void Send_EMP(float Hit);                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_MeleePower
	// void Send_MeleePower(float Hit);                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.AIHandRShot
	// void AIHandRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.AIHandLShot
	// void AIHandLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.BokenHandR
	// void BokenHandR();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.BokenHandL
	// void BokenHandL();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.BokenFootL
	// void BokenFootL();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.AIFootLShot
	// void AIFootLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.BokenFootR
	// void BokenFootR();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.AIFootRShot
	// void AIFootRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.RandomBoken
	// void RandomBoken();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.BokenHead
	// void BokenHead();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.AIHeadShotBoken
	// void AIHeadShotBoken();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_DisPlayAIHealthUI
	// void Send_DisPlayAIHealthUI(bool Vis_);                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.UpDataDEFUHealth
	// void UpDataDEFUHealth();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.ForceSeePlayer
	// void ForceSeePlayer();                                                                                                   // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.BndEvt__PawnSensing_K2Node_ComponentBoundEvent_5_HearNoiseDelegate__DelegateSignature
	// void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_5_HearNoiseDelegate__DelegateSignature(class APawn* Instigator, FVector& Location, float Volume); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_ForwardSeePlayer
	// void Send_ForwardSeePlayer();                                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.ForwardNearAI
	// void ForwardNearAI();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.ForwardNearOutAI
	// void ForwardNearOutAI();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.StopXunLuoMoveCuv
	// void StopXunLuoMoveCuv();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.StealthKill
	// void StealthKill();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.ArmyEyeUnsee
	// void ArmyEyeUnsee();                                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.ArmyEyeSee
	// void ArmyEyeSee();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.TalkFinish
	// void TalkFinish();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.WalkToTalk
	// void WalkToTalk();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_SprintAttack
	// void Send_SprintAttack(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.RestAirTraceZ
	// void RestAirTraceZ();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.LCrouchMove
	// void LCrouchMove();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.RCrouchMove
	// void RCrouchMove();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.PXBodyTraceGround
	// void PXBodyTraceGround();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.CheckRangeCover
	// void CheckRangeCover();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_GERFire
	// void Send_GERFire();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Fire-Health
	// void Fire_Health();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_HealthUIVis
	// void Send_HealthUIVis();                                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.Send_XuLiMelee
	// void Send_XuLiMelee(float Hit);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.UpDataVoiceLanguages
	// void UpDataVoiceLanguages();                                                                                             // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.ExecuteUbergraph_NPC_Army_BMI01
	// void ExecuteUbergraph_NPC_Army_BMI01(int32_t EntryPoint);                                                                // [0x148e900] Final|HasDefaults    
	// Function /Game/NPC_AI/Army/NPC_Army_BMI01.NPC_Army_BMI01_C.AIDEAD__DelegateSignature
	// void AIDEAD__DelegateSignature();                                                                                        // [0x148e900] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/NPC_AI/Army/NPC_Army_BMI01_FarFire.NPC_Army_BMI01_FarFire_C
/// Size: 0x0869 (2153 bytes) (0x000869 - 0x000869) align 16 MaxSize: 0x0869
class ANPC_Army_BMI01_FarFire_C : public ANPC_Army_BMI01_C
{ 
public:
};

/// Class /Game/NPC_AI/Base/VR_Army_AI_Controller.VR_Army_AI_Controller_C
/// Size: 0x0330 (816 bytes) (0x000328 - 0x000330) align 8 MaxSize: 0x0330
class AVR_Army_AI_Controller_C : public AAIController
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0328   (0x0008)  


	/// Functions
	// Function /Game/NPC_AI/Base/VR_Army_AI_Controller.VR_Army_AI_Controller_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPC_AI/Base/VR_Army_AI_Controller.VR_Army_AI_Controller_C.ExecuteUbergraph_VR_Army_AI_Controller
	// void ExecuteUbergraph_VR_Army_AI_Controller(int32_t EntryPoint);                                                         // [0x148e900] Final                
};

/// Class /Game/NPC_AI/Base/AIEvent/Army/VRArmy_Melee.VRArmy_Melee_C
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UVRArmy_Melee_C : public UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  


	/// Functions
	// Function /Game/NPC_AI/Base/AIEvent/Army/VRArmy_Melee.VRArmy_Melee_C.ReceiveExecuteAI
	// void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);                                // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPC_AI/Base/AIEvent/Army/VRArmy_Melee.VRArmy_Melee_C.ExecuteUbergraph_VRArmy_Melee
	// void ExecuteUbergraph_VRArmy_Melee(int32_t EntryPoint);                                                                  // [0x148e900] Final                
};

/// Class /Game/NPC_AI/Base/AIEvent/Army/VRArmy_Run.VRArmy_Run_C
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UVRArmy_Run_C : public UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  


	/// Functions
	// Function /Game/NPC_AI/Base/AIEvent/Army/VRArmy_Run.VRArmy_Run_C.OnFail_36F8CEB043C35A7931A9858911BF48A4
	// void OnFail_36F8CEB043C35A7931A9858911BF48A4(TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Base/AIEvent/Army/VRArmy_Run.VRArmy_Run_C.OnSuccess_36F8CEB043C35A7931A9858911BF48A4
	// void OnSuccess_36F8CEB043C35A7931A9858911BF48A4(TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Base/AIEvent/Army/VRArmy_Run.VRArmy_Run_C.OnFail_1C761EE743215B11116C8BB63F89F1B8
	// void OnFail_1C761EE743215B11116C8BB63F89F1B8(TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Base/AIEvent/Army/VRArmy_Run.VRArmy_Run_C.OnSuccess_1C761EE743215B11116C8BB63F89F1B8
	// void OnSuccess_1C761EE743215B11116C8BB63F89F1B8(TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Base/AIEvent/Army/VRArmy_Run.VRArmy_Run_C.OnFail_FE9D210E47011853F4DE1499EFC69151
	// void OnFail_FE9D210E47011853F4DE1499EFC69151(TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Base/AIEvent/Army/VRArmy_Run.VRArmy_Run_C.OnSuccess_FE9D210E47011853F4DE1499EFC69151
	// void OnSuccess_FE9D210E47011853F4DE1499EFC69151(TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Base/AIEvent/Army/VRArmy_Run.VRArmy_Run_C.ReceiveExecuteAI
	// void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);                                // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPC_AI/Base/AIEvent/Army/VRArmy_Run.VRArmy_Run_C.ExecuteUbergraph_VRArmy_Run
	// void ExecuteUbergraph_VRArmy_Run(int32_t EntryPoint);                                                                    // [0x148e900] Final                
};

/// Class /Game/NPC_AI/Base/AIEvent/Army/VRArmy_ShouLei.VRArmy_ShouLei_C
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UVRArmy_ShouLei_C : public UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  


	/// Functions
	// Function /Game/NPC_AI/Base/AIEvent/Army/VRArmy_ShouLei.VRArmy_ShouLei_C.ReceiveExecuteAI
	// void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);                                // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPC_AI/Base/AIEvent/Army/VRArmy_ShouLei.VRArmy_ShouLei_C.ExecuteUbergraph_VRArmy_ShouLei
	// void ExecuteUbergraph_VRArmy_ShouLei(int32_t EntryPoint);                                                                // [0x148e900] Final                
};

/// Class /Game/NPC_AI/Base/AIEvent/Army/VRArmy_StandFire.VRArmy_StandFire_C
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UVRArmy_StandFire_C : public UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  


	/// Functions
	// Function /Game/NPC_AI/Base/AIEvent/Army/VRArmy_StandFire.VRArmy_StandFire_C.ReceiveExecuteAI
	// void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);                                // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPC_AI/Base/AIEvent/Army/VRArmy_StandFire.VRArmy_StandFire_C.ExecuteUbergraph_VRArmy_StandFire
	// void ExecuteUbergraph_VRArmy_StandFire(int32_t EntryPoint);                                                              // [0x148e900] Final                
};

/// Class /Game/NPC_AI/Base/AIEvent/Army/VRArmy_WalkFire.VRArmy_WalkFire_C
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UVRArmy_WalkFire_C : public UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  


	/// Functions
	// Function /Game/NPC_AI/Base/AIEvent/Army/VRArmy_WalkFire.VRArmy_WalkFire_C.ReceiveExecuteAI
	// void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);                                // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPC_AI/Base/AIEvent/Army/VRArmy_WalkFire.VRArmy_WalkFire_C.ExecuteUbergraph_VRArmy_WalkFire
	// void ExecuteUbergraph_VRArmy_WalkFire(int32_t EntryPoint);                                                               // [0x148e900] Final                
};

/// Class /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C
/// Size: 0x07A8 (1960 bytes) (0x0004B8 - 0x0007A8) align 16 MaxSize: 0x07A8
class ANPC_Army_BMI02_C : public ACharacter
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x04B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04C0   (0x0008)  
	class UParticleSystemComponent*                    PS_FireSmall;                                               // 0x04C8   (0x0008)  
	class UParticleSystemComponent*                    AirEdm;                                                     // 0x04D0   (0x0008)  
	class UWidgetComponent*                            HealthAI;                                                   // 0x04D8   (0x0008)  
	class UStaticMeshComponent*                        NPC_Army_HeadRou;                                           // 0x04E0   (0x0008)  
	class UBoxComponent*                               RightHandBox;                                               // 0x04E8   (0x0008)  
	class UBoxComponent*                               RightFootBox;                                               // 0x04F0   (0x0008)  
	class UBoxComponent*                               LeftFootBox;                                                // 0x04F8   (0x0008)  
	class UBoxComponent*                               LeftHandBox;                                                // 0x0500   (0x0008)  
	class UParticleSystemComponent*                    NPC_ShouDianTong;                                           // 0x0508   (0x0008)  
	class UArrowComponent*                             ParPoint;                                                   // 0x0510   (0x0008)  
	class UArrowComponent*                             AirZ;                                                       // 0x0518   (0x0008)  
	class USphereComponent*                            QYQTouch;                                                   // 0x0520   (0x0008)  
	class UArrowComponent*                             WeaponFallArrow;                                            // 0x0528   (0x0008)  
	class UPawnNoiseEmitterComponent*                  PawnNoiseEmitter;                                           // 0x0530   (0x0008)  
	class UPointLightComponent*                        HeadLight;                                                  // 0x0538   (0x0008)  
	class UArrowComponent*                             BackMovePonit;                                              // 0x0540   (0x0008)  
	class USceneComponent*                             Pivot;                                                      // 0x0548   (0x0008)  
	class UPhysicalAnimationComponent*                 PhysicalAnimation;                                          // 0x0550   (0x0008)  
	class UBoxComponent*                               HeadShot;                                                   // 0x0558   (0x0008)  
	class UArrowComponent*                             Melee_Arrow;                                                // 0x0560   (0x0008)  
	class UArrowComponent*                             RightForward_Arrow;                                         // 0x0568   (0x0008)  
	class UArrowComponent*                             Forward_Arrow;                                              // 0x0570   (0x0008)  
	class UArrowComponent*                             LeftForward_Arrow;                                          // 0x0578   (0x0008)  
	class UAudioComponent*                             WeaponFireSound;                                            // 0x0580   (0x0008)  
	class UParticleSystemComponent*                    WeaponFirePar;                                              // 0x0588   (0x0008)  
	class UPawnSensingComponent*                       PawnSensing;                                                // 0x0590   (0x0008)  
	class UArrowComponent*                             FirePoint;                                                  // 0x0598   (0x0008)  
	class USkeletalMeshComponent*                      WeaponMesh;                                                 // 0x05A0   (0x0008)  
	float                                              Timeline_0_Speed_D4F6E61B4C48E1823AFECA97FC61A150;          // 0x05A8   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_D4F6E61B4C48E1823AFECA97FC61A150;     // 0x05AC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x05AD   (0x0003)  MISSED
	class UTimelineComponent*                          Timeline;                                                   // 0x05B0   (0x0008)  
	float                                              LightClose_Light_4F120F804EEB116DDC0ABFAF46A491AB;          // 0x05B8   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    LightClose__Direction_4F120F804EEB116DDC0ABFAF46A491AB;     // 0x05BC   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x05BD   (0x0003)  MISSED
	class UTimelineComponent*                          LightClose;                                                 // 0x05C0   (0x0008)  
	float                                              HitSpeed_Speed_ABE6DF72448D3EE45AECBF87813D77EE;            // 0x05C8   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    HitSpeed__Direction_ABE6DF72448D3EE45AECBF87813D77EE;       // 0x05CC   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x05CD   (0x0003)  MISSED
	class UTimelineComponent*                          HitSpeed;                                                   // 0x05D0   (0x0008)  
	float                                              Melee_Speed_B13C91C04B10BD8FC784D3AF6471132E;               // 0x05D8   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Melee__Direction_B13C91C04B10BD8FC784D3AF6471132E;          // 0x05DC   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x05DD   (0x0003)  MISSED
	class UTimelineComponent*                          Melee;                                                      // 0x05E0   (0x0008)  
	float                                              WalkToStand_Speed_7967466F415D09A81CDA3EBF00903BCE;         // 0x05E8   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    WalkToStand__Direction_7967466F415D09A81CDA3EBF00903BCE;    // 0x05EC   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x05ED   (0x0003)  MISSED
	class UTimelineComponent*                          WalkToStand;                                                // 0x05F0   (0x0008)  
	float                                              WalkToRun_Speed_38A3373A44947F7DC1789EB433A6A7D8;           // 0x05F8   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    WalkToRun__Direction_38A3373A44947F7DC1789EB433A6A7D8;      // 0x05FC   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x05FD   (0x0003)  MISSED
	class UTimelineComponent*                          WalkToRun;                                                  // 0x0600   (0x0008)  
	float                                              RunToWalk_Speed_1427DDCC41CDB7B05BAE4FB46C100429;           // 0x0608   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    RunToWalk__Direction_1427DDCC41CDB7B05BAE4FB46C100429;      // 0x060C   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x060D   (0x0003)  MISSED
	class UTimelineComponent*                          RunToWalk;                                                  // 0x0610   (0x0008)  
	FName                                              AirTouchTag;                                                // 0x0618   (0x0008)  
	FName                                              Phys_Bone;                                                  // 0x0620   (0x0008)  
	FName                                              AirTouchBone;                                               // 0x0628   (0x0008)  
	class UAnimMontage*                                StandHitMon;                                                // 0x0630   (0x0008)  
	class UAnimMontage*                                CrouchHitMon;                                               // 0x0638   (0x0008)  
	class UAnimMontage*                                DeadMon_Forward;                                            // 0x0640   (0x0008)  
	class UAnimMontage*                                DeadMon_Backward;                                           // 0x0648   (0x0008)  
	class UAnimMontage*                                DeadMon_Backward2;                                          // 0x0650   (0x0008)  
	class UAnimMontage*                                DeadMon_Backward3;                                          // 0x0658   (0x0008)  
	class UAnimMontage*                                DeadMon_Left;                                               // 0x0660   (0x0008)  
	class UAnimMontage*                                DeadMon_Right;                                              // 0x0668   (0x0008)  
	TArray<FName>                                      StandHit_Random;                                            // 0x0670   (0x0010)  
	TArray<FName>                                      CrouchHit_Random;                                           // 0x0680   (0x0010)  
	float                                              WeaponHit;                                                  // 0x0690   (0x0004)  
	float                                              AIToPlayerRange;                                            // 0x0694   (0x0004)  
	float                                              AIWalkSpeed;                                                // 0x0698   (0x0004)  
	float                                              Direction;                                                  // 0x069C   (0x0004)  
	float                                              NearMeleeDistance;                                          // 0x06A0   (0x0004)  
	float                                              AIToPlayerRot;                                              // 0x06A4   (0x0004)  
	float                                              AIRunSpeed;                                                 // 0x06A8   (0x0004)  
	float                                              AIHit_AnimTime;                                             // 0x06AC   (0x0004)  
	float                                              HitBackTime;                                                // 0x06B0   (0x0004)  
	float                                              AIHealth;                                                   // 0x06B4   (0x0004)  
	int32_t                                            WalkWardRandom;                                             // 0x06B8   (0x0004)  
	int32_t                                            GetDamage;                                                  // 0x06BC   (0x0004)  
	int32_t                                            StandHitRandom;                                             // 0x06C0   (0x0004)  
	bool                                               IsDead_;                                                    // 0x06C4   (0x0001)  
	bool                                               Is_Fire_;                                                   // 0x06C5   (0x0001)  
	bool                                               CanLookPlayer_;                                             // 0x06C6   (0x0001)  
	bool                                               CanFire_;                                                   // 0x06C7   (0x0001)  
	bool                                               CanSee_;                                                    // 0x06C8   (0x0001)  
	bool                                               IsFreeze_;                                                  // 0x06C9   (0x0001)  
	bool                                               IsCrouch_;                                                  // 0x06CA   (0x0001)  
	bool                                               IsRun_;                                                     // 0x06CB   (0x0001)  
	bool                                               IsWalk_;                                                    // 0x06CC   (0x0001)  
	bool                                               IsStand_;                                                   // 0x06CD   (0x0001)  
	bool                                               IsHit_;                                                     // 0x06CE   (0x0001)  
	bool                                               StandHitOnce_;                                              // 0x06CF   (0x0001)  
	bool                                               IsAirFire_;                                                 // 0x06D0   (0x0001)  
	unsigned char                                      UnknownData08_6[0x7];                                       // 0x06D1   (0x0007)  MISSED
	TArray<float>                                      FireInterval;                                               // 0x06D8   (0x0010)  
	TArray<float>                                      StopFireInterval;                                           // 0x06E8   (0x0010)  
	TArray<float>                                      WeaponFireRange;                                            // 0x06F8   (0x0010)  
	TArray<float>                                      NearFireInterval;                                           // 0x0708   (0x0010)  
	TArray<float>                                      FarFireInterval;                                            // 0x0718   (0x0010)  
	bool                                               CanRRot_;                                                   // 0x0728   (0x0001)  
	bool                                               CanLRot_;                                                   // 0x0729   (0x0001)  
	bool                                               CanLRot180_;                                                // 0x072A   (0x0001)  
	bool                                               CanRRot180_;                                                // 0x072B   (0x0001)  
	bool                                               CanLRMove;                                                  // 0x072C   (0x0001)  
	bool                                               IsCanAttack_;                                               // 0x072D   (0x0001)  
	unsigned char                                      UnknownData09_6[0x2];                                       // 0x072E   (0x0002)  MISSED
	int32_t                                            AttackNumber;                                               // 0x0730   (0x0004)  
	float                                              AttackRange;                                                // 0x0734   (0x0004)  
	float                                              SpawnFirePlayerTimeMin;                                     // 0x0738   (0x0004)  
	float                                              SpawnFirePlayerTimeMax;                                     // 0x073C   (0x0004)  
	float                                              SprintRunMax;                                               // 0x0740   (0x0004)  
	unsigned char                                      UnknownData10_6[0x4];                                       // 0x0744   (0x0004)  MISSED
	SDK_UNDEFINED(16,321) /* FMulticastInlineDelegate */ __um(AIDEAD);                                             // 0x0748   (0x0010)  
	SDK_UNDEFINED(16,322) /* TArray<TEnumAsByte<ETraceTypeQuery>> */ __um(NewVar);                                 // 0x0758   (0x0010)  
	bool                                               IsSwordHitTime_;                                            // 0x0768   (0x0001)  
	bool                                               IsAirTime_;                                                 // 0x0769   (0x0001)  
	bool                                               IsPlayerAirUseQYQ_;                                         // 0x076A   (0x0001)  
	bool                                               IsAirAnimFinish_;                                           // 0x076B   (0x0001)  
	bool                                               CanBoken;                                                   // 0x076C   (0x0001)  
	unsigned char                                      UnknownData11_6[0x3];                                       // 0x076D   (0x0003)  MISSED
	class USkeletalMeshComponent*                      RightHand;                                                  // 0x0770   (0x0008)  
	class USkeletalMeshComponent*                      LeftFoot;                                                   // 0x0778   (0x0008)  
	class USkeletalMeshComponent*                      RightFoot;                                                  // 0x0780   (0x0008)  
	class USkeletalMeshComponent*                      LeftHand;                                                   // 0x0788   (0x0008)  
	class USkeletalMeshComponent*                      head;                                                       // 0x0790   (0x0008)  
	bool                                               IsKanJiorEMP;                                               // 0x0798   (0x0001)  
	unsigned char                                      UnknownData12_6[0x3];                                       // 0x0799   (0x0003)  MISSED
	float                                              AIMAXHealth;                                                // 0x079C   (0x0004)  
	bool                                               IsFireDead_;                                                // 0x07A0   (0x0001)  
	unsigned char                                      UnknownData13_6[0x3];                                       // 0x07A1   (0x0003)  MISSED
	float                                              MeleeDamage;                                                // 0x07A4   (0x0004)  


	/// Functions
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.HealthUI_Vis?
	// void HealthUI_Vis_();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.HealthUIRotToPlayer
	// void HealthUIRotToPlayer();                                                                                              // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.LookAtPlayer
	// void LookAtPlayer();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.HitEdm2
	// void HitEdm2();                                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.HitBlood_EMP
	// void HitBlood_EMP();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.HitEdm
	// void HitEdm();                                                                                                           // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.HitBlood
	// void HitBlood();                                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.MeleeTrace
	// void MeleeTrace();                                                                                                       // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.LookPlayer
	// void LookPlayer();                                                                                                       // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.WeaponFire
	// void WeaponFire();                                                                                                       // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.RunToWalk__FinishedFunc
	// void RunToWalk__FinishedFunc();                                                                                          // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.RunToWalk__UpdateFunc
	// void RunToWalk__UpdateFunc();                                                                                            // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.WalkToRun__FinishedFunc
	// void WalkToRun__FinishedFunc();                                                                                          // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.WalkToRun__UpdateFunc
	// void WalkToRun__UpdateFunc();                                                                                            // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.WalkToStand__FinishedFunc
	// void WalkToStand__FinishedFunc();                                                                                        // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.WalkToStand__UpdateFunc
	// void WalkToStand__UpdateFunc();                                                                                          // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Melee__FinishedFunc
	// void Melee__FinishedFunc();                                                                                              // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Melee__UpdateFunc
	// void Melee__UpdateFunc();                                                                                                // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Melee__Melee__EventFunc
	// void Melee__Melee__EventFunc();                                                                                          // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.HitSpeed__FinishedFunc
	// void HitSpeed__FinishedFunc();                                                                                           // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.HitSpeed__UpdateFunc
	// void HitSpeed__UpdateFunc();                                                                                             // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.LightClose__FinishedFunc
	// void LightClose__FinishedFunc();                                                                                         // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.LightClose__UpdateFunc
	// void LightClose__UpdateFunc();                                                                                           // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Timeline_0__FinishedFunc
	// void Timeline_0__FinishedFunc();                                                                                         // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Timeline_0__UpdateFunc
	// void Timeline_0__UpdateFunc();                                                                                           // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Timeline_0__ShouLei__EventFunc
	// void Timeline_0__ShouLei__EventFunc();                                                                                   // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.OnNotifyEnd_5CF42FA04CA301F7E009888D62CF2FCF
	// void OnNotifyEnd_5CF42FA04CA301F7E009888D62CF2FCF(FName NotifyName);                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.OnNotifyBegin_5CF42FA04CA301F7E009888D62CF2FCF
	// void OnNotifyBegin_5CF42FA04CA301F7E009888D62CF2FCF(FName NotifyName);                                                   // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.OnInterrupted_5CF42FA04CA301F7E009888D62CF2FCF
	// void OnInterrupted_5CF42FA04CA301F7E009888D62CF2FCF(FName NotifyName);                                                   // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.OnBlendOut_5CF42FA04CA301F7E009888D62CF2FCF
	// void OnBlendOut_5CF42FA04CA301F7E009888D62CF2FCF(FName NotifyName);                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.OnCompleted_5CF42FA04CA301F7E009888D62CF2FCF
	// void OnCompleted_5CF42FA04CA301F7E009888D62CF2FCF(FName NotifyName);                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.OnNotifyEnd_7D043CB94B897E1332397499A3830091
	// void OnNotifyEnd_7D043CB94B897E1332397499A3830091(FName NotifyName);                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.OnNotifyBegin_7D043CB94B897E1332397499A3830091
	// void OnNotifyBegin_7D043CB94B897E1332397499A3830091(FName NotifyName);                                                   // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.OnInterrupted_7D043CB94B897E1332397499A3830091
	// void OnInterrupted_7D043CB94B897E1332397499A3830091(FName NotifyName);                                                   // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.OnBlendOut_7D043CB94B897E1332397499A3830091
	// void OnBlendOut_7D043CB94B897E1332397499A3830091(FName NotifyName);                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.OnCompleted_7D043CB94B897E1332397499A3830091
	// void OnCompleted_7D043CB94B897E1332397499A3830091(FName NotifyName);                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Completed_5821D4D0498FF54A53D86BA5FB624C40
	// void Completed_5821D4D0498FF54A53D86BA5FB624C40(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_ShieldHit
	// void Send_ShieldHit();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_HuaChan
	// void Send_HuaChan();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_ZhaDi
	// void Send_ZhaDi();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_ShieldHitMeleeOrSword
	// void Send_ShieldHitMeleeOrSword(int32_t Hit);                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_NearDefu
	// void Send_NearDefu(int32_t FireType);                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_PerfectDefu
	// void Send_PerfectDefu(int32_t FireType);                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_AIBoat
	// void Send_AIBoat(class UPrimitiveComponent* HitBox, float Hit);                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_AIDEFUHealths
	// void Send_AIDEFUHealths(float DEFUHealth, float BloddHealth, bool HaveDefu_);                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_ForceAIHit
	// void Send_ForceAIHit();                                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_BloodHK
	// void Send_BloodHK();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_DefuHK
	// void Send_DefuHK();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_Add_Alerts
	// void Send_Add_Alerts(float DS);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_Dee_Alert
	// void Send_Dee_Alert();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_ForwardSeePlayer
	// void Send_ForwardSeePlayer();                                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_FootAI_Alert
	// void Send_FootAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_BackSeePlayer
	// void Send_BackSeePlayer();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_ShunAI_Alert
	// void Send_ShunAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_PlayerHitCarAI
	// void Send_PlayerHitCarAI();                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_PlayerQYQAI
	// void Send_PlayerQYQAI(int32_t Number);                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_XuLiMelee
	// void Send_XuLiMelee(float Hit);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_GuLouHand_Hit
	// void Send_GuLouHand_Hit(float Hit);                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_PlayerToDamage
	// void Send_PlayerToDamage(int32_t Damage);                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_PlayerToAirDamage
	// void Send_PlayerToAirDamage(int32_t AirDamage);                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_PlayerToSkillDamage
	// void Send_PlayerToSkillDamage(int32_t SkillDamage);                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature
	// void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Pawn);             // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.ReceiveAnyDamage
	// void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser); // [0x148e900] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.StartWalk
	// void StartWalk();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.StartRun
	// void StartRun();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.StartStand
	// void StartStand();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.RestStand
	// void RestStand();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.RestWalk
	// void RestWalk();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.RestRun
	// void RestRun();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.StartMelee
	// void StartMelee();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.RestMelee
	// void RestMelee();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.StartRandomAIWalkMove
	// void StartRandomAIWalkMove();                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.AIHeadShot
	// void AIHeadShot();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Dead
	// void Dead();                                                                                                             // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.BndEvt__PawnSensing_K2Node_ComponentBoundEvent_86_HearNoiseDelegate__DelegateSignature
	// void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_86_HearNoiseDelegate__DelegateSignature(class APawn* Instigator, FVector& Location, float Volume); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.AIHit_All
	// void AIHit_All();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_HitSword
	// void Send_HitSword(float Hit, int32_t FiretType);                                                                        // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.-Health
	// void _Health();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_KanJi
	// void Send_KanJi(float Hit);                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_UpLightSword
	// void Send_UpLightSword(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_AIQYQ
	// void Send_AIQYQ();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_AIFlyQYQ
	// void Send_AIFlyQYQ();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.UpDataAirZ
	// void UpDataAirZ();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.FallGround
	// void FallGround();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.StartShouLei
	// void StartShouLei();                                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.RestShouLei
	// void RestShouLei();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.ShouLeiSpawnEvent
	// void ShouLeiSpawnEvent();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_EMP
	// void Send_EMP(float Hit);                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_MeleePower
	// void Send_MeleePower(float Hit);                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.AIHandRShot
	// void AIHandRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.AIHandLShot
	// void AIHandLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.BokenHandR
	// void BokenHandR();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.BokenHandL
	// void BokenHandL();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.BokenFootL
	// void BokenFootL();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.AIFootLShot
	// void AIFootLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.BokenFootR
	// void BokenFootR();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.AIFootRShot
	// void AIFootRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.RandomBoken
	// void RandomBoken();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.BokenHead
	// void BokenHead();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.AIHeadShotBoken
	// void AIHeadShotBoken();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_DisPlayAIHealthUI
	// void Send_DisPlayAIHealthUI(bool Vis_);                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.UpDataDEFUHealth
	// void UpDataDEFUHealth();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_SprintAttack
	// void Send_SprintAttack(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.RestAirTraceZ
	// void RestAirTraceZ();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.PXBodyTraceGround
	// void PXBodyTraceGround();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_GERFire
	// void Send_GERFire();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Fire-Health
	// void Fire_Health();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.Send_HealthUIVis
	// void Send_HealthUIVis();                                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.ExecuteUbergraph_NPC_Army_BMI02
	// void ExecuteUbergraph_NPC_Army_BMI02(int32_t EntryPoint);                                                                // [0x148e900] Final|HasDefaults    
	// Function /Game/NPC_AI/Army/NPC_Army_BMI02.NPC_Army_BMI02_C.AIDEAD__DelegateSignature
	// void AIDEAD__DelegateSignature();                                                                                        // [0x148e900] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

#pragma pack(pop)


static_assert(sizeof(ANPC_Army_BMI01_C) == 0x0869); // 2153 bytes (0x0004B8 - 0x000869)
static_assert(sizeof(ANPC_Army_BMI01_FarFire_C) == 0x0869); // 2153 bytes (0x000869 - 0x000869)
static_assert(sizeof(AVR_Army_AI_Controller_C) == 0x0330); // 816 bytes (0x000328 - 0x000330)
static_assert(sizeof(UVRArmy_Melee_C) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UVRArmy_Run_C) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UVRArmy_ShouLei_C) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UVRArmy_StandFire_C) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UVRArmy_WalkFire_C) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(ANPC_Army_BMI02_C) == 0x07A8); // 1960 bytes (0x0004B8 - 0x0007A8)
static_assert(offsetof(ANPC_Army_BMI01_C, UberGraphFrame) == 0x04C0);
static_assert(offsetof(ANPC_Army_BMI01_C, PS_FireSmall) == 0x04C8);
static_assert(offsetof(ANPC_Army_BMI01_C, Right_Arrow) == 0x04D0);
static_assert(offsetof(ANPC_Army_BMI01_C, Left_Arrow) == 0x04D8);
static_assert(offsetof(ANPC_Army_BMI01_C, AirEdm) == 0x04E0);
static_assert(offsetof(ANPC_Army_BMI01_C, ChuJueLoc) == 0x04E8);
static_assert(offsetof(ANPC_Army_BMI01_C, HealthAI) == 0x04F0);
static_assert(offsetof(ANPC_Army_BMI01_C, NPC_Army_HeadRou) == 0x04F8);
static_assert(offsetof(ANPC_Army_BMI01_C, RightFootBox) == 0x0500);
static_assert(offsetof(ANPC_Army_BMI01_C, LeftFootBox) == 0x0508);
static_assert(offsetof(ANPC_Army_BMI01_C, RightHandBox) == 0x0510);
static_assert(offsetof(ANPC_Army_BMI01_C, LeftHandBox) == 0x0518);
static_assert(offsetof(ANPC_Army_BMI01_C, NPC_ShouDianTong) == 0x0520);
static_assert(offsetof(ANPC_Army_BMI01_C, ParPoint) == 0x0528);
static_assert(offsetof(ANPC_Army_BMI01_C, AirZ) == 0x0530);
static_assert(offsetof(ANPC_Army_BMI01_C, QYQTouch) == 0x0538);
static_assert(offsetof(ANPC_Army_BMI01_C, FrighingAudio) == 0x0540);
static_assert(offsetof(ANPC_Army_BMI01_C, WeaponFallArrow) == 0x0548);
static_assert(offsetof(ANPC_Army_BMI01_C, BackMovePonit) == 0x0550);
static_assert(offsetof(ANPC_Army_BMI01_C, Pivot) == 0x0558);
static_assert(offsetof(ANPC_Army_BMI01_C, PhysicalAnimation) == 0x0560);
static_assert(offsetof(ANPC_Army_BMI01_C, HeadShot) == 0x0568);
static_assert(offsetof(ANPC_Army_BMI01_C, Melee_Arrow) == 0x0570);
static_assert(offsetof(ANPC_Army_BMI01_C, RightForward_Arrow) == 0x0578);
static_assert(offsetof(ANPC_Army_BMI01_C, Forward_Arrow) == 0x0580);
static_assert(offsetof(ANPC_Army_BMI01_C, LeftForward_Arrow) == 0x0588);
static_assert(offsetof(ANPC_Army_BMI01_C, WeaponFireSound) == 0x0590);
static_assert(offsetof(ANPC_Army_BMI01_C, WeaponFirePar) == 0x0598);
static_assert(offsetof(ANPC_Army_BMI01_C, PawnSensing) == 0x05A0);
static_assert(offsetof(ANPC_Army_BMI01_C, FirePoint) == 0x05A8);
static_assert(offsetof(ANPC_Army_BMI01_C, WeaponMesh) == 0x05B0);
static_assert(offsetof(ANPC_Army_BMI01_C, Timeline_0__Direction_C627F4284F38D16166B9288B6EF32787) == 0x05BC);
static_assert(offsetof(ANPC_Army_BMI01_C, Timeline) == 0x05C0);
static_assert(offsetof(ANPC_Army_BMI01_C, HitSpeed__Direction_24D071ED423285A28EBE4BAEE29BFF65) == 0x05CC);
static_assert(offsetof(ANPC_Army_BMI01_C, HitSpeed) == 0x05D0);
static_assert(offsetof(ANPC_Army_BMI01_C, Melee__Direction_F87D7D204252A12A0F6029A6A203A10E) == 0x05DC);
static_assert(offsetof(ANPC_Army_BMI01_C, Melee) == 0x05E0);
static_assert(offsetof(ANPC_Army_BMI01_C, WalkToStand__Direction_890A5F734774EAD1C7CA448EA3BA13E8) == 0x05EC);
static_assert(offsetof(ANPC_Army_BMI01_C, WalkToStand) == 0x05F0);
static_assert(offsetof(ANPC_Army_BMI01_C, WalkToRun__Direction_34C4556A4A552517E2933097B284CA15) == 0x05FC);
static_assert(offsetof(ANPC_Army_BMI01_C, WalkToRun) == 0x0600);
static_assert(offsetof(ANPC_Army_BMI01_C, RunToWalk__Direction_2AFE5998484B78149D4D4C9C6442CB8C) == 0x060C);
static_assert(offsetof(ANPC_Army_BMI01_C, RunToWalk) == 0x0610);
static_assert(offsetof(ANPC_Army_BMI01_C, AirTouchTag) == 0x0618);
static_assert(offsetof(ANPC_Army_BMI01_C, Phys_Bone) == 0x0620);
static_assert(offsetof(ANPC_Army_BMI01_C, AirTouchBone) == 0x0628);
static_assert(offsetof(ANPC_Army_BMI01_C, StandHitMon) == 0x0630);
static_assert(offsetof(ANPC_Army_BMI01_C, CrouchHitMon) == 0x0638);
static_assert(offsetof(ANPC_Army_BMI01_C, DeadMon_Forward) == 0x0640);
static_assert(offsetof(ANPC_Army_BMI01_C, DeadMon_Backward) == 0x0648);
static_assert(offsetof(ANPC_Army_BMI01_C, DeadMon_Backward2) == 0x0650);
static_assert(offsetof(ANPC_Army_BMI01_C, DeadMon_Backward3) == 0x0658);
static_assert(offsetof(ANPC_Army_BMI01_C, DeadMon_Left) == 0x0660);
static_assert(offsetof(ANPC_Army_BMI01_C, DeadMon_Right) == 0x0668);
static_assert(offsetof(ANPC_Army_BMI01_C, StandHit_Random) == 0x0670);
static_assert(offsetof(ANPC_Army_BMI01_C, CrouchHit_Random) == 0x0680);
static_assert(offsetof(ANPC_Army_BMI01_C, FireInterval) == 0x06D8);
static_assert(offsetof(ANPC_Army_BMI01_C, StopFireInterval) == 0x06E8);
static_assert(offsetof(ANPC_Army_BMI01_C, WeaponFireUpRange) == 0x06F8);
static_assert(offsetof(ANPC_Army_BMI01_C, NearFireInterval) == 0x0708);
static_assert(offsetof(ANPC_Army_BMI01_C, FarFireInterval) == 0x0718);
static_assert(offsetof(ANPC_Army_BMI01_C, WeaponFireRightRange) == 0x0728);
static_assert(offsetof(ANPC_Army_BMI01_C, head) == 0x0770);
static_assert(offsetof(ANPC_Army_BMI01_C, LeftHand) == 0x0778);
static_assert(offsetof(ANPC_Army_BMI01_C, RightFoot) == 0x0780);
static_assert(offsetof(ANPC_Army_BMI01_C, LeftFoot) == 0x0788);
static_assert(offsetof(ANPC_Army_BMI01_C, RightHand) == 0x0790);
static_assert(offsetof(ANPC_Army_BMI01_C, HitInfo) == 0x07AC);
static_assert(offsetof(ANPC_Army_BMI01_C, Cover) == 0x0840);
static_assert(offsetof(ANPC_Army_BMI01_C, CoverLoc) == 0x0848);
static_assert(offsetof(ANPC_Army_BMI01_C, SearchAudio) == 0x0858);
static_assert(offsetof(AVR_Army_AI_Controller_C, UberGraphFrame) == 0x0328);
static_assert(offsetof(UVRArmy_Melee_C, UberGraphFrame) == 0x00A8);
static_assert(offsetof(UVRArmy_Run_C, UberGraphFrame) == 0x00A8);
static_assert(offsetof(UVRArmy_ShouLei_C, UberGraphFrame) == 0x00A8);
static_assert(offsetof(UVRArmy_StandFire_C, UberGraphFrame) == 0x00A8);
static_assert(offsetof(UVRArmy_WalkFire_C, UberGraphFrame) == 0x00A8);
static_assert(offsetof(ANPC_Army_BMI02_C, UberGraphFrame) == 0x04C0);
static_assert(offsetof(ANPC_Army_BMI02_C, PS_FireSmall) == 0x04C8);
static_assert(offsetof(ANPC_Army_BMI02_C, AirEdm) == 0x04D0);
static_assert(offsetof(ANPC_Army_BMI02_C, HealthAI) == 0x04D8);
static_assert(offsetof(ANPC_Army_BMI02_C, NPC_Army_HeadRou) == 0x04E0);
static_assert(offsetof(ANPC_Army_BMI02_C, RightHandBox) == 0x04E8);
static_assert(offsetof(ANPC_Army_BMI02_C, RightFootBox) == 0x04F0);
static_assert(offsetof(ANPC_Army_BMI02_C, LeftFootBox) == 0x04F8);
static_assert(offsetof(ANPC_Army_BMI02_C, LeftHandBox) == 0x0500);
static_assert(offsetof(ANPC_Army_BMI02_C, NPC_ShouDianTong) == 0x0508);
static_assert(offsetof(ANPC_Army_BMI02_C, ParPoint) == 0x0510);
static_assert(offsetof(ANPC_Army_BMI02_C, AirZ) == 0x0518);
static_assert(offsetof(ANPC_Army_BMI02_C, QYQTouch) == 0x0520);
static_assert(offsetof(ANPC_Army_BMI02_C, WeaponFallArrow) == 0x0528);
static_assert(offsetof(ANPC_Army_BMI02_C, PawnNoiseEmitter) == 0x0530);
static_assert(offsetof(ANPC_Army_BMI02_C, HeadLight) == 0x0538);
static_assert(offsetof(ANPC_Army_BMI02_C, BackMovePonit) == 0x0540);
static_assert(offsetof(ANPC_Army_BMI02_C, Pivot) == 0x0548);
static_assert(offsetof(ANPC_Army_BMI02_C, PhysicalAnimation) == 0x0550);
static_assert(offsetof(ANPC_Army_BMI02_C, HeadShot) == 0x0558);
static_assert(offsetof(ANPC_Army_BMI02_C, Melee_Arrow) == 0x0560);
static_assert(offsetof(ANPC_Army_BMI02_C, RightForward_Arrow) == 0x0568);
static_assert(offsetof(ANPC_Army_BMI02_C, Forward_Arrow) == 0x0570);
static_assert(offsetof(ANPC_Army_BMI02_C, LeftForward_Arrow) == 0x0578);
static_assert(offsetof(ANPC_Army_BMI02_C, WeaponFireSound) == 0x0580);
static_assert(offsetof(ANPC_Army_BMI02_C, WeaponFirePar) == 0x0588);
static_assert(offsetof(ANPC_Army_BMI02_C, PawnSensing) == 0x0590);
static_assert(offsetof(ANPC_Army_BMI02_C, FirePoint) == 0x0598);
static_assert(offsetof(ANPC_Army_BMI02_C, WeaponMesh) == 0x05A0);
static_assert(offsetof(ANPC_Army_BMI02_C, Timeline_0__Direction_D4F6E61B4C48E1823AFECA97FC61A150) == 0x05AC);
static_assert(offsetof(ANPC_Army_BMI02_C, Timeline) == 0x05B0);
static_assert(offsetof(ANPC_Army_BMI02_C, LightClose__Direction_4F120F804EEB116DDC0ABFAF46A491AB) == 0x05BC);
static_assert(offsetof(ANPC_Army_BMI02_C, LightClose) == 0x05C0);
static_assert(offsetof(ANPC_Army_BMI02_C, HitSpeed__Direction_ABE6DF72448D3EE45AECBF87813D77EE) == 0x05CC);
static_assert(offsetof(ANPC_Army_BMI02_C, HitSpeed) == 0x05D0);
static_assert(offsetof(ANPC_Army_BMI02_C, Melee__Direction_B13C91C04B10BD8FC784D3AF6471132E) == 0x05DC);
static_assert(offsetof(ANPC_Army_BMI02_C, Melee) == 0x05E0);
static_assert(offsetof(ANPC_Army_BMI02_C, WalkToStand__Direction_7967466F415D09A81CDA3EBF00903BCE) == 0x05EC);
static_assert(offsetof(ANPC_Army_BMI02_C, WalkToStand) == 0x05F0);
static_assert(offsetof(ANPC_Army_BMI02_C, WalkToRun__Direction_38A3373A44947F7DC1789EB433A6A7D8) == 0x05FC);
static_assert(offsetof(ANPC_Army_BMI02_C, WalkToRun) == 0x0600);
static_assert(offsetof(ANPC_Army_BMI02_C, RunToWalk__Direction_1427DDCC41CDB7B05BAE4FB46C100429) == 0x060C);
static_assert(offsetof(ANPC_Army_BMI02_C, RunToWalk) == 0x0610);
static_assert(offsetof(ANPC_Army_BMI02_C, AirTouchTag) == 0x0618);
static_assert(offsetof(ANPC_Army_BMI02_C, Phys_Bone) == 0x0620);
static_assert(offsetof(ANPC_Army_BMI02_C, AirTouchBone) == 0x0628);
static_assert(offsetof(ANPC_Army_BMI02_C, StandHitMon) == 0x0630);
static_assert(offsetof(ANPC_Army_BMI02_C, CrouchHitMon) == 0x0638);
static_assert(offsetof(ANPC_Army_BMI02_C, DeadMon_Forward) == 0x0640);
static_assert(offsetof(ANPC_Army_BMI02_C, DeadMon_Backward) == 0x0648);
static_assert(offsetof(ANPC_Army_BMI02_C, DeadMon_Backward2) == 0x0650);
static_assert(offsetof(ANPC_Army_BMI02_C, DeadMon_Backward3) == 0x0658);
static_assert(offsetof(ANPC_Army_BMI02_C, DeadMon_Left) == 0x0660);
static_assert(offsetof(ANPC_Army_BMI02_C, DeadMon_Right) == 0x0668);
static_assert(offsetof(ANPC_Army_BMI02_C, StandHit_Random) == 0x0670);
static_assert(offsetof(ANPC_Army_BMI02_C, CrouchHit_Random) == 0x0680);
static_assert(offsetof(ANPC_Army_BMI02_C, FireInterval) == 0x06D8);
static_assert(offsetof(ANPC_Army_BMI02_C, StopFireInterval) == 0x06E8);
static_assert(offsetof(ANPC_Army_BMI02_C, WeaponFireRange) == 0x06F8);
static_assert(offsetof(ANPC_Army_BMI02_C, NearFireInterval) == 0x0708);
static_assert(offsetof(ANPC_Army_BMI02_C, FarFireInterval) == 0x0718);
static_assert(offsetof(ANPC_Army_BMI02_C, RightHand) == 0x0770);
static_assert(offsetof(ANPC_Army_BMI02_C, LeftFoot) == 0x0778);
static_assert(offsetof(ANPC_Army_BMI02_C, RightFoot) == 0x0780);
static_assert(offsetof(ANPC_Army_BMI02_C, LeftHand) == 0x0788);
static_assert(offsetof(ANPC_Army_BMI02_C, head) == 0x0790);
