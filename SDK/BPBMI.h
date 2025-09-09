
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: ActorSequence
/// dependency: ApexDestruction
/// dependency: CinematicCamera
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: NPC_AI
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Game/BPBMI/ChuJueBP/Player_ChuJue_Army_Spawn.Player_ChuJue_Army_Spawn_C
/// Size: 0x0308 (776 bytes) (0x000220 - 0x000308) align 8 MaxSize: 0x0308
class APlayer_ChuJue_Army_Spawn_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UDecalComponent*                             CS2_BloodB;                                                 // 0x0228   (0x0008)  
	class UDecalComponent*                             CS1_BloodD;                                                 // 0x0230   (0x0008)  
	class UDecalComponent*                             CS8_BloodB;                                                 // 0x0238   (0x0008)  
	class UActorSequenceComponent*                     CS8;                                                        // 0x0240   (0x0008)  
	class UActorSequenceComponent*                     CS7;                                                        // 0x0248   (0x0008)  
	class URectLightComponent*                         RectLightR;                                                 // 0x0250   (0x0008)  
	class UActorSequenceComponent*                     CS6;                                                        // 0x0258   (0x0008)  
	class UActorSequenceComponent*                     CS5;                                                        // 0x0260   (0x0008)  
	class UDecalComponent*                             CS4_BloodA;                                                 // 0x0268   (0x0008)  
	class UActorSequenceComponent*                     CS4;                                                        // 0x0270   (0x0008)  
	class UDecalComponent*                             CS3_BloodA;                                                 // 0x0278   (0x0008)  
	class UDecalComponent*                             CS2_BloodA1;                                                // 0x0280   (0x0008)  
	class UActorSequenceComponent*                     CS3;                                                        // 0x0288   (0x0008)  
	class UDecalComponent*                             CS1_BloodC;                                                 // 0x0290   (0x0008)  
	class UDecalComponent*                             CS1_BloodB;                                                 // 0x0298   (0x0008)  
	class UDecalComponent*                             CS1_BloodA;                                                 // 0x02A0   (0x0008)  
	class UDecalComponent*                             CS2_BloodA;                                                 // 0x02A8   (0x0008)  
	class UActorSequenceComponent*                     CS2;                                                        // 0x02B0   (0x0008)  
	class URectLightComponent*                         RectLightB;                                                 // 0x02B8   (0x0008)  
	class URectLightComponent*                         RectLightL;                                                 // 0x02C0   (0x0008)  
	class UStaticMeshComponent*                        EXO;                                                        // 0x02C8   (0x0008)  
	class UArrowComponent*                             PlayerOutPoint;                                             // 0x02D0   (0x0008)  
	class UActorSequenceComponent*                     CS1;                                                        // 0x02D8   (0x0008)  
	class UCineCameraComponent*                        CineCamera;                                                 // 0x02E0   (0x0008)  
	class UStaticMeshComponent*                        OneHandSword_Mesh;                                          // 0x02E8   (0x0008)  
	class USkeletalMeshComponent*                      Army;                                                       // 0x02F0   (0x0008)  
	class USkeletalMeshComponent*                      Player;                                                     // 0x02F8   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0300   (0x0008)  


	/// Functions
	// Function /Game/BPBMI/ChuJueBP/Player_ChuJue_Army_Spawn.Player_ChuJue_Army_Spawn_C.Completed_79F2A6574D03E378A3C9239A175D69BF
	// void Completed_79F2A6574D03E378A3C9239A175D69BF(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ChuJueBP/Player_ChuJue_Army_Spawn.Player_ChuJue_Army_Spawn_C.StealthKill
	// void StealthKill();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ChuJueBP/Player_ChuJue_Army_Spawn.Player_ChuJue_Army_Spawn_C.FristKill
	// void FristKill();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ChuJueBP/Player_ChuJue_Army_Spawn.Player_ChuJue_Army_Spawn_C.HideKill
	// void HideKill();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ChuJueBP/Player_ChuJue_Army_Spawn.Player_ChuJue_Army_Spawn_C.RandomKill
	// void RandomKill();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ChuJueBP/Player_ChuJue_Army_Spawn.Player_ChuJue_Army_Spawn_C.ChangeSkin
	// void ChangeSkin();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ChuJueBP/Player_ChuJue_Army_Spawn.Player_ChuJue_Army_Spawn_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/BPBMI/ChuJueBP/Player_ChuJue_Army_Spawn.Player_ChuJue_Army_Spawn_C.ExecuteUbergraph_Player_ChuJue_Army_Spawn
	// void ExecuteUbergraph_Player_ChuJue_Army_Spawn(int32_t EntryPoint);                                                      // [0x148e900] Final|HasDefaults    
};

/// Class /Game/BPBMI/SpawnAI/BMI_Spawn_AI.BMI_Spawn_AI_C
/// Size: 0x02AD (685 bytes) (0x000220 - 0x0002AD) align 8 MaxSize: 0x02AD
class ABMI_Spawn_AI_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UParticleSystemComponent*                    AI_Spawn_Par;                                               // 0x0228   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0230   (0x0008)  
	class UBillboardComponent*                         billboard;                                                  // 0x0238   (0x0008)  
	float                                              Spawn_AI_Delay;                                             // 0x0240   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0244   (0x0004)  MISSED
	class UClass*                                      Spawn_AI_Type;                                              // 0x0248   (0x0008)  
	bool                                               Loop_Trigger;                                               // 0x0250   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0251   (0x0007)  MISSED
	SDK_UNDEFINED(16,323) /* FMulticastInlineDelegate */ __um(Level_BP_AIEvent_BMI);                               // 0x0258   (0x0010)  
	bool                                               Spawn_Par;                                                  // 0x0268   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0269   (0x0003)  MISSED
	float                                              AISpawnIdleTime;                                            // 0x026C   (0x0004)  
	float                                              AIHealth;                                                   // 0x0270   (0x0004)  
	bool                                               UseNowHealth_;                                              // 0x0274   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0275   (0x0003)  MISSED
	int32_t                                            Army_AttackNumber;                                          // 0x0278   (0x0004)  
	int32_t                                            XunLuoType;                                                 // 0x027C   (0x0004)  
	float                                              Army_SpawnFireTimeMin;                                      // 0x0280   (0x0004)  
	float                                              Army_SpawnFireTimeMax;                                      // 0x0284   (0x0004)  
	bool                                               NewPlayerKill__XunLuo_;                                     // 0x0288   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0289   (0x0007)  MISSED
	class ANPC_Army_BMI01_C*                           Army01;                                                     // 0x0290   (0x0008)  
	bool                                               New_Player_AI_;                                             // 0x0298   (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x0299   (0x0007)  MISSED
	class ATargetPoint*                                Cover;                                                      // 0x02A0   (0x0008)  
	bool                                               ArmyCanCover_;                                              // 0x02A8   (0x0001)  
	bool                                               AirPlaneSpawn_;                                             // 0x02A9   (0x0001)  
	bool                                               RockLionType;                                               // 0x02AA   (0x0001)  
	bool                                               BowStandFire_;                                              // 0x02AB   (0x0001)  
	bool                                               Must_Hide_Kill_;                                            // 0x02AC   (0x0001)  


	/// Functions
	// Function /Game/BPBMI/SpawnAI/BMI_Spawn_AI.BMI_Spawn_AI_C.Spawn_Function
	// void Spawn_Function();                                                                                                   // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/SpawnAI/BMI_Spawn_AI.BMI_Spawn_AI_C.Spawn_AI
	// void Spawn_AI();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/SpawnAI/BMI_Spawn_AI.BMI_Spawn_AI_C.Level_BP
	// void Level_BP();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/SpawnAI/BMI_Spawn_AI.BMI_Spawn_AI_C.ExecuteUbergraph_BMI_Spawn_AI
	// void ExecuteUbergraph_BMI_Spawn_AI(int32_t EntryPoint);                                                                  // [0x148e900] Final|HasDefaults    
	// Function /Game/BPBMI/SpawnAI/BMI_Spawn_AI.BMI_Spawn_AI_C.Level_BP_AIEvent_BMI__DelegateSignature
	// void Level_BP_AIEvent_BMI__DelegateSignature();                                                                          // [0x148e900] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C
/// Size: 0x0368 (872 bytes) (0x000220 - 0x000368) align 8 MaxSize: 0x0368
class AMeleePowerAir_BP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UDecalComponent*                             DecalK;                                                     // 0x0228   (0x0008)  
	class UDecalComponent*                             DecalJ;                                                     // 0x0230   (0x0008)  
	class UDecalComponent*                             DecalI;                                                     // 0x0238   (0x0008)  
	class UDecalComponent*                             DecalH;                                                     // 0x0240   (0x0008)  
	class UDecalComponent*                             DecalG;                                                     // 0x0248   (0x0008)  
	class UDecalComponent*                             DecalF;                                                     // 0x0250   (0x0008)  
	class UDecalComponent*                             DecalE;                                                     // 0x0258   (0x0008)  
	class UDecalComponent*                             DecalD;                                                     // 0x0260   (0x0008)  
	class UDecalComponent*                             DecalC;                                                     // 0x0268   (0x0008)  
	class UDecalComponent*                             DecalB;                                                     // 0x0270   (0x0008)  
	class UDecalComponent*                             DecalA;                                                     // 0x0278   (0x0008)  
	class USphereComponent*                            C4_Box;                                                     // 0x0280   (0x0008)  
	class UParticleSystemComponent*                    MeleePowerAirHitGorund_C4;                                  // 0x0288   (0x0008)  
	class USphereComponent*                            B4_Box;                                                     // 0x0290   (0x0008)  
	class UParticleSystemComponent*                    MeleePowerAirHitGorund_B4;                                  // 0x0298   (0x0008)  
	class USphereComponent*                            C3_Box;                                                     // 0x02A0   (0x0008)  
	class USphereComponent*                            C2_Box;                                                     // 0x02A8   (0x0008)  
	class USphereComponent*                            C1_Box;                                                     // 0x02B0   (0x0008)  
	class USphereComponent*                            B3_Box;                                                     // 0x02B8   (0x0008)  
	class USphereComponent*                            B2_Box;                                                     // 0x02C0   (0x0008)  
	class USphereComponent*                            B1_Box;                                                     // 0x02C8   (0x0008)  
	class USphereComponent*                            A4_Box;                                                     // 0x02D0   (0x0008)  
	class USphereComponent*                            A3_Box;                                                     // 0x02D8   (0x0008)  
	class USphereComponent*                            A2_Box;                                                     // 0x02E0   (0x0008)  
	class USphereComponent*                            A1_Box;                                                     // 0x02E8   (0x0008)  
	class UActorSequenceComponent*                     ActorSequence;                                              // 0x02F0   (0x0008)  
	class UParticleSystemComponent*                    MeleePowerAirHitGorund_C3;                                  // 0x02F8   (0x0008)  
	class UParticleSystemComponent*                    MeleePowerAirHitGorund_C2;                                  // 0x0300   (0x0008)  
	class UParticleSystemComponent*                    MeleePowerAirHitGorund_C1;                                  // 0x0308   (0x0008)  
	class UParticleSystemComponent*                    MeleePowerAirHitGorund_B1;                                  // 0x0310   (0x0008)  
	class UParticleSystemComponent*                    MeleePowerAirHitGorund_B2;                                  // 0x0318   (0x0008)  
	class UParticleSystemComponent*                    MeleePowerAirHitGorund_B3;                                  // 0x0320   (0x0008)  
	class UParticleSystemComponent*                    MeleePowerAirHitGorund_A4;                                  // 0x0328   (0x0008)  
	class UParticleSystemComponent*                    MeleePowerAirHitGorund_A3;                                  // 0x0330   (0x0008)  
	class UParticleSystemComponent*                    MeleePowerAirHitGorund_A2;                                  // 0x0338   (0x0008)  
	class UParticleSystemComponent*                    MeleePowerAirHitGorund_A1;                                  // 0x0340   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0348   (0x0008)  
	float                                              MeleePowerAirHit_A;                                         // 0x0350   (0x0004)  
	FVector                                            AILoc;                                                      // 0x0354   (0x000C)  
	float                                              MeleePowerAirHit_B;                                         // 0x0360   (0x0004)  
	float                                              MeleePowerAirHit_C;                                         // 0x0364   (0x0004)  


	/// Functions
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_ShieldHit
	// void Send_ShieldHit();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_HitSword
	// void Send_HitSword(float Hit, int32_t FiretType);                                                                        // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_EMP
	// void Send_EMP(float Hit);                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_MeleePower
	// void Send_MeleePower(float Hit);                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_UpLightSword
	// void Send_UpLightSword(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_HuaChan
	// void Send_HuaChan();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_KanJi
	// void Send_KanJi(float Hit);                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_ZhaDi
	// void Send_ZhaDi();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_ShieldHitMeleeOrSword
	// void Send_ShieldHitMeleeOrSword(int32_t Hit);                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_AIQYQ
	// void Send_AIQYQ();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_NearDefu
	// void Send_NearDefu(int32_t FireType);                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_PerfectDefu
	// void Send_PerfectDefu(int32_t FireType);                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_AIFlyQYQ
	// void Send_AIFlyQYQ();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_AIBoat
	// void Send_AIBoat(class UPrimitiveComponent* HitBox, float Hit);                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_AIDEFUHealths
	// void Send_AIDEFUHealths(float DEFUHealth, float BloddHealth, bool HaveDefu_);                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_DisPlayAIHealthUI
	// void Send_DisPlayAIHealthUI(bool Vis_);                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_ForceAIHit
	// void Send_ForceAIHit();                                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_BloodHK
	// void Send_BloodHK();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_DefuHK
	// void Send_DefuHK();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_Add_Alerts
	// void Send_Add_Alerts(float DS);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_Dee_Alert
	// void Send_Dee_Alert();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_ForwardSeePlayer
	// void Send_ForwardSeePlayer();                                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_FootAI_Alert
	// void Send_FootAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_BackSeePlayer
	// void Send_BackSeePlayer();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_ShunAI_Alert
	// void Send_ShunAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_SprintAttack
	// void Send_SprintAttack(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_PlayerHitCarAI
	// void Send_PlayerHitCarAI();                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_PlayerQYQAI
	// void Send_PlayerQYQAI(int32_t Number);                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_GERFire
	// void Send_GERFire();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_HealthUIVis
	// void Send_HealthUIVis();                                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_XuLiMelee
	// void Send_XuLiMelee(float Hit);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.Send_GuLouHand_Hit
	// void Send_GuLouHand_Hit(float Hit);                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.BndEvt__A1_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__A1_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.BndEvt__A2_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__A2_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.BndEvt__A3_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__A3_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.BndEvt__B3_Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__B3_Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.BndEvt__B2_Box_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__B2_Box_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.BndEvt__B1_Box_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__B1_Box_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.BndEvt__C1_Box_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__C1_Box_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.BndEvt__C2_Box_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__C2_Box_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.BndEvt__C3_Box_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__C3_Box_K2Node_ComponentBoundEvent_10_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.BndEvt__MeleePowerAir_BP_A4_Box_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__MeleePowerAir_BP_A4_Box_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerAir_BP.MeleePowerAir_BP_C.ExecuteUbergraph_MeleePowerAir_BP
	// void ExecuteUbergraph_MeleePowerAir_BP(int32_t EntryPoint);                                                              // [0x148e900] Final|HasDefaults    
};

