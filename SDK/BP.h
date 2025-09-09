
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

/// Class /Game/BP/Skill/LightSword/Skill_SprintAttack_A_Touch.Skill_SprintAttack_A_Touch_C
/// Size: 0x027C (636 bytes) (0x000220 - 0x00027C) align 8 MaxSize: 0x027C
class ASkill_SprintAttack_A_Touch_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UAudioComponent*                             S_LightSword_QTE1;                                          // 0x0228   (0x0008)  
	class UStaticMeshComponent*                        PlaneB;                                                     // 0x0230   (0x0008)  
	class UStaticMeshComponent*                        PlaneA;                                                     // 0x0238   (0x0008)  
	class UAudioComponent*                             Audio;                                                      // 0x0240   (0x0008)  
	class UParticleSystemComponent*                    SwordLight;                                                 // 0x0248   (0x0008)  
	class UProjectileMovementComponent*                ProjectileMovement;                                         // 0x0250   (0x0008)  
	class UBoxComponent*                               LightSword_Touch;                                           // 0x0258   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0260   (0x0008)  
	float                                              LightSwordDamage;                                           // 0x0268   (0x0004)  
	float                                              LightSwordRot;                                              // 0x026C   (0x0004)  
	float                                              DestoryTime;                                                // 0x0270   (0x0004)  
	bool                                               CanControl_;                                                // 0x0274   (0x0001)  
	bool                                               Skill_Un_Lock_Sprint_Attack_C_;                             // 0x0275   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0276   (0x0002)  MISSED
	float                                              Duration;                                                   // 0x0278   (0x0004)  


	/// Functions
	// Function /Game/BP/Skill/LightSword/Skill_SprintAttack_A_Touch.Skill_SprintAttack_A_Touch_C.AIHeadShot
	// void AIHeadShot();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_SprintAttack_A_Touch.Skill_SprintAttack_A_Touch_C.AIHandRShot
	// void AIHandRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_SprintAttack_A_Touch.Skill_SprintAttack_A_Touch_C.AIHandLShot
	// void AIHandLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_SprintAttack_A_Touch.Skill_SprintAttack_A_Touch_C.AIFootLShot
	// void AIFootLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_SprintAttack_A_Touch.Skill_SprintAttack_A_Touch_C.AIFootRShot
	// void AIFootRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_SprintAttack_A_Touch.Skill_SprintAttack_A_Touch_C.BndEvt__LightSword_Touch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__LightSword_Touch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_SprintAttack_A_Touch.Skill_SprintAttack_A_Touch_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_SprintAttack_A_Touch.Skill_SprintAttack_A_Touch_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_SprintAttack_A_Touch.Skill_SprintAttack_A_Touch_C.ExecuteUbergraph_Skill_SprintAttack_A_Touch
	// void ExecuteUbergraph_Skill_SprintAttack_A_Touch(int32_t EntryPoint);                                                    // [0x148e900] Final|HasDefaults    
};

/// Class /Game/BP/Skill/LightSword/Skill_SprintAttack_Touch.Skill_SprintAttack_Touch_C
/// Size: 0x0274 (628 bytes) (0x000220 - 0x000274) align 8 MaxSize: 0x0274
class ASkill_SprintAttack_Touch_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UStaticMeshComponent*                        PlaneB;                                                     // 0x0228   (0x0008)  
	class UStaticMeshComponent*                        PlaneA;                                                     // 0x0230   (0x0008)  
	class UAudioComponent*                             Audio;                                                      // 0x0238   (0x0008)  
	class URotatingMovementComponent*                  RotatingMovement;                                           // 0x0240   (0x0008)  
	class UParticleSystemComponent*                    SwordLight;                                                 // 0x0248   (0x0008)  
	class UProjectileMovementComponent*                ProjectileMovement;                                         // 0x0250   (0x0008)  
	class UBoxComponent*                               LightSword_Touch;                                           // 0x0258   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0260   (0x0008)  
	float                                              LightSwordDamage;                                           // 0x0268   (0x0004)  
	bool                                               OpenTrace;                                                  // 0x026C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x026D   (0x0003)  MISSED
	float                                              LightSwordRot;                                              // 0x0270   (0x0004)  


	/// Functions
	// Function /Game/BP/Skill/LightSword/Skill_SprintAttack_Touch.Skill_SprintAttack_Touch_C.AIHeadShot
	// void AIHeadShot();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_SprintAttack_Touch.Skill_SprintAttack_Touch_C.AIHandRShot
	// void AIHandRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_SprintAttack_Touch.Skill_SprintAttack_Touch_C.AIHandLShot
	// void AIHandLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_SprintAttack_Touch.Skill_SprintAttack_Touch_C.AIFootLShot
	// void AIFootLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_SprintAttack_Touch.Skill_SprintAttack_Touch_C.AIFootRShot
	// void AIFootRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_SprintAttack_Touch.Skill_SprintAttack_Touch_C.BndEvt__LightSword_Touch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__LightSword_Touch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_SprintAttack_Touch.Skill_SprintAttack_Touch_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_SprintAttack_Touch.Skill_SprintAttack_Touch_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_SprintAttack_Touch.Skill_SprintAttack_Touch_C.ExecuteUbergraph_Skill_SprintAttack_Touch
	// void ExecuteUbergraph_Skill_SprintAttack_Touch(int32_t EntryPoint);                                                      // [0x148e900] Final|HasDefaults    
};

