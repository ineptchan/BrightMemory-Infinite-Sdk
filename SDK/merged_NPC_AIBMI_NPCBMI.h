
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: ActorSequence
/// dependency: AnimGraphRuntime
/// dependency: ApexDestruction
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PlayerBP
/// dependency: ProceduralMeshComponent
/// dependency: Strider
/// dependency: UISystem_BMI
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C
/// Size: 0x06B9 (1721 bytes) (0x0004B8 - 0x0006B9) align 16 MaxSize: 0x06B9
class ANPC_GuLouBoss_AI_C : public ACharacter
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x04B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04C0   (0x0008)  
	class UArrowComponent*                             Eye6;                                                       // 0x04C8   (0x0008)  
	class UArrowComponent*                             Eye5;                                                       // 0x04D0   (0x0008)  
	class UArrowComponent*                             Eye4;                                                       // 0x04D8   (0x0008)  
	class UArrowComponent*                             Eye3;                                                       // 0x04E0   (0x0008)  
	class UArrowComponent*                             Eye2;                                                       // 0x04E8   (0x0008)  
	class UArrowComponent*                             Eye1;                                                       // 0x04F0   (0x0008)  
	class UParticleSystemComponent*                    SiMiao_Teleport;                                            // 0x04F8   (0x0008)  
	class UParticleSystemComponent*                    Cloud_R;                                                    // 0x0500   (0x0008)  
	class UParticleSystemComponent*                    Cloud_L;                                                    // 0x0508   (0x0008)  
	class UParticleSystemComponent*                    PS_FireSmall;                                               // 0x0510   (0x0008)  
	class UParticleSystemComponent*                    PS_FireSmall2;                                              // 0x0518   (0x0008)  
	class UArrowComponent*                             EagleBackLoc;                                               // 0x0520   (0x0008)  
	class UPointLightComponent*                        BodyLight2;                                                 // 0x0528   (0x0008)  
	class UArrowComponent*                             FarFireLoc;                                                 // 0x0530   (0x0008)  
	class UArrowComponent*                             ZhaDiSpawnLoc;                                              // 0x0538   (0x0008)  
	class UCapsuleComponent*                           Boos_UpLightStopTouch;                                      // 0x0540   (0x0008)  
	class UPointLightComponent*                        BodyLight;                                                  // 0x0548   (0x0008)  
	class UParticleSystemComponent*                    DeadPar;                                                    // 0x0550   (0x0008)  
	class UParticleSystemComponent*                    M_explosionSpark_Normal;                                    // 0x0558   (0x0008)  
	class UPhysicalAnimationComponent*                 PhysicalAnimations;                                         // 0x0560   (0x0008)  
	class UArrowComponent*                             AutoAimPlayer;                                              // 0x0568   (0x0008)  
	class UArrowComponent*                             AttackTraceLoc;                                             // 0x0570   (0x0008)  
	class UBoxComponent*                               Attack_HitTouch_01;                                         // 0x0578   (0x0008)  
	class UBoxComponent*                               Head_Shot;                                                  // 0x0580   (0x0008)  
	class USphereComponent*                            QYQTouch;                                                   // 0x0588   (0x0008)  
	class UBoxComponent*                               FootR_Shot;                                                 // 0x0590   (0x0008)  
	class UBoxComponent*                               FootL_Shot;                                                 // 0x0598   (0x0008)  
	class UBoxComponent*                               HandL_Shot;                                                 // 0x05A0   (0x0008)  
	class UBoxComponent*                               HandR_Shot;                                                 // 0x05A8   (0x0008)  
	class UPointLightComponent*                        HitLight;                                                   // 0x05B0   (0x0008)  
	class UParticleSystemComponent*                    XChange_Edms;                                               // 0x05B8   (0x0008)  
	class UArrowComponent*                             AirZCombo;                                                  // 0x05C0   (0x0008)  
	class UParticleSystemComponent*                    BloodHead;                                                  // 0x05C8   (0x0008)  
	class UParticleSystemComponent*                    BloodBody;                                                  // 0x05D0   (0x0008)  
	float                                              AIHealth;                                                   // 0x05D8   (0x0004)  
	float                                              AIMAXHealth;                                                // 0x05DC   (0x0004)  
	FName                                              AirTouchBone;                                               // 0x05E0   (0x0008)  
	bool                                               IsSpawn_;                                                   // 0x05E8   (0x0001)  
	bool                                               IsDead_;                                                    // 0x05E9   (0x0001)  
	bool                                               IsFirstLookPlayer;                                          // 0x05EA   (0x0001)  
	bool                                               IsFireTime;                                                 // 0x05EB   (0x0001)  
	bool                                               IsTouchPlayer;                                              // 0x05EC   (0x0001)  
	bool                                               IsHitTime_;                                                 // 0x05ED   (0x0001)  
	bool                                               HitShield;                                                  // 0x05EE   (0x0001)  
	bool                                               IsShun_;                                                    // 0x05EF   (0x0001)  
	class UPhysicalAnimationComponent*                 PhysicalAnimation;                                          // 0x05F0   (0x0008)  
	bool                                               CanBoken;                                                   // 0x05F8   (0x0001)  
	bool                                               IsKanJiorEMP;                                               // 0x05F9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x05FA   (0x0006)  MISSED
	class USkeletalMeshComponent*                      RightHand;                                                  // 0x0600   (0x0008)  
	class USkeletalMeshComponent*                      LeftHand;                                                   // 0x0608   (0x0008)  
	class USkeletalMeshComponent*                      LeftFoot;                                                   // 0x0610   (0x0008)  
	class USkeletalMeshComponent*                      RightFoot;                                                  // 0x0618   (0x0008)  
	class USkeletalMeshComponent*                      head;                                                       // 0x0620   (0x0008)  
	bool                                               IsChuJue_;                                                  // 0x0628   (0x0001)  
	bool                                               IsChueJueArea_;                                             // 0x0629   (0x0001)  
	bool                                               IsFarAttack_;                                               // 0x062A   (0x0001)  
	bool                                               IsPlayerAirUseQYQ_;                                         // 0x062B   (0x0001)  
	bool                                               BaTi_;                                                      // 0x062C   (0x0001)  
	bool                                               IsAirMelee_;                                                // 0x062D   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x062E   (0x0002)  MISSED
	float                                              Attack_Hit_01;                                              // 0x0630   (0x0004)  
	float                                              SpawnTime;                                                  // 0x0634   (0x0004)  
	float                                              FarAttack_Hit;                                              // 0x0638   (0x0004)  
	float                                              PlayerDistance;                                             // 0x063C   (0x0004)  
	float                                              PerfectDefu_DEFUHealth;                                     // 0x0640   (0x0004)  
	int32_t                                            AirType;                                                    // 0x0644   (0x0004)  
	FVector                                            EMPAirZ;                                                    // 0x0648   (0x000C)  
	bool                                               IsMeleePower_;                                              // 0x0654   (0x0001)  
	bool                                               IsSprintAttack_;                                            // 0x0655   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x0656   (0x0002)  MISSED
	SDK_UNDEFINED(16,964) /* FMulticastInlineDelegate */ __um(GuLouBoss_Dead);                                     // 0x0658   (0x0010)  
	class AGuLouBoss_Dao_BP_C*                         DaoBP;                                                      // 0x0668   (0x0008)  
	bool                                               IsSky_;                                                     // 0x0670   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0671   (0x0007)  MISSED
	class AGuLouBoss_Hand_C*                           STLB;                                                       // 0x0678   (0x0008)  
	bool                                               JzzBoken_;                                                  // 0x0680   (0x0001)  
	bool                                               AXEIS_;                                                     // 0x0681   (0x0001)  
	bool                                               JZZIS_;                                                     // 0x0682   (0x0001)  
	bool                                               EagleIS_;                                                   // 0x0683   (0x0001)  
	bool                                               SnakeIS_;                                                   // 0x0684   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0685   (0x0003)  MISSED
	int32_t                                            PerfactDefu_Number;                                         // 0x0688   (0x0004)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x068C   (0x0004)  MISSED
	class UAIBossHealth_UMG_C*                         BossHealthUI;                                               // 0x0690   (0x0008)  
	SDK_UNDEFINED(16,965) /* FMulticastInlineDelegate */ __um(GuLouBoss_TelePort);                                 // 0x0698   (0x0010)  
	TArray<class UAnimMontage*>                        Montage_to_Play;                                            // 0x06A8   (0x0010)  
	bool                                               CanUseEyeFire_;                                             // 0x06B8   (0x0001)  


	/// Functions
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.AutoAnimPlayerEvent
	// void AutoAnimPlayerEvent();                                                                                              // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.HitEdm
	// void HitEdm();                                                                                                           // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.HitBlood
	// void HitBlood();                                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.LookAtPlayer
	// void LookAtPlayer();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.OnFail_D223664141D41294E9A8E0B66FCD6C7A
	// void OnFail_D223664141D41294E9A8E0B66FCD6C7A(TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.OnSuccess_D223664141D41294E9A8E0B66FCD6C7A
	// void OnSuccess_D223664141D41294E9A8E0B66FCD6C7A(TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Completed_4850272540B76A35C104D5AAA9657A0E
	// void Completed_4850272540B76A35C104D5AAA9657A0E(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.OnFailure_5D518A6B4DEAE85F5AF8049C09055620
	// void OnFailure_5D518A6B4DEAE85F5AF8049C09055620(FName WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag); // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.OnSuccess_5D518A6B4DEAE85F5AF8049C09055620
	// void OnSuccess_5D518A6B4DEAE85F5AF8049C09055620(FName WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag); // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.OnFailure_E98FB37249AABDDB865FBC8B6D9C895E
	// void OnFailure_E98FB37249AABDDB865FBC8B6D9C895E();                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.OnSuccess_E98FB37249AABDDB865FBC8B6D9C895E
	// void OnSuccess_E98FB37249AABDDB865FBC8B6D9C895E();                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.AIHeadShot
	// void AIHeadShot();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.AIHandRShot
	// void AIHandRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.AIHandLShot
	// void AIHandLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.AIFootLShot
	// void AIFootLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.AIFootRShot
	// void AIFootRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_ShieldHit
	// void Send_ShieldHit();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_HuaChan
	// void Send_HuaChan();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_ShieldHitMeleeOrSword
	// void Send_ShieldHitMeleeOrSword(int32_t Hit);                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_AIQYQ
	// void Send_AIQYQ();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_NearDefu
	// void Send_NearDefu(int32_t FireType);                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_PerfectDefu
	// void Send_PerfectDefu(int32_t FireType);                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_AIBoat
	// void Send_AIBoat(class UPrimitiveComponent* HitBox, float Hit);                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_AIDEFUHealths
	// void Send_AIDEFUHealths(float DEFUHealth, float BloddHealth, bool HaveDefu_);                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_DisPlayAIHealthUI
	// void Send_DisPlayAIHealthUI(bool Vis_);                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_BloodHK
	// void Send_BloodHK();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_DefuHK
	// void Send_DefuHK();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_Add_Alerts
	// void Send_Add_Alerts(float DS);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_Dee_Alert
	// void Send_Dee_Alert();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_ForwardSeePlayer
	// void Send_ForwardSeePlayer();                                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_FootAI_Alert
	// void Send_FootAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_BackSeePlayer
	// void Send_BackSeePlayer();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_ShunAI_Alert
	// void Send_ShunAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_PlayerHitCarAI
	// void Send_PlayerHitCarAI();                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_PlayerQYQAI
	// void Send_PlayerQYQAI(int32_t Number);                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_HealthUIVis
	// void Send_HealthUIVis();                                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.MoveToPlayer
	// void MoveToPlayer();                                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.NearFire
	// void NearFire();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.RestLDMove
	// void RestLDMove();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.ShunR
	// void ShunR();                                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.ReceiveAnyDamage
	// void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser); // [0x148e900] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.AIHit
	// void AIHit();                                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_HitSword
	// void Send_HitSword(float Hit, int32_t FiretType);                                                                        // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.-Health
	// void _Health();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_MeleePower
	// void Send_MeleePower(float Hit);                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_UpLightSword
	// void Send_UpLightSword(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.ForceLookPlayer
	// void ForceLookPlayer();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_KanJi
	// void Send_KanJi(float Hit);                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_ZhaDi
	// void Send_ZhaDi();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.BndEvt__Attack_HitTouch_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Attack_HitTouch_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Open_Hit01_Event
	// void Open_Hit01_Event();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Close_Hit01_Event
	// void Close_Hit01_Event();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.AttackTrace
	// void AttackTrace();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.PerfectDefu_HitAnim
	// void PerfectDefu_HitAnim();                                                                                              // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_AIFlyQYQ
	// void Send_AIFlyQYQ();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.ShunL
	// void ShunL();                                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.UpDataDEFUHealth
	// void UpDataDEFUHealth();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.ForceDEFUAnim
	// void ForceDEFUAnim();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_EMP
	// void Send_EMP(float Hit);                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.ForceFire
	// void ForceFire();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.SpawnZhaDiBig
	// void SpawnZhaDiBig();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.ShunF
	// void ShunF();                                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_SprintAttack
	// void Send_SprintAttack(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.ShunB
	// void ShunB();                                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.RandomPlayShun
	// void RandomPlayShun();                                                                                                   // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.TickRadialForce
	// void TickRadialForce();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.SpawnFarAttackBP
	// void SpawnFarAttackBP();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.SpawnFire_Forward
	// void SpawnFire_Forward();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.SpawnFarAttackBP2
	// void SpawnFarAttackBP2();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.FarFire
	// void FarFire();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_ForceAIHit
	// void Send_ForceAIHit();                                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.SkyStart
	// void SkyStart();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.AXE
	// void AXE();                                                                                                              // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.JZZ
	// void JZZ();                                                                                                              // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.PlayerHaveJzz
	// void PlayerHaveJzz();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Eagle
	// void Eagle();                                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Snake
	// void Snake();                                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_GERFire
	// void Send_GERFire();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Fire-Health
	// void Fire_Health();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.GERFireEvent
	// void GERFireEvent();                                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_XuLiMelee
	// void Send_XuLiMelee(float Hit);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.Send_GuLouHand_Hit
	// void Send_GuLouHand_Hit(float Hit);                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.EyeFire
	// void EyeFire();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.ExecuteUbergraph_NPC_GuLouBoss_AI
	// void ExecuteUbergraph_NPC_GuLouBoss_AI(int32_t EntryPoint);                                                              // [0x148e900] Final|HasDefaults    
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.GuLouBoss_TelePort__DelegateSignature
	// void GuLouBoss_TelePort__DelegateSignature();                                                                            // [0x148e900] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/GuLouBoss/BP/NPC_GuLouBoss_AI.NPC_GuLouBoss_AI_C.GuLouBoss_Dead__DelegateSignature
	// void GuLouBoss_Dead__DelegateSignature();                                                                                // [0x148e900] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C
/// Size: 0x0674 (1652 bytes) (0x0004B8 - 0x000674) align 16 MaxSize: 0x0674
class ANPC_DunArmy_AI_C : public ACharacter
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x04B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04C0   (0x0008)  
	class UParticleSystemComponent*                    PS_FireSmall;                                               // 0x04C8   (0x0008)  
	class UParticleSystemComponent*                    AirEdm;                                                     // 0x04D0   (0x0008)  
	class UStaticMeshComponent*                        NPC_Army_HeadRou;                                           // 0x04D8   (0x0008)  
	class UBoxComponent*                               Attack_EdmHitTouch;                                         // 0x04E0   (0x0008)  
	class UAudioComponent*                             S_DunArmy_DianLiuLoop;                                      // 0x04E8   (0x0008)  
	class UParticleSystemComponent*                    EdmBangZi;                                                  // 0x04F0   (0x0008)  
	class UStaticMeshComponent*                        NPC_BMI_DunArmy_Bang;                                       // 0x04F8   (0x0008)  
	class UStaticMeshComponent*                        NPC_BMI_DunArmy_Dun;                                        // 0x0500   (0x0008)  
	class UWidgetComponent*                            HealthAI;                                                   // 0x0508   (0x0008)  
	class UParticleSystemComponent*                    M_explosionSpark_Air;                                       // 0x0510   (0x0008)  
	class UParticleSystemComponent*                    M_explosionSpark_Normal;                                    // 0x0518   (0x0008)  
	class UPhysicalAnimationComponent*                 PhysicalAnimations;                                         // 0x0520   (0x0008)  
	class UArrowComponent*                             AutoAimPlayer;                                              // 0x0528   (0x0008)  
	class UArrowComponent*                             AttackTraceLoc;                                             // 0x0530   (0x0008)  
	class UBoxComponent*                               Attack_HitTouch_01;                                         // 0x0538   (0x0008)  
	class UBoxComponent*                               Head_Shot;                                                  // 0x0540   (0x0008)  
	class USphereComponent*                            QYQTouch;                                                   // 0x0548   (0x0008)  
	class UParticleSystemComponent*                    QYQPar;                                                     // 0x0550   (0x0008)  
	class UBoxComponent*                               FootR_Shot;                                                 // 0x0558   (0x0008)  
	class UBoxComponent*                               FootL_Shot;                                                 // 0x0560   (0x0008)  
	class UBoxComponent*                               HandL_Shot;                                                 // 0x0568   (0x0008)  
	class UBoxComponent*                               HandR_Shot;                                                 // 0x0570   (0x0008)  
	class UPointLightComponent*                        HitLight;                                                   // 0x0578   (0x0008)  
	class UParticleSystemComponent*                    XChange_Edms;                                               // 0x0580   (0x0008)  
	class UArrowComponent*                             AirZCombo;                                                  // 0x0588   (0x0008)  
	class UArrowComponent*                             LightSwordAirZ;                                             // 0x0590   (0x0008)  
	class UParticleSystemComponent*                    BloodHead;                                                  // 0x0598   (0x0008)  
	class UParticleSystemComponent*                    BloodBody;                                                  // 0x05A0   (0x0008)  
	float                                              JiaSu_Speed_16CE25EC4E3843F0746A538707AFEDE2;               // 0x05A8   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    JiaSu__Direction_16CE25EC4E3843F0746A538707AFEDE2;          // 0x05AC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x05AD   (0x0003)  MISSED
	class UTimelineComponent*                          JiaSu;                                                      // 0x05B0   (0x0008)  
	float                                              JianSu_Speed_F9A3F67C4F4EDB4356D5EFB7851EF30F;              // 0x05B8   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    JianSu__Direction_F9A3F67C4F4EDB4356D5EFB7851EF30F;         // 0x05BC   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x05BD   (0x0003)  MISSED
	class UTimelineComponent*                          JianSu;                                                     // 0x05C0   (0x0008)  
	float                                              HitPhy_Weight_E76AAD9D4D2BE4443D10A5AA92B4E14D;             // 0x05C8   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    HitPhy__Direction_E76AAD9D4D2BE4443D10A5AA92B4E14D;         // 0x05CC   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x05CD   (0x0003)  MISSED
	class UTimelineComponent*                          HitPhy;                                                     // 0x05D0   (0x0008)  
	float                                              AIHealth;                                                   // 0x05D8   (0x0004)  
	float                                              AIMAXHealth;                                                // 0x05DC   (0x0004)  
	FName                                              AirTouchBone;                                               // 0x05E0   (0x0008)  
	bool                                               IsDead_;                                                    // 0x05E8   (0x0001)  
	bool                                               IsFirstLookPlayer;                                          // 0x05E9   (0x0001)  
	bool                                               IsSpawn_;                                                   // 0x05EA   (0x0001)  
	bool                                               IsFireTime;                                                 // 0x05EB   (0x0001)  
	bool                                               IsTouchPlayer;                                              // 0x05EC   (0x0001)  
	bool                                               IsHitTime_;                                                 // 0x05ED   (0x0001)  
	bool                                               HitShield;                                                  // 0x05EE   (0x0001)  
	bool                                               IsAirTime_;                                                 // 0x05EF   (0x0001)  
	bool                                               IsShun_;                                                    // 0x05F0   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x05F1   (0x0007)  MISSED
	class UPhysicalAnimationComponent*                 PhysicalAnimation;                                          // 0x05F8   (0x0008)  
	bool                                               IsAirAnimFinish_;                                           // 0x0600   (0x0001)  
	bool                                               CanBoken;                                                   // 0x0601   (0x0001)  
	bool                                               IsKanJiorEMP;                                               // 0x0602   (0x0001)  
	unsigned char                                      UnknownData05_6[0x5];                                       // 0x0603   (0x0005)  MISSED
	class USkeletalMeshComponent*                      RightHand;                                                  // 0x0608   (0x0008)  
	class USkeletalMeshComponent*                      LeftHand;                                                   // 0x0610   (0x0008)  
	class USkeletalMeshComponent*                      LeftFoot;                                                   // 0x0618   (0x0008)  
	class USkeletalMeshComponent*                      RightFoot;                                                  // 0x0620   (0x0008)  
	class USkeletalMeshComponent*                      head;                                                       // 0x0628   (0x0008)  
	bool                                               IsChuJue_;                                                  // 0x0630   (0x0001)  
	bool                                               IsChueJueArea_;                                             // 0x0631   (0x0001)  
	bool                                               IsFarAttack_;                                               // 0x0632   (0x0001)  
	bool                                               IsPlayerAirUseQYQ_;                                         // 0x0633   (0x0001)  
	bool                                               DFHave_;                                                    // 0x0634   (0x0001)  
	bool                                               BaTi_;                                                      // 0x0635   (0x0001)  
	bool                                               IsAirMelee_;                                                // 0x0636   (0x0001)  
	unsigned char                                      UnknownData06_6[0x1];                                       // 0x0637   (0x0001)  MISSED
	float                                              Attack_Hit_01;                                              // 0x0638   (0x0004)  
	float                                              SpawnTime;                                                  // 0x063C   (0x0004)  
	SDK_UNDEFINED(16,966) /* FMulticastInlineDelegate */ __um(AIDEAD);                                             // 0x0640   (0x0010)  
	float                                              FarAttack_Hit;                                              // 0x0650   (0x0004)  
	float                                              NOWDEFUHealth;                                              // 0x0654   (0x0004)  
	float                                              MAXDEFUHealth;                                              // 0x0658   (0x0004)  
	float                                              DEFU_UIProgress;                                            // 0x065C   (0x0004)  
	float                                              PlayerDistance;                                             // 0x0660   (0x0004)  
	float                                              PerfectDefu_DEFUHealth;                                     // 0x0664   (0x0004)  
	int32_t                                            AirType;                                                    // 0x0668   (0x0004)  
	bool                                               IsMeleePower_;                                              // 0x066C   (0x0001)  
	bool                                               ForceAirTime;                                               // 0x066D   (0x0001)  
	bool                                               IsSprintAttack_;                                            // 0x066E   (0x0001)  
	unsigned char                                      UnknownData07_6[0x1];                                       // 0x066F   (0x0001)  MISSED
	int32_t                                            ShieldHealth;                                               // 0x0670   (0x0004)  


	/// Functions
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.HealthUI_Vis?
	// void HealthUI_Vis_();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.TraceWall
	// void TraceWall();                                                                                                        // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.ForceLookPlayers
	// void ForceLookPlayers();                                                                                                 // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.HealthUIRotToPlayer
	// void HealthUIRotToPlayer();                                                                                              // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.AutoAnimPlayerEvent
	// void AutoAnimPlayerEvent();                                                                                              // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.HitEdm
	// void HitEdm();                                                                                                           // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.HitBlood
	// void HitBlood();                                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.LookAtPlayer
	// void LookAtPlayer();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.HitPhy__FinishedFunc
	// void HitPhy__FinishedFunc();                                                                                             // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.HitPhy__UpdateFunc
	// void HitPhy__UpdateFunc();                                                                                               // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.JianSu__FinishedFunc
	// void JianSu__FinishedFunc();                                                                                             // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.JianSu__UpdateFunc
	// void JianSu__UpdateFunc();                                                                                               // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.JiaSu__FinishedFunc
	// void JiaSu__FinishedFunc();                                                                                              // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.JiaSu__UpdateFunc
	// void JiaSu__UpdateFunc();                                                                                                // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.OnFail_89FED29C460B7223C8AC968CA3AD11B9
	// void OnFail_89FED29C460B7223C8AC968CA3AD11B9(TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.OnSuccess_89FED29C460B7223C8AC968CA3AD11B9
	// void OnSuccess_89FED29C460B7223C8AC968CA3AD11B9(TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Completed_939FFC27496EAE43D9FC3B963A14B7F5
	// void Completed_939FFC27496EAE43D9FC3B963A14B7F5(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_HuaChan
	// void Send_HuaChan();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_NearDefu
	// void Send_NearDefu(int32_t FireType);                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_PerfectDefu
	// void Send_PerfectDefu(int32_t FireType);                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_AIBoat
	// void Send_AIBoat(class UPrimitiveComponent* HitBox, float Hit);                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_AIDEFUHealths
	// void Send_AIDEFUHealths(float DEFUHealth, float BloddHealth, bool HaveDefu_);                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_ForceAIHit
	// void Send_ForceAIHit();                                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_BloodHK
	// void Send_BloodHK();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_DefuHK
	// void Send_DefuHK();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_Add_Alerts
	// void Send_Add_Alerts(float DS);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_Dee_Alert
	// void Send_Dee_Alert();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_ForwardSeePlayer
	// void Send_ForwardSeePlayer();                                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_FootAI_Alert
	// void Send_FootAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_BackSeePlayer
	// void Send_BackSeePlayer();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_ShunAI_Alert
	// void Send_ShunAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_PlayerHitCarAI
	// void Send_PlayerHitCarAI();                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_PlayerQYQAI
	// void Send_PlayerQYQAI(int32_t Number);                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_GuLouHand_Hit
	// void Send_GuLouHand_Hit(float Hit);                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.MoveToPlayer
	// void MoveToPlayer();                                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.NearFire
	// void NearFire();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.RestRunToWalk
	// void RestRunToWalk();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.ReceiveAnyDamage
	// void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser); // [0x148e900] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.AIHit
	// void AIHit();                                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_HitSword
	// void Send_HitSword(float Hit, int32_t FiretType);                                                                        // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.-Health
	// void _Health();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_MeleePower
	// void Send_MeleePower(float Hit);                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_UpLightSword
	// void Send_UpLightSword(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.FallGround
	// void FallGround();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.UpDataAirZ
	// void UpDataAirZ();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.ForceLookPlayer
	// void ForceLookPlayer();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_KanJi
	// void Send_KanJi(float Hit);                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_ZhaDi
	// void Send_ZhaDi();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.AIHandRShot
	// void AIHandRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.AIHandLShot
	// void AIHandLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.BokenHandR
	// void BokenHandR();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.BokenHandL
	// void BokenHandL();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.BokenFootL
	// void BokenFootL();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.AIFootLShot
	// void AIFootLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.BokenFootR
	// void BokenFootR();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.AIFootRShot
	// void AIFootRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_AIQYQ
	// void Send_AIQYQ();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.RandomBoken
	// void RandomBoken();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.BokenHead
	// void BokenHead();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.AIHeadShot
	// void AIHeadShot();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.BndEvt__Attack_HitTouch_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Attack_HitTouch_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Open_Hit01_Event
	// void Open_Hit01_Event();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Close_Hit01_Event
	// void Close_Hit01_Event();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.AttackTrace
	// void AttackTrace();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.PerfectDefu_HitAnim
	// void PerfectDefu_HitAnim();                                                                                              // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_AIFlyQYQ
	// void Send_AIFlyQYQ();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Warning
	// void Warning();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.IsAirUp
	// void IsAirUp();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.UpDataDEFUHealth
	// void UpDataDEFUHealth();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_DisPlayAIHealthUI
	// void Send_DisPlayAIHealthUI(bool Vis_);                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.ForceDEFUAnim
	// void ForceDEFUAnim();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.ForceAirOff
	// void ForceAirOff();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_EMP
	// void Send_EMP(float Hit);                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.ForceAir
	// void ForceAir();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_SprintAttack
	// void Send_SprintAttack(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_ShieldHit
	// void Send_ShieldHit();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_ShieldHitMeleeOrSword
	// void Send_ShieldHitMeleeOrSword(int32_t Hit);                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.RestWalkToRun
	// void RestWalkToRun();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.BndEvt__Attack_EdmHitTouch_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Attack_EdmHitTouch_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Open_HitEdm_Event
	// void Open_HitEdm_Event();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Close_HiEdm_Event
	// void Close_HiEdm_Event();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.RestAirTraceZ
	// void RestAirTraceZ();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.PXBodyTraceGround
	// void PXBodyTraceGround();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.StopAirMove
	// void StopAirMove();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_GERFire
	// void Send_GERFire();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Fire-Health
	// void Fire_Health();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.GERFireEvent
	// void GERFireEvent();                                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_HealthUIVis
	// void Send_HealthUIVis();                                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.Send_XuLiMelee
	// void Send_XuLiMelee(float Hit);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.ExecuteUbergraph_NPC_DunArmy_AI
	// void ExecuteUbergraph_NPC_DunArmy_AI(int32_t EntryPoint);                                                                // [0x148e900] Final|HasDefaults    
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_DunArmy_AI.NPC_DunArmy_AI_C.AIDEAD__DelegateSignature
	// void AIDEAD__DelegateSignature();                                                                                        // [0x148e900] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C
/// Size: 0x063F (1599 bytes) (0x0004B8 - 0x00063F) align 16 MaxSize: 0x063F
class ANPC_IronArmy2_AI_C : public ACharacter
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x04B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04C0   (0x0008)  
	class UParticleSystemComponent*                    PS_FireSmall;                                               // 0x04C8   (0x0008)  
	class UParticleSystemComponent*                    AirEdm;                                                     // 0x04D0   (0x0008)  
	class UParticleSystemComponent*                    EdmBangZi2;                                                 // 0x04D8   (0x0008)  
	class UParticleSystemComponent*                    EdmBangZi;                                                  // 0x04E0   (0x0008)  
	class UStaticMeshComponent*                        _3D_IronArmy_WP;                                            // 0x04E8   (0x0008)  
	class UWidgetComponent*                            HealthAI;                                                   // 0x04F0   (0x0008)  
	class UParticleSystemComponent*                    M_explosionSpark_Air;                                       // 0x04F8   (0x0008)  
	class UParticleSystemComponent*                    M_explosionSpark_Normal;                                    // 0x0500   (0x0008)  
	class UBoxComponent*                               FarAttack_HitTouch;                                         // 0x0508   (0x0008)  
	class UPhysicalAnimationComponent*                 PhysicalAnimations;                                         // 0x0510   (0x0008)  
	class UArrowComponent*                             AutoAimPlayer;                                              // 0x0518   (0x0008)  
	class UArrowComponent*                             AttackTraceLoc;                                             // 0x0520   (0x0008)  
	class UBoxComponent*                               Attack_HitTouch_01;                                         // 0x0528   (0x0008)  
	class UBoxComponent*                               Head_Shot;                                                  // 0x0530   (0x0008)  
	class USphereComponent*                            QYQTouch;                                                   // 0x0538   (0x0008)  
	class UParticleSystemComponent*                    QYQPar;                                                     // 0x0540   (0x0008)  
	class UBoxComponent*                               FootR_Shot;                                                 // 0x0548   (0x0008)  
	class UBoxComponent*                               FootL_Shot;                                                 // 0x0550   (0x0008)  
	class UBoxComponent*                               HandL_Shot;                                                 // 0x0558   (0x0008)  
	class UBoxComponent*                               HandR_Shot;                                                 // 0x0560   (0x0008)  
	class UPointLightComponent*                        HitLight;                                                   // 0x0568   (0x0008)  
	class UParticleSystemComponent*                    XChange_Edms;                                               // 0x0570   (0x0008)  
	class UArrowComponent*                             AirZCombo;                                                  // 0x0578   (0x0008)  
	class UArrowComponent*                             LightSwordAirZ;                                             // 0x0580   (0x0008)  
	class UParticleSystemComponent*                    BloodHead;                                                  // 0x0588   (0x0008)  
	class UParticleSystemComponent*                    BloodBody;                                                  // 0x0590   (0x0008)  
	float                                              HitPhy_Weight_7DE034254B1C3D3DA23884BDEDE200E6;             // 0x0598   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    HitPhy__Direction_7DE034254B1C3D3DA23884BDEDE200E6;         // 0x059C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x059D   (0x0003)  MISSED
	class UTimelineComponent*                          HitPhy;                                                     // 0x05A0   (0x0008)  
	float                                              AIHealth;                                                   // 0x05A8   (0x0004)  
	float                                              AIMAXHealth;                                                // 0x05AC   (0x0004)  
	FName                                              AirTouchBone;                                               // 0x05B0   (0x0008)  
	bool                                               IsDead_;                                                    // 0x05B8   (0x0001)  
	bool                                               IsFirstLookPlayer;                                          // 0x05B9   (0x0001)  
	bool                                               IsSpawn_;                                                   // 0x05BA   (0x0001)  
	bool                                               IsFireTime;                                                 // 0x05BB   (0x0001)  
	bool                                               IsTouchPlayer;                                              // 0x05BC   (0x0001)  
	bool                                               IsHitTime_;                                                 // 0x05BD   (0x0001)  
	bool                                               HitShield;                                                  // 0x05BE   (0x0001)  
	bool                                               IsAirTime_;                                                 // 0x05BF   (0x0001)  
	bool                                               IsShun_;                                                    // 0x05C0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x05C1   (0x0007)  MISSED
	class UPhysicalAnimationComponent*                 PhysicalAnimation;                                          // 0x05C8   (0x0008)  
	bool                                               IsAirAnimFinish_;                                           // 0x05D0   (0x0001)  
	bool                                               CanBoken;                                                   // 0x05D1   (0x0001)  
	bool                                               IsKanJiorEMP;                                               // 0x05D2   (0x0001)  
	unsigned char                                      UnknownData03_6[0x5];                                       // 0x05D3   (0x0005)  MISSED
	class USkeletalMeshComponent*                      RightHand;                                                  // 0x05D8   (0x0008)  
	class USkeletalMeshComponent*                      LeftHand;                                                   // 0x05E0   (0x0008)  
	class USkeletalMeshComponent*                      LeftFoot;                                                   // 0x05E8   (0x0008)  
	class USkeletalMeshComponent*                      RightFoot;                                                  // 0x05F0   (0x0008)  
	class USkeletalMeshComponent*                      head;                                                       // 0x05F8   (0x0008)  
	bool                                               IsChuJue_;                                                  // 0x0600   (0x0001)  
	bool                                               IsChueJueArea_;                                             // 0x0601   (0x0001)  
	bool                                               IsFarAttack_;                                               // 0x0602   (0x0001)  
	bool                                               IsPlayerAirUseQYQ_;                                         // 0x0603   (0x0001)  
	bool                                               DFHave_;                                                    // 0x0604   (0x0001)  
	bool                                               BaTi_;                                                      // 0x0605   (0x0001)  
	bool                                               IsAirMelee_;                                                // 0x0606   (0x0001)  
	unsigned char                                      UnknownData04_6[0x1];                                       // 0x0607   (0x0001)  MISSED
	float                                              Attack_Hit_01;                                              // 0x0608   (0x0004)  
	float                                              SpawnTime;                                                  // 0x060C   (0x0004)  
	SDK_UNDEFINED(16,967) /* FMulticastInlineDelegate */ __um(AIDEAD);                                             // 0x0610   (0x0010)  
	float                                              FarAttack_Hit;                                              // 0x0620   (0x0004)  
	float                                              NOWDEFUHealth;                                              // 0x0624   (0x0004)  
	float                                              MAXDEFUHealth;                                              // 0x0628   (0x0004)  
	float                                              DEFU_UIProgress;                                            // 0x062C   (0x0004)  
	float                                              PlayerDistance;                                             // 0x0630   (0x0004)  
	float                                              PerfectDefu_DEFUHealth;                                     // 0x0634   (0x0004)  
	int32_t                                            AirType;                                                    // 0x0638   (0x0004)  
	bool                                               IsMeleePower_;                                              // 0x063C   (0x0001)  
	bool                                               ForceAirTime;                                               // 0x063D   (0x0001)  
	bool                                               IsSprintAttack_;                                            // 0x063E   (0x0001)  


	/// Functions
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.HealthUI_Vis?
	// void HealthUI_Vis_();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.TraceWall
	// void TraceWall();                                                                                                        // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.HealthUIRotToPlayer
	// void HealthUIRotToPlayer();                                                                                              // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.AutoAnimPlayerEvent
	// void AutoAnimPlayerEvent();                                                                                              // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.HitEdm
	// void HitEdm();                                                                                                           // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.HitBlood
	// void HitBlood();                                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.LookAtPlayer
	// void LookAtPlayer();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.HitPhy__FinishedFunc
	// void HitPhy__FinishedFunc();                                                                                             // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.HitPhy__UpdateFunc
	// void HitPhy__UpdateFunc();                                                                                               // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.OnFail_C9E7A056483B69C4D311DD881D213F4B
	// void OnFail_C9E7A056483B69C4D311DD881D213F4B(TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.OnSuccess_C9E7A056483B69C4D311DD881D213F4B
	// void OnSuccess_C9E7A056483B69C4D311DD881D213F4B(TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Completed_B3CAB04F4CDF238C855D4A82FF1BBE5A
	// void Completed_B3CAB04F4CDF238C855D4A82FF1BBE5A(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_ShieldHit
	// void Send_ShieldHit();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_HuaChan
	// void Send_HuaChan();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_ShieldHitMeleeOrSword
	// void Send_ShieldHitMeleeOrSword(int32_t Hit);                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_NearDefu
	// void Send_NearDefu(int32_t FireType);                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_PerfectDefu
	// void Send_PerfectDefu(int32_t FireType);                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_AIBoat
	// void Send_AIBoat(class UPrimitiveComponent* HitBox, float Hit);                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_AIDEFUHealths
	// void Send_AIDEFUHealths(float DEFUHealth, float BloddHealth, bool HaveDefu_);                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_ForceAIHit
	// void Send_ForceAIHit();                                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_BloodHK
	// void Send_BloodHK();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_DefuHK
	// void Send_DefuHK();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_Add_Alerts
	// void Send_Add_Alerts(float DS);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_Dee_Alert
	// void Send_Dee_Alert();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_ForwardSeePlayer
	// void Send_ForwardSeePlayer();                                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_FootAI_Alert
	// void Send_FootAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_BackSeePlayer
	// void Send_BackSeePlayer();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_ShunAI_Alert
	// void Send_ShunAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_PlayerHitCarAI
	// void Send_PlayerHitCarAI();                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_PlayerQYQAI
	// void Send_PlayerQYQAI(int32_t Number);                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_GuLouHand_Hit
	// void Send_GuLouHand_Hit(float Hit);                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.MoveToPlayer
	// void MoveToPlayer();                                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.NearFire
	// void NearFire();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.RestLDMove
	// void RestLDMove();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.ShunBack
	// void ShunBack();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.ReceiveAnyDamage
	// void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser); // [0x148e900] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.AIHit
	// void AIHit();                                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_HitSword
	// void Send_HitSword(float Hit, int32_t FiretType);                                                                        // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.-Health
	// void _Health();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_MeleePower
	// void Send_MeleePower(float Hit);                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_UpLightSword
	// void Send_UpLightSword(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.FallGround
	// void FallGround();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.UpDataAirZ
	// void UpDataAirZ();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.ForceLookPlayer
	// void ForceLookPlayer();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_KanJi
	// void Send_KanJi(float Hit);                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_ZhaDi
	// void Send_ZhaDi();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.AIHandRShot
	// void AIHandRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.AIHandLShot
	// void AIHandLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.BokenHandR
	// void BokenHandR();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.BokenHandL
	// void BokenHandL();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.BokenFootL
	// void BokenFootL();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.AIFootLShot
	// void AIFootLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.BokenFootR
	// void BokenFootR();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.AIFootRShot
	// void AIFootRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_AIQYQ
	// void Send_AIQYQ();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.RandomBoken
	// void RandomBoken();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.BokenHead
	// void BokenHead();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.AIHeadShot
	// void AIHeadShot();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.BndEvt__Attack_HitTouch_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Attack_HitTouch_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Open_Hit01_Event
	// void Open_Hit01_Event();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Close_Hit01_Event
	// void Close_Hit01_Event();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.AttackTrace
	// void AttackTrace();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.PerfectDefu_HitAnim
	// void PerfectDefu_HitAnim();                                                                                              // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_AIFlyQYQ
	// void Send_AIFlyQYQ();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Warning
	// void Warning();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.ShunForward
	// void ShunForward();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.SpawnZhaDiBig
	// void SpawnZhaDiBig();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.IsAirUp
	// void IsAirUp();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.UpDataDEFUHealth
	// void UpDataDEFUHealth();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.DefuPerfectPlayer
	// void DefuPerfectPlayer();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_DisPlayAIHealthUI
	// void Send_DisPlayAIHealthUI(bool Vis_);                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.ForceDEFUAnim
	// void ForceDEFUAnim();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.ForceAirOff
	// void ForceAirOff();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_EMP
	// void Send_EMP(float Hit);                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.ForceAir
	// void ForceAir();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_SprintAttack
	// void Send_SprintAttack(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.ShunL
	// void ShunL();                                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.ShunR
	// void ShunR();                                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.RestAirTraceZ
	// void RestAirTraceZ();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.PXBodyTraceGround
	// void PXBodyTraceGround();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.StopAirMove
	// void StopAirMove();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_GERFire
	// void Send_GERFire();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Fire-Health
	// void Fire_Health();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.GERFireEvent
	// void GERFireEvent();                                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_HealthUIVis
	// void Send_HealthUIVis();                                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.Send_XuLiMelee
	// void Send_XuLiMelee(float Hit);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.NearFireForce
	// void NearFireForce();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.ExecuteUbergraph_NPC_IronArmy2_AI
	// void ExecuteUbergraph_NPC_IronArmy2_AI(int32_t EntryPoint);                                                              // [0x148e900] Final|HasDefaults    
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy2_AI.NPC_IronArmy2_AI_C.AIDEAD__DelegateSignature
	// void AIDEAD__DelegateSignature();                                                                                        // [0x148e900] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C
/// Size: 0x0644 (1604 bytes) (0x0004B8 - 0x000644) align 16 MaxSize: 0x0644
class ANPC_IronArmy_AI_C : public ACharacter
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x04B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04C0   (0x0008)  
	class UParticleSystemComponent*                    PS_FireSmall;                                               // 0x04C8   (0x0008)  
	class UArrowComponent*                             AttackTraceLoc;                                             // 0x04D0   (0x0008)  
	class UWidgetComponent*                            ChuJueUI;                                                   // 0x04D8   (0x0008)  
	class UParticleSystemComponent*                    AirEdm;                                                     // 0x04E0   (0x0008)  
	class UWidgetComponent*                            HealthAI;                                                   // 0x04E8   (0x0008)  
	class USphereComponent*                            ChuJueArea;                                                 // 0x04F0   (0x0008)  
	class UParticleSystemComponent*                    M_explosionSpark_Air;                                       // 0x04F8   (0x0008)  
	class UParticleSystemComponent*                    M_explosionSpark_Normal;                                    // 0x0500   (0x0008)  
	class UBoxComponent*                               FarAttack_HitTouch;                                         // 0x0508   (0x0008)  
	SDK_UNDEFINED(8,968) /* nil* */                    __um(PhysicalAnimations);                                   // 0x0510   (0x0008)  
	class UArrowComponent*                             AutoAimPlayer;                                              // 0x0518   (0x0008)  
	class UBoxComponent*                               Attack_HitTouch_01;                                         // 0x0520   (0x0008)  
	class UBoxComponent*                               Head_Shot;                                                  // 0x0528   (0x0008)  
	class USphereComponent*                            QYQTouch;                                                   // 0x0530   (0x0008)  
	class UParticleSystemComponent*                    QYQPar;                                                     // 0x0538   (0x0008)  
	class UBoxComponent*                               FootR_Shot;                                                 // 0x0540   (0x0008)  
	class UBoxComponent*                               FootL_Shot;                                                 // 0x0548   (0x0008)  
	class UBoxComponent*                               HandL_Shot;                                                 // 0x0550   (0x0008)  
	class UBoxComponent*                               HandR_Shot;                                                 // 0x0558   (0x0008)  
	class UPointLightComponent*                        HitLight;                                                   // 0x0560   (0x0008)  
	class UParticleSystemComponent*                    XChange_Edms;                                               // 0x0568   (0x0008)  
	class UArrowComponent*                             AirZCombo;                                                  // 0x0570   (0x0008)  
	class UArrowComponent*                             LightSwordAirZ;                                             // 0x0578   (0x0008)  
	class UParticleSystemComponent*                    BloodHead;                                                  // 0x0580   (0x0008)  
	class UParticleSystemComponent*                    BloodBody;                                                  // 0x0588   (0x0008)  
	float                                              HitPhy_Weight_AF9CB90F4960E24F9DFA3D8CBD884BA2;             // 0x0590   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    HitPhy__Direction_AF9CB90F4960E24F9DFA3D8CBD884BA2;         // 0x0594   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0595   (0x0003)  MISSED
	class UTimelineComponent*                          HitPhy;                                                     // 0x0598   (0x0008)  
	float                                              AIHealth;                                                   // 0x05A0   (0x0004)  
	float                                              AIMAXHealth;                                                // 0x05A4   (0x0004)  
	FName                                              AirTouchBone;                                               // 0x05A8   (0x0008)  
	bool                                               IsDead_;                                                    // 0x05B0   (0x0001)  
	bool                                               IsFirstLookPlayer;                                          // 0x05B1   (0x0001)  
	bool                                               IsSpawn_;                                                   // 0x05B2   (0x0001)  
	bool                                               IsFireTime;                                                 // 0x05B3   (0x0001)  
	bool                                               IsTouchPlayer;                                              // 0x05B4   (0x0001)  
	bool                                               IsHitTime_;                                                 // 0x05B5   (0x0001)  
	bool                                               HitShield;                                                  // 0x05B6   (0x0001)  
	bool                                               IsAirTime_;                                                 // 0x05B7   (0x0001)  
	bool                                               IsShun_;                                                    // 0x05B8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x05B9   (0x0007)  MISSED
	class UPhysicalAnimationComponent*                 PhysicalAnimation;                                          // 0x05C0   (0x0008)  
	bool                                               IsAirAnimFinish_;                                           // 0x05C8   (0x0001)  
	bool                                               CanBoken;                                                   // 0x05C9   (0x0001)  
	bool                                               IsKanJiorEMP;                                               // 0x05CA   (0x0001)  
	unsigned char                                      UnknownData03_6[0x5];                                       // 0x05CB   (0x0005)  MISSED
	class USkeletalMeshComponent*                      RightHand;                                                  // 0x05D0   (0x0008)  
	class USkeletalMeshComponent*                      LeftHand;                                                   // 0x05D8   (0x0008)  
	class USkeletalMeshComponent*                      LeftFoot;                                                   // 0x05E0   (0x0008)  
	class USkeletalMeshComponent*                      RightFoot;                                                  // 0x05E8   (0x0008)  
	class USkeletalMeshComponent*                      head;                                                       // 0x05F0   (0x0008)  
	bool                                               IsChuJue_;                                                  // 0x05F8   (0x0001)  
	bool                                               IsChueJueArea_;                                             // 0x05F9   (0x0001)  
	bool                                               IsFarAttack_;                                               // 0x05FA   (0x0001)  
	bool                                               IsPlayerAirUseQYQ_;                                         // 0x05FB   (0x0001)  
	bool                                               DFHave_;                                                    // 0x05FC   (0x0001)  
	bool                                               BaTi_;                                                      // 0x05FD   (0x0001)  
	bool                                               IsAirMelee_;                                                // 0x05FE   (0x0001)  
	unsigned char                                      UnknownData04_6[0x1];                                       // 0x05FF   (0x0001)  MISSED
	float                                              Attack_Hit_01;                                              // 0x0600   (0x0004)  
	float                                              SpawnTime;                                                  // 0x0604   (0x0004)  
	SDK_UNDEFINED(16,969) /* FMulticastInlineDelegate */ __um(AIDEAD);                                             // 0x0608   (0x0010)  
	float                                              FarAttack_Hit;                                              // 0x0618   (0x0004)  
	float                                              NOWDEFUHealth;                                              // 0x061C   (0x0004)  
	float                                              MAXDEFUHealth;                                              // 0x0620   (0x0004)  
	float                                              DEFU_UIProgress;                                            // 0x0624   (0x0004)  
	float                                              PlayerDistance;                                             // 0x0628   (0x0004)  
	float                                              PerfectDefu_DEFUHealth;                                     // 0x062C   (0x0004)  
	int32_t                                            AirType;                                                    // 0x0630   (0x0004)  
	FVector                                            EMPAirZ;                                                    // 0x0634   (0x000C)  
	bool                                               IsMeleePower_;                                              // 0x0640   (0x0001)  
	bool                                               JumpDownSpawn_;                                             // 0x0641   (0x0001)  
	bool                                               IsSprintAttack_;                                            // 0x0642   (0x0001)  
	bool                                               AirPlaneSpawn_;                                             // 0x0643   (0x0001)  


	/// Functions
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.HealthUI_Vis?
	// void HealthUI_Vis_();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.TraceGroundRot
	// void TraceGroundRot();                                                                                                   // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.TraceWall
	// void TraceWall();                                                                                                        // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.HealthUIRotToPlayer
	// void HealthUIRotToPlayer();                                                                                              // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.AutoAnimPlayerEvent
	// void AutoAnimPlayerEvent();                                                                                              // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.HitEdm
	// void HitEdm();                                                                                                           // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.HitBlood
	// void HitBlood();                                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.LookAtPlayer
	// void LookAtPlayer();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.HitPhy__FinishedFunc
	// void HitPhy__FinishedFunc();                                                                                             // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.HitPhy__UpdateFunc
	// void HitPhy__UpdateFunc();                                                                                               // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.OnFail_14D61C3F42CF8DD5F717C2A001F7F61B
	// void OnFail_14D61C3F42CF8DD5F717C2A001F7F61B(TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.OnSuccess_14D61C3F42CF8DD5F717C2A001F7F61B
	// void OnSuccess_14D61C3F42CF8DD5F717C2A001F7F61B(TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Completed_C3E563B74A140202D706F0A612F0647D
	// void Completed_C3E563B74A140202D706F0A612F0647D(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_ShieldHit
	// void Send_ShieldHit();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_HuaChan
	// void Send_HuaChan();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_ShieldHitMeleeOrSword
	// void Send_ShieldHitMeleeOrSword(int32_t Hit);                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_NearDefu
	// void Send_NearDefu(int32_t FireType);                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_PerfectDefu
	// void Send_PerfectDefu(int32_t FireType);                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_AIBoat
	// void Send_AIBoat(class UPrimitiveComponent* HitBox, float Hit);                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_AIDEFUHealths
	// void Send_AIDEFUHealths(float DEFUHealth, float BloddHealth, bool HaveDefu_);                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_ForceAIHit
	// void Send_ForceAIHit();                                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_BloodHK
	// void Send_BloodHK();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_DefuHK
	// void Send_DefuHK();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_Add_Alerts
	// void Send_Add_Alerts(float DS);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_Dee_Alert
	// void Send_Dee_Alert();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_ForwardSeePlayer
	// void Send_ForwardSeePlayer();                                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_FootAI_Alert
	// void Send_FootAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_BackSeePlayer
	// void Send_BackSeePlayer();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_ShunAI_Alert
	// void Send_ShunAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_PlayerHitCarAI
	// void Send_PlayerHitCarAI();                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_PlayerQYQAI
	// void Send_PlayerQYQAI(int32_t Number);                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_GuLouHand_Hit
	// void Send_GuLouHand_Hit(float Hit);                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.MoveToPlayer
	// void MoveToPlayer();                                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.NearFire
	// void NearFire();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.RestLDMove
	// void RestLDMove();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.ShunBack
	// void ShunBack();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.ReceiveAnyDamage
	// void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser); // [0x148e900] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.AIHit
	// void AIHit();                                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_HitSword
	// void Send_HitSword(float Hit, int32_t FiretType);                                                                        // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.-Health
	// void _Health();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_MeleePower
	// void Send_MeleePower(float Hit);                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_UpLightSword
	// void Send_UpLightSword(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.FallGround
	// void FallGround();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.UpDataAirZ
	// void UpDataAirZ();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.ForceLookPlayer
	// void ForceLookPlayer();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.RestAirTraceZ
	// void RestAirTraceZ();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_KanJi
	// void Send_KanJi(float Hit);                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_ZhaDi
	// void Send_ZhaDi();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.AIHandRShot
	// void AIHandRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.AIHandLShot
	// void AIHandLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.BokenHandR
	// void BokenHandR();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.BokenHandL
	// void BokenHandL();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.BokenFootL
	// void BokenFootL();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.AIFootLShot
	// void AIFootLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.BokenFootR
	// void BokenFootR();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.AIFootRShot
	// void AIFootRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_AIQYQ
	// void Send_AIQYQ();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.RandomBoken
	// void RandomBoken();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.BokenHead
	// void BokenHead();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.AIHeadShot
	// void AIHeadShot();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.BndEvt__Attack_HitTouch_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Attack_HitTouch_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Open_Hit01_Event
	// void Open_Hit01_Event();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Close_Hit01_Event
	// void Close_Hit01_Event();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.AttackTrace
	// void AttackTrace();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.PerfectDefu_HitAnim
	// void PerfectDefu_HitAnim();                                                                                              // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.SpawnZhaDi
	// void SpawnZhaDi();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_AIFlyQYQ
	// void Send_AIFlyQYQ();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Warning
	// void Warning();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.ShunLeft
	// void ShunLeft();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.ShunRight
	// void ShunRight();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.SpawnFarAttackBP
	// void SpawnFarAttackBP();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.FarFire
	// void FarFire();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.SpawnZhaDiBig
	// void SpawnZhaDiBig();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.IsAirUp
	// void IsAirUp();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.BndEvt__FarAttack_HitTouch_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__FarAttack_HitTouch_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.BndEvt__ChuJueArea_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__ChuJueArea_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.BndEvt__ChuJueArea_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__ChuJueArea_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.KillOver
	// void KillOver();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.StartKillAnim
	// void StartKillAnim();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.UpDataDEFUHealth
	// void UpDataDEFUHealth();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.DefuPerfectPlayer
	// void DefuPerfectPlayer();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_DisPlayAIHealthUI
	// void Send_DisPlayAIHealthUI(bool Vis_);                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.ForceDEFUAnim
	// void ForceDEFUAnim();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.ForceAirOff
	// void ForceAirOff();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_EMP
	// void Send_EMP(float Hit);                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.ForceAir
	// void ForceAir();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_SprintAttack
	// void Send_SprintAttack(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.PXBodyTraceGround
	// void PXBodyTraceGround();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_GERFire
	// void Send_GERFire();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Fire-Health
	// void Fire_Health();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.GERFireEvent
	// void GERFireEvent();                                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.StopAirMove
	// void StopAirMove();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_HealthUIVis
	// void Send_HealthUIVis();                                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.Send_XuLiMelee
	// void Send_XuLiMelee(float Hit);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.ExecuteUbergraph_NPC_IronArmy_AI
	// void ExecuteUbergraph_NPC_IronArmy_AI(int32_t EntryPoint);                                                               // [0x148e900] Final|HasDefaults    
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI.NPC_IronArmy_AI_C.AIDEAD__DelegateSignature
	// void AIDEAD__DelegateSignature();                                                                                        // [0x148e900] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_AI_ChuJue.NPC_IronArmy_AI_ChuJue_C
/// Size: 0x0644 (1604 bytes) (0x000644 - 0x000644) align 16 MaxSize: 0x0644
class ANPC_IronArmy_AI_ChuJue_C : public ANPC_IronArmy_AI_C
{ 
public:
};

/// Class /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C
/// Size: 0x0611 (1553 bytes) (0x0004B8 - 0x000611) align 16 MaxSize: 0x0611
class ANPC_IronArmy_NewPlayer_C : public ACharacter
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x04B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04C0   (0x0008)  
	class UParticleSystemComponent*                    AirEdm;                                                     // 0x04C8   (0x0008)  
	class UParticleSystemComponent*                    M_explosionSpark_Air;                                       // 0x04D0   (0x0008)  
	class UParticleSystemComponent*                    M_explosionSpark_Normal;                                    // 0x04D8   (0x0008)  
	class UBoxComponent*                               FarAttack_HitTouch;                                         // 0x04E0   (0x0008)  
	class UPhysicalAnimationComponent*                 PhysicalAnimations;                                         // 0x04E8   (0x0008)  
	class UArrowComponent*                             AutoAimPlayer;                                              // 0x04F0   (0x0008)  
	class UArrowComponent*                             AttackTraceLoc;                                             // 0x04F8   (0x0008)  
	class UBoxComponent*                               Attack_HitTouch_01;                                         // 0x0500   (0x0008)  
	class UBoxComponent*                               Head_Shot;                                                  // 0x0508   (0x0008)  
	class USphereComponent*                            QYQTouch;                                                   // 0x0510   (0x0008)  
	class UParticleSystemComponent*                    QYQPar;                                                     // 0x0518   (0x0008)  
	class UBoxComponent*                               FootR_Shot;                                                 // 0x0520   (0x0008)  
	class UBoxComponent*                               FootL_Shot;                                                 // 0x0528   (0x0008)  
	class UBoxComponent*                               HandL_Shot;                                                 // 0x0530   (0x0008)  
	class UBoxComponent*                               HandR_Shot;                                                 // 0x0538   (0x0008)  
	class UPointLightComponent*                        HitLight;                                                   // 0x0540   (0x0008)  
	class UParticleSystemComponent*                    XChange_Edms;                                               // 0x0548   (0x0008)  
	class UArrowComponent*                             AirZCombo;                                                  // 0x0550   (0x0008)  
	class UArrowComponent*                             AirZ;                                                       // 0x0558   (0x0008)  
	class UParticleSystemComponent*                    BloodHead;                                                  // 0x0560   (0x0008)  
	class UParticleSystemComponent*                    BloodBody;                                                  // 0x0568   (0x0008)  
	float                                              HitPhy_Weight_AE9D3ECB42466C89898631AD4DBFB101;             // 0x0570   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    HitPhy__Direction_AE9D3ECB42466C89898631AD4DBFB101;         // 0x0574   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0575   (0x0003)  MISSED
	class UTimelineComponent*                          HitPhy;                                                     // 0x0578   (0x0008)  
	float                                              PlayerDistance;                                             // 0x0580   (0x0004)  
	bool                                               IsDead_;                                                    // 0x0584   (0x0001)  
	bool                                               IsFirstLookPlayer;                                          // 0x0585   (0x0001)  
	bool                                               IsSpawn_;                                                   // 0x0586   (0x0001)  
	bool                                               IsFireTime;                                                 // 0x0587   (0x0001)  
	bool                                               IsTouchPlayer;                                              // 0x0588   (0x0001)  
	bool                                               IsHitTime_;                                                 // 0x0589   (0x0001)  
	bool                                               HitShield;                                                  // 0x058A   (0x0001)  
	bool                                               IsAirTime_;                                                 // 0x058B   (0x0001)  
	bool                                               IsShun_;                                                    // 0x058C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x058D   (0x0003)  MISSED
	float                                              AIHealth;                                                   // 0x0590   (0x0004)  
	int32_t                                            AIMAXHealth;                                                // 0x0594   (0x0004)  
	FName                                              AirTouchBone;                                               // 0x0598   (0x0008)  
	class UPhysicalAnimationComponent*                 PhysicalAnimation;                                          // 0x05A0   (0x0008)  
	bool                                               IsAirAnimFinish_;                                           // 0x05A8   (0x0001)  
	bool                                               CanBoken;                                                   // 0x05A9   (0x0001)  
	bool                                               IsKanJi;                                                    // 0x05AA   (0x0001)  
	unsigned char                                      UnknownData03_6[0x5];                                       // 0x05AB   (0x0005)  MISSED
	class USkeletalMeshComponent*                      RightHand;                                                  // 0x05B0   (0x0008)  
	class USkeletalMeshComponent*                      LeftHand;                                                   // 0x05B8   (0x0008)  
	class USkeletalMeshComponent*                      LeftFoot;                                                   // 0x05C0   (0x0008)  
	class USkeletalMeshComponent*                      RightFoot;                                                  // 0x05C8   (0x0008)  
	class USkeletalMeshComponent*                      head;                                                       // 0x05D0   (0x0008)  
	float                                              Attack_Hit_01;                                              // 0x05D8   (0x0004)  
	bool                                               IsPlayerAirUseQYQ_;                                         // 0x05DC   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x05DD   (0x0003)  MISSED
	float                                              SpawnTime;                                                  // 0x05E0   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x05E4   (0x0004)  MISSED
	SDK_UNDEFINED(16,970) /* FMulticastInlineDelegate */ __um(AIDEAD);                                             // 0x05E8   (0x0010)  
	bool                                               DFOver_;                                                    // 0x05F8   (0x0001)  
	bool                                               IsFarAttack_;                                               // 0x05F9   (0x0001)  
	unsigned char                                      UnknownData06_6[0x2];                                       // 0x05FA   (0x0002)  MISSED
	float                                              FarAttack_Hit;                                              // 0x05FC   (0x0004)  
	bool                                               StartNewPlayerEvent;                                        // 0x0600   (0x0001)  
	unsigned char                                      UnknownData07_6[0x7];                                       // 0x0601   (0x0007)  MISSED
	class UBMI_NewPlayerTip_BaseUMG_C*                 NewPlayerUI;                                                // 0x0608   (0x0008)  
	bool                                               FinishLightSword;                                           // 0x0610   (0x0001)  


	/// Functions
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.AutoAnimPlayerEvent
	// void AutoAnimPlayerEvent();                                                                                              // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.HitEdm
	// void HitEdm();                                                                                                           // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.HitBlood
	// void HitBlood();                                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.LookAtPlayer
	// void LookAtPlayer();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.HitPhy__FinishedFunc
	// void HitPhy__FinishedFunc();                                                                                             // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.HitPhy__UpdateFunc
	// void HitPhy__UpdateFunc();                                                                                               // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.OnFail_8717361048AB0F4FF7A233A422C3003F
	// void OnFail_8717361048AB0F4FF7A233A422C3003F(TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.OnSuccess_8717361048AB0F4FF7A233A422C3003F
	// void OnSuccess_8717361048AB0F4FF7A233A422C3003F(TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_ShieldHit
	// void Send_ShieldHit();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_HuaChan
	// void Send_HuaChan();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_ShieldHitMeleeOrSword
	// void Send_ShieldHitMeleeOrSword(int32_t Hit);                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_NearDefu
	// void Send_NearDefu(int32_t FireType);                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_PerfectDefu
	// void Send_PerfectDefu(int32_t FireType);                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_AIBoat
	// void Send_AIBoat(class UPrimitiveComponent* HitBox, float Hit);                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_AIDEFUHealths
	// void Send_AIDEFUHealths(float DEFUHealth, float BloddHealth, bool HaveDefu_);                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_DisPlayAIHealthUI
	// void Send_DisPlayAIHealthUI(bool Vis_);                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_ForceAIHit
	// void Send_ForceAIHit();                                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_BloodHK
	// void Send_BloodHK();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_DefuHK
	// void Send_DefuHK();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_Add_Alerts
	// void Send_Add_Alerts(float DS);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_Dee_Alert
	// void Send_Dee_Alert();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_ForwardSeePlayer
	// void Send_ForwardSeePlayer();                                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_FootAI_Alert
	// void Send_FootAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_BackSeePlayer
	// void Send_BackSeePlayer();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_ShunAI_Alert
	// void Send_ShunAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_SprintAttack
	// void Send_SprintAttack(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_PlayerHitCarAI
	// void Send_PlayerHitCarAI();                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_PlayerQYQAI
	// void Send_PlayerQYQAI(int32_t Number);                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_GERFire
	// void Send_GERFire();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_HealthUIVis
	// void Send_HealthUIVis();                                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_XuLiMelee
	// void Send_XuLiMelee(float Hit);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_GuLouHand_Hit
	// void Send_GuLouHand_Hit(float Hit);                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.MoveToPlayer
	// void MoveToPlayer();                                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.NearFire
	// void NearFire();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.ReceiveAnyDamage
	// void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser); // [0x148e900] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.AIHit
	// void AIHit();                                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_HitSword
	// void Send_HitSword(float Hit, int32_t FiretType);                                                                        // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.-Health
	// void _Health();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_EMP
	// void Send_EMP(float Hit);                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_MeleePower
	// void Send_MeleePower(float Hit);                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_UpLightSword
	// void Send_UpLightSword(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.FallGround
	// void FallGround();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.UpDataAirZ
	// void UpDataAirZ();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.ForceLookPlayer
	// void ForceLookPlayer();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.RestAirZ
	// void RestAirZ();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_KanJi
	// void Send_KanJi(float Hit);                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_ZhaDi
	// void Send_ZhaDi();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.AIHandRShot
	// void AIHandRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.AIHandLShot
	// void AIHandLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.BokenHandR
	// void BokenHandR();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.BokenHandL
	// void BokenHandL();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.BokenFootL
	// void BokenFootL();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.AIFootLShot
	// void AIFootLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.BokenFootR
	// void BokenFootR();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.AIFootRShot
	// void AIFootRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_AIQYQ
	// void Send_AIQYQ();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.RandomBoken
	// void RandomBoken();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.BokenHead
	// void BokenHead();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.AIHeadShot
	// void AIHeadShot();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.BndEvt__Attack_HitTouch_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Attack_HitTouch_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Open_Hit01_Event
	// void Open_Hit01_Event();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Close_Hit01_Event
	// void Close_Hit01_Event();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.AttackTrace
	// void AttackTrace();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.PerfectDefu_HitAnim
	// void PerfectDefu_HitAnim();                                                                                              // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.SpawnZhaDi
	// void SpawnZhaDi();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Send_AIFlyQYQ
	// void Send_AIFlyQYQ();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.SpawnFarAttackBP
	// void SpawnFarAttackBP();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.SpawnZhaDiBig
	// void SpawnZhaDiBig();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.IsAirUp
	// void IsAirUp();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.BndEvt__FarAttack_HitTouch_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__FarAttack_HitTouch_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.DFIsBreak
	// void DFIsBreak();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.NewPlayer_PerfectDefu
	// void NewPlayer_PerfectDefu();                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Finish_PerFectDefu
	// void Finish_PerFectDefu();                                                                                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.NewPlayer_UpLightSword
	// void NewPlayer_UpLightSword();                                                                                           // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Finish_UpLightSword
	// void Finish_UpLightSword();                                                                                              // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.NewPlayer_LightSword
	// void NewPlayer_LightSword();                                                                                             // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.Finish_LightSword
	// void Finish_LightSword();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.AutoAnimNewPlayerIronArmyAI
	// void AutoAnimNewPlayerIronArmyAI();                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.RestAirTraceZ
	// void RestAirTraceZ();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.ExecuteUbergraph_NPC_IronArmy_NewPlayer
	// void ExecuteUbergraph_NPC_IronArmy_NewPlayer(int32_t EntryPoint);                                                        // [0x148e900] Final|HasDefaults    
	// Function /Game/NPC_AIBMI/IronArmy/BP/NPC_IronArmy_NewPlayer.NPC_IronArmy_NewPlayer_C.AIDEAD__DelegateSignature
	// void AIDEAD__DelegateSignature();                                                                                        // [0x148e900] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C
/// Size: 0x05C4 (1476 bytes) (0x0004B8 - 0x0005C4) align 16 MaxSize: 0x05C4
class ANPC_Pig_AI_C : public ACharacter
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x04B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04C0   (0x0008)  
	class UParticleSystemComponent*                    PS_FireSmall;                                               // 0x04C8   (0x0008)  
	class UWidgetComponent*                            HealthAI;                                                   // 0x04D0   (0x0008)  
	class UArrowComponent*                             AirZCombo;                                                  // 0x04D8   (0x0008)  
	class UArrowComponent*                             AutoAimPlayer;                                              // 0x04E0   (0x0008)  
	class UArrowComponent*                             AttackTraceLoc;                                             // 0x04E8   (0x0008)  
	class UBoxComponent*                               Attack_HitTouch_01;                                         // 0x04F0   (0x0008)  
	class UBoxComponent*                               Head_Shot;                                                  // 0x04F8   (0x0008)  
	class UParticleSystemComponent*                    QYQPar;                                                     // 0x0500   (0x0008)  
	class UPointLightComponent*                        HitLight;                                                   // 0x0508   (0x0008)  
	class UPhysicalAnimationComponent*                 PhysicalAnimations;                                         // 0x0510   (0x0008)  
	class UParticleSystemComponent*                    XChange_Edms;                                               // 0x0518   (0x0008)  
	class UArrowComponent*                             LightSwordAirZ;                                             // 0x0520   (0x0008)  
	class UParticleSystemComponent*                    BloodHead;                                                  // 0x0528   (0x0008)  
	class UParticleSystemComponent*                    BloodBody;                                                  // 0x0530   (0x0008)  
	float                                              PlayerDistance;                                             // 0x0538   (0x0004)  
	bool                                               IsDead_;                                                    // 0x053C   (0x0001)  
	bool                                               IsFirstLookPlayer;                                          // 0x053D   (0x0001)  
	bool                                               IsSpawn_;                                                   // 0x053E   (0x0001)  
	bool                                               IsFireTime;                                                 // 0x053F   (0x0001)  
	bool                                               IsTouchPlayer;                                              // 0x0540   (0x0001)  
	bool                                               IsHitTime_;                                                 // 0x0541   (0x0001)  
	bool                                               HitShield;                                                  // 0x0542   (0x0001)  
	bool                                               IsAirTime_;                                                 // 0x0543   (0x0001)  
	bool                                               IsShun_;                                                    // 0x0544   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0545   (0x0003)  MISSED
	float                                              AIHealth;                                                   // 0x0548   (0x0004)  
	float                                              AIMAXHealth;                                                // 0x054C   (0x0004)  
	FName                                              AirTouchBone;                                               // 0x0550   (0x0008)  
	class UPhysicalAnimationComponent*                 PhysicalAnimation;                                          // 0x0558   (0x0008)  
	bool                                               IsAirAnimFinish_;                                           // 0x0560   (0x0001)  
	bool                                               CanBoken;                                                   // 0x0561   (0x0001)  
	bool                                               IsKanJiorEMP;                                               // 0x0562   (0x0001)  
	unsigned char                                      UnknownData02_6[0x5];                                       // 0x0563   (0x0005)  MISSED
	class USkeletalMeshComponent*                      RightHand;                                                  // 0x0568   (0x0008)  
	class USkeletalMeshComponent*                      LeftHand;                                                   // 0x0570   (0x0008)  
	class USkeletalMeshComponent*                      LeftFoot;                                                   // 0x0578   (0x0008)  
	class USkeletalMeshComponent*                      RightFoot;                                                  // 0x0580   (0x0008)  
	class USkeletalMeshComponent*                      head;                                                       // 0x0588   (0x0008)  
	float                                              Attack_HitT_01;                                             // 0x0590   (0x0004)  
	bool                                               IsPlayerAirUseQYQ_;                                         // 0x0594   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0595   (0x0003)  MISSED
	float                                              SpawnTime;                                                  // 0x0598   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x059C   (0x0004)  MISSED
	SDK_UNDEFINED(16,971) /* FMulticastInlineDelegate */ __um(AIDEAD);                                             // 0x05A0   (0x0010)  
	FVector                                            EMPAirZ;                                                    // 0x05B0   (0x000C)  
	int32_t                                            AirType;                                                    // 0x05BC   (0x0004)  
	bool                                               IsSprintAttack_;                                            // 0x05C0   (0x0001)  
	bool                                               IsKing_;                                                    // 0x05C1   (0x0001)  
	bool                                               IsEatA_;                                                    // 0x05C2   (0x0001)  
	bool                                               IsEatB_;                                                    // 0x05C3   (0x0001)  


	/// Functions
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.HealthUI_Vis?
	// void HealthUI_Vis_();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.ForceLookPlayers
	// void ForceLookPlayers();                                                                                                 // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.HealthUIRotToPlayer
	// void HealthUIRotToPlayer();                                                                                              // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.AirMaterial
	// void AirMaterial();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.AutoAnimPlayerEvent
	// void AutoAnimPlayerEvent();                                                                                              // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.HitEdm
	// void HitEdm();                                                                                                           // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.HitBlood
	// void HitBlood();                                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.LookAtPlayer
	// void LookAtPlayer();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.OnFail_A6B80EBA45DC7365AB4CAEBB46419797
	// void OnFail_A6B80EBA45DC7365AB4CAEBB46419797(TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.OnSuccess_A6B80EBA45DC7365AB4CAEBB46419797
	// void OnSuccess_A6B80EBA45DC7365AB4CAEBB46419797(TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.OnFail_192D692D42AC7C10E36F8BA1E4A7FAFD
	// void OnFail_192D692D42AC7C10E36F8BA1E4A7FAFD(TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.OnSuccess_192D692D42AC7C10E36F8BA1E4A7FAFD
	// void OnSuccess_192D692D42AC7C10E36F8BA1E4A7FAFD(TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Completed_BDEB670E428CC04F06EDB495DC5F27B0
	// void Completed_BDEB670E428CC04F06EDB495DC5F27B0(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.AIHeadShot
	// void AIHeadShot();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.AIHandRShot
	// void AIHandRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.AIHandLShot
	// void AIHandLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.AIFootLShot
	// void AIFootLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.AIFootRShot
	// void AIFootRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_ShieldHit
	// void Send_ShieldHit();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_HuaChan
	// void Send_HuaChan();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_ShieldHitMeleeOrSword
	// void Send_ShieldHitMeleeOrSword(int32_t Hit);                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_NearDefu
	// void Send_NearDefu(int32_t FireType);                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_PerfectDefu
	// void Send_PerfectDefu(int32_t FireType);                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_AIBoat
	// void Send_AIBoat(class UPrimitiveComponent* HitBox, float Hit);                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_AIDEFUHealths
	// void Send_AIDEFUHealths(float DEFUHealth, float BloddHealth, bool HaveDefu_);                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_ForceAIHit
	// void Send_ForceAIHit();                                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_BloodHK
	// void Send_BloodHK();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_DefuHK
	// void Send_DefuHK();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_Add_Alerts
	// void Send_Add_Alerts(float DS);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_Dee_Alert
	// void Send_Dee_Alert();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_ForwardSeePlayer
	// void Send_ForwardSeePlayer();                                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_FootAI_Alert
	// void Send_FootAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_BackSeePlayer
	// void Send_BackSeePlayer();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_ShunAI_Alert
	// void Send_ShunAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_PlayerHitCarAI
	// void Send_PlayerHitCarAI();                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_PlayerQYQAI
	// void Send_PlayerQYQAI(int32_t Number);                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_GuLouHand_Hit
	// void Send_GuLouHand_Hit(float Hit);                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.MoveToPlayer
	// void MoveToPlayer();                                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.NearFire
	// void NearFire();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.ReceiveAnyDamage
	// void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser); // [0x148e900] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.AIHit
	// void AIHit();                                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_HitSword
	// void Send_HitSword(float Hit, int32_t FiretType);                                                                        // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.-Health
	// void _Health();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_MeleePower
	// void Send_MeleePower(float Hit);                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_UpLightSword
	// void Send_UpLightSword(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.ForceLookPlayer
	// void ForceLookPlayer();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_KanJi
	// void Send_KanJi(float Hit);                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_ZhaDi
	// void Send_ZhaDi();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_AIQYQ
	// void Send_AIQYQ();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.BndEvt__Attack_HitTouch_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Attack_HitTouch_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Open_Hit01_Event
	// void Open_Hit01_Event();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Close_Hit01_Event
	// void Close_Hit01_Event();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.AttackTrace
	// void AttackTrace();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.PerfectDefu_HitAnim
	// void PerfectDefu_HitAnim();                                                                                              // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.SpawnZhaDi
	// void SpawnZhaDi();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_AIFlyQYQ
	// void Send_AIFlyQYQ();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.UpDataDEFUHealth
	// void UpDataDEFUHealth();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_DisPlayAIHealthUI
	// void Send_DisPlayAIHealthUI(bool Vis_);                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_EMP
	// void Send_EMP(float Hit);                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.ForceAir
	// void ForceAir();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_SprintAttack
	// void Send_SprintAttack(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.ForceFindPlayer
	// void ForceFindPlayer();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.ForceDead
	// void ForceDead();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_GERFire
	// void Send_GERFire();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Fire-Health
	// void Fire_Health();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.GERFireEvent
	// void GERFireEvent();                                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_HealthUIVis
	// void Send_HealthUIVis();                                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.Send_XuLiMelee
	// void Send_XuLiMelee(float Hit);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.ExecuteUbergraph_NPC_Pig_AI
	// void ExecuteUbergraph_NPC_Pig_AI(int32_t EntryPoint);                                                                    // [0x148e900] Final|HasDefaults    
	// Function /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI.NPC_Pig_AI_C.AIDEAD__DelegateSignature
	// void AIDEAD__DelegateSignature();                                                                                        // [0x148e900] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/NPC_AIBMI/Pig/BP/NPC_Pig_AI_Car.NPC_Pig_AI_Car_C
/// Size: 0x05C4 (1476 bytes) (0x0005C4 - 0x0005C4) align 16 MaxSize: 0x05C4
class ANPC_Pig_AI_Car_C : public ANPC_Pig_AI_C
{ 
public:
};

/// Class /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C
/// Size: 0x05DA (1498 bytes) (0x0004B8 - 0x0005DA) align 16 MaxSize: 0x05DA
class ANPC_RockLion_AI_C : public ACharacter
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x04B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04C0   (0x0008)  
	class USphereComponent*                            Sphere;                                                     // 0x04C8   (0x0008)  
	class UParticleSystemComponent*                    FX_Knight_Back;                                             // 0x04D0   (0x0008)  
	class USphereComponent*                            QYQTouch;                                                   // 0x04D8   (0x0008)  
	class UPointLightComponent*                        BodyLight;                                                  // 0x04E0   (0x0008)  
	class UWidgetComponent*                            HealthAI;                                                   // 0x04E8   (0x0008)  
	class UArrowComponent*                             AirZCombo;                                                  // 0x04F0   (0x0008)  
	class UArrowComponent*                             AutoAimPlayer;                                              // 0x04F8   (0x0008)  
	class UArrowComponent*                             AttackTraceLoc;                                             // 0x0500   (0x0008)  
	class UBoxComponent*                               Attack_HitTouch_01;                                         // 0x0508   (0x0008)  
	class UBoxComponent*                               Head_Shot;                                                  // 0x0510   (0x0008)  
	class UParticleSystemComponent*                    QYQPar;                                                     // 0x0518   (0x0008)  
	class UPointLightComponent*                        HitLight;                                                   // 0x0520   (0x0008)  
	class UPhysicalAnimationComponent*                 PhysicalAnimations;                                         // 0x0528   (0x0008)  
	class UParticleSystemComponent*                    XChange_Edms;                                               // 0x0530   (0x0008)  
	class UArrowComponent*                             LightSwordAirZ;                                             // 0x0538   (0x0008)  
	class UParticleSystemComponent*                    BloodHead;                                                  // 0x0540   (0x0008)  
	class UParticleSystemComponent*                    BloodBody;                                                  // 0x0548   (0x0008)  
	float                                              PlayerDistance;                                             // 0x0550   (0x0004)  
	bool                                               IsDead_;                                                    // 0x0554   (0x0001)  
	bool                                               IsFirstLookPlayer;                                          // 0x0555   (0x0001)  
	bool                                               IsSpawn_;                                                   // 0x0556   (0x0001)  
	bool                                               IsFireTime;                                                 // 0x0557   (0x0001)  
	bool                                               IsTouchPlayer;                                              // 0x0558   (0x0001)  
	bool                                               IsHitTime_;                                                 // 0x0559   (0x0001)  
	bool                                               HitShield;                                                  // 0x055A   (0x0001)  
	bool                                               IsShun_;                                                    // 0x055B   (0x0001)  
	float                                              AIHealth;                                                   // 0x055C   (0x0004)  
	float                                              AIMAXHealth;                                                // 0x0560   (0x0004)  
	FName                                              AirTouchBone;                                               // 0x0564   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x056C   (0x0004)  MISSED
	class UPhysicalAnimationComponent*                 PhysicalAnimation;                                          // 0x0570   (0x0008)  
	bool                                               IsAirAnimFinish_;                                           // 0x0578   (0x0001)  
	bool                                               CanBoken;                                                   // 0x0579   (0x0001)  
	bool                                               IsKanJiorEMP;                                               // 0x057A   (0x0001)  
	unsigned char                                      UnknownData02_6[0x5];                                       // 0x057B   (0x0005)  MISSED
	class USkeletalMeshComponent*                      RightHand;                                                  // 0x0580   (0x0008)  
	class USkeletalMeshComponent*                      LeftHand;                                                   // 0x0588   (0x0008)  
	class USkeletalMeshComponent*                      LeftFoot;                                                   // 0x0590   (0x0008)  
	class USkeletalMeshComponent*                      RightFoot;                                                  // 0x0598   (0x0008)  
	class USkeletalMeshComponent*                      head;                                                       // 0x05A0   (0x0008)  
	float                                              Attack_HitT_01;                                             // 0x05A8   (0x0004)  
	bool                                               IsPlayerAirUseQYQ_;                                         // 0x05AC   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x05AD   (0x0003)  MISSED
	float                                              SpawnTime;                                                  // 0x05B0   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x05B4   (0x0004)  MISSED
	SDK_UNDEFINED(16,972) /* FMulticastInlineDelegate */ __um(AIDEAD);                                             // 0x05B8   (0x0010)  
	FVector                                            EMPAirZ;                                                    // 0x05C8   (0x000C)  
	int32_t                                            AirType;                                                    // 0x05D4   (0x0004)  
	bool                                               IsSprintAttack_;                                            // 0x05D8   (0x0001)  
	bool                                               TypeA_;                                                     // 0x05D9   (0x0001)  


	/// Functions
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.HealthUI_Vis?
	// void HealthUI_Vis_();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.ForceLookPlayers
	// void ForceLookPlayers();                                                                                                 // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.HealthUIRotToPlayer
	// void HealthUIRotToPlayer();                                                                                              // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.AirMaterial
	// void AirMaterial();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.AutoAnimPlayerEvent
	// void AutoAnimPlayerEvent();                                                                                              // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.HitEdm
	// void HitEdm();                                                                                                           // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.HitBlood
	// void HitBlood();                                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.LookAtPlayer
	// void LookAtPlayer();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.OnFail_B455AEFA4D1529DE7C3DA0A1A678D706
	// void OnFail_B455AEFA4D1529DE7C3DA0A1A678D706(TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.OnSuccess_B455AEFA4D1529DE7C3DA0A1A678D706
	// void OnSuccess_B455AEFA4D1529DE7C3DA0A1A678D706(TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Completed_1C415C3E4C12DC2CAA33329B64E4F281
	// void Completed_1C415C3E4C12DC2CAA33329B64E4F281(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.AIHeadShot
	// void AIHeadShot();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.AIHandRShot
	// void AIHandRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.AIHandLShot
	// void AIHandLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.AIFootLShot
	// void AIFootLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.AIFootRShot
	// void AIFootRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_ShieldHit
	// void Send_ShieldHit();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_HuaChan
	// void Send_HuaChan();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_ShieldHitMeleeOrSword
	// void Send_ShieldHitMeleeOrSword(int32_t Hit);                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_NearDefu
	// void Send_NearDefu(int32_t FireType);                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_PerfectDefu
	// void Send_PerfectDefu(int32_t FireType);                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_AIBoat
	// void Send_AIBoat(class UPrimitiveComponent* HitBox, float Hit);                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_AIDEFUHealths
	// void Send_AIDEFUHealths(float DEFUHealth, float BloddHealth, bool HaveDefu_);                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_ForceAIHit
	// void Send_ForceAIHit();                                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_BloodHK
	// void Send_BloodHK();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_DefuHK
	// void Send_DefuHK();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_Add_Alerts
	// void Send_Add_Alerts(float DS);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_Dee_Alert
	// void Send_Dee_Alert();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_ForwardSeePlayer
	// void Send_ForwardSeePlayer();                                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_FootAI_Alert
	// void Send_FootAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_BackSeePlayer
	// void Send_BackSeePlayer();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_ShunAI_Alert
	// void Send_ShunAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_PlayerHitCarAI
	// void Send_PlayerHitCarAI();                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_PlayerQYQAI
	// void Send_PlayerQYQAI(int32_t Number);                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_GuLouHand_Hit
	// void Send_GuLouHand_Hit(float Hit);                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.MoveToPlayer
	// void MoveToPlayer();                                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.NearFire
	// void NearFire();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.AIHit
	// void AIHit();                                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_HitSword
	// void Send_HitSword(float Hit, int32_t FiretType);                                                                        // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.-Health
	// void _Health();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_MeleePower
	// void Send_MeleePower(float Hit);                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_UpLightSword
	// void Send_UpLightSword(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.ForceLookPlayer
	// void ForceLookPlayer();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_KanJi
	// void Send_KanJi(float Hit);                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_ZhaDi
	// void Send_ZhaDi();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_AIQYQ
	// void Send_AIQYQ();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.BndEvt__Attack_HitTouch_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Attack_HitTouch_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Open_Hit01_Event
	// void Open_Hit01_Event();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Close_Hit01_Event
	// void Close_Hit01_Event();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.AttackTrace
	// void AttackTrace();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.PerfectDefu_HitAnim
	// void PerfectDefu_HitAnim();                                                                                              // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.SpawnZhaDi
	// void SpawnZhaDi();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_AIFlyQYQ
	// void Send_AIFlyQYQ();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.UpDataDEFUHealth
	// void UpDataDEFUHealth();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_DisPlayAIHealthUI
	// void Send_DisPlayAIHealthUI(bool Vis_);                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_EMP
	// void Send_EMP(float Hit);                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.ForceAir
	// void ForceAir();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_SprintAttack
	// void Send_SprintAttack(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.ForceDead
	// void ForceDead();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.ReceiveAnyDamage
	// void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser); // [0x148e900] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_GERFire
	// void Send_GERFire();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.TickRadialForce
	// void TickRadialForce();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.BndEvt__NPC_RockLion_AI_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__NPC_RockLion_AI_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_HealthUIVis
	// void Send_HealthUIVis();                                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.Send_XuLiMelee
	// void Send_XuLiMelee(float Hit);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.ExecuteUbergraph_NPC_RockLion_AI
	// void ExecuteUbergraph_NPC_RockLion_AI(int32_t EntryPoint);                                                               // [0x148e900] Final|HasDefaults    
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI.NPC_RockLion_AI_C.AIDEAD__DelegateSignature
	// void AIDEAD__DelegateSignature();                                                                                        // [0x148e900] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C
/// Size: 0x05E1 (1505 bytes) (0x0004B8 - 0x0005E1) align 16 MaxSize: 0x05E1
class ANPC_RockLion_AI2_C : public ACharacter
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x04B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04C0   (0x0008)  
	class UArrowComponent*                             FarFireAutoAnimPlayer;                                      // 0x04C8   (0x0008)  
	class USphereComponent*                            Sphere;                                                     // 0x04D0   (0x0008)  
	class UParticleSystemComponent*                    FX_Knight_Back;                                             // 0x04D8   (0x0008)  
	class USphereComponent*                            QYQTouch;                                                   // 0x04E0   (0x0008)  
	class UPointLightComponent*                        BodyLight;                                                  // 0x04E8   (0x0008)  
	class UWidgetComponent*                            HealthAI;                                                   // 0x04F0   (0x0008)  
	class UArrowComponent*                             AirZCombo;                                                  // 0x04F8   (0x0008)  
	class UArrowComponent*                             AutoAimPlayer;                                              // 0x0500   (0x0008)  
	class UArrowComponent*                             AttackTraceLoc;                                             // 0x0508   (0x0008)  
	class UBoxComponent*                               Attack_HitTouch_01;                                         // 0x0510   (0x0008)  
	class UBoxComponent*                               Head_Shot;                                                  // 0x0518   (0x0008)  
	class UParticleSystemComponent*                    QYQPar;                                                     // 0x0520   (0x0008)  
	class UPointLightComponent*                        HitLight;                                                   // 0x0528   (0x0008)  
	class UPhysicalAnimationComponent*                 PhysicalAnimations;                                         // 0x0530   (0x0008)  
	class UParticleSystemComponent*                    XChange_Edms;                                               // 0x0538   (0x0008)  
	class UArrowComponent*                             LightSwordAirZ;                                             // 0x0540   (0x0008)  
	class UParticleSystemComponent*                    BloodHead;                                                  // 0x0548   (0x0008)  
	class UParticleSystemComponent*                    BloodBody;                                                  // 0x0550   (0x0008)  
	float                                              PlayerDistance;                                             // 0x0558   (0x0004)  
	bool                                               IsDead_;                                                    // 0x055C   (0x0001)  
	bool                                               IsFirstLookPlayer;                                          // 0x055D   (0x0001)  
	bool                                               IsSpawn_;                                                   // 0x055E   (0x0001)  
	bool                                               IsFireTime;                                                 // 0x055F   (0x0001)  
	bool                                               IsTouchPlayer;                                              // 0x0560   (0x0001)  
	bool                                               IsHitTime_;                                                 // 0x0561   (0x0001)  
	bool                                               HitShield;                                                  // 0x0562   (0x0001)  
	bool                                               IsShun_;                                                    // 0x0563   (0x0001)  
	float                                              AIHealth;                                                   // 0x0564   (0x0004)  
	float                                              AIMAXHealth;                                                // 0x0568   (0x0004)  
	FName                                              AirTouchBone;                                               // 0x056C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0574   (0x0004)  MISSED
	class UPhysicalAnimationComponent*                 PhysicalAnimation;                                          // 0x0578   (0x0008)  
	bool                                               IsAirAnimFinish_;                                           // 0x0580   (0x0001)  
	bool                                               CanBoken;                                                   // 0x0581   (0x0001)  
	bool                                               IsKanJiorEMP;                                               // 0x0582   (0x0001)  
	unsigned char                                      UnknownData02_6[0x5];                                       // 0x0583   (0x0005)  MISSED
	class USkeletalMeshComponent*                      RightHand;                                                  // 0x0588   (0x0008)  
	class USkeletalMeshComponent*                      LeftHand;                                                   // 0x0590   (0x0008)  
	class USkeletalMeshComponent*                      LeftFoot;                                                   // 0x0598   (0x0008)  
	class USkeletalMeshComponent*                      RightFoot;                                                  // 0x05A0   (0x0008)  
	class USkeletalMeshComponent*                      head;                                                       // 0x05A8   (0x0008)  
	float                                              Attack_HitT_01;                                             // 0x05B0   (0x0004)  
	bool                                               IsPlayerAirUseQYQ_;                                         // 0x05B4   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x05B5   (0x0003)  MISSED
	float                                              SpawnTime;                                                  // 0x05B8   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x05BC   (0x0004)  MISSED
	SDK_UNDEFINED(16,973) /* FMulticastInlineDelegate */ __um(AIDEAD);                                             // 0x05C0   (0x0010)  
	FVector                                            EMPAirZ;                                                    // 0x05D0   (0x000C)  
	int32_t                                            AirType;                                                    // 0x05DC   (0x0004)  
	bool                                               IsSprintAttack_;                                            // 0x05E0   (0x0001)  


	/// Functions
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.HealthUI_Vis?
	// void HealthUI_Vis_();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.ForceLookPlayers
	// void ForceLookPlayers();                                                                                                 // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.HealthUIRotToPlayer
	// void HealthUIRotToPlayer();                                                                                              // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.AirMaterial
	// void AirMaterial();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.AutoAnimPlayerEvent
	// void AutoAnimPlayerEvent();                                                                                              // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.HitEdm
	// void HitEdm();                                                                                                           // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.HitBlood
	// void HitBlood();                                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.LookAtPlayer
	// void LookAtPlayer();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.OnFail_E226D72E4FAF6F4F2D76EE8F9DCB75A5
	// void OnFail_E226D72E4FAF6F4F2D76EE8F9DCB75A5(TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.OnSuccess_E226D72E4FAF6F4F2D76EE8F9DCB75A5
	// void OnSuccess_E226D72E4FAF6F4F2D76EE8F9DCB75A5(TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Completed_5D90792B4D3B75F43F4380A230C06345
	// void Completed_5D90792B4D3B75F43F4380A230C06345(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.AIHeadShot
	// void AIHeadShot();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.AIHandRShot
	// void AIHandRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.AIHandLShot
	// void AIHandLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.AIFootLShot
	// void AIFootLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.AIFootRShot
	// void AIFootRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_ShieldHit
	// void Send_ShieldHit();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_HuaChan
	// void Send_HuaChan();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_ShieldHitMeleeOrSword
	// void Send_ShieldHitMeleeOrSword(int32_t Hit);                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_NearDefu
	// void Send_NearDefu(int32_t FireType);                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_PerfectDefu
	// void Send_PerfectDefu(int32_t FireType);                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_AIBoat
	// void Send_AIBoat(class UPrimitiveComponent* HitBox, float Hit);                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_AIDEFUHealths
	// void Send_AIDEFUHealths(float DEFUHealth, float BloddHealth, bool HaveDefu_);                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_ForceAIHit
	// void Send_ForceAIHit();                                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_BloodHK
	// void Send_BloodHK();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_DefuHK
	// void Send_DefuHK();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_Add_Alerts
	// void Send_Add_Alerts(float DS);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_Dee_Alert
	// void Send_Dee_Alert();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_ForwardSeePlayer
	// void Send_ForwardSeePlayer();                                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_FootAI_Alert
	// void Send_FootAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_BackSeePlayer
	// void Send_BackSeePlayer();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_ShunAI_Alert
	// void Send_ShunAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_PlayerHitCarAI
	// void Send_PlayerHitCarAI();                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_PlayerQYQAI
	// void Send_PlayerQYQAI(int32_t Number);                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_GuLouHand_Hit
	// void Send_GuLouHand_Hit(float Hit);                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.MoveToPlayer
	// void MoveToPlayer();                                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.NearFire
	// void NearFire();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.AIHit
	// void AIHit();                                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_HitSword
	// void Send_HitSword(float Hit, int32_t FiretType);                                                                        // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.-Health
	// void _Health();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_MeleePower
	// void Send_MeleePower(float Hit);                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_UpLightSword
	// void Send_UpLightSword(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.ForceLookPlayer
	// void ForceLookPlayer();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_KanJi
	// void Send_KanJi(float Hit);                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_ZhaDi
	// void Send_ZhaDi();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_AIQYQ
	// void Send_AIQYQ();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.BndEvt__Attack_HitTouch_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Attack_HitTouch_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Open_Hit01_Event
	// void Open_Hit01_Event();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Close_Hit01_Event
	// void Close_Hit01_Event();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.AttackTrace
	// void AttackTrace();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.PerfectDefu_HitAnim
	// void PerfectDefu_HitAnim();                                                                                              // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.SpawnZhaDi
	// void SpawnZhaDi();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_AIFlyQYQ
	// void Send_AIFlyQYQ();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.UpDataDEFUHealth
	// void UpDataDEFUHealth();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_DisPlayAIHealthUI
	// void Send_DisPlayAIHealthUI(bool Vis_);                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_EMP
	// void Send_EMP(float Hit);                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.ForceAir
	// void ForceAir();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_SprintAttack
	// void Send_SprintAttack(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.ForceDead
	// void ForceDead();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.ReceiveAnyDamage
	// void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser); // [0x148e900] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_GERFire
	// void Send_GERFire();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.TickRadialForce
	// void TickRadialForce();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.BndEvt__NPC_RockLion_AI_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__NPC_RockLion_AI_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_HealthUIVis
	// void Send_HealthUIVis();                                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.Send_XuLiMelee
	// void Send_XuLiMelee(float Hit);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.FarFire
	// void FarFire();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.FarFireEvent
	// void FarFireEvent();                                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.RestFire
	// void RestFire();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.ExecuteUbergraph_NPC_RockLion_AI2
	// void ExecuteUbergraph_NPC_RockLion_AI2(int32_t EntryPoint);                                                              // [0x148e900] Final|HasDefaults    
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_AI2.NPC_RockLion_AI2_C.AIDEAD__DelegateSignature
	// void AIDEAD__DelegateSignature();                                                                                        // [0x148e900] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C
/// Size: 0x06CA (1738 bytes) (0x0004B8 - 0x0006CA) align 16 MaxSize: 0x06CA
class ANPC_SiMiao_AI_C : public ACharacter
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x04B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04C0   (0x0008)  
	class UAudioComponent*                             Audio_ChaoFeng;                                             // 0x04C8   (0x0008)  
	class UAudioComponent*                             Audio_HitGround;                                            // 0x04D0   (0x0008)  
	class UParticleSystemComponent*                    PS_FireSmall;                                               // 0x04D8   (0x0008)  
	class UParticleSystemComponent*                    SiMiao_Teleport_TuoWei;                                     // 0x04E0   (0x0008)  
	class UParticleSystemComponent*                    SiMiao_Teleport;                                            // 0x04E8   (0x0008)  
	class UArrowComponent*                             TelePortC;                                                  // 0x04F0   (0x0008)  
	class UArrowComponent*                             TelePortB;                                                  // 0x04F8   (0x0008)  
	class UArrowComponent*                             TelePortA;                                                  // 0x0500   (0x0008)  
	class UWidgetComponent*                            ChuJueUI;                                                   // 0x0508   (0x0008)  
	class UParticleSystemComponent*                    AirEdm;                                                     // 0x0510   (0x0008)  
	class USphereComponent*                            ChuJueArea;                                                 // 0x0518   (0x0008)  
	class UStaticMeshComponent*                        NPC_BMI_SiMiaoBossHeadKui;                                  // 0x0520   (0x0008)  
	class UParticleSystemComponent*                    M_explosionSpark_Normal;                                    // 0x0528   (0x0008)  
	class UBoxComponent*                               Attack_HitTouch_02;                                         // 0x0530   (0x0008)  
	class UParticleSystemComponent*                    SiMiao_WPFire;                                              // 0x0538   (0x0008)  
	class UArrowComponent*                             FarFireLoc;                                                 // 0x0540   (0x0008)  
	class UPointLightComponent*                        BodyLight;                                                  // 0x0548   (0x0008)  
	class UPointLightComponent*                        FireParLight;                                               // 0x0550   (0x0008)  
	class UArrowComponent*                             AirZCombo;                                                  // 0x0558   (0x0008)  
	class UParticleSystemComponent*                    DeadPar;                                                    // 0x0560   (0x0008)  
	class UArrowComponent*                             AutoAimPlayer;                                              // 0x0568   (0x0008)  
	class UParticleSystemComponent*                    WeaponFire;                                                 // 0x0570   (0x0008)  
	class UArrowComponent*                             AttackTraceLoc;                                             // 0x0578   (0x0008)  
	class UBoxComponent*                               Attack_HitTouch_01;                                         // 0x0580   (0x0008)  
	class UBoxComponent*                               Head_Shot;                                                  // 0x0588   (0x0008)  
	class USphereComponent*                            QYQTouch;                                                   // 0x0590   (0x0008)  
	class UParticleSystemComponent*                    QYQPar;                                                     // 0x0598   (0x0008)  
	class UProceduralMeshComponent*                    ProceduralMesh;                                             // 0x05A0   (0x0008)  
	class UPointLightComponent*                        HitLight;                                                   // 0x05A8   (0x0008)  
	class UPhysicalAnimationComponent*                 PhysicalAnimations;                                         // 0x05B0   (0x0008)  
	class UParticleSystemComponent*                    XChange_Edms;                                               // 0x05B8   (0x0008)  
	class UArrowComponent*                             LightSwordAirZ;                                             // 0x05C0   (0x0008)  
	class UParticleSystemComponent*                    BloodHead;                                                  // 0x05C8   (0x0008)  
	class UParticleSystemComponent*                    BloodBody;                                                  // 0x05D0   (0x0008)  
	class UStaticMeshComponent*                        NPC_WarriorWeapon;                                          // 0x05D8   (0x0008)  
	float                                              Timeline_0_Weight_05C6B793441A0B275920FD9669F24EB8;         // 0x05E0   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_05C6B793441A0B275920FD9669F24EB8;     // 0x05E4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x05E5   (0x0003)  MISSED
	class UTimelineComponent*                          Timeline;                                                   // 0x05E8   (0x0008)  
	float                                              PlayerDistance;                                             // 0x05F0   (0x0004)  
	bool                                               IsDead_;                                                    // 0x05F4   (0x0001)  
	bool                                               IsFirstLookPlayer;                                          // 0x05F5   (0x0001)  
	bool                                               IsSpawn_;                                                   // 0x05F6   (0x0001)  
	bool                                               IsFireTime;                                                 // 0x05F7   (0x0001)  
	bool                                               IsTouchPlayer;                                              // 0x05F8   (0x0001)  
	bool                                               IsHitTime_;                                                 // 0x05F9   (0x0001)  
	bool                                               IsAirTime_;                                                 // 0x05FA   (0x0001)  
	bool                                               IsShun_;                                                    // 0x05FB   (0x0001)  
	float                                              AIHealth;                                                   // 0x05FC   (0x0004)  
	int32_t                                            ShieldHealth;                                               // 0x0600   (0x0004)  
	float                                              AIMAXHealth;                                                // 0x0604   (0x0004)  
	FName                                              AirTouchBone;                                               // 0x0608   (0x0008)  
	class UPhysicalAnimationComponent*                 PhysicalAnimation;                                          // 0x0610   (0x0008)  
	bool                                               IsAirAnimFinish_;                                           // 0x0618   (0x0001)  
	bool                                               CanBoken;                                                   // 0x0619   (0x0001)  
	bool                                               IsKanJiorEMP;                                               // 0x061A   (0x0001)  
	unsigned char                                      UnknownData02_6[0x5];                                       // 0x061B   (0x0005)  MISSED
	class USkeletalMeshComponent*                      RightHand;                                                  // 0x0620   (0x0008)  
	class USkeletalMeshComponent*                      LeftHand;                                                   // 0x0628   (0x0008)  
	class USkeletalMeshComponent*                      LeftFoot;                                                   // 0x0630   (0x0008)  
	class USkeletalMeshComponent*                      RightFoot;                                                  // 0x0638   (0x0008)  
	class USkeletalMeshComponent*                      head;                                                       // 0x0640   (0x0008)  
	float                                              Attack_HitT_01;                                             // 0x0648   (0x0004)  
	bool                                               IsPlayerAirUseQYQ_;                                         // 0x064C   (0x0001)  
	bool                                               IsHaveShield_;                                              // 0x064D   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x064E   (0x0002)  MISSED
	float                                              SpawnTime;                                                  // 0x0650   (0x0004)  
	bool                                               IsSequencePlay_;                                            // 0x0654   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0655   (0x0003)  MISSED
	FVector                                            WeaponHandIK;                                               // 0x0658   (0x000C)  
	bool                                               IsMeleeTime;                                                // 0x0664   (0x0001)  
	bool                                               BaTi_;                                                      // 0x0665   (0x0001)  
	bool                                               DFHave_;                                                    // 0x0666   (0x0001)  
	unsigned char                                      UnknownData05_6[0x1];                                       // 0x0667   (0x0001)  MISSED
	float                                              DEFU_UIProgress;                                            // 0x0668   (0x0004)  
	float                                              NOWDEFUHealth;                                              // 0x066C   (0x0004)  
	float                                              PerfectDefu_DEFUHealth;                                     // 0x0670   (0x0004)  
	float                                              MAXDEFUHealth;                                              // 0x0674   (0x0004)  
	float                                              RestDEFUTime;                                               // 0x0678   (0x0004)  
	bool                                               IsAirTraceGround;                                           // 0x067C   (0x0001)  
	bool                                               IsAirMelee_;                                                // 0x067D   (0x0001)  
	unsigned char                                      UnknownData06_6[0x2];                                       // 0x067E   (0x0002)  MISSED
	SDK_UNDEFINED(16,974) /* FMulticastInlineDelegate */ __um(AITelePortAttack);                                   // 0x0680   (0x0010)  
	int32_t                                            AirType;                                                    // 0x0690   (0x0004)  
	bool                                               IsChueJueArea_;                                             // 0x0694   (0x0001)  
	bool                                               PartTimeNoAirs;                                             // 0x0695   (0x0001)  
	bool                                               IsSprintAttack_;                                            // 0x0696   (0x0001)  
	bool                                               FinalBossFighting_;                                         // 0x0697   (0x0001)  
	SDK_UNDEFINED(16,975) /* FMulticastInlineDelegate */ __um(PlaySecordSequence);                                 // 0x0698   (0x0010)  
	bool                                               IsTelePort_;                                                // 0x06A8   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x06A9   (0x0003)  MISSED
	int32_t                                            PerfactDefu_Number;                                         // 0x06AC   (0x0004)  
	class UAIBossHealth_UMG_C*                         BossHealthUI;                                               // 0x06B0   (0x0008)  
	SDK_UNDEFINED(16,976) /* FMulticastInlineDelegate */ __um(OneKill);                                            // 0x06B8   (0x0010)  
	bool                                               ChaoFengSoundPlay_;                                         // 0x06C8   (0x0001)  
	bool                                               BeginTalkFinish_;                                           // 0x06C9   (0x0001)  


	/// Functions
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.TraceTelePortWall
	// void TraceTelePortWall();                                                                                                // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.TraceWall
	// void TraceWall();                                                                                                        // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.AirMaterial
	// void AirMaterial();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.AutoAnimPlayerEvent
	// void AutoAnimPlayerEvent();                                                                                              // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.HitBlood
	// void HitBlood();                                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.HitEdm
	// void HitEdm();                                                                                                           // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.LookAtPlayer
	// void LookAtPlayer();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Timeline_0__FinishedFunc
	// void Timeline_0__FinishedFunc();                                                                                         // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Timeline_0__UpdateFunc
	// void Timeline_0__UpdateFunc();                                                                                           // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.OnFail_184594FB40D7429BF49425BF5FBCF836
	// void OnFail_184594FB40D7429BF49425BF5FBCF836(TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.OnSuccess_184594FB40D7429BF49425BF5FBCF836
	// void OnSuccess_184594FB40D7429BF49425BF5FBCF836(TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Completed_60EACDFF419C285CC1A1349B406E5ADE
	// void Completed_60EACDFF419C285CC1A1349B406E5ADE(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.OnFailure_5E17B8B04182C724B6A24290CDEFDC72
	// void OnFailure_5E17B8B04182C724B6A24290CDEFDC72(FName WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag); // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.OnSuccess_5E17B8B04182C724B6A24290CDEFDC72
	// void OnSuccess_5E17B8B04182C724B6A24290CDEFDC72(FName WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag); // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.OnFailure_0EDF36684FA099D432C56393409D6D27
	// void OnFailure_0EDF36684FA099D432C56393409D6D27();                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.OnSuccess_0EDF36684FA099D432C56393409D6D27
	// void OnSuccess_0EDF36684FA099D432C56393409D6D27();                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.OnFailure_DCE138BA4933D27AEF7839B3C2061389
	// void OnFailure_DCE138BA4933D27AEF7839B3C2061389(FName WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag); // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.OnSuccess_DCE138BA4933D27AEF7839B3C2061389
	// void OnSuccess_DCE138BA4933D27AEF7839B3C2061389(FName WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag); // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.OnFailure_227BB3A849C78D13A2049DA5D402565D
	// void OnFailure_227BB3A849C78D13A2049DA5D402565D();                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.OnSuccess_227BB3A849C78D13A2049DA5D402565D
	// void OnSuccess_227BB3A849C78D13A2049DA5D402565D();                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.AIHeadShot
	// void AIHeadShot();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.AIHandRShot
	// void AIHandRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.AIHandLShot
	// void AIHandLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.AIFootLShot
	// void AIFootLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.AIFootRShot
	// void AIFootRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_ShieldHit
	// void Send_ShieldHit();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_ShieldHitMeleeOrSword
	// void Send_ShieldHitMeleeOrSword(int32_t Hit);                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_NearDefu
	// void Send_NearDefu(int32_t FireType);                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_PerfectDefu
	// void Send_PerfectDefu(int32_t FireType);                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_AIBoat
	// void Send_AIBoat(class UPrimitiveComponent* HitBox, float Hit);                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_AIDEFUHealths
	// void Send_AIDEFUHealths(float DEFUHealth, float BloddHealth, bool HaveDefu_);                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_BloodHK
	// void Send_BloodHK();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_DefuHK
	// void Send_DefuHK();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_Add_Alerts
	// void Send_Add_Alerts(float DS);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_Dee_Alert
	// void Send_Dee_Alert();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_ForwardSeePlayer
	// void Send_ForwardSeePlayer();                                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_FootAI_Alert
	// void Send_FootAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_BackSeePlayer
	// void Send_BackSeePlayer();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_ShunAI_Alert
	// void Send_ShunAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_PlayerHitCarAI
	// void Send_PlayerHitCarAI();                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_PlayerQYQAI
	// void Send_PlayerQYQAI(int32_t Number);                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_HealthUIVis
	// void Send_HealthUIVis();                                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_GuLouHand_Hit
	// void Send_GuLouHand_Hit(float Hit);                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.MoveToPlayer
	// void MoveToPlayer();                                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.LeftMove
	// void LeftMove();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.RightMove
	// void RightMove();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.FarFire
	// void FarFire();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.NearFire
	// void NearFire();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.RestLDMove
	// void RestLDMove();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.ShunLeft
	// void ShunLeft();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.ShunRight
	// void ShunRight();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.ShunBack
	// void ShunBack();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.ReceiveAnyDamage
	// void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser); // [0x148e900] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.AIHit
	// void AIHit();                                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_HitSword
	// void Send_HitSword(float Hit, int32_t FiretType);                                                                        // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.-Health
	// void _Health();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_MeleePower
	// void Send_MeleePower(float Hit);                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_UpLightSword
	// void Send_UpLightSword(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.FallGround
	// void FallGround();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.UpDataAirZ
	// void UpDataAirZ();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_HuaChan
	// void Send_HuaChan();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.ForceLookPlayer
	// void ForceLookPlayer();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_KanJi
	// void Send_KanJi(float Hit);                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_ZhaDi
	// void Send_ZhaDi();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_AIQYQ
	// void Send_AIQYQ();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.BndEvt__Attack_HitTouch_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Attack_HitTouch_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Open_Hit01_Event
	// void Open_Hit01_Event();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Close_Hit01_Event
	// void Close_Hit01_Event();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.AttackTrace
	// void AttackTrace();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.PerfectDefu_HitAnim
	// void PerfectDefu_HitAnim();                                                                                              // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.SpawnFarAttackBP
	// void SpawnFarAttackBP();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.SpawnZhaDi
	// void SpawnZhaDi();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_AIFlyQYQ
	// void Send_AIFlyQYQ();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.IsAirUp
	// void IsAirUp();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.ShunForward
	// void ShunForward();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.DefuPerfectPlayer
	// void DefuPerfectPlayer();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.SPFire
	// void SPFire();                                                                                                           // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.DefuAmmo
	// void DefuAmmo();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.UpDataDEFUHealth
	// void UpDataDEFUHealth();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.RestDEFUONAnim
	// void RestDEFUONAnim();                                                                                                   // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_DisPlayAIHealthUI
	// void Send_DisPlayAIHealthUI(bool Vis_);                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.ForceDEFUAnim
	// void ForceDEFUAnim();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.SpawnFarAttackBP2
	// void SpawnFarAttackBP2();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.SpawnFarAttackBP3
	// void SpawnFarAttackBP3();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_ForceAIHit
	// void Send_ForceAIHit();                                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Open_Hit02_Event
	// void Open_Hit02_Event();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Close_Hit02_Event
	// void Close_Hit02_Event();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.BndEvt__Attack_HitTouch_02_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Attack_HitTouch_02_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.ForceAirOff
	// void ForceAirOff();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.TelePortHouse
	// void TelePortHouse();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_EMP
	// void Send_EMP(float Hit);                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.ForceAir
	// void ForceAir();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.BndEvt__ChuJueArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__ChuJueArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.BndEvt__ChuJueArea_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__ChuJueArea_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.KillSiMiao
	// void KillSiMiao();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.PartTimeNoAir
	// void PartTimeNoAir();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_SprintAttack
	// void Send_SprintAttack(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.RestAirTraceZ
	// void RestAirTraceZ();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.StopAirMove
	// void StopAirMove();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Teleport
	// void Teleport();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_GERFire
	// void Send_GERFire();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.TelePortStopMove
	// void TelePortStopMove();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Send_XuLiMelee
	// void Send_XuLiMelee(float Hit);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Play_HitGroundSound
	// void Play_HitGroundSound();                                                                                              // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Play_XuLiSound
	// void Play_XuLiSound();                                                                                                   // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Play_FireSound
	// void Play_FireSound();                                                                                                   // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Play_ChaoFeng
	// void Play_ChaoFeng();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Play_ChaoFengSound
	// void Play_ChaoFengSound();                                                                                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.Play_ShunSound
	// void Play_ShunSound();                                                                                                   // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.ExecuteUbergraph_NPC_SiMiao_AI
	// void ExecuteUbergraph_NPC_SiMiao_AI(int32_t EntryPoint);                                                                 // [0x148e900] Final|HasDefaults    
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.OneKill__DelegateSignature
	// void OneKill__DelegateSignature();                                                                                       // [0x148e900] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.PlaySecordSequence__DelegateSignature
	// void PlaySecordSequence__DelegateSignature();                                                                            // [0x148e900] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/SiMiaoBoss/BP/NPC_SiMiao_AI.NPC_SiMiao_AI_C.AITelePortAttack__DelegateSignature
	// void AITelePortAttack__DelegateSignature();                                                                              // [0x148e900] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C
/// Size: 0x064C (1612 bytes) (0x0004B8 - 0x00064C) align 16 MaxSize: 0x064C
class ANPC_BowWarrior_AI_C : public ACharacter
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x04B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04C0   (0x0008)  
	class UStaticMeshComponent*                        Arrows;                                                     // 0x04C8   (0x0008)  
	class UStaticMeshComponent*                        Bow;                                                        // 0x04D0   (0x0008)  
	class UParticleSystemComponent*                    PS_FireSmall;                                               // 0x04D8   (0x0008)  
	class UParticleSystemComponent*                    AirEdm;                                                     // 0x04E0   (0x0008)  
	class UWidgetComponent*                            HealthAI;                                                   // 0x04E8   (0x0008)  
	class UArrowComponent*                             AirZCombo;                                                  // 0x04F0   (0x0008)  
	class UParticleSystemComponent*                    DeadPar;                                                    // 0x04F8   (0x0008)  
	class UArrowComponent*                             AutoAimPlayer;                                              // 0x0500   (0x0008)  
	class UArrowComponent*                             AttackTraceLoc;                                             // 0x0508   (0x0008)  
	class UBoxComponent*                               Attack_HitTouch_01;                                         // 0x0510   (0x0008)  
	class UBoxComponent*                               Head_Shot;                                                  // 0x0518   (0x0008)  
	class USphereComponent*                            QYQTouch;                                                   // 0x0520   (0x0008)  
	class UParticleSystemComponent*                    QYQPar;                                                     // 0x0528   (0x0008)  
	class UBoxComponent*                               FootR_Shot;                                                 // 0x0530   (0x0008)  
	class UBoxComponent*                               FootL_Shot;                                                 // 0x0538   (0x0008)  
	class UBoxComponent*                               HandL_Shot;                                                 // 0x0540   (0x0008)  
	class UBoxComponent*                               HandR_Shot;                                                 // 0x0548   (0x0008)  
	class UPointLightComponent*                        HitLight;                                                   // 0x0550   (0x0008)  
	class UPhysicalAnimationComponent*                 PhysicalAnimations;                                         // 0x0558   (0x0008)  
	class UParticleSystemComponent*                    XChange_Edms;                                               // 0x0560   (0x0008)  
	class UArrowComponent*                             LightSwordAirZ;                                             // 0x0568   (0x0008)  
	class UParticleSystemComponent*                    BloodHead;                                                  // 0x0570   (0x0008)  
	class UParticleSystemComponent*                    BloodBody;                                                  // 0x0578   (0x0008)  
	float                                              Timeline_0_Weight_451EE9064D9111D6761F8FB028D42381;         // 0x0580   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_451EE9064D9111D6761F8FB028D42381;     // 0x0584   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0585   (0x0003)  MISSED
	class UTimelineComponent*                          Timeline;                                                   // 0x0588   (0x0008)  
	float                                              DisTime_Chorme_9D745F3B4DE1D92A3E7F3BA984FB01CF;            // 0x0590   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    DisTime__Direction_9D745F3B4DE1D92A3E7F3BA984FB01CF;        // 0x0594   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0595   (0x0003)  MISSED
	class UTimelineComponent*                          DisTime;                                                    // 0x0598   (0x0008)  
	float                                              PlayerDistance;                                             // 0x05A0   (0x0004)  
	bool                                               IsDead_;                                                    // 0x05A4   (0x0001)  
	bool                                               IsFirstLookPlayer;                                          // 0x05A5   (0x0001)  
	bool                                               IsSpawn_;                                                   // 0x05A6   (0x0001)  
	bool                                               IsFireTime;                                                 // 0x05A7   (0x0001)  
	bool                                               IsTouchPlayer;                                              // 0x05A8   (0x0001)  
	bool                                               IsHitTime_;                                                 // 0x05A9   (0x0001)  
	bool                                               IsAirTime_;                                                 // 0x05AA   (0x0001)  
	bool                                               IsShun_;                                                    // 0x05AB   (0x0001)  
	float                                              AINowHealth;                                                // 0x05AC   (0x0004)  
	int32_t                                            ShieldHealth;                                               // 0x05B0   (0x0004)  
	float                                              AIMAXHealth;                                                // 0x05B4   (0x0004)  
	FName                                              AirTouchBone;                                               // 0x05B8   (0x0008)  
	class UPhysicalAnimationComponent*                 PhysicalAnimation;                                          // 0x05C0   (0x0008)  
	bool                                               IsAirAnimFinish_;                                           // 0x05C8   (0x0001)  
	bool                                               CanBoken;                                                   // 0x05C9   (0x0001)  
	bool                                               IsKanJiorEMP;                                               // 0x05CA   (0x0001)  
	unsigned char                                      UnknownData03_6[0x5];                                       // 0x05CB   (0x0005)  MISSED
	class USkeletalMeshComponent*                      RightHand;                                                  // 0x05D0   (0x0008)  
	class USkeletalMeshComponent*                      LeftHand;                                                   // 0x05D8   (0x0008)  
	class USkeletalMeshComponent*                      LeftFoot;                                                   // 0x05E0   (0x0008)  
	class USkeletalMeshComponent*                      RightFoot;                                                  // 0x05E8   (0x0008)  
	class USkeletalMeshComponent*                      head;                                                       // 0x05F0   (0x0008)  
	float                                              Attack_HitT_01;                                             // 0x05F8   (0x0004)  
	bool                                               IsPlayerAirUseQYQ_;                                         // 0x05FC   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x05FD   (0x0003)  MISSED
	float                                              SpawnTime;                                                  // 0x0600   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x0604   (0x0004)  MISSED
	SDK_UNDEFINED(16,977) /* FMulticastInlineDelegate */ __um(AIDEAD);                                             // 0x0608   (0x0010)  
	bool                                               IsSequencePlay_;                                            // 0x0618   (0x0001)  
	bool                                               BaTi_;                                                      // 0x0619   (0x0001)  
	unsigned char                                      UnknownData06_6[0x2];                                       // 0x061A   (0x0002)  MISSED
	float                                              NOWDEFUHealth;                                              // 0x061C   (0x0004)  
	float                                              MAXDEFUHealth;                                              // 0x0620   (0x0004)  
	float                                              DEFU_UIProgress;                                            // 0x0624   (0x0004)  
	bool                                               DFHave_;                                                    // 0x0628   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x0629   (0x0003)  MISSED
	float                                              PerfectDefu_DEFUHealth;                                     // 0x062C   (0x0004)  
	bool                                               IsAirMelee_;                                                // 0x0630   (0x0001)  
	unsigned char                                      UnknownData08_6[0x3];                                       // 0x0631   (0x0003)  MISSED
	int32_t                                            AirType;                                                    // 0x0634   (0x0004)  
	bool                                               IsCG_;                                                      // 0x0638   (0x0001)  
	bool                                               IsMeleePower_;                                              // 0x0639   (0x0001)  
	bool                                               IsSprintAttack_;                                            // 0x063A   (0x0001)  
	bool                                               IsFireDead_;                                                // 0x063B   (0x0001)  
	bool                                               Is_Hit_Time_;                                               // 0x063C   (0x0001)  
	unsigned char                                      UnknownData09_6[0x3];                                       // 0x063D   (0x0003)  MISSED
	float                                              FireInv;                                                    // 0x0640   (0x0004)  
	bool                                               IsBow_;                                                     // 0x0644   (0x0001)  
	bool                                               StandFire_;                                                 // 0x0645   (0x0001)  
	unsigned char                                      UnknownData10_6[0x2];                                       // 0x0646   (0x0002)  MISSED
	float                                              FirePianYi;                                                 // 0x0648   (0x0004)  


	/// Functions
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.HealthUI_Vis?
	// void HealthUI_Vis_();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.TraceWall
	// void TraceWall();                                                                                                        // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.HealthUIRotToPlayer
	// void HealthUIRotToPlayer();                                                                                              // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.AutoAnimPlayerEvent
	// void AutoAnimPlayerEvent();                                                                                              // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.HitEdm
	// void HitEdm();                                                                                                           // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.HitBlood
	// void HitBlood();                                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.LookAtPlayer
	// void LookAtPlayer();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.DisTime__FinishedFunc
	// void DisTime__FinishedFunc();                                                                                            // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.DisTime__UpdateFunc
	// void DisTime__UpdateFunc();                                                                                              // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Timeline_0__FinishedFunc
	// void Timeline_0__FinishedFunc();                                                                                         // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Timeline_0__UpdateFunc
	// void Timeline_0__UpdateFunc();                                                                                           // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.OnFail_D78EE16C45AFDB7A95B7D59BB8730B0D
	// void OnFail_D78EE16C45AFDB7A95B7D59BB8730B0D(TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.OnSuccess_D78EE16C45AFDB7A95B7D59BB8730B0D
	// void OnSuccess_D78EE16C45AFDB7A95B7D59BB8730B0D(TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Completed_E8E3DDD94ED7AA25B721E195EF9B9A1A
	// void Completed_E8E3DDD94ED7AA25B721E195EF9B9A1A(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_ShieldHit
	// void Send_ShieldHit();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_ShieldHitMeleeOrSword
	// void Send_ShieldHitMeleeOrSword(int32_t Hit);                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_NearDefu
	// void Send_NearDefu(int32_t FireType);                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_PerfectDefu
	// void Send_PerfectDefu(int32_t FireType);                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_AIBoat
	// void Send_AIBoat(class UPrimitiveComponent* HitBox, float Hit);                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_AIDEFUHealths
	// void Send_AIDEFUHealths(float DEFUHealth, float BloddHealth, bool HaveDefu_);                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_ForceAIHit
	// void Send_ForceAIHit();                                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_BloodHK
	// void Send_BloodHK();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_DefuHK
	// void Send_DefuHK();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_Add_Alerts
	// void Send_Add_Alerts(float DS);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_Dee_Alert
	// void Send_Dee_Alert();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_ForwardSeePlayer
	// void Send_ForwardSeePlayer();                                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_FootAI_Alert
	// void Send_FootAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_BackSeePlayer
	// void Send_BackSeePlayer();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_ShunAI_Alert
	// void Send_ShunAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_PlayerHitCarAI
	// void Send_PlayerHitCarAI();                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_PlayerQYQAI
	// void Send_PlayerQYQAI(int32_t Number);                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_GuLouHand_Hit
	// void Send_GuLouHand_Hit(float Hit);                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.MoveToPlayer
	// void MoveToPlayer();                                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.NearFire
	// void NearFire();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.RestLDMove
	// void RestLDMove();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.ShunLeft
	// void ShunLeft();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.ShunRight
	// void ShunRight();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.ShunBack
	// void ShunBack();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.ReceiveAnyDamage
	// void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser); // [0x148e900] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.AIHit
	// void AIHit();                                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_HitSword
	// void Send_HitSword(float Hit, int32_t FiretType);                                                                        // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.-Health
	// void _Health();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_MeleePower
	// void Send_MeleePower(float Hit);                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_UpLightSword
	// void Send_UpLightSword(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.FallGround
	// void FallGround();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.UpDataAirZ
	// void UpDataAirZ();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_HuaChan
	// void Send_HuaChan();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.ForceLookPlayer
	// void ForceLookPlayer();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_KanJi
	// void Send_KanJi(float Hit);                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_ZhaDi
	// void Send_ZhaDi();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.AIHandRShot
	// void AIHandRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.AIHandLShot
	// void AIHandLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.BokenHandR
	// void BokenHandR();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.BokenHandL
	// void BokenHandL();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.BokenFootL
	// void BokenFootL();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.AIFootLShot
	// void AIFootLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.BokenFootR
	// void BokenFootR();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.AIFootRShot
	// void AIFootRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_AIQYQ
	// void Send_AIQYQ();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.RandomBoken
	// void RandomBoken();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Mat_Dis
	// void Mat_Dis();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.BokenHead
	// void BokenHead();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.AIHeadShot
	// void AIHeadShot();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.BndEvt__Attack_HitTouch_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Attack_HitTouch_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Open_Hit01_Event
	// void Open_Hit01_Event();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Close_Hit01_Event
	// void Close_Hit01_Event();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.AttackTrace
	// void AttackTrace();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.PerfectDefu_HitAnim
	// void PerfectDefu_HitAnim();                                                                                              // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.SpawnFarAttackBP
	// void SpawnFarAttackBP();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_AIFlyQYQ
	// void Send_AIFlyQYQ();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.DeadWeaponDrop
	// void DeadWeaponDrop();                                                                                                   // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.IsAirUp
	// void IsAirUp();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.DefuPerfectPlayer
	// void DefuPerfectPlayer();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_DisPlayAIHealthUI
	// void Send_DisPlayAIHealthUI(bool Vis_);                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.ForceDEFUAnim
	// void ForceDEFUAnim();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.ForceAirOff
	// void ForceAirOff();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_EMP
	// void Send_EMP(float Hit);                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.ForceAir
	// void ForceAir();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.HideBlood
	// void HideBlood();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_SprintAttack
	// void Send_SprintAttack(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.RestAirTraceZ
	// void RestAirTraceZ();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.PXBodyTraceGround
	// void PXBodyTraceGround();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.StopAirMove
	// void StopAirMove();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.GERFireEvent
	// void GERFireEvent();                                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_GERFire
	// void Send_GERFire();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Fire-Health
	// void Fire_Health();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.ForceDead
	// void ForceDead();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.UpDataDEFUHealth
	// void UpDataDEFUHealth();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.VisArrow
	// void VisArrow(bool Vis_);                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_HealthUIVis
	// void Send_HealthUIVis();                                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.Send_XuLiMelee
	// void Send_XuLiMelee(float Hit);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.ExecuteUbergraph_NPC_BowWarrior_AI
	// void ExecuteUbergraph_NPC_BowWarrior_AI(int32_t EntryPoint);                                                             // [0x148e900] Final|HasDefaults    
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_BowWarrior_AI.NPC_BowWarrior_AI_C.AIDEAD__DelegateSignature
	// void AIDEAD__DelegateSignature();                                                                                        // [0x148e900] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C
/// Size: 0x0665 (1637 bytes) (0x0004B8 - 0x000665) align 16 MaxSize: 0x0665
class ANPC_Warrior01_AI_C : public ACharacter
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x04B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04C0   (0x0008)  
	class UParticleSystemComponent*                    PS_FireSmall;                                               // 0x04C8   (0x0008)  
	class UParticleSystemComponent*                    AirEdm;                                                     // 0x04D0   (0x0008)  
	class UPointLightComponent*                        FireParLight;                                               // 0x04D8   (0x0008)  
	class UWidgetComponent*                            HealthAI;                                                   // 0x04E0   (0x0008)  
	class UArrowComponent*                             AirZCombo;                                                  // 0x04E8   (0x0008)  
	class UParticleSystemComponent*                    DeadPar;                                                    // 0x04F0   (0x0008)  
	class UArrowComponent*                             AutoAimPlayer;                                              // 0x04F8   (0x0008)  
	class UParticleSystemComponent*                    WeaponFire;                                                 // 0x0500   (0x0008)  
	class UArrowComponent*                             AttackTraceLoc;                                             // 0x0508   (0x0008)  
	class UBoxComponent*                               Attack_HitTouch_01;                                         // 0x0510   (0x0008)  
	class UBoxComponent*                               Head_Shot;                                                  // 0x0518   (0x0008)  
	class USphereComponent*                            QYQTouch;                                                   // 0x0520   (0x0008)  
	class UParticleSystemComponent*                    QYQPar;                                                     // 0x0528   (0x0008)  
	class UBoxComponent*                               FootR_Shot;                                                 // 0x0530   (0x0008)  
	class UBoxComponent*                               FootL_Shot;                                                 // 0x0538   (0x0008)  
	class UBoxComponent*                               HandL_Shot;                                                 // 0x0540   (0x0008)  
	class UBoxComponent*                               HandR_Shot;                                                 // 0x0548   (0x0008)  
	class UPointLightComponent*                        HitLight;                                                   // 0x0550   (0x0008)  
	class UPhysicalAnimationComponent*                 PhysicalAnimations;                                         // 0x0558   (0x0008)  
	class UParticleSystemComponent*                    XChange_Edms;                                               // 0x0560   (0x0008)  
	class UArrowComponent*                             LightSwordAirZ;                                             // 0x0568   (0x0008)  
	class UParticleSystemComponent*                    BloodHead;                                                  // 0x0570   (0x0008)  
	class UParticleSystemComponent*                    BloodBody;                                                  // 0x0578   (0x0008)  
	class UStaticMeshComponent*                        NPC_WarriorWeapon;                                          // 0x0580   (0x0008)  
	class UStaticMeshComponent*                        NPC_WarriorShield;                                          // 0x0588   (0x0008)  
	float                                              Light_Light_BBF6BA28416C0EB317C4778F99B9E899;               // 0x0590   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Light__Direction_BBF6BA28416C0EB317C4778F99B9E899;          // 0x0594   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0595   (0x0003)  MISSED
	class UTimelineComponent*                          Light;                                                      // 0x0598   (0x0008)  
	float                                              Timeline_0_Weight_EA42FA3C409300D43603B99181E80B70;         // 0x05A0   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_EA42FA3C409300D43603B99181E80B70;     // 0x05A4   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x05A5   (0x0003)  MISSED
	class UTimelineComponent*                          Timeline;                                                   // 0x05A8   (0x0008)  
	float                                              DisTime_Chorme_C2931F1E4D723C3D72C263831B3A9D15;            // 0x05B0   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    DisTime__Direction_C2931F1E4D723C3D72C263831B3A9D15;        // 0x05B4   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x05B5   (0x0003)  MISSED
	class UTimelineComponent*                          DisTime;                                                    // 0x05B8   (0x0008)  
	float                                              PlayerDistance;                                             // 0x05C0   (0x0004)  
	bool                                               IsDead_;                                                    // 0x05C4   (0x0001)  
	bool                                               IsFirstLookPlayer;                                          // 0x05C5   (0x0001)  
	bool                                               IsSpawn_;                                                   // 0x05C6   (0x0001)  
	bool                                               IsFireTime;                                                 // 0x05C7   (0x0001)  
	bool                                               IsTouchPlayer;                                              // 0x05C8   (0x0001)  
	bool                                               IsHitTime_;                                                 // 0x05C9   (0x0001)  
	bool                                               HitShield;                                                  // 0x05CA   (0x0001)  
	bool                                               IsAirTime_;                                                 // 0x05CB   (0x0001)  
	bool                                               IsShun_;                                                    // 0x05CC   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x05CD   (0x0003)  MISSED
	float                                              AINowHealth;                                                // 0x05D0   (0x0004)  
	int32_t                                            ShieldHealth;                                               // 0x05D4   (0x0004)  
	float                                              AIMAXHealth;                                                // 0x05D8   (0x0004)  
	FName                                              AirTouchBone;                                               // 0x05DC   (0x0008)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x05E4   (0x0004)  MISSED
	class UPhysicalAnimationComponent*                 PhysicalAnimation;                                          // 0x05E8   (0x0008)  
	bool                                               IsAirAnimFinish_;                                           // 0x05F0   (0x0001)  
	bool                                               CanBoken;                                                   // 0x05F1   (0x0001)  
	bool                                               IsKanJiorEMP;                                               // 0x05F2   (0x0001)  
	unsigned char                                      UnknownData06_6[0x5];                                       // 0x05F3   (0x0005)  MISSED
	class USkeletalMeshComponent*                      RightHand;                                                  // 0x05F8   (0x0008)  
	class USkeletalMeshComponent*                      LeftHand;                                                   // 0x0600   (0x0008)  
	class USkeletalMeshComponent*                      LeftFoot;                                                   // 0x0608   (0x0008)  
	class USkeletalMeshComponent*                      RightFoot;                                                  // 0x0610   (0x0008)  
	class USkeletalMeshComponent*                      head;                                                       // 0x0618   (0x0008)  
	float                                              Attack_HitT_01;                                             // 0x0620   (0x0004)  
	bool                                               IsPlayerAirUseQYQ_;                                         // 0x0624   (0x0001)  
	bool                                               IsHaveShield_;                                              // 0x0625   (0x0001)  
	unsigned char                                      UnknownData07_6[0x2];                                       // 0x0626   (0x0002)  MISSED
	float                                              SpawnTime;                                                  // 0x0628   (0x0004)  
	unsigned char                                      UnknownData08_6[0x4];                                       // 0x062C   (0x0004)  MISSED
	SDK_UNDEFINED(16,978) /* FMulticastInlineDelegate */ __um(AIDEAD);                                             // 0x0630   (0x0010)  
	bool                                               IsSequencePlay_;                                            // 0x0640   (0x0001)  
	bool                                               BaTi_;                                                      // 0x0641   (0x0001)  
	unsigned char                                      UnknownData09_6[0x2];                                       // 0x0642   (0x0002)  MISSED
	float                                              NOWDEFUHealth;                                              // 0x0644   (0x0004)  
	float                                              MAXDEFUHealth;                                              // 0x0648   (0x0004)  
	float                                              DEFU_UIProgress;                                            // 0x064C   (0x0004)  
	bool                                               DFHave_;                                                    // 0x0650   (0x0001)  
	unsigned char                                      UnknownData10_6[0x3];                                       // 0x0651   (0x0003)  MISSED
	float                                              PerfectDefu_DEFUHealth;                                     // 0x0654   (0x0004)  
	bool                                               IsAirMelee_;                                                // 0x0658   (0x0001)  
	unsigned char                                      UnknownData11_6[0x3];                                       // 0x0659   (0x0003)  MISSED
	int32_t                                            AirType;                                                    // 0x065C   (0x0004)  
	bool                                               IsCG_;                                                      // 0x0660   (0x0001)  
	bool                                               IsMeleePower_;                                              // 0x0661   (0x0001)  
	bool                                               IsSprintAttack_;                                            // 0x0662   (0x0001)  
	bool                                               IsFireDead_;                                                // 0x0663   (0x0001)  
	bool                                               IsTraceGround;                                              // 0x0664   (0x0001)  


	/// Functions
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.HealthUI_Vis?
	// void HealthUI_Vis_();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.TraceWall
	// void TraceWall();                                                                                                        // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.HealthUIRotToPlayer
	// void HealthUIRotToPlayer();                                                                                              // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.AutoAnimPlayerEvent
	// void AutoAnimPlayerEvent();                                                                                              // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.HitEdm
	// void HitEdm();                                                                                                           // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.HitBlood
	// void HitBlood();                                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.LookAtPlayer
	// void LookAtPlayer();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.DisTime__FinishedFunc
	// void DisTime__FinishedFunc();                                                                                            // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.DisTime__UpdateFunc
	// void DisTime__UpdateFunc();                                                                                              // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Timeline_0__FinishedFunc
	// void Timeline_0__FinishedFunc();                                                                                         // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Timeline_0__UpdateFunc
	// void Timeline_0__UpdateFunc();                                                                                           // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Light__FinishedFunc
	// void Light__FinishedFunc();                                                                                              // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Light__UpdateFunc
	// void Light__UpdateFunc();                                                                                                // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.OnFail_2B219ACD4C7F37ACF3986CA3B24F06B2
	// void OnFail_2B219ACD4C7F37ACF3986CA3B24F06B2(TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.OnSuccess_2B219ACD4C7F37ACF3986CA3B24F06B2
	// void OnSuccess_2B219ACD4C7F37ACF3986CA3B24F06B2(TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Completed_E1E4D47949C8F396C624AC885F5DCB8A
	// void Completed_E1E4D47949C8F396C624AC885F5DCB8A(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_NearDefu
	// void Send_NearDefu(int32_t FireType);                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_PerfectDefu
	// void Send_PerfectDefu(int32_t FireType);                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_AIBoat
	// void Send_AIBoat(class UPrimitiveComponent* HitBox, float Hit);                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_AIDEFUHealths
	// void Send_AIDEFUHealths(float DEFUHealth, float BloddHealth, bool HaveDefu_);                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_ForceAIHit
	// void Send_ForceAIHit();                                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_BloodHK
	// void Send_BloodHK();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_DefuHK
	// void Send_DefuHK();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_Add_Alerts
	// void Send_Add_Alerts(float DS);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_Dee_Alert
	// void Send_Dee_Alert();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_ForwardSeePlayer
	// void Send_ForwardSeePlayer();                                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_FootAI_Alert
	// void Send_FootAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_BackSeePlayer
	// void Send_BackSeePlayer();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_ShunAI_Alert
	// void Send_ShunAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_PlayerHitCarAI
	// void Send_PlayerHitCarAI();                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_PlayerQYQAI
	// void Send_PlayerQYQAI(int32_t Number);                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_GuLouHand_Hit
	// void Send_GuLouHand_Hit(float Hit);                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.MoveToPlayer
	// void MoveToPlayer();                                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.LeftMove
	// void LeftMove();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.RightMove
	// void RightMove();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.FarFire
	// void FarFire();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.NearFire
	// void NearFire();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.RestLDMove
	// void RestLDMove();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.ShunLeft
	// void ShunLeft();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.ShunRight
	// void ShunRight();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.ShunBack
	// void ShunBack();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.ReceiveAnyDamage
	// void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser); // [0x148e900] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.AIHit
	// void AIHit();                                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_ShieldHit
	// void Send_ShieldHit();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_HitSword
	// void Send_HitSword(float Hit, int32_t FiretType);                                                                        // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.-Health
	// void _Health();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_MeleePower
	// void Send_MeleePower(float Hit);                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_UpLightSword
	// void Send_UpLightSword(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.FallGround
	// void FallGround();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.UpDataAirZ
	// void UpDataAirZ();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_HuaChan
	// void Send_HuaChan();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.ForceLookPlayer
	// void ForceLookPlayer();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_KanJi
	// void Send_KanJi(float Hit);                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_ZhaDi
	// void Send_ZhaDi();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.AIHandRShot
	// void AIHandRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.AIHandLShot
	// void AIHandLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.BokenHandR
	// void BokenHandR();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.BokenHandL
	// void BokenHandL();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.BokenFootL
	// void BokenFootL();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.AIFootLShot
	// void AIFootLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.BokenFootR
	// void BokenFootR();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.AIFootRShot
	// void AIFootRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_ShieldHitMeleeOrSword
	// void Send_ShieldHitMeleeOrSword(int32_t Hit);                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_AIQYQ
	// void Send_AIQYQ();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.RandomBoken
	// void RandomBoken();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Mat_Dis
	// void Mat_Dis();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.BokenHead
	// void BokenHead();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.AIHeadShot
	// void AIHeadShot();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.BndEvt__Attack_HitTouch_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Attack_HitTouch_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Open_Hit01_Event
	// void Open_Hit01_Event();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Close_Hit01_Event
	// void Close_Hit01_Event();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.AttackTrace
	// void AttackTrace();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.PerfectDefu_HitAnim
	// void PerfectDefu_HitAnim();                                                                                              // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.SpawnFarAttackBP
	// void SpawnFarAttackBP();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.SpawnZhaDi
	// void SpawnZhaDi();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_AIFlyQYQ
	// void Send_AIFlyQYQ();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.DeadWeaponDrop
	// void DeadWeaponDrop();                                                                                                   // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.IsAirUp
	// void IsAirUp();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.DefuPerfectPlayer
	// void DefuPerfectPlayer();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.UpDataDEFUHealth
	// void UpDataDEFUHealth();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_DisPlayAIHealthUI
	// void Send_DisPlayAIHealthUI(bool Vis_);                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.ForceDEFUAnim
	// void ForceDEFUAnim();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.ForceAirOff
	// void ForceAirOff();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_EMP
	// void Send_EMP(float Hit);                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.ForceAir
	// void ForceAir();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.HideBlood
	// void HideBlood();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_SprintAttack
	// void Send_SprintAttack(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.RestAirTraceZ
	// void RestAirTraceZ();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.PXBodyTraceGround
	// void PXBodyTraceGround();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.StopAirMove
	// void StopAirMove();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.GERFireEvent
	// void GERFireEvent();                                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_GERFire
	// void Send_GERFire();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Fire-Health
	// void Fire_Health();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.ForceDead
	// void ForceDead();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_HealthUIVis
	// void Send_HealthUIVis();                                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.Send_XuLiMelee
	// void Send_XuLiMelee(float Hit);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.ExecuteUbergraph_NPC_Warrior01_AI
	// void ExecuteUbergraph_NPC_Warrior01_AI(int32_t EntryPoint);                                                              // [0x148e900] Final|HasDefaults    
	// Function /Game/NPC_AIBMI/Warrior01/BP/NPC_Warrior01_AI.NPC_Warrior01_AI_C.AIDEAD__DelegateSignature
	// void AIDEAD__DelegateSignature();                                                                                        // [0x148e900] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C
/// Size: 0x0617 (1559 bytes) (0x0004B8 - 0x000617) align 16 MaxSize: 0x0617
class ANPC_Warrior02_AI_C : public ACharacter
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x04B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04C0   (0x0008)  
	class UParticleSystemComponent*                    PS_FireSmall;                                               // 0x04C8   (0x0008)  
	class UParticleSystemComponent*                    AirEdm;                                                     // 0x04D0   (0x0008)  
	class UWidgetComponent*                            HealthAI;                                                   // 0x04D8   (0x0008)  
	class UArrowComponent*                             AirZCombo;                                                  // 0x04E0   (0x0008)  
	class UStaticMeshComponent*                        Weapon;                                                     // 0x04E8   (0x0008)  
	class UParticleSystemComponent*                    DeadPar;                                                    // 0x04F0   (0x0008)  
	class UArrowComponent*                             AutoAimPlayer;                                              // 0x04F8   (0x0008)  
	class UArrowComponent*                             AttackTraceLoc;                                             // 0x0500   (0x0008)  
	class UBoxComponent*                               Attack_HitTouch_01;                                         // 0x0508   (0x0008)  
	class UBoxComponent*                               Head_Shot;                                                  // 0x0510   (0x0008)  
	class USphereComponent*                            QYQTouch;                                                   // 0x0518   (0x0008)  
	class UParticleSystemComponent*                    QYQPar;                                                     // 0x0520   (0x0008)  
	class UBoxComponent*                               FootR_Shot;                                                 // 0x0528   (0x0008)  
	class UBoxComponent*                               FootL_Shot;                                                 // 0x0530   (0x0008)  
	class UBoxComponent*                               HandL_Shot;                                                 // 0x0538   (0x0008)  
	class UBoxComponent*                               HandR_Shot;                                                 // 0x0540   (0x0008)  
	class UPointLightComponent*                        HitLight;                                                   // 0x0548   (0x0008)  
	class UPhysicalAnimationComponent*                 PhysicalAnimations;                                         // 0x0550   (0x0008)  
	class UParticleSystemComponent*                    XChange_Edms;                                               // 0x0558   (0x0008)  
	class UArrowComponent*                             LightSwordAirZ;                                             // 0x0560   (0x0008)  
	class UParticleSystemComponent*                    BloodHead;                                                  // 0x0568   (0x0008)  
	class UParticleSystemComponent*                    BloodBody;                                                  // 0x0570   (0x0008)  
	float                                              Timeline_0_Weight_48736B234D192362A4C2B9A77F62E6FA;         // 0x0578   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_48736B234D192362A4C2B9A77F62E6FA;     // 0x057C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x057D   (0x0003)  MISSED
	class UTimelineComponent*                          Timeline;                                                   // 0x0580   (0x0008)  
	float                                              DisTime_Chorme_96FF41B34003F7EC4DE5EE9C70C93178;            // 0x0588   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    DisTime__Direction_96FF41B34003F7EC4DE5EE9C70C93178;        // 0x058C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x058D   (0x0003)  MISSED
	class UTimelineComponent*                          DisTime;                                                    // 0x0590   (0x0008)  
	float                                              PlayerDistance;                                             // 0x0598   (0x0004)  
	bool                                               IsDead_;                                                    // 0x059C   (0x0001)  
	bool                                               IsFirstLookPlayer;                                          // 0x059D   (0x0001)  
	bool                                               IsSpawn_;                                                   // 0x059E   (0x0001)  
	bool                                               IsFireTime;                                                 // 0x059F   (0x0001)  
	bool                                               IsTouchPlayer;                                              // 0x05A0   (0x0001)  
	bool                                               IsHitTime_;                                                 // 0x05A1   (0x0001)  
	bool                                               HitShield;                                                  // 0x05A2   (0x0001)  
	bool                                               IsAirTime_;                                                 // 0x05A3   (0x0001)  
	bool                                               IsShun_;                                                    // 0x05A4   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x05A5   (0x0003)  MISSED
	float                                              AIHealth;                                                   // 0x05A8   (0x0004)  
	float                                              AIMAXHealth;                                                // 0x05AC   (0x0004)  
	FName                                              AirTouchBone;                                               // 0x05B0   (0x0008)  
	class UPhysicalAnimationComponent*                 PhysicalAnimation;                                          // 0x05B8   (0x0008)  
	bool                                               IsAirAnimFinish_;                                           // 0x05C0   (0x0001)  
	bool                                               CanBoken;                                                   // 0x05C1   (0x0001)  
	bool                                               IsKanJiorEMP;                                               // 0x05C2   (0x0001)  
	unsigned char                                      UnknownData04_6[0x5];                                       // 0x05C3   (0x0005)  MISSED
	class USkeletalMeshComponent*                      RightHand;                                                  // 0x05C8   (0x0008)  
	class USkeletalMeshComponent*                      LeftHand;                                                   // 0x05D0   (0x0008)  
	class USkeletalMeshComponent*                      LeftFoot;                                                   // 0x05D8   (0x0008)  
	class USkeletalMeshComponent*                      RightFoot;                                                  // 0x05E0   (0x0008)  
	class USkeletalMeshComponent*                      head;                                                       // 0x05E8   (0x0008)  
	float                                              Attack_HitT_01;                                             // 0x05F0   (0x0004)  
	bool                                               IsPlayerAirUseQYQ_;                                         // 0x05F4   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x05F5   (0x0003)  MISSED
	float                                              SpawnTime;                                                  // 0x05F8   (0x0004)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x05FC   (0x0004)  MISSED
	SDK_UNDEFINED(16,979) /* FMulticastInlineDelegate */ __um(AIDEAD);                                             // 0x0600   (0x0010)  
	int32_t                                            AirType;                                                    // 0x0610   (0x0004)  
	bool                                               IsSprintAttack_;                                            // 0x0614   (0x0001)  
	bool                                               IsMeleeTime_;                                               // 0x0615   (0x0001)  
	bool                                               IsFireDead_;                                                // 0x0616   (0x0001)  


	/// Functions
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.HealthUI_Vis?
	// void HealthUI_Vis_();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.TraceWall
	// void TraceWall();                                                                                                        // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.HealthUIRotToPlayer
	// void HealthUIRotToPlayer();                                                                                              // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.AirMaterial
	// void AirMaterial();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.AutoAnimPlayerEvent
	// void AutoAnimPlayerEvent();                                                                                              // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.HitEdm
	// void HitEdm();                                                                                                           // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.HitBlood
	// void HitBlood();                                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.LookAtPlayer
	// void LookAtPlayer();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.DisTime__FinishedFunc
	// void DisTime__FinishedFunc();                                                                                            // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.DisTime__UpdateFunc
	// void DisTime__UpdateFunc();                                                                                              // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Timeline_0__FinishedFunc
	// void Timeline_0__FinishedFunc();                                                                                         // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Timeline_0__UpdateFunc
	// void Timeline_0__UpdateFunc();                                                                                           // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.OnFail_4C058B44447CE3910F6715886347E32C
	// void OnFail_4C058B44447CE3910F6715886347E32C(TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.OnSuccess_4C058B44447CE3910F6715886347E32C
	// void OnSuccess_4C058B44447CE3910F6715886347E32C(TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Completed_C2540DF7450B13E7D0D5E2BE7F975B59
	// void Completed_C2540DF7450B13E7D0D5E2BE7F975B59(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_ShieldHit
	// void Send_ShieldHit();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_HuaChan
	// void Send_HuaChan();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_ShieldHitMeleeOrSword
	// void Send_ShieldHitMeleeOrSword(int32_t Hit);                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_NearDefu
	// void Send_NearDefu(int32_t FireType);                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_PerfectDefu
	// void Send_PerfectDefu(int32_t FireType);                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_AIBoat
	// void Send_AIBoat(class UPrimitiveComponent* HitBox, float Hit);                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_AIDEFUHealths
	// void Send_AIDEFUHealths(float DEFUHealth, float BloddHealth, bool HaveDefu_);                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_ForceAIHit
	// void Send_ForceAIHit();                                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_BloodHK
	// void Send_BloodHK();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_DefuHK
	// void Send_DefuHK();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_Add_Alerts
	// void Send_Add_Alerts(float DS);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_Dee_Alert
	// void Send_Dee_Alert();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_ForwardSeePlayer
	// void Send_ForwardSeePlayer();                                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_FootAI_Alert
	// void Send_FootAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_BackSeePlayer
	// void Send_BackSeePlayer();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_ShunAI_Alert
	// void Send_ShunAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_PlayerHitCarAI
	// void Send_PlayerHitCarAI();                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_PlayerQYQAI
	// void Send_PlayerQYQAI(int32_t Number);                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_GuLouHand_Hit
	// void Send_GuLouHand_Hit(float Hit);                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.MoveToPlayer
	// void MoveToPlayer();                                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.NearFire
	// void NearFire();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.RestLDMove
	// void RestLDMove();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.ShunForward
	// void ShunForward();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.ReceiveAnyDamage
	// void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser); // [0x148e900] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.AIHit
	// void AIHit();                                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_HitSword
	// void Send_HitSword(float Hit, int32_t FiretType);                                                                        // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.-Health
	// void _Health();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_MeleePower
	// void Send_MeleePower(float Hit);                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_UpLightSword
	// void Send_UpLightSword(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.FallGround
	// void FallGround();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.UpDataAirZ
	// void UpDataAirZ();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.ForceLookPlayer
	// void ForceLookPlayer();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_KanJi
	// void Send_KanJi(float Hit);                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_ZhaDi
	// void Send_ZhaDi();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.AIHandRShot
	// void AIHandRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.AIHandLShot
	// void AIHandLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.BokenHandR
	// void BokenHandR();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.BokenHandL
	// void BokenHandL();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.BokenFootL
	// void BokenFootL();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.AIFootLShot
	// void AIFootLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.BokenFootR
	// void BokenFootR();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.AIFootRShot
	// void AIFootRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_AIQYQ
	// void Send_AIQYQ();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.RandomBoken
	// void RandomBoken();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Mat_Dis
	// void Mat_Dis();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.BokenHead
	// void BokenHead();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.AIHeadShot
	// void AIHeadShot();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.BndEvt__Attack_HitTouch_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Attack_HitTouch_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Open_Hit01_Event
	// void Open_Hit01_Event();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Close_Hit01_Event
	// void Close_Hit01_Event();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.AttackTrace
	// void AttackTrace();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.PerfectDefu_HitAnim
	// void PerfectDefu_HitAnim();                                                                                              // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.SpawnZhaDi
	// void SpawnZhaDi();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_AIFlyQYQ
	// void Send_AIFlyQYQ();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.DeadWeaponDrop
	// void DeadWeaponDrop();                                                                                                   // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Warning
	// void Warning();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.IsAirUp
	// void IsAirUp();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.UpDataDEFUHealth
	// void UpDataDEFUHealth();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_DisPlayAIHealthUI
	// void Send_DisPlayAIHealthUI(bool Vis_);                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_EMP
	// void Send_EMP(float Hit);                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.ForceAir
	// void ForceAir();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.RestWarning
	// void RestWarning();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_SprintAttack
	// void Send_SprintAttack(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.RestAirTraceZ
	// void RestAirTraceZ();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.ForceEndAir
	// void ForceEndAir();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.PXBodyTraceGround
	// void PXBodyTraceGround();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.StopAirMove
	// void StopAirMove();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_GERFire
	// void Send_GERFire();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Fire-Health
	// void Fire_Health();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.GERFireEvent
	// void GERFireEvent();                                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.ForceDead
	// void ForceDead();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_HealthUIVis
	// void Send_HealthUIVis();                                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.Send_XuLiMelee
	// void Send_XuLiMelee(float Hit);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.ExecuteUbergraph_NPC_Warrior02_AI
	// void ExecuteUbergraph_NPC_Warrior02_AI(int32_t EntryPoint);                                                              // [0x148e900] Final|HasDefaults    
	// Function /Game/NPC_AIBMI/Warrior02/BP/NPC_Warrior02_AI.NPC_Warrior02_AI_C.AIDEAD__DelegateSignature
	// void AIDEAD__DelegateSignature();                                                                                        // [0x148e900] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C
/// Size: 0x064A (1610 bytes) (0x0004B8 - 0x00064A) align 16 MaxSize: 0x064A
class ANPC_WarriorBig_AI_C : public ACharacter
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x04B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04C0   (0x0008)  
	class UArrowComponent*                             FarAxe;                                                     // 0x04C8   (0x0008)  
	class UParticleSystemComponent*                    PS_FireSmall;                                               // 0x04D0   (0x0008)  
	class UPointLightComponent*                        BodyLight;                                                  // 0x04D8   (0x0008)  
	class UParticleSystemComponent*                    DeadPar;                                                    // 0x04E0   (0x0008)  
	class UStaticMeshComponent*                        NPC_WarriorBig_Weapon_B;                                    // 0x04E8   (0x0008)  
	class UStaticMeshComponent*                        NPC_WarriorBig_Weapon_A;                                    // 0x04F0   (0x0008)  
	class UWidgetComponent*                            HealthAI;                                                   // 0x04F8   (0x0008)  
	class UParticleSystemComponent*                    M_explosionSpark_Air;                                       // 0x0500   (0x0008)  
	class UParticleSystemComponent*                    M_explosionSpark_Normal;                                    // 0x0508   (0x0008)  
	class UBoxComponent*                               FarAttack_HitTouch;                                         // 0x0510   (0x0008)  
	class UPhysicalAnimationComponent*                 PhysicalAnimations;                                         // 0x0518   (0x0008)  
	class UArrowComponent*                             AutoAimPlayer;                                              // 0x0520   (0x0008)  
	class UArrowComponent*                             AttackTraceLoc;                                             // 0x0528   (0x0008)  
	class UBoxComponent*                               Attack_HitTouch_01;                                         // 0x0530   (0x0008)  
	class UBoxComponent*                               Head_Shot;                                                  // 0x0538   (0x0008)  
	class USphereComponent*                            QYQTouch;                                                   // 0x0540   (0x0008)  
	class UParticleSystemComponent*                    QYQPar;                                                     // 0x0548   (0x0008)  
	class UBoxComponent*                               FootR_Shot;                                                 // 0x0550   (0x0008)  
	class UBoxComponent*                               FootL_Shot;                                                 // 0x0558   (0x0008)  
	class UBoxComponent*                               HandL_Shot;                                                 // 0x0560   (0x0008)  
	class UBoxComponent*                               HandR_Shot;                                                 // 0x0568   (0x0008)  
	class UPointLightComponent*                        HitLight;                                                   // 0x0570   (0x0008)  
	class UParticleSystemComponent*                    XChange_Edms;                                               // 0x0578   (0x0008)  
	class UArrowComponent*                             AirZCombo;                                                  // 0x0580   (0x0008)  
	class UArrowComponent*                             LightSwordAirZ;                                             // 0x0588   (0x0008)  
	class UParticleSystemComponent*                    BloodHead;                                                  // 0x0590   (0x0008)  
	class UParticleSystemComponent*                    BloodBody;                                                  // 0x0598   (0x0008)  
	float                                              ____0_Chorme_3BB876B0486CE314C5E8A4BAE4939E58;              // 0x05A0   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    ____0__Direction_3BB876B0486CE314C5E8A4BAE4939E58;          // 0x05A4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x05A5   (0x0003)  MISSED
	class UTimelineComponent*                          _e_;                                                        // 0x05A8   (0x0008)  
	float                                              AIHealth;                                                   // 0x05B0   (0x0004)  
	float                                              AIMAXHealth;                                                // 0x05B4   (0x0004)  
	FName                                              AirTouchBone;                                               // 0x05B8   (0x0008)  
	bool                                               IsDead_;                                                    // 0x05C0   (0x0001)  
	bool                                               IsFirstLookPlayer;                                          // 0x05C1   (0x0001)  
	bool                                               IsSpawn_;                                                   // 0x05C2   (0x0001)  
	bool                                               IsFireTime;                                                 // 0x05C3   (0x0001)  
	bool                                               IsTouchPlayer;                                              // 0x05C4   (0x0001)  
	bool                                               IsHitTime_;                                                 // 0x05C5   (0x0001)  
	bool                                               HitShield;                                                  // 0x05C6   (0x0001)  
	bool                                               IsShun_;                                                    // 0x05C7   (0x0001)  
	class UPhysicalAnimationComponent*                 PhysicalAnimation;                                          // 0x05C8   (0x0008)  
	bool                                               CanBoken;                                                   // 0x05D0   (0x0001)  
	bool                                               IsKanJiorEMP;                                               // 0x05D1   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x05D2   (0x0006)  MISSED
	class USkeletalMeshComponent*                      RightHand;                                                  // 0x05D8   (0x0008)  
	class USkeletalMeshComponent*                      LeftHand;                                                   // 0x05E0   (0x0008)  
	class USkeletalMeshComponent*                      LeftFoot;                                                   // 0x05E8   (0x0008)  
	class USkeletalMeshComponent*                      RightFoot;                                                  // 0x05F0   (0x0008)  
	class USkeletalMeshComponent*                      head;                                                       // 0x05F8   (0x0008)  
	bool                                               IsChuJue_;                                                  // 0x0600   (0x0001)  
	bool                                               IsChueJueArea_;                                             // 0x0601   (0x0001)  
	bool                                               IsFarAttack_;                                               // 0x0602   (0x0001)  
	bool                                               IsPlayerAirUseQYQ_;                                         // 0x0603   (0x0001)  
	bool                                               DFHave_;                                                    // 0x0604   (0x0001)  
	bool                                               BaTi_;                                                      // 0x0605   (0x0001)  
	bool                                               IsAirMelee_;                                                // 0x0606   (0x0001)  
	unsigned char                                      UnknownData03_6[0x1];                                       // 0x0607   (0x0001)  MISSED
	float                                              Attack_Hit_01;                                              // 0x0608   (0x0004)  
	float                                              SpawnTime;                                                  // 0x060C   (0x0004)  
	SDK_UNDEFINED(16,980) /* FMulticastInlineDelegate */ __um(AIDEAD);                                             // 0x0610   (0x0010)  
	float                                              FarAttack_Hit;                                              // 0x0620   (0x0004)  
	float                                              NOWDEFUHealth;                                              // 0x0624   (0x0004)  
	float                                              MAXDEFUHealth;                                              // 0x0628   (0x0004)  
	float                                              DEFU_UIProgress;                                            // 0x062C   (0x0004)  
	float                                              PlayerDistance;                                             // 0x0630   (0x0004)  
	float                                              PerfectDefu_DEFUHealth;                                     // 0x0634   (0x0004)  
	int32_t                                            AirType;                                                    // 0x0638   (0x0004)  
	FVector                                            EMPAirZ;                                                    // 0x063C   (0x000C)  
	bool                                               IsMeleePower_;                                              // 0x0648   (0x0001)  
	bool                                               IsSprintAttack_;                                            // 0x0649   (0x0001)  


	/// Functions
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.HealthUI_Vis?
	// void HealthUI_Vis_();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.HealthUIRotToPlayer
	// void HealthUIRotToPlayer();                                                                                              // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.AutoAnimPlayerEvent
	// void AutoAnimPlayerEvent();                                                                                              // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.HitEdm
	// void HitEdm();                                                                                                           // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.HitBlood
	// void HitBlood();                                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.LookAtPlayer
	// void LookAtPlayer();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.ˆeÙïtè_
	// void _e__t__();                                                                                                          // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.OnFail_CB9D266948FAEA698D363BB0A1D99BA3
	// void OnFail_CB9D266948FAEA698D363BB0A1D99BA3(TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.OnSuccess_CB9D266948FAEA698D363BB0A1D99BA3
	// void OnSuccess_CB9D266948FAEA698D363BB0A1D99BA3(TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Completed_DD12A0704AC5480A85B141B9A75B344E
	// void Completed_DD12A0704AC5480A85B141B9A75B344E(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_ShieldHit
	// void Send_ShieldHit();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_HuaChan
	// void Send_HuaChan();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_ShieldHitMeleeOrSword
	// void Send_ShieldHitMeleeOrSword(int32_t Hit);                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_NearDefu
	// void Send_NearDefu(int32_t FireType);                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_PerfectDefu
	// void Send_PerfectDefu(int32_t FireType);                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_AIBoat
	// void Send_AIBoat(class UPrimitiveComponent* HitBox, float Hit);                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_AIDEFUHealths
	// void Send_AIDEFUHealths(float DEFUHealth, float BloddHealth, bool HaveDefu_);                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_ForceAIHit
	// void Send_ForceAIHit();                                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_BloodHK
	// void Send_BloodHK();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_DefuHK
	// void Send_DefuHK();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_Add_Alerts
	// void Send_Add_Alerts(float DS);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_Dee_Alert
	// void Send_Dee_Alert();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_ForwardSeePlayer
	// void Send_ForwardSeePlayer();                                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_FootAI_Alert
	// void Send_FootAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_BackSeePlayer
	// void Send_BackSeePlayer();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_ShunAI_Alert
	// void Send_ShunAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_PlayerHitCarAI
	// void Send_PlayerHitCarAI();                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_PlayerQYQAI
	// void Send_PlayerQYQAI(int32_t Number);                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_GuLouHand_Hit
	// void Send_GuLouHand_Hit(float Hit);                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.MoveToPlayer
	// void MoveToPlayer();                                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.NearFire
	// void NearFire();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.RestLDMove
	// void RestLDMove();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.ShunR
	// void ShunR();                                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.ReceiveAnyDamage
	// void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser); // [0x148e900] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.AIHit
	// void AIHit();                                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_HitSword
	// void Send_HitSword(float Hit, int32_t FiretType);                                                                        // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.-Health
	// void _Health();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_MeleePower
	// void Send_MeleePower(float Hit);                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_UpLightSword
	// void Send_UpLightSword(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.ForceLookPlayer
	// void ForceLookPlayer();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_KanJi
	// void Send_KanJi(float Hit);                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_ZhaDi
	// void Send_ZhaDi();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.AIHandRShot
	// void AIHandRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.AIHandLShot
	// void AIHandLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.BokenHandR
	// void BokenHandR();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.BokenHandL
	// void BokenHandL();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.BokenFootL
	// void BokenFootL();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.AIFootLShot
	// void AIFootLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.BokenFootR
	// void BokenFootR();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.AIFootRShot
	// void AIFootRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_AIQYQ
	// void Send_AIQYQ();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.RandomBoken
	// void RandomBoken();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.BokenHead
	// void BokenHead();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.AIHeadShot
	// void AIHeadShot();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.BndEvt__Attack_HitTouch_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Attack_HitTouch_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Open_Hit01_Event
	// void Open_Hit01_Event();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Close_Hit01_Event
	// void Close_Hit01_Event();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.AttackTrace
	// void AttackTrace();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.PerfectDefu_HitAnim
	// void PerfectDefu_HitAnim();                                                                                              // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_AIFlyQYQ
	// void Send_AIFlyQYQ();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Warning
	// void Warning();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.ShunL
	// void ShunL();                                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.SpawnZhaDiBig
	// void SpawnZhaDiBig();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.UpDataDEFUHealth
	// void UpDataDEFUHealth();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.DefuPerfectPlayer
	// void DefuPerfectPlayer();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_DisPlayAIHealthUI
	// void Send_DisPlayAIHealthUI(bool Vis_);                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.ForceDEFUAnim
	// void ForceDEFUAnim();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_EMP
	// void Send_EMP(float Hit);                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.ForceAir
	// void ForceAir();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.ForceFire
	// void ForceFire();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.SpawnZhaDiBig2
	// void SpawnZhaDiBig2();                                                                                                   // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Mat_Dis
	// void Mat_Dis();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.ShunF
	// void ShunF();                                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_SprintAttack
	// void Send_SprintAttack(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.PXBodyTraceGround
	// void PXBodyTraceGround();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_GERFire
	// void Send_GERFire();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Fire-Health
	// void Fire_Health();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.GERFireEvent
	// void GERFireEvent();                                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.SpawnFarAxe
	// void SpawnFarAxe();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.FarFire
	// void FarFire();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_HealthUIVis
	// void Send_HealthUIVis();                                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.Send_XuLiMelee
	// void Send_XuLiMelee(float Hit);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.ExecuteUbergraph_NPC_WarriorBig_AI
	// void ExecuteUbergraph_NPC_WarriorBig_AI(int32_t EntryPoint);                                                             // [0x148e900] Final|HasDefaults    
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI.NPC_WarriorBig_AI_C.AIDEAD__DelegateSignature
	// void AIDEAD__DelegateSignature();                                                                                        // [0x148e900] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI_QiZi.NPC_WarriorBig_AI_QiZi_C
/// Size: 0x0670 (1648 bytes) (0x00064A - 0x000670) align 16 MaxSize: 0x0670
class ANPC_WarriorBig_AI_QiZi_C : public ANPC_WarriorBig_AI_C
{ 
public:
	unsigned char                                      UnknownData00_8[0x6];                                       // 0x064A   (0x0006)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0650   (0x0008)  
	class UStaticMeshComponent*                        QiZi3;                                                      // 0x0658   (0x0008)  
	class UStaticMeshComponent*                        QiZi2;                                                      // 0x0660   (0x0008)  
	class UStaticMeshComponent*                        QiZi1;                                                      // 0x0668   (0x0008)  


	/// Functions
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI_QiZi.NPC_WarriorBig_AI_QiZi_C.-Health
	// void _Health();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI_QiZi.NPC_WarriorBig_AI_QiZi_C.SpawnFarAxe
	// void SpawnFarAxe();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/WarriorBig/BP/NPC_WarriorBig_AI_QiZi.NPC_WarriorBig_AI_QiZi_C.ExecuteUbergraph_NPC_WarriorBig_AI_QiZi
	// void ExecuteUbergraph_NPC_WarriorBig_AI_QiZi(int32_t EntryPoint);                                                        // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_FarFire.NPC_RockLion_FarFire_C
/// Size: 0x0245 (581 bytes) (0x000220 - 0x000245) align 8 MaxSize: 0x0245
class ANPC_RockLion_FarFire_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UAudioComponent*                             S_NPC_RockLion_FireLauncher_Cue;                            // 0x0228   (0x0008)  
	class UParticleSystemComponent*                    VFX_fire_jet_lg;                                            // 0x0230   (0x0008)  
	class UBoxComponent*                               Hit;                                                        // 0x0238   (0x0008)  
	float                                              Attack_Hit;                                                 // 0x0240   (0x0004)  
	bool                                               IsTouch_;                                                   // 0x0244   (0x0001)  


	/// Functions
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_FarFire.NPC_RockLion_FarFire_C.FirePlayerBlood
	// void FirePlayerBlood();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_FarFire.NPC_RockLion_FarFire_C.BndEvt__NPC_RockLion_FarFire_Hit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__NPC_RockLion_FarFire_Hit_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_FarFire.NPC_RockLion_FarFire_C.BndEvt__NPC_RockLion_FarFire_Hit_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__NPC_RockLion_FarFire_Hit_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_FarFire.NPC_RockLion_FarFire_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_FarFire.NPC_RockLion_FarFire_C.ExecuteUbergraph_NPC_RockLion_FarFire
	// void ExecuteUbergraph_NPC_RockLion_FarFire(int32_t EntryPoint);                                                          // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_Bokren.NPC_RockLion_Bokren_C
/// Size: 0x0240 (576 bytes) (0x000220 - 0x000240) align 8 MaxSize: 0x0240
class ANPC_RockLion_Bokren_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UParticleSystemComponent*                    VFX_GrenadeEXP_default;                                     // 0x0228   (0x0008)  
	class URadialForceComponent*                       RadialForce;                                                // 0x0230   (0x0008)  
	class UDestructibleComponent*                      Tough_LP_Master_DM;                                         // 0x0238   (0x0008)  


	/// Functions
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_Bokren.NPC_RockLion_Bokren_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPC_AIBMI/RockLion/BP/NPC_RockLion_Bokren.NPC_RockLion_Bokren_C.ExecuteUbergraph_NPC_RockLion_Bokren
	// void ExecuteUbergraph_NPC_RockLion_Bokren(int32_t EntryPoint);                                                           // [0x148e900] Final                
};

/// Class /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C
/// Size: 0x0608 (1544 bytes) (0x0004B8 - 0x000608) align 16 MaxSize: 0x0608
class ANPC_Eagle_AI_C : public ACharacter
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x04B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04C0   (0x0008)  
	class UArrowComponent*                             AutoAimPlayer_Fire_B;                                       // 0x04C8   (0x0008)  
	class UParticleSystemComponent*                    Ghost;                                                      // 0x04D0   (0x0008)  
	class USphereComponent*                            QYQTouch;                                                   // 0x04D8   (0x0008)  
	class UPointLightComponent*                        BodyLight;                                                  // 0x04E0   (0x0008)  
	class UWidgetComponent*                            HealthAI;                                                   // 0x04E8   (0x0008)  
	class UArrowComponent*                             AutoAimPlayer_Fire_A;                                       // 0x04F0   (0x0008)  
	class UBoxComponent*                               Head_Shot;                                                  // 0x04F8   (0x0008)  
	class UParticleSystemComponent*                    QYQPar;                                                     // 0x0500   (0x0008)  
	class UPointLightComponent*                        HitLight;                                                   // 0x0508   (0x0008)  
	class UPhysicalAnimationComponent*                 PhysicalAnimations;                                         // 0x0510   (0x0008)  
	class UParticleSystemComponent*                    XChange_Edms;                                               // 0x0518   (0x0008)  
	class UParticleSystemComponent*                    BloodHead;                                                  // 0x0520   (0x0008)  
	class UParticleSystemComponent*                    BloodBody;                                                  // 0x0528   (0x0008)  
	FVector                                            Scale_Scale_D8438AE14DE31E825A135B8D2E35B2AC;               // 0x0530   (0x000C)  
	TEnumAsByte<ETimelineDirection>                    Scale__Direction_D8438AE14DE31E825A135B8D2E35B2AC;          // 0x053C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x053D   (0x0003)  MISSED
	class UTimelineComponent*                          Scale;                                                      // 0x0540   (0x0008)  
	float                                              ____0_Chorme_1258747743CC19A86A7C3A8A8B4B2B5F;              // 0x0548   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    ____0__Direction_1258747743CC19A86A7C3A8A8B4B2B5F;          // 0x054C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x054D   (0x0003)  MISSED
	class UTimelineComponent*                          _e_;                                                        // 0x0550   (0x0008)  
	float                                              PlayerDistance;                                             // 0x0558   (0x0004)  
	bool                                               IsDead_;                                                    // 0x055C   (0x0001)  
	bool                                               IsFirstLookPlayer;                                          // 0x055D   (0x0001)  
	bool                                               IsSpawn_;                                                   // 0x055E   (0x0001)  
	bool                                               IsFireTime;                                                 // 0x055F   (0x0001)  
	bool                                               IsTouchPlayer;                                              // 0x0560   (0x0001)  
	bool                                               IsHitTime_;                                                 // 0x0561   (0x0001)  
	bool                                               HitShield;                                                  // 0x0562   (0x0001)  
	bool                                               IsShun_;                                                    // 0x0563   (0x0001)  
	float                                              AIHealth;                                                   // 0x0564   (0x0004)  
	float                                              AIMAXHealth;                                                // 0x0568   (0x0004)  
	FName                                              AirTouchBone;                                               // 0x056C   (0x0008)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0574   (0x0004)  MISSED
	class UPhysicalAnimationComponent*                 PhysicalAnimation;                                          // 0x0578   (0x0008)  
	bool                                               IsAirAnimFinish_;                                           // 0x0580   (0x0001)  
	bool                                               CanBoken;                                                   // 0x0581   (0x0001)  
	bool                                               IsKanJiorEMP;                                               // 0x0582   (0x0001)  
	unsigned char                                      UnknownData04_6[0x5];                                       // 0x0583   (0x0005)  MISSED
	class USkeletalMeshComponent*                      RightHand;                                                  // 0x0588   (0x0008)  
	class USkeletalMeshComponent*                      LeftHand;                                                   // 0x0590   (0x0008)  
	class USkeletalMeshComponent*                      LeftFoot;                                                   // 0x0598   (0x0008)  
	class USkeletalMeshComponent*                      RightFoot;                                                  // 0x05A0   (0x0008)  
	class USkeletalMeshComponent*                      head;                                                       // 0x05A8   (0x0008)  
	float                                              Attack_HitT_01;                                             // 0x05B0   (0x0004)  
	bool                                               IsPlayerAirUseQYQ_;                                         // 0x05B4   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x05B5   (0x0003)  MISSED
	float                                              SpawnTime;                                                  // 0x05B8   (0x0004)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x05BC   (0x0004)  MISSED
	SDK_UNDEFINED(16,981) /* FMulticastInlineDelegate */ __um(AIDEAD);                                             // 0x05C0   (0x0010)  
	FVector                                            EMPAirZ;                                                    // 0x05D0   (0x000C)  
	int32_t                                            AirType;                                                    // 0x05DC   (0x0004)  
	bool                                               IsSprintAttack_;                                            // 0x05E0   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x05E1   (0x0003)  MISSED
	FName                                              PathTag;                                                    // 0x05E4   (0x0008)  
	unsigned char                                      UnknownData08_6[0x4];                                       // 0x05EC   (0x0004)  MISSED
	class AEagleAI_Path_C*                             Path;                                                       // 0x05F0   (0x0008)  
	bool                                               StopFly;                                                    // 0x05F8   (0x0001)  
	bool                                               BackHand_;                                                  // 0x05F9   (0x0001)  
	unsigned char                                      UnknownData09_6[0x6];                                       // 0x05FA   (0x0006)  MISSED
	class ANPC_GuLouBoss_AI_C*                         Boss;                                                       // 0x0600   (0x0008)  


	/// Functions
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.HealthUI_Vis?
	// void HealthUI_Vis_();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Get Path
	// void GetPath(TArray<AEagleAI_Path_C*>& Array, float& NewParam);                                                          // [0x148e900] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.ForceLookPlayers
	// void ForceLookPlayers();                                                                                                 // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.HealthUIRotToPlayer
	// void HealthUIRotToPlayer();                                                                                              // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.AirMaterial
	// void AirMaterial();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.AutoAnimPlayerEvent
	// void AutoAnimPlayerEvent();                                                                                              // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.HitEdm
	// void HitEdm();                                                                                                           // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.HitBlood
	// void HitBlood();                                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.LookAtPlayer
	// void LookAtPlayer();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.ˆeÙïtè_
	// void _e__t__();                                                                                                          // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Scale__FinishedFunc
	// void Scale__FinishedFunc();                                                                                              // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Scale__UpdateFunc
	// void Scale__UpdateFunc();                                                                                                // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.OnFail_C9A3223644C007FCDCAC388EAD98472E
	// void OnFail_C9A3223644C007FCDCAC388EAD98472E(TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.OnSuccess_C9A3223644C007FCDCAC388EAD98472E
	// void OnSuccess_C9A3223644C007FCDCAC388EAD98472E(TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.OnFail_BF7242E8437DE35CA5FFBEAF2D6E81FC
	// void OnFail_BF7242E8437DE35CA5FFBEAF2D6E81FC(TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.OnSuccess_BF7242E8437DE35CA5FFBEAF2D6E81FC
	// void OnSuccess_BF7242E8437DE35CA5FFBEAF2D6E81FC(TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Completed_5B01B6D9404ABF68C01F85893E349367
	// void Completed_5B01B6D9404ABF68C01F85893E349367(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.AIHeadShot
	// void AIHeadShot();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.AIHandRShot
	// void AIHandRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.AIHandLShot
	// void AIHandLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.AIFootLShot
	// void AIFootLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.AIFootRShot
	// void AIFootRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_ShieldHit
	// void Send_ShieldHit();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_HuaChan
	// void Send_HuaChan();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_ShieldHitMeleeOrSword
	// void Send_ShieldHitMeleeOrSword(int32_t Hit);                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_NearDefu
	// void Send_NearDefu(int32_t FireType);                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_PerfectDefu
	// void Send_PerfectDefu(int32_t FireType);                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_AIBoat
	// void Send_AIBoat(class UPrimitiveComponent* HitBox, float Hit);                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_AIDEFUHealths
	// void Send_AIDEFUHealths(float DEFUHealth, float BloddHealth, bool HaveDefu_);                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_ForceAIHit
	// void Send_ForceAIHit();                                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_BloodHK
	// void Send_BloodHK();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_DefuHK
	// void Send_DefuHK();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_Add_Alerts
	// void Send_Add_Alerts(float DS);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_Dee_Alert
	// void Send_Dee_Alert();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_ForwardSeePlayer
	// void Send_ForwardSeePlayer();                                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_FootAI_Alert
	// void Send_FootAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_BackSeePlayer
	// void Send_BackSeePlayer();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_ShunAI_Alert
	// void Send_ShunAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_PlayerHitCarAI
	// void Send_PlayerHitCarAI();                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_PlayerQYQAI
	// void Send_PlayerQYQAI(int32_t Number);                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_GERFire
	// void Send_GERFire();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_GuLouHand_Hit
	// void Send_GuLouHand_Hit(float Hit);                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.MoveToPlayer
	// void MoveToPlayer();                                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.NearFire
	// void NearFire();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.AIHit
	// void AIHit();                                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_HitSword
	// void Send_HitSword(float Hit, int32_t FiretType);                                                                        // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.-Health
	// void _Health();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_MeleePower
	// void Send_MeleePower(float Hit);                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_UpLightSword
	// void Send_UpLightSword(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.ForceLookPlayer
	// void ForceLookPlayer();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_KanJi
	// void Send_KanJi(float Hit);                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_ZhaDi
	// void Send_ZhaDi();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_AIQYQ
	// void Send_AIQYQ();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.PerfectDefu_HitAnim
	// void PerfectDefu_HitAnim();                                                                                              // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_AIFlyQYQ
	// void Send_AIFlyQYQ();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.UpDataDEFUHealth
	// void UpDataDEFUHealth();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_DisPlayAIHealthUI
	// void Send_DisPlayAIHealthUI(bool Vis_);                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_EMP
	// void Send_EMP(float Hit);                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.ForceAir
	// void ForceAir();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_SprintAttack
	// void Send_SprintAttack(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.ForceDead
	// void ForceDead();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.ReceiveAnyDamage
	// void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser); // [0x148e900] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.SpawnFarAttackBP
	// void SpawnFarAttackBP();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_HealthUIVis
	// void Send_HealthUIVis();                                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.Send_XuLiMelee
	// void Send_XuLiMelee(float Hit);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.ExecuteUbergraph_NPC_Eagle_AI
	// void ExecuteUbergraph_NPC_Eagle_AI(int32_t EntryPoint);                                                                  // [0x148e900] Final|HasDefaults    
	// Function /Game/NPC_AIBMI/Eagle/NPC_Eagle_AI.NPC_Eagle_AI_C.AIDEAD__DelegateSignature
	// void AIDEAD__DelegateSignature();                                                                                        // [0x148e900] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C
/// Size: 0x05E8 (1512 bytes) (0x0004B8 - 0x0005E8) align 16 MaxSize: 0x05E8
class ANPC_Snake_AI_C : public ACharacter
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x04B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04C0   (0x0008)  
	class UArrowComponent*                             FarFireLoc;                                                 // 0x04C8   (0x0008)  
	class UArrowComponent*                             AttackTraceLoc;                                             // 0x04D0   (0x0008)  
	class UBoxComponent*                               Attack_HitTouch_01;                                         // 0x04D8   (0x0008)  
	class UParticleSystemComponent*                    Ghost;                                                      // 0x04E0   (0x0008)  
	class USphereComponent*                            QYQTouch;                                                   // 0x04E8   (0x0008)  
	class UPointLightComponent*                        BodyLight;                                                  // 0x04F0   (0x0008)  
	class UWidgetComponent*                            HealthAI;                                                   // 0x04F8   (0x0008)  
	class UArrowComponent*                             AutoAimPlayer;                                              // 0x0500   (0x0008)  
	class UBoxComponent*                               Head_Shot;                                                  // 0x0508   (0x0008)  
	class UParticleSystemComponent*                    QYQPar;                                                     // 0x0510   (0x0008)  
	class UPointLightComponent*                        HitLight;                                                   // 0x0518   (0x0008)  
	class UPhysicalAnimationComponent*                 PhysicalAnimations;                                         // 0x0520   (0x0008)  
	class UParticleSystemComponent*                    XChange_Edms;                                               // 0x0528   (0x0008)  
	class UParticleSystemComponent*                    BloodHead;                                                  // 0x0530   (0x0008)  
	class UParticleSystemComponent*                    BloodBody;                                                  // 0x0538   (0x0008)  
	float                                              ____0_Chorme_E09387C1414A07289EC3BABAAF3AF662;              // 0x0540   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    ____0__Direction_E09387C1414A07289EC3BABAAF3AF662;          // 0x0544   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0545   (0x0003)  MISSED
	class UTimelineComponent*                          _e_;                                                        // 0x0548   (0x0008)  
	float                                              PlayerDistance;                                             // 0x0550   (0x0004)  
	bool                                               IsDead_;                                                    // 0x0554   (0x0001)  
	bool                                               IsFirstLookPlayer;                                          // 0x0555   (0x0001)  
	bool                                               IsSpawn_;                                                   // 0x0556   (0x0001)  
	bool                                               IsFireTime;                                                 // 0x0557   (0x0001)  
	bool                                               IsTouchPlayer;                                              // 0x0558   (0x0001)  
	bool                                               IsHitTime_;                                                 // 0x0559   (0x0001)  
	bool                                               HitShield;                                                  // 0x055A   (0x0001)  
	bool                                               IsShun_;                                                    // 0x055B   (0x0001)  
	float                                              AIHealth;                                                   // 0x055C   (0x0004)  
	float                                              AIMAXHealth;                                                // 0x0560   (0x0004)  
	FName                                              AirTouchBone;                                               // 0x0564   (0x0008)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x056C   (0x0004)  MISSED
	class UPhysicalAnimationComponent*                 PhysicalAnimation;                                          // 0x0570   (0x0008)  
	bool                                               IsAirAnimFinish_;                                           // 0x0578   (0x0001)  
	bool                                               CanBoken;                                                   // 0x0579   (0x0001)  
	bool                                               IsKanJiorEMP;                                               // 0x057A   (0x0001)  
	unsigned char                                      UnknownData03_6[0x5];                                       // 0x057B   (0x0005)  MISSED
	class USkeletalMeshComponent*                      RightHand;                                                  // 0x0580   (0x0008)  
	class USkeletalMeshComponent*                      LeftHand;                                                   // 0x0588   (0x0008)  
	class USkeletalMeshComponent*                      LeftFoot;                                                   // 0x0590   (0x0008)  
	class USkeletalMeshComponent*                      RightFoot;                                                  // 0x0598   (0x0008)  
	class USkeletalMeshComponent*                      head;                                                       // 0x05A0   (0x0008)  
	float                                              Attack_HitT_01;                                             // 0x05A8   (0x0004)  
	bool                                               IsPlayerAirUseQYQ_;                                         // 0x05AC   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x05AD   (0x0003)  MISSED
	float                                              SpawnTime;                                                  // 0x05B0   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x05B4   (0x0004)  MISSED
	SDK_UNDEFINED(16,982) /* FMulticastInlineDelegate */ __um(AIDEAD);                                             // 0x05B8   (0x0010)  
	FVector                                            EMPAirZ;                                                    // 0x05C8   (0x000C)  
	int32_t                                            AirType;                                                    // 0x05D4   (0x0004)  
	bool                                               IsSprintAttack_;                                            // 0x05D8   (0x0001)  
	unsigned char                                      UnknownData06_6[0x7];                                       // 0x05D9   (0x0007)  MISSED
	class ANPC_GuLouBoss_AI_C*                         Boss;                                                       // 0x05E0   (0x0008)  


	/// Functions
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.HealthUI_Vis?
	// void HealthUI_Vis_();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.ForceLookPlayers
	// void ForceLookPlayers();                                                                                                 // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.HealthUIRotToPlayer
	// void HealthUIRotToPlayer();                                                                                              // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.AirMaterial
	// void AirMaterial();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.AutoAnimPlayerEvent
	// void AutoAnimPlayerEvent();                                                                                              // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.HitEdm
	// void HitEdm();                                                                                                           // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.HitBlood
	// void HitBlood();                                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.LookAtPlayer
	// void LookAtPlayer();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.ˆeÙïtè_
	// void _e__t__();                                                                                                          // [0x148e900] BlueprintEvent       
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.OnFail_D95249814D0501FE7929CABB18D769FB
	// void OnFail_D95249814D0501FE7929CABB18D769FB(TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.OnSuccess_D95249814D0501FE7929CABB18D769FB
	// void OnSuccess_D95249814D0501FE7929CABB18D769FB(TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Completed_185E21AA4FF0D3B7CD00C08152CFE12D
	// void Completed_185E21AA4FF0D3B7CD00C08152CFE12D(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.AIHeadShot
	// void AIHeadShot();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.AIHandRShot
	// void AIHandRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.AIHandLShot
	// void AIHandLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.AIFootLShot
	// void AIFootLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.AIFootRShot
	// void AIFootRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_ShieldHit
	// void Send_ShieldHit();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_HuaChan
	// void Send_HuaChan();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_ShieldHitMeleeOrSword
	// void Send_ShieldHitMeleeOrSword(int32_t Hit);                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_NearDefu
	// void Send_NearDefu(int32_t FireType);                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_PerfectDefu
	// void Send_PerfectDefu(int32_t FireType);                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_AIBoat
	// void Send_AIBoat(class UPrimitiveComponent* HitBox, float Hit);                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_AIDEFUHealths
	// void Send_AIDEFUHealths(float DEFUHealth, float BloddHealth, bool HaveDefu_);                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_ForceAIHit
	// void Send_ForceAIHit();                                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_BloodHK
	// void Send_BloodHK();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_DefuHK
	// void Send_DefuHK();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_Add_Alerts
	// void Send_Add_Alerts(float DS);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_Dee_Alert
	// void Send_Dee_Alert();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_ForwardSeePlayer
	// void Send_ForwardSeePlayer();                                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_FootAI_Alert
	// void Send_FootAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_BackSeePlayer
	// void Send_BackSeePlayer();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_ShunAI_Alert
	// void Send_ShunAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_PlayerHitCarAI
	// void Send_PlayerHitCarAI();                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_PlayerQYQAI
	// void Send_PlayerQYQAI(int32_t Number);                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_GERFire
	// void Send_GERFire();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_GuLouHand_Hit
	// void Send_GuLouHand_Hit(float Hit);                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.MoveToPlayer
	// void MoveToPlayer();                                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.NearFire
	// void NearFire();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.AIHit
	// void AIHit();                                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_HitSword
	// void Send_HitSword(float Hit, int32_t FiretType);                                                                        // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.-Health
	// void _Health();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_MeleePower
	// void Send_MeleePower(float Hit);                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_UpLightSword
	// void Send_UpLightSword(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.ForceLookPlayer
	// void ForceLookPlayer();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_KanJi
	// void Send_KanJi(float Hit);                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_ZhaDi
	// void Send_ZhaDi();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_AIQYQ
	// void Send_AIQYQ();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.PerfectDefu_HitAnim
	// void PerfectDefu_HitAnim();                                                                                              // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_AIFlyQYQ
	// void Send_AIFlyQYQ();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.UpDataDEFUHealth
	// void UpDataDEFUHealth();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_DisPlayAIHealthUI
	// void Send_DisPlayAIHealthUI(bool Vis_);                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_EMP
	// void Send_EMP(float Hit);                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.ForceAir
	// void ForceAir();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_SprintAttack
	// void Send_SprintAttack(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.ForceDead
	// void ForceDead();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.ReceiveAnyDamage
	// void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser); // [0x148e900] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.SpawnFarAttackBP
	// void SpawnFarAttackBP();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.BndEvt__Attack_HitTouch_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Attack_HitTouch_01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Open_Hit01_Event
	// void Open_Hit01_Event();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Close_Hit01_Event
	// void Close_Hit01_Event();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.AttackTrace
	// void AttackTrace();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.FarFire
	// void FarFire();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_HealthUIVis
	// void Send_HealthUIVis();                                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.Send_XuLiMelee
	// void Send_XuLiMelee(float Hit);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.ExecuteUbergraph_NPC_Snake_AI
	// void ExecuteUbergraph_NPC_Snake_AI(int32_t EntryPoint);                                                                  // [0x148e900] Final|HasDefaults    
	// Function /Game/NPC_AIBMI/Eagle/NPC_Snake_AI.NPC_Snake_AI_C.AIDEAD__DelegateSignature
	// void AIDEAD__DelegateSignature();                                                                                        // [0x148e900] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/NPC_AIBMI/GuLouBoss/BP/EagleAI_Path.EagleAI_Path_C
/// Size: 0x0230 (560 bytes) (0x000220 - 0x000230) align 8 MaxSize: 0x0230
class AEagleAI_Path_C : public AActor
{ 
public:
	class USplineComponent*                            Spline;                                                     // 0x0220   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0228   (0x0008)  
};

/// Class /Game/NPCBMI/SuYa/Mod/NPC_BMI_SuYa_AnimBlueprint_TPS.NPC_BMI_SuYa_AnimBlueprint_TPS_C
/// Size: 0x696D (26989 bytes) (0x0002B8 - 0x00696D) align 16 MaxSize: 0x696D
class UNPC_BMI_SuYa_AnimBlueprint_TPS_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0030)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x02F8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult0;                            // 0x0320   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult1;                            // 0x0348   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult2;                            // 0x0370   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult3;                            // 0x0398   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult4;                            // 0x03C0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult5;                            // 0x03E8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult6;                            // 0x0410   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult7;                            // 0x0438   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult8;                            // 0x0460   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult9;                            // 0x0488   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult10;                           // 0x04B0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult11;                           // 0x04D8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult12;                           // 0x0500   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult13;                           // 0x0528   (0x0028)  
	FAnimNode_OrientationWarp                          AnimGraphNode_OrientationWarp;                              // 0x0550   (0x0090)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x05E0   (0x0080)  
	FAnimNode_OrientationWarp                          AnimGraphNode_OrientationWarp14;                            // 0x0660   (0x0090)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer15;                             // 0x06F0   (0x0080)  
	FAnimNode_BlendListByInt                           AnimGraphNode_BlendListByInt;                               // 0x0770   (0x00A0)  
	FAnimNode_OrientationWarp                          AnimGraphNode_OrientationWarp16;                            // 0x0810   (0x0090)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer17;                             // 0x08A0   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0920   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer18;                             // 0x0950   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult19;                                // 0x09D0   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer20;                             // 0x0A00   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult21;                                // 0x0A80   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer22;                             // 0x0AB0   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult23;                                // 0x0B30   (0x0030)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x0B60   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer24;                           // 0x0C48   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer25;                           // 0x0D30   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer26;                           // 0x0E18   (0x00E8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x0F00   (0x00A0)  
	FAnimNode_BlendListByInt                           AnimGraphNode_BlendListByInt27;                             // 0x0FA0   (0x00A0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer28;                           // 0x1040   (0x00E8)  
	FAnimNode_BlendListByInt                           AnimGraphNode_BlendListByInt29;                             // 0x1128   (0x00A0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer30;                           // 0x11C8   (0x00E8)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult31;                                // 0x12B0   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer32;                             // 0x12E0   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer33;                             // 0x1360   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer34;                             // 0x13E0   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer35;                             // 0x1460   (0x0080)  
	FAnimNode_OrientationWarp                          AnimGraphNode_OrientationWarp36;                            // 0x14E0   (0x0090)  
	FAnimNode_OrientationWarp                          AnimGraphNode_OrientationWarp37;                            // 0x1570   (0x0090)  
	FAnimNode_OrientationWarp                          AnimGraphNode_OrientationWarp38;                            // 0x1600   (0x0090)  
	FAnimNode_OrientationWarp                          AnimGraphNode_OrientationWarp39;                            // 0x1690   (0x0090)  
	FAnimNode_BlendListByInt                           AnimGraphNode_BlendListByInt40;                             // 0x1720   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer41;                             // 0x17C0   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer42;                             // 0x1840   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer43;                             // 0x18C0   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer44;                             // 0x1940   (0x0080)  
	FAnimNode_OrientationWarp                          AnimGraphNode_OrientationWarp45;                            // 0x19C0   (0x0090)  
	FAnimNode_OrientationWarp                          AnimGraphNode_OrientationWarp46;                            // 0x1A50   (0x0090)  
	FAnimNode_OrientationWarp                          AnimGraphNode_OrientationWarp47;                            // 0x1AE0   (0x0090)  
	FAnimNode_OrientationWarp                          AnimGraphNode_OrientationWarp48;                            // 0x1B70   (0x0090)  
	FAnimNode_BlendListByInt                           AnimGraphNode_BlendListByInt49;                             // 0x1C00   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer50;                             // 0x1CA0   (0x0080)  
	FAnimNode_OrientationWarp                          AnimGraphNode_OrientationWarp51;                            // 0x1D20   (0x0090)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool52;                            // 0x1DB0   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool53;                            // 0x1E50   (0x00A0)  
	FAnimNode_OrientationWarp                          AnimGraphNode_OrientationWarp54;                            // 0x1EF0   (0x0090)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer55;                             // 0x1F80   (0x0080)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool56;                            // 0x2000   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool57;                            // 0x20A0   (0x00A0)  
	FAnimNode_OrientationWarp                          AnimGraphNode_OrientationWarp58;                            // 0x2140   (0x0090)  
	FAnimNode_OrientationWarp                          AnimGraphNode_OrientationWarp59;                            // 0x21D0   (0x0090)  
	FAnimNode_OrientationWarp                          AnimGraphNode_OrientationWarp60;                            // 0x2260   (0x0090)  
	FAnimNode_OrientationWarp                          AnimGraphNode_OrientationWarp61;                            // 0x22F0   (0x0090)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer62;                             // 0x2380   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer63;                             // 0x2400   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer64;                             // 0x2480   (0x0080)  
	FAnimNode_BlendListByInt                           AnimGraphNode_BlendListByInt65;                             // 0x2500   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer66;                             // 0x25A0   (0x0080)  
	FAnimNode_OrientationWarp                          AnimGraphNode_OrientationWarp67;                            // 0x2620   (0x0090)  
	FAnimNode_OrientationWarp                          AnimGraphNode_OrientationWarp68;                            // 0x26B0   (0x0090)  
	FAnimNode_OrientationWarp                          AnimGraphNode_OrientationWarp69;                            // 0x2740   (0x0090)  
	FAnimNode_OrientationWarp                          AnimGraphNode_OrientationWarp70;                            // 0x27D0   (0x0090)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer71;                             // 0x2860   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer72;                             // 0x28E0   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer73;                             // 0x2960   (0x0080)  
	FAnimNode_BlendListByInt                           AnimGraphNode_BlendListByInt74;                             // 0x29E0   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer75;                             // 0x2A80   (0x0080)  
	FAnimNode_BlendListByInt                           AnimGraphNode_BlendListByInt76;                             // 0x2B00   (0x00A0)  
	FAnimNode_OrientationWarp                          AnimGraphNode_OrientationWarp77;                            // 0x2BA0   (0x0090)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer78;                             // 0x2C30   (0x0080)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool79;                            // 0x2CB0   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool80;                            // 0x2D50   (0x00A0)  
	FAnimNode_OrientationWarp                          AnimGraphNode_OrientationWarp81;                            // 0x2DF0   (0x0090)  
	FAnimNode_OrientationWarp                          AnimGraphNode_OrientationWarp82;                            // 0x2E80   (0x0090)  
	FAnimNode_OrientationWarp                          AnimGraphNode_OrientationWarp83;                            // 0x2F10   (0x0090)  
	FAnimNode_OrientationWarp                          AnimGraphNode_OrientationWarp84;                            // 0x2FA0   (0x0090)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer85;                             // 0x3030   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer86;                             // 0x30B0   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer87;                             // 0x3130   (0x0080)  
	FAnimNode_BlendListByInt                           AnimGraphNode_BlendListByInt88;                             // 0x31B0   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer89;                             // 0x3250   (0x0080)  
	FAnimNode_OrientationWarp                          AnimGraphNode_OrientationWarp90;                            // 0x32D0   (0x0090)  
	FAnimNode_OrientationWarp                          AnimGraphNode_OrientationWarp91;                            // 0x3360   (0x0090)  
	FAnimNode_OrientationWarp                          AnimGraphNode_OrientationWarp92;                            // 0x33F0   (0x0090)  
	FAnimNode_OrientationWarp                          AnimGraphNode_OrientationWarp93;                            // 0x3480   (0x0090)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer94;                             // 0x3510   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer95;                             // 0x3590   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer96;                             // 0x3610   (0x0080)  
	FAnimNode_BlendListByInt                           AnimGraphNode_BlendListByInt97;                             // 0x3690   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer98;                             // 0x3730   (0x0080)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult99;                                // 0x37B0   (0x0030)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer100;                          // 0x37E0   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer101;                          // 0x38C8   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer102;                          // 0x39B0   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer103;                          // 0x3A98   (0x00E8)  
	FAnimNode_BlendListByInt                           AnimGraphNode_BlendListByInt104;                            // 0x3B80   (0x00A0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer105;                          // 0x3C20   (0x00E8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool106;                           // 0x3D08   (0x00A0)  
	FAnimNode_BlendListByInt                           AnimGraphNode_BlendListByInt107;                            // 0x3DA8   (0x00A0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer108;                          // 0x3E48   (0x00E8)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult109;                               // 0x3F30   (0x0030)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool110;                           // 0x3F60   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer111;                            // 0x4000   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer112;                            // 0x4080   (0x0080)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool113;                           // 0x4100   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer114;                            // 0x41A0   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer115;                            // 0x4220   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer116;                            // 0x42A0   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer117;                            // 0x4320   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer118;                            // 0x43A0   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer119;                            // 0x4420   (0x0080)  
	FAnimNode_BlendListByInt                           AnimGraphNode_BlendListByInt120;                            // 0x44A0   (0x00A0)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool121;                           // 0x4540   (0x00A0)  
	FAnimNode_BlendListByInt                           AnimGraphNode_BlendListByInt122;                            // 0x45E0   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult123;                               // 0x4680   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x46B0   (0x00B0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x4760   (0x0158)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult124;                          // 0x48B8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult125;                          // 0x48E0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult126;                          // 0x4908   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult127;                          // 0x4930   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult128;                          // 0x4958   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult129;                          // 0x4980   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult130;                          // 0x49A8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult131;                          // 0x49D0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult132;                          // 0x49F8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult133;                          // 0x4A20   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult134;                          // 0x4A48   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer135;                            // 0x4A70   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer136;                            // 0x4AF0   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer137;                            // 0x4B70   (0x0080)  
	FAnimNode_BlendListByInt                           AnimGraphNode_BlendListByInt138;                            // 0x4BF0   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult139;                               // 0x4C90   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer140;                            // 0x4CC0   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer141;                            // 0x4D40   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer142;                            // 0x4DC0   (0x0080)  
	FAnimNode_BlendListByInt                           AnimGraphNode_BlendListByInt143;                            // 0x4E40   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult144;                               // 0x4EE0   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer145;                            // 0x4F10   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer146;                            // 0x4F90   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer147;                            // 0x5010   (0x0080)  
	FAnimNode_BlendListByInt                           AnimGraphNode_BlendListByInt148;                            // 0x5090   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult149;                               // 0x5130   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine150;                              // 0x5160   (0x00B0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult151;                               // 0x5210   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer152;                            // 0x5240   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer153;                            // 0x52C0   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer154;                            // 0x5340   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer155;                            // 0x53C0   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer156;                            // 0x5440   (0x0080)  
	FAnimNode_BlendListByInt                           AnimGraphNode_BlendListByInt157;                            // 0x54C0   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult158;                               // 0x5560   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer159;                            // 0x5590   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer160;                            // 0x5610   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer161;                            // 0x5690   (0x0080)  
	FAnimNode_BlendListByInt                           AnimGraphNode_BlendListByInt162;                            // 0x5710   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult163;                               // 0x57B0   (0x0030)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult164;                          // 0x57E0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult165;                          // 0x5808   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer166;                            // 0x5830   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer167;                            // 0x58B0   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer168;                            // 0x5930   (0x0080)  
	FAnimNode_BlendListByInt                           AnimGraphNode_BlendListByInt169;                            // 0x59B0   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult170;                               // 0x5A50   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer171;                            // 0x5A80   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer172;                            // 0x5B00   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer173;                            // 0x5B80   (0x0080)  
	FAnimNode_BlendListByInt                           AnimGraphNode_BlendListByInt174;                            // 0x5C00   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult175;                               // 0x5CA0   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer176;                            // 0x5CD0   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer177;                            // 0x5D50   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer178;                            // 0x5DD0   (0x0080)  
	FAnimNode_BlendListByInt                           AnimGraphNode_BlendListByInt179;                            // 0x5E50   (0x00A0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult180;                               // 0x5EF0   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine181;                              // 0x5F20   (0x00B0)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult182;                               // 0x5FD0   (0x0030)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x6000   (0x0028)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult183;                               // 0x6028   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine184;                              // 0x6058   (0x00B0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose185;                            // 0x6108   (0x0158)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace;                     // 0x6260   (0x0190)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x63F0   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x6410   (0x0020)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose186;                             // 0x6430   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose187;                             // 0x6458   (0x0028)  
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK;                                    // 0x6480   (0x01E0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose188;                            // 0x6660   (0x0158)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose189;                             // 0x67B8   (0x0028)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x67E0   (0x0048)  
	FAnimNode_LayeredBoneBlend                         AnimGraphNode_LayeredBoneBlend;                             // 0x6828   (0x00C0)  
	float                                              CrouchAlpha;                                                // 0x68E8   (0x0004)  
	bool                                               IsInAir;                                                    // 0x68EC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x68ED   (0x0003)  MISSED
	float                                              Direction;                                                  // 0x68F0   (0x0004)  
	float                                              Speed;                                                      // 0x68F4   (0x0004)  
	float                                              Roll;                                                       // 0x68F8   (0x0004)  
	float                                              Pitch;                                                      // 0x68FC   (0x0004)  
	float                                              Yaw;                                                        // 0x6900   (0x0004)  
	float                                              YawDelta;                                                   // 0x6904   (0x0004)  
	FRotator                                           RotationLastTick;                                           // 0x6908   (0x000C)  
	bool                                               IsMove;                                                     // 0x6914   (0x0001)  
	bool                                               FullBody;                                                   // 0x6915   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x6916   (0x0002)  MISSED
	float                                              StopDirection;                                              // 0x6918   (0x0004)  
	int32_t                                            WeaponType;                                                 // 0x691C   (0x0004)  
	int32_t                                            Cardinal_Direction;                                         // 0x6920   (0x0004)  
	float                                              RelativeDirection;                                          // 0x6924   (0x0004)  
	FVector                                            IKHandL;                                                    // 0x6928   (0x000C)  
	float                                              Play_Rate;                                                  // 0x6934   (0x0004)  
	float                                              Stride_Scale;                                               // 0x6938   (0x0004)  
	bool                                               IsRun_;                                                     // 0x693C   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x693D   (0x0003)  MISSED
	float                                              AimSet;                                                     // 0x6940   (0x0004)  
	float                                              WeaponIK;                                                   // 0x6944   (0x0004)  
	bool                                               IsShun;                                                     // 0x6948   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x6949   (0x0003)  MISSED
	int32_t                                            ShunFangXiang;                                              // 0x694C   (0x0004)  
	bool                                               Is_Double_Jump_;                                            // 0x6950   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x6951   (0x0003)  MISSED
	float                                              IsFireing_;                                                 // 0x6954   (0x0004)  
	float                                              PoseBlend;                                                  // 0x6958   (0x0004)  
	bool                                               QianRu_;                                                    // 0x695C   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x695D   (0x0003)  MISSED
	class ABMICharacter_C*                             As_BMICharacter;                                            // 0x6960   (0x0008)  
	bool                                               Is_Hua_Chan_TimeIK;                                         // 0x6968   (0x0001)  
	bool                                               Is_Hua_Chan_Time;                                           // 0x6969   (0x0001)  
	bool                                               Is_Fire_BP;                                                 // 0x696A   (0x0001)  
	bool                                               Is_TPS_ADD_Yao_She;                                         // 0x696B   (0x0001)  
	bool                                               Is_Player_Climb_Time;                                       // 0x696C   (0x0001)  


	/// Functions
	// Function /Game/NPCBMI/SuYa/Mod/NPC_BMI_SuYa_AnimBlueprint_TPS.NPC_BMI_SuYa_AnimBlueprint_TPS_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x148e900] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/SuYa/Mod/NPC_BMI_SuYa_AnimBlueprint_TPS.NPC_BMI_SuYa_AnimBlueprint_TPS_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BMI_SuYa_AnimBlueprint_TPS_AnimGraphNode_RotationOffsetBlendSpace_0D0938B843275F45E057E9A4CD08123F
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BMI_SuYa_AnimBlueprint_TPS_AnimGraphNode_RotationOffsetBlendSpace_0D0938B843275F45E057E9A4CD08123F(); // [0x148e900] BlueprintEvent       
	// Function /Game/NPCBMI/SuYa/Mod/NPC_BMI_SuYa_AnimBlueprint_TPS.NPC_BMI_SuYa_AnimBlueprint_TPS_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BMI_SuYa_AnimBlueprint_TPS_AnimGraphNode_TransitionResult_8DE7DD4640710FB4062A71BD26063AB6
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BMI_SuYa_AnimBlueprint_TPS_AnimGraphNode_TransitionResult_8DE7DD4640710FB4062A71BD26063AB6(); // [0x148e900] BlueprintEvent       
	// Function /Game/NPCBMI/SuYa/Mod/NPC_BMI_SuYa_AnimBlueprint_TPS.NPC_BMI_SuYa_AnimBlueprint_TPS_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BMI_SuYa_AnimBlueprint_TPS_AnimGraphNode_TransitionResult_33B845EC4234149D994D80967DD08D42
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BMI_SuYa_AnimBlueprint_TPS_AnimGraphNode_TransitionResult_33B845EC4234149D994D80967DD08D42(); // [0x148e900] BlueprintEvent       
	// Function /Game/NPCBMI/SuYa/Mod/NPC_BMI_SuYa_AnimBlueprint_TPS.NPC_BMI_SuYa_AnimBlueprint_TPS_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BMI_SuYa_AnimBlueprint_TPS_AnimGraphNode_TransitionResult_8172685D406A06EC4DCC29A3E922B609
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BMI_SuYa_AnimBlueprint_TPS_AnimGraphNode_TransitionResult_8172685D406A06EC4DCC29A3E922B609(); // [0x148e900] BlueprintEvent       
	// Function /Game/NPCBMI/SuYa/Mod/NPC_BMI_SuYa_AnimBlueprint_TPS.NPC_BMI_SuYa_AnimBlueprint_TPS_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BMI_SuYa_AnimBlueprint_TPS_AnimGraphNode_BlendListByBool_32C86EF84590435E9C9EC0902350EB7F
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BMI_SuYa_AnimBlueprint_TPS_AnimGraphNode_BlendListByBool_32C86EF84590435E9C9EC0902350EB7F(); // [0x148e900] BlueprintEvent       
	// Function /Game/NPCBMI/SuYa/Mod/NPC_BMI_SuYa_AnimBlueprint_TPS.NPC_BMI_SuYa_AnimBlueprint_TPS_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BMI_SuYa_AnimBlueprint_TPS_AnimGraphNode_BlendListByBool_2670343F40D8975BABC27F8C15244B29
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BMI_SuYa_AnimBlueprint_TPS_AnimGraphNode_BlendListByBool_2670343F40D8975BABC27F8C15244B29(); // [0x148e900] BlueprintEvent       
	// Function /Game/NPCBMI/SuYa/Mod/NPC_BMI_SuYa_AnimBlueprint_TPS.NPC_BMI_SuYa_AnimBlueprint_TPS_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BMI_SuYa_AnimBlueprint_TPS_AnimGraphNode_BlendListByBool_FBB464A543FB50EDBD96E8992857B384
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BMI_SuYa_AnimBlueprint_TPS_AnimGraphNode_BlendListByBool_FBB464A543FB50EDBD96E8992857B384(); // [0x148e900] BlueprintEvent       
	// Function /Game/NPCBMI/SuYa/Mod/NPC_BMI_SuYa_AnimBlueprint_TPS.NPC_BMI_SuYa_AnimBlueprint_TPS_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BMI_SuYa_AnimBlueprint_TPS_AnimGraphNode_BlendListByBool_20E7197E4EEB67544A4F148FC9892446
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BMI_SuYa_AnimBlueprint_TPS_AnimGraphNode_BlendListByBool_20E7197E4EEB67544A4F148FC9892446(); // [0x148e900] BlueprintEvent       
	// Function /Game/NPCBMI/SuYa/Mod/NPC_BMI_SuYa_AnimBlueprint_TPS.NPC_BMI_SuYa_AnimBlueprint_TPS_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BMI_SuYa_AnimBlueprint_TPS_AnimGraphNode_BlendListByBool_AF1EC96647B04F6BB0119BBF5BD652D8
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BMI_SuYa_AnimBlueprint_TPS_AnimGraphNode_BlendListByBool_AF1EC96647B04F6BB0119BBF5BD652D8(); // [0x148e900] BlueprintEvent       
	// Function /Game/NPCBMI/SuYa/Mod/NPC_BMI_SuYa_AnimBlueprint_TPS.NPC_BMI_SuYa_AnimBlueprint_TPS_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BMI_SuYa_AnimBlueprint_TPS_AnimGraphNode_BlendListByBool_491785634C4AE990AC7CDF8A0E4DE36B
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BMI_SuYa_AnimBlueprint_TPS_AnimGraphNode_BlendListByBool_491785634C4AE990AC7CDF8A0E4DE36B(); // [0x148e900] BlueprintEvent       
	// Function /Game/NPCBMI/SuYa/Mod/NPC_BMI_SuYa_AnimBlueprint_TPS.NPC_BMI_SuYa_AnimBlueprint_TPS_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BMI_SuYa_AnimBlueprint_TPS_AnimGraphNode_TransitionResult_E8DF86A5482F4106FEE30EAE563FF5A6
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BMI_SuYa_AnimBlueprint_TPS_AnimGraphNode_TransitionResult_E8DF86A5482F4106FEE30EAE563FF5A6(); // [0x148e900] BlueprintEvent       
	// Function /Game/NPCBMI/SuYa/Mod/NPC_BMI_SuYa_AnimBlueprint_TPS.NPC_BMI_SuYa_AnimBlueprint_TPS_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BMI_SuYa_AnimBlueprint_TPS_AnimGraphNode_TransitionResult_7B39D12A432808089FB69498E57C9278
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BMI_SuYa_AnimBlueprint_TPS_AnimGraphNode_TransitionResult_7B39D12A432808089FB69498E57C9278(); // [0x148e900] BlueprintEvent       
	// Function /Game/NPCBMI/SuYa/Mod/NPC_BMI_SuYa_AnimBlueprint_TPS.NPC_BMI_SuYa_AnimBlueprint_TPS_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BMI_SuYa_AnimBlueprint_TPS_AnimGraphNode_TransitionResult_51EA32FB4E4B6B857BC30AA2EEF07148
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BMI_SuYa_AnimBlueprint_TPS_AnimGraphNode_TransitionResult_51EA32FB4E4B6B857BC30AA2EEF07148(); // [0x148e900] BlueprintEvent       
	// Function /Game/NPCBMI/SuYa/Mod/NPC_BMI_SuYa_AnimBlueprint_TPS.NPC_BMI_SuYa_AnimBlueprint_TPS_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BMI_SuYa_AnimBlueprint_TPS_AnimGraphNode_TransitionResult_35D013B347C011D60B60988098D16663
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_BMI_SuYa_AnimBlueprint_TPS_AnimGraphNode_TransitionResult_35D013B347C011D60B60988098D16663(); // [0x148e900] BlueprintEvent       
	// Function /Game/NPCBMI/SuYa/Mod/NPC_BMI_SuYa_AnimBlueprint_TPS.NPC_BMI_SuYa_AnimBlueprint_TPS_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/SuYa/Mod/NPC_BMI_SuYa_AnimBlueprint_TPS.NPC_BMI_SuYa_AnimBlueprint_TPS_C.AnimNotify_LeftFootEvent
	// void AnimNotify_LeftFootEvent();                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/SuYa/Mod/NPC_BMI_SuYa_AnimBlueprint_TPS.NPC_BMI_SuYa_AnimBlueprint_TPS_C.AnimNotify_RightFootEvent
	// void AnimNotify_RightFootEvent();                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/SuYa/Mod/NPC_BMI_SuYa_AnimBlueprint_TPS.NPC_BMI_SuYa_AnimBlueprint_TPS_C.ExecuteUbergraph_NPC_BMI_SuYa_AnimBlueprint_TPS
	// void ExecuteUbergraph_NPC_BMI_SuYa_AnimBlueprint_TPS(int32_t EntryPoint);                                                // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/Warrior/Warrior01/BP/NPC_GroundBlood.NPC_GroundBlood_C
/// Size: 0x0230 (560 bytes) (0x000220 - 0x000230) align 8 MaxSize: 0x0230
class ANPC_GroundBlood_C : public AActor
{ 
public:
	class UDecalComponent*                             Decal;                                                      // 0x0220   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0228   (0x0008)  
};

/// Class /Game/NPCBMI/SuYa/Mod/NPC_BMI_SuYa_Skin00_iClone_Skeleton_AnimBlueprint.NPC_BMI_SuYa_Skin00_iClone_Skeleton_AnimBlueprint_C
/// Size: 0x0760 (1888 bytes) (0x0002B8 - 0x000760) align 16 MaxSize: 0x0760
class UNPC_BMI_SuYa_Skin00_iClone_Skeleton_AnimBlueprint_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0030)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x02F8   (0x0008)  MISSED
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK;                                    // 0x0300   (0x01E0)  
	FAnimNode_BlendListByInt                           AnimGraphNode_BlendListByInt;                               // 0x04E0   (0x00A0)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0580   (0x0020)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x05A0   (0x0048)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x05E8   (0x0020)  
	FAnimNode_Slot                                     AnimGraphNode_Slot0;                                        // 0x0608   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0650   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer1;                              // 0x06D0   (0x0080)  
	FVector                                            IKHandL;                                                    // 0x0750   (0x000C)  
	int32_t                                            WeaponType;                                                 // 0x075C   (0x0004)  


	/// Functions
	// Function /Game/NPCBMI/SuYa/Mod/NPC_BMI_SuYa_Skin00_iClone_Skeleton_AnimBlueprint.NPC_BMI_SuYa_Skin00_iClone_Skeleton_AnimBlueprint_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x148e900] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/SuYa/Mod/NPC_BMI_SuYa_Skin00_iClone_Skeleton_AnimBlueprint.NPC_BMI_SuYa_Skin00_iClone_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/SuYa/Mod/NPC_BMI_SuYa_Skin00_iClone_Skeleton_AnimBlueprint.NPC_BMI_SuYa_Skin00_iClone_Skeleton_AnimBlueprint_C.ExecuteUbergraph_NPC_BMI_SuYa_Skin00_iClone_Skeleton_AnimBlueprint
	// void ExecuteUbergraph_NPC_BMI_SuYa_Skin00_iClone_Skeleton_AnimBlueprint(int32_t EntryPoint);                             // [0x148e900] Final                
};

/// Class /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBoss_Rock.NPC_FYQBoss_Rock_C
/// Size: 0x0258 (600 bytes) (0x000220 - 0x000258) align 8 MaxSize: 0x0258
class ANPC_FYQBoss_Rock_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UParticleSystemComponent*                    RockFall;                                                   // 0x0228   (0x0008)  
	class URadialForceComponent*                       RadialForce;                                                // 0x0230   (0x0008)  
	class UStaticMeshComponent*                        Rock;                                                       // 0x0238   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0240   (0x0008)  
	class UProjectileMovementComponent*                ProjectileMovement;                                         // 0x0248   (0x0008)  
	class UCapsuleComponent*                           Capsule;                                                    // 0x0250   (0x0008)  


	/// Functions
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBoss_Rock.NPC_FYQBoss_Rock_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBoss_Rock.NPC_FYQBoss_Rock_C.ForceBoom
	// void ForceBoom();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBoss_Rock.NPC_FYQBoss_Rock_C.ExecuteUbergraph_NPC_FYQBoss_Rock
	// void ExecuteUbergraph_NPC_FYQBoss_Rock(int32_t EntryPoint);                                                              // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/WarriorBig/BP/WarriorBig_AxeFly_BP2.WarriorBig_AxeFly_BP2_C
/// Size: 0x0262 (610 bytes) (0x000220 - 0x000262) align 8 MaxSize: 0x0262
class AWarriorBig_AxeFly_BP2_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UParticleSystemComponent*                    P_GuLouBoss_AXE_Begin;                                      // 0x0228   (0x0008)  
	class UArrowComponent*                             DeFuTrace;                                                  // 0x0230   (0x0008)  
	class UParticleSystemComponent*                    P_GuLouBoss_AxeTrails;                                      // 0x0238   (0x0008)  
	class USphereComponent*                            Sphere;                                                     // 0x0240   (0x0008)  
	class UProjectileMovementComponent*                ProjectileMovement;                                         // 0x0248   (0x0008)  
	class URotatingMovementComponent*                  RotatingMovement;                                           // 0x0250   (0x0008)  
	class UStaticMeshComponent*                        NPC_BMI_GuLouBoss_Weapon_AXE;                               // 0x0258   (0x0008)  
	bool                                               IsGround_;                                                  // 0x0260   (0x0001)  
	bool                                               IsPerfactDefu_;                                             // 0x0261   (0x0001)  


	/// Functions
	// Function /Game/NPCBMI/WarriorBig/BP/WarriorBig_AxeFly_BP2.WarriorBig_AxeFly_BP2_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/WarriorBig/BP/WarriorBig_AxeFly_BP2.WarriorBig_AxeFly_BP2_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/WarriorBig/BP/WarriorBig_AxeFly_BP2.WarriorBig_AxeFly_BP2_C.AttackTrace
	// void AttackTrace();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/WarriorBig/BP/WarriorBig_AxeFly_BP2.WarriorBig_AxeFly_BP2_C.ExecuteUbergraph_WarriorBig_AxeFly_BP2
	// void ExecuteUbergraph_WarriorBig_AxeFly_BP2(int32_t EntryPoint);                                                         // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/GuLouBoss/BP/WarriorBig_AxeGround_BP.WarriorBig_AxeGround_BP_C
/// Size: 0x0268 (616 bytes) (0x000220 - 0x000268) align 8 MaxSize: 0x0268
class AWarriorBig_AxeGround_BP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UBoxComponent*                               HitPlayerTouch;                                             // 0x0228   (0x0008)  
	class UParticleSystemComponent*                    WaterEdm;                                                   // 0x0230   (0x0008)  
	class UArrowComponent*                             GroundBoom;                                                 // 0x0238   (0x0008)  
	class UParticleSystemComponent*                    P_GuLouBoss_AXE_Begin;                                      // 0x0240   (0x0008)  
	class UStaticMeshComponent*                        NPC_BMI_GuLouBoss_Weapon_AXE;                               // 0x0248   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0250   (0x0008)  
	float                                              Base_Damage;                                                // 0x0258   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x025C   (0x0004)  MISSED
	class UCapsuleComponent*                           Hit_PlayerTouch;                                            // 0x0260   (0x0008)  


	/// Functions
	// Function /Game/NPCBMI/GuLouBoss/BP/WarriorBig_AxeGround_BP.WarriorBig_AxeGround_BP_C.Completed_197CF4324A3A59F4E7924980B2B19318
	// void Completed_197CF4324A3A59F4E7924980B2B19318(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/WarriorBig_AxeGround_BP.WarriorBig_AxeGround_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/WarriorBig_AxeGround_BP.WarriorBig_AxeGround_BP_C.SpawnLightning_TypeA
	// void SpawnLightning_TypeA();                                                                                             // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/WarriorBig_AxeGround_BP.WarriorBig_AxeGround_BP_C.BndEvt__GuLouBoss_AxeGround_BP_HitPlayerTouch_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__GuLouBoss_AxeGround_BP_HitPlayerTouch_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/WarriorBig_AxeGround_BP.WarriorBig_AxeGround_BP_C.ExecuteUbergraph_WarriorBig_AxeGround_BP
	// void ExecuteUbergraph_WarriorBig_AxeGround_BP(int32_t EntryPoint);                                                       // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/Warrior/Warrior01/BP/NPC_RockLion_ZhaDi_BP.NPC_RockLion_ZhaDi_BP_C
/// Size: 0x0254 (596 bytes) (0x000220 - 0x000254) align 8 MaxSize: 0x0254
class ANPC_RockLion_ZhaDi_BP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UParticleSystemComponent*                    P_Hyper_LM_Explo_HitWater;                                  // 0x0228   (0x0008)  
	class UArrowComponent*                             Trace;                                                      // 0x0230   (0x0008)  
	class UParticleSystemComponent*                    P_Hardknocks_AOE_AIZhaDi;                                   // 0x0238   (0x0008)  
	class UCapsuleComponent*                           FireHitBox;                                                 // 0x0240   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0248   (0x0008)  
	float                                              Attack_HitT_01;                                             // 0x0250   (0x0004)  


	/// Functions
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_RockLion_ZhaDi_BP.NPC_RockLion_ZhaDi_BP_C.Completed_8511E802404648F2F8100CB14A25BE02
	// void Completed_8511E802404648F2F8100CB14A25BE02(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_RockLion_ZhaDi_BP.NPC_RockLion_ZhaDi_BP_C.BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_RockLion_ZhaDi_BP.NPC_RockLion_ZhaDi_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_RockLion_ZhaDi_BP.NPC_RockLion_ZhaDi_BP_C.ExecuteUbergraph_NPC_RockLion_ZhaDi_BP
	// void ExecuteUbergraph_NPC_RockLion_ZhaDi_BP(int32_t EntryPoint);                                                         // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/WarriorBig/Mod/NPC_Warrior_Big_AnimBlueprint.NPC_Warrior_Big_AnimBlueprint_C
/// Size: 0x0518 (1304 bytes) (0x0002B8 - 0x000518) align 16 MaxSize: 0x0518
class UNPC_Warrior_Big_AnimBlueprint_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x02F8   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x0340   (0x00A0)  
	FAnimNode_Slot                                     AnimGraphNode_Slot0;                                        // 0x03E0   (0x0048)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x0428   (0x00E8)  
	float                                              Speed;                                                      // 0x0510   (0x0004)  
	bool                                               IsDead;                                                     // 0x0514   (0x0001)  
	bool                                               PlayBlendSpace1D;                                           // 0x0515   (0x0001)  
	bool                                               bIsInAir;                                                   // 0x0516   (0x0001)  
	bool                                               IsWalking;                                                  // 0x0517   (0x0001)  


	/// Functions
	// Function /Game/NPCBMI/WarriorBig/Mod/NPC_Warrior_Big_AnimBlueprint.NPC_Warrior_Big_AnimBlueprint_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x148e900] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/WarriorBig/Mod/NPC_Warrior_Big_AnimBlueprint.NPC_Warrior_Big_AnimBlueprint_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/WarriorBig/Mod/NPC_Warrior_Big_AnimBlueprint.NPC_Warrior_Big_AnimBlueprint_C.AnimNotify_AttackFire_Start
	// void AnimNotify_AttackFire_Start();                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/WarriorBig/Mod/NPC_Warrior_Big_AnimBlueprint.NPC_Warrior_Big_AnimBlueprint_C.AnimNotify_AttackFire_End
	// void AnimNotify_AttackFire_End();                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/WarriorBig/Mod/NPC_Warrior_Big_AnimBlueprint.NPC_Warrior_Big_AnimBlueprint_C.AnimNotify_Attack_ZhaDi
	// void AnimNotify_Attack_ZhaDi();                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/WarriorBig/Mod/NPC_Warrior_Big_AnimBlueprint.NPC_Warrior_Big_AnimBlueprint_C.AnimNotify_Attack_ZhaDi2
	// void AnimNotify_Attack_ZhaDi2();                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/WarriorBig/Mod/NPC_Warrior_Big_AnimBlueprint.NPC_Warrior_Big_AnimBlueprint_C.AnimNotify_FarFire
	// void AnimNotify_FarFire();                                                                                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/WarriorBig/Mod/NPC_Warrior_Big_AnimBlueprint.NPC_Warrior_Big_AnimBlueprint_C.ExecuteUbergraph_NPC_Warrior_Big_AnimBlueprint
	// void ExecuteUbergraph_NPC_Warrior_Big_AnimBlueprint(int32_t EntryPoint);                                                 // [0x148e900] Final                
};

/// Class /Game/NPCBMI/Warrior/Warrior01/BP/NPC_WarriorBig_ZhaDi_BP.NPC_WarriorBig_ZhaDi_BP_C
/// Size: 0x0254 (596 bytes) (0x000220 - 0x000254) align 8 MaxSize: 0x0254
class ANPC_WarriorBig_ZhaDi_BP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UParticleSystemComponent*                    P_Hyper_LM_Explo_HitWater;                                  // 0x0228   (0x0008)  
	class UArrowComponent*                             Trace;                                                      // 0x0230   (0x0008)  
	class UParticleSystemComponent*                    P_Hardknocks_AOE_AIZhaDi;                                   // 0x0238   (0x0008)  
	class UCapsuleComponent*                           FireHitBox;                                                 // 0x0240   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0248   (0x0008)  
	float                                              Base_Damage;                                                // 0x0250   (0x0004)  


	/// Functions
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_WarriorBig_ZhaDi_BP.NPC_WarriorBig_ZhaDi_BP_C.Completed_041C8E5B4A8421E450C7CEB9EF035E75
	// void Completed_041C8E5B4A8421E450C7CEB9EF035E75(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_WarriorBig_ZhaDi_BP.NPC_WarriorBig_ZhaDi_BP_C.BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_WarriorBig_ZhaDi_BP.NPC_WarriorBig_ZhaDi_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_WarriorBig_ZhaDi_BP.NPC_WarriorBig_ZhaDi_BP_C.ExecuteUbergraph_NPC_WarriorBig_ZhaDi_BP
	// void ExecuteUbergraph_NPC_WarriorBig_ZhaDi_BP(int32_t EntryPoint);                                                       // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/Warrior/Warrior01/BP/NPC_WarriorBig_ZhaDi_BP2.NPC_WarriorBig_ZhaDi_BP2_C
/// Size: 0x0254 (596 bytes) (0x000220 - 0x000254) align 8 MaxSize: 0x0254
class ANPC_WarriorBig_ZhaDi_BP2_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UParticleSystemComponent*                    P_Hyper_LM_Explo_HitWater;                                  // 0x0228   (0x0008)  
	class UArrowComponent*                             Trace;                                                      // 0x0230   (0x0008)  
	class UParticleSystemComponent*                    P_Hardknocks_AOE_AIZhaDi;                                   // 0x0238   (0x0008)  
	class UCapsuleComponent*                           FireHitBox;                                                 // 0x0240   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0248   (0x0008)  
	float                                              Base_Damage;                                                // 0x0250   (0x0004)  


	/// Functions
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_WarriorBig_ZhaDi_BP2.NPC_WarriorBig_ZhaDi_BP2_C.Completed_F2BD31524EB45E6532E99EBEB44FC982
	// void Completed_F2BD31524EB45E6532E99EBEB44FC982(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_WarriorBig_ZhaDi_BP2.NPC_WarriorBig_ZhaDi_BP2_C.BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_WarriorBig_ZhaDi_BP2.NPC_WarriorBig_ZhaDi_BP2_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_WarriorBig_ZhaDi_BP2.NPC_WarriorBig_ZhaDi_BP2_C.ExecuteUbergraph_NPC_WarriorBig_ZhaDi_BP2
	// void ExecuteUbergraph_NPC_WarriorBig_ZhaDi_BP2(int32_t EntryPoint);                                                      // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/WarriorBig/BP/WarriorBig_AxeFly_BP.WarriorBig_AxeFly_BP_C
/// Size: 0x025A (602 bytes) (0x000220 - 0x00025A) align 8 MaxSize: 0x025A
class AWarriorBig_AxeFly_BP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UArrowComponent*                             DeFuTrace;                                                  // 0x0228   (0x0008)  
	class UParticleSystemComponent*                    P_GuLouBoss_AxeTrails;                                      // 0x0230   (0x0008)  
	class USphereComponent*                            Sphere;                                                     // 0x0238   (0x0008)  
	class UProjectileMovementComponent*                ProjectileMovement;                                         // 0x0240   (0x0008)  
	class URotatingMovementComponent*                  RotatingMovement;                                           // 0x0248   (0x0008)  
	class UStaticMeshComponent*                        NPC_BMI_GuLouBoss_Weapon_AXE;                               // 0x0250   (0x0008)  
	bool                                               IsGround_;                                                  // 0x0258   (0x0001)  
	bool                                               IsPerfactDefu_;                                             // 0x0259   (0x0001)  


	/// Functions
	// Function /Game/NPCBMI/WarriorBig/BP/WarriorBig_AxeFly_BP.WarriorBig_AxeFly_BP_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/WarriorBig/BP/WarriorBig_AxeFly_BP.WarriorBig_AxeFly_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/WarriorBig/BP/WarriorBig_AxeFly_BP.WarriorBig_AxeFly_BP_C.AttackTrace
	// void AttackTrace();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/WarriorBig/BP/WarriorBig_AxeFly_BP.WarriorBig_AxeFly_BP_C.ExecuteUbergraph_WarriorBig_AxeFly_BP
	// void ExecuteUbergraph_WarriorBig_AxeFly_BP(int32_t EntryPoint);                                                          // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/Warrior/Warrior02/Mod/NPC_Warrior02_AnimBlueprint.NPC_Warrior02_AnimBlueprint_C
/// Size: 0x051A (1306 bytes) (0x0002B8 - 0x00051A) align 16 MaxSize: 0x051A
class UNPC_Warrior02_AnimBlueprint_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x02F8   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x0340   (0x00A0)  
	FAnimNode_Slot                                     AnimGraphNode_Slot0;                                        // 0x03E0   (0x0048)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x0428   (0x00E8)  
	bool                                               bIsInAir;                                                   // 0x0510   (0x0001)  
	bool                                               IsWalking;                                                  // 0x0511   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0512   (0x0002)  MISSED
	float                                              Speed;                                                      // 0x0514   (0x0004)  
	bool                                               PlayBlendSpace1D;                                           // 0x0518   (0x0001)  
	bool                                               IsDead;                                                     // 0x0519   (0x0001)  


	/// Functions
	// Function /Game/NPCBMI/Warrior/Warrior02/Mod/NPC_Warrior02_AnimBlueprint.NPC_Warrior02_AnimBlueprint_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x148e900] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior02/Mod/NPC_Warrior02_AnimBlueprint.NPC_Warrior02_AnimBlueprint_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior02/Mod/NPC_Warrior02_AnimBlueprint.NPC_Warrior02_AnimBlueprint_C.AnimNotify_Event_Hit01_Start
	// void AnimNotify_Event_Hit01_Start();                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior02/Mod/NPC_Warrior02_AnimBlueprint.NPC_Warrior02_AnimBlueprint_C.AnimNotify_Event_Hit01_End
	// void AnimNotify_Event_Hit01_End();                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior02/Mod/NPC_Warrior02_AnimBlueprint.NPC_Warrior02_AnimBlueprint_C.AnimNotify_SpawnZhaDi
	// void AnimNotify_SpawnZhaDi();                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior02/Mod/NPC_Warrior02_AnimBlueprint.NPC_Warrior02_AnimBlueprint_C.ExecuteUbergraph_NPC_Warrior02_AnimBlueprint
	// void ExecuteUbergraph_NPC_Warrior02_AnimBlueprint(int32_t EntryPoint);                                                   // [0x148e900] Final                
};

/// Class /Game/NPCBMI/Warrior/Warrior01/BP/NPC_Warrior01_ZhaDi_BP.NPC_Warrior01_ZhaDi_BP_C
/// Size: 0x0254 (596 bytes) (0x000220 - 0x000254) align 8 MaxSize: 0x0254
class ANPC_Warrior01_ZhaDi_BP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UParticleSystemComponent*                    P_Hyper_LM_Explo_HitWater;                                  // 0x0228   (0x0008)  
	class UArrowComponent*                             Trace;                                                      // 0x0230   (0x0008)  
	class UParticleSystemComponent*                    P_Hardknocks_AOE_AIZhaDi;                                   // 0x0238   (0x0008)  
	class UCapsuleComponent*                           FireHitBox;                                                 // 0x0240   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0248   (0x0008)  
	float                                              Attack_HitT_01;                                             // 0x0250   (0x0004)  


	/// Functions
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_Warrior01_ZhaDi_BP.NPC_Warrior01_ZhaDi_BP_C.Completed_74EDE015404703801F9C6C9BB6EE8DE7
	// void Completed_74EDE015404703801F9C6C9BB6EE8DE7(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_Warrior01_ZhaDi_BP.NPC_Warrior01_ZhaDi_BP_C.BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_Warrior01_ZhaDi_BP.NPC_Warrior01_ZhaDi_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_Warrior01_ZhaDi_BP.NPC_Warrior01_ZhaDi_BP_C.ExecuteUbergraph_NPC_Warrior01_ZhaDi_BP
	// void ExecuteUbergraph_NPC_Warrior01_ZhaDi_BP(int32_t EntryPoint);                                                        // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/Warrior/Warrior01/Mod/NPC_Warrior01_AnimBlueprint.NPC_Warrior01_AnimBlueprint_C
/// Size: 0x06A3 (1699 bytes) (0x0002B8 - 0x0006A3) align 16 MaxSize: 0x06A3
class UNPC_Warrior01_AnimBlueprint_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0030)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x02F8   (0x00E8)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x03E0   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x0428   (0x00A0)  
	FAnimNode_Slot                                     AnimGraphNode_Slot0;                                        // 0x04C8   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool1;                             // 0x0510   (0x00A0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer2;                            // 0x05B0   (0x00E8)  
	bool                                               bIsInAir;                                                   // 0x0698   (0x0001)  
	bool                                               IsWalking;                                                  // 0x0699   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x069A   (0x0002)  MISSED
	float                                              Speed;                                                      // 0x069C   (0x0004)  
	bool                                               PlayBlendSpace1D;                                           // 0x06A0   (0x0001)  
	bool                                               IsDead;                                                     // 0x06A1   (0x0001)  
	bool                                               IsBow_;                                                     // 0x06A2   (0x0001)  


	/// Functions
	// Function /Game/NPCBMI/Warrior/Warrior01/Mod/NPC_Warrior01_AnimBlueprint.NPC_Warrior01_AnimBlueprint_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x148e900] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/Mod/NPC_Warrior01_AnimBlueprint.NPC_Warrior01_AnimBlueprint_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/Mod/NPC_Warrior01_AnimBlueprint.NPC_Warrior01_AnimBlueprint_C.AnimNotify_Event_Hit01_Start
	// void AnimNotify_Event_Hit01_Start();                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/Mod/NPC_Warrior01_AnimBlueprint.NPC_Warrior01_AnimBlueprint_C.AnimNotify_Event_Hit01_End
	// void AnimNotify_Event_Hit01_End();                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/Mod/NPC_Warrior01_AnimBlueprint.NPC_Warrior01_AnimBlueprint_C.AnimNotify_SpawnFarAttack
	// void AnimNotify_SpawnFarAttack();                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/Mod/NPC_Warrior01_AnimBlueprint.NPC_Warrior01_AnimBlueprint_C.AnimNotify_SpawnZhaDi
	// void AnimNotify_SpawnZhaDi();                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/Mod/NPC_Warrior01_AnimBlueprint.NPC_Warrior01_AnimBlueprint_C.AnimNotify_ArrowFire
	// void AnimNotify_ArrowFire();                                                                                             // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/Mod/NPC_Warrior01_AnimBlueprint.NPC_Warrior01_AnimBlueprint_C.AnimNotify_ArrowHide
	// void AnimNotify_ArrowHide();                                                                                             // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/Mod/NPC_Warrior01_AnimBlueprint.NPC_Warrior01_AnimBlueprint_C.AnimNotify_ArrowVis
	// void AnimNotify_ArrowVis();                                                                                              // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/Mod/NPC_Warrior01_AnimBlueprint.NPC_Warrior01_AnimBlueprint_C.ExecuteUbergraph_NPC_Warrior01_AnimBlueprint
	// void ExecuteUbergraph_NPC_Warrior01_AnimBlueprint(int32_t EntryPoint);                                                   // [0x148e900] Final                
};

/// Class /Game/NPCBMI/Warrior/Warrior01/BP/NPC_Warrior01_Fire_BP.NPC_Warrior01_Fire_BP_C
/// Size: 0x025C (604 bytes) (0x000220 - 0x00025C) align 8 MaxSize: 0x025C
class ANPC_Warrior01_Fire_BP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class USphereComponent*                            PlayAudioTouch;                                             // 0x0228   (0x0008)  
	class UAudioComponent*                             Audio;                                                      // 0x0230   (0x0008)  
	class UCapsuleComponent*                           FireHitBox;                                                 // 0x0238   (0x0008)  
	class UProjectileMovementComponent*                ProjectileMovement;                                         // 0x0240   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0248   (0x0008)  
	class UParticleSystemComponent*                    P_H_LRM_BulletTrailV2;                                      // 0x0250   (0x0008)  
	float                                              Attack_HitT_01;                                             // 0x0258   (0x0004)  


	/// Functions
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_Warrior01_Fire_BP.NPC_Warrior01_Fire_BP_C.Completed_E0759114416F5329F8106D97F60F749A
	// void Completed_E0759114416F5329F8106D97F60F749A(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_Warrior01_Fire_BP.NPC_Warrior01_Fire_BP_C.BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_Warrior01_Fire_BP.NPC_Warrior01_Fire_BP_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_Warrior01_Fire_BP.NPC_Warrior01_Fire_BP_C.BndEvt__PlayAudioTouch_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__PlayAudioTouch_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_Warrior01_Fire_BP.NPC_Warrior01_Fire_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_Warrior01_Fire_BP.NPC_Warrior01_Fire_BP_C.ExecuteUbergraph_NPC_Warrior01_Fire_BP
	// void ExecuteUbergraph_NPC_Warrior01_Fire_BP(int32_t EntryPoint);                                                         // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/Warrior/Warrior01/BP/WarriorDunBoken_BP.WarriorDunBoken_BP_C
/// Size: 0x0248 (584 bytes) (0x000220 - 0x000248) align 8 MaxSize: 0x0248
class AWarriorDunBoken_BP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UParticleSystemComponent*                    BOOM;                                                       // 0x0228   (0x0008)  
	class URadialForceComponent*                       RadialForce;                                                // 0x0230   (0x0008)  
	class UDestructibleComponent*                      _3D_ZhuangZhong_DM;                                         // 0x0238   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0240   (0x0008)  


	/// Functions
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/WarriorDunBoken_BP.WarriorDunBoken_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/WarriorDunBoken_BP.WarriorDunBoken_BP_C.ExecuteUbergraph_WarriorDunBoken_BP
	// void ExecuteUbergraph_WarriorDunBoken_BP(int32_t EntryPoint);                                                            // [0x148e900] Final                
};

/// Class /Game/NPCBMI/Warrior/Warrior01/BP/NPC_Warrior01_Fire_PlayerBP.NPC_Warrior01_Fire_PlayerBP_C
/// Size: 0x0249 (585 bytes) (0x000220 - 0x000249) align 8 MaxSize: 0x0249
class ANPC_Warrior01_Fire_PlayerBP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UCapsuleComponent*                           FireHitBox;                                                 // 0x0228   (0x0008)  
	class UProjectileMovementComponent*                ProjectileMovement;                                         // 0x0230   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0238   (0x0008)  
	class UParticleSystemComponent*                    P_H_LRM_BulletTrailV2;                                      // 0x0240   (0x0008)  
	bool                                               IsDestory_;                                                 // 0x0248   (0x0001)  


	/// Functions
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_Warrior01_Fire_PlayerBP.NPC_Warrior01_Fire_PlayerBP_C.BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_Warrior01_Fire_PlayerBP.NPC_Warrior01_Fire_PlayerBP_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_Warrior01_Fire_PlayerBP.NPC_Warrior01_Fire_PlayerBP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_Warrior01_Fire_PlayerBP.NPC_Warrior01_Fire_PlayerBP_C.ExecuteUbergraph_NPC_Warrior01_Fire_PlayerBP
	// void ExecuteUbergraph_NPC_Warrior01_Fire_PlayerBP(int32_t EntryPoint);                                                   // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/Warrior/Warrior01/BP/NPC_Warrior_BowFire_BP.NPC_Warrior_BowFire_BP_C
/// Size: 0x026C (620 bytes) (0x000220 - 0x00026C) align 8 MaxSize: 0x026C
class ANPC_Warrior_BowFire_BP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0228   (0x0008)  
	class UCapsuleComponent*                           FireHitBox;                                                 // 0x0230   (0x0008)  
	class UParticleSystemComponent*                    VFX_fire_Arrow;                                             // 0x0238   (0x0008)  
	class UStaticMeshComponent*                        NPC_Warrior_BowArrow;                                       // 0x0240   (0x0008)  
	class USphereComponent*                            PlayAudioTouch;                                             // 0x0248   (0x0008)  
	class UAudioComponent*                             Audio;                                                      // 0x0250   (0x0008)  
	class UProjectileMovementComponent*                ProjectileMovement;                                         // 0x0258   (0x0008)  
	class UParticleSystemComponent*                    P_H_LRM_BulletTrailV2;                                      // 0x0260   (0x0008)  
	float                                              Hit;                                                        // 0x0268   (0x0004)  


	/// Functions
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_Warrior_BowFire_BP.NPC_Warrior_BowFire_BP_C.Completed_EC4B1DA141CD2C25285536A649AE2583
	// void Completed_EC4B1DA141CD2C25285536A649AE2583(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_Warrior_BowFire_BP.NPC_Warrior_BowFire_BP_C.BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_Warrior_BowFire_BP.NPC_Warrior_BowFire_BP_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_Warrior_BowFire_BP.NPC_Warrior_BowFire_BP_C.BndEvt__PlayAudioTouch_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__PlayAudioTouch_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_Warrior_BowFire_BP.NPC_Warrior_BowFire_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_Warrior_BowFire_BP.NPC_Warrior_BowFire_BP_C.ExecuteUbergraph_NPC_Warrior_BowFire_BP
	// void ExecuteUbergraph_NPC_Warrior_BowFire_BP(int32_t EntryPoint);                                                        // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/Warrior/Warrior01/BP/NPC_WarriorBow_Fire_PlayerBP.NPC_WarriorBow_Fire_PlayerBP_C
/// Size: 0x0251 (593 bytes) (0x000220 - 0x000251) align 8 MaxSize: 0x0251
class ANPC_WarriorBow_Fire_PlayerBP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UStaticMeshComponent*                        NPC_Warrior_BowArrow;                                       // 0x0228   (0x0008)  
	class UCapsuleComponent*                           FireHitBox;                                                 // 0x0230   (0x0008)  
	class UProjectileMovementComponent*                ProjectileMovement;                                         // 0x0238   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0240   (0x0008)  
	class UParticleSystemComponent*                    P_H_LRM_BulletTrailV2;                                      // 0x0248   (0x0008)  
	bool                                               IsDestory_;                                                 // 0x0250   (0x0001)  


	/// Functions
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_WarriorBow_Fire_PlayerBP.NPC_WarriorBow_Fire_PlayerBP_C.BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_WarriorBow_Fire_PlayerBP.NPC_WarriorBow_Fire_PlayerBP_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_WarriorBow_Fire_PlayerBP.NPC_WarriorBow_Fire_PlayerBP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_WarriorBow_Fire_PlayerBP.NPC_WarriorBow_Fire_PlayerBP_C.ExecuteUbergraph_NPC_WarriorBow_Fire_PlayerBP
	// void ExecuteUbergraph_NPC_WarriorBow_Fire_PlayerBP(int32_t EntryPoint);                                                  // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/SiMiaoBoss/Mod/NPC_BMI_SiMiaoBoss_AnimBlueprint.NPC_BMI_SiMiaoBoss_AnimBlueprint_C
/// Size: 0x0915 (2325 bytes) (0x0002B8 - 0x000915) align 16 MaxSize: 0x0915
class UNPC_BMI_SiMiaoBoss_AnimBlueprint_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x02F8   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x0340   (0x00A0)  
	FAnimNode_Slot                                     AnimGraphNode_Slot0;                                        // 0x03E0   (0x0048)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x0428   (0x00E8)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x0510   (0x0020)  
	FAnimNode_TwoBoneIK                                AnimGraphNode_TwoBoneIK;                                    // 0x0530   (0x01E0)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0710   (0x0020)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool1;                             // 0x0730   (0x00A0)  
	FAnimNode_Slot                                     AnimGraphNode_Slot2;                                        // 0x07D0   (0x0048)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer3;                            // 0x0818   (0x00E8)  
	float                                              Speed;                                                      // 0x0900   (0x0004)  
	bool                                               IsDead;                                                     // 0x0904   (0x0001)  
	bool                                               IsWalking;                                                  // 0x0905   (0x0001)  
	bool                                               bIsInAir;                                                   // 0x0906   (0x0001)  
	bool                                               PlayBlendSpace1D;                                           // 0x0907   (0x0001)  
	FVector                                            IKHandL;                                                    // 0x0908   (0x000C)  
	bool                                               IsRunOrBreak_;                                              // 0x0914   (0x0001)  


	/// Functions
	// Function /Game/NPCBMI/SiMiaoBoss/Mod/NPC_BMI_SiMiaoBoss_AnimBlueprint.NPC_BMI_SiMiaoBoss_AnimBlueprint_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x148e900] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/SiMiaoBoss/Mod/NPC_BMI_SiMiaoBoss_AnimBlueprint.NPC_BMI_SiMiaoBoss_AnimBlueprint_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/SiMiaoBoss/Mod/NPC_BMI_SiMiaoBoss_AnimBlueprint.NPC_BMI_SiMiaoBoss_AnimBlueprint_C.AnimNotify_SpawnZhaDi
	// void AnimNotify_SpawnZhaDi();                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/SiMiaoBoss/Mod/NPC_BMI_SiMiaoBoss_AnimBlueprint.NPC_BMI_SiMiaoBoss_AnimBlueprint_C.AnimNotify_OpenHit_Event
	// void AnimNotify_OpenHit_Event();                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/SiMiaoBoss/Mod/NPC_BMI_SiMiaoBoss_AnimBlueprint.NPC_BMI_SiMiaoBoss_AnimBlueprint_C.AnimNotify_CloseHit_Event
	// void AnimNotify_CloseHit_Event();                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/SiMiaoBoss/Mod/NPC_BMI_SiMiaoBoss_AnimBlueprint.NPC_BMI_SiMiaoBoss_AnimBlueprint_C.AnimNotify_FarFire_Ground
	// void AnimNotify_FarFire_Ground();                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/SiMiaoBoss/Mod/NPC_BMI_SiMiaoBoss_AnimBlueprint.NPC_BMI_SiMiaoBoss_AnimBlueprint_C.AnimNotify_FarFireLight
	// void AnimNotify_FarFireLight();                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/SiMiaoBoss/Mod/NPC_BMI_SiMiaoBoss_AnimBlueprint.NPC_BMI_SiMiaoBoss_AnimBlueprint_C.AnimNotify_FarFireLight2
	// void AnimNotify_FarFireLight2();                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/SiMiaoBoss/Mod/NPC_BMI_SiMiaoBoss_AnimBlueprint.NPC_BMI_SiMiaoBoss_AnimBlueprint_C.AnimNotify_OpenHit_Event2
	// void AnimNotify_OpenHit_Event2();                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/SiMiaoBoss/Mod/NPC_BMI_SiMiaoBoss_AnimBlueprint.NPC_BMI_SiMiaoBoss_AnimBlueprint_C.AnimNotify_Play_FireOh
	// void AnimNotify_Play_FireOh();                                                                                           // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/SiMiaoBoss/Mod/NPC_BMI_SiMiaoBoss_AnimBlueprint.NPC_BMI_SiMiaoBoss_AnimBlueprint_C.AnimNotify_Play_XuLiOh
	// void AnimNotify_Play_XuLiOh();                                                                                           // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/SiMiaoBoss/Mod/NPC_BMI_SiMiaoBoss_AnimBlueprint.NPC_BMI_SiMiaoBoss_AnimBlueprint_C.AnimNotify_ShunTalk
	// void AnimNotify_ShunTalk();                                                                                              // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/SiMiaoBoss/Mod/NPC_BMI_SiMiaoBoss_AnimBlueprint.NPC_BMI_SiMiaoBoss_AnimBlueprint_C.ExecuteUbergraph_NPC_BMI_SiMiaoBoss_AnimBlueprint
	// void ExecuteUbergraph_NPC_BMI_SiMiaoBoss_AnimBlueprint(int32_t EntryPoint);                                              // [0x148e900] Final                
};

/// Class /Game/NPCBMI/SiMiaoBoss/BP/SiMiaoBossFarFire_SwordLight.SiMiaoBossFarFire_SwordLight_45_C
/// Size: 0x026C (620 bytes) (0x000220 - 0x00026C) align 8 MaxSize: 0x026C
class ASiMiaoBossFarFire_SwordLight_45_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class URadialForceComponent*                       RadialForce;                                                // 0x0228   (0x0008)  
	class UArrowComponent*                             ParSpawnLoc;                                                // 0x0230   (0x0008)  
	class UBoxComponent*                               FireHitBox;                                                 // 0x0238   (0x0008)  
	class USphereComponent*                            PlayAudioTouch;                                             // 0x0240   (0x0008)  
	class UAudioComponent*                             Audio;                                                      // 0x0248   (0x0008)  
	class UProjectileMovementComponent*                ProjectileMovement;                                         // 0x0250   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0258   (0x0008)  
	class UParticleSystemComponent*                    P_H_LRM_BulletTrailV2;                                      // 0x0260   (0x0008)  
	float                                              Attack_HitT_01;                                             // 0x0268   (0x0004)  


	/// Functions
	// Function /Game/NPCBMI/SiMiaoBoss/BP/SiMiaoBossFarFire_SwordLight.SiMiaoBossFarFire_SwordLight_45_C.Completed_139D7FC941EEBDE696828BB288F5BB63
	// void Completed_139D7FC941EEBDE696828BB288F5BB63(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/SiMiaoBoss/BP/SiMiaoBossFarFire_SwordLight.SiMiaoBossFarFire_SwordLight_45_C.BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/SiMiaoBoss/BP/SiMiaoBossFarFire_SwordLight.SiMiaoBossFarFire_SwordLight_45_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/SiMiaoBoss/BP/SiMiaoBossFarFire_SwordLight.SiMiaoBossFarFire_SwordLight_45_C.BndEvt__PlayAudioTouch_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__PlayAudioTouch_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/SiMiaoBoss/BP/SiMiaoBossFarFire_SwordLight.SiMiaoBossFarFire_SwordLight_45_C.PlayPar
	// void PlayPar();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/SiMiaoBoss/BP/SiMiaoBossFarFire_SwordLight.SiMiaoBossFarFire_SwordLight_45_C.Fire
	// void Fire();                                                                                                             // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/SiMiaoBoss/BP/SiMiaoBossFarFire_SwordLight.SiMiaoBossFarFire_SwordLight_45_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/SiMiaoBoss/BP/SiMiaoBossFarFire_SwordLight.SiMiaoBossFarFire_SwordLight_45_C.ExecuteUbergraph_SiMiaoBossFarFire_SwordLight
	// void ExecuteUbergraph_SiMiaoBossFarFire_SwordLight(int32_t EntryPoint);                                                  // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/SiMiaoBoss/BP/SiMiaoBossFarFire_SwordLight.SiMiaoBossFarFire_SwordLight_90_C
/// Size: 0x026C (620 bytes) (0x000220 - 0x00026C) align 8 MaxSize: 0x026C
class ASiMiaoBossFarFire_SwordLight_90_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class URadialForceComponent*                       RadialForce;                                                // 0x0228   (0x0008)  
	class UArrowComponent*                             ParSpawnLoc;                                                // 0x0230   (0x0008)  
	class UBoxComponent*                               FireHitBox;                                                 // 0x0238   (0x0008)  
	class USphereComponent*                            PlayAudioTouch;                                             // 0x0240   (0x0008)  
	class UAudioComponent*                             Audio;                                                      // 0x0248   (0x0008)  
	class UProjectileMovementComponent*                ProjectileMovement;                                         // 0x0250   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0258   (0x0008)  
	class UParticleSystemComponent*                    P_H_LRM_BulletTrailV2;                                      // 0x0260   (0x0008)  
	float                                              Hit;                                                        // 0x0268   (0x0004)  


	/// Functions
	// Function /Game/NPCBMI/SiMiaoBoss/BP/SiMiaoBossFarFire_SwordLight.SiMiaoBossFarFire_SwordLight_90_C.Completed_E213325745252813135D599362D18E2A
	// void Completed_E213325745252813135D599362D18E2A(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/SiMiaoBoss/BP/SiMiaoBossFarFire_SwordLight.SiMiaoBossFarFire_SwordLight_90_C.BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/SiMiaoBoss/BP/SiMiaoBossFarFire_SwordLight.SiMiaoBossFarFire_SwordLight_90_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/SiMiaoBoss/BP/SiMiaoBossFarFire_SwordLight.SiMiaoBossFarFire_SwordLight_90_C.BndEvt__PlayAudioTouch_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__PlayAudioTouch_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/SiMiaoBoss/BP/SiMiaoBossFarFire_SwordLight.SiMiaoBossFarFire_SwordLight_90_C.PlayPar
	// void PlayPar();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/SiMiaoBoss/BP/SiMiaoBossFarFire_SwordLight.SiMiaoBossFarFire_SwordLight_90_C.Fire
	// void Fire();                                                                                                             // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/SiMiaoBoss/BP/SiMiaoBossFarFire_SwordLight.SiMiaoBossFarFire_SwordLight_90_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/SiMiaoBoss/BP/SiMiaoBossFarFire_SwordLight.SiMiaoBossFarFire_SwordLight_90_C.ExecuteUbergraph_SiMiaoBossFarFire_SwordLight
	// void ExecuteUbergraph_SiMiaoBossFarFire_SwordLight(int32_t EntryPoint);                                                  // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/SiMiaoBoss/BP/SiMiaoBossFarFire_SwordLight2_Player.SiMiaoBossFarFire_SwordLight2_Player_C
/// Size: 0x0245 (581 bytes) (0x000220 - 0x000245) align 8 MaxSize: 0x0245
class ASiMiaoBossFarFire_SwordLight2_Player_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UProjectileMovementComponent*                ProjectileMovement;                                         // 0x0228   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0230   (0x0008)  
	class UParticleSystemComponent*                    P_H_LRM_BulletTrailV2;                                      // 0x0238   (0x0008)  
	float                                              Hit;                                                        // 0x0240   (0x0004)  
	bool                                               IsDestory_;                                                 // 0x0244   (0x0001)  


	/// Functions
	// Function /Game/NPCBMI/SiMiaoBoss/BP/SiMiaoBossFarFire_SwordLight2_Player.SiMiaoBossFarFire_SwordLight2_Player_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/SiMiaoBoss/BP/SiMiaoBossFarFire_SwordLight2_Player.SiMiaoBossFarFire_SwordLight2_Player_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/SiMiaoBoss/BP/SiMiaoBossFarFire_SwordLight2_Player.SiMiaoBossFarFire_SwordLight2_Player_C.ExecuteUbergraph_SiMiaoBossFarFire_SwordLight2_Player
	// void ExecuteUbergraph_SiMiaoBossFarFire_SwordLight2_Player(int32_t EntryPoint);                                          // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/SiMiaoBoss/BP/SiMiaoBossFarFire_SwordLight_Player.SiMiaoBossFarFire_SwordLight_Player_C
/// Size: 0x0245 (581 bytes) (0x000220 - 0x000245) align 8 MaxSize: 0x0245
class ASiMiaoBossFarFire_SwordLight_Player_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UProjectileMovementComponent*                ProjectileMovement;                                         // 0x0228   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0230   (0x0008)  
	class UParticleSystemComponent*                    P_H_LRM_BulletTrailV2;                                      // 0x0238   (0x0008)  
	float                                              Hit;                                                        // 0x0240   (0x0004)  
	bool                                               IsDestory_;                                                 // 0x0244   (0x0001)  


	/// Functions
	// Function /Game/NPCBMI/SiMiaoBoss/BP/SiMiaoBossFarFire_SwordLight_Player.SiMiaoBossFarFire_SwordLight_Player_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/SiMiaoBoss/BP/SiMiaoBossFarFire_SwordLight_Player.SiMiaoBossFarFire_SwordLight_Player_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/SiMiaoBoss/BP/SiMiaoBossFarFire_SwordLight_Player.SiMiaoBossFarFire_SwordLight_Player_C.ExecuteUbergraph_SiMiaoBossFarFire_SwordLight_Player
	// void ExecuteUbergraph_SiMiaoBossFarFire_SwordLight_Player(int32_t EntryPoint);                                           // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/RockLion/Mod/NPC_BMI_RockLion_AnimBlueprint.NPC_BMI_RockLion_AnimBlueprint_C
/// Size: 0x06A1 (1697 bytes) (0x0002B8 - 0x0006A1) align 16 MaxSize: 0x06A1
class UNPC_BMI_RockLion_AnimBlueprint_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x02F8   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x0340   (0x00A0)  
	FAnimNode_Slot                                     AnimGraphNode_Slot0;                                        // 0x03E0   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool1;                             // 0x0428   (0x00A0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x04C8   (0x00E8)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer2;                            // 0x05B0   (0x00E8)  
	float                                              Speed;                                                      // 0x0698   (0x0004)  
	bool                                               IsWalking;                                                  // 0x069C   (0x0001)  
	bool                                               bIsInAir;                                                   // 0x069D   (0x0001)  
	bool                                               PlayBlendSpace1D;                                           // 0x069E   (0x0001)  
	bool                                               IsDead;                                                     // 0x069F   (0x0001)  
	bool                                               A_;                                                         // 0x06A0   (0x0001)  


	/// Functions
	// Function /Game/NPCBMI/RockLion/Mod/NPC_BMI_RockLion_AnimBlueprint.NPC_BMI_RockLion_AnimBlueprint_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x148e900] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/RockLion/Mod/NPC_BMI_RockLion_AnimBlueprint.NPC_BMI_RockLion_AnimBlueprint_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/RockLion/Mod/NPC_BMI_RockLion_AnimBlueprint.NPC_BMI_RockLion_AnimBlueprint_C.AnimNotify_Open_Hit
	// void AnimNotify_Open_Hit();                                                                                              // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/RockLion/Mod/NPC_BMI_RockLion_AnimBlueprint.NPC_BMI_RockLion_AnimBlueprint_C.AnimNotify_End_Hit
	// void AnimNotify_End_Hit();                                                                                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/RockLion/Mod/NPC_BMI_RockLion_AnimBlueprint.NPC_BMI_RockLion_AnimBlueprint_C.AnimNotify_ZhaDi
	// void AnimNotify_ZhaDi();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/RockLion/Mod/NPC_BMI_RockLion_AnimBlueprint.NPC_BMI_RockLion_AnimBlueprint_C.AnimNotify_FarFire
	// void AnimNotify_FarFire();                                                                                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/RockLion/Mod/NPC_BMI_RockLion_AnimBlueprint.NPC_BMI_RockLion_AnimBlueprint_C.ExecuteUbergraph_NPC_BMI_RockLion_AnimBlueprint
	// void ExecuteUbergraph_NPC_BMI_RockLion_AnimBlueprint(int32_t EntryPoint);                                                // [0x148e900] Final                
};

/// Class /Game/NPCBMI/Pig/Mod/NPC_BMI_Pig_AnimBluePrint.NPC_BMI_Pig_AnimBluePrint_C
/// Size: 0x04D1 (1233 bytes) (0x0002B8 - 0x0004D1) align 16 MaxSize: 0x04D1
class UNPC_BMI_Pig_AnimBluePrint_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x02F8   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x0340   (0x00A0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x03E0   (0x00E8)  
	bool                                               PlayBlendSpace1D;                                           // 0x04C8   (0x0001)  
	bool                                               bIsInAir;                                                   // 0x04C9   (0x0001)  
	bool                                               IsWalking;                                                  // 0x04CA   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x04CB   (0x0001)  MISSED
	float                                              Speed;                                                      // 0x04CC   (0x0004)  
	bool                                               IsDead;                                                     // 0x04D0   (0x0001)  


	/// Functions
	// Function /Game/NPCBMI/Pig/Mod/NPC_BMI_Pig_AnimBluePrint.NPC_BMI_Pig_AnimBluePrint_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x148e900] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/Pig/Mod/NPC_BMI_Pig_AnimBluePrint.NPC_BMI_Pig_AnimBluePrint_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/Pig/Mod/NPC_BMI_Pig_AnimBluePrint.NPC_BMI_Pig_AnimBluePrint_C.AnimNotify_Open_Hit
	// void AnimNotify_Open_Hit();                                                                                              // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/Pig/Mod/NPC_BMI_Pig_AnimBluePrint.NPC_BMI_Pig_AnimBluePrint_C.AnimNotify_End_Hit
	// void AnimNotify_End_Hit();                                                                                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/Pig/Mod/NPC_BMI_Pig_AnimBluePrint.NPC_BMI_Pig_AnimBluePrint_C.ExecuteUbergraph_NPC_BMI_Pig_AnimBluePrint
	// void ExecuteUbergraph_NPC_BMI_Pig_AnimBluePrint(int32_t EntryPoint);                                                     // [0x148e900] Final                
};

/// Class /Game/NPCBMI/IronArmy/Mod/NPC_BMI_IronArmy_AnimBlueprint.NPC_BMI_IronArmy_AnimBlueprint_C
/// Size: 0x06A3 (1699 bytes) (0x0002B8 - 0x0006A3) align 16 MaxSize: 0x06A3
class UNPC_BMI_IronArmy_AnimBlueprint_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x02F8   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x0340   (0x00A0)  
	FAnimNode_Slot                                     AnimGraphNode_Slot0;                                        // 0x03E0   (0x0048)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x0428   (0x00E8)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool1;                             // 0x0510   (0x00A0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer2;                            // 0x05B0   (0x00E8)  
	bool                                               bIsInAir;                                                   // 0x0698   (0x0001)  
	bool                                               IsWalking;                                                  // 0x0699   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x069A   (0x0002)  MISSED
	float                                              Speed;                                                      // 0x069C   (0x0004)  
	bool                                               PlayBlendSpace1D;                                           // 0x06A0   (0x0001)  
	bool                                               IsDead;                                                     // 0x06A1   (0x0001)  
	bool                                               IronArmy2_;                                                 // 0x06A2   (0x0001)  


	/// Functions
	// Function /Game/NPCBMI/IronArmy/Mod/NPC_BMI_IronArmy_AnimBlueprint.NPC_BMI_IronArmy_AnimBlueprint_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x148e900] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/IronArmy/Mod/NPC_BMI_IronArmy_AnimBlueprint.NPC_BMI_IronArmy_AnimBlueprint_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/IronArmy/Mod/NPC_BMI_IronArmy_AnimBlueprint.NPC_BMI_IronArmy_AnimBlueprint_C.AnimNotify_Event_Hit01_Start
	// void AnimNotify_Event_Hit01_Start();                                                                                     // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/IronArmy/Mod/NPC_BMI_IronArmy_AnimBlueprint.NPC_BMI_IronArmy_AnimBlueprint_C.AnimNotify_Event_Hit01_End
	// void AnimNotify_Event_Hit01_End();                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/IronArmy/Mod/NPC_BMI_IronArmy_AnimBlueprint.NPC_BMI_IronArmy_AnimBlueprint_C.AnimNotify_Event_HitGorund
	// void AnimNotify_Event_HitGorund();                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/IronArmy/Mod/NPC_BMI_IronArmy_AnimBlueprint.NPC_BMI_IronArmy_AnimBlueprint_C.AnimNotify_Event_Hit_FarAttack
	// void AnimNotify_Event_Hit_FarAttack();                                                                                   // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/IronArmy/Mod/NPC_BMI_IronArmy_AnimBlueprint.NPC_BMI_IronArmy_AnimBlueprint_C.AnimNotify_Event_HitGroundBig
	// void AnimNotify_Event_HitGroundBig();                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/IronArmy/Mod/NPC_BMI_IronArmy_AnimBlueprint.NPC_BMI_IronArmy_AnimBlueprint_C.AnimNotify_PlayShake
	// void AnimNotify_PlayShake();                                                                                             // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/IronArmy/Mod/NPC_BMI_IronArmy_AnimBlueprint.NPC_BMI_IronArmy_AnimBlueprint_C.AnimNotify_TraceFootPar
	// void AnimNotify_TraceFootPar();                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/IronArmy/Mod/NPC_BMI_IronArmy_AnimBlueprint.NPC_BMI_IronArmy_AnimBlueprint_C.ExecuteUbergraph_NPC_BMI_IronArmy_AnimBlueprint
	// void ExecuteUbergraph_NPC_BMI_IronArmy_AnimBlueprint(int32_t EntryPoint);                                                // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/Warrior/Warrior01/BP/NPC_Warrior01_ZhaDi_BP2.NPC_Warrior01_ZhaDi_BP2_C
/// Size: 0x0254 (596 bytes) (0x000220 - 0x000254) align 8 MaxSize: 0x0254
class ANPC_Warrior01_ZhaDi_BP2_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UParticleSystemComponent*                    P_Hyper_LM_Explo_HitWater;                                  // 0x0228   (0x0008)  
	class UArrowComponent*                             Trace;                                                      // 0x0230   (0x0008)  
	class UParticleSystemComponent*                    P_Hardknocks_AOE_AIZhaDi;                                   // 0x0238   (0x0008)  
	class UCapsuleComponent*                           FireHitBox;                                                 // 0x0240   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0248   (0x0008)  
	float                                              Base_Damage;                                                // 0x0250   (0x0004)  


	/// Functions
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_Warrior01_ZhaDi_BP2.NPC_Warrior01_ZhaDi_BP2_C.Completed_9495CF894D64DCC6EDFF558191F1055A
	// void Completed_9495CF894D64DCC6EDFF558191F1055A(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_Warrior01_ZhaDi_BP2.NPC_Warrior01_ZhaDi_BP2_C.BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_Warrior01_ZhaDi_BP2.NPC_Warrior01_ZhaDi_BP2_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_Warrior01_ZhaDi_BP2.NPC_Warrior01_ZhaDi_BP2_C.ExecuteUbergraph_NPC_Warrior01_ZhaDi_BP2
	// void ExecuteUbergraph_NPC_Warrior01_ZhaDi_BP2(int32_t EntryPoint);                                                       // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/Warrior/Warrior01/BP/NPC_IronAmry_Fire_BP.NPC_IronAmry_Fire_BP_C
/// Size: 0x026C (620 bytes) (0x000220 - 0x00026C) align 8 MaxSize: 0x026C
class ANPC_IronAmry_Fire_BP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UAudioComponent*                             AudioFire;                                                  // 0x0228   (0x0008)  
	class UStaticMeshComponent*                        Missile;                                                    // 0x0230   (0x0008)  
	class USphereComponent*                            PlayAudioTouch;                                             // 0x0238   (0x0008)  
	class UAudioComponent*                             Audio;                                                      // 0x0240   (0x0008)  
	class UCapsuleComponent*                           FireHitBox;                                                 // 0x0248   (0x0008)  
	class UProjectileMovementComponent*                ProjectileMovement;                                         // 0x0250   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0258   (0x0008)  
	class UParticleSystemComponent*                    P_H_LRM_BulletTrailV2;                                      // 0x0260   (0x0008)  
	float                                              Attack_HitT_01;                                             // 0x0268   (0x0004)  


	/// Functions
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_IronAmry_Fire_BP.NPC_IronAmry_Fire_BP_C.Completed_7238D5984DCB2B9C85053FB5A67B1382
	// void Completed_7238D5984DCB2B9C85053FB5A67B1382(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_IronAmry_Fire_BP.NPC_IronAmry_Fire_BP_C.BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_IronAmry_Fire_BP.NPC_IronAmry_Fire_BP_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_IronAmry_Fire_BP.NPC_IronAmry_Fire_BP_C.BndEvt__PlayAudioTouch_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__PlayAudioTouch_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_IronAmry_Fire_BP.NPC_IronAmry_Fire_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_IronAmry_Fire_BP.NPC_IronAmry_Fire_BP_C.ExecuteUbergraph_NPC_IronAmry_Fire_BP
	// void ExecuteUbergraph_NPC_IronAmry_Fire_BP(int32_t EntryPoint);                                                          // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/Warrior/Warrior01/BP/NPC_IronAmry_Fire_PlayerBP.NPC_IronAmry_Fire_PlayerBP_C
/// Size: 0x0251 (593 bytes) (0x000220 - 0x000251) align 8 MaxSize: 0x0251
class ANPC_IronAmry_Fire_PlayerBP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UStaticMeshComponent*                        Missile;                                                    // 0x0228   (0x0008)  
	class UCapsuleComponent*                           FireHitBox;                                                 // 0x0230   (0x0008)  
	class UProjectileMovementComponent*                ProjectileMovement;                                         // 0x0238   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0240   (0x0008)  
	class UParticleSystemComponent*                    P_H_LRM_BulletTrailV2;                                      // 0x0248   (0x0008)  
	bool                                               IsDestory_;                                                 // 0x0250   (0x0001)  


	/// Functions
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_IronAmry_Fire_PlayerBP.NPC_IronAmry_Fire_PlayerBP_C.BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_IronAmry_Fire_PlayerBP.NPC_IronAmry_Fire_PlayerBP_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_IronAmry_Fire_PlayerBP.NPC_IronAmry_Fire_PlayerBP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/Warrior/Warrior01/BP/NPC_IronAmry_Fire_PlayerBP.NPC_IronAmry_Fire_PlayerBP_C.ExecuteUbergraph_NPC_IronAmry_Fire_PlayerBP
	// void ExecuteUbergraph_NPC_IronAmry_Fire_PlayerBP(int32_t EntryPoint);                                                    // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBoss_RockDe.NPC_FYQBoss_RockDe_C
/// Size: 0x0240 (576 bytes) (0x000220 - 0x000240) align 8 MaxSize: 0x0240
class ANPC_FYQBoss_RockDe_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class URadialForceComponent*                       RadialForce;                                                // 0x0228   (0x0008)  
	class UDestructibleComponent*                      Destructible;                                               // 0x0230   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0238   (0x0008)  


	/// Functions
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBoss_RockDe.NPC_FYQBoss_RockDe_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBoss_RockDe.NPC_FYQBoss_RockDe_C.ExecuteUbergraph_NPC_FYQBoss_RockDe
	// void ExecuteUbergraph_NPC_FYQBoss_RockDe(int32_t EntryPoint);                                                            // [0x148e900] Final                
};

/// Class /Game/NPCBMI/DunArmy/Mod/NPC_BMI_DunArmy_AnimBlueprint.NPC_BMI_DunArmy_AnimBlueprint_C
/// Size: 0x04D1 (1233 bytes) (0x0002B8 - 0x0004D1) align 16 MaxSize: 0x04D1
class UNPC_BMI_DunArmy_AnimBlueprint_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x02F8   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x0340   (0x00A0)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x03E0   (0x00E8)  
	bool                                               IsDead;                                                     // 0x04C8   (0x0001)  
	bool                                               bIsInAir;                                                   // 0x04C9   (0x0001)  
	bool                                               PlayBlendSpace1D;                                           // 0x04CA   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x04CB   (0x0001)  MISSED
	float                                              Speed;                                                      // 0x04CC   (0x0004)  
	bool                                               IsWalking;                                                  // 0x04D0   (0x0001)  


	/// Functions
	// Function /Game/NPCBMI/DunArmy/Mod/NPC_BMI_DunArmy_AnimBlueprint.NPC_BMI_DunArmy_AnimBlueprint_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x148e900] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/DunArmy/Mod/NPC_BMI_DunArmy_AnimBlueprint.NPC_BMI_DunArmy_AnimBlueprint_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/DunArmy/Mod/NPC_BMI_DunArmy_AnimBlueprint.NPC_BMI_DunArmy_AnimBlueprint_C.AnimNotify_Open_Hit
	// void AnimNotify_Open_Hit();                                                                                              // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/DunArmy/Mod/NPC_BMI_DunArmy_AnimBlueprint.NPC_BMI_DunArmy_AnimBlueprint_C.AnimNotify_End_Hit
	// void AnimNotify_End_Hit();                                                                                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/DunArmy/Mod/NPC_BMI_DunArmy_AnimBlueprint.NPC_BMI_DunArmy_AnimBlueprint_C.AnimNotify_Open_HitEdm
	// void AnimNotify_Open_HitEdm();                                                                                           // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/DunArmy/Mod/NPC_BMI_DunArmy_AnimBlueprint.NPC_BMI_DunArmy_AnimBlueprint_C.AnimNotify_Close_HitEdm
	// void AnimNotify_Close_HitEdm();                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/DunArmy/Mod/NPC_BMI_DunArmy_AnimBlueprint.NPC_BMI_DunArmy_AnimBlueprint_C.ExecuteUbergraph_NPC_BMI_DunArmy_AnimBlueprint
	// void ExecuteUbergraph_NPC_BMI_DunArmy_AnimBlueprint(int32_t EntryPoint);                                                 // [0x148e900] Final                
};

/// Class /Game/NPCBMI/DunArmy/BP/DunBoken_BP.DunBoken_BP_C
/// Size: 0x0248 (584 bytes) (0x000220 - 0x000248) align 8 MaxSize: 0x0248
class ADunBoken_BP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UParticleSystemComponent*                    BOOM;                                                       // 0x0228   (0x0008)  
	class URadialForceComponent*                       RadialForce;                                                // 0x0230   (0x0008)  
	class UDestructibleComponent*                      _3D_ZhuangZhong_DM;                                         // 0x0238   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0240   (0x0008)  


	/// Functions
	// Function /Game/NPCBMI/DunArmy/BP/DunBoken_BP.DunBoken_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/DunArmy/BP/DunBoken_BP.DunBoken_BP_C.ExecuteUbergraph_DunBoken_BP
	// void ExecuteUbergraph_DunBoken_BP(int32_t EntryPoint);                                                                   // [0x148e900] Final                
};

/// Class /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_HandFire_BP.GuLouBoss_HandFire_BP_C
/// Size: 0x0240 (576 bytes) (0x000220 - 0x000240) align 8 MaxSize: 0x0240
class AGuLouBoss_HandFire_BP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UActorSequenceComponent*                     ActorSequence;                                              // 0x0228   (0x0008)  
	class UBoxComponent*                               HitBox;                                                     // 0x0230   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0238   (0x0008)  


	/// Functions
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_HandFire_BP.GuLouBoss_HandFire_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_HandFire_BP.GuLouBoss_HandFire_BP_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_HandFire_BP.GuLouBoss_HandFire_BP_C.ExecuteUbergraph_GuLouBoss_HandFire_BP
	// void ExecuteUbergraph_GuLouBoss_HandFire_BP(int32_t EntryPoint);                                                         // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/GuLouBoss/Mod/NPC_BMI_GuLousBoss_AnimBlueprint.NPC_BMI_GuLousBoss_AnimBlueprint_C
/// Size: 0x0518 (1304 bytes) (0x0002B8 - 0x000518) align 16 MaxSize: 0x0518
class UNPC_BMI_GuLousBoss_AnimBlueprint_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x02F8   (0x0048)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x0340   (0x00A0)  
	FAnimNode_Slot                                     AnimGraphNode_Slot0;                                        // 0x03E0   (0x0048)  
	FAnimNode_BlendSpacePlayer                         AnimGraphNode_BlendSpacePlayer;                             // 0x0428   (0x00E8)  
	bool                                               PlayBlendSpace1D;                                           // 0x0510   (0x0001)  
	bool                                               bIsInAir;                                                   // 0x0511   (0x0001)  
	bool                                               IsWalking;                                                  // 0x0512   (0x0001)  
	bool                                               IsDead;                                                     // 0x0513   (0x0001)  
	float                                              Speed;                                                      // 0x0514   (0x0004)  


	/// Functions
	// Function /Game/NPCBMI/GuLouBoss/Mod/NPC_BMI_GuLousBoss_AnimBlueprint.NPC_BMI_GuLousBoss_AnimBlueprint_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x148e900] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/Mod/NPC_BMI_GuLousBoss_AnimBlueprint.NPC_BMI_GuLousBoss_AnimBlueprint_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/Mod/NPC_BMI_GuLousBoss_AnimBlueprint.NPC_BMI_GuLousBoss_AnimBlueprint_C.AnimNotify_OpenFirePar
	// void AnimNotify_OpenFirePar();                                                                                           // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/Mod/NPC_BMI_GuLousBoss_AnimBlueprint.NPC_BMI_GuLousBoss_AnimBlueprint_C.AnimNotify_Open_FireHit
	// void AnimNotify_Open_FireHit();                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/Mod/NPC_BMI_GuLousBoss_AnimBlueprint.NPC_BMI_GuLousBoss_AnimBlueprint_C.AnimNotify_Close_FireHit
	// void AnimNotify_Close_FireHit();                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/Mod/NPC_BMI_GuLousBoss_AnimBlueprint.NPC_BMI_GuLousBoss_AnimBlueprint_C.AnimNotify_SpawnFarFire
	// void AnimNotify_SpawnFarFire();                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/Mod/NPC_BMI_GuLousBoss_AnimBlueprint.NPC_BMI_GuLousBoss_AnimBlueprint_C.AnimNotify_SpawnLaveFire
	// void AnimNotify_SpawnLaveFire();                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/Mod/NPC_BMI_GuLousBoss_AnimBlueprint.NPC_BMI_GuLousBoss_AnimBlueprint_C.AnimNotify_SpawnLight
	// void AnimNotify_SpawnLight();                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/Mod/NPC_BMI_GuLousBoss_AnimBlueprint.NPC_BMI_GuLousBoss_AnimBlueprint_C.ExecuteUbergraph_NPC_BMI_GuLousBoss_AnimBlueprint
	// void ExecuteUbergraph_NPC_BMI_GuLousBoss_AnimBlueprint(int32_t EntryPoint);                                              // [0x148e900] Final                
};

/// Class /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBoss_ZhaDi_BP.NPC_FYQBoss_ZhaDi_BP_C
/// Size: 0x025C (604 bytes) (0x000220 - 0x00025C) align 8 MaxSize: 0x025C
class ANPC_FYQBoss_ZhaDi_BP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class URadialForceComponent*                       RadialForce;                                                // 0x0228   (0x0008)  
	class UParticleSystemComponent*                    P_Hyper_LM_Explo_HitWater;                                  // 0x0230   (0x0008)  
	class UArrowComponent*                             Trace;                                                      // 0x0238   (0x0008)  
	class UParticleSystemComponent*                    P_Hardknocks_AOE_AIZhaDi;                                   // 0x0240   (0x0008)  
	class UCapsuleComponent*                           FireHitBox;                                                 // 0x0248   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0250   (0x0008)  
	float                                              Base_Damage;                                                // 0x0258   (0x0004)  


	/// Functions
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBoss_ZhaDi_BP.NPC_FYQBoss_ZhaDi_BP_C.Completed_E0809A4848A530FD3B89C4850A473882
	// void Completed_E0809A4848A530FD3B89C4850A473882(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBoss_ZhaDi_BP.NPC_FYQBoss_ZhaDi_BP_C.BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBoss_ZhaDi_BP.NPC_FYQBoss_ZhaDi_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBoss_ZhaDi_BP.NPC_FYQBoss_ZhaDi_BP_C.ExecuteUbergraph_NPC_FYQBoss_ZhaDi_BP
	// void ExecuteUbergraph_NPC_FYQBoss_ZhaDi_BP(int32_t EntryPoint);                                                          // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C
/// Size: 0x0265 (613 bytes) (0x000220 - 0x000265) align 8 MaxSize: 0x0265
class ANPC_FYQBossAutoAnimAmmo_BP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class USphereComponent*                            PlayAudioTouch;                                             // 0x0228   (0x0008)  
	class UAudioComponent*                             Audio;                                                      // 0x0230   (0x0008)  
	class UArrowComponent*                             ForwardArrow;                                               // 0x0238   (0x0008)  
	class UCapsuleComponent*                           FireHitBox;                                                 // 0x0240   (0x0008)  
	class UParticleSystemComponent*                    Par;                                                        // 0x0248   (0x0008)  
	class UProjectileMovementComponent*                ProjectileMovement;                                         // 0x0250   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0258   (0x0008)  
	float                                              Hit;                                                        // 0x0260   (0x0004)  
	bool                                               AutoAnim_;                                                  // 0x0264   (0x0001)  


	/// Functions
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_ShieldHit
	// void Send_ShieldHit();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_HitSword
	// void Send_HitSword(float Hit, int32_t FiretType);                                                                        // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_EMP
	// void Send_EMP(float Hit);                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_MeleePower
	// void Send_MeleePower(float Hit);                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_UpLightSword
	// void Send_UpLightSword(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_HuaChan
	// void Send_HuaChan();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_KanJi
	// void Send_KanJi(float Hit);                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_ZhaDi
	// void Send_ZhaDi();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_ShieldHitMeleeOrSword
	// void Send_ShieldHitMeleeOrSword(int32_t Hit);                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_AIQYQ
	// void Send_AIQYQ();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_NearDefu
	// void Send_NearDefu(int32_t FireType);                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_PerfectDefu
	// void Send_PerfectDefu(int32_t FireType);                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_AIFlyQYQ
	// void Send_AIFlyQYQ();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_AIBoat
	// void Send_AIBoat(class UPrimitiveComponent* HitBox, float Hit);                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_AIDEFUHealths
	// void Send_AIDEFUHealths(float DEFUHealth, float BloddHealth, bool HaveDefu_);                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_DisPlayAIHealthUI
	// void Send_DisPlayAIHealthUI(bool Vis_);                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_ForceAIHit
	// void Send_ForceAIHit();                                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_BloodHK
	// void Send_BloodHK();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_DefuHK
	// void Send_DefuHK();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_Add_Alerts
	// void Send_Add_Alerts(float DS);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_Dee_Alert
	// void Send_Dee_Alert();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_ForwardSeePlayer
	// void Send_ForwardSeePlayer();                                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_FootAI_Alert
	// void Send_FootAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_BackSeePlayer
	// void Send_BackSeePlayer();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_ShunAI_Alert
	// void Send_ShunAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_SprintAttack
	// void Send_SprintAttack(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_PlayerHitCarAI
	// void Send_PlayerHitCarAI();                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_PlayerQYQAI
	// void Send_PlayerQYQAI(int32_t Number);                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_GERFire
	// void Send_GERFire();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_HealthUIVis
	// void Send_HealthUIVis();                                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_XuLiMelee
	// void Send_XuLiMelee(float Hit);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.Send_GuLouHand_Hit
	// void Send_GuLouHand_Hit(float Hit);                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.BndEvt__PlayAudioTouch_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__PlayAudioTouch_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBossAutoAnimAmmo_BP.NPC_FYQBossAutoAnimAmmo_BP_C.ExecuteUbergraph_NPC_FYQBossAutoAnimAmmo_BP
	// void ExecuteUbergraph_NPC_FYQBossAutoAnimAmmo_BP(int32_t EntryPoint);                                                    // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Dao_BP.GuLouBoss_Dao_BP_C
/// Size: 0x02A0 (672 bytes) (0x000220 - 0x0002A0) align 8 MaxSize: 0x02A0
class AGuLouBoss_Dao_BP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UParticleSystemComponent*                    VFX_fire_row_horiz_Bright_FYQ;                              // 0x0228   (0x0008)  
	class UParticleSystemComponent*                    FX_Knight_Back;                                             // 0x0230   (0x0008)  
	class UParticleSystemComponent*                    FirePar;                                                    // 0x0238   (0x0008)  
	class UPhysicsConstraintComponent*                 PhysicsConstraintE;                                         // 0x0240   (0x0008)  
	class UStaticMeshComponent*                        YuanHuanE;                                                  // 0x0248   (0x0008)  
	class UPhysicsConstraintComponent*                 PhysicsConstraintD;                                         // 0x0250   (0x0008)  
	class UStaticMeshComponent*                        YuanHuanD;                                                  // 0x0258   (0x0008)  
	class UStaticMeshComponent*                        YuanHuanC;                                                  // 0x0260   (0x0008)  
	class UPhysicsConstraintComponent*                 PhysicsConstraintC;                                         // 0x0268   (0x0008)  
	class UPhysicsConstraintComponent*                 PhysicsConstraintB;                                         // 0x0270   (0x0008)  
	class UStaticMeshComponent*                        YuanHuanB;                                                  // 0x0278   (0x0008)  
	class UStaticMeshComponent*                        YuanHuanA;                                                  // 0x0280   (0x0008)  
	class UPhysicsConstraintComponent*                 PhysicsConstraintA;                                         // 0x0288   (0x0008)  
	class UStaticMeshComponent*                        Dao;                                                        // 0x0290   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0298   (0x0008)  


	/// Functions
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Dao_BP.GuLouBoss_Dao_BP_C.FireParPlay
	// void FireParPlay();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Dao_BP.GuLouBoss_Dao_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Dao_BP.GuLouBoss_Dao_BP_C.ExecuteUbergraph_GuLouBoss_Dao_BP
	// void ExecuteUbergraph_GuLouBoss_Dao_BP(int32_t EntryPoint);                                                              // [0x148e900] Final                
};

/// Class /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C
/// Size: 0x0318 (792 bytes) (0x000220 - 0x000318) align 8 MaxSize: 0x0318
class AGuLouBoss_Hand_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UAudioComponent*                             S_Snake_XULI;                                               // 0x0228   (0x0008)  
	class UAudioComponent*                             S_Eagle_XULI;                                               // 0x0230   (0x0008)  
	class UAudioComponent*                             S_Jzz_XULI;                                                 // 0x0238   (0x0008)  
	class UAudioComponent*                             S_Axe_XULI;                                                 // 0x0240   (0x0008)  
	class UArrowComponent*                             Arrow_Snake;                                                // 0x0248   (0x0008)  
	class UParticleSystemComponent*                    P_GuLouBoss_Snake_FireTip;                                  // 0x0250   (0x0008)  
	class UParticleSystemComponent*                    P_GuLouBoss_Snake_Begin;                                    // 0x0258   (0x0008)  
	class UParticleSystemComponent*                    Snake_Loop;                                                 // 0x0260   (0x0008)  
	class UArrowComponent*                             Arrow_Eagle;                                                // 0x0268   (0x0008)  
	class UParticleSystemComponent*                    P_GuLouBoss_Eagle_FireTip;                                  // 0x0270   (0x0008)  
	class UParticleSystemComponent*                    P_GuLouBoss_Eagle_Begin;                                    // 0x0278   (0x0008)  
	class UParticleSystemComponent*                    Eagle_Loop;                                                 // 0x0280   (0x0008)  
	class UArrowComponent*                             Arrow_Jzz;                                                  // 0x0288   (0x0008)  
	class UParticleSystemComponent*                    P_GuLouBoss_Jzz_FireTip;                                    // 0x0290   (0x0008)  
	class UParticleSystemComponent*                    P_GuLouBoss_JZZ_Begin;                                      // 0x0298   (0x0008)  
	class UParticleSystemComponent*                    JZZ_Loop;                                                   // 0x02A0   (0x0008)  
	class UArrowComponent*                             Arrow_Axe;                                                  // 0x02A8   (0x0008)  
	class UParticleSystemComponent*                    P_GuLouBoss_FireTip;                                        // 0x02B0   (0x0008)  
	class UParticleSystemComponent*                    P_GuLouBoss_FireTipAxe;                                     // 0x02B8   (0x0008)  
	class UParticleSystemComponent*                    P_GuLouBoss_AXE_Begin;                                      // 0x02C0   (0x0008)  
	class UStaticMeshComponent*                        AXE;                                                        // 0x02C8   (0x0008)  
	class USkeletalMeshComponent*                      Snake;                                                      // 0x02D0   (0x0008)  
	class USkeletalMeshComponent*                      BaldEagle;                                                  // 0x02D8   (0x0008)  
	class UStaticMeshComponent*                        _3D_ZhuangZhong;                                            // 0x02E0   (0x0008)  
	class UStaticMeshComponent*                        YuanHuan;                                                   // 0x02E8   (0x0008)  
	class UPhysicsConstraintComponent*                 PhysicsConstraint;                                          // 0x02F0   (0x0008)  
	class USkeletalMeshComponent*                      NPC_BMI_GuLouBoss_Hand;                                     // 0x02F8   (0x0008)  
	float                                              EagleDisIn_Chorme_22F539984E634EBFB192DE8CE68045A9;         // 0x0300   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    EagleDisIn__Direction_22F539984E634EBFB192DE8CE68045A9;     // 0x0304   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0305   (0x0003)  MISSED
	class UTimelineComponent*                          EagleDisIn;                                                 // 0x0308   (0x0008)  
	class ANPC_GuLouBoss_AI_C*                         Boss;                                                       // 0x0310   (0x0008)  


	/// Functions
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.EagleDisIn__FinishedFunc
	// void EagleDisIn__FinishedFunc();                                                                                         // [0x148e900] BlueprintEvent       
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.EagleDisIn__UpdateFunc
	// void EagleDisIn__UpdateFunc();                                                                                           // [0x148e900] BlueprintEvent       
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_ShieldHit
	// void Send_ShieldHit();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_HitSword
	// void Send_HitSword(float Hit, int32_t FiretType);                                                                        // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_EMP
	// void Send_EMP(float Hit);                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_MeleePower
	// void Send_MeleePower(float Hit);                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_UpLightSword
	// void Send_UpLightSword(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_HuaChan
	// void Send_HuaChan();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_KanJi
	// void Send_KanJi(float Hit);                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_ZhaDi
	// void Send_ZhaDi();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_ShieldHitMeleeOrSword
	// void Send_ShieldHitMeleeOrSword(int32_t Hit);                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_AIQYQ
	// void Send_AIQYQ();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_NearDefu
	// void Send_NearDefu(int32_t FireType);                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_PerfectDefu
	// void Send_PerfectDefu(int32_t FireType);                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_AIFlyQYQ
	// void Send_AIFlyQYQ();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_AIBoat
	// void Send_AIBoat(class UPrimitiveComponent* HitBox, float Hit);                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_AIDEFUHealths
	// void Send_AIDEFUHealths(float DEFUHealth, float BloddHealth, bool HaveDefu_);                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_DisPlayAIHealthUI
	// void Send_DisPlayAIHealthUI(bool Vis_);                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_ForceAIHit
	// void Send_ForceAIHit();                                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_BloodHK
	// void Send_BloodHK();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_DefuHK
	// void Send_DefuHK();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_Add_Alerts
	// void Send_Add_Alerts(float DS);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_Dee_Alert
	// void Send_Dee_Alert();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_ForwardSeePlayer
	// void Send_ForwardSeePlayer();                                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_FootAI_Alert
	// void Send_FootAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_BackSeePlayer
	// void Send_BackSeePlayer();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_ShunAI_Alert
	// void Send_ShunAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_SprintAttack
	// void Send_SprintAttack(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_PlayerHitCarAI
	// void Send_PlayerHitCarAI();                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_PlayerQYQAI
	// void Send_PlayerQYQAI(int32_t Number);                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_GERFire
	// void Send_GERFire();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_HealthUIVis
	// void Send_HealthUIVis();                                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_XuLiMelee
	// void Send_XuLiMelee(float Hit);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Send_GuLouHand_Hit
	// void Send_GuLouHand_Hit(float Hit);                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.AXE_Hit
	// void AXE_Hit();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.AXE_OK
	// void AXE_OK();                                                                                                           // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.JZZ_Hit
	// void JZZ_Hit();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.JzzOK
	// void JzzOK();                                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Eagle_Hit
	// void Eagle_Hit();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.EagleOK
	// void EagleOK();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.Snake_Hit
	// void Snake_Hit();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.SnakeOK
	// void SnakeOK();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.ReceiveAnyDamage
	// void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser); // [0x148e900] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Hand.GuLouBoss_Hand_C.ExecuteUbergraph_GuLouBoss_Hand
	// void ExecuteUbergraph_GuLouBoss_Hand(int32_t EntryPoint);                                                                // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/GuLouBoss/BP/GuLouBossFarFire_SwordLight.GuLouBossFarFire_SwordLight_C
/// Size: 0x026C (620 bytes) (0x000220 - 0x00026C) align 8 MaxSize: 0x026C
class AGuLouBossFarFire_SwordLight_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class URadialForceComponent*                       RadialForce;                                                // 0x0228   (0x0008)  
	class UArrowComponent*                             ParSpawnLoc;                                                // 0x0230   (0x0008)  
	class UBoxComponent*                               FireHitBox;                                                 // 0x0238   (0x0008)  
	class USphereComponent*                            PlayAudioTouch;                                             // 0x0240   (0x0008)  
	class UAudioComponent*                             Audio;                                                      // 0x0248   (0x0008)  
	class UProjectileMovementComponent*                ProjectileMovement;                                         // 0x0250   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0258   (0x0008)  
	class UParticleSystemComponent*                    P_H_LRM_BulletTrailV2;                                      // 0x0260   (0x0008)  
	float                                              Hit;                                                        // 0x0268   (0x0004)  


	/// Functions
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBossFarFire_SwordLight.GuLouBossFarFire_SwordLight_C.Completed_A331CC5847A2730711479A888C21AE32
	// void Completed_A331CC5847A2730711479A888C21AE32(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBossFarFire_SwordLight.GuLouBossFarFire_SwordLight_C.BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBossFarFire_SwordLight.GuLouBossFarFire_SwordLight_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBossFarFire_SwordLight.GuLouBossFarFire_SwordLight_C.BndEvt__PlayAudioTouch_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__PlayAudioTouch_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBossFarFire_SwordLight.GuLouBossFarFire_SwordLight_C.PlayPar
	// void PlayPar();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBossFarFire_SwordLight.GuLouBossFarFire_SwordLight_C.Fire
	// void Fire();                                                                                                             // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBossFarFire_SwordLight.GuLouBossFarFire_SwordLight_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBossFarFire_SwordLight.GuLouBossFarFire_SwordLight_C.ExecuteUbergraph_GuLouBossFarFire_SwordLight
	// void ExecuteUbergraph_GuLouBossFarFire_SwordLight(int32_t EntryPoint);                                                   // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/GuLouBoss/BP/GuLouBossFarFireGround.GuLouBossFarFireGround_C
/// Size: 0x025C (604 bytes) (0x000220 - 0x00025C) align 8 MaxSize: 0x025C
class AGuLouBossFarFireGround_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class URadialForceComponent*                       RadialForce;                                                // 0x0228   (0x0008)  
	class UAudioComponent*                             S_NPC_SiMiaoBoss_FarFire_Ground_Cue;                        // 0x0230   (0x0008)  
	class UProjectileMovementComponent*                ProjectileMovement;                                         // 0x0238   (0x0008)  
	class UParticleSystemComponent*                    Par;                                                        // 0x0240   (0x0008)  
	class UBoxComponent*                               HitBox;                                                     // 0x0248   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0250   (0x0008)  
	float                                              Base_Damage;                                                // 0x0258   (0x0004)  


	/// Functions
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBossFarFireGround.GuLouBossFarFireGround_C.Completed_32024C724F2E594307E8C39F62722DFE
	// void Completed_32024C724F2E594307E8C39F62722DFE(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBossFarFireGround.GuLouBossFarFireGround_C.BndEvt__HitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__HitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBossFarFireGround.GuLouBossFarFireGround_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBossFarFireGround.GuLouBossFarFireGround_C.Fire
	// void Fire();                                                                                                             // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBossFarFireGround.GuLouBossFarFireGround_C.ExecuteUbergraph_GuLouBossFarFireGround
	// void ExecuteUbergraph_GuLouBossFarFireGround(int32_t EntryPoint);                                                        // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/GuLouBoss/BP/GuLouBossFarFire_SwordLight_Player.GuLouBossFarFire_SwordLight_Player_C
/// Size: 0x0245 (581 bytes) (0x000220 - 0x000245) align 8 MaxSize: 0x0245
class AGuLouBossFarFire_SwordLight_Player_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UProjectileMovementComponent*                ProjectileMovement;                                         // 0x0228   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0230   (0x0008)  
	class UParticleSystemComponent*                    P_H_LRM_BulletTrailV2;                                      // 0x0238   (0x0008)  
	float                                              Hit;                                                        // 0x0240   (0x0004)  
	bool                                               IsDestory_;                                                 // 0x0244   (0x0001)  


	/// Functions
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBossFarFire_SwordLight_Player.GuLouBossFarFire_SwordLight_Player_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBossFarFire_SwordLight_Player.GuLouBossFarFire_SwordLight_Player_C.ExecuteUbergraph_GuLouBossFarFire_SwordLight_Player
	// void ExecuteUbergraph_GuLouBossFarFire_SwordLight_Player(int32_t EntryPoint);                                            // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/GuLouBoss/Mod/NPC_BMI_GuLouBoss_Hand_AnimBlueprint.NPC_BMI_GuLouBoss_Hand_AnimBlueprint_C
/// Size: 0x03C0 (960 bytes) (0x0002B8 - 0x0003C0) align 16 MaxSize: 0x03C0
class UNPC_BMI_GuLouBoss_Hand_AnimBlueprint_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x02F8   (0x0048)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0340   (0x0080)  


	/// Functions
	// Function /Game/NPCBMI/GuLouBoss/Mod/NPC_BMI_GuLouBoss_Hand_AnimBlueprint.NPC_BMI_GuLouBoss_Hand_AnimBlueprint_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x148e900] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/Mod/NPC_BMI_GuLouBoss_Hand_AnimBlueprint.NPC_BMI_GuLouBoss_Hand_AnimBlueprint_C.ExecuteUbergraph_NPC_BMI_GuLouBoss_Hand_AnimBlueprint
	// void ExecuteUbergraph_NPC_BMI_GuLouBoss_Hand_AnimBlueprint(int32_t EntryPoint);                                          // [0x148e900] Final                
};

/// Class /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_JzzFly_BP.GuLouBoss_JzzFly_BP_C
/// Size: 0x0260 (608 bytes) (0x000220 - 0x000260) align 8 MaxSize: 0x0260
class AGuLouBoss_JzzFly_BP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UArrowComponent*                             Arrow_JzzBPSpawn;                                           // 0x0228   (0x0008)  
	class UParticleSystemComponent*                    P_GuLouBoss_AXE_Begin;                                      // 0x0230   (0x0008)  
	class UParticleSystemComponent*                    P_GuLouBoss_AxeTrails;                                      // 0x0238   (0x0008)  
	class USphereComponent*                            Sphere;                                                     // 0x0240   (0x0008)  
	class UProjectileMovementComponent*                ProjectileMovement;                                         // 0x0248   (0x0008)  
	class URotatingMovementComponent*                  RotatingMovement;                                           // 0x0250   (0x0008)  
	class UStaticMeshComponent*                        NPC_BMI_GuLouBoss_Weapon_AXE;                               // 0x0258   (0x0008)  


	/// Functions
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_JzzFly_BP.GuLouBoss_JzzFly_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_JzzFly_BP.GuLouBoss_JzzFly_BP_C.ExecuteUbergraph_GuLouBoss_JzzFly_BP
	// void ExecuteUbergraph_GuLouBoss_JzzFly_BP(int32_t EntryPoint);                                                           // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_AxeFly_BP.GuLouBoss_AxeFly_BP_C
/// Size: 0x025A (602 bytes) (0x000220 - 0x00025A) align 8 MaxSize: 0x025A
class AGuLouBoss_AxeFly_BP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UParticleSystemComponent*                    P_GuLouBoss_AXE_Begin;                                      // 0x0228   (0x0008)  
	class UParticleSystemComponent*                    P_GuLouBoss_AxeTrails;                                      // 0x0230   (0x0008)  
	class USphereComponent*                            Sphere;                                                     // 0x0238   (0x0008)  
	class UProjectileMovementComponent*                ProjectileMovement;                                         // 0x0240   (0x0008)  
	class URotatingMovementComponent*                  RotatingMovement;                                           // 0x0248   (0x0008)  
	class UStaticMeshComponent*                        NPC_BMI_GuLouBoss_Weapon_AXE;                               // 0x0250   (0x0008)  
	bool                                               IsGround_;                                                  // 0x0258   (0x0001)  
	bool                                               IsDelayAutoAnim_;                                           // 0x0259   (0x0001)  


	/// Functions
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_AxeFly_BP.GuLouBoss_AxeFly_BP_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_AxeFly_BP.GuLouBoss_AxeFly_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_AxeFly_BP.GuLouBoss_AxeFly_BP_C.ExecuteUbergraph_GuLouBoss_AxeFly_BP
	// void ExecuteUbergraph_GuLouBoss_AxeFly_BP(int32_t EntryPoint);                                                           // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_AxeGround_BP.GuLouBoss_AxeGround_BP_C
/// Size: 0x02A8 (680 bytes) (0x000220 - 0x0002A8) align 8 MaxSize: 0x02A8
class AGuLouBoss_AxeGround_BP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UBoxComponent*                               HitPlayerTouch;                                             // 0x0228   (0x0008)  
	class UParticleSystemComponent*                    WaterEdm;                                                   // 0x0230   (0x0008)  
	class UArrowComponent*                             LightningG;                                                 // 0x0238   (0x0008)  
	class UArrowComponent*                             LightningF;                                                 // 0x0240   (0x0008)  
	class UArrowComponent*                             LightningE;                                                 // 0x0248   (0x0008)  
	class UArrowComponent*                             LightningD;                                                 // 0x0250   (0x0008)  
	class UArrowComponent*                             LightningC;                                                 // 0x0258   (0x0008)  
	class UArrowComponent*                             LightningB;                                                 // 0x0260   (0x0008)  
	class UArrowComponent*                             LightningA;                                                 // 0x0268   (0x0008)  
	class UParticleSystemComponent*                    P_Kwang_LightStrike_Burst;                                  // 0x0270   (0x0008)  
	class UArrowComponent*                             GroundBoom;                                                 // 0x0278   (0x0008)  
	class UParticleSystemComponent*                    P_GuLouBoss_AXE_Begin;                                      // 0x0280   (0x0008)  
	class UStaticMeshComponent*                        NPC_BMI_GuLouBoss_Weapon_AXE;                               // 0x0288   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0290   (0x0008)  
	float                                              Base_Damage;                                                // 0x0298   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x029C   (0x0004)  MISSED
	class UCapsuleComponent*                           Hit_PlayerTouch;                                            // 0x02A0   (0x0008)  


	/// Functions
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_AxeGround_BP.GuLouBoss_AxeGround_BP_C.Completed_B2B2B3BF4CD512BAA4DB82AA5A38045C
	// void Completed_B2B2B3BF4CD512BAA4DB82AA5A38045C(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_AxeGround_BP.GuLouBoss_AxeGround_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_AxeGround_BP.GuLouBoss_AxeGround_BP_C.SpawnLightningA
	// void SpawnLightningA();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_AxeGround_BP.GuLouBoss_AxeGround_BP_C.SpawnLightningB
	// void SpawnLightningB();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_AxeGround_BP.GuLouBoss_AxeGround_BP_C.SpawnLightningC
	// void SpawnLightningC();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_AxeGround_BP.GuLouBoss_AxeGround_BP_C.SpawnLightningD
	// void SpawnLightningD();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_AxeGround_BP.GuLouBoss_AxeGround_BP_C.SpawnLightningE
	// void SpawnLightningE();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_AxeGround_BP.GuLouBoss_AxeGround_BP_C.SpawnLightning_TypeA
	// void SpawnLightning_TypeA();                                                                                             // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_AxeGround_BP.GuLouBoss_AxeGround_BP_C.SpawnLightningF
	// void SpawnLightningF();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_AxeGround_BP.GuLouBoss_AxeGround_BP_C.SpawnLightningG
	// void SpawnLightningG();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_AxeGround_BP.GuLouBoss_AxeGround_BP_C.BndEvt__GuLouBoss_AxeGround_BP_HitPlayerTouch_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__GuLouBoss_AxeGround_BP_HitPlayerTouch_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_AxeGround_BP.GuLouBoss_AxeGround_BP_C.ExecuteUbergraph_GuLouBoss_AxeGround_BP
	// void ExecuteUbergraph_GuLouBoss_AxeGround_BP(int32_t EntryPoint);                                                        // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Lightning.GuLouBoss_Lightning_C
/// Size: 0x024C (588 bytes) (0x000220 - 0x00024C) align 8 MaxSize: 0x024C
class AGuLouBoss_Lightning_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UDecalComponent*                             Decal;                                                      // 0x0228   (0x0008)  
	class UParticleSystemComponent*                    BOOM;                                                       // 0x0230   (0x0008)  
	class USphereComponent*                            HitBox;                                                     // 0x0238   (0x0008)  
	class UParticleSystemComponent*                    P_Kwang_LightStrike_Burst;                                  // 0x0240   (0x0008)  
	float                                              Base_Damage;                                                // 0x0248   (0x0004)  


	/// Functions
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Lightning.GuLouBoss_Lightning_C.Completed_A3F5E9C34C92146A9A8332BDBE217F0A
	// void Completed_A3F5E9C34C92146A9A8332BDBE217F0A(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Lightning.GuLouBoss_Lightning_C.BndEvt__HitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__HitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Lightning.GuLouBoss_Lightning_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Lightning.GuLouBoss_Lightning_C.ExecuteUbergraph_GuLouBoss_Lightning
	// void ExecuteUbergraph_GuLouBoss_Lightning(int32_t EntryPoint);                                                           // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C
/// Size: 0x02C8 (712 bytes) (0x000220 - 0x0002C8) align 8 MaxSize: 0x02C8
class AGuLouBoss_Jzz_Ground_BP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UAudioComponent*                             S_JzzFly_InSide;                                            // 0x0228   (0x0008)  
	class UAudioComponent*                             S_JzzFly_Loop;                                              // 0x0230   (0x0008)  
	class USpotLightComponent*                         SpotLight;                                                  // 0x0238   (0x0008)  
	class UParticleSystemComponent*                    JzzEdm;                                                     // 0x0240   (0x0008)  
	class UCapsuleComponent*                           Hit_PlayerTouch;                                            // 0x0248   (0x0008)  
	class UParticleSystemComponent*                    FoGuang;                                                    // 0x0250   (0x0008)  
	class UParticleSystemComponent*                    JzzOpen;                                                    // 0x0258   (0x0008)  
	class UParticleSystemComponent*                    Boom2;                                                      // 0x0260   (0x0008)  
	class UParticleSystemComponent*                    BOOM;                                                       // 0x0268   (0x0008)  
	class URotatingMovementComponent*                  RotatingMovement;                                           // 0x0270   (0x0008)  
	class UArrowComponent*                             Trace;                                                      // 0x0278   (0x0008)  
	class UStaticMeshComponent*                        _3D_ZhuangZhong;                                            // 0x0280   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0288   (0x0008)  
	float                                              Dis_Chorme_C27F69E3424166FFCD5723AB0260F63B;                // 0x0290   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Dis__Direction_C27F69E3424166FFCD5723AB0260F63B;            // 0x0294   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0295   (0x0003)  MISSED
	class UTimelineComponent*                          Dis;                                                        // 0x0298   (0x0008)  
	FVector                                            Scale_Scale_22C627CA4EC5A2E2639BB6AFA21BE1DC;               // 0x02A0   (0x000C)  
	float                                              Scale_Light_22C627CA4EC5A2E2639BB6AFA21BE1DC;               // 0x02AC   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Scale__Direction_22C627CA4EC5A2E2639BB6AFA21BE1DC;          // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x02B1   (0x0007)  MISSED
	class UTimelineComponent*                          Scale;                                                      // 0x02B8   (0x0008)  
	float                                              Health;                                                     // 0x02C0   (0x0004)  
	float                                              Base_Damage;                                                // 0x02C4   (0x0004)  


	/// Functions
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Scale__FinishedFunc
	// void Scale__FinishedFunc();                                                                                              // [0x148e900] BlueprintEvent       
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Scale__UpdateFunc
	// void Scale__UpdateFunc();                                                                                                // [0x148e900] BlueprintEvent       
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Dis__FinishedFunc
	// void Dis__FinishedFunc();                                                                                                // [0x148e900] BlueprintEvent       
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Dis__UpdateFunc
	// void Dis__UpdateFunc();                                                                                                  // [0x148e900] BlueprintEvent       
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Completed_8C76C92D468A9554DA45DD9F70D239FA
	// void Completed_8C76C92D468A9554DA45DD9F70D239FA(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_ShieldHit
	// void Send_ShieldHit();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_HuaChan
	// void Send_HuaChan();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_ZhaDi
	// void Send_ZhaDi();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_ShieldHitMeleeOrSword
	// void Send_ShieldHitMeleeOrSword(int32_t Hit);                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_AIQYQ
	// void Send_AIQYQ();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_NearDefu
	// void Send_NearDefu(int32_t FireType);                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_PerfectDefu
	// void Send_PerfectDefu(int32_t FireType);                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_AIFlyQYQ
	// void Send_AIFlyQYQ();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_AIBoat
	// void Send_AIBoat(class UPrimitiveComponent* HitBox, float Hit);                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_AIDEFUHealths
	// void Send_AIDEFUHealths(float DEFUHealth, float BloddHealth, bool HaveDefu_);                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_DisPlayAIHealthUI
	// void Send_DisPlayAIHealthUI(bool Vis_);                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_ForceAIHit
	// void Send_ForceAIHit();                                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_BloodHK
	// void Send_BloodHK();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_DefuHK
	// void Send_DefuHK();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_Add_Alerts
	// void Send_Add_Alerts(float DS);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_Dee_Alert
	// void Send_Dee_Alert();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_ForwardSeePlayer
	// void Send_ForwardSeePlayer();                                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_FootAI_Alert
	// void Send_FootAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_BackSeePlayer
	// void Send_BackSeePlayer();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_ShunAI_Alert
	// void Send_ShunAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_PlayerHitCarAI
	// void Send_PlayerHitCarAI();                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_PlayerQYQAI
	// void Send_PlayerQYQAI(int32_t Number);                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_GERFire
	// void Send_GERFire();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_HealthUIVis
	// void Send_HealthUIVis();                                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_XuLiMelee
	// void Send_XuLiMelee(float Hit);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_GuLouHand_Hit
	// void Send_GuLouHand_Hit(float Hit);                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Down
	// void Down();                                                                                                             // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.LookPlayerLoc
	// void LookPlayerLoc();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_HitSword
	// void Send_HitSword(float Hit, int32_t FiretType);                                                                        // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_SprintAttack
	// void Send_SprintAttack(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_EMP
	// void Send_EMP(float Hit);                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_MeleePower
	// void Send_MeleePower(float Hit);                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_UpLightSword
	// void Send_UpLightSword(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.Send_KanJi
	// void Send_KanJi(float Hit);                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.BokenJZZ
	// void BokenJZZ();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.BndEvt__Hit_PlayerTouch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Hit_PlayerTouch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Jzz_Ground_BP.GuLouBoss_Jzz_Ground_BP_C.ExecuteUbergraph_GuLouBoss_Jzz_Ground_BP
	// void ExecuteUbergraph_GuLouBoss_Jzz_Ground_BP(int32_t EntryPoint);                                                       // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_JzzBoken_BP.GuLouBoss_JzzBoken_BP_C
/// Size: 0x0248 (584 bytes) (0x000220 - 0x000248) align 8 MaxSize: 0x0248
class AGuLouBoss_JzzBoken_BP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UParticleSystemComponent*                    BOOM;                                                       // 0x0228   (0x0008)  
	class URadialForceComponent*                       RadialForce;                                                // 0x0230   (0x0008)  
	class UDestructibleComponent*                      _3D_ZhuangZhong_DM;                                         // 0x0238   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0240   (0x0008)  


	/// Functions
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_JzzBoken_BP.GuLouBoss_JzzBoken_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_JzzBoken_BP.GuLouBoss_JzzBoken_BP_C.ExecuteUbergraph_GuLouBoss_JzzBoken_BP
	// void ExecuteUbergraph_GuLouBoss_JzzBoken_BP(int32_t EntryPoint);                                                         // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Snake_Du_BP.GuLouBoss_Snake_Du_BP_C
/// Size: 0x0244 (580 bytes) (0x000220 - 0x000244) align 8 MaxSize: 0x0244
class AGuLouBoss_Snake_Du_BP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UActorSequenceComponent*                     ActorSequence;                                              // 0x0228   (0x0008)  
	class UParticleSystemComponent*                    SnakeXXX;                                                   // 0x0230   (0x0008)  
	class UBoxComponent*                               Hit;                                                        // 0x0238   (0x0008)  
	float                                              Base_Damage;                                                // 0x0240   (0x0004)  


	/// Functions
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Snake_Du_BP.GuLouBoss_Snake_Du_BP_C.Completed_D3C8C000462288C27A487CA7232782C0
	// void Completed_D3C8C000462288C27A487CA7232782C0(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Snake_Du_BP.GuLouBoss_Snake_Du_BP_C.BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Snake_Du_BP.GuLouBoss_Snake_Du_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_Snake_Du_BP.GuLouBoss_Snake_Du_BP_C.ExecuteUbergraph_GuLouBoss_Snake_Du_BP
	// void ExecuteUbergraph_GuLouBoss_Snake_Du_BP(int32_t EntryPoint);                                                         // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_EagleFarFire_BP.GuLouBoss_EagleFarFire_BP_C
/// Size: 0x0264 (612 bytes) (0x000220 - 0x000264) align 8 MaxSize: 0x0264
class AGuLouBoss_EagleFarFire_BP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UArrowComponent*                             ForwardArrow;                                               // 0x0228   (0x0008)  
	class USphereComponent*                            PlayAudioTouch;                                             // 0x0230   (0x0008)  
	class UAudioComponent*                             Audio;                                                      // 0x0238   (0x0008)  
	class UCapsuleComponent*                           FireHitBox;                                                 // 0x0240   (0x0008)  
	class UProjectileMovementComponent*                ProjectileMovement;                                         // 0x0248   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0250   (0x0008)  
	class UParticleSystemComponent*                    P_H_LRM_BulletTrailV2;                                      // 0x0258   (0x0008)  
	float                                              Hit;                                                        // 0x0260   (0x0004)  


	/// Functions
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_EagleFarFire_BP.GuLouBoss_EagleFarFire_BP_C.Completed_608F8098430C6D12749959B287DDA78C
	// void Completed_608F8098430C6D12749959B287DDA78C(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_EagleFarFire_BP.GuLouBoss_EagleFarFire_BP_C.BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_EagleFarFire_BP.GuLouBoss_EagleFarFire_BP_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_EagleFarFire_BP.GuLouBoss_EagleFarFire_BP_C.BndEvt__PlayAudioTouch_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__PlayAudioTouch_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_EagleFarFire_BP.GuLouBoss_EagleFarFire_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_EagleFarFire_BP.GuLouBoss_EagleFarFire_BP_C.ExecuteUbergraph_GuLouBoss_EagleFarFire_BP
	// void ExecuteUbergraph_GuLouBoss_EagleFarFire_BP(int32_t EntryPoint);                                                     // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_EagleFarFire_PlayerBP.GuLouBoss_EagleFarFire_PlayerBP_C
/// Size: 0x0249 (585 bytes) (0x000220 - 0x000249) align 8 MaxSize: 0x0249
class AGuLouBoss_EagleFarFire_PlayerBP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UCapsuleComponent*                           FireHitBox;                                                 // 0x0228   (0x0008)  
	class UProjectileMovementComponent*                ProjectileMovement;                                         // 0x0230   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0238   (0x0008)  
	class UParticleSystemComponent*                    P_H_LRM_BulletTrailV2;                                      // 0x0240   (0x0008)  
	bool                                               IsDestory_;                                                 // 0x0248   (0x0001)  


	/// Functions
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_EagleFarFire_PlayerBP.GuLouBoss_EagleFarFire_PlayerBP_C.BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__FireHitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_EagleFarFire_PlayerBP.GuLouBoss_EagleFarFire_PlayerBP_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_EagleFarFire_PlayerBP.GuLouBoss_EagleFarFire_PlayerBP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_EagleFarFire_PlayerBP.GuLouBoss_EagleFarFire_PlayerBP_C.ExecuteUbergraph_GuLouBoss_EagleFarFire_PlayerBP
	// void ExecuteUbergraph_GuLouBoss_EagleFarFire_PlayerBP(int32_t EntryPoint);                                               // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBoss_HandFire_BP.NPC_FYQBoss_HandFire_BP_C
/// Size: 0x024C (588 bytes) (0x000220 - 0x00024C) align 8 MaxSize: 0x024C
class ANPC_FYQBoss_HandFire_BP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UActorSequenceComponent*                     ActorSequence;                                              // 0x0228   (0x0008)  
	class UBoxComponent*                               HitBox;                                                     // 0x0230   (0x0008)  
	class UParticleSystemComponent*                    Par;                                                        // 0x0238   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0240   (0x0008)  
	float                                              Base_Damage;                                                // 0x0248   (0x0004)  


	/// Functions
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBoss_HandFire_BP.NPC_FYQBoss_HandFire_BP_C.Completed_C0D926114316D4E5D61F14960351E1A9
	// void Completed_C0D926114316D4E5D61F14960351E1A9(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBoss_HandFire_BP.NPC_FYQBoss_HandFire_BP_C.BndEvt__HitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__HitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBoss_HandFire_BP.NPC_FYQBoss_HandFire_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBoss_HandFire_BP.NPC_FYQBoss_HandFire_BP_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBoss_HandFire_BP.NPC_FYQBoss_HandFire_BP_C.ExecuteUbergraph_NPC_FYQBoss_HandFire_BP
	// void ExecuteUbergraph_NPC_FYQBoss_HandFire_BP(int32_t EntryPoint);                                                       // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_GroundFire.GuLouBoss_GroundFire_C
/// Size: 0x0251 (593 bytes) (0x000220 - 0x000251) align 8 MaxSize: 0x0251
class AGuLouBoss_GroundFire_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UBoxComponent*                               Hit03;                                                      // 0x0228   (0x0008)  
	class UBoxComponent*                               Hit02;                                                      // 0x0230   (0x0008)  
	class UBoxComponent*                               Hit01;                                                      // 0x0238   (0x0008)  
	class UParticleSystemComponent*                    Par;                                                        // 0x0240   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0248   (0x0008)  
	bool                                               IsTouch_;                                                   // 0x0250   (0x0001)  


	/// Functions
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_GroundFire.GuLouBoss_GroundFire_C.BndEvt__Hit01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Hit01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_GroundFire.GuLouBoss_GroundFire_C.BndEvt__Hit02_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Hit02_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_GroundFire.GuLouBoss_GroundFire_C.BndEvt__Hit03_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Hit03_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_GroundFire.GuLouBoss_GroundFire_C.FirePlayerBlood
	// void FirePlayerBlood();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_GroundFire.GuLouBoss_GroundFire_C.BndEvt__Hit01_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__Hit01_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x148e900] BlueprintEvent       
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_GroundFire.GuLouBoss_GroundFire_C.BndEvt__Hit02_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__Hit02_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x148e900] BlueprintEvent       
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_GroundFire.GuLouBoss_GroundFire_C.BndEvt__Hit03_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__Hit03_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x148e900] BlueprintEvent       
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_GroundFire.GuLouBoss_GroundFire_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/GuLouBoss/BP/GuLouBoss_GroundFire.GuLouBoss_GroundFire_C.ExecuteUbergraph_GuLouBoss_GroundFire
	// void ExecuteUbergraph_GuLouBoss_GroundFire(int32_t EntryPoint);                                                          // [0x148e900] Final|HasDefaults    
};

/// Class /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBoss_GroundFire.NPC_FYQBoss_GroundFire_C
/// Size: 0x0251 (593 bytes) (0x000220 - 0x000251) align 8 MaxSize: 0x0251
class ANPC_FYQBoss_GroundFire_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UBoxComponent*                               Hit03;                                                      // 0x0228   (0x0008)  
	class UBoxComponent*                               Hit02;                                                      // 0x0230   (0x0008)  
	class UBoxComponent*                               Hit01;                                                      // 0x0238   (0x0008)  
	class UParticleSystemComponent*                    Par;                                                        // 0x0240   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0248   (0x0008)  
	bool                                               IsTouch_;                                                   // 0x0250   (0x0001)  


	/// Functions
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBoss_GroundFire.NPC_FYQBoss_GroundFire_C.BndEvt__Hit01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Hit01_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBoss_GroundFire.NPC_FYQBoss_GroundFire_C.BndEvt__Hit02_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Hit02_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBoss_GroundFire.NPC_FYQBoss_GroundFire_C.BndEvt__Hit03_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Hit03_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBoss_GroundFire.NPC_FYQBoss_GroundFire_C.FirePlayerBlood
	// void FirePlayerBlood();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBoss_GroundFire.NPC_FYQBoss_GroundFire_C.BndEvt__Hit01_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__Hit01_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x148e900] BlueprintEvent       
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBoss_GroundFire.NPC_FYQBoss_GroundFire_C.BndEvt__Hit02_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__Hit02_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x148e900] BlueprintEvent       
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBoss_GroundFire.NPC_FYQBoss_GroundFire_C.BndEvt__Hit03_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__Hit03_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x148e900] BlueprintEvent       
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBoss_GroundFire.NPC_FYQBoss_GroundFire_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/NPCBMI/FengYuQiaoBoss/BP/NPC_FYQBoss_GroundFire.NPC_FYQBoss_GroundFire_C.ExecuteUbergraph_NPC_FYQBoss_GroundFire
	// void ExecuteUbergraph_NPC_FYQBoss_GroundFire(int32_t EntryPoint);                                                        // [0x148e900] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(ANPC_GuLouBoss_AI_C) == 0x06B9); // 1721 bytes (0x0004B8 - 0x0006B9)
static_assert(sizeof(ANPC_DunArmy_AI_C) == 0x0674); // 1652 bytes (0x0004B8 - 0x000674)
static_assert(sizeof(ANPC_IronArmy2_AI_C) == 0x063F); // 1599 bytes (0x0004B8 - 0x00063F)
static_assert(sizeof(ANPC_IronArmy_AI_C) == 0x0644); // 1604 bytes (0x0004B8 - 0x000644)
static_assert(sizeof(ANPC_IronArmy_AI_ChuJue_C) == 0x0644); // 1604 bytes (0x000644 - 0x000644)
static_assert(sizeof(ANPC_IronArmy_NewPlayer_C) == 0x0611); // 1553 bytes (0x0004B8 - 0x000611)
static_assert(sizeof(ANPC_Pig_AI_C) == 0x05C4); // 1476 bytes (0x0004B8 - 0x0005C4)
static_assert(sizeof(ANPC_Pig_AI_Car_C) == 0x05C4); // 1476 bytes (0x0005C4 - 0x0005C4)
static_assert(sizeof(ANPC_RockLion_AI_C) == 0x05DA); // 1498 bytes (0x0004B8 - 0x0005DA)
static_assert(sizeof(ANPC_RockLion_AI2_C) == 0x05E1); // 1505 bytes (0x0004B8 - 0x0005E1)
static_assert(sizeof(ANPC_SiMiao_AI_C) == 0x06CA); // 1738 bytes (0x0004B8 - 0x0006CA)
static_assert(sizeof(ANPC_BowWarrior_AI_C) == 0x064C); // 1612 bytes (0x0004B8 - 0x00064C)
static_assert(sizeof(ANPC_Warrior01_AI_C) == 0x0665); // 1637 bytes (0x0004B8 - 0x000665)
static_assert(sizeof(ANPC_Warrior02_AI_C) == 0x0617); // 1559 bytes (0x0004B8 - 0x000617)
static_assert(sizeof(ANPC_WarriorBig_AI_C) == 0x064A); // 1610 bytes (0x0004B8 - 0x00064A)
static_assert(sizeof(ANPC_WarriorBig_AI_QiZi_C) == 0x0670); // 1648 bytes (0x00064A - 0x000670)
static_assert(sizeof(ANPC_RockLion_FarFire_C) == 0x0245); // 581 bytes (0x000220 - 0x000245)
static_assert(sizeof(ANPC_RockLion_Bokren_C) == 0x0240); // 576 bytes (0x000220 - 0x000240)
static_assert(sizeof(ANPC_Eagle_AI_C) == 0x0608); // 1544 bytes (0x0004B8 - 0x000608)
static_assert(sizeof(ANPC_Snake_AI_C) == 0x05E8); // 1512 bytes (0x0004B8 - 0x0005E8)
static_assert(sizeof(AEagleAI_Path_C) == 0x0230); // 560 bytes (0x000220 - 0x000230)
static_assert(sizeof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C) == 0x696D); // 26989 bytes (0x0002B8 - 0x00696D)
static_assert(sizeof(ANPC_GroundBlood_C) == 0x0230); // 560 bytes (0x000220 - 0x000230)
static_assert(sizeof(UNPC_BMI_SuYa_Skin00_iClone_Skeleton_AnimBlueprint_C) == 0x0760); // 1888 bytes (0x0002B8 - 0x000760)
static_assert(sizeof(ANPC_FYQBoss_Rock_C) == 0x0258); // 600 bytes (0x000220 - 0x000258)
static_assert(sizeof(AWarriorBig_AxeFly_BP2_C) == 0x0262); // 610 bytes (0x000220 - 0x000262)
static_assert(sizeof(AWarriorBig_AxeGround_BP_C) == 0x0268); // 616 bytes (0x000220 - 0x000268)
static_assert(sizeof(ANPC_RockLion_ZhaDi_BP_C) == 0x0254); // 596 bytes (0x000220 - 0x000254)
static_assert(sizeof(UNPC_Warrior_Big_AnimBlueprint_C) == 0x0518); // 1304 bytes (0x0002B8 - 0x000518)
static_assert(sizeof(ANPC_WarriorBig_ZhaDi_BP_C) == 0x0254); // 596 bytes (0x000220 - 0x000254)
static_assert(sizeof(ANPC_WarriorBig_ZhaDi_BP2_C) == 0x0254); // 596 bytes (0x000220 - 0x000254)
static_assert(sizeof(AWarriorBig_AxeFly_BP_C) == 0x025A); // 602 bytes (0x000220 - 0x00025A)
static_assert(sizeof(UNPC_Warrior02_AnimBlueprint_C) == 0x051A); // 1306 bytes (0x0002B8 - 0x00051A)
static_assert(sizeof(ANPC_Warrior01_ZhaDi_BP_C) == 0x0254); // 596 bytes (0x000220 - 0x000254)
static_assert(sizeof(UNPC_Warrior01_AnimBlueprint_C) == 0x06A3); // 1699 bytes (0x0002B8 - 0x0006A3)
static_assert(sizeof(ANPC_Warrior01_Fire_BP_C) == 0x025C); // 604 bytes (0x000220 - 0x00025C)
static_assert(sizeof(AWarriorDunBoken_BP_C) == 0x0248); // 584 bytes (0x000220 - 0x000248)
static_assert(sizeof(ANPC_Warrior01_Fire_PlayerBP_C) == 0x0249); // 585 bytes (0x000220 - 0x000249)
static_assert(sizeof(ANPC_Warrior_BowFire_BP_C) == 0x026C); // 620 bytes (0x000220 - 0x00026C)
static_assert(sizeof(ANPC_WarriorBow_Fire_PlayerBP_C) == 0x0251); // 593 bytes (0x000220 - 0x000251)
static_assert(sizeof(UNPC_BMI_SiMiaoBoss_AnimBlueprint_C) == 0x0915); // 2325 bytes (0x0002B8 - 0x000915)
static_assert(sizeof(ASiMiaoBossFarFire_SwordLight_45_C) == 0x026C); // 620 bytes (0x000220 - 0x00026C)
static_assert(sizeof(ASiMiaoBossFarFire_SwordLight_90_C) == 0x026C); // 620 bytes (0x000220 - 0x00026C)
static_assert(sizeof(ASiMiaoBossFarFire_SwordLight2_Player_C) == 0x0245); // 581 bytes (0x000220 - 0x000245)
static_assert(sizeof(ASiMiaoBossFarFire_SwordLight_Player_C) == 0x0245); // 581 bytes (0x000220 - 0x000245)
static_assert(sizeof(UNPC_BMI_RockLion_AnimBlueprint_C) == 0x06A1); // 1697 bytes (0x0002B8 - 0x0006A1)
static_assert(sizeof(UNPC_BMI_Pig_AnimBluePrint_C) == 0x04D1); // 1233 bytes (0x0002B8 - 0x0004D1)
static_assert(sizeof(UNPC_BMI_IronArmy_AnimBlueprint_C) == 0x06A3); // 1699 bytes (0x0002B8 - 0x0006A3)
static_assert(sizeof(ANPC_Warrior01_ZhaDi_BP2_C) == 0x0254); // 596 bytes (0x000220 - 0x000254)
static_assert(sizeof(ANPC_IronAmry_Fire_BP_C) == 0x026C); // 620 bytes (0x000220 - 0x00026C)
static_assert(sizeof(ANPC_IronAmry_Fire_PlayerBP_C) == 0x0251); // 593 bytes (0x000220 - 0x000251)
static_assert(sizeof(ANPC_FYQBoss_RockDe_C) == 0x0240); // 576 bytes (0x000220 - 0x000240)
static_assert(sizeof(UNPC_BMI_DunArmy_AnimBlueprint_C) == 0x04D1); // 1233 bytes (0x0002B8 - 0x0004D1)
static_assert(sizeof(ADunBoken_BP_C) == 0x0248); // 584 bytes (0x000220 - 0x000248)
static_assert(sizeof(AGuLouBoss_HandFire_BP_C) == 0x0240); // 576 bytes (0x000220 - 0x000240)
static_assert(sizeof(UNPC_BMI_GuLousBoss_AnimBlueprint_C) == 0x0518); // 1304 bytes (0x0002B8 - 0x000518)
static_assert(sizeof(ANPC_FYQBoss_ZhaDi_BP_C) == 0x025C); // 604 bytes (0x000220 - 0x00025C)
static_assert(sizeof(ANPC_FYQBossAutoAnimAmmo_BP_C) == 0x0265); // 613 bytes (0x000220 - 0x000265)
static_assert(sizeof(AGuLouBoss_Dao_BP_C) == 0x02A0); // 672 bytes (0x000220 - 0x0002A0)
static_assert(sizeof(AGuLouBoss_Hand_C) == 0x0318); // 792 bytes (0x000220 - 0x000318)
static_assert(sizeof(AGuLouBossFarFire_SwordLight_C) == 0x026C); // 620 bytes (0x000220 - 0x00026C)
static_assert(sizeof(AGuLouBossFarFireGround_C) == 0x025C); // 604 bytes (0x000220 - 0x00025C)
static_assert(sizeof(AGuLouBossFarFire_SwordLight_Player_C) == 0x0245); // 581 bytes (0x000220 - 0x000245)
static_assert(sizeof(UNPC_BMI_GuLouBoss_Hand_AnimBlueprint_C) == 0x03C0); // 960 bytes (0x0002B8 - 0x0003C0)
static_assert(sizeof(AGuLouBoss_JzzFly_BP_C) == 0x0260); // 608 bytes (0x000220 - 0x000260)
static_assert(sizeof(AGuLouBoss_AxeFly_BP_C) == 0x025A); // 602 bytes (0x000220 - 0x00025A)
static_assert(sizeof(AGuLouBoss_AxeGround_BP_C) == 0x02A8); // 680 bytes (0x000220 - 0x0002A8)
static_assert(sizeof(AGuLouBoss_Lightning_C) == 0x024C); // 588 bytes (0x000220 - 0x00024C)
static_assert(sizeof(AGuLouBoss_Jzz_Ground_BP_C) == 0x02C8); // 712 bytes (0x000220 - 0x0002C8)
static_assert(sizeof(AGuLouBoss_JzzBoken_BP_C) == 0x0248); // 584 bytes (0x000220 - 0x000248)
static_assert(sizeof(AGuLouBoss_Snake_Du_BP_C) == 0x0244); // 580 bytes (0x000220 - 0x000244)
static_assert(sizeof(AGuLouBoss_EagleFarFire_BP_C) == 0x0264); // 612 bytes (0x000220 - 0x000264)
static_assert(sizeof(AGuLouBoss_EagleFarFire_PlayerBP_C) == 0x0249); // 585 bytes (0x000220 - 0x000249)
static_assert(sizeof(ANPC_FYQBoss_HandFire_BP_C) == 0x024C); // 588 bytes (0x000220 - 0x00024C)
static_assert(sizeof(AGuLouBoss_GroundFire_C) == 0x0251); // 593 bytes (0x000220 - 0x000251)
static_assert(sizeof(ANPC_FYQBoss_GroundFire_C) == 0x0251); // 593 bytes (0x000220 - 0x000251)
static_assert(offsetof(ANPC_GuLouBoss_AI_C, UberGraphFrame) == 0x04C0);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, Eye6) == 0x04C8);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, Eye5) == 0x04D0);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, Eye4) == 0x04D8);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, Eye3) == 0x04E0);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, Eye2) == 0x04E8);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, Eye1) == 0x04F0);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, SiMiao_Teleport) == 0x04F8);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, Cloud_R) == 0x0500);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, Cloud_L) == 0x0508);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, PS_FireSmall) == 0x0510);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, PS_FireSmall2) == 0x0518);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, EagleBackLoc) == 0x0520);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, BodyLight2) == 0x0528);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, FarFireLoc) == 0x0530);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, ZhaDiSpawnLoc) == 0x0538);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, Boos_UpLightStopTouch) == 0x0540);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, BodyLight) == 0x0548);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, DeadPar) == 0x0550);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, M_explosionSpark_Normal) == 0x0558);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, PhysicalAnimations) == 0x0560);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, AutoAimPlayer) == 0x0568);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, AttackTraceLoc) == 0x0570);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, Attack_HitTouch_01) == 0x0578);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, Head_Shot) == 0x0580);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, QYQTouch) == 0x0588);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, FootR_Shot) == 0x0590);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, FootL_Shot) == 0x0598);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, HandL_Shot) == 0x05A0);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, HandR_Shot) == 0x05A8);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, HitLight) == 0x05B0);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, XChange_Edms) == 0x05B8);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, AirZCombo) == 0x05C0);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, BloodHead) == 0x05C8);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, BloodBody) == 0x05D0);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, AirTouchBone) == 0x05E0);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, PhysicalAnimation) == 0x05F0);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, RightHand) == 0x0600);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, LeftHand) == 0x0608);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, LeftFoot) == 0x0610);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, RightFoot) == 0x0618);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, head) == 0x0620);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, EMPAirZ) == 0x0648);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, DaoBP) == 0x0668);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, STLB) == 0x0678);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, BossHealthUI) == 0x0690);
static_assert(offsetof(ANPC_GuLouBoss_AI_C, Montage_to_Play) == 0x06A8);
static_assert(offsetof(ANPC_DunArmy_AI_C, UberGraphFrame) == 0x04C0);
static_assert(offsetof(ANPC_DunArmy_AI_C, PS_FireSmall) == 0x04C8);
static_assert(offsetof(ANPC_DunArmy_AI_C, AirEdm) == 0x04D0);
static_assert(offsetof(ANPC_DunArmy_AI_C, NPC_Army_HeadRou) == 0x04D8);
static_assert(offsetof(ANPC_DunArmy_AI_C, Attack_EdmHitTouch) == 0x04E0);
static_assert(offsetof(ANPC_DunArmy_AI_C, S_DunArmy_DianLiuLoop) == 0x04E8);
static_assert(offsetof(ANPC_DunArmy_AI_C, EdmBangZi) == 0x04F0);
static_assert(offsetof(ANPC_DunArmy_AI_C, NPC_BMI_DunArmy_Bang) == 0x04F8);
static_assert(offsetof(ANPC_DunArmy_AI_C, NPC_BMI_DunArmy_Dun) == 0x0500);
static_assert(offsetof(ANPC_DunArmy_AI_C, HealthAI) == 0x0508);
static_assert(offsetof(ANPC_DunArmy_AI_C, M_explosionSpark_Air) == 0x0510);
static_assert(offsetof(ANPC_DunArmy_AI_C, M_explosionSpark_Normal) == 0x0518);
static_assert(offsetof(ANPC_DunArmy_AI_C, PhysicalAnimations) == 0x0520);
static_assert(offsetof(ANPC_DunArmy_AI_C, AutoAimPlayer) == 0x0528);
static_assert(offsetof(ANPC_DunArmy_AI_C, AttackTraceLoc) == 0x0530);
static_assert(offsetof(ANPC_DunArmy_AI_C, Attack_HitTouch_01) == 0x0538);
static_assert(offsetof(ANPC_DunArmy_AI_C, Head_Shot) == 0x0540);
static_assert(offsetof(ANPC_DunArmy_AI_C, QYQTouch) == 0x0548);
static_assert(offsetof(ANPC_DunArmy_AI_C, QYQPar) == 0x0550);
static_assert(offsetof(ANPC_DunArmy_AI_C, FootR_Shot) == 0x0558);
static_assert(offsetof(ANPC_DunArmy_AI_C, FootL_Shot) == 0x0560);
static_assert(offsetof(ANPC_DunArmy_AI_C, HandL_Shot) == 0x0568);
static_assert(offsetof(ANPC_DunArmy_AI_C, HandR_Shot) == 0x0570);
static_assert(offsetof(ANPC_DunArmy_AI_C, HitLight) == 0x0578);
static_assert(offsetof(ANPC_DunArmy_AI_C, XChange_Edms) == 0x0580);
static_assert(offsetof(ANPC_DunArmy_AI_C, AirZCombo) == 0x0588);
static_assert(offsetof(ANPC_DunArmy_AI_C, LightSwordAirZ) == 0x0590);
static_assert(offsetof(ANPC_DunArmy_AI_C, BloodHead) == 0x0598);
static_assert(offsetof(ANPC_DunArmy_AI_C, BloodBody) == 0x05A0);
static_assert(offsetof(ANPC_DunArmy_AI_C, JiaSu__Direction_16CE25EC4E3843F0746A538707AFEDE2) == 0x05AC);
static_assert(offsetof(ANPC_DunArmy_AI_C, JiaSu) == 0x05B0);
static_assert(offsetof(ANPC_DunArmy_AI_C, JianSu__Direction_F9A3F67C4F4EDB4356D5EFB7851EF30F) == 0x05BC);
static_assert(offsetof(ANPC_DunArmy_AI_C, JianSu) == 0x05C0);
static_assert(offsetof(ANPC_DunArmy_AI_C, HitPhy__Direction_E76AAD9D4D2BE4443D10A5AA92B4E14D) == 0x05CC);
static_assert(offsetof(ANPC_DunArmy_AI_C, HitPhy) == 0x05D0);
static_assert(offsetof(ANPC_DunArmy_AI_C, AirTouchBone) == 0x05E0);
static_assert(offsetof(ANPC_DunArmy_AI_C, PhysicalAnimation) == 0x05F8);
static_assert(offsetof(ANPC_DunArmy_AI_C, RightHand) == 0x0608);
static_assert(offsetof(ANPC_DunArmy_AI_C, LeftHand) == 0x0610);
static_assert(offsetof(ANPC_DunArmy_AI_C, LeftFoot) == 0x0618);
static_assert(offsetof(ANPC_DunArmy_AI_C, RightFoot) == 0x0620);
static_assert(offsetof(ANPC_DunArmy_AI_C, head) == 0x0628);
static_assert(offsetof(ANPC_IronArmy2_AI_C, UberGraphFrame) == 0x04C0);
static_assert(offsetof(ANPC_IronArmy2_AI_C, PS_FireSmall) == 0x04C8);
static_assert(offsetof(ANPC_IronArmy2_AI_C, AirEdm) == 0x04D0);
static_assert(offsetof(ANPC_IronArmy2_AI_C, EdmBangZi2) == 0x04D8);
static_assert(offsetof(ANPC_IronArmy2_AI_C, EdmBangZi) == 0x04E0);
static_assert(offsetof(ANPC_IronArmy2_AI_C, _3D_IronArmy_WP) == 0x04E8);
static_assert(offsetof(ANPC_IronArmy2_AI_C, HealthAI) == 0x04F0);
static_assert(offsetof(ANPC_IronArmy2_AI_C, M_explosionSpark_Air) == 0x04F8);
static_assert(offsetof(ANPC_IronArmy2_AI_C, M_explosionSpark_Normal) == 0x0500);
static_assert(offsetof(ANPC_IronArmy2_AI_C, FarAttack_HitTouch) == 0x0508);
static_assert(offsetof(ANPC_IronArmy2_AI_C, PhysicalAnimations) == 0x0510);
static_assert(offsetof(ANPC_IronArmy2_AI_C, AutoAimPlayer) == 0x0518);
static_assert(offsetof(ANPC_IronArmy2_AI_C, AttackTraceLoc) == 0x0520);
static_assert(offsetof(ANPC_IronArmy2_AI_C, Attack_HitTouch_01) == 0x0528);
static_assert(offsetof(ANPC_IronArmy2_AI_C, Head_Shot) == 0x0530);
static_assert(offsetof(ANPC_IronArmy2_AI_C, QYQTouch) == 0x0538);
static_assert(offsetof(ANPC_IronArmy2_AI_C, QYQPar) == 0x0540);
static_assert(offsetof(ANPC_IronArmy2_AI_C, FootR_Shot) == 0x0548);
static_assert(offsetof(ANPC_IronArmy2_AI_C, FootL_Shot) == 0x0550);
static_assert(offsetof(ANPC_IronArmy2_AI_C, HandL_Shot) == 0x0558);
static_assert(offsetof(ANPC_IronArmy2_AI_C, HandR_Shot) == 0x0560);
static_assert(offsetof(ANPC_IronArmy2_AI_C, HitLight) == 0x0568);
static_assert(offsetof(ANPC_IronArmy2_AI_C, XChange_Edms) == 0x0570);
static_assert(offsetof(ANPC_IronArmy2_AI_C, AirZCombo) == 0x0578);
static_assert(offsetof(ANPC_IronArmy2_AI_C, LightSwordAirZ) == 0x0580);
static_assert(offsetof(ANPC_IronArmy2_AI_C, BloodHead) == 0x0588);
static_assert(offsetof(ANPC_IronArmy2_AI_C, BloodBody) == 0x0590);
static_assert(offsetof(ANPC_IronArmy2_AI_C, HitPhy__Direction_7DE034254B1C3D3DA23884BDEDE200E6) == 0x059C);
static_assert(offsetof(ANPC_IronArmy2_AI_C, HitPhy) == 0x05A0);
static_assert(offsetof(ANPC_IronArmy2_AI_C, AirTouchBone) == 0x05B0);
static_assert(offsetof(ANPC_IronArmy2_AI_C, PhysicalAnimation) == 0x05C8);
static_assert(offsetof(ANPC_IronArmy2_AI_C, RightHand) == 0x05D8);
static_assert(offsetof(ANPC_IronArmy2_AI_C, LeftHand) == 0x05E0);
static_assert(offsetof(ANPC_IronArmy2_AI_C, LeftFoot) == 0x05E8);
static_assert(offsetof(ANPC_IronArmy2_AI_C, RightFoot) == 0x05F0);
static_assert(offsetof(ANPC_IronArmy2_AI_C, head) == 0x05F8);
static_assert(offsetof(ANPC_IronArmy_AI_C, UberGraphFrame) == 0x04C0);
static_assert(offsetof(ANPC_IronArmy_AI_C, PS_FireSmall) == 0x04C8);
static_assert(offsetof(ANPC_IronArmy_AI_C, AttackTraceLoc) == 0x04D0);
static_assert(offsetof(ANPC_IronArmy_AI_C, ChuJueUI) == 0x04D8);
static_assert(offsetof(ANPC_IronArmy_AI_C, AirEdm) == 0x04E0);
static_assert(offsetof(ANPC_IronArmy_AI_C, HealthAI) == 0x04E8);
static_assert(offsetof(ANPC_IronArmy_AI_C, ChuJueArea) == 0x04F0);
static_assert(offsetof(ANPC_IronArmy_AI_C, M_explosionSpark_Air) == 0x04F8);
static_assert(offsetof(ANPC_IronArmy_AI_C, M_explosionSpark_Normal) == 0x0500);
static_assert(offsetof(ANPC_IronArmy_AI_C, FarAttack_HitTouch) == 0x0508);
static_assert(offsetof(ANPC_IronArmy_AI_C, AutoAimPlayer) == 0x0518);
static_assert(offsetof(ANPC_IronArmy_AI_C, Attack_HitTouch_01) == 0x0520);
static_assert(offsetof(ANPC_IronArmy_AI_C, Head_Shot) == 0x0528);
static_assert(offsetof(ANPC_IronArmy_AI_C, QYQTouch) == 0x0530);
static_assert(offsetof(ANPC_IronArmy_AI_C, QYQPar) == 0x0538);
static_assert(offsetof(ANPC_IronArmy_AI_C, FootR_Shot) == 0x0540);
static_assert(offsetof(ANPC_IronArmy_AI_C, FootL_Shot) == 0x0548);
static_assert(offsetof(ANPC_IronArmy_AI_C, HandL_Shot) == 0x0550);
static_assert(offsetof(ANPC_IronArmy_AI_C, HandR_Shot) == 0x0558);
static_assert(offsetof(ANPC_IronArmy_AI_C, HitLight) == 0x0560);
static_assert(offsetof(ANPC_IronArmy_AI_C, XChange_Edms) == 0x0568);
static_assert(offsetof(ANPC_IronArmy_AI_C, AirZCombo) == 0x0570);
static_assert(offsetof(ANPC_IronArmy_AI_C, LightSwordAirZ) == 0x0578);
static_assert(offsetof(ANPC_IronArmy_AI_C, BloodHead) == 0x0580);
static_assert(offsetof(ANPC_IronArmy_AI_C, BloodBody) == 0x0588);
static_assert(offsetof(ANPC_IronArmy_AI_C, HitPhy__Direction_AF9CB90F4960E24F9DFA3D8CBD884BA2) == 0x0594);
static_assert(offsetof(ANPC_IronArmy_AI_C, HitPhy) == 0x0598);
static_assert(offsetof(ANPC_IronArmy_AI_C, AirTouchBone) == 0x05A8);
static_assert(offsetof(ANPC_IronArmy_AI_C, PhysicalAnimation) == 0x05C0);
static_assert(offsetof(ANPC_IronArmy_AI_C, RightHand) == 0x05D0);
static_assert(offsetof(ANPC_IronArmy_AI_C, LeftHand) == 0x05D8);
static_assert(offsetof(ANPC_IronArmy_AI_C, LeftFoot) == 0x05E0);
static_assert(offsetof(ANPC_IronArmy_AI_C, RightFoot) == 0x05E8);
static_assert(offsetof(ANPC_IronArmy_AI_C, head) == 0x05F0);
static_assert(offsetof(ANPC_IronArmy_AI_C, EMPAirZ) == 0x0634);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, UberGraphFrame) == 0x04C0);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, AirEdm) == 0x04C8);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, M_explosionSpark_Air) == 0x04D0);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, M_explosionSpark_Normal) == 0x04D8);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, FarAttack_HitTouch) == 0x04E0);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, PhysicalAnimations) == 0x04E8);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, AutoAimPlayer) == 0x04F0);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, AttackTraceLoc) == 0x04F8);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, Attack_HitTouch_01) == 0x0500);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, Head_Shot) == 0x0508);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, QYQTouch) == 0x0510);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, QYQPar) == 0x0518);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, FootR_Shot) == 0x0520);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, FootL_Shot) == 0x0528);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, HandL_Shot) == 0x0530);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, HandR_Shot) == 0x0538);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, HitLight) == 0x0540);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, XChange_Edms) == 0x0548);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, AirZCombo) == 0x0550);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, AirZ) == 0x0558);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, BloodHead) == 0x0560);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, BloodBody) == 0x0568);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, HitPhy__Direction_AE9D3ECB42466C89898631AD4DBFB101) == 0x0574);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, HitPhy) == 0x0578);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, AirTouchBone) == 0x0598);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, PhysicalAnimation) == 0x05A0);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, RightHand) == 0x05B0);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, LeftHand) == 0x05B8);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, LeftFoot) == 0x05C0);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, RightFoot) == 0x05C8);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, head) == 0x05D0);
static_assert(offsetof(ANPC_IronArmy_NewPlayer_C, NewPlayerUI) == 0x0608);
static_assert(offsetof(ANPC_Pig_AI_C, UberGraphFrame) == 0x04C0);
static_assert(offsetof(ANPC_Pig_AI_C, PS_FireSmall) == 0x04C8);
static_assert(offsetof(ANPC_Pig_AI_C, HealthAI) == 0x04D0);
static_assert(offsetof(ANPC_Pig_AI_C, AirZCombo) == 0x04D8);
static_assert(offsetof(ANPC_Pig_AI_C, AutoAimPlayer) == 0x04E0);
static_assert(offsetof(ANPC_Pig_AI_C, AttackTraceLoc) == 0x04E8);
static_assert(offsetof(ANPC_Pig_AI_C, Attack_HitTouch_01) == 0x04F0);
static_assert(offsetof(ANPC_Pig_AI_C, Head_Shot) == 0x04F8);
static_assert(offsetof(ANPC_Pig_AI_C, QYQPar) == 0x0500);
static_assert(offsetof(ANPC_Pig_AI_C, HitLight) == 0x0508);
static_assert(offsetof(ANPC_Pig_AI_C, PhysicalAnimations) == 0x0510);
static_assert(offsetof(ANPC_Pig_AI_C, XChange_Edms) == 0x0518);
static_assert(offsetof(ANPC_Pig_AI_C, LightSwordAirZ) == 0x0520);
static_assert(offsetof(ANPC_Pig_AI_C, BloodHead) == 0x0528);
static_assert(offsetof(ANPC_Pig_AI_C, BloodBody) == 0x0530);
static_assert(offsetof(ANPC_Pig_AI_C, AirTouchBone) == 0x0550);
static_assert(offsetof(ANPC_Pig_AI_C, PhysicalAnimation) == 0x0558);
static_assert(offsetof(ANPC_Pig_AI_C, RightHand) == 0x0568);
static_assert(offsetof(ANPC_Pig_AI_C, LeftHand) == 0x0570);
static_assert(offsetof(ANPC_Pig_AI_C, LeftFoot) == 0x0578);
static_assert(offsetof(ANPC_Pig_AI_C, RightFoot) == 0x0580);
static_assert(offsetof(ANPC_Pig_AI_C, head) == 0x0588);
static_assert(offsetof(ANPC_Pig_AI_C, EMPAirZ) == 0x05B0);
static_assert(offsetof(ANPC_RockLion_AI_C, UberGraphFrame) == 0x04C0);
static_assert(offsetof(ANPC_RockLion_AI_C, Sphere) == 0x04C8);
static_assert(offsetof(ANPC_RockLion_AI_C, FX_Knight_Back) == 0x04D0);
static_assert(offsetof(ANPC_RockLion_AI_C, QYQTouch) == 0x04D8);
static_assert(offsetof(ANPC_RockLion_AI_C, BodyLight) == 0x04E0);
static_assert(offsetof(ANPC_RockLion_AI_C, HealthAI) == 0x04E8);
static_assert(offsetof(ANPC_RockLion_AI_C, AirZCombo) == 0x04F0);
static_assert(offsetof(ANPC_RockLion_AI_C, AutoAimPlayer) == 0x04F8);
static_assert(offsetof(ANPC_RockLion_AI_C, AttackTraceLoc) == 0x0500);
static_assert(offsetof(ANPC_RockLion_AI_C, Attack_HitTouch_01) == 0x0508);
static_assert(offsetof(ANPC_RockLion_AI_C, Head_Shot) == 0x0510);
static_assert(offsetof(ANPC_RockLion_AI_C, QYQPar) == 0x0518);
static_assert(offsetof(ANPC_RockLion_AI_C, HitLight) == 0x0520);
static_assert(offsetof(ANPC_RockLion_AI_C, PhysicalAnimations) == 0x0528);
static_assert(offsetof(ANPC_RockLion_AI_C, XChange_Edms) == 0x0530);
static_assert(offsetof(ANPC_RockLion_AI_C, LightSwordAirZ) == 0x0538);
static_assert(offsetof(ANPC_RockLion_AI_C, BloodHead) == 0x0540);
static_assert(offsetof(ANPC_RockLion_AI_C, BloodBody) == 0x0548);
static_assert(offsetof(ANPC_RockLion_AI_C, AirTouchBone) == 0x0564);
static_assert(offsetof(ANPC_RockLion_AI_C, PhysicalAnimation) == 0x0570);
static_assert(offsetof(ANPC_RockLion_AI_C, RightHand) == 0x0580);
static_assert(offsetof(ANPC_RockLion_AI_C, LeftHand) == 0x0588);
static_assert(offsetof(ANPC_RockLion_AI_C, LeftFoot) == 0x0590);
static_assert(offsetof(ANPC_RockLion_AI_C, RightFoot) == 0x0598);
static_assert(offsetof(ANPC_RockLion_AI_C, head) == 0x05A0);
static_assert(offsetof(ANPC_RockLion_AI_C, EMPAirZ) == 0x05C8);
static_assert(offsetof(ANPC_RockLion_AI2_C, UberGraphFrame) == 0x04C0);
static_assert(offsetof(ANPC_RockLion_AI2_C, FarFireAutoAnimPlayer) == 0x04C8);
static_assert(offsetof(ANPC_RockLion_AI2_C, Sphere) == 0x04D0);
static_assert(offsetof(ANPC_RockLion_AI2_C, FX_Knight_Back) == 0x04D8);
static_assert(offsetof(ANPC_RockLion_AI2_C, QYQTouch) == 0x04E0);
static_assert(offsetof(ANPC_RockLion_AI2_C, BodyLight) == 0x04E8);
static_assert(offsetof(ANPC_RockLion_AI2_C, HealthAI) == 0x04F0);
static_assert(offsetof(ANPC_RockLion_AI2_C, AirZCombo) == 0x04F8);
static_assert(offsetof(ANPC_RockLion_AI2_C, AutoAimPlayer) == 0x0500);
static_assert(offsetof(ANPC_RockLion_AI2_C, AttackTraceLoc) == 0x0508);
static_assert(offsetof(ANPC_RockLion_AI2_C, Attack_HitTouch_01) == 0x0510);
static_assert(offsetof(ANPC_RockLion_AI2_C, Head_Shot) == 0x0518);
static_assert(offsetof(ANPC_RockLion_AI2_C, QYQPar) == 0x0520);
static_assert(offsetof(ANPC_RockLion_AI2_C, HitLight) == 0x0528);
static_assert(offsetof(ANPC_RockLion_AI2_C, PhysicalAnimations) == 0x0530);
static_assert(offsetof(ANPC_RockLion_AI2_C, XChange_Edms) == 0x0538);
static_assert(offsetof(ANPC_RockLion_AI2_C, LightSwordAirZ) == 0x0540);
static_assert(offsetof(ANPC_RockLion_AI2_C, BloodHead) == 0x0548);
static_assert(offsetof(ANPC_RockLion_AI2_C, BloodBody) == 0x0550);
static_assert(offsetof(ANPC_RockLion_AI2_C, AirTouchBone) == 0x056C);
static_assert(offsetof(ANPC_RockLion_AI2_C, PhysicalAnimation) == 0x0578);
static_assert(offsetof(ANPC_RockLion_AI2_C, RightHand) == 0x0588);
static_assert(offsetof(ANPC_RockLion_AI2_C, LeftHand) == 0x0590);
static_assert(offsetof(ANPC_RockLion_AI2_C, LeftFoot) == 0x0598);
static_assert(offsetof(ANPC_RockLion_AI2_C, RightFoot) == 0x05A0);
static_assert(offsetof(ANPC_RockLion_AI2_C, head) == 0x05A8);
static_assert(offsetof(ANPC_RockLion_AI2_C, EMPAirZ) == 0x05D0);
static_assert(offsetof(ANPC_SiMiao_AI_C, UberGraphFrame) == 0x04C0);
static_assert(offsetof(ANPC_SiMiao_AI_C, Audio_ChaoFeng) == 0x04C8);
static_assert(offsetof(ANPC_SiMiao_AI_C, Audio_HitGround) == 0x04D0);
static_assert(offsetof(ANPC_SiMiao_AI_C, PS_FireSmall) == 0x04D8);
static_assert(offsetof(ANPC_SiMiao_AI_C, SiMiao_Teleport_TuoWei) == 0x04E0);
static_assert(offsetof(ANPC_SiMiao_AI_C, SiMiao_Teleport) == 0x04E8);
static_assert(offsetof(ANPC_SiMiao_AI_C, TelePortC) == 0x04F0);
static_assert(offsetof(ANPC_SiMiao_AI_C, TelePortB) == 0x04F8);
static_assert(offsetof(ANPC_SiMiao_AI_C, TelePortA) == 0x0500);
static_assert(offsetof(ANPC_SiMiao_AI_C, ChuJueUI) == 0x0508);
static_assert(offsetof(ANPC_SiMiao_AI_C, AirEdm) == 0x0510);
static_assert(offsetof(ANPC_SiMiao_AI_C, ChuJueArea) == 0x0518);
static_assert(offsetof(ANPC_SiMiao_AI_C, NPC_BMI_SiMiaoBossHeadKui) == 0x0520);
static_assert(offsetof(ANPC_SiMiao_AI_C, M_explosionSpark_Normal) == 0x0528);
static_assert(offsetof(ANPC_SiMiao_AI_C, Attack_HitTouch_02) == 0x0530);
static_assert(offsetof(ANPC_SiMiao_AI_C, SiMiao_WPFire) == 0x0538);
static_assert(offsetof(ANPC_SiMiao_AI_C, FarFireLoc) == 0x0540);
static_assert(offsetof(ANPC_SiMiao_AI_C, BodyLight) == 0x0548);
static_assert(offsetof(ANPC_SiMiao_AI_C, FireParLight) == 0x0550);
static_assert(offsetof(ANPC_SiMiao_AI_C, AirZCombo) == 0x0558);
static_assert(offsetof(ANPC_SiMiao_AI_C, DeadPar) == 0x0560);
static_assert(offsetof(ANPC_SiMiao_AI_C, AutoAimPlayer) == 0x0568);
static_assert(offsetof(ANPC_SiMiao_AI_C, WeaponFire) == 0x0570);
static_assert(offsetof(ANPC_SiMiao_AI_C, AttackTraceLoc) == 0x0578);
static_assert(offsetof(ANPC_SiMiao_AI_C, Attack_HitTouch_01) == 0x0580);
static_assert(offsetof(ANPC_SiMiao_AI_C, Head_Shot) == 0x0588);
static_assert(offsetof(ANPC_SiMiao_AI_C, QYQTouch) == 0x0590);
static_assert(offsetof(ANPC_SiMiao_AI_C, QYQPar) == 0x0598);
static_assert(offsetof(ANPC_SiMiao_AI_C, ProceduralMesh) == 0x05A0);
static_assert(offsetof(ANPC_SiMiao_AI_C, HitLight) == 0x05A8);
static_assert(offsetof(ANPC_SiMiao_AI_C, PhysicalAnimations) == 0x05B0);
static_assert(offsetof(ANPC_SiMiao_AI_C, XChange_Edms) == 0x05B8);
static_assert(offsetof(ANPC_SiMiao_AI_C, LightSwordAirZ) == 0x05C0);
static_assert(offsetof(ANPC_SiMiao_AI_C, BloodHead) == 0x05C8);
static_assert(offsetof(ANPC_SiMiao_AI_C, BloodBody) == 0x05D0);
static_assert(offsetof(ANPC_SiMiao_AI_C, NPC_WarriorWeapon) == 0x05D8);
static_assert(offsetof(ANPC_SiMiao_AI_C, Timeline_0__Direction_05C6B793441A0B275920FD9669F24EB8) == 0x05E4);
static_assert(offsetof(ANPC_SiMiao_AI_C, Timeline) == 0x05E8);
static_assert(offsetof(ANPC_SiMiao_AI_C, AirTouchBone) == 0x0608);
static_assert(offsetof(ANPC_SiMiao_AI_C, PhysicalAnimation) == 0x0610);
static_assert(offsetof(ANPC_SiMiao_AI_C, RightHand) == 0x0620);
static_assert(offsetof(ANPC_SiMiao_AI_C, LeftHand) == 0x0628);
static_assert(offsetof(ANPC_SiMiao_AI_C, LeftFoot) == 0x0630);
static_assert(offsetof(ANPC_SiMiao_AI_C, RightFoot) == 0x0638);
static_assert(offsetof(ANPC_SiMiao_AI_C, head) == 0x0640);
static_assert(offsetof(ANPC_SiMiao_AI_C, WeaponHandIK) == 0x0658);
static_assert(offsetof(ANPC_SiMiao_AI_C, BossHealthUI) == 0x06B0);
static_assert(offsetof(ANPC_BowWarrior_AI_C, UberGraphFrame) == 0x04C0);
static_assert(offsetof(ANPC_BowWarrior_AI_C, Arrows) == 0x04C8);
static_assert(offsetof(ANPC_BowWarrior_AI_C, Bow) == 0x04D0);
static_assert(offsetof(ANPC_BowWarrior_AI_C, PS_FireSmall) == 0x04D8);
static_assert(offsetof(ANPC_BowWarrior_AI_C, AirEdm) == 0x04E0);
static_assert(offsetof(ANPC_BowWarrior_AI_C, HealthAI) == 0x04E8);
static_assert(offsetof(ANPC_BowWarrior_AI_C, AirZCombo) == 0x04F0);
static_assert(offsetof(ANPC_BowWarrior_AI_C, DeadPar) == 0x04F8);
static_assert(offsetof(ANPC_BowWarrior_AI_C, AutoAimPlayer) == 0x0500);
static_assert(offsetof(ANPC_BowWarrior_AI_C, AttackTraceLoc) == 0x0508);
static_assert(offsetof(ANPC_BowWarrior_AI_C, Attack_HitTouch_01) == 0x0510);
static_assert(offsetof(ANPC_BowWarrior_AI_C, Head_Shot) == 0x0518);
static_assert(offsetof(ANPC_BowWarrior_AI_C, QYQTouch) == 0x0520);
static_assert(offsetof(ANPC_BowWarrior_AI_C, QYQPar) == 0x0528);
static_assert(offsetof(ANPC_BowWarrior_AI_C, FootR_Shot) == 0x0530);
static_assert(offsetof(ANPC_BowWarrior_AI_C, FootL_Shot) == 0x0538);
static_assert(offsetof(ANPC_BowWarrior_AI_C, HandL_Shot) == 0x0540);
static_assert(offsetof(ANPC_BowWarrior_AI_C, HandR_Shot) == 0x0548);
static_assert(offsetof(ANPC_BowWarrior_AI_C, HitLight) == 0x0550);
static_assert(offsetof(ANPC_BowWarrior_AI_C, PhysicalAnimations) == 0x0558);
static_assert(offsetof(ANPC_BowWarrior_AI_C, XChange_Edms) == 0x0560);
static_assert(offsetof(ANPC_BowWarrior_AI_C, LightSwordAirZ) == 0x0568);
static_assert(offsetof(ANPC_BowWarrior_AI_C, BloodHead) == 0x0570);
static_assert(offsetof(ANPC_BowWarrior_AI_C, BloodBody) == 0x0578);
static_assert(offsetof(ANPC_BowWarrior_AI_C, Timeline_0__Direction_451EE9064D9111D6761F8FB028D42381) == 0x0584);
static_assert(offsetof(ANPC_BowWarrior_AI_C, Timeline) == 0x0588);
static_assert(offsetof(ANPC_BowWarrior_AI_C, DisTime__Direction_9D745F3B4DE1D92A3E7F3BA984FB01CF) == 0x0594);
static_assert(offsetof(ANPC_BowWarrior_AI_C, DisTime) == 0x0598);
static_assert(offsetof(ANPC_BowWarrior_AI_C, AirTouchBone) == 0x05B8);
static_assert(offsetof(ANPC_BowWarrior_AI_C, PhysicalAnimation) == 0x05C0);
static_assert(offsetof(ANPC_BowWarrior_AI_C, RightHand) == 0x05D0);
static_assert(offsetof(ANPC_BowWarrior_AI_C, LeftHand) == 0x05D8);
static_assert(offsetof(ANPC_BowWarrior_AI_C, LeftFoot) == 0x05E0);
static_assert(offsetof(ANPC_BowWarrior_AI_C, RightFoot) == 0x05E8);
static_assert(offsetof(ANPC_BowWarrior_AI_C, head) == 0x05F0);
static_assert(offsetof(ANPC_Warrior01_AI_C, UberGraphFrame) == 0x04C0);
static_assert(offsetof(ANPC_Warrior01_AI_C, PS_FireSmall) == 0x04C8);
static_assert(offsetof(ANPC_Warrior01_AI_C, AirEdm) == 0x04D0);
static_assert(offsetof(ANPC_Warrior01_AI_C, FireParLight) == 0x04D8);
static_assert(offsetof(ANPC_Warrior01_AI_C, HealthAI) == 0x04E0);
static_assert(offsetof(ANPC_Warrior01_AI_C, AirZCombo) == 0x04E8);
static_assert(offsetof(ANPC_Warrior01_AI_C, DeadPar) == 0x04F0);
static_assert(offsetof(ANPC_Warrior01_AI_C, AutoAimPlayer) == 0x04F8);
static_assert(offsetof(ANPC_Warrior01_AI_C, WeaponFire) == 0x0500);
static_assert(offsetof(ANPC_Warrior01_AI_C, AttackTraceLoc) == 0x0508);
static_assert(offsetof(ANPC_Warrior01_AI_C, Attack_HitTouch_01) == 0x0510);
static_assert(offsetof(ANPC_Warrior01_AI_C, Head_Shot) == 0x0518);
static_assert(offsetof(ANPC_Warrior01_AI_C, QYQTouch) == 0x0520);
static_assert(offsetof(ANPC_Warrior01_AI_C, QYQPar) == 0x0528);
static_assert(offsetof(ANPC_Warrior01_AI_C, FootR_Shot) == 0x0530);
static_assert(offsetof(ANPC_Warrior01_AI_C, FootL_Shot) == 0x0538);
static_assert(offsetof(ANPC_Warrior01_AI_C, HandL_Shot) == 0x0540);
static_assert(offsetof(ANPC_Warrior01_AI_C, HandR_Shot) == 0x0548);
static_assert(offsetof(ANPC_Warrior01_AI_C, HitLight) == 0x0550);
static_assert(offsetof(ANPC_Warrior01_AI_C, PhysicalAnimations) == 0x0558);
static_assert(offsetof(ANPC_Warrior01_AI_C, XChange_Edms) == 0x0560);
static_assert(offsetof(ANPC_Warrior01_AI_C, LightSwordAirZ) == 0x0568);
static_assert(offsetof(ANPC_Warrior01_AI_C, BloodHead) == 0x0570);
static_assert(offsetof(ANPC_Warrior01_AI_C, BloodBody) == 0x0578);
static_assert(offsetof(ANPC_Warrior01_AI_C, NPC_WarriorWeapon) == 0x0580);
static_assert(offsetof(ANPC_Warrior01_AI_C, NPC_WarriorShield) == 0x0588);
static_assert(offsetof(ANPC_Warrior01_AI_C, Light__Direction_BBF6BA28416C0EB317C4778F99B9E899) == 0x0594);
static_assert(offsetof(ANPC_Warrior01_AI_C, Light) == 0x0598);
static_assert(offsetof(ANPC_Warrior01_AI_C, Timeline_0__Direction_EA42FA3C409300D43603B99181E80B70) == 0x05A4);
static_assert(offsetof(ANPC_Warrior01_AI_C, Timeline) == 0x05A8);
static_assert(offsetof(ANPC_Warrior01_AI_C, DisTime__Direction_C2931F1E4D723C3D72C263831B3A9D15) == 0x05B4);
static_assert(offsetof(ANPC_Warrior01_AI_C, DisTime) == 0x05B8);
static_assert(offsetof(ANPC_Warrior01_AI_C, AirTouchBone) == 0x05DC);
static_assert(offsetof(ANPC_Warrior01_AI_C, PhysicalAnimation) == 0x05E8);
static_assert(offsetof(ANPC_Warrior01_AI_C, RightHand) == 0x05F8);
static_assert(offsetof(ANPC_Warrior01_AI_C, LeftHand) == 0x0600);
static_assert(offsetof(ANPC_Warrior01_AI_C, LeftFoot) == 0x0608);
static_assert(offsetof(ANPC_Warrior01_AI_C, RightFoot) == 0x0610);
static_assert(offsetof(ANPC_Warrior01_AI_C, head) == 0x0618);
static_assert(offsetof(ANPC_Warrior02_AI_C, UberGraphFrame) == 0x04C0);
static_assert(offsetof(ANPC_Warrior02_AI_C, PS_FireSmall) == 0x04C8);
static_assert(offsetof(ANPC_Warrior02_AI_C, AirEdm) == 0x04D0);
static_assert(offsetof(ANPC_Warrior02_AI_C, HealthAI) == 0x04D8);
static_assert(offsetof(ANPC_Warrior02_AI_C, AirZCombo) == 0x04E0);
static_assert(offsetof(ANPC_Warrior02_AI_C, Weapon) == 0x04E8);
static_assert(offsetof(ANPC_Warrior02_AI_C, DeadPar) == 0x04F0);
static_assert(offsetof(ANPC_Warrior02_AI_C, AutoAimPlayer) == 0x04F8);
static_assert(offsetof(ANPC_Warrior02_AI_C, AttackTraceLoc) == 0x0500);
static_assert(offsetof(ANPC_Warrior02_AI_C, Attack_HitTouch_01) == 0x0508);
static_assert(offsetof(ANPC_Warrior02_AI_C, Head_Shot) == 0x0510);
static_assert(offsetof(ANPC_Warrior02_AI_C, QYQTouch) == 0x0518);
static_assert(offsetof(ANPC_Warrior02_AI_C, QYQPar) == 0x0520);
static_assert(offsetof(ANPC_Warrior02_AI_C, FootR_Shot) == 0x0528);
static_assert(offsetof(ANPC_Warrior02_AI_C, FootL_Shot) == 0x0530);
static_assert(offsetof(ANPC_Warrior02_AI_C, HandL_Shot) == 0x0538);
static_assert(offsetof(ANPC_Warrior02_AI_C, HandR_Shot) == 0x0540);
static_assert(offsetof(ANPC_Warrior02_AI_C, HitLight) == 0x0548);
static_assert(offsetof(ANPC_Warrior02_AI_C, PhysicalAnimations) == 0x0550);
static_assert(offsetof(ANPC_Warrior02_AI_C, XChange_Edms) == 0x0558);
static_assert(offsetof(ANPC_Warrior02_AI_C, LightSwordAirZ) == 0x0560);
static_assert(offsetof(ANPC_Warrior02_AI_C, BloodHead) == 0x0568);
static_assert(offsetof(ANPC_Warrior02_AI_C, BloodBody) == 0x0570);
static_assert(offsetof(ANPC_Warrior02_AI_C, Timeline_0__Direction_48736B234D192362A4C2B9A77F62E6FA) == 0x057C);
static_assert(offsetof(ANPC_Warrior02_AI_C, Timeline) == 0x0580);
static_assert(offsetof(ANPC_Warrior02_AI_C, DisTime__Direction_96FF41B34003F7EC4DE5EE9C70C93178) == 0x058C);
static_assert(offsetof(ANPC_Warrior02_AI_C, DisTime) == 0x0590);
static_assert(offsetof(ANPC_Warrior02_AI_C, AirTouchBone) == 0x05B0);
static_assert(offsetof(ANPC_Warrior02_AI_C, PhysicalAnimation) == 0x05B8);
static_assert(offsetof(ANPC_Warrior02_AI_C, RightHand) == 0x05C8);
static_assert(offsetof(ANPC_Warrior02_AI_C, LeftHand) == 0x05D0);
static_assert(offsetof(ANPC_Warrior02_AI_C, LeftFoot) == 0x05D8);
static_assert(offsetof(ANPC_Warrior02_AI_C, RightFoot) == 0x05E0);
static_assert(offsetof(ANPC_Warrior02_AI_C, head) == 0x05E8);
static_assert(offsetof(ANPC_WarriorBig_AI_C, UberGraphFrame) == 0x04C0);
static_assert(offsetof(ANPC_WarriorBig_AI_C, FarAxe) == 0x04C8);
static_assert(offsetof(ANPC_WarriorBig_AI_C, PS_FireSmall) == 0x04D0);
static_assert(offsetof(ANPC_WarriorBig_AI_C, BodyLight) == 0x04D8);
static_assert(offsetof(ANPC_WarriorBig_AI_C, DeadPar) == 0x04E0);
static_assert(offsetof(ANPC_WarriorBig_AI_C, NPC_WarriorBig_Weapon_B) == 0x04E8);
static_assert(offsetof(ANPC_WarriorBig_AI_C, NPC_WarriorBig_Weapon_A) == 0x04F0);
static_assert(offsetof(ANPC_WarriorBig_AI_C, HealthAI) == 0x04F8);
static_assert(offsetof(ANPC_WarriorBig_AI_C, M_explosionSpark_Air) == 0x0500);
static_assert(offsetof(ANPC_WarriorBig_AI_C, M_explosionSpark_Normal) == 0x0508);
static_assert(offsetof(ANPC_WarriorBig_AI_C, FarAttack_HitTouch) == 0x0510);
static_assert(offsetof(ANPC_WarriorBig_AI_C, PhysicalAnimations) == 0x0518);
static_assert(offsetof(ANPC_WarriorBig_AI_C, AutoAimPlayer) == 0x0520);
static_assert(offsetof(ANPC_WarriorBig_AI_C, AttackTraceLoc) == 0x0528);
static_assert(offsetof(ANPC_WarriorBig_AI_C, Attack_HitTouch_01) == 0x0530);
static_assert(offsetof(ANPC_WarriorBig_AI_C, Head_Shot) == 0x0538);
static_assert(offsetof(ANPC_WarriorBig_AI_C, QYQTouch) == 0x0540);
static_assert(offsetof(ANPC_WarriorBig_AI_C, QYQPar) == 0x0548);
static_assert(offsetof(ANPC_WarriorBig_AI_C, FootR_Shot) == 0x0550);
static_assert(offsetof(ANPC_WarriorBig_AI_C, FootL_Shot) == 0x0558);
static_assert(offsetof(ANPC_WarriorBig_AI_C, HandL_Shot) == 0x0560);
static_assert(offsetof(ANPC_WarriorBig_AI_C, HandR_Shot) == 0x0568);
static_assert(offsetof(ANPC_WarriorBig_AI_C, HitLight) == 0x0570);
static_assert(offsetof(ANPC_WarriorBig_AI_C, XChange_Edms) == 0x0578);
static_assert(offsetof(ANPC_WarriorBig_AI_C, AirZCombo) == 0x0580);
static_assert(offsetof(ANPC_WarriorBig_AI_C, LightSwordAirZ) == 0x0588);
static_assert(offsetof(ANPC_WarriorBig_AI_C, BloodHead) == 0x0590);
static_assert(offsetof(ANPC_WarriorBig_AI_C, BloodBody) == 0x0598);
static_assert(offsetof(ANPC_WarriorBig_AI_C, ____0__Direction_3BB876B0486CE314C5E8A4BAE4939E58) == 0x05A4);
static_assert(offsetof(ANPC_WarriorBig_AI_C, _e_) == 0x05A8);
static_assert(offsetof(ANPC_WarriorBig_AI_C, AirTouchBone) == 0x05B8);
static_assert(offsetof(ANPC_WarriorBig_AI_C, PhysicalAnimation) == 0x05C8);
static_assert(offsetof(ANPC_WarriorBig_AI_C, RightHand) == 0x05D8);
static_assert(offsetof(ANPC_WarriorBig_AI_C, LeftHand) == 0x05E0);
static_assert(offsetof(ANPC_WarriorBig_AI_C, LeftFoot) == 0x05E8);
static_assert(offsetof(ANPC_WarriorBig_AI_C, RightFoot) == 0x05F0);
static_assert(offsetof(ANPC_WarriorBig_AI_C, head) == 0x05F8);
static_assert(offsetof(ANPC_WarriorBig_AI_C, EMPAirZ) == 0x063C);
static_assert(offsetof(ANPC_WarriorBig_AI_QiZi_C, UberGraphFrame) == 0x0650);
static_assert(offsetof(ANPC_WarriorBig_AI_QiZi_C, QiZi3) == 0x0658);
static_assert(offsetof(ANPC_WarriorBig_AI_QiZi_C, QiZi2) == 0x0660);
static_assert(offsetof(ANPC_WarriorBig_AI_QiZi_C, QiZi1) == 0x0668);
static_assert(offsetof(ANPC_RockLion_FarFire_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ANPC_RockLion_FarFire_C, S_NPC_RockLion_FireLauncher_Cue) == 0x0228);
static_assert(offsetof(ANPC_RockLion_FarFire_C, VFX_fire_jet_lg) == 0x0230);
static_assert(offsetof(ANPC_RockLion_FarFire_C, Hit) == 0x0238);
static_assert(offsetof(ANPC_RockLion_Bokren_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ANPC_RockLion_Bokren_C, VFX_GrenadeEXP_default) == 0x0228);
static_assert(offsetof(ANPC_RockLion_Bokren_C, RadialForce) == 0x0230);
static_assert(offsetof(ANPC_RockLion_Bokren_C, Tough_LP_Master_DM) == 0x0238);
static_assert(offsetof(ANPC_Eagle_AI_C, UberGraphFrame) == 0x04C0);
static_assert(offsetof(ANPC_Eagle_AI_C, AutoAimPlayer_Fire_B) == 0x04C8);
static_assert(offsetof(ANPC_Eagle_AI_C, Ghost) == 0x04D0);
static_assert(offsetof(ANPC_Eagle_AI_C, QYQTouch) == 0x04D8);
static_assert(offsetof(ANPC_Eagle_AI_C, BodyLight) == 0x04E0);
static_assert(offsetof(ANPC_Eagle_AI_C, HealthAI) == 0x04E8);
static_assert(offsetof(ANPC_Eagle_AI_C, AutoAimPlayer_Fire_A) == 0x04F0);
static_assert(offsetof(ANPC_Eagle_AI_C, Head_Shot) == 0x04F8);
static_assert(offsetof(ANPC_Eagle_AI_C, QYQPar) == 0x0500);
static_assert(offsetof(ANPC_Eagle_AI_C, HitLight) == 0x0508);
static_assert(offsetof(ANPC_Eagle_AI_C, PhysicalAnimations) == 0x0510);
static_assert(offsetof(ANPC_Eagle_AI_C, XChange_Edms) == 0x0518);
static_assert(offsetof(ANPC_Eagle_AI_C, BloodHead) == 0x0520);
static_assert(offsetof(ANPC_Eagle_AI_C, BloodBody) == 0x0528);
static_assert(offsetof(ANPC_Eagle_AI_C, Scale_Scale_D8438AE14DE31E825A135B8D2E35B2AC) == 0x0530);
static_assert(offsetof(ANPC_Eagle_AI_C, Scale__Direction_D8438AE14DE31E825A135B8D2E35B2AC) == 0x053C);
static_assert(offsetof(ANPC_Eagle_AI_C, Scale) == 0x0540);
static_assert(offsetof(ANPC_Eagle_AI_C, ____0__Direction_1258747743CC19A86A7C3A8A8B4B2B5F) == 0x054C);
static_assert(offsetof(ANPC_Eagle_AI_C, _e_) == 0x0550);
static_assert(offsetof(ANPC_Eagle_AI_C, AirTouchBone) == 0x056C);
static_assert(offsetof(ANPC_Eagle_AI_C, PhysicalAnimation) == 0x0578);
static_assert(offsetof(ANPC_Eagle_AI_C, RightHand) == 0x0588);
static_assert(offsetof(ANPC_Eagle_AI_C, LeftHand) == 0x0590);
static_assert(offsetof(ANPC_Eagle_AI_C, LeftFoot) == 0x0598);
static_assert(offsetof(ANPC_Eagle_AI_C, RightFoot) == 0x05A0);
static_assert(offsetof(ANPC_Eagle_AI_C, head) == 0x05A8);
static_assert(offsetof(ANPC_Eagle_AI_C, EMPAirZ) == 0x05D0);
static_assert(offsetof(ANPC_Eagle_AI_C, PathTag) == 0x05E4);
static_assert(offsetof(ANPC_Eagle_AI_C, Path) == 0x05F0);
static_assert(offsetof(ANPC_Eagle_AI_C, Boss) == 0x0600);
static_assert(offsetof(ANPC_Snake_AI_C, UberGraphFrame) == 0x04C0);
static_assert(offsetof(ANPC_Snake_AI_C, FarFireLoc) == 0x04C8);
static_assert(offsetof(ANPC_Snake_AI_C, AttackTraceLoc) == 0x04D0);
static_assert(offsetof(ANPC_Snake_AI_C, Attack_HitTouch_01) == 0x04D8);
static_assert(offsetof(ANPC_Snake_AI_C, Ghost) == 0x04E0);
static_assert(offsetof(ANPC_Snake_AI_C, QYQTouch) == 0x04E8);
static_assert(offsetof(ANPC_Snake_AI_C, BodyLight) == 0x04F0);
static_assert(offsetof(ANPC_Snake_AI_C, HealthAI) == 0x04F8);
static_assert(offsetof(ANPC_Snake_AI_C, AutoAimPlayer) == 0x0500);
static_assert(offsetof(ANPC_Snake_AI_C, Head_Shot) == 0x0508);
static_assert(offsetof(ANPC_Snake_AI_C, QYQPar) == 0x0510);
static_assert(offsetof(ANPC_Snake_AI_C, HitLight) == 0x0518);
static_assert(offsetof(ANPC_Snake_AI_C, PhysicalAnimations) == 0x0520);
static_assert(offsetof(ANPC_Snake_AI_C, XChange_Edms) == 0x0528);
static_assert(offsetof(ANPC_Snake_AI_C, BloodHead) == 0x0530);
static_assert(offsetof(ANPC_Snake_AI_C, BloodBody) == 0x0538);
static_assert(offsetof(ANPC_Snake_AI_C, ____0__Direction_E09387C1414A07289EC3BABAAF3AF662) == 0x0544);
static_assert(offsetof(ANPC_Snake_AI_C, _e_) == 0x0548);
static_assert(offsetof(ANPC_Snake_AI_C, AirTouchBone) == 0x0564);
static_assert(offsetof(ANPC_Snake_AI_C, PhysicalAnimation) == 0x0570);
static_assert(offsetof(ANPC_Snake_AI_C, RightHand) == 0x0580);
static_assert(offsetof(ANPC_Snake_AI_C, LeftHand) == 0x0588);
static_assert(offsetof(ANPC_Snake_AI_C, LeftFoot) == 0x0590);
static_assert(offsetof(ANPC_Snake_AI_C, RightFoot) == 0x0598);
static_assert(offsetof(ANPC_Snake_AI_C, head) == 0x05A0);
static_assert(offsetof(ANPC_Snake_AI_C, EMPAirZ) == 0x05C8);
static_assert(offsetof(ANPC_Snake_AI_C, Boss) == 0x05E0);
static_assert(offsetof(AEagleAI_Path_C, Spline) == 0x0220);
static_assert(offsetof(AEagleAI_Path_C, DefaultSceneRoot) == 0x0228);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_Root) == 0x02C8);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_TransitionResult) == 0x02F8);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_TransitionResult0) == 0x0320);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_TransitionResult1) == 0x0348);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_TransitionResult2) == 0x0370);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_TransitionResult3) == 0x0398);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_TransitionResult4) == 0x03C0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_TransitionResult5) == 0x03E8);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_TransitionResult6) == 0x0410);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_TransitionResult7) == 0x0438);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_TransitionResult8) == 0x0460);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_TransitionResult9) == 0x0488);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_TransitionResult10) == 0x04B0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_TransitionResult11) == 0x04D8);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_TransitionResult12) == 0x0500);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_TransitionResult13) == 0x0528);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_OrientationWarp) == 0x0550);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer) == 0x05E0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_OrientationWarp14) == 0x0660);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer15) == 0x06F0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByInt) == 0x0770);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_OrientationWarp16) == 0x0810);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer17) == 0x08A0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_StateResult) == 0x0920);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer18) == 0x0950);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_StateResult19) == 0x09D0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer20) == 0x0A00);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_StateResult21) == 0x0A80);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer22) == 0x0AB0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_StateResult23) == 0x0B30);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendSpacePlayer) == 0x0B60);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendSpacePlayer24) == 0x0C48);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendSpacePlayer25) == 0x0D30);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendSpacePlayer26) == 0x0E18);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByBool) == 0x0F00);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByInt27) == 0x0FA0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendSpacePlayer28) == 0x1040);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByInt29) == 0x1128);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendSpacePlayer30) == 0x11C8);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_StateResult31) == 0x12B0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer32) == 0x12E0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer33) == 0x1360);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer34) == 0x13E0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer35) == 0x1460);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_OrientationWarp36) == 0x14E0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_OrientationWarp37) == 0x1570);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_OrientationWarp38) == 0x1600);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_OrientationWarp39) == 0x1690);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByInt40) == 0x1720);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer41) == 0x17C0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer42) == 0x1840);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer43) == 0x18C0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer44) == 0x1940);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_OrientationWarp45) == 0x19C0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_OrientationWarp46) == 0x1A50);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_OrientationWarp47) == 0x1AE0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_OrientationWarp48) == 0x1B70);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByInt49) == 0x1C00);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer50) == 0x1CA0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_OrientationWarp51) == 0x1D20);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByBool52) == 0x1DB0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByBool53) == 0x1E50);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_OrientationWarp54) == 0x1EF0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer55) == 0x1F80);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByBool56) == 0x2000);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByBool57) == 0x20A0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_OrientationWarp58) == 0x2140);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_OrientationWarp59) == 0x21D0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_OrientationWarp60) == 0x2260);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_OrientationWarp61) == 0x22F0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer62) == 0x2380);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer63) == 0x2400);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer64) == 0x2480);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByInt65) == 0x2500);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer66) == 0x25A0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_OrientationWarp67) == 0x2620);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_OrientationWarp68) == 0x26B0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_OrientationWarp69) == 0x2740);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_OrientationWarp70) == 0x27D0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer71) == 0x2860);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer72) == 0x28E0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer73) == 0x2960);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByInt74) == 0x29E0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer75) == 0x2A80);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByInt76) == 0x2B00);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_OrientationWarp77) == 0x2BA0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer78) == 0x2C30);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByBool79) == 0x2CB0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByBool80) == 0x2D50);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_OrientationWarp81) == 0x2DF0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_OrientationWarp82) == 0x2E80);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_OrientationWarp83) == 0x2F10);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_OrientationWarp84) == 0x2FA0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer85) == 0x3030);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer86) == 0x30B0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer87) == 0x3130);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByInt88) == 0x31B0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer89) == 0x3250);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_OrientationWarp90) == 0x32D0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_OrientationWarp91) == 0x3360);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_OrientationWarp92) == 0x33F0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_OrientationWarp93) == 0x3480);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer94) == 0x3510);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer95) == 0x3590);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer96) == 0x3610);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByInt97) == 0x3690);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer98) == 0x3730);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_StateResult99) == 0x37B0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendSpacePlayer100) == 0x37E0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendSpacePlayer101) == 0x38C8);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendSpacePlayer102) == 0x39B0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendSpacePlayer103) == 0x3A98);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByInt104) == 0x3B80);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendSpacePlayer105) == 0x3C20);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByBool106) == 0x3D08);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByInt107) == 0x3DA8);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendSpacePlayer108) == 0x3E48);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_StateResult109) == 0x3F30);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByBool110) == 0x3F60);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer111) == 0x4000);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer112) == 0x4080);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByBool113) == 0x4100);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer114) == 0x41A0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer115) == 0x4220);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer116) == 0x42A0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer117) == 0x4320);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer118) == 0x43A0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer119) == 0x4420);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByInt120) == 0x44A0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByBool121) == 0x4540);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByInt122) == 0x45E0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_StateResult123) == 0x4680);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_StateMachine) == 0x46B0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SaveCachedPose) == 0x4760);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_TransitionResult124) == 0x48B8);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_TransitionResult125) == 0x48E0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_TransitionResult126) == 0x4908);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_TransitionResult127) == 0x4930);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_TransitionResult128) == 0x4958);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_TransitionResult129) == 0x4980);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_TransitionResult130) == 0x49A8);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_TransitionResult131) == 0x49D0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_TransitionResult132) == 0x49F8);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_TransitionResult133) == 0x4A20);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_TransitionResult134) == 0x4A48);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer135) == 0x4A70);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer136) == 0x4AF0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer137) == 0x4B70);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByInt138) == 0x4BF0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_StateResult139) == 0x4C90);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer140) == 0x4CC0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer141) == 0x4D40);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer142) == 0x4DC0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByInt143) == 0x4E40);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_StateResult144) == 0x4EE0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer145) == 0x4F10);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer146) == 0x4F90);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer147) == 0x5010);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByInt148) == 0x5090);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_StateResult149) == 0x5130);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_StateMachine150) == 0x5160);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_StateResult151) == 0x5210);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer152) == 0x5240);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer153) == 0x52C0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer154) == 0x5340);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer155) == 0x53C0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer156) == 0x5440);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByInt157) == 0x54C0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_StateResult158) == 0x5560);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer159) == 0x5590);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer160) == 0x5610);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer161) == 0x5690);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByInt162) == 0x5710);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_StateResult163) == 0x57B0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_TransitionResult164) == 0x57E0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_TransitionResult165) == 0x5808);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer166) == 0x5830);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer167) == 0x58B0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer168) == 0x5930);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByInt169) == 0x59B0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_StateResult170) == 0x5A50);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer171) == 0x5A80);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer172) == 0x5B00);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer173) == 0x5B80);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByInt174) == 0x5C00);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_StateResult175) == 0x5CA0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer176) == 0x5CD0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer177) == 0x5D50);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SequencePlayer178) == 0x5DD0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_BlendListByInt179) == 0x5E50);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_StateResult180) == 0x5EF0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_StateMachine181) == 0x5F20);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_StateResult182) == 0x5FD0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_UseCachedPose) == 0x6000);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_StateResult183) == 0x6028);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_StateMachine184) == 0x6058);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SaveCachedPose185) == 0x6108);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_RotationOffsetBlendSpace) == 0x6260);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_LocalToComponentSpace) == 0x63F0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_ComponentToLocalSpace) == 0x6410);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_UseCachedPose186) == 0x6430);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_UseCachedPose187) == 0x6458);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_TwoBoneIK) == 0x6480);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_SaveCachedPose188) == 0x6660);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_UseCachedPose189) == 0x67B8);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_Slot) == 0x67E0);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, AnimGraphNode_LayeredBoneBlend) == 0x6828);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, RotationLastTick) == 0x6908);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, IKHandL) == 0x6928);
static_assert(offsetof(UNPC_BMI_SuYa_AnimBlueprint_TPS_C, As_BMICharacter) == 0x6960);
static_assert(offsetof(ANPC_GroundBlood_C, Decal) == 0x0220);
static_assert(offsetof(ANPC_GroundBlood_C, DefaultSceneRoot) == 0x0228);
static_assert(offsetof(UNPC_BMI_SuYa_Skin00_iClone_Skeleton_AnimBlueprint_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UNPC_BMI_SuYa_Skin00_iClone_Skeleton_AnimBlueprint_C, AnimGraphNode_Root) == 0x02C8);
static_assert(offsetof(UNPC_BMI_SuYa_Skin00_iClone_Skeleton_AnimBlueprint_C, AnimGraphNode_TwoBoneIK) == 0x0300);
static_assert(offsetof(UNPC_BMI_SuYa_Skin00_iClone_Skeleton_AnimBlueprint_C, AnimGraphNode_BlendListByInt) == 0x04E0);
static_assert(offsetof(UNPC_BMI_SuYa_Skin00_iClone_Skeleton_AnimBlueprint_C, AnimGraphNode_ComponentToLocalSpace) == 0x0580);
static_assert(offsetof(UNPC_BMI_SuYa_Skin00_iClone_Skeleton_AnimBlueprint_C, AnimGraphNode_Slot) == 0x05A0);
static_assert(offsetof(UNPC_BMI_SuYa_Skin00_iClone_Skeleton_AnimBlueprint_C, AnimGraphNode_LocalToComponentSpace) == 0x05E8);
static_assert(offsetof(UNPC_BMI_SuYa_Skin00_iClone_Skeleton_AnimBlueprint_C, AnimGraphNode_Slot0) == 0x0608);
static_assert(offsetof(UNPC_BMI_SuYa_Skin00_iClone_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer) == 0x0650);
static_assert(offsetof(UNPC_BMI_SuYa_Skin00_iClone_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer1) == 0x06D0);
static_assert(offsetof(UNPC_BMI_SuYa_Skin00_iClone_Skeleton_AnimBlueprint_C, IKHandL) == 0x0750);
static_assert(offsetof(ANPC_FYQBoss_Rock_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ANPC_FYQBoss_Rock_C, RockFall) == 0x0228);
static_assert(offsetof(ANPC_FYQBoss_Rock_C, RadialForce) == 0x0230);
static_assert(offsetof(ANPC_FYQBoss_Rock_C, Rock) == 0x0238);
static_assert(offsetof(ANPC_FYQBoss_Rock_C, Arrow) == 0x0240);
static_assert(offsetof(ANPC_FYQBoss_Rock_C, ProjectileMovement) == 0x0248);
static_assert(offsetof(ANPC_FYQBoss_Rock_C, Capsule) == 0x0250);
static_assert(offsetof(AWarriorBig_AxeFly_BP2_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AWarriorBig_AxeFly_BP2_C, P_GuLouBoss_AXE_Begin) == 0x0228);
static_assert(offsetof(AWarriorBig_AxeFly_BP2_C, DeFuTrace) == 0x0230);
static_assert(offsetof(AWarriorBig_AxeFly_BP2_C, P_GuLouBoss_AxeTrails) == 0x0238);
static_assert(offsetof(AWarriorBig_AxeFly_BP2_C, Sphere) == 0x0240);
static_assert(offsetof(AWarriorBig_AxeFly_BP2_C, ProjectileMovement) == 0x0248);
static_assert(offsetof(AWarriorBig_AxeFly_BP2_C, RotatingMovement) == 0x0250);
static_assert(offsetof(AWarriorBig_AxeFly_BP2_C, NPC_BMI_GuLouBoss_Weapon_AXE) == 0x0258);
static_assert(offsetof(AWarriorBig_AxeGround_BP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AWarriorBig_AxeGround_BP_C, HitPlayerTouch) == 0x0228);
static_assert(offsetof(AWarriorBig_AxeGround_BP_C, WaterEdm) == 0x0230);
static_assert(offsetof(AWarriorBig_AxeGround_BP_C, GroundBoom) == 0x0238);
static_assert(offsetof(AWarriorBig_AxeGround_BP_C, P_GuLouBoss_AXE_Begin) == 0x0240);
static_assert(offsetof(AWarriorBig_AxeGround_BP_C, NPC_BMI_GuLouBoss_Weapon_AXE) == 0x0248);
static_assert(offsetof(AWarriorBig_AxeGround_BP_C, Arrow) == 0x0250);
static_assert(offsetof(AWarriorBig_AxeGround_BP_C, Hit_PlayerTouch) == 0x0260);
static_assert(offsetof(ANPC_RockLion_ZhaDi_BP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ANPC_RockLion_ZhaDi_BP_C, P_Hyper_LM_Explo_HitWater) == 0x0228);
static_assert(offsetof(ANPC_RockLion_ZhaDi_BP_C, Trace) == 0x0230);
static_assert(offsetof(ANPC_RockLion_ZhaDi_BP_C, P_Hardknocks_AOE_AIZhaDi) == 0x0238);
static_assert(offsetof(ANPC_RockLion_ZhaDi_BP_C, FireHitBox) == 0x0240);
static_assert(offsetof(ANPC_RockLion_ZhaDi_BP_C, Arrow) == 0x0248);
static_assert(offsetof(UNPC_Warrior_Big_AnimBlueprint_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UNPC_Warrior_Big_AnimBlueprint_C, AnimGraphNode_Root) == 0x02C8);
static_assert(offsetof(UNPC_Warrior_Big_AnimBlueprint_C, AnimGraphNode_Slot) == 0x02F8);
static_assert(offsetof(UNPC_Warrior_Big_AnimBlueprint_C, AnimGraphNode_BlendListByBool) == 0x0340);
static_assert(offsetof(UNPC_Warrior_Big_AnimBlueprint_C, AnimGraphNode_Slot0) == 0x03E0);
static_assert(offsetof(UNPC_Warrior_Big_AnimBlueprint_C, AnimGraphNode_BlendSpacePlayer) == 0x0428);
static_assert(offsetof(ANPC_WarriorBig_ZhaDi_BP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ANPC_WarriorBig_ZhaDi_BP_C, P_Hyper_LM_Explo_HitWater) == 0x0228);
static_assert(offsetof(ANPC_WarriorBig_ZhaDi_BP_C, Trace) == 0x0230);
static_assert(offsetof(ANPC_WarriorBig_ZhaDi_BP_C, P_Hardknocks_AOE_AIZhaDi) == 0x0238);
static_assert(offsetof(ANPC_WarriorBig_ZhaDi_BP_C, FireHitBox) == 0x0240);
static_assert(offsetof(ANPC_WarriorBig_ZhaDi_BP_C, Arrow) == 0x0248);
static_assert(offsetof(ANPC_WarriorBig_ZhaDi_BP2_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ANPC_WarriorBig_ZhaDi_BP2_C, P_Hyper_LM_Explo_HitWater) == 0x0228);
static_assert(offsetof(ANPC_WarriorBig_ZhaDi_BP2_C, Trace) == 0x0230);
static_assert(offsetof(ANPC_WarriorBig_ZhaDi_BP2_C, P_Hardknocks_AOE_AIZhaDi) == 0x0238);
static_assert(offsetof(ANPC_WarriorBig_ZhaDi_BP2_C, FireHitBox) == 0x0240);
static_assert(offsetof(ANPC_WarriorBig_ZhaDi_BP2_C, Arrow) == 0x0248);
static_assert(offsetof(AWarriorBig_AxeFly_BP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AWarriorBig_AxeFly_BP_C, DeFuTrace) == 0x0228);
static_assert(offsetof(AWarriorBig_AxeFly_BP_C, P_GuLouBoss_AxeTrails) == 0x0230);
static_assert(offsetof(AWarriorBig_AxeFly_BP_C, Sphere) == 0x0238);
static_assert(offsetof(AWarriorBig_AxeFly_BP_C, ProjectileMovement) == 0x0240);
static_assert(offsetof(AWarriorBig_AxeFly_BP_C, RotatingMovement) == 0x0248);
static_assert(offsetof(AWarriorBig_AxeFly_BP_C, NPC_BMI_GuLouBoss_Weapon_AXE) == 0x0250);
static_assert(offsetof(UNPC_Warrior02_AnimBlueprint_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UNPC_Warrior02_AnimBlueprint_C, AnimGraphNode_Root) == 0x02C8);
static_assert(offsetof(UNPC_Warrior02_AnimBlueprint_C, AnimGraphNode_Slot) == 0x02F8);
static_assert(offsetof(UNPC_Warrior02_AnimBlueprint_C, AnimGraphNode_BlendListByBool) == 0x0340);
static_assert(offsetof(UNPC_Warrior02_AnimBlueprint_C, AnimGraphNode_Slot0) == 0x03E0);
static_assert(offsetof(UNPC_Warrior02_AnimBlueprint_C, AnimGraphNode_BlendSpacePlayer) == 0x0428);
static_assert(offsetof(ANPC_Warrior01_ZhaDi_BP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ANPC_Warrior01_ZhaDi_BP_C, P_Hyper_LM_Explo_HitWater) == 0x0228);
static_assert(offsetof(ANPC_Warrior01_ZhaDi_BP_C, Trace) == 0x0230);
static_assert(offsetof(ANPC_Warrior01_ZhaDi_BP_C, P_Hardknocks_AOE_AIZhaDi) == 0x0238);
static_assert(offsetof(ANPC_Warrior01_ZhaDi_BP_C, FireHitBox) == 0x0240);
static_assert(offsetof(ANPC_Warrior01_ZhaDi_BP_C, Arrow) == 0x0248);
static_assert(offsetof(UNPC_Warrior01_AnimBlueprint_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UNPC_Warrior01_AnimBlueprint_C, AnimGraphNode_Root) == 0x02C8);
static_assert(offsetof(UNPC_Warrior01_AnimBlueprint_C, AnimGraphNode_BlendSpacePlayer) == 0x02F8);
static_assert(offsetof(UNPC_Warrior01_AnimBlueprint_C, AnimGraphNode_Slot) == 0x03E0);
static_assert(offsetof(UNPC_Warrior01_AnimBlueprint_C, AnimGraphNode_BlendListByBool) == 0x0428);
static_assert(offsetof(UNPC_Warrior01_AnimBlueprint_C, AnimGraphNode_Slot0) == 0x04C8);
static_assert(offsetof(UNPC_Warrior01_AnimBlueprint_C, AnimGraphNode_BlendListByBool1) == 0x0510);
static_assert(offsetof(UNPC_Warrior01_AnimBlueprint_C, AnimGraphNode_BlendSpacePlayer2) == 0x05B0);
static_assert(offsetof(ANPC_Warrior01_Fire_BP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ANPC_Warrior01_Fire_BP_C, PlayAudioTouch) == 0x0228);
static_assert(offsetof(ANPC_Warrior01_Fire_BP_C, Audio) == 0x0230);
static_assert(offsetof(ANPC_Warrior01_Fire_BP_C, FireHitBox) == 0x0238);
static_assert(offsetof(ANPC_Warrior01_Fire_BP_C, ProjectileMovement) == 0x0240);
static_assert(offsetof(ANPC_Warrior01_Fire_BP_C, Arrow) == 0x0248);
static_assert(offsetof(ANPC_Warrior01_Fire_BP_C, P_H_LRM_BulletTrailV2) == 0x0250);
static_assert(offsetof(AWarriorDunBoken_BP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AWarriorDunBoken_BP_C, BOOM) == 0x0228);
static_assert(offsetof(AWarriorDunBoken_BP_C, RadialForce) == 0x0230);
static_assert(offsetof(AWarriorDunBoken_BP_C, _3D_ZhuangZhong_DM) == 0x0238);
static_assert(offsetof(AWarriorDunBoken_BP_C, DefaultSceneRoot) == 0x0240);
static_assert(offsetof(ANPC_Warrior01_Fire_PlayerBP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ANPC_Warrior01_Fire_PlayerBP_C, FireHitBox) == 0x0228);
static_assert(offsetof(ANPC_Warrior01_Fire_PlayerBP_C, ProjectileMovement) == 0x0230);
static_assert(offsetof(ANPC_Warrior01_Fire_PlayerBP_C, Arrow) == 0x0238);
static_assert(offsetof(ANPC_Warrior01_Fire_PlayerBP_C, P_H_LRM_BulletTrailV2) == 0x0240);
static_assert(offsetof(ANPC_Warrior_BowFire_BP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ANPC_Warrior_BowFire_BP_C, Arrow) == 0x0228);
static_assert(offsetof(ANPC_Warrior_BowFire_BP_C, FireHitBox) == 0x0230);
static_assert(offsetof(ANPC_Warrior_BowFire_BP_C, VFX_fire_Arrow) == 0x0238);
static_assert(offsetof(ANPC_Warrior_BowFire_BP_C, NPC_Warrior_BowArrow) == 0x0240);
static_assert(offsetof(ANPC_Warrior_BowFire_BP_C, PlayAudioTouch) == 0x0248);
static_assert(offsetof(ANPC_Warrior_BowFire_BP_C, Audio) == 0x0250);
static_assert(offsetof(ANPC_Warrior_BowFire_BP_C, ProjectileMovement) == 0x0258);
static_assert(offsetof(ANPC_Warrior_BowFire_BP_C, P_H_LRM_BulletTrailV2) == 0x0260);
static_assert(offsetof(ANPC_WarriorBow_Fire_PlayerBP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ANPC_WarriorBow_Fire_PlayerBP_C, NPC_Warrior_BowArrow) == 0x0228);
static_assert(offsetof(ANPC_WarriorBow_Fire_PlayerBP_C, FireHitBox) == 0x0230);
static_assert(offsetof(ANPC_WarriorBow_Fire_PlayerBP_C, ProjectileMovement) == 0x0238);
static_assert(offsetof(ANPC_WarriorBow_Fire_PlayerBP_C, Arrow) == 0x0240);
static_assert(offsetof(ANPC_WarriorBow_Fire_PlayerBP_C, P_H_LRM_BulletTrailV2) == 0x0248);
static_assert(offsetof(UNPC_BMI_SiMiaoBoss_AnimBlueprint_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UNPC_BMI_SiMiaoBoss_AnimBlueprint_C, AnimGraphNode_Root) == 0x02C8);
static_assert(offsetof(UNPC_BMI_SiMiaoBoss_AnimBlueprint_C, AnimGraphNode_Slot) == 0x02F8);
static_assert(offsetof(UNPC_BMI_SiMiaoBoss_AnimBlueprint_C, AnimGraphNode_BlendListByBool) == 0x0340);
static_assert(offsetof(UNPC_BMI_SiMiaoBoss_AnimBlueprint_C, AnimGraphNode_Slot0) == 0x03E0);
static_assert(offsetof(UNPC_BMI_SiMiaoBoss_AnimBlueprint_C, AnimGraphNode_BlendSpacePlayer) == 0x0428);
static_assert(offsetof(UNPC_BMI_SiMiaoBoss_AnimBlueprint_C, AnimGraphNode_LocalToComponentSpace) == 0x0510);
static_assert(offsetof(UNPC_BMI_SiMiaoBoss_AnimBlueprint_C, AnimGraphNode_TwoBoneIK) == 0x0530);
static_assert(offsetof(UNPC_BMI_SiMiaoBoss_AnimBlueprint_C, AnimGraphNode_ComponentToLocalSpace) == 0x0710);
static_assert(offsetof(UNPC_BMI_SiMiaoBoss_AnimBlueprint_C, AnimGraphNode_BlendListByBool1) == 0x0730);
static_assert(offsetof(UNPC_BMI_SiMiaoBoss_AnimBlueprint_C, AnimGraphNode_Slot2) == 0x07D0);
static_assert(offsetof(UNPC_BMI_SiMiaoBoss_AnimBlueprint_C, AnimGraphNode_BlendSpacePlayer3) == 0x0818);
static_assert(offsetof(UNPC_BMI_SiMiaoBoss_AnimBlueprint_C, IKHandL) == 0x0908);
static_assert(offsetof(ASiMiaoBossFarFire_SwordLight_45_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ASiMiaoBossFarFire_SwordLight_45_C, RadialForce) == 0x0228);
static_assert(offsetof(ASiMiaoBossFarFire_SwordLight_45_C, ParSpawnLoc) == 0x0230);
static_assert(offsetof(ASiMiaoBossFarFire_SwordLight_45_C, FireHitBox) == 0x0238);
static_assert(offsetof(ASiMiaoBossFarFire_SwordLight_45_C, PlayAudioTouch) == 0x0240);
static_assert(offsetof(ASiMiaoBossFarFire_SwordLight_45_C, Audio) == 0x0248);
static_assert(offsetof(ASiMiaoBossFarFire_SwordLight_45_C, ProjectileMovement) == 0x0250);
static_assert(offsetof(ASiMiaoBossFarFire_SwordLight_45_C, Arrow) == 0x0258);
static_assert(offsetof(ASiMiaoBossFarFire_SwordLight_45_C, P_H_LRM_BulletTrailV2) == 0x0260);
static_assert(offsetof(ASiMiaoBossFarFire_SwordLight_90_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ASiMiaoBossFarFire_SwordLight_90_C, RadialForce) == 0x0228);
static_assert(offsetof(ASiMiaoBossFarFire_SwordLight_90_C, ParSpawnLoc) == 0x0230);
static_assert(offsetof(ASiMiaoBossFarFire_SwordLight_90_C, FireHitBox) == 0x0238);
static_assert(offsetof(ASiMiaoBossFarFire_SwordLight_90_C, PlayAudioTouch) == 0x0240);
static_assert(offsetof(ASiMiaoBossFarFire_SwordLight_90_C, Audio) == 0x0248);
static_assert(offsetof(ASiMiaoBossFarFire_SwordLight_90_C, ProjectileMovement) == 0x0250);
static_assert(offsetof(ASiMiaoBossFarFire_SwordLight_90_C, Arrow) == 0x0258);
static_assert(offsetof(ASiMiaoBossFarFire_SwordLight_90_C, P_H_LRM_BulletTrailV2) == 0x0260);
static_assert(offsetof(ASiMiaoBossFarFire_SwordLight2_Player_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ASiMiaoBossFarFire_SwordLight2_Player_C, ProjectileMovement) == 0x0228);
static_assert(offsetof(ASiMiaoBossFarFire_SwordLight2_Player_C, Arrow) == 0x0230);
static_assert(offsetof(ASiMiaoBossFarFire_SwordLight2_Player_C, P_H_LRM_BulletTrailV2) == 0x0238);
static_assert(offsetof(ASiMiaoBossFarFire_SwordLight_Player_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ASiMiaoBossFarFire_SwordLight_Player_C, ProjectileMovement) == 0x0228);
static_assert(offsetof(ASiMiaoBossFarFire_SwordLight_Player_C, Arrow) == 0x0230);
static_assert(offsetof(ASiMiaoBossFarFire_SwordLight_Player_C, P_H_LRM_BulletTrailV2) == 0x0238);
static_assert(offsetof(UNPC_BMI_RockLion_AnimBlueprint_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UNPC_BMI_RockLion_AnimBlueprint_C, AnimGraphNode_Root) == 0x02C8);
static_assert(offsetof(UNPC_BMI_RockLion_AnimBlueprint_C, AnimGraphNode_Slot) == 0x02F8);
static_assert(offsetof(UNPC_BMI_RockLion_AnimBlueprint_C, AnimGraphNode_BlendListByBool) == 0x0340);
static_assert(offsetof(UNPC_BMI_RockLion_AnimBlueprint_C, AnimGraphNode_Slot0) == 0x03E0);
static_assert(offsetof(UNPC_BMI_RockLion_AnimBlueprint_C, AnimGraphNode_BlendListByBool1) == 0x0428);
static_assert(offsetof(UNPC_BMI_RockLion_AnimBlueprint_C, AnimGraphNode_BlendSpacePlayer) == 0x04C8);
static_assert(offsetof(UNPC_BMI_RockLion_AnimBlueprint_C, AnimGraphNode_BlendSpacePlayer2) == 0x05B0);
static_assert(offsetof(UNPC_BMI_Pig_AnimBluePrint_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UNPC_BMI_Pig_AnimBluePrint_C, AnimGraphNode_Root) == 0x02C8);
static_assert(offsetof(UNPC_BMI_Pig_AnimBluePrint_C, AnimGraphNode_Slot) == 0x02F8);
static_assert(offsetof(UNPC_BMI_Pig_AnimBluePrint_C, AnimGraphNode_BlendListByBool) == 0x0340);
static_assert(offsetof(UNPC_BMI_Pig_AnimBluePrint_C, AnimGraphNode_BlendSpacePlayer) == 0x03E0);
static_assert(offsetof(UNPC_BMI_IronArmy_AnimBlueprint_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UNPC_BMI_IronArmy_AnimBlueprint_C, AnimGraphNode_Root) == 0x02C8);
static_assert(offsetof(UNPC_BMI_IronArmy_AnimBlueprint_C, AnimGraphNode_Slot) == 0x02F8);
static_assert(offsetof(UNPC_BMI_IronArmy_AnimBlueprint_C, AnimGraphNode_BlendListByBool) == 0x0340);
static_assert(offsetof(UNPC_BMI_IronArmy_AnimBlueprint_C, AnimGraphNode_Slot0) == 0x03E0);
static_assert(offsetof(UNPC_BMI_IronArmy_AnimBlueprint_C, AnimGraphNode_BlendSpacePlayer) == 0x0428);
static_assert(offsetof(UNPC_BMI_IronArmy_AnimBlueprint_C, AnimGraphNode_BlendListByBool1) == 0x0510);
static_assert(offsetof(UNPC_BMI_IronArmy_AnimBlueprint_C, AnimGraphNode_BlendSpacePlayer2) == 0x05B0);
static_assert(offsetof(ANPC_Warrior01_ZhaDi_BP2_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ANPC_Warrior01_ZhaDi_BP2_C, P_Hyper_LM_Explo_HitWater) == 0x0228);
static_assert(offsetof(ANPC_Warrior01_ZhaDi_BP2_C, Trace) == 0x0230);
static_assert(offsetof(ANPC_Warrior01_ZhaDi_BP2_C, P_Hardknocks_AOE_AIZhaDi) == 0x0238);
static_assert(offsetof(ANPC_Warrior01_ZhaDi_BP2_C, FireHitBox) == 0x0240);
static_assert(offsetof(ANPC_Warrior01_ZhaDi_BP2_C, Arrow) == 0x0248);
static_assert(offsetof(ANPC_IronAmry_Fire_BP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ANPC_IronAmry_Fire_BP_C, AudioFire) == 0x0228);
static_assert(offsetof(ANPC_IronAmry_Fire_BP_C, Missile) == 0x0230);
static_assert(offsetof(ANPC_IronAmry_Fire_BP_C, PlayAudioTouch) == 0x0238);
static_assert(offsetof(ANPC_IronAmry_Fire_BP_C, Audio) == 0x0240);
static_assert(offsetof(ANPC_IronAmry_Fire_BP_C, FireHitBox) == 0x0248);
static_assert(offsetof(ANPC_IronAmry_Fire_BP_C, ProjectileMovement) == 0x0250);
static_assert(offsetof(ANPC_IronAmry_Fire_BP_C, Arrow) == 0x0258);
static_assert(offsetof(ANPC_IronAmry_Fire_BP_C, P_H_LRM_BulletTrailV2) == 0x0260);
static_assert(offsetof(ANPC_IronAmry_Fire_PlayerBP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ANPC_IronAmry_Fire_PlayerBP_C, Missile) == 0x0228);
static_assert(offsetof(ANPC_IronAmry_Fire_PlayerBP_C, FireHitBox) == 0x0230);
static_assert(offsetof(ANPC_IronAmry_Fire_PlayerBP_C, ProjectileMovement) == 0x0238);
static_assert(offsetof(ANPC_IronAmry_Fire_PlayerBP_C, Arrow) == 0x0240);
static_assert(offsetof(ANPC_IronAmry_Fire_PlayerBP_C, P_H_LRM_BulletTrailV2) == 0x0248);
static_assert(offsetof(ANPC_FYQBoss_RockDe_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ANPC_FYQBoss_RockDe_C, RadialForce) == 0x0228);
static_assert(offsetof(ANPC_FYQBoss_RockDe_C, Destructible) == 0x0230);
static_assert(offsetof(ANPC_FYQBoss_RockDe_C, DefaultSceneRoot) == 0x0238);
static_assert(offsetof(UNPC_BMI_DunArmy_AnimBlueprint_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UNPC_BMI_DunArmy_AnimBlueprint_C, AnimGraphNode_Root) == 0x02C8);
static_assert(offsetof(UNPC_BMI_DunArmy_AnimBlueprint_C, AnimGraphNode_Slot) == 0x02F8);
static_assert(offsetof(UNPC_BMI_DunArmy_AnimBlueprint_C, AnimGraphNode_BlendListByBool) == 0x0340);
static_assert(offsetof(UNPC_BMI_DunArmy_AnimBlueprint_C, AnimGraphNode_BlendSpacePlayer) == 0x03E0);
static_assert(offsetof(ADunBoken_BP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ADunBoken_BP_C, BOOM) == 0x0228);
static_assert(offsetof(ADunBoken_BP_C, RadialForce) == 0x0230);
static_assert(offsetof(ADunBoken_BP_C, _3D_ZhuangZhong_DM) == 0x0238);
static_assert(offsetof(ADunBoken_BP_C, DefaultSceneRoot) == 0x0240);
static_assert(offsetof(AGuLouBoss_HandFire_BP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AGuLouBoss_HandFire_BP_C, ActorSequence) == 0x0228);
static_assert(offsetof(AGuLouBoss_HandFire_BP_C, HitBox) == 0x0230);
static_assert(offsetof(AGuLouBoss_HandFire_BP_C, DefaultSceneRoot) == 0x0238);
static_assert(offsetof(UNPC_BMI_GuLousBoss_AnimBlueprint_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UNPC_BMI_GuLousBoss_AnimBlueprint_C, AnimGraphNode_Root) == 0x02C8);
static_assert(offsetof(UNPC_BMI_GuLousBoss_AnimBlueprint_C, AnimGraphNode_Slot) == 0x02F8);
static_assert(offsetof(UNPC_BMI_GuLousBoss_AnimBlueprint_C, AnimGraphNode_BlendListByBool) == 0x0340);
static_assert(offsetof(UNPC_BMI_GuLousBoss_AnimBlueprint_C, AnimGraphNode_Slot0) == 0x03E0);
static_assert(offsetof(UNPC_BMI_GuLousBoss_AnimBlueprint_C, AnimGraphNode_BlendSpacePlayer) == 0x0428);
static_assert(offsetof(ANPC_FYQBoss_ZhaDi_BP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ANPC_FYQBoss_ZhaDi_BP_C, RadialForce) == 0x0228);
static_assert(offsetof(ANPC_FYQBoss_ZhaDi_BP_C, P_Hyper_LM_Explo_HitWater) == 0x0230);
static_assert(offsetof(ANPC_FYQBoss_ZhaDi_BP_C, Trace) == 0x0238);
static_assert(offsetof(ANPC_FYQBoss_ZhaDi_BP_C, P_Hardknocks_AOE_AIZhaDi) == 0x0240);
static_assert(offsetof(ANPC_FYQBoss_ZhaDi_BP_C, FireHitBox) == 0x0248);
static_assert(offsetof(ANPC_FYQBoss_ZhaDi_BP_C, Arrow) == 0x0250);
static_assert(offsetof(ANPC_FYQBossAutoAnimAmmo_BP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ANPC_FYQBossAutoAnimAmmo_BP_C, PlayAudioTouch) == 0x0228);
static_assert(offsetof(ANPC_FYQBossAutoAnimAmmo_BP_C, Audio) == 0x0230);
static_assert(offsetof(ANPC_FYQBossAutoAnimAmmo_BP_C, ForwardArrow) == 0x0238);
static_assert(offsetof(ANPC_FYQBossAutoAnimAmmo_BP_C, FireHitBox) == 0x0240);
static_assert(offsetof(ANPC_FYQBossAutoAnimAmmo_BP_C, Par) == 0x0248);
static_assert(offsetof(ANPC_FYQBossAutoAnimAmmo_BP_C, ProjectileMovement) == 0x0250);
static_assert(offsetof(ANPC_FYQBossAutoAnimAmmo_BP_C, DefaultSceneRoot) == 0x0258);
static_assert(offsetof(AGuLouBoss_Dao_BP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AGuLouBoss_Dao_BP_C, VFX_fire_row_horiz_Bright_FYQ) == 0x0228);
static_assert(offsetof(AGuLouBoss_Dao_BP_C, FX_Knight_Back) == 0x0230);
static_assert(offsetof(AGuLouBoss_Dao_BP_C, FirePar) == 0x0238);
static_assert(offsetof(AGuLouBoss_Dao_BP_C, PhysicsConstraintE) == 0x0240);
static_assert(offsetof(AGuLouBoss_Dao_BP_C, YuanHuanE) == 0x0248);
static_assert(offsetof(AGuLouBoss_Dao_BP_C, PhysicsConstraintD) == 0x0250);
static_assert(offsetof(AGuLouBoss_Dao_BP_C, YuanHuanD) == 0x0258);
static_assert(offsetof(AGuLouBoss_Dao_BP_C, YuanHuanC) == 0x0260);
static_assert(offsetof(AGuLouBoss_Dao_BP_C, PhysicsConstraintC) == 0x0268);
static_assert(offsetof(AGuLouBoss_Dao_BP_C, PhysicsConstraintB) == 0x0270);
static_assert(offsetof(AGuLouBoss_Dao_BP_C, YuanHuanB) == 0x0278);
static_assert(offsetof(AGuLouBoss_Dao_BP_C, YuanHuanA) == 0x0280);
static_assert(offsetof(AGuLouBoss_Dao_BP_C, PhysicsConstraintA) == 0x0288);
static_assert(offsetof(AGuLouBoss_Dao_BP_C, Dao) == 0x0290);
static_assert(offsetof(AGuLouBoss_Dao_BP_C, Arrow) == 0x0298);
static_assert(offsetof(AGuLouBoss_Hand_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AGuLouBoss_Hand_C, S_Snake_XULI) == 0x0228);
static_assert(offsetof(AGuLouBoss_Hand_C, S_Eagle_XULI) == 0x0230);
static_assert(offsetof(AGuLouBoss_Hand_C, S_Jzz_XULI) == 0x0238);
static_assert(offsetof(AGuLouBoss_Hand_C, S_Axe_XULI) == 0x0240);
static_assert(offsetof(AGuLouBoss_Hand_C, Arrow_Snake) == 0x0248);
static_assert(offsetof(AGuLouBoss_Hand_C, P_GuLouBoss_Snake_FireTip) == 0x0250);
static_assert(offsetof(AGuLouBoss_Hand_C, P_GuLouBoss_Snake_Begin) == 0x0258);
static_assert(offsetof(AGuLouBoss_Hand_C, Snake_Loop) == 0x0260);
static_assert(offsetof(AGuLouBoss_Hand_C, Arrow_Eagle) == 0x0268);
static_assert(offsetof(AGuLouBoss_Hand_C, P_GuLouBoss_Eagle_FireTip) == 0x0270);
static_assert(offsetof(AGuLouBoss_Hand_C, P_GuLouBoss_Eagle_Begin) == 0x0278);
static_assert(offsetof(AGuLouBoss_Hand_C, Eagle_Loop) == 0x0280);
static_assert(offsetof(AGuLouBoss_Hand_C, Arrow_Jzz) == 0x0288);
static_assert(offsetof(AGuLouBoss_Hand_C, P_GuLouBoss_Jzz_FireTip) == 0x0290);
static_assert(offsetof(AGuLouBoss_Hand_C, P_GuLouBoss_JZZ_Begin) == 0x0298);
static_assert(offsetof(AGuLouBoss_Hand_C, JZZ_Loop) == 0x02A0);
static_assert(offsetof(AGuLouBoss_Hand_C, Arrow_Axe) == 0x02A8);
static_assert(offsetof(AGuLouBoss_Hand_C, P_GuLouBoss_FireTip) == 0x02B0);
static_assert(offsetof(AGuLouBoss_Hand_C, P_GuLouBoss_FireTipAxe) == 0x02B8);
static_assert(offsetof(AGuLouBoss_Hand_C, P_GuLouBoss_AXE_Begin) == 0x02C0);
static_assert(offsetof(AGuLouBoss_Hand_C, AXE) == 0x02C8);
static_assert(offsetof(AGuLouBoss_Hand_C, Snake) == 0x02D0);
static_assert(offsetof(AGuLouBoss_Hand_C, BaldEagle) == 0x02D8);
static_assert(offsetof(AGuLouBoss_Hand_C, _3D_ZhuangZhong) == 0x02E0);
static_assert(offsetof(AGuLouBoss_Hand_C, YuanHuan) == 0x02E8);
static_assert(offsetof(AGuLouBoss_Hand_C, PhysicsConstraint) == 0x02F0);
static_assert(offsetof(AGuLouBoss_Hand_C, NPC_BMI_GuLouBoss_Hand) == 0x02F8);
static_assert(offsetof(AGuLouBoss_Hand_C, EagleDisIn__Direction_22F539984E634EBFB192DE8CE68045A9) == 0x0304);
static_assert(offsetof(AGuLouBoss_Hand_C, EagleDisIn) == 0x0308);
static_assert(offsetof(AGuLouBoss_Hand_C, Boss) == 0x0310);
static_assert(offsetof(AGuLouBossFarFire_SwordLight_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AGuLouBossFarFire_SwordLight_C, RadialForce) == 0x0228);
static_assert(offsetof(AGuLouBossFarFire_SwordLight_C, ParSpawnLoc) == 0x0230);
static_assert(offsetof(AGuLouBossFarFire_SwordLight_C, FireHitBox) == 0x0238);
static_assert(offsetof(AGuLouBossFarFire_SwordLight_C, PlayAudioTouch) == 0x0240);
static_assert(offsetof(AGuLouBossFarFire_SwordLight_C, Audio) == 0x0248);
static_assert(offsetof(AGuLouBossFarFire_SwordLight_C, ProjectileMovement) == 0x0250);
static_assert(offsetof(AGuLouBossFarFire_SwordLight_C, Arrow) == 0x0258);
static_assert(offsetof(AGuLouBossFarFire_SwordLight_C, P_H_LRM_BulletTrailV2) == 0x0260);
static_assert(offsetof(AGuLouBossFarFireGround_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AGuLouBossFarFireGround_C, RadialForce) == 0x0228);
static_assert(offsetof(AGuLouBossFarFireGround_C, S_NPC_SiMiaoBoss_FarFire_Ground_Cue) == 0x0230);
static_assert(offsetof(AGuLouBossFarFireGround_C, ProjectileMovement) == 0x0238);
static_assert(offsetof(AGuLouBossFarFireGround_C, Par) == 0x0240);
static_assert(offsetof(AGuLouBossFarFireGround_C, HitBox) == 0x0248);
static_assert(offsetof(AGuLouBossFarFireGround_C, DefaultSceneRoot) == 0x0250);
static_assert(offsetof(AGuLouBossFarFire_SwordLight_Player_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AGuLouBossFarFire_SwordLight_Player_C, ProjectileMovement) == 0x0228);
static_assert(offsetof(AGuLouBossFarFire_SwordLight_Player_C, Arrow) == 0x0230);
static_assert(offsetof(AGuLouBossFarFire_SwordLight_Player_C, P_H_LRM_BulletTrailV2) == 0x0238);
static_assert(offsetof(UNPC_BMI_GuLouBoss_Hand_AnimBlueprint_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UNPC_BMI_GuLouBoss_Hand_AnimBlueprint_C, AnimGraphNode_Root) == 0x02C8);
static_assert(offsetof(UNPC_BMI_GuLouBoss_Hand_AnimBlueprint_C, AnimGraphNode_Slot) == 0x02F8);
static_assert(offsetof(UNPC_BMI_GuLouBoss_Hand_AnimBlueprint_C, AnimGraphNode_SequencePlayer) == 0x0340);
static_assert(offsetof(AGuLouBoss_JzzFly_BP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AGuLouBoss_JzzFly_BP_C, Arrow_JzzBPSpawn) == 0x0228);
static_assert(offsetof(AGuLouBoss_JzzFly_BP_C, P_GuLouBoss_AXE_Begin) == 0x0230);
static_assert(offsetof(AGuLouBoss_JzzFly_BP_C, P_GuLouBoss_AxeTrails) == 0x0238);
static_assert(offsetof(AGuLouBoss_JzzFly_BP_C, Sphere) == 0x0240);
static_assert(offsetof(AGuLouBoss_JzzFly_BP_C, ProjectileMovement) == 0x0248);
static_assert(offsetof(AGuLouBoss_JzzFly_BP_C, RotatingMovement) == 0x0250);
static_assert(offsetof(AGuLouBoss_JzzFly_BP_C, NPC_BMI_GuLouBoss_Weapon_AXE) == 0x0258);
static_assert(offsetof(AGuLouBoss_AxeFly_BP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AGuLouBoss_AxeFly_BP_C, P_GuLouBoss_AXE_Begin) == 0x0228);
static_assert(offsetof(AGuLouBoss_AxeFly_BP_C, P_GuLouBoss_AxeTrails) == 0x0230);
static_assert(offsetof(AGuLouBoss_AxeFly_BP_C, Sphere) == 0x0238);
static_assert(offsetof(AGuLouBoss_AxeFly_BP_C, ProjectileMovement) == 0x0240);
static_assert(offsetof(AGuLouBoss_AxeFly_BP_C, RotatingMovement) == 0x0248);
static_assert(offsetof(AGuLouBoss_AxeFly_BP_C, NPC_BMI_GuLouBoss_Weapon_AXE) == 0x0250);
static_assert(offsetof(AGuLouBoss_AxeGround_BP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AGuLouBoss_AxeGround_BP_C, HitPlayerTouch) == 0x0228);
static_assert(offsetof(AGuLouBoss_AxeGround_BP_C, WaterEdm) == 0x0230);
static_assert(offsetof(AGuLouBoss_AxeGround_BP_C, LightningG) == 0x0238);
static_assert(offsetof(AGuLouBoss_AxeGround_BP_C, LightningF) == 0x0240);
static_assert(offsetof(AGuLouBoss_AxeGround_BP_C, LightningE) == 0x0248);
static_assert(offsetof(AGuLouBoss_AxeGround_BP_C, LightningD) == 0x0250);
static_assert(offsetof(AGuLouBoss_AxeGround_BP_C, LightningC) == 0x0258);
static_assert(offsetof(AGuLouBoss_AxeGround_BP_C, LightningB) == 0x0260);
static_assert(offsetof(AGuLouBoss_AxeGround_BP_C, LightningA) == 0x0268);
static_assert(offsetof(AGuLouBoss_AxeGround_BP_C, P_Kwang_LightStrike_Burst) == 0x0270);
static_assert(offsetof(AGuLouBoss_AxeGround_BP_C, GroundBoom) == 0x0278);
static_assert(offsetof(AGuLouBoss_AxeGround_BP_C, P_GuLouBoss_AXE_Begin) == 0x0280);
static_assert(offsetof(AGuLouBoss_AxeGround_BP_C, NPC_BMI_GuLouBoss_Weapon_AXE) == 0x0288);
static_assert(offsetof(AGuLouBoss_AxeGround_BP_C, Arrow) == 0x0290);
static_assert(offsetof(AGuLouBoss_AxeGround_BP_C, Hit_PlayerTouch) == 0x02A0);
static_assert(offsetof(AGuLouBoss_Lightning_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AGuLouBoss_Lightning_C, Decal) == 0x0228);
static_assert(offsetof(AGuLouBoss_Lightning_C, BOOM) == 0x0230);
static_assert(offsetof(AGuLouBoss_Lightning_C, HitBox) == 0x0238);
static_assert(offsetof(AGuLouBoss_Lightning_C, P_Kwang_LightStrike_Burst) == 0x0240);
static_assert(offsetof(AGuLouBoss_Jzz_Ground_BP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AGuLouBoss_Jzz_Ground_BP_C, S_JzzFly_InSide) == 0x0228);
static_assert(offsetof(AGuLouBoss_Jzz_Ground_BP_C, S_JzzFly_Loop) == 0x0230);
static_assert(offsetof(AGuLouBoss_Jzz_Ground_BP_C, SpotLight) == 0x0238);
static_assert(offsetof(AGuLouBoss_Jzz_Ground_BP_C, JzzEdm) == 0x0240);
static_assert(offsetof(AGuLouBoss_Jzz_Ground_BP_C, Hit_PlayerTouch) == 0x0248);
static_assert(offsetof(AGuLouBoss_Jzz_Ground_BP_C, FoGuang) == 0x0250);
static_assert(offsetof(AGuLouBoss_Jzz_Ground_BP_C, JzzOpen) == 0x0258);
static_assert(offsetof(AGuLouBoss_Jzz_Ground_BP_C, Boom2) == 0x0260);
static_assert(offsetof(AGuLouBoss_Jzz_Ground_BP_C, BOOM) == 0x0268);
static_assert(offsetof(AGuLouBoss_Jzz_Ground_BP_C, RotatingMovement) == 0x0270);
static_assert(offsetof(AGuLouBoss_Jzz_Ground_BP_C, Trace) == 0x0278);
static_assert(offsetof(AGuLouBoss_Jzz_Ground_BP_C, _3D_ZhuangZhong) == 0x0280);
static_assert(offsetof(AGuLouBoss_Jzz_Ground_BP_C, DefaultSceneRoot) == 0x0288);
static_assert(offsetof(AGuLouBoss_Jzz_Ground_BP_C, Dis__Direction_C27F69E3424166FFCD5723AB0260F63B) == 0x0294);
static_assert(offsetof(AGuLouBoss_Jzz_Ground_BP_C, Dis) == 0x0298);
static_assert(offsetof(AGuLouBoss_Jzz_Ground_BP_C, Scale_Scale_22C627CA4EC5A2E2639BB6AFA21BE1DC) == 0x02A0);
static_assert(offsetof(AGuLouBoss_Jzz_Ground_BP_C, Scale__Direction_22C627CA4EC5A2E2639BB6AFA21BE1DC) == 0x02B0);
static_assert(offsetof(AGuLouBoss_Jzz_Ground_BP_C, Scale) == 0x02B8);
static_assert(offsetof(AGuLouBoss_JzzBoken_BP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AGuLouBoss_JzzBoken_BP_C, BOOM) == 0x0228);
static_assert(offsetof(AGuLouBoss_JzzBoken_BP_C, RadialForce) == 0x0230);
static_assert(offsetof(AGuLouBoss_JzzBoken_BP_C, _3D_ZhuangZhong_DM) == 0x0238);
static_assert(offsetof(AGuLouBoss_JzzBoken_BP_C, DefaultSceneRoot) == 0x0240);
static_assert(offsetof(AGuLouBoss_Snake_Du_BP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AGuLouBoss_Snake_Du_BP_C, ActorSequence) == 0x0228);
static_assert(offsetof(AGuLouBoss_Snake_Du_BP_C, SnakeXXX) == 0x0230);
static_assert(offsetof(AGuLouBoss_Snake_Du_BP_C, Hit) == 0x0238);
static_assert(offsetof(AGuLouBoss_EagleFarFire_BP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AGuLouBoss_EagleFarFire_BP_C, ForwardArrow) == 0x0228);
static_assert(offsetof(AGuLouBoss_EagleFarFire_BP_C, PlayAudioTouch) == 0x0230);
static_assert(offsetof(AGuLouBoss_EagleFarFire_BP_C, Audio) == 0x0238);
static_assert(offsetof(AGuLouBoss_EagleFarFire_BP_C, FireHitBox) == 0x0240);
static_assert(offsetof(AGuLouBoss_EagleFarFire_BP_C, ProjectileMovement) == 0x0248);
static_assert(offsetof(AGuLouBoss_EagleFarFire_BP_C, Arrow) == 0x0250);
static_assert(offsetof(AGuLouBoss_EagleFarFire_BP_C, P_H_LRM_BulletTrailV2) == 0x0258);
static_assert(offsetof(AGuLouBoss_EagleFarFire_PlayerBP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AGuLouBoss_EagleFarFire_PlayerBP_C, FireHitBox) == 0x0228);
static_assert(offsetof(AGuLouBoss_EagleFarFire_PlayerBP_C, ProjectileMovement) == 0x0230);
static_assert(offsetof(AGuLouBoss_EagleFarFire_PlayerBP_C, Arrow) == 0x0238);
static_assert(offsetof(AGuLouBoss_EagleFarFire_PlayerBP_C, P_H_LRM_BulletTrailV2) == 0x0240);
static_assert(offsetof(ANPC_FYQBoss_HandFire_BP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ANPC_FYQBoss_HandFire_BP_C, ActorSequence) == 0x0228);
static_assert(offsetof(ANPC_FYQBoss_HandFire_BP_C, HitBox) == 0x0230);
static_assert(offsetof(ANPC_FYQBoss_HandFire_BP_C, Par) == 0x0238);
static_assert(offsetof(ANPC_FYQBoss_HandFire_BP_C, DefaultSceneRoot) == 0x0240);
static_assert(offsetof(AGuLouBoss_GroundFire_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AGuLouBoss_GroundFire_C, Hit03) == 0x0228);
static_assert(offsetof(AGuLouBoss_GroundFire_C, Hit02) == 0x0230);
static_assert(offsetof(AGuLouBoss_GroundFire_C, Hit01) == 0x0238);
static_assert(offsetof(AGuLouBoss_GroundFire_C, Par) == 0x0240);
static_assert(offsetof(AGuLouBoss_GroundFire_C, DefaultSceneRoot) == 0x0248);
static_assert(offsetof(ANPC_FYQBoss_GroundFire_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ANPC_FYQBoss_GroundFire_C, Hit03) == 0x0228);
static_assert(offsetof(ANPC_FYQBoss_GroundFire_C, Hit02) == 0x0230);
static_assert(offsetof(ANPC_FYQBoss_GroundFire_C, Hit01) == 0x0238);
static_assert(offsetof(ANPC_FYQBoss_GroundFire_C, Par) == 0x0240);
static_assert(offsetof(ANPC_FYQBoss_GroundFire_C, DefaultSceneRoot) == 0x0248);