/// Class /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C
/// Size: 0x0388 (904 bytes) (0x000220 - 0x000388) align 8 MaxSize: 0x0388
class AArmy_Boat_01_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class USphereComponent*                            QYQC;                                                       // 0x0228   (0x0008)  
	class USphereComponent*                            QYQA;                                                       // 0x0230   (0x0008)  
	class USphereComponent*                            QYQB;                                                       // 0x0238   (0x0008)  
	class UAudioComponent*                             EngineSound;                                                // 0x0240   (0x0008)  
	class URectLightComponent*                         RectLight;                                                  // 0x0248   (0x0008)  
	class UParticleSystemComponent*                    Fire25_;                                                    // 0x0250   (0x0008)  
	class UParticleSystemComponent*                    Fire50_;                                                    // 0x0258   (0x0008)  
	class UParticleSystemComponent*                    Fire70_2;                                                   // 0x0260   (0x0008)  
	class UParticleSystemComponent*                    Fire70_;                                                    // 0x0268   (0x0008)  
	class UAudioComponent*                             S_Broken_Boat_Cue;                                          // 0x0270   (0x0008)  
	class UParticleSystemComponent*                    BoomWaterPar;                                               // 0x0278   (0x0008)  
	class URadialForceComponent*                       RadialForce;                                                // 0x0280   (0x0008)  
	class UParticleSystemComponent*                    BoomPar;                                                    // 0x0288   (0x0008)  
	class UCapsuleComponent*                           HitBoxC;                                                    // 0x0290   (0x0008)  
	class UCapsuleComponent*                           HitBoxA;                                                    // 0x0298   (0x0008)  
	class UCapsuleComponent*                           HitBoxB;                                                    // 0x02A0   (0x0008)  
	class USkeletalMeshComponent*                      NPC_Army05;                                                 // 0x02A8   (0x0008)  
	class UAudioComponent*                             WeaponFireSoundB;                                           // 0x02B0   (0x0008)  
	class UArrowComponent*                             FirePointB;                                                 // 0x02B8   (0x0008)  
	class UArrowComponent*                             ParPointB;                                                  // 0x02C0   (0x0008)  
	class UParticleSystemComponent*                    WeaponFireParB;                                             // 0x02C8   (0x0008)  
	class USkeletalMeshComponent*                      WeaponMeshB;                                                // 0x02D0   (0x0008)  
	class USkeletalMeshComponent*                      NPC_Army04;                                                 // 0x02D8   (0x0008)  
	class USphereComponent*                            CheckPlayerBox;                                             // 0x02E0   (0x0008)  
	class UAudioComponent*                             WeaponFireSoundA;                                           // 0x02E8   (0x0008)  
	class UArrowComponent*                             FirePointA;                                                 // 0x02F0   (0x0008)  
	class UArrowComponent*                             ParPointA;                                                  // 0x02F8   (0x0008)  
	class UParticleSystemComponent*                    WeaponFireParA;                                             // 0x0300   (0x0008)  
	class USkeletalMeshComponent*                      WeaponMeshA;                                                // 0x0308   (0x0008)  
	class USkeletalMeshComponent*                      NPC_Army03;                                                 // 0x0310   (0x0008)  
	class UStaticMeshComponent*                        boat;                                                       // 0x0318   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0320   (0x0008)  
	bool                                               IsBoatDead_;                                                // 0x0328   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0329   (0x0003)  MISSED
	float                                              WeaponHit;                                                  // 0x032C   (0x0004)  
	TArray<float>                                      WeaponFireRange;                                            // 0x0330   (0x0010)  
	bool                                               Is_Fire_;                                                   // 0x0340   (0x0001)  
	bool                                               SeePlayer;                                                  // 0x0341   (0x0001)  
	bool                                               CanFireA_;                                                  // 0x0342   (0x0001)  
	bool                                               CanFireB_;                                                  // 0x0343   (0x0001)  
	float                                              HealthA;                                                    // 0x0344   (0x0004)  
	float                                              HealthB;                                                    // 0x0348   (0x0004)  
	float                                              HealthC;                                                    // 0x034C   (0x0004)  
	class UCapsuleComponent*                           NewVar;                                                     // 0x0350   (0x0008)  
	bool                                               IsADead_;                                                   // 0x0358   (0x0001)  
	bool                                               IsBDead_;                                                   // 0x0359   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x035A   (0x0002)  MISSED
	float                                              HealthBoat;                                                 // 0x035C   (0x0004)  
	bool                                               IsCDead_;                                                   // 0x0360   (0x0001)  
	bool                                               CanBegin_;                                                  // 0x0361   (0x0001)  
	bool                                               IsFirstSpawn_;                                              // 0x0362   (0x0001)  
	unsigned char                                      UnknownData02_6[0x5];                                       // 0x0363   (0x0005)  MISSED
	SDK_UNDEFINED(16,324) /* FMulticastInlineDelegate */ __um(DiverDead);                                          // 0x0368   (0x0010)  
	SDK_UNDEFINED(16,325) /* FMulticastInlineDelegate */ __um(BoatDead);                                           // 0x0378   (0x0010)  


	/// Functions
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_ShieldHit
	// void Send_ShieldHit();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_HitSword
	// void Send_HitSword(float Hit, int32_t FiretType);                                                                        // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_EMP
	// void Send_EMP(float Hit);                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_MeleePower
	// void Send_MeleePower(float Hit);                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_UpLightSword
	// void Send_UpLightSword(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_HuaChan
	// void Send_HuaChan();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_KanJi
	// void Send_KanJi(float Hit);                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_ZhaDi
	// void Send_ZhaDi();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_ShieldHitMeleeOrSword
	// void Send_ShieldHitMeleeOrSword(int32_t Hit);                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_AIQYQ
	// void Send_AIQYQ();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_NearDefu
	// void Send_NearDefu(int32_t FireType);                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_PerfectDefu
	// void Send_PerfectDefu(int32_t FireType);                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_AIFlyQYQ
	// void Send_AIFlyQYQ();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_AIDEFUHealths
	// void Send_AIDEFUHealths(float DEFUHealth, float BloddHealth, bool HaveDefu_);                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_DisPlayAIHealthUI
	// void Send_DisPlayAIHealthUI(bool Vis_);                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_ForceAIHit
	// void Send_ForceAIHit();                                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_BloodHK
	// void Send_BloodHK();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_DefuHK
	// void Send_DefuHK();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_Add_Alerts
	// void Send_Add_Alerts(float DS);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_Dee_Alert
	// void Send_Dee_Alert();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_ForwardSeePlayer
	// void Send_ForwardSeePlayer();                                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_FootAI_Alert
	// void Send_FootAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_BackSeePlayer
	// void Send_BackSeePlayer();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_ShunAI_Alert
	// void Send_ShunAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_SprintAttack
	// void Send_SprintAttack(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_PlayerHitCarAI
	// void Send_PlayerHitCarAI();                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_GERFire
	// void Send_GERFire();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_HealthUIVis
	// void Send_HealthUIVis();                                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_XuLiMelee
	// void Send_XuLiMelee(float Hit);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_GuLouHand_Hit
	// void Send_GuLouHand_Hit(float Hit);                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Army_A_Rot
	// void Army_A_Rot();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.AIFire_A
	// void AIFire_A();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.WeaponFireEventA
	// void WeaponFireEventA();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.BndEvt__CheckPlayerBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__CheckPlayerBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.AIFire_B
	// void AIFire_B();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.WeaponFireEventB
	// void WeaponFireEventB();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_AIBoat
	// void Send_AIBoat(class UPrimitiveComponent* HitBox, float Hit);                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.BoatBoom
	// void BoatBoom();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Hit70%
	// void Hit70_();                                                                                                           // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Hit50%
	// void Hit50_();                                                                                                           // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Hit25%
	// void Hit25_();                                                                                                           // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.Send_PlayerQYQAI
	// void Send_PlayerQYQAI(int32_t Number);                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.ExecuteUbergraph_Army_Boat_01
	// void ExecuteUbergraph_Army_Boat_01(int32_t EntryPoint);                                                                  // [0x148e900] Final|HasDefaults    
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.BoatDead__DelegateSignature
	// void BoatDead__DelegateSignature();                                                                                      // [0x148e900] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ArmyBoat/BP/Army_Boat_01.Army_Boat_01_C.DiverDead__DelegateSignature
	// void DiverDead__DelegateSignature();                                                                                     // [0x148e900] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/BPBMI/QYQ/BP/QYQ_Point.QYQ_Point_C
/// Size: 0x0268 (616 bytes) (0x000220 - 0x000268) align 8 MaxSize: 0x0268
class AQYQ_Point_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UWidgetComponent*                            Hook;                                                       // 0x0228   (0x0008)  
	class UWidgetComponent*                            Tip;                                                        // 0x0230   (0x0008)  
	class UBoxComponent*                               BlockTrace;                                                 // 0x0238   (0x0008)  
	class UBoxComponent*                               CheckArea;                                                  // 0x0240   (0x0008)  
	class UArrowComponent*                             PlayerMoveLoc;                                              // 0x0248   (0x0008)  
	class UArrowComponent*                             CablePoint;                                                 // 0x0250   (0x0008)  
	class UBillboardComponent*                         billboard;                                                  // 0x0258   (0x0008)  
	float                                              CanUseDistance;                                             // 0x0260   (0x0004)  
	bool                                               Level_FightingQYQ_;                                         // 0x0264   (0x0001)  
	bool                                               InDistance_;                                                // 0x0265   (0x0001)  
	bool                                               IsHookOK_;                                                  // 0x0266   (0x0001)  
	bool                                               CanUse_;                                                    // 0x0267   (0x0001)  


	/// Functions
	// Function /Game/BPBMI/QYQ/BP/QYQ_Point.QYQ_Point_C.VisWeaponRedSight
	// void VisWeaponRedSight();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/QYQ/BP/QYQ_Point.QYQ_Point_C.HideWeaponRedSight
	// void HideWeaponRedSight();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/QYQ/BP/QYQ_Point.QYQ_Point_C.ReloadWeaponSmoke
	// void ReloadWeaponSmoke();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/QYQ/BP/QYQ_Point.QYQ_Point_C.Race_CarFirePlayer
	// void Race_CarFirePlayer(float Hit);                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/QYQ/BP/QYQ_Point.QYQ_Point_C.Race_CarDead
	// void Race_CarDead();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/QYQ/BP/QYQ_Point.QYQ_Point_C.ChangeFireModelUI
	// void ChangeFireModelUI(bool VisFitingUI_);                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/QYQ/BP/QYQ_Point.QYQ_Point_C.VisWeaponHUD
	// void VisWeaponHUD(bool Vis_);                                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/QYQ/BP/QYQ_Point.QYQ_Point_C.VisQYQ_Tip
	// void VisQYQ_Tip(bool Vis_);                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/QYQ/BP/QYQ_Point.QYQ_Point_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/BPBMI/QYQ/BP/QYQ_Point.QYQ_Point_C.HookOk?
	// void HookOk_();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/QYQ/BP/QYQ_Point.QYQ_Point_C.ExecuteUbergraph_QYQ_Point
	// void ExecuteUbergraph_QYQ_Point(int32_t EntryPoint);                                                                     // [0x148e900] Final                
};