/// Class /Game/BP/Interact/PickUp/PickUp_Interface.PickUp_Interface_C
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPickUp_Interface_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/BP/Interact/PickUp/PickUp_Interface.PickUp_Interface_C.Use
	// void Use();                                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/Interact/PickUp/PickUp_Interface.PickUp_Interface_C.PickUpCR
	// void PickUpCR();                                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/BP/Moved/LaZhu.LaZhu_C
/// Size: 0x0294 (660 bytes) (0x000220 - 0x000294) align 8 MaxSize: 0x0294
class ALaZhu_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UPointLightComponent*                        Light;                                                      // 0x0228   (0x0008)  
	class UStaticMeshComponent*                        CH_LZ;                                                      // 0x0230   (0x0008)  
	class USceneComponent*                             Scene;                                                      // 0x0238   (0x0008)  
	class UParticleSystemComponent*                    Fire2;                                                      // 0x0240   (0x0008)  
	class UBoxComponent*                               Touch2;                                                     // 0x0248   (0x0008)  
	class UParticleSystemComponent*                    Fire3;                                                      // 0x0250   (0x0008)  
	class UBoxComponent*                               Touch3;                                                     // 0x0258   (0x0008)  
	class UParticleSystemComponent*                    Fire4;                                                      // 0x0260   (0x0008)  
	class UBoxComponent*                               Touch4;                                                     // 0x0268   (0x0008)  
	class UParticleSystemComponent*                    Fire5;                                                      // 0x0270   (0x0008)  
	class UBoxComponent*                               Touch5;                                                     // 0x0278   (0x0008)  
	class UParticleSystemComponent*                    Fire1;                                                      // 0x0280   (0x0008)  
	class UBoxComponent*                               Touch1;                                                     // 0x0288   (0x0008)  
	float                                              LightBright;                                                // 0x0290   (0x0004)  


	/// Functions
	// Function /Game/BP/Moved/LaZhu.LaZhu_C.OnFailure_DA259730479913DA94C66CBBB2DBB8BD
	// void OnFailure_DA259730479913DA94C66CBBB2DBB8BD();                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/Moved/LaZhu.LaZhu_C.OnSuccess_DA259730479913DA94C66CBBB2DBB8BD
	// void OnSuccess_DA259730479913DA94C66CBBB2DBB8BD();                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/Moved/LaZhu.LaZhu_C.OnFailure_864BC6B743D53A0985AB74910B95B927
	// void OnFailure_864BC6B743D53A0985AB74910B95B927(FName WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag); // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/Moved/LaZhu.LaZhu_C.OnSuccess_864BC6B743D53A0985AB74910B95B927
	// void OnSuccess_864BC6B743D53A0985AB74910B95B927(FName WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag); // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/Moved/LaZhu.LaZhu_C.SubLight
	// void SubLight();                                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/Moved/LaZhu.LaZhu_C.ExecuteUbergraph_LaZhu
	// void ExecuteUbergraph_LaZhu(int32_t EntryPoint);                                                                         // [0x148e900] Final                
};

/// Class /Game/BP/Skill/EMP/Skill_EMP_QTE2_Touch.Skill_EMP_QTE2_Touch_C
/// Size: 0x0268 (616 bytes) (0x000220 - 0x000268) align 8 MaxSize: 0x0268
class ASkill_EMP_QTE2_Touch_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class USphereComponent*                            Player_Touch;                                               // 0x0228   (0x0008)  
	class UParticleSystemComponent*                    Lightning_Over;                                             // 0x0230   (0x0008)  
	class UParticleSystemComponent*                    Lightning_Loop;                                             // 0x0238   (0x0008)  
	class UParticleSystemComponent*                    Lightning_SingleBig;                                        // 0x0240   (0x0008)  
	class UParticleSystemComponent*                    BOOM;                                                       // 0x0248   (0x0008)  
	class USphereComponent*                            AI_Touch;                                                   // 0x0250   (0x0008)  
	float                                              Damage;                                                     // 0x0258   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x025C   (0x0004)  MISSED
	class ACharacter*                                  AI;                                                         // 0x0260   (0x0008)  


	/// Functions
	// Function /Game/BP/Skill/EMP/Skill_EMP_QTE2_Touch.Skill_EMP_QTE2_Touch_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/BP/Skill/EMP/Skill_EMP_QTE2_Touch.Skill_EMP_QTE2_Touch_C.BndEvt__AI_Touch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__AI_Touch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BP/Skill/EMP/Skill_EMP_QTE2_Touch.Skill_EMP_QTE2_Touch_C.BndEvt__Player_Touch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Player_Touch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BP/Skill/EMP/Skill_EMP_QTE2_Touch.Skill_EMP_QTE2_Touch_C.BndEvt__Player_Touch_K2Node_ComponentBoundEvent_14_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__Player_Touch_K2Node_ComponentBoundEvent_14_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x148e900] BlueprintEvent       
	// Function /Game/BP/Skill/EMP/Skill_EMP_QTE2_Touch.Skill_EMP_QTE2_Touch_C.ExecuteUbergraph_Skill_EMP_QTE2_Touch
	// void ExecuteUbergraph_Skill_EMP_QTE2_Touch(int32_t EntryPoint);                                                          // [0x148e900] Final|HasDefaults    
};

/// Class /Game/BP/SaveSystem/BMFunctionLibrary.BMFunctionLibrary_C
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBMFunctionLibrary_C : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Game/BP/SaveSystem/BMFunctionLibrary.BMFunctionLibrary_C.Un Select All Skin UI
	// void UnSelectAllSkinUI(class UObject* __WorldContext);                                                                   // [0x148e900] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/SaveSystem/BMFunctionLibrary.BMFunctionLibrary_C.BMI_DeadSaveTime
	// void BMI_DeadSaveTime(class UObject* __WorldContext);                                                                    // [0x148e900] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/SaveSystem/BMFunctionLibrary.BMFunctionLibrary_C.DZ_ChengJiu_Library
	// void DZ_ChengJiu_Library(class UObject* __WorldContext);                                                                 // [0x148e900] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/SaveSystem/BMFunctionLibrary.BMFunctionLibrary_C.BMI_CreateSub
	// void BMI_CreateSub(class USoundBase* Chinese, class USoundBase* English, class USoundBase* Japanese, TEnumAsByte<BMI_Create_Subtitles> CastName, FText Talk, float VolumeMultiplier, bool CustomSubTime, float CustomSubTime_Duration, float IntervalTime, class UObject* __WorldContext, float& FinishTime); // [0x148e900] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/SaveSystem/BMFunctionLibrary.BMFunctionLibrary_C.ChangeRTX
	// void ChangeRTX(int32_t RTX_Type, class UObject* __WorldContext);                                                         // [0x148e900] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/SaveSystem/BMFunctionLibrary.BMFunctionLibrary_C.BMIUpDataClothSkin
	// void BMIUpDataClothSkin(class UObject* __WorldContext);                                                                  // [0x148e900] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/SaveSystem/BMFunctionLibrary.BMFunctionLibrary_C.Un Select All Menu UI
	// void UnSelectAllMenuUI(class UObject* __WorldContext);                                                                   // [0x148e900] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/SaveSystem/BMFunctionLibrary.BMFunctionLibrary_C.BMILoadCheckPonit
	// void BMILoadCheckPonit(class UObject* __WorldContext, int32_t& NowCheckPonit);                                           // [0x148e900] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/SaveSystem/BMFunctionLibrary.BMFunctionLibrary_C.BMICheckPonit
	// void BMICheckPonit(int32_t NowCheckPonit, FVector PlayerLocation, FRotator PlayerCameraRot, bool IsFinalCheckPonit_, FString NextLevel, FTransform NextLevelPlayerPostion, bool NeedLoadDevLoc, FTransform DevLoc, class UObject* __WorldContext); // [0x148e900] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/SaveSystem/BMFunctionLibrary.BMFunctionLibrary_C.UpdataRTXcommd
	// void UpdataRTXcommd(int32_t RTX_Number, class UObject* __WorldContext);                                                  // [0x148e900] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/SaveSystem/BMFunctionLibrary.BMFunctionLibrary_C.UnBindAllClickEvent
	// void UnBindAllClickEvent(class UObject* __WorldContext);                                                                 // [0x148e900] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/SaveSystem/BMFunctionLibrary.BMFunctionLibrary_C.UpDateHeadShot
	// void UpDateHeadShot(class UObject* __WorldContext);                                                                      // [0x148e900] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/SaveSystem/BMFunctionLibrary.BMFunctionLibrary_C.UpDatePauseSoundMix
	// void UpDatePauseSoundMix(class UObject* __WorldContext);                                                                 // [0x148e900] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/SaveSystem/BMFunctionLibrary.BMFunctionLibrary_C.RemoveMissObj
	// void RemoveMissObj(class UObject* __WorldContext);                                                                       // [0x148e900] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/SaveSystem/BMFunctionLibrary.BMFunctionLibrary_C.SendDamageToPlayer
	// void SendDamageToPlayer(FVector Loc, class AActor* AI, class UObject* __WorldContext);                                   // [0x148e900] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/SaveSystem/BMFunctionLibrary.BMFunctionLibrary_C.SetBloodMode
	// void SetBloodMode(bool IsBloodMode_, class UObject* __WorldContext);                                                     // [0x148e900] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/SaveSystem/BMFunctionLibrary.BMFunctionLibrary_C.UnCallAllBackTop
	// void UnCallAllBackTop(class UObject* __WorldContext);                                                                    // [0x148e900] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/SaveSystem/BMFunctionLibrary.BMFunctionLibrary_C.BMLoadMap
	// void BMLoadMap(class UObject* __WorldContext);                                                                           // [0x148e900] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/SaveSystem/BMFunctionLibrary.BMFunctionLibrary_C.BMLoadCheckPonit
	// void BMLoadCheckPonit(class UObject* __WorldContext, int32_t& NowCheckPonit);                                            // [0x148e900] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/BP/Skill/LightSword/Skill_LightSword_Touch.Skill_LightSword_Touch_C