/// Class /Game/BPBMI/Ammo_System/BP/VEPR_LastFire_Ammo.VEPR_LastFire_Ammo_C
/// Size: 0x0289 (649 bytes) (0x000220 - 0x000289) align 8 MaxSize: 0x0289
class AVEPR_LastFire_Ammo_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UWidgetComponent*                            Icon;                                                       // 0x0228   (0x0008)  
	class USphereComponent*                            TraceTouch;                                                 // 0x0230   (0x0008)  
	class USphereComponent*                            PlayerTouch;                                                // 0x0238   (0x0008)  
	class UBillboardComponent*                         billboard;                                                  // 0x0240   (0x0008)  
	class UInstancedStaticMeshComponent*               InstancedStaticMesh;                                        // 0x0248   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent01;                                      // 0x0250   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent0;                                       // 0x0258   (0x0008)  
	class USceneComponent*                             SharedRoot;                                                 // 0x0260   (0x0008)  
	float                                              Space;                                                      // 0x0268   (0x0004)  
	bool                                               Visible_Cap;                                                // 0x026C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x026D   (0x0003)  MISSED
	float                                              Rotation_Cap;                                               // 0x0270   (0x0004)  
	float                                              Box_Draw_Distance__0___Infinity_;                           // 0x0274   (0x0004)  
	bool                                               Ammo_visible;                                               // 0x0278   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0279   (0x0003)  MISSED
	float                                              Ammo_Draw_Distance__0___Infinity_;                          // 0x027C   (0x0004)  
	int32_t                                            Material_variant;                                           // 0x0280   (0x0004)  
	int32_t                                            PickAmmoNumber;                                             // 0x0284   (0x0004)  
	bool                                               Videos_;                                                    // 0x0288   (0x0001)  


	/// Functions
	// Function /Game/BPBMI/Ammo_System/BP/VEPR_LastFire_Ammo.VEPR_LastFire_Ammo_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x148e900] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/VEPR_LastFire_Ammo.VEPR_LastFire_Ammo_C.BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/VEPR_LastFire_Ammo.VEPR_LastFire_Ammo_C.BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x148e900] BlueprintEvent       
	// Function /Game/BPBMI/Ammo_System/BP/VEPR_LastFire_Ammo.VEPR_LastFire_Ammo_C.PickUp_VEPRLast
	// void PickUp_VEPRLast();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/VEPR_LastFire_Ammo.VEPR_LastFire_Ammo_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/VEPR_LastFire_Ammo.VEPR_LastFire_Ammo_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/VEPR_LastFire_Ammo.VEPR_LastFire_Ammo_C.ExecuteUbergraph_VEPR_LastFire_Ammo
	// void ExecuteUbergraph_VEPR_LastFire_Ammo(int32_t EntryPoint);                                                            // [0x148e900] Final|HasDefaults    
};

/// Class /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C
/// Size: 0x026D (621 bytes) (0x000220 - 0x00026D) align 8 MaxSize: 0x026D
class ADefuLightSword_BP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UBoxComponent*                               PlayerDefu_Block;                                           // 0x0228   (0x0008)  
	class UBoxComponent*                               PlayerDefu_PerfectBox;                                      // 0x0230   (0x0008)  
	class UBoxComponent*                               PlayerDefu_Box;                                             // 0x0238   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0240   (0x0008)  
	float                                              PerfectSlow_TimeSlow_A8C295CE4D856973B20AA4A706D1A231;      // 0x0248   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    PerfectSlow__Direction_A8C295CE4D856973B20AA4A706D1A231;    // 0x024C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x024D   (0x0003)  MISSED
	class UTimelineComponent*                          PerfectSlow;                                                // 0x0250   (0x0008)  
	TArray<FName>                                      SwordParSocket;                                             // 0x0258   (0x0010)  
	float                                              WeaponDamage;                                               // 0x0268   (0x0004)  
	bool                                               IsDefu;                                                     // 0x026C   (0x0001)  


	/// Functions
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.PerfectSlow__FinishedFunc
	// void PerfectSlow__FinishedFunc();                                                                                        // [0x148e900] BlueprintEvent       
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.PerfectSlow__UpdateFunc
	// void PerfectSlow__UpdateFunc();                                                                                          // [0x148e900] BlueprintEvent       
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Completed_E819C99246B188269D6F829F47B91320
	// void Completed_E819C99246B188269D6F829F47B91320(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Completed_19A9123D4EC8705A9D9DFD9CE6A39480
	// void Completed_19A9123D4EC8705A9D9DFD9CE6A39480(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.OnFailure_DE3AAF5D4B21CEC2E3BE0A8E52A34AD3
	// void OnFailure_DE3AAF5D4B21CEC2E3BE0A8E52A34AD3(FName WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag); // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.OnSuccess_DE3AAF5D4B21CEC2E3BE0A8E52A34AD3
	// void OnSuccess_DE3AAF5D4B21CEC2E3BE0A8E52A34AD3(FName WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag); // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.OnFailure_FA342E8E4C73A398A83F4280D172E091
	// void OnFailure_FA342E8E4C73A398A83F4280D172E091();                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.OnSuccess_FA342E8E4C73A398A83F4280D172E091
	// void OnSuccess_FA342E8E4C73A398A83F4280D172E091();                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.OnFailure_EC9C7C064950EE729DEA66BE33A11B73
	// void OnFailure_EC9C7C064950EE729DEA66BE33A11B73(FName WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag); // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.OnSuccess_EC9C7C064950EE729DEA66BE33A11B73
	// void OnSuccess_EC9C7C064950EE729DEA66BE33A11B73(FName WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag); // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.OnFailure_3F87DAA34430365F60BC3B8E8C6D5B50
	// void OnFailure_3F87DAA34430365F60BC3B8E8C6D5B50();                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.OnSuccess_3F87DAA34430365F60BC3B8E8C6D5B50
	// void OnSuccess_3F87DAA34430365F60BC3B8E8C6D5B50();                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_ShieldHit
	// void Send_ShieldHit();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_HitSword
	// void Send_HitSword(float Hit, int32_t FiretType);                                                                        // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_EMP
	// void Send_EMP(float Hit);                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_MeleePower
	// void Send_MeleePower(float Hit);                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_UpLightSword
	// void Send_UpLightSword(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_HuaChan
	// void Send_HuaChan();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_KanJi
	// void Send_KanJi(float Hit);                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_ZhaDi
	// void Send_ZhaDi();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_ShieldHitMeleeOrSword
	// void Send_ShieldHitMeleeOrSword(int32_t Hit);                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_AIQYQ
	// void Send_AIQYQ();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_AIFlyQYQ
	// void Send_AIFlyQYQ();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_AIBoat
	// void Send_AIBoat(class UPrimitiveComponent* HitBox, float Hit);                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_AIDEFUHealths
	// void Send_AIDEFUHealths(float DEFUHealth, float BloddHealth, bool HaveDefu_);                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_DisPlayAIHealthUI
	// void Send_DisPlayAIHealthUI(bool Vis_);                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_ForceAIHit
	// void Send_ForceAIHit();                                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_BloodHK
	// void Send_BloodHK();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_DefuHK
	// void Send_DefuHK();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_Add_Alerts
	// void Send_Add_Alerts(float DS);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_Dee_Alert
	// void Send_Dee_Alert();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_ForwardSeePlayer
	// void Send_ForwardSeePlayer();                                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_FootAI_Alert
	// void Send_FootAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_BackSeePlayer
	// void Send_BackSeePlayer();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_ShunAI_Alert
	// void Send_ShunAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_SprintAttack
	// void Send_SprintAttack(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_PlayerHitCarAI
	// void Send_PlayerHitCarAI();                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_PlayerQYQAI
	// void Send_PlayerQYQAI(int32_t Number);                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_GERFire
	// void Send_GERFire();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_HealthUIVis
	// void Send_HealthUIVis();                                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_XuLiMelee
	// void Send_XuLiMelee(float Hit);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_GuLouHand_Hit
	// void Send_GuLouHand_Hit(float Hit);                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_NearDefu
	// void Send_NearDefu(int32_t FireType);                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.Send_PerfectDefu
	// void Send_PerfectDefu(int32_t FireType);                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.DestoryPerfectBox
	// void DestoryPerfectBox();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.StartDefu
	// void StartDefu();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.EndDefu
	// void EndDefu();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.ForceFanTanAmmo
	// void ForceFanTanAmmo();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/LightSwordDefu/DefuLightSword_BP.DefuLightSword_BP_C.ExecuteUbergraph_DefuLightSword_BP
	// void ExecuteUbergraph_DefuLightSword_BP(int32_t EntryPoint);                                                             // [0x148e900] Final|HasDefaults    
};

/// Class /Game/BPBMI/Skill/MeleePower/MeleePowerXuLi_BP.MeleePowerXuLi_BP_C
/// Size: 0x029C (668 bytes) (0x000220 - 0x00029C) align 8 MaxSize: 0x029C
class AMeleePowerXuLi_BP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UArrowComponent*                             FireSpawnG;                                                 // 0x0228   (0x0008)  
	class UArrowComponent*                             FireSpawnF;                                                 // 0x0230   (0x0008)  
	class UArrowComponent*                             FireSpawnE;                                                 // 0x0238   (0x0008)  
	class UArrowComponent*                             FireSpawnD;                                                 // 0x0240   (0x0008)  
	class UArrowComponent*                             FireSpawnC;                                                 // 0x0248   (0x0008)  
	class UArrowComponent*                             FireSpawnB;                                                 // 0x0250   (0x0008)  
	class UArrowComponent*                             FireSpawnA;                                                 // 0x0258   (0x0008)  
	class UAudioComponent*                             Audio;                                                      // 0x0260   (0x0008)  
	class UBoxComponent*                               Hit;                                                        // 0x0268   (0x0008)  
	class UParticleSystemComponent*                    Boom2;                                                      // 0x0270   (0x0008)  
	class UParticleSystemComponent*                    Boom1;                                                      // 0x0278   (0x0008)  
	class UParticleSystemComponent*                    BOOM;                                                       // 0x0280   (0x0008)  
	class UParticleSystemComponent*                    P_MeleePowerXuLi;                                           // 0x0288   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0290   (0x0008)  
	float                                              DamgeHit;                                                   // 0x0298   (0x0004)  


	/// Functions
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerXuLi_BP.MeleePowerXuLi_BP_C.BndEvt__MeleePowerXuLi_BP_Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__MeleePowerXuLi_BP_Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerXuLi_BP.MeleePowerXuLi_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerXuLi_BP.MeleePowerXuLi_BP_C.Spawn_FirePar
	// void Spawn_FirePar();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/MeleePower/MeleePowerXuLi_BP.MeleePowerXuLi_BP_C.ExecuteUbergraph_MeleePowerXuLi_BP
	// void ExecuteUbergraph_MeleePowerXuLi_BP(int32_t EntryPoint);                                                             // [0x148e900] Final|HasDefaults    
};

/// Class /Game/BPBMI/Skill/SLightSword/SLightSword_PX_BP.SLightSword_PX_BP_C
/// Size: 0x0238 (568 bytes) (0x000220 - 0x000238) align 8 MaxSize: 0x0238
class ASLightSword_PX_BP_C : public AActor
{ 
public:
	class UBoxComponent*                               PX;                                                         // 0x0220   (0x0008)  
	class UProjectileMovementComponent*                ProjectileMovement;                                         // 0x0228   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0230   (0x0008)  
};

/// Class /Game/BPBMI/Ammo_System/BP/GER_Ammo.GER_Ammo_C
/// Size: 0x02C0 (704 bytes) (0x000220 - 0x0002C0) align 8 MaxSize: 0x02C0
class AGER_Ammo_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UWidgetComponent*                            Icon;                                                       // 0x0228   (0x0008)  
	class USphereComponent*                            PlayerTouch;                                                // 0x0230   (0x0008)  
	class USphereComponent*                            TraceTouch;                                                 // 0x0238   (0x0008)  
	class UBillboardComponent*                         billboard;                                                  // 0x0240   (0x0008)  
	class UInstancedStaticMeshComponent*               InstancedStaticMesh;                                        // 0x0248   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent01;                                      // 0x0250   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent0;                                       // 0x0258   (0x0008)  
	class USceneComponent*                             SharedRoot;                                                 // 0x0260   (0x0008)  
	bool                                               Visible_Cap;                                                // 0x0268   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0269   (0x0003)  MISSED
	float                                              Rotation_Cap;                                               // 0x026C   (0x0004)  
	float                                              Box_Draw_Distance__0___Infinity_;                           // 0x0270   (0x0004)  
	bool                                               Ammo_visible;                                               // 0x0274   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0275   (0x0003)  MISSED
	float                                              Ammo_Draw_Distance__0___Infinity_;                          // 0x0278   (0x0004)  
	bool                                               Use_random_count_of_ammo;                                   // 0x027C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x027D   (0x0003)  MISSED
	FRandomStream                                      Height_ammo_Seed;                                           // 0x0280   (0x0008)  
	FRandomStream                                      Rotation_ammo_Seed;                                         // 0x0288   (0x0008)  
	FRandomStream                                      Count_ammo_seed;                                            // 0x0290   (0x0008)  
	float                                              Space;                                                      // 0x0298   (0x0004)  
	int32_t                                            __Count_ammo_seed__;                                        // 0x029C   (0x0004)  
	float                                              Count_ammo_in__;                                            // 0x02A0   (0x0004)  
	int32_t                                            __Rotation_Ammo_Seed__;                                     // 0x02A4   (0x0004)  
	float                                              Min_ammo_Rotation;                                          // 0x02A8   (0x0004)  
	float                                              Max_ammo_Rotation;                                          // 0x02AC   (0x0004)  
	int32_t                                            __Height_ammo_Seed__;                                       // 0x02B0   (0x0004)  
	float                                              Min_ammo_Height;                                            // 0x02B4   (0x0004)  
	float                                              Max_ammo_Height;                                            // 0x02B8   (0x0004)  
	int32_t                                            PickAmmoNumber;                                             // 0x02BC   (0x0004)  


	/// Functions
	// Function /Game/BPBMI/Ammo_System/BP/GER_Ammo.GER_Ammo_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x148e900] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/GER_Ammo.GER_Ammo_C.BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/GER_Ammo.GER_Ammo_C.BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x148e900] BlueprintEvent       
	// Function /Game/BPBMI/Ammo_System/BP/GER_Ammo.GER_Ammo_C.PickUp_GER
	// void PickUp_GER();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/GER_Ammo.GER_Ammo_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/GER_Ammo.GER_Ammo_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/GER_Ammo.GER_Ammo_C.ExecuteUbergraph_GER_Ammo
	// void ExecuteUbergraph_GER_Ammo(int32_t EntryPoint);                                                                      // [0x148e900] Final|HasDefaults    
};

/// Class /Game/BPBMI/Ammo_System/BP/GER_LastFire_Ammo.GER_LastFire_Ammo_C
/// Size: 0x02AC (684 bytes) (0x000220 - 0x0002AC) align 8 MaxSize: 0x02AC
class AGER_LastFire_Ammo_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UWidgetComponent*                            Icon;                                                       // 0x0228   (0x0008)  
	class USphereComponent*                            TraceTouch;                                                 // 0x0230   (0x0008)  
	class USphereComponent*                            PlayerTouch;                                                // 0x0238   (0x0008)  
	class UBillboardComponent*                         billboard;                                                  // 0x0240   (0x0008)  
	class UInstancedStaticMeshComponent*               InstancedStaticMesh;                                        // 0x0248   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent01;                                      // 0x0250   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent0;                                       // 0x0258   (0x0008)  
	class USceneComponent*                             SharedRoot;                                                 // 0x0260   (0x0008)  
	bool                                               Visible_Cap;                                                // 0x0268   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0269   (0x0003)  MISSED
	float                                              Rotation_Cap;                                               // 0x026C   (0x0004)  
	float                                              Box_Draw_Distance__0___Infinity_;                           // 0x0270   (0x0004)  
	bool                                               Ammo_visible;                                               // 0x0274   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0275   (0x0003)  MISSED
	float                                              Ammo_Draw_Distance__0___Infinity_;                          // 0x0278   (0x0004)  
	bool                                               Use_random_count_of_ammo;                                   // 0x027C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x027D   (0x0003)  MISSED
	int32_t                                            __Count_ammo_seed__;                                        // 0x0280   (0x0004)  
	float                                              Count_ammo_in__;                                            // 0x0284   (0x0004)  
	int32_t                                            __Rotation_Ammo_Seed__;                                     // 0x0288   (0x0004)  
	float                                              Min_ammo_Rotation;                                          // 0x028C   (0x0004)  
	float                                              Max_ammo_Rotation;                                          // 0x0290   (0x0004)  
	FRandomStream                                      Count_ammo_seed;                                            // 0x0294   (0x0008)  
	FRandomStream                                      Rotation_ammo_Seed;                                         // 0x029C   (0x0008)  
	float                                              Space;                                                      // 0x02A4   (0x0004)  
	int32_t                                            PickAmmoNumber;                                             // 0x02A8   (0x0004)  


	/// Functions
	// Function /Game/BPBMI/Ammo_System/BP/GER_LastFire_Ammo.GER_LastFire_Ammo_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x148e900] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/GER_LastFire_Ammo.GER_LastFire_Ammo_C.BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/GER_LastFire_Ammo.GER_LastFire_Ammo_C.BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x148e900] BlueprintEvent       
	// Function /Game/BPBMI/Ammo_System/BP/GER_LastFire_Ammo.GER_LastFire_Ammo_C.PickUp_GERLast
	// void PickUp_GERLast();                                                                                                   // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/GER_LastFire_Ammo.GER_LastFire_Ammo_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/GER_LastFire_Ammo.GER_LastFire_Ammo_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/GER_LastFire_Ammo.GER_LastFire_Ammo_C.ExecuteUbergraph_GER_LastFire_Ammo
	// void ExecuteUbergraph_GER_LastFire_Ammo(int32_t EntryPoint);                                                             // [0x148e900] Final|HasDefaults    
};

/// Class /Game/BPBMI/Ammo_System/BP/IOPR_Ammo.IOPR_Ammo_C
/// Size: 0x0270 (624 bytes) (0x000220 - 0x000270) align 8 MaxSize: 0x0270
class AIOPR_Ammo_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UWidgetComponent*                            Icon;                                                       // 0x0228   (0x0008)  
	class USphereComponent*                            PlayerTouch;                                                // 0x0230   (0x0008)  
	class USphereComponent*                            TraceTouch;                                                 // 0x0238   (0x0008)  
	class UBillboardComponent*                         billboard;                                                  // 0x0240   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent01;                                      // 0x0248   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent0;                                       // 0x0250   (0x0008)  
	class USceneComponent*                             SharedRoot;                                                 // 0x0258   (0x0008)  
	bool                                               Visible_Cap;                                                // 0x0260   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0261   (0x0003)  MISSED
	float                                              Rotation_Cap;                                               // 0x0264   (0x0004)  
	float                                              Box_Draw_Distance__0___Infinity_;                           // 0x0268   (0x0004)  
	int32_t                                            PickAmmoNumber;                                             // 0x026C   (0x0004)  


	/// Functions
	// Function /Game/BPBMI/Ammo_System/BP/IOPR_Ammo.IOPR_Ammo_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x148e900] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/IOPR_Ammo.IOPR_Ammo_C.BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/IOPR_Ammo.IOPR_Ammo_C.BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x148e900] BlueprintEvent       
	// Function /Game/BPBMI/Ammo_System/BP/IOPR_Ammo.IOPR_Ammo_C.PickUp_IOPR
	// void PickUp_IOPR();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/IOPR_Ammo.IOPR_Ammo_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/IOPR_Ammo.IOPR_Ammo_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/IOPR_Ammo.IOPR_Ammo_C.ExecuteUbergraph_IOPR_Ammo
	// void ExecuteUbergraph_IOPR_Ammo(int32_t EntryPoint);                                                                     // [0x148e900] Final|HasDefaults    
};

/// Class /Game/BPBMI/Ammo_System/BP/META_LastFire_Ammo.META_LastFire_Ammo_C
/// Size: 0x02B5 (693 bytes) (0x000220 - 0x0002B5) align 8 MaxSize: 0x02B5
class AMETA_LastFire_Ammo_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UWidgetComponent*                            Icon;                                                       // 0x0228   (0x0008)  
	class USphereComponent*                            PlayerTouch;                                                // 0x0230   (0x0008)  
	class USphereComponent*                            TraceTouch;                                                 // 0x0238   (0x0008)  
	class UBillboardComponent*                         billboard;                                                  // 0x0240   (0x0008)  
	class UInstancedStaticMeshComponent*               InstancedStaticMesh;                                        // 0x0248   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent01;                                      // 0x0250   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent0;                                       // 0x0258   (0x0008)  
	class USceneComponent*                             SharedRoot;                                                 // 0x0260   (0x0008)  
	bool                                               Visible_Cap;                                                // 0x0268   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0269   (0x0003)  MISSED
	float                                              Rotation_Cap;                                               // 0x026C   (0x0004)  
	bool                                               Ammo_visible;                                               // 0x0270   (0x0001)  
	bool                                               Use_random_count_of_ammo;                                   // 0x0271   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0272   (0x0002)  MISSED
	FRandomStream                                      Count_seed;                                                 // 0x0274   (0x0008)  
	int32_t                                            __Count_ammo_seed__;                                        // 0x027C   (0x0004)  
	float                                              Count_ammo_in__;                                            // 0x0280   (0x0004)  
	FRandomStream                                      Rotation_Seed;                                              // 0x0284   (0x0008)  
	int32_t                                            __Rotation_Ammo_Seed__;                                     // 0x028C   (0x0004)  
	float                                              Min_ammo_Rotation;                                          // 0x0290   (0x0004)  
	float                                              Max_ammo_Rotation;                                          // 0x0294   (0x0004)  
	FRandomStream                                      Height__Seed;                                               // 0x0298   (0x0008)  
	int32_t                                            __Height_ammo_Seed__;                                       // 0x02A0   (0x0004)  
	float                                              Min_ammo_Height;                                            // 0x02A4   (0x0004)  
	float                                              Max_ammo_Height;                                            // 0x02A8   (0x0004)  
	float                                              Space;                                                      // 0x02AC   (0x0004)  
	int32_t                                            PickAmmoNumber;                                             // 0x02B0   (0x0004)  
	bool                                               PlayerNoWeaponAutoDestory_;                                 // 0x02B4   (0x0001)  


	/// Functions
	// Function /Game/BPBMI/Ammo_System/BP/META_LastFire_Ammo.META_LastFire_Ammo_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x148e900] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/META_LastFire_Ammo.META_LastFire_Ammo_C.Completed_CFEF3CE146FBD7AF761B68804B875344
	// void Completed_CFEF3CE146FBD7AF761B68804B875344(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/META_LastFire_Ammo.META_LastFire_Ammo_C.BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/META_LastFire_Ammo.META_LastFire_Ammo_C.BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x148e900] BlueprintEvent       
	// Function /Game/BPBMI/Ammo_System/BP/META_LastFire_Ammo.META_LastFire_Ammo_C.PickUp_MetaLast
	// void PickUp_MetaLast();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/META_LastFire_Ammo.META_LastFire_Ammo_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/META_LastFire_Ammo.META_LastFire_Ammo_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/META_LastFire_Ammo.META_LastFire_Ammo_C.ExecuteUbergraph_META_LastFire_Ammo
	// void ExecuteUbergraph_META_LastFire_Ammo(int32_t EntryPoint);                                                            // [0x148e900] Final|HasDefaults    
};

/// Class /Game/BPBMI/Ammo_System/BP/VEPR_Ammo.VEPR_Ammo_C
/// Size: 0x0294 (660 bytes) (0x000220 - 0x000294) align 8 MaxSize: 0x0294
class AVEPR_Ammo_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UWidgetComponent*                            Icon;                                                       // 0x0228   (0x0008)  
	class USphereComponent*                            PlayerTouch;                                                // 0x0230   (0x0008)  
	class USphereComponent*                            TraceTouch;                                                 // 0x0238   (0x0008)  
	class UBillboardComponent*                         billboard;                                                  // 0x0240   (0x0008)  
	class UInstancedStaticMeshComponent*               InstancedStaticMesh;                                        // 0x0248   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent01;                                      // 0x0250   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent0;                                       // 0x0258   (0x0008)  
	class USceneComponent*                             SharedRoot;                                                 // 0x0260   (0x0008)  
	FRandomStream                                      Count_ammo_seed;                                            // 0x0268   (0x0008)  
	float                                              Space;                                                      // 0x0270   (0x0004)  
	bool                                               Visible_Box;                                                // 0x0274   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0275   (0x0003)  MISSED
	float                                              Box_Draw_Distance__0___Infinity_;                           // 0x0278   (0x0004)  
	bool                                               Ammo_visible;                                               // 0x027C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x027D   (0x0003)  MISSED
	float                                              Ammo_Draw_Distance__0___Infinity_;                          // 0x0280   (0x0004)  
	bool                                               Use_random_count_of_ammo;                                   // 0x0284   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0285   (0x0003)  MISSED
	int32_t                                            __Count_ammo_seed__;                                        // 0x0288   (0x0004)  
	float                                              Count_ammo_in__;                                            // 0x028C   (0x0004)  
	int32_t                                            PickAmmoNumber;                                             // 0x0290   (0x0004)  


	/// Functions
	// Function /Game/BPBMI/Ammo_System/BP/VEPR_Ammo.VEPR_Ammo_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x148e900] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/VEPR_Ammo.VEPR_Ammo_C.BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/VEPR_Ammo.VEPR_Ammo_C.BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x148e900] BlueprintEvent       
	// Function /Game/BPBMI/Ammo_System/BP/VEPR_Ammo.VEPR_Ammo_C.PickUp_VEPR
	// void PickUp_VEPR();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/VEPR_Ammo.VEPR_Ammo_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/VEPR_Ammo.VEPR_Ammo_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/VEPR_Ammo.VEPR_Ammo_C.ExecuteUbergraph_VEPR_Ammo
	// void ExecuteUbergraph_VEPR_Ammo(int32_t EntryPoint);                                                                     // [0x148e900] Final|HasDefaults    
};

/// Class /Game/BPBMI/Ammo_System/BP/IOPR_LastFire_Ammo.IOPR_LastFire_Ammo_C
/// Size: 0x0286 (646 bytes) (0x000220 - 0x000286) align 8 MaxSize: 0x0286
class AIOPR_LastFire_Ammo_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UWidgetComponent*                            Icon;                                                       // 0x0228   (0x0008)  
	class USphereComponent*                            PlayerTouch;                                                // 0x0230   (0x0008)  
	class USphereComponent*                            TraceTouch;                                                 // 0x0238   (0x0008)  
	class UBillboardComponent*                         billboard;                                                  // 0x0240   (0x0008)  
	class UInstancedStaticMeshComponent*               InstancedStaticMesh;                                        // 0x0248   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent01;                                      // 0x0250   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent0;                                       // 0x0258   (0x0008)  
	class USceneComponent*                             SharedRoot;                                                 // 0x0260   (0x0008)  
	bool                                               Visible_Cap;                                                // 0x0268   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0269   (0x0003)  MISSED
	float                                              Rotation_Cap;                                               // 0x026C   (0x0004)  
	float                                              Box_Draw_Distance__0___Infinity_;                           // 0x0270   (0x0004)  
	bool                                               Ammo_visible;                                               // 0x0274   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0275   (0x0003)  MISSED
	float                                              Space;                                                      // 0x0278   (0x0004)  
	float                                              Ammo_Draw_Distance__0___Infinity_;                          // 0x027C   (0x0004)  
	int32_t                                            PickAmmoNumber;                                             // 0x0280   (0x0004)  
	bool                                               Level02_03_;                                                // 0x0284   (0x0001)  
	bool                                               PlayerNoWeaponAutoDestory_;                                 // 0x0285   (0x0001)  


	/// Functions
	// Function /Game/BPBMI/Ammo_System/BP/IOPR_LastFire_Ammo.IOPR_LastFire_Ammo_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x148e900] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/IOPR_LastFire_Ammo.IOPR_LastFire_Ammo_C.Completed_5F16302B4DB856BD4AA3EFA0DFC6CE61
	// void Completed_5F16302B4DB856BD4AA3EFA0DFC6CE61(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/IOPR_LastFire_Ammo.IOPR_LastFire_Ammo_C.BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/IOPR_LastFire_Ammo.IOPR_LastFire_Ammo_C.BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x148e900] BlueprintEvent       
	// Function /Game/BPBMI/Ammo_System/BP/IOPR_LastFire_Ammo.IOPR_LastFire_Ammo_C.PickUp_IOPRLast
	// void PickUp_IOPRLast();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/IOPR_LastFire_Ammo.IOPR_LastFire_Ammo_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/IOPR_LastFire_Ammo.IOPR_LastFire_Ammo_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/IOPR_LastFire_Ammo.IOPR_LastFire_Ammo_C.ExecuteUbergraph_IOPR_LastFire_Ammo
	// void ExecuteUbergraph_IOPR_LastFire_Ammo(int32_t EntryPoint);                                                            // [0x148e900] Final|HasDefaults    
};