/// Size: 0x0274 (628 bytes) (0x000220 - 0x000274) align 8 MaxSize: 0x0274
class ASkill_LightSword_Touch_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UAudioComponent*                             Audio;                                                      // 0x0228   (0x0008)  
	class URadialForceComponent*                       RadialForce;                                                // 0x0230   (0x0008)  
	class URotatingMovementComponent*                  RotatingMovement;                                           // 0x0238   (0x0008)  
	class UParticleSystemComponent*                    SwordLight;                                                 // 0x0240   (0x0008)  
	class UProjectileMovementComponent*                ProjectileMovement;                                         // 0x0248   (0x0008)  
	class UBoxComponent*                               LightSword_Touch;                                           // 0x0250   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0258   (0x0008)  
	float                                              LightSwordDamage;                                           // 0x0260   (0x0004)  
	bool                                               OpenTrace;                                                  // 0x0264   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0265   (0x0003)  MISSED
	float                                              LightSwordRot;                                              // 0x0268   (0x0004)  
	float                                              Hit;                                                        // 0x026C   (0x0004)  
	float                                              FlyTime;                                                    // 0x0270   (0x0004)  


	/// Functions
	// Function /Game/BP/Skill/LightSword/Skill_LightSword_Touch.Skill_LightSword_Touch_C.AIHeadShot
	// void AIHeadShot();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_LightSword_Touch.Skill_LightSword_Touch_C.AIHandRShot
	// void AIHandRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_LightSword_Touch.Skill_LightSword_Touch_C.AIHandLShot
	// void AIHandLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_LightSword_Touch.Skill_LightSword_Touch_C.AIFootLShot
	// void AIFootLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_LightSword_Touch.Skill_LightSword_Touch_C.AIFootRShot
	// void AIFootRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_LightSword_Touch.Skill_LightSword_Touch_C.BndEvt__LightSword_Touch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__LightSword_Touch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_LightSword_Touch.Skill_LightSword_Touch_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_LightSword_Touch.Skill_LightSword_Touch_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_LightSword_Touch.Skill_LightSword_Touch_C.ExecuteUbergraph_Skill_LightSword_Touch
	// void ExecuteUbergraph_Skill_LightSword_Touch(int32_t EntryPoint);                                                        // [0x148e900] Final|HasDefaults    
};

/// Class /Game/BP/Skill/LightSword/Skill_LightSwordQTE2_Touch.Skill_LightSwordQTE2_Touch_C
/// Size: 0x0245 (581 bytes) (0x000220 - 0x000245) align 8 MaxSize: 0x0245
class ASkill_LightSwordQTE2_Touch_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UCapsuleComponent*                           LightSword_QTE2_Touchs;                                     // 0x0228   (0x0008)  
	class URadialForceComponent*                       RadialForce;                                                // 0x0230   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0238   (0x0008)  
	float                                              LightSwordQTE2Damage;                                       // 0x0240   (0x0004)  
	bool                                               OpenTrace;                                                  // 0x0244   (0x0001)  


	/// Functions
	// Function /Game/BP/Skill/LightSword/Skill_LightSwordQTE2_Touch.Skill_LightSwordQTE2_Touch_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_LightSwordQTE2_Touch.Skill_LightSwordQTE2_Touch_C.BndEvt__LightSword_QTE2_Touchs_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__LightSword_QTE2_Touchs_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_LightSwordQTE2_Touch.Skill_LightSwordQTE2_Touch_C.ExecuteUbergraph_Skill_LightSwordQTE2_Touch
	// void ExecuteUbergraph_Skill_LightSwordQTE2_Touch(int32_t EntryPoint);                                                    // [0x148e900] Final|HasDefaults    
};

/// Class /Game/BP/Skill/LightSword/Skill_LightSwordQTE_Touch.Skill_LightSwordQTE_Touch_C
/// Size: 0x0270 (624 bytes) (0x000220 - 0x000270) align 8 MaxSize: 0x0270
class ASkill_LightSwordQTE_Touch_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UParticleSystemComponent*                    ParticleSystem;                                             // 0x0228   (0x0008)  
	class UParticleSystemComponent*                    LightSword_QTE_HitPar;                                      // 0x0230   (0x0008)  
	class URadialForceComponent*                       RadialForce;                                                // 0x0238   (0x0008)  
	class URotatingMovementComponent*                  RotatingMovement;                                           // 0x0240   (0x0008)  
	class UParticleSystemComponent*                    SwordLight;                                                 // 0x0248   (0x0008)  
	class UProjectileMovementComponent*                ProjectileMovement;                                         // 0x0250   (0x0008)  
	class UBoxComponent*                               LightSwordQTE_Touch;                                        // 0x0258   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0260   (0x0008)  
	float                                              LightSwordQTEDamage;                                        // 0x0268   (0x0004)  
	float                                              LightSwordRot;                                              // 0x026C   (0x0004)  


	/// Functions
	// Function /Game/BP/Skill/LightSword/Skill_LightSwordQTE_Touch.Skill_LightSwordQTE_Touch_C.AIHeadShot
	// void AIHeadShot();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_LightSwordQTE_Touch.Skill_LightSwordQTE_Touch_C.AIHandRShot
	// void AIHandRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_LightSwordQTE_Touch.Skill_LightSwordQTE_Touch_C.AIHandLShot
	// void AIHandLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_LightSwordQTE_Touch.Skill_LightSwordQTE_Touch_C.AIFootLShot
	// void AIFootLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_LightSwordQTE_Touch.Skill_LightSwordQTE_Touch_C.AIFootRShot
	// void AIFootRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_LightSwordQTE_Touch.Skill_LightSwordQTE_Touch_C.BndEvt__LightSword_Touch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__LightSword_Touch_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_LightSwordQTE_Touch.Skill_LightSwordQTE_Touch_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_LightSwordQTE_Touch.Skill_LightSwordQTE_Touch_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/BP/Skill/LightSword/Skill_LightSwordQTE_Touch.Skill_LightSwordQTE_Touch_C.ExecuteUbergraph_Skill_LightSwordQTE_Touch
	// void ExecuteUbergraph_Skill_LightSwordQTE_Touch(int32_t EntryPoint);                                                     // [0x148e900] Final|HasDefaults    
};

/// Class /Game/BP/Skill/EMP/Skill_EMP_QTE1_Touch.Skill_EMP_QTE1_Touch_C
/// Size: 0x02D8 (728 bytes) (0x000220 - 0x0002D8) align 8 MaxSize: 0x02D8
class ASkill_EMP_QTE1_Touch_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UArrowComponent*                             Check_Height;                                               // 0x0228   (0x0008)  
	class URotatingMovementComponent*                  RotatingMovement;                                           // 0x0230   (0x0008)  
	class UPointLightComponent*                        Par_Light;                                                  // 0x0238   (0x0008)  
	class UStaticMeshComponent*                        Mesh;                                                       // 0x0240   (0x0008)  
	class USphereComponent*                            TimeCool_Touch;                                             // 0x0248   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0250   (0x0008)  
	FVector                                            MatOut2_Scale_8AEC0926452A8F5C9D05F39929433E7E;             // 0x0258   (0x000C)  
	float                                              MatOut2_Light_Birght_8AEC0926452A8F5C9D05F39929433E7E;      // 0x0264   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    MatOut2__Direction_8AEC0926452A8F5C9D05F39929433E7E;        // 0x0268   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0269   (0x0007)  MISSED
	class UTimelineComponent*                          MatOut2;                                                    // 0x0270   (0x0008)  
	float                                              MatOut_Wind_280A89F6477DF5149E9C0A9452B09004;               // 0x0278   (0x0004)  
	float                                              MatOut_ZeShe_280A89F6477DF5149E9C0A9452B09004;              // 0x027C   (0x0004)  
	float                                              MatOut_FractionOut_280A89F6477DF5149E9C0A9452B09004;        // 0x0280   (0x0004)  
	float                                              MatOut_ExpOut_280A89F6477DF5149E9C0A9452B09004;             // 0x0284   (0x0004)  
	float                                              MatOut_OpskOut_280A89F6477DF5149E9C0A9452B09004;            // 0x0288   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    MatOut__Direction_280A89F6477DF5149E9C0A9452B09004;         // 0x028C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x028D   (0x0003)  MISSED
	class UTimelineComponent*                          MatOut;                                                     // 0x0290   (0x0008)  
	FVector                                            Scale_Mesh_Scale2_019BA6DF4607759759C337BDB0AD41C4;         // 0x0298   (0x000C)  
	FVector                                            Scale_Mesh_Scale_019BA6DF4607759759C337BDB0AD41C4;          // 0x02A4   (0x000C)  
	float                                              Scale_Mesh_Light_Birght_019BA6DF4607759759C337BDB0AD41C4;   // 0x02B0   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    Scale_Mesh__Direction_019BA6DF4607759759C337BDB0AD41C4;     // 0x02B4   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x02B5   (0x0003)  MISSED
	class UTimelineComponent*                          Scale_Mesh;                                                 // 0x02B8   (0x0008)  
	class UStaticMeshComponent*                        Get_Mesh;                                                   // 0x02C0   (0x0008)  
	float                                              Time;                                                       // 0x02C8   (0x0004)  
	float                                              SlowTime;                                                   // 0x02CC   (0x0004)  
	class ACharacter*                                  AI;                                                         // 0x02D0   (0x0008)  


	/// Functions
	// Function /Game/BP/Skill/EMP/Skill_EMP_QTE1_Touch.Skill_EMP_QTE1_Touch_C.Scale_Mesh__FinishedFunc
	// void Scale_Mesh__FinishedFunc();                                                                                         // [0x148e900] BlueprintEvent       
	// Function /Game/BP/Skill/EMP/Skill_EMP_QTE1_Touch.Skill_EMP_QTE1_Touch_C.Scale_Mesh__UpdateFunc
	// void Scale_Mesh__UpdateFunc();                                                                                           // [0x148e900] BlueprintEvent       
	// Function /Game/BP/Skill/EMP/Skill_EMP_QTE1_Touch.Skill_EMP_QTE1_Touch_C.MatOut__FinishedFunc
	// void MatOut__FinishedFunc();                                                                                             // [0x148e900] BlueprintEvent       
	// Function /Game/BP/Skill/EMP/Skill_EMP_QTE1_Touch.Skill_EMP_QTE1_Touch_C.MatOut__UpdateFunc
	// void MatOut__UpdateFunc();                                                                                               // [0x148e900] BlueprintEvent       
	// Function /Game/BP/Skill/EMP/Skill_EMP_QTE1_Touch.Skill_EMP_QTE1_Touch_C.MatOut2__FinishedFunc
	// void MatOut2__FinishedFunc();                                                                                            // [0x148e900] BlueprintEvent       
	// Function /Game/BP/Skill/EMP/Skill_EMP_QTE1_Touch.Skill_EMP_QTE1_Touch_C.MatOut2__UpdateFunc
	// void MatOut2__UpdateFunc();                                                                                              // [0x148e900] BlueprintEvent       
	// Function /Game/BP/Skill/EMP/Skill_EMP_QTE1_Touch.Skill_EMP_QTE1_Touch_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/BP/Skill/EMP/Skill_EMP_QTE1_Touch.Skill_EMP_QTE1_Touch_C.BndEvt__TimeCool_Touch_K2Node_ComponentBoundEvent_32_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__TimeCool_Touch_K2Node_ComponentBoundEvent_32_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BP/Skill/EMP/Skill_EMP_QTE1_Touch.Skill_EMP_QTE1_Touch_C.ExecuteUbergraph_Skill_EMP_QTE1_Touch
	// void ExecuteUbergraph_Skill_EMP_QTE1_Touch(int32_t EntryPoint);                                                          // [0x148e900] Final|HasDefaults    
};