/// Class /Game/BPBMI/Skill/RunWall/RunWall_BP.RunWall_BP_C
/// Size: 0x0238 (568 bytes) (0x000220 - 0x000238) align 8 MaxSize: 0x0238
class ARunWall_BP_C : public AActor
{ 
public:
	class USplineComponent*                            RunWallLine_L;                                              // 0x0220   (0x0008)  
	class USplineComponent*                            RunWallLine_R;                                              // 0x0228   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0230   (0x0008)  
};

/// Class /Game/BPBMI/Skill/RunWall/RunWall_BPXSX.RunWall_BPXSX_C
/// Size: 0x0238 (568 bytes) (0x000220 - 0x000238) align 8 MaxSize: 0x0238
class ARunWall_BPXSX_C : public AActor
{ 
public:
	class USplineComponent*                            RunWallLine_L;                                              // 0x0220   (0x0008)  
	class USplineComponent*                            RunWallLine_R;                                              // 0x0228   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0230   (0x0008)  
};

/// Class /Game/BPBMI/Ammo_System/BP/META_Ammo.META_Ammo_C
/// Size: 0x02A8 (680 bytes) (0x000220 - 0x0002A8) align 8 MaxSize: 0x02A8
class AMETA_Ammo_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UWidgetComponent*                            Icon;                                                       // 0x0228   (0x0008)  
	class USphereComponent*                            PlayerTouch;                                                // 0x0230   (0x0008)  
	class USphereComponent*                            TraceTouch;                                                 // 0x0238   (0x0008)  
	class UBillboardComponent*                         billboard;                                                  // 0x0240   (0x0008)  
	class UInstancedStaticMeshComponent*               InstancedStaticMesh;                                        // 0x0248   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent01;                                      // 0x0250   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent0;                                       // 0x0258   (0x0008)  
	class USceneComponent*                             SharedRoot;                                                 // 0x0260   (0x0008)  
	bool                                               Visible_Box;                                                // 0x0268   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0269   (0x0003)  MISSED
	float                                              Box_Draw_Distance__0___Infinity_;                           // 0x026C   (0x0004)  
	bool                                               Ammo_visible;                                               // 0x0270   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0271   (0x0003)  MISSED
	float                                              Ammo_Draw_Distance__0___Infinity_;                          // 0x0274   (0x0004)  
	bool                                               Use_random_count_of_ammo;                                   // 0x0278   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0279   (0x0003)  MISSED
	int32_t                                            __Count_ammo_seed__;                                        // 0x027C   (0x0004)  
	float                                              Count_ammo_in__;                                            // 0x0280   (0x0004)  
	FRandomStream                                      Count_ammo_seed;                                            // 0x0284   (0x0008)  
	FRandomStream                                      Height_ammo_Seed;                                           // 0x028C   (0x0008)  
	float                                              Space;                                                      // 0x0294   (0x0004)  
	int32_t                                            __Height_ammo_Seed__;                                       // 0x0298   (0x0004)  
	float                                              Min_ammo_Height;                                            // 0x029C   (0x0004)  
	float                                              Max_ammo_Height;                                            // 0x02A0   (0x0004)  
	int32_t                                            PickAmmoNumber;                                             // 0x02A4   (0x0004)  


	/// Functions
	// Function /Game/BPBMI/Ammo_System/BP/META_Ammo.META_Ammo_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x148e900] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/META_Ammo.META_Ammo_C.BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/META_Ammo.META_Ammo_C.BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__VEPR_Ammo_PlayerTouch_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x148e900] BlueprintEvent       
	// Function /Game/BPBMI/Ammo_System/BP/META_Ammo.META_Ammo_C.PickUp_META
	// void PickUp_META();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/META_Ammo.META_Ammo_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/META_Ammo.META_Ammo_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/BPBMI/Ammo_System/BP/META_Ammo.META_Ammo_C.ExecuteUbergraph_META_Ammo
	// void ExecuteUbergraph_META_Ammo(int32_t EntryPoint);                                                                     // [0x148e900] Final|HasDefaults    
};

/// Class /Game/BPBMI/SkillPickUp/BP/PickUp_SLZ_Warrior_BP.PickUp_SLZ_Warrior_BP_C
/// Size: 0x0289 (649 bytes) (0x000220 - 0x000289) align 8 MaxSize: 0x0289
class APickUp_SLZ_Warrior_BP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class USphereComponent*                            Touch;                                                      // 0x0228   (0x0008)  
	class UParticleSystemComponent*                    SLZ;                                                        // 0x0230   (0x0008)  
	float                                              C_Z_A1691A1C47B5D47EA2A75883923E2FA5;                       // 0x0238   (0x0004)  
	float                                              C_Y_A1691A1C47B5D47EA2A75883923E2FA5;                       // 0x023C   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    C__Direction_A1691A1C47B5D47EA2A75883923E2FA5;              // 0x0240   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0241   (0x0007)  MISSED
	class UTimelineComponent*                          C;                                                          // 0x0248   (0x0008)  
	float                                              B_Z_7774BA1F44210F98D494198CF781C73D;                       // 0x0250   (0x0004)  
	float                                              B_Y_7774BA1F44210F98D494198CF781C73D;                       // 0x0254   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    B__Direction_7774BA1F44210F98D494198CF781C73D;              // 0x0258   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0259   (0x0007)  MISSED
	class UTimelineComponent*                          B;                                                          // 0x0260   (0x0008)  
	float                                              A_Z_0E48B99144FC5A70F523CD842DC24CF8;                       // 0x0268   (0x0004)  
	float                                              A_Y_0E48B99144FC5A70F523CD842DC24CF8;                       // 0x026C   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    A__Direction_0E48B99144FC5A70F523CD842DC24CF8;              // 0x0270   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0271   (0x0007)  MISSED
	class UTimelineComponent*                          A;                                                          // 0x0278   (0x0008)  
	float                                              PianYi_Y;                                                   // 0x0280   (0x0004)  
	float                                              PianYi_Z;                                                   // 0x0284   (0x0004)  
	bool                                               PlaySkillShopTip;                                           // 0x0288   (0x0001)  


	/// Functions
	// Function /Game/BPBMI/SkillPickUp/BP/PickUp_SLZ_Warrior_BP.PickUp_SLZ_Warrior_BP_C.A__FinishedFunc
	// void A__FinishedFunc();                                                                                                  // [0x148e900] BlueprintEvent       
	// Function /Game/BPBMI/SkillPickUp/BP/PickUp_SLZ_Warrior_BP.PickUp_SLZ_Warrior_BP_C.A__UpdateFunc
	// void A__UpdateFunc();                                                                                                    // [0x148e900] BlueprintEvent       
	// Function /Game/BPBMI/SkillPickUp/BP/PickUp_SLZ_Warrior_BP.PickUp_SLZ_Warrior_BP_C.B__FinishedFunc
	// void B__FinishedFunc();                                                                                                  // [0x148e900] BlueprintEvent       
	// Function /Game/BPBMI/SkillPickUp/BP/PickUp_SLZ_Warrior_BP.PickUp_SLZ_Warrior_BP_C.B__UpdateFunc
	// void B__UpdateFunc();                                                                                                    // [0x148e900] BlueprintEvent       
	// Function /Game/BPBMI/SkillPickUp/BP/PickUp_SLZ_Warrior_BP.PickUp_SLZ_Warrior_BP_C.C__FinishedFunc
	// void C__FinishedFunc();                                                                                                  // [0x148e900] BlueprintEvent       
	// Function /Game/BPBMI/SkillPickUp/BP/PickUp_SLZ_Warrior_BP.PickUp_SLZ_Warrior_BP_C.C__UpdateFunc
	// void C__UpdateFunc();                                                                                                    // [0x148e900] BlueprintEvent       
	// Function /Game/BPBMI/SkillPickUp/BP/PickUp_SLZ_Warrior_BP.PickUp_SLZ_Warrior_BP_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/BPBMI/SkillPickUp/BP/PickUp_SLZ_Warrior_BP.PickUp_SLZ_Warrior_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/BPBMI/SkillPickUp/BP/PickUp_SLZ_Warrior_BP.PickUp_SLZ_Warrior_BP_C.BndEvt__PickUp_SkillPoinit2_BP_Touch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__PickUp_SkillPoinit2_BP_Touch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BPBMI/SkillPickUp/BP/PickUp_SLZ_Warrior_BP.PickUp_SLZ_Warrior_BP_C.ExecuteUbergraph_PickUp_SLZ_Warrior_BP
	// void ExecuteUbergraph_PickUp_SLZ_Warrior_BP(int32_t EntryPoint);                                                         // [0x148e900] Final|HasDefaults    
};

/// Class /Game/BPBMI/PlayerCarAmmo/PlayerCarAmmo_BP.PlayerCarAmmo_BP_C
/// Size: 0x0240 (576 bytes) (0x000220 - 0x000240) align 8 MaxSize: 0x0240
class APlayerCarAmmo_BP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UArrowComponent*                             ForwardArrow;                                               // 0x0228   (0x0008)  
	class UParticleSystemComponent*                    ShipAmmo;                                                   // 0x0230   (0x0008)  
	class UProjectileMovementComponent*                ProjectileMovement;                                         // 0x0238   (0x0008)  


	/// Functions
	// Function /Game/BPBMI/PlayerCarAmmo/PlayerCarAmmo_BP.PlayerCarAmmo_BP_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/BPBMI/PlayerCarAmmo/PlayerCarAmmo_BP.PlayerCarAmmo_BP_C.ExecuteUbergraph_PlayerCarAmmo_BP
	// void ExecuteUbergraph_PlayerCarAmmo_BP(int32_t EntryPoint);                                                              // [0x148e900] Final|HasDefaults    
};

/// Class /Game/BPBMI/Car_1p/BP/Car_Boken_Wood.Car_Boken_Wood_C
/// Size: 0x0240 (576 bytes) (0x000220 - 0x000240) align 8 MaxSize: 0x0240
class ACar_Boken_Wood_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UParticleSystemComponent*                    WoodPar;                                                    // 0x0228   (0x0008)  
	class URadialForceComponent*                       RadialForce;                                                // 0x0230   (0x0008)  
	class UDestructibleComponent*                      Fence_b_DM;                                                 // 0x0238   (0x0008)  


	/// Functions
	// Function /Game/BPBMI/Car_1p/BP/Car_Boken_Wood.Car_Boken_Wood_C.Boken
	// void Boken();                                                                                                            // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Car_1p/BP/Car_Boken_Wood.Car_Boken_Wood_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/BPBMI/Car_1p/BP/Car_Boken_Wood.Car_Boken_Wood_C.ExecuteUbergraph_Car_Boken_Wood
	// void ExecuteUbergraph_Car_Boken_Wood(int32_t EntryPoint);                                                                // [0x148e900] Final                
};