/// Class /Game/BP/Skill/EMP/Skill_EMP_Touch.Skill_EMP_Touch_C
/// Size: 0x025C (604 bytes) (0x000220 - 0x00025C) align 8 MaxSize: 0x025C
class ASkill_EMP_Touch_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UBoxComponent*                               EMPTouch;                                                   // 0x0228   (0x0008)  
	class URadialForceComponent*                       Phys_RadialForce;                                           // 0x0230   (0x0008)  
	class URadialForceComponent*                       Player_RadialForce;                                         // 0x0238   (0x0008)  
	class URadialForceComponent*                       AI_RadialForce;                                             // 0x0240   (0x0008)  
	class UProjectileMovementComponent*                ProjectileMovement;                                         // 0x0248   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0250   (0x0008)  
	float                                              EMPDamage;                                                  // 0x0258   (0x0004)  


	/// Functions
	// Function /Game/BP/Skill/EMP/Skill_EMP_Touch.Skill_EMP_Touch_C.AIHeadShot
	// void AIHeadShot();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/Skill/EMP/Skill_EMP_Touch.Skill_EMP_Touch_C.AIHandRShot
	// void AIHandRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/Skill/EMP/Skill_EMP_Touch.Skill_EMP_Touch_C.AIHandLShot
	// void AIHandLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/Skill/EMP/Skill_EMP_Touch.Skill_EMP_Touch_C.AIFootLShot
	// void AIFootLShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/Skill/EMP/Skill_EMP_Touch.Skill_EMP_Touch_C.AIFootRShot
	// void AIFootRShot();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP/Skill/EMP/Skill_EMP_Touch.Skill_EMP_Touch_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/BP/Skill/EMP/Skill_EMP_Touch.Skill_EMP_Touch_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BP/Skill/EMP/Skill_EMP_Touch.Skill_EMP_Touch_C.ExecuteUbergraph_Skill_EMP_Touch
	// void ExecuteUbergraph_Skill_EMP_Touch(int32_t EntryPoint);                                                               // [0x148e900] Final|HasDefaults    
};