/// Class /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C
/// Size: 0x0250 (592 bytes) (0x000220 - 0x000250) align 8 MaxSize: 0x0250
class APlayer_CarAmmoBoom_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class URadialForceComponent*                       RadialForce;                                                // 0x0228   (0x0008)  
	class USphereComponent*                            HitTouch;                                                   // 0x0230   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0238   (0x0008)  
	class UCapsuleComponent*                           Capsule;                                                    // 0x0240   (0x0008)  
	bool                                               IsWall_;                                                    // 0x0248   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0249   (0x0003)  MISSED
	float                                              BoomTime;                                                   // 0x024C   (0x0004)  


	/// Functions
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_ShieldHit
	// void Send_ShieldHit();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_HitSword
	// void Send_HitSword(float Hit, int32_t FiretType);                                                                        // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_EMP
	// void Send_EMP(float Hit);                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_MeleePower
	// void Send_MeleePower(float Hit);                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_UpLightSword
	// void Send_UpLightSword(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_HuaChan
	// void Send_HuaChan();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_KanJi
	// void Send_KanJi(float Hit);                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_ZhaDi
	// void Send_ZhaDi();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_ShieldHitMeleeOrSword
	// void Send_ShieldHitMeleeOrSword(int32_t Hit);                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_AIQYQ
	// void Send_AIQYQ();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_NearDefu
	// void Send_NearDefu(int32_t FireType);                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_PerfectDefu
	// void Send_PerfectDefu(int32_t FireType);                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_AIFlyQYQ
	// void Send_AIFlyQYQ();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_AIBoat
	// void Send_AIBoat(class UPrimitiveComponent* HitBox, float Hit);                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_AIDEFUHealths
	// void Send_AIDEFUHealths(float DEFUHealth, float BloddHealth, bool HaveDefu_);                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_DisPlayAIHealthUI
	// void Send_DisPlayAIHealthUI(bool Vis_);                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_ForceAIHit
	// void Send_ForceAIHit();                                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_BloodHK
	// void Send_BloodHK();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_DefuHK
	// void Send_DefuHK();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_Add_Alerts
	// void Send_Add_Alerts(float DS);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_Dee_Alert
	// void Send_Dee_Alert();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_ForwardSeePlayer
	// void Send_ForwardSeePlayer();                                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_FootAI_Alert
	// void Send_FootAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_BackSeePlayer
	// void Send_BackSeePlayer();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_ShunAI_Alert
	// void Send_ShunAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_SprintAttack
	// void Send_SprintAttack(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_PlayerHitCarAI
	// void Send_PlayerHitCarAI();                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_PlayerQYQAI
	// void Send_PlayerQYQAI(int32_t Number);                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_GERFire
	// void Send_GERFire();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_HealthUIVis
	// void Send_HealthUIVis();                                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_XuLiMelee
	// void Send_XuLiMelee(float Hit);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.Send_GuLouHand_Hit
	// void Send_GuLouHand_Hit(float Hit);                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.BndEvt__HitTouch_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__HitTouch_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/Player_CarAmmoBoom.Player_CarAmmoBoom_C.ExecuteUbergraph_Player_CarAmmoBoom
	// void ExecuteUbergraph_Player_CarAmmoBoom(int32_t EntryPoint);                                                            // [0x148e900] Final|HasDefaults    
};

/// Class /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C
/// Size: 0x025C (604 bytes) (0x000220 - 0x00025C) align 8 MaxSize: 0x025C
class AUpLight_Player_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class URadialForceComponent*                       RadialForce;                                                // 0x0228   (0x0008)  
	class UAudioComponent*                             S_NPC_SiMiaoBoss_FarFire_Ground_Cue;                        // 0x0230   (0x0008)  
	class UProjectileMovementComponent*                ProjectileMovement;                                         // 0x0238   (0x0008)  
	class UParticleSystemComponent*                    Par;                                                        // 0x0240   (0x0008)  
	class UBoxComponent*                               HitBox;                                                     // 0x0248   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0250   (0x0008)  
	float                                              Hit;                                                        // 0x0258   (0x0004)  


	/// Functions
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Completed_D77618DC463F68DAFECB01B04076DB36
	// void Completed_D77618DC463F68DAFECB01B04076DB36(class USaveGame* SaveGame, bool bSuccess);                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_ShieldHit
	// void Send_ShieldHit();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_HitSword
	// void Send_HitSword(float Hit, int32_t FiretType);                                                                        // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_EMP
	// void Send_EMP(float Hit);                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_MeleePower
	// void Send_MeleePower(float Hit);                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_UpLightSword
	// void Send_UpLightSword(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_HuaChan
	// void Send_HuaChan();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_KanJi
	// void Send_KanJi(float Hit);                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_ZhaDi
	// void Send_ZhaDi();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_ShieldHitMeleeOrSword
	// void Send_ShieldHitMeleeOrSword(int32_t Hit);                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_AIQYQ
	// void Send_AIQYQ();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_NearDefu
	// void Send_NearDefu(int32_t FireType);                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_PerfectDefu
	// void Send_PerfectDefu(int32_t FireType);                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_AIFlyQYQ
	// void Send_AIFlyQYQ();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_AIBoat
	// void Send_AIBoat(class UPrimitiveComponent* HitBox, float Hit);                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_AIDEFUHealths
	// void Send_AIDEFUHealths(float DEFUHealth, float BloddHealth, bool HaveDefu_);                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_DisPlayAIHealthUI
	// void Send_DisPlayAIHealthUI(bool Vis_);                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_ForceAIHit
	// void Send_ForceAIHit();                                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_BloodHK
	// void Send_BloodHK();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_DefuHK
	// void Send_DefuHK();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_Add_Alerts
	// void Send_Add_Alerts(float DS);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_Dee_Alert
	// void Send_Dee_Alert();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_ForwardSeePlayer
	// void Send_ForwardSeePlayer();                                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_FootAI_Alert
	// void Send_FootAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_BackSeePlayer
	// void Send_BackSeePlayer();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_ShunAI_Alert
	// void Send_ShunAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_SprintAttack
	// void Send_SprintAttack(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_PlayerHitCarAI
	// void Send_PlayerHitCarAI();                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_PlayerQYQAI
	// void Send_PlayerQYQAI(int32_t Number);                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_GERFire
	// void Send_GERFire();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_HealthUIVis
	// void Send_HealthUIVis();                                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_XuLiMelee
	// void Send_XuLiMelee(float Hit);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Send_GuLouHand_Hit
	// void Send_GuLouHand_Hit(float Hit);                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.BndEvt__HitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__HitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.Fire
	// void Fire();                                                                                                             // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/UpLight/UpLight_Player.UpLight_Player_C.ExecuteUbergraph_UpLight_Player
	// void ExecuteUbergraph_UpLight_Player(int32_t EntryPoint);                                                                // [0x148e900] Final|HasDefaults    
};

/// Class /Game/BPBMI/ShouLei/BP/NPC_ShouLei.NPC_ShouLei_C
/// Size: 0x0258 (600 bytes) (0x000220 - 0x000258) align 8 MaxSize: 0x0258
class ANPC_ShouLei_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UParticleSystemComponent*                    ShouLei_WeiYan;                                             // 0x0228   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0230   (0x0008)  
	class UProjectileMovementComponent*                ProjectileMovement;                                         // 0x0238   (0x0008)  
	class UCapsuleComponent*                           Capsule;                                                    // 0x0240   (0x0008)  
	class USkeletalMeshComponent*                      Mesh;                                                       // 0x0248   (0x0008)  
	bool                                               IsWall_;                                                    // 0x0250   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0251   (0x0003)  MISSED
	float                                              BoomTime;                                                   // 0x0254   (0x0004)  


	/// Functions
	// Function /Game/BPBMI/ShouLei/BP/NPC_ShouLei.NPC_ShouLei_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/NPC_ShouLei.NPC_ShouLei_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/BPBMI/ShouLei/BP/NPC_ShouLei.NPC_ShouLei_C.ExecuteUbergraph_NPC_ShouLei
	// void ExecuteUbergraph_NPC_ShouLei(int32_t EntryPoint);                                                                   // [0x148e900] Final|HasDefaults    
};

/// Class /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C
/// Size: 0x026D (621 bytes) (0x000220 - 0x00026D) align 8 MaxSize: 0x026D
class AZhaDi_LightSword_Touch_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UArrowComponent*                             TraceArrow;                                                 // 0x0228   (0x0008)  
	class UPointLightComponent*                        Light;                                                      // 0x0230   (0x0008)  
	class UParticleSystemComponent*                    AOE;                                                        // 0x0238   (0x0008)  
	class UCapsuleComponent*                           LightSword_QTE2_Touchs;                                     // 0x0240   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0248   (0x0008)  
	float                                              LightTime_Light_4DA1A1A34DB825F3557B918FC10D66FA;           // 0x0250   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    LightTime__Direction_4DA1A1A34DB825F3557B918FC10D66FA;      // 0x0254   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0255   (0x0003)  MISSED
	class UTimelineComponent*                          LightTime;                                                  // 0x0258   (0x0008)  
	float                                              LightSwordZhaDiDamage;                                      // 0x0260   (0x0004)  
	bool                                               OpenTrace;                                                  // 0x0264   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0265   (0x0003)  MISSED
	float                                              Hit;                                                        // 0x0268   (0x0004)  
	bool                                               CanAir_;                                                    // 0x026C   (0x0001)  


	/// Functions
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.LightTime__FinishedFunc
	// void LightTime__FinishedFunc();                                                                                          // [0x148e900] BlueprintEvent       
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.LightTime__UpdateFunc
	// void LightTime__UpdateFunc();                                                                                            // [0x148e900] BlueprintEvent       
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_ShieldHit
	// void Send_ShieldHit();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_HitSword
	// void Send_HitSword(float Hit, int32_t FiretType);                                                                        // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_EMP
	// void Send_EMP(float Hit);                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_MeleePower
	// void Send_MeleePower(float Hit);                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_UpLightSword
	// void Send_UpLightSword(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_HuaChan
	// void Send_HuaChan();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_KanJi
	// void Send_KanJi(float Hit);                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_ZhaDi
	// void Send_ZhaDi();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_ShieldHitMeleeOrSword
	// void Send_ShieldHitMeleeOrSword(int32_t Hit);                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_AIQYQ
	// void Send_AIQYQ();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_NearDefu
	// void Send_NearDefu(int32_t FireType);                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_PerfectDefu
	// void Send_PerfectDefu(int32_t FireType);                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_AIFlyQYQ
	// void Send_AIFlyQYQ();                                                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_AIBoat
	// void Send_AIBoat(class UPrimitiveComponent* HitBox, float Hit);                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_AIDEFUHealths
	// void Send_AIDEFUHealths(float DEFUHealth, float BloddHealth, bool HaveDefu_);                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_DisPlayAIHealthUI
	// void Send_DisPlayAIHealthUI(bool Vis_);                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_ForceAIHit
	// void Send_ForceAIHit();                                                                                                  // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_BloodHK
	// void Send_BloodHK();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_DefuHK
	// void Send_DefuHK();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_Add_Alerts
	// void Send_Add_Alerts(float DS);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_Dee_Alert
	// void Send_Dee_Alert();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_ForwardSeePlayer
	// void Send_ForwardSeePlayer();                                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_FootAI_Alert
	// void Send_FootAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_BackSeePlayer
	// void Send_BackSeePlayer();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_ShunAI_Alert
	// void Send_ShunAI_Alert();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_SprintAttack
	// void Send_SprintAttack(float Hit);                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_PlayerHitCarAI
	// void Send_PlayerHitCarAI();                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_PlayerQYQAI
	// void Send_PlayerQYQAI(int32_t Number);                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_GERFire
	// void Send_GERFire();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_HealthUIVis
	// void Send_HealthUIVis();                                                                                                 // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_XuLiMelee
	// void Send_XuLiMelee(float Hit);                                                                                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.Send_GuLouHand_Hit
	// void Send_GuLouHand_Hit(float Hit);                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.BndEvt__LightSword_QTE2_Touchs_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__LightSword_QTE2_Touchs_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/BPBMI/Skill/SLightSword/ZhaDi_LightSword_Touch.ZhaDi_LightSword_Touch_C.ExecuteUbergraph_ZhaDi_LightSword_Touch
	// void ExecuteUbergraph_ZhaDi_LightSword_Touch(int32_t EntryPoint);                                                        // [0x148e900] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(APlayer_ChuJue_Army_Spawn_C) == 0x0308); // 776 bytes (0x000220 - 0x000308)