/// Struct /Game/BP/SaveSystem/GamePlaySaveSystem.GamePlaySaveSystem
/// Size: 0x0034 (52 bytes) (0x000000 - 0x000034) align 16 MaxSize: 0x0034
struct FGamePlaySaveSystem
{ 
	FTransform                                         PlayerPostion_3_F405BB66453908425FF4ED8D5C8978D8;           // 0x0000   (0x0030)  
	int32_t                                            NowCheckPonit_6_9EA9D573499D9A6729DAC08018F6BD9D;           // 0x0030   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(ASkill_SprintAttack_A_Touch_C) == 0x027C); // 636 bytes (0x000220 - 0x00027C)
static_assert(sizeof(ASkill_SprintAttack_Touch_C) == 0x0274); // 628 bytes (0x000220 - 0x000274)
static_assert(sizeof(UPickUp_Interface_C) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ALaZhu_C) == 0x0294); // 660 bytes (0x000220 - 0x000294)
static_assert(sizeof(ASkill_EMP_QTE2_Touch_C) == 0x0268); // 616 bytes (0x000220 - 0x000268)
static_assert(sizeof(UBMFunctionLibrary_C) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ASkill_LightSword_Touch_C) == 0x0274); // 628 bytes (0x000220 - 0x000274)
static_assert(sizeof(ASkill_LightSwordQTE2_Touch_C) == 0x0245); // 581 bytes (0x000220 - 0x000245)
static_assert(sizeof(ASkill_LightSwordQTE_Touch_C) == 0x0270); // 624 bytes (0x000220 - 0x000270)
static_assert(sizeof(ASkill_EMP_QTE1_Touch_C) == 0x02D8); // 728 bytes (0x000220 - 0x0002D8)
static_assert(sizeof(ASkill_EMP_Touch_C) == 0x025C); // 604 bytes (0x000220 - 0x00025C)
static_assert(sizeof(FGamePlaySaveSystem) == 0x0034); // 52 bytes (0x000000 - 0x000034)
static_assert(offsetof(ASkill_SprintAttack_A_Touch_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ASkill_SprintAttack_A_Touch_C, S_LightSword_QTE1) == 0x0228);
static_assert(offsetof(ASkill_SprintAttack_A_Touch_C, PlaneB) == 0x0230);
static_assert(offsetof(ASkill_SprintAttack_A_Touch_C, PlaneA) == 0x0238);
static_assert(offsetof(ASkill_SprintAttack_A_Touch_C, Audio) == 0x0240);
static_assert(offsetof(ASkill_SprintAttack_A_Touch_C, SwordLight) == 0x0248);
static_assert(offsetof(ASkill_SprintAttack_A_Touch_C, ProjectileMovement) == 0x0250);
static_assert(offsetof(ASkill_SprintAttack_A_Touch_C, LightSword_Touch) == 0x0258);
static_assert(offsetof(ASkill_SprintAttack_A_Touch_C, Arrow) == 0x0260);
static_assert(offsetof(ASkill_SprintAttack_Touch_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ASkill_SprintAttack_Touch_C, PlaneB) == 0x0228);
static_assert(offsetof(ASkill_SprintAttack_Touch_C, PlaneA) == 0x0230);
static_assert(offsetof(ASkill_SprintAttack_Touch_C, Audio) == 0x0238);
static_assert(offsetof(ASkill_SprintAttack_Touch_C, RotatingMovement) == 0x0240);
static_assert(offsetof(ASkill_SprintAttack_Touch_C, SwordLight) == 0x0248);
static_assert(offsetof(ASkill_SprintAttack_Touch_C, ProjectileMovement) == 0x0250);
static_assert(offsetof(ASkill_SprintAttack_Touch_C, LightSword_Touch) == 0x0258);
static_assert(offsetof(ASkill_SprintAttack_Touch_C, Arrow) == 0x0260);
static_assert(offsetof(ALaZhu_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ALaZhu_C, Light) == 0x0228);
static_assert(offsetof(ALaZhu_C, CH_LZ) == 0x0230);
static_assert(offsetof(ALaZhu_C, Scene) == 0x0238);
static_assert(offsetof(ALaZhu_C, Fire2) == 0x0240);
static_assert(offsetof(ALaZhu_C, Touch2) == 0x0248);
static_assert(offsetof(ALaZhu_C, Fire3) == 0x0250);
static_assert(offsetof(ALaZhu_C, Touch3) == 0x0258);
static_assert(offsetof(ALaZhu_C, Fire4) == 0x0260);
static_assert(offsetof(ALaZhu_C, Touch4) == 0x0268);
static_assert(offsetof(ALaZhu_C, Fire5) == 0x0270);
static_assert(offsetof(ALaZhu_C, Touch5) == 0x0278);
static_assert(offsetof(ALaZhu_C, Fire1) == 0x0280);
static_assert(offsetof(ALaZhu_C, Touch1) == 0x0288);
static_assert(offsetof(ASkill_EMP_QTE2_Touch_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ASkill_EMP_QTE2_Touch_C, Player_Touch) == 0x0228);
static_assert(offsetof(ASkill_EMP_QTE2_Touch_C, Lightning_Over) == 0x0230);
static_assert(offsetof(ASkill_EMP_QTE2_Touch_C, Lightning_Loop) == 0x0238);
static_assert(offsetof(ASkill_EMP_QTE2_Touch_C, Lightning_SingleBig) == 0x0240);
static_assert(offsetof(ASkill_EMP_QTE2_Touch_C, BOOM) == 0x0248);
static_assert(offsetof(ASkill_EMP_QTE2_Touch_C, AI_Touch) == 0x0250);
static_assert(offsetof(ASkill_EMP_QTE2_Touch_C, AI) == 0x0260);
static_assert(offsetof(ASkill_LightSword_Touch_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ASkill_LightSword_Touch_C, Audio) == 0x0228);
static_assert(offsetof(ASkill_LightSword_Touch_C, RadialForce) == 0x0230);
static_assert(offsetof(ASkill_LightSword_Touch_C, RotatingMovement) == 0x0238);
static_assert(offsetof(ASkill_LightSword_Touch_C, SwordLight) == 0x0240);
static_assert(offsetof(ASkill_LightSword_Touch_C, ProjectileMovement) == 0x0248);
static_assert(offsetof(ASkill_LightSword_Touch_C, LightSword_Touch) == 0x0250);
static_assert(offsetof(ASkill_LightSword_Touch_C, Arrow) == 0x0258);
static_assert(offsetof(ASkill_LightSwordQTE2_Touch_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ASkill_LightSwordQTE2_Touch_C, LightSword_QTE2_Touchs) == 0x0228);
static_assert(offsetof(ASkill_LightSwordQTE2_Touch_C, RadialForce) == 0x0230);
static_assert(offsetof(ASkill_LightSwordQTE2_Touch_C, Arrow) == 0x0238);
static_assert(offsetof(ASkill_LightSwordQTE_Touch_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ASkill_LightSwordQTE_Touch_C, ParticleSystem) == 0x0228);
static_assert(offsetof(ASkill_LightSwordQTE_Touch_C, LightSword_QTE_HitPar) == 0x0230);
static_assert(offsetof(ASkill_LightSwordQTE_Touch_C, RadialForce) == 0x0238);
static_assert(offsetof(ASkill_LightSwordQTE_Touch_C, RotatingMovement) == 0x0240);
static_assert(offsetof(ASkill_LightSwordQTE_Touch_C, SwordLight) == 0x0248);
static_assert(offsetof(ASkill_LightSwordQTE_Touch_C, ProjectileMovement) == 0x0250);
static_assert(offsetof(ASkill_LightSwordQTE_Touch_C, LightSwordQTE_Touch) == 0x0258);
static_assert(offsetof(ASkill_LightSwordQTE_Touch_C, Arrow) == 0x0260);
static_assert(offsetof(ASkill_EMP_QTE1_Touch_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ASkill_EMP_QTE1_Touch_C, Check_Height) == 0x0228);
static_assert(offsetof(ASkill_EMP_QTE1_Touch_C, RotatingMovement) == 0x0230);
static_assert(offsetof(ASkill_EMP_QTE1_Touch_C, Par_Light) == 0x0238);
static_assert(offsetof(ASkill_EMP_QTE1_Touch_C, Mesh) == 0x0240);
static_assert(offsetof(ASkill_EMP_QTE1_Touch_C, TimeCool_Touch) == 0x0248);
static_assert(offsetof(ASkill_EMP_QTE1_Touch_C, Arrow) == 0x0250);
static_assert(offsetof(ASkill_EMP_QTE1_Touch_C, MatOut2_Scale_8AEC0926452A8F5C9D05F39929433E7E) == 0x0258);
static_assert(offsetof(ASkill_EMP_QTE1_Touch_C, MatOut2__Direction_8AEC0926452A8F5C9D05F39929433E7E) == 0x0268);
static_assert(offsetof(ASkill_EMP_QTE1_Touch_C, MatOut2) == 0x0270);
static_assert(offsetof(ASkill_EMP_QTE1_Touch_C, MatOut__Direction_280A89F6477DF5149E9C0A9452B09004) == 0x028C);
static_assert(offsetof(ASkill_EMP_QTE1_Touch_C, MatOut) == 0x0290);
static_assert(offsetof(ASkill_EMP_QTE1_Touch_C, Scale_Mesh_Scale2_019BA6DF4607759759C337BDB0AD41C4) == 0x0298);
static_assert(offsetof(ASkill_EMP_QTE1_Touch_C, Scale_Mesh_Scale_019BA6DF4607759759C337BDB0AD41C4) == 0x02A4);
static_assert(offsetof(ASkill_EMP_QTE1_Touch_C, Scale_Mesh__Direction_019BA6DF4607759759C337BDB0AD41C4) == 0x02B4);
static_assert(offsetof(ASkill_EMP_QTE1_Touch_C, Scale_Mesh) == 0x02B8);
static_assert(offsetof(ASkill_EMP_QTE1_Touch_C, Get_Mesh) == 0x02C0);
static_assert(offsetof(ASkill_EMP_QTE1_Touch_C, AI) == 0x02D0);
static_assert(offsetof(ASkill_EMP_Touch_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ASkill_EMP_Touch_C, EMPTouch) == 0x0228);
static_assert(offsetof(ASkill_EMP_Touch_C, Phys_RadialForce) == 0x0230);
static_assert(offsetof(ASkill_EMP_Touch_C, Player_RadialForce) == 0x0238);
static_assert(offsetof(ASkill_EMP_Touch_C, AI_RadialForce) == 0x0240);
static_assert(offsetof(ASkill_EMP_Touch_C, ProjectileMovement) == 0x0248);
static_assert(offsetof(ASkill_EMP_Touch_C, Arrow) == 0x0250);
static_assert(offsetof(FGamePlaySaveSystem, PlayerPostion_3_F405BB66453908425FF4ED8D5C8978D8) == 0x0000);