static_assert(sizeof(ABMI_Spawn_AI_C) == 0x02AD); // 685 bytes (0x000220 - 0x0002AD)
static_assert(sizeof(AMeleePowerAir_BP_C) == 0x0368); // 872 bytes (0x000220 - 0x000368)
static_assert(sizeof(AArmy_Boat_01_C) == 0x0388); // 904 bytes (0x000220 - 0x000388)
static_assert(sizeof(AQYQ_Point_C) == 0x0268); // 616 bytes (0x000220 - 0x000268)
static_assert(sizeof(AVEPR_LastFire_Ammo_C) == 0x0289); // 649 bytes (0x000220 - 0x000289)
static_assert(sizeof(ADefuLightSword_BP_C) == 0x026D); // 621 bytes (0x000220 - 0x00026D)
static_assert(sizeof(AMeleePowerXuLi_BP_C) == 0x029C); // 668 bytes (0x000220 - 0x00029C)
static_assert(sizeof(ASLightSword_PX_BP_C) == 0x0238); // 568 bytes (0x000220 - 0x000238)
static_assert(sizeof(AGER_Ammo_C) == 0x02C0); // 704 bytes (0x000220 - 0x0002C0)
static_assert(sizeof(AGER_LastFire_Ammo_C) == 0x02AC); // 684 bytes (0x000220 - 0x0002AC)
static_assert(sizeof(AIOPR_Ammo_C) == 0x0270); // 624 bytes (0x000220 - 0x000270)
static_assert(sizeof(AMETA_LastFire_Ammo_C) == 0x02B5); // 693 bytes (0x000220 - 0x0002B5)
static_assert(sizeof(AVEPR_Ammo_C) == 0x0294); // 660 bytes (0x000220 - 0x000294)
static_assert(sizeof(AIOPR_LastFire_Ammo_C) == 0x0286); // 646 bytes (0x000220 - 0x000286)
static_assert(sizeof(ARunWall_BP_C) == 0x0238); // 568 bytes (0x000220 - 0x000238)
static_assert(sizeof(ARunWall_BPXSX_C) == 0x0238); // 568 bytes (0x000220 - 0x000238)
static_assert(sizeof(AMETA_Ammo_C) == 0x02A8); // 680 bytes (0x000220 - 0x0002A8)
static_assert(sizeof(APickUp_SLZ_Warrior_BP_C) == 0x0289); // 649 bytes (0x000220 - 0x000289)
static_assert(sizeof(APlayerCarAmmo_BP_C) == 0x0240); // 576 bytes (0x000220 - 0x000240)
static_assert(sizeof(ACar_Boken_Wood_C) == 0x0240); // 576 bytes (0x000220 - 0x000240)
static_assert(sizeof(APlayer_CarAmmoBoom_C) == 0x0250); // 592 bytes (0x000220 - 0x000250)
static_assert(sizeof(AUpLight_Player_C) == 0x025C); // 604 bytes (0x000220 - 0x00025C)
static_assert(sizeof(ANPC_ShouLei_C) == 0x0258); // 600 bytes (0x000220 - 0x000258)
static_assert(sizeof(AZhaDi_LightSword_Touch_C) == 0x026D); // 621 bytes (0x000220 - 0x00026D)
static_assert(offsetof(APlayer_ChuJue_Army_Spawn_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(APlayer_ChuJue_Army_Spawn_C, CS2_BloodB) == 0x0228);
static_assert(offsetof(APlayer_ChuJue_Army_Spawn_C, CS1_BloodD) == 0x0230);
static_assert(offsetof(APlayer_ChuJue_Army_Spawn_C, CS8_BloodB) == 0x0238);
static_assert(offsetof(APlayer_ChuJue_Army_Spawn_C, CS8) == 0x0240);
static_assert(offsetof(APlayer_ChuJue_Army_Spawn_C, CS7) == 0x0248);
static_assert(offsetof(APlayer_ChuJue_Army_Spawn_C, RectLightR) == 0x0250);
static_assert(offsetof(APlayer_ChuJue_Army_Spawn_C, CS6) == 0x0258);
static_assert(offsetof(APlayer_ChuJue_Army_Spawn_C, CS5) == 0x0260);
static_assert(offsetof(APlayer_ChuJue_Army_Spawn_C, CS4_BloodA) == 0x0268);
static_assert(offsetof(APlayer_ChuJue_Army_Spawn_C, CS4) == 0x0270);
static_assert(offsetof(APlayer_ChuJue_Army_Spawn_C, CS3_BloodA) == 0x0278);
static_assert(offsetof(APlayer_ChuJue_Army_Spawn_C, CS2_BloodA1) == 0x0280);
static_assert(offsetof(APlayer_ChuJue_Army_Spawn_C, CS3) == 0x0288);
static_assert(offsetof(APlayer_ChuJue_Army_Spawn_C, CS1_BloodC) == 0x0290);
static_assert(offsetof(APlayer_ChuJue_Army_Spawn_C, CS1_BloodB) == 0x0298);
static_assert(offsetof(APlayer_ChuJue_Army_Spawn_C, CS1_BloodA) == 0x02A0);
static_assert(offsetof(APlayer_ChuJue_Army_Spawn_C, CS2_BloodA) == 0x02A8);
static_assert(offsetof(APlayer_ChuJue_Army_Spawn_C, CS2) == 0x02B0);
static_assert(offsetof(APlayer_ChuJue_Army_Spawn_C, RectLightB) == 0x02B8);
static_assert(offsetof(APlayer_ChuJue_Army_Spawn_C, RectLightL) == 0x02C0);
static_assert(offsetof(APlayer_ChuJue_Army_Spawn_C, EXO) == 0x02C8);
static_assert(offsetof(APlayer_ChuJue_Army_Spawn_C, PlayerOutPoint) == 0x02D0);
static_assert(offsetof(APlayer_ChuJue_Army_Spawn_C, CS1) == 0x02D8);
static_assert(offsetof(APlayer_ChuJue_Army_Spawn_C, CineCamera) == 0x02E0);
static_assert(offsetof(APlayer_ChuJue_Army_Spawn_C, OneHandSword_Mesh) == 0x02E8);
static_assert(offsetof(APlayer_ChuJue_Army_Spawn_C, Army) == 0x02F0);
static_assert(offsetof(APlayer_ChuJue_Army_Spawn_C, Player) == 0x02F8);
static_assert(offsetof(APlayer_ChuJue_Army_Spawn_C, DefaultSceneRoot) == 0x0300);
static_assert(offsetof(ABMI_Spawn_AI_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ABMI_Spawn_AI_C, AI_Spawn_Par) == 0x0228);
static_assert(offsetof(ABMI_Spawn_AI_C, Arrow) == 0x0230);
static_assert(offsetof(ABMI_Spawn_AI_C, billboard) == 0x0238);
static_assert(offsetof(ABMI_Spawn_AI_C, Spawn_AI_Type) == 0x0248);
static_assert(offsetof(ABMI_Spawn_AI_C, Army01) == 0x0290);
static_assert(offsetof(ABMI_Spawn_AI_C, Cover) == 0x02A0);
static_assert(offsetof(AMeleePowerAir_BP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AMeleePowerAir_BP_C, DecalK) == 0x0228);
static_assert(offsetof(AMeleePowerAir_BP_C, DecalJ) == 0x0230);
static_assert(offsetof(AMeleePowerAir_BP_C, DecalI) == 0x0238);
static_assert(offsetof(AMeleePowerAir_BP_C, DecalH) == 0x0240);
static_assert(offsetof(AMeleePowerAir_BP_C, DecalG) == 0x0248);
static_assert(offsetof(AMeleePowerAir_BP_C, DecalF) == 0x0250);
static_assert(offsetof(AMeleePowerAir_BP_C, DecalE) == 0x0258);
static_assert(offsetof(AMeleePowerAir_BP_C, DecalD) == 0x0260);
static_assert(offsetof(AMeleePowerAir_BP_C, DecalC) == 0x0268);
static_assert(offsetof(AMeleePowerAir_BP_C, DecalB) == 0x0270);
static_assert(offsetof(AMeleePowerAir_BP_C, DecalA) == 0x0278);
static_assert(offsetof(AMeleePowerAir_BP_C, C4_Box) == 0x0280);
static_assert(offsetof(AMeleePowerAir_BP_C, MeleePowerAirHitGorund_C4) == 0x0288);
static_assert(offsetof(AMeleePowerAir_BP_C, B4_Box) == 0x0290);
static_assert(offsetof(AMeleePowerAir_BP_C, MeleePowerAirHitGorund_B4) == 0x0298);
static_assert(offsetof(AMeleePowerAir_BP_C, C3_Box) == 0x02A0);
static_assert(offsetof(AMeleePowerAir_BP_C, C2_Box) == 0x02A8);
static_assert(offsetof(AMeleePowerAir_BP_C, C1_Box) == 0x02B0);
static_assert(offsetof(AMeleePowerAir_BP_C, B3_Box) == 0x02B8);
static_assert(offsetof(AMeleePowerAir_BP_C, B2_Box) == 0x02C0);
static_assert(offsetof(AMeleePowerAir_BP_C, B1_Box) == 0x02C8);
static_assert(offsetof(AMeleePowerAir_BP_C, A4_Box) == 0x02D0);
static_assert(offsetof(AMeleePowerAir_BP_C, A3_Box) == 0x02D8);
static_assert(offsetof(AMeleePowerAir_BP_C, A2_Box) == 0x02E0);
static_assert(offsetof(AMeleePowerAir_BP_C, A1_Box) == 0x02E8);
static_assert(offsetof(AMeleePowerAir_BP_C, ActorSequence) == 0x02F0);
static_assert(offsetof(AMeleePowerAir_BP_C, MeleePowerAirHitGorund_C3) == 0x02F8);
static_assert(offsetof(AMeleePowerAir_BP_C, MeleePowerAirHitGorund_C2) == 0x0300);
static_assert(offsetof(AMeleePowerAir_BP_C, MeleePowerAirHitGorund_C1) == 0x0308);
static_assert(offsetof(AMeleePowerAir_BP_C, MeleePowerAirHitGorund_B1) == 0x0310);
static_assert(offsetof(AMeleePowerAir_BP_C, MeleePowerAirHitGorund_B2) == 0x0318);
static_assert(offsetof(AMeleePowerAir_BP_C, MeleePowerAirHitGorund_B3) == 0x0320);
static_assert(offsetof(AMeleePowerAir_BP_C, MeleePowerAirHitGorund_A4) == 0x0328);
static_assert(offsetof(AMeleePowerAir_BP_C, MeleePowerAirHitGorund_A3) == 0x0330);
static_assert(offsetof(AMeleePowerAir_BP_C, MeleePowerAirHitGorund_A2) == 0x0338);
static_assert(offsetof(AMeleePowerAir_BP_C, MeleePowerAirHitGorund_A1) == 0x0340);
static_assert(offsetof(AMeleePowerAir_BP_C, DefaultSceneRoot) == 0x0348);
static_assert(offsetof(AMeleePowerAir_BP_C, AILoc) == 0x0354);
static_assert(offsetof(AArmy_Boat_01_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AArmy_Boat_01_C, QYQC) == 0x0228);
static_assert(offsetof(AArmy_Boat_01_C, QYQA) == 0x0230);
static_assert(offsetof(AArmy_Boat_01_C, QYQB) == 0x0238);
static_assert(offsetof(AArmy_Boat_01_C, EngineSound) == 0x0240);
static_assert(offsetof(AArmy_Boat_01_C, RectLight) == 0x0248);
static_assert(offsetof(AArmy_Boat_01_C, Fire25_) == 0x0250);
static_assert(offsetof(AArmy_Boat_01_C, Fire50_) == 0x0258);
static_assert(offsetof(AArmy_Boat_01_C, Fire70_2) == 0x0260);
static_assert(offsetof(AArmy_Boat_01_C, Fire70_) == 0x0268);
static_assert(offsetof(AArmy_Boat_01_C, S_Broken_Boat_Cue) == 0x0270);
static_assert(offsetof(AArmy_Boat_01_C, BoomWaterPar) == 0x0278);
static_assert(offsetof(AArmy_Boat_01_C, RadialForce) == 0x0280);
static_assert(offsetof(AArmy_Boat_01_C, BoomPar) == 0x0288);
static_assert(offsetof(AArmy_Boat_01_C, HitBoxC) == 0x0290);
static_assert(offsetof(AArmy_Boat_01_C, HitBoxA) == 0x0298);
static_assert(offsetof(AArmy_Boat_01_C, HitBoxB) == 0x02A0);
static_assert(offsetof(AArmy_Boat_01_C, NPC_Army05) == 0x02A8);
static_assert(offsetof(AArmy_Boat_01_C, WeaponFireSoundB) == 0x02B0);
static_assert(offsetof(AArmy_Boat_01_C, FirePointB) == 0x02B8);
static_assert(offsetof(AArmy_Boat_01_C, ParPointB) == 0x02C0);
static_assert(offsetof(AArmy_Boat_01_C, WeaponFireParB) == 0x02C8);
static_assert(offsetof(AArmy_Boat_01_C, WeaponMeshB) == 0x02D0);
static_assert(offsetof(AArmy_Boat_01_C, NPC_Army04) == 0x02D8);
static_assert(offsetof(AArmy_Boat_01_C, CheckPlayerBox) == 0x02E0);
static_assert(offsetof(AArmy_Boat_01_C, WeaponFireSoundA) == 0x02E8);
static_assert(offsetof(AArmy_Boat_01_C, FirePointA) == 0x02F0);
static_assert(offsetof(AArmy_Boat_01_C, ParPointA) == 0x02F8);
static_assert(offsetof(AArmy_Boat_01_C, WeaponFireParA) == 0x0300);
static_assert(offsetof(AArmy_Boat_01_C, WeaponMeshA) == 0x0308);
static_assert(offsetof(AArmy_Boat_01_C, NPC_Army03) == 0x0310);
static_assert(offsetof(AArmy_Boat_01_C, boat) == 0x0318);
static_assert(offsetof(AArmy_Boat_01_C, DefaultSceneRoot) == 0x0320);
static_assert(offsetof(AArmy_Boat_01_C, WeaponFireRange) == 0x0330);
static_assert(offsetof(AArmy_Boat_01_C, NewVar) == 0x0350);
static_assert(offsetof(AQYQ_Point_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AQYQ_Point_C, Hook) == 0x0228);
static_assert(offsetof(AQYQ_Point_C, Tip) == 0x0230);
static_assert(offsetof(AQYQ_Point_C, BlockTrace) == 0x0238);
static_assert(offsetof(AQYQ_Point_C, CheckArea) == 0x0240);
static_assert(offsetof(AQYQ_Point_C, PlayerMoveLoc) == 0x0248);
static_assert(offsetof(AQYQ_Point_C, CablePoint) == 0x0250);
static_assert(offsetof(AQYQ_Point_C, billboard) == 0x0258);
static_assert(offsetof(AVEPR_LastFire_Ammo_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AVEPR_LastFire_Ammo_C, Icon) == 0x0228);
static_assert(offsetof(AVEPR_LastFire_Ammo_C, TraceTouch) == 0x0230);
static_assert(offsetof(AVEPR_LastFire_Ammo_C, PlayerTouch) == 0x0238);
static_assert(offsetof(AVEPR_LastFire_Ammo_C, billboard) == 0x0240);
static_assert(offsetof(AVEPR_LastFire_Ammo_C, InstancedStaticMesh) == 0x0248);
static_assert(offsetof(AVEPR_LastFire_Ammo_C, StaticMeshComponent01) == 0x0250);
static_assert(offsetof(AVEPR_LastFire_Ammo_C, StaticMeshComponent0) == 0x0258);
static_assert(offsetof(AVEPR_LastFire_Ammo_C, SharedRoot) == 0x0260);
static_assert(offsetof(ADefuLightSword_BP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ADefuLightSword_BP_C, PlayerDefu_Block) == 0x0228);
static_assert(offsetof(ADefuLightSword_BP_C, PlayerDefu_PerfectBox) == 0x0230);
static_assert(offsetof(ADefuLightSword_BP_C, PlayerDefu_Box) == 0x0238);
static_assert(offsetof(ADefuLightSword_BP_C, Arrow) == 0x0240);
static_assert(offsetof(ADefuLightSword_BP_C, PerfectSlow__Direction_A8C295CE4D856973B20AA4A706D1A231) == 0x024C);
static_assert(offsetof(ADefuLightSword_BP_C, PerfectSlow) == 0x0250);
static_assert(offsetof(ADefuLightSword_BP_C, SwordParSocket) == 0x0258);
static_assert(offsetof(AMeleePowerXuLi_BP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AMeleePowerXuLi_BP_C, FireSpawnG) == 0x0228);
static_assert(offsetof(AMeleePowerXuLi_BP_C, FireSpawnF) == 0x0230);
static_assert(offsetof(AMeleePowerXuLi_BP_C, FireSpawnE) == 0x0238);
static_assert(offsetof(AMeleePowerXuLi_BP_C, FireSpawnD) == 0x0240);
static_assert(offsetof(AMeleePowerXuLi_BP_C, FireSpawnC) == 0x0248);
static_assert(offsetof(AMeleePowerXuLi_BP_C, FireSpawnB) == 0x0250);
static_assert(offsetof(AMeleePowerXuLi_BP_C, FireSpawnA) == 0x0258);
static_assert(offsetof(AMeleePowerXuLi_BP_C, Audio) == 0x0260);
static_assert(offsetof(AMeleePowerXuLi_BP_C, Hit) == 0x0268);
static_assert(offsetof(AMeleePowerXuLi_BP_C, Boom2) == 0x0270);
static_assert(offsetof(AMeleePowerXuLi_BP_C, Boom1) == 0x0278);
static_assert(offsetof(AMeleePowerXuLi_BP_C, BOOM) == 0x0280);
static_assert(offsetof(AMeleePowerXuLi_BP_C, P_MeleePowerXuLi) == 0x0288);
static_assert(offsetof(AMeleePowerXuLi_BP_C, DefaultSceneRoot) == 0x0290);
static_assert(offsetof(ASLightSword_PX_BP_C, PX) == 0x0220);
static_assert(offsetof(ASLightSword_PX_BP_C, ProjectileMovement) == 0x0228);
static_assert(offsetof(ASLightSword_PX_BP_C, Arrow) == 0x0230);
static_assert(offsetof(AGER_Ammo_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AGER_Ammo_C, Icon) == 0x0228);
static_assert(offsetof(AGER_Ammo_C, PlayerTouch) == 0x0230);
static_assert(offsetof(AGER_Ammo_C, TraceTouch) == 0x0238);
static_assert(offsetof(AGER_Ammo_C, billboard) == 0x0240);
static_assert(offsetof(AGER_Ammo_C, InstancedStaticMesh) == 0x0248);
static_assert(offsetof(AGER_Ammo_C, StaticMeshComponent01) == 0x0250);
static_assert(offsetof(AGER_Ammo_C, StaticMeshComponent0) == 0x0258);
static_assert(offsetof(AGER_Ammo_C, SharedRoot) == 0x0260);
static_assert(offsetof(AGER_Ammo_C, Height_ammo_Seed) == 0x0280);
static_assert(offsetof(AGER_Ammo_C, Rotation_ammo_Seed) == 0x0288);
static_assert(offsetof(AGER_Ammo_C, Count_ammo_seed) == 0x0290);
static_assert(offsetof(AGER_LastFire_Ammo_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AGER_LastFire_Ammo_C, Icon) == 0x0228);
static_assert(offsetof(AGER_LastFire_Ammo_C, TraceTouch) == 0x0230);
static_assert(offsetof(AGER_LastFire_Ammo_C, PlayerTouch) == 0x0238);
static_assert(offsetof(AGER_LastFire_Ammo_C, billboard) == 0x0240);
static_assert(offsetof(AGER_LastFire_Ammo_C, InstancedStaticMesh) == 0x0248);
static_assert(offsetof(AGER_LastFire_Ammo_C, StaticMeshComponent01) == 0x0250);
static_assert(offsetof(AGER_LastFire_Ammo_C, StaticMeshComponent0) == 0x0258);
static_assert(offsetof(AGER_LastFire_Ammo_C, SharedRoot) == 0x0260);
static_assert(offsetof(AGER_LastFire_Ammo_C, Count_ammo_seed) == 0x0294);
static_assert(offsetof(AGER_LastFire_Ammo_C, Rotation_ammo_Seed) == 0x029C);
static_assert(offsetof(AIOPR_Ammo_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AIOPR_Ammo_C, Icon) == 0x0228);
static_assert(offsetof(AIOPR_Ammo_C, PlayerTouch) == 0x0230);
static_assert(offsetof(AIOPR_Ammo_C, TraceTouch) == 0x0238);
static_assert(offsetof(AIOPR_Ammo_C, billboard) == 0x0240);
static_assert(offsetof(AIOPR_Ammo_C, StaticMeshComponent01) == 0x0248);
static_assert(offsetof(AIOPR_Ammo_C, StaticMeshComponent0) == 0x0250);
static_assert(offsetof(AIOPR_Ammo_C, SharedRoot) == 0x0258);
static_assert(offsetof(AMETA_LastFire_Ammo_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AMETA_LastFire_Ammo_C, Icon) == 0x0228);
static_assert(offsetof(AMETA_LastFire_Ammo_C, PlayerTouch) == 0x0230);
static_assert(offsetof(AMETA_LastFire_Ammo_C, TraceTouch) == 0x0238);
static_assert(offsetof(AMETA_LastFire_Ammo_C, billboard) == 0x0240);
static_assert(offsetof(AMETA_LastFire_Ammo_C, InstancedStaticMesh) == 0x0248);
static_assert(offsetof(AMETA_LastFire_Ammo_C, StaticMeshComponent01) == 0x0250);
static_assert(offsetof(AMETA_LastFire_Ammo_C, StaticMeshComponent0) == 0x0258);
static_assert(offsetof(AMETA_LastFire_Ammo_C, SharedRoot) == 0x0260);
static_assert(offsetof(AMETA_LastFire_Ammo_C, Count_seed) == 0x0274);
static_assert(offsetof(AMETA_LastFire_Ammo_C, Rotation_Seed) == 0x0284);
static_assert(offsetof(AMETA_LastFire_Ammo_C, Height__Seed) == 0x0298);
static_assert(offsetof(AVEPR_Ammo_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AVEPR_Ammo_C, Icon) == 0x0228);
static_assert(offsetof(AVEPR_Ammo_C, PlayerTouch) == 0x0230);
static_assert(offsetof(AVEPR_Ammo_C, TraceTouch) == 0x0238);
static_assert(offsetof(AVEPR_Ammo_C, billboard) == 0x0240);
static_assert(offsetof(AVEPR_Ammo_C, InstancedStaticMesh) == 0x0248);
static_assert(offsetof(AVEPR_Ammo_C, StaticMeshComponent01) == 0x0250);
static_assert(offsetof(AVEPR_Ammo_C, StaticMeshComponent0) == 0x0258);
static_assert(offsetof(AVEPR_Ammo_C, SharedRoot) == 0x0260);
static_assert(offsetof(AVEPR_Ammo_C, Count_ammo_seed) == 0x0268);
static_assert(offsetof(AIOPR_LastFire_Ammo_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AIOPR_LastFire_Ammo_C, Icon) == 0x0228);
static_assert(offsetof(AIOPR_LastFire_Ammo_C, PlayerTouch) == 0x0230);
static_assert(offsetof(AIOPR_LastFire_Ammo_C, TraceTouch) == 0x0238);
static_assert(offsetof(AIOPR_LastFire_Ammo_C, billboard) == 0x0240);
static_assert(offsetof(AIOPR_LastFire_Ammo_C, InstancedStaticMesh) == 0x0248);
static_assert(offsetof(AIOPR_LastFire_Ammo_C, StaticMeshComponent01) == 0x0250);
static_assert(offsetof(AIOPR_LastFire_Ammo_C, StaticMeshComponent0) == 0x0258);
static_assert(offsetof(AIOPR_LastFire_Ammo_C, SharedRoot) == 0x0260);
static_assert(offsetof(ARunWall_BP_C, RunWallLine_L) == 0x0220);
static_assert(offsetof(ARunWall_BP_C, RunWallLine_R) == 0x0228);
static_assert(offsetof(ARunWall_BP_C, DefaultSceneRoot) == 0x0230);
static_assert(offsetof(ARunWall_BPXSX_C, RunWallLine_L) == 0x0220);
static_assert(offsetof(ARunWall_BPXSX_C, RunWallLine_R) == 0x0228);
static_assert(offsetof(ARunWall_BPXSX_C, DefaultSceneRoot) == 0x0230);
static_assert(offsetof(AMETA_Ammo_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AMETA_Ammo_C, Icon) == 0x0228);
static_assert(offsetof(AMETA_Ammo_C, PlayerTouch) == 0x0230);
static_assert(offsetof(AMETA_Ammo_C, TraceTouch) == 0x0238);
static_assert(offsetof(AMETA_Ammo_C, billboard) == 0x0240);
static_assert(offsetof(AMETA_Ammo_C, InstancedStaticMesh) == 0x0248);
static_assert(offsetof(AMETA_Ammo_C, StaticMeshComponent01) == 0x0250);
static_assert(offsetof(AMETA_Ammo_C, StaticMeshComponent0) == 0x0258);
static_assert(offsetof(AMETA_Ammo_C, SharedRoot) == 0x0260);
static_assert(offsetof(AMETA_Ammo_C, Count_ammo_seed) == 0x0284);
static_assert(offsetof(AMETA_Ammo_C, Height_ammo_Seed) == 0x028C);
static_assert(offsetof(APickUp_SLZ_Warrior_BP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(APickUp_SLZ_Warrior_BP_C, Touch) == 0x0228);
static_assert(offsetof(APickUp_SLZ_Warrior_BP_C, SLZ) == 0x0230);
static_assert(offsetof(APickUp_SLZ_Warrior_BP_C, C__Direction_A1691A1C47B5D47EA2A75883923E2FA5) == 0x0240);
static_assert(offsetof(APickUp_SLZ_Warrior_BP_C, C) == 0x0248);
static_assert(offsetof(APickUp_SLZ_Warrior_BP_C, B__Direction_7774BA1F44210F98D494198CF781C73D) == 0x0258);
static_assert(offsetof(APickUp_SLZ_Warrior_BP_C, B) == 0x0260);
static_assert(offsetof(APickUp_SLZ_Warrior_BP_C, A__Direction_0E48B99144FC5A70F523CD842DC24CF8) == 0x0270);
static_assert(offsetof(APickUp_SLZ_Warrior_BP_C, A) == 0x0278);
static_assert(offsetof(APlayerCarAmmo_BP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(APlayerCarAmmo_BP_C, ForwardArrow) == 0x0228);
static_assert(offsetof(APlayerCarAmmo_BP_C, ShipAmmo) == 0x0230);
static_assert(offsetof(APlayerCarAmmo_BP_C, ProjectileMovement) == 0x0238);
static_assert(offsetof(ACar_Boken_Wood_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ACar_Boken_Wood_C, WoodPar) == 0x0228);
static_assert(offsetof(ACar_Boken_Wood_C, RadialForce) == 0x0230);
static_assert(offsetof(ACar_Boken_Wood_C, Fence_b_DM) == 0x0238);
static_assert(offsetof(APlayer_CarAmmoBoom_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(APlayer_CarAmmoBoom_C, RadialForce) == 0x0228);
static_assert(offsetof(APlayer_CarAmmoBoom_C, HitTouch) == 0x0230);
static_assert(offsetof(APlayer_CarAmmoBoom_C, Arrow) == 0x0238);
static_assert(offsetof(APlayer_CarAmmoBoom_C, Capsule) == 0x0240);
static_assert(offsetof(AUpLight_Player_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AUpLight_Player_C, RadialForce) == 0x0228);
static_assert(offsetof(AUpLight_Player_C, S_NPC_SiMiaoBoss_FarFire_Ground_Cue) == 0x0230);
static_assert(offsetof(AUpLight_Player_C, ProjectileMovement) == 0x0238);
static_assert(offsetof(AUpLight_Player_C, Par) == 0x0240);
static_assert(offsetof(AUpLight_Player_C, HitBox) == 0x0248);
static_assert(offsetof(AUpLight_Player_C, DefaultSceneRoot) == 0x0250);
static_assert(offsetof(ANPC_ShouLei_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ANPC_ShouLei_C, ShouLei_WeiYan) == 0x0228);
static_assert(offsetof(ANPC_ShouLei_C, Arrow) == 0x0230);
static_assert(offsetof(ANPC_ShouLei_C, ProjectileMovement) == 0x0238);
static_assert(offsetof(ANPC_ShouLei_C, Capsule) == 0x0240);
static_assert(offsetof(ANPC_ShouLei_C, Mesh) == 0x0248);
static_assert(offsetof(AZhaDi_LightSword_Touch_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(AZhaDi_LightSword_Touch_C, TraceArrow) == 0x0228);
static_assert(offsetof(AZhaDi_LightSword_Touch_C, Light) == 0x0230);
static_assert(offsetof(AZhaDi_LightSword_Touch_C, AOE) == 0x0238);
static_assert(offsetof(AZhaDi_LightSword_Touch_C, LightSword_QTE2_Touchs) == 0x0240);
static_assert(offsetof(AZhaDi_LightSword_Touch_C, Arrow) == 0x0248);
static_assert(offsetof(AZhaDi_LightSword_Touch_C, LightTime__Direction_4DA1A1A34DB825F3557B918FC10D66FA) == 0x0254);
static_assert(offsetof(AZhaDi_LightSword_Touch_C, LightTime) == 0x0258);
