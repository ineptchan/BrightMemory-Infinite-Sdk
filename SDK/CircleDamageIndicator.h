
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Game/CircleDamageIndicator/Blueprints/UI/UI_DamageIndicator.UI_DamageIndicator_C
/// Size: 0x02B0 (688 bytes) (0x000260 - 0x0002B0) align 8 MaxSize: 0x02B0
class UUI_DamageIndicator_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UCanvasPanel*                                CanvasPanel;                                                // 0x0268   (0x0008)  
	class UCanvasPanel*                                Indicator;                                                  // 0x0270   (0x0008)  
	class UImage*                                      IndicatorImage;                                             // 0x0278   (0x0008)  
	class UCanvasPanel*                                NearDamageIndicator;                                        // 0x0280   (0x0008)  
	class UImage*                                      NearDamageIndicatorImage;                                   // 0x0288   (0x0008)  
	FVector                                            FromLocation;                                               // 0x0290   (0x000C)  
	float                                              DisappearanceSpeed;                                         // 0x029C   (0x0004)  
	float                                              Alpha;                                                      // 0x02A0   (0x0004)  
	bool                                               PointDamage;                                                // 0x02A4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x02A5   (0x0003)  MISSED
	class AActor*                                      FromActor;                                                  // 0x02A8   (0x0008)  


	/// Functions
	// Function /Game/CircleDamageIndicator/Blueprints/UI/UI_DamageIndicator.UI_DamageIndicator_C.Disappearance
	// void Disappearance(class UImage* Image, float DeltaTime, float& CurrentAlpha);                                           // [0x148e900] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/CircleDamageIndicator/Blueprints/UI/UI_DamageIndicator.UI_DamageIndicator_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x148e900] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/CircleDamageIndicator/Blueprints/UI/UI_DamageIndicator.UI_DamageIndicator_C.HiddenDamgeHUD
	// void HiddenDamgeHUD(bool Hide_);                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/CircleDamageIndicator/Blueprints/UI/UI_DamageIndicator.UI_DamageIndicator_C.ExecuteUbergraph_UI_DamageIndicator
	// void ExecuteUbergraph_UI_DamageIndicator(int32_t EntryPoint);                                                            // [0x148e900] Final|HasDefaults    
};

/// Class /Game/CircleDamageIndicator/Blueprints/BP_CircleDamageIndicatorComponent.BP_CircleDamageIndicatorComponent_C
/// Size: 0x0124 (292 bytes) (0x0000B0 - 0x000124) align 8 MaxSize: 0x0124
class UBP_CircleDamageIndicatorComponent_C : public UActorComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00B0   (0x0008)  
	bool                                               Dynamic;                                                    // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00B9   (0x0007)  MISSED
	TArray<class UUI_DamageIndicator_C*>               PointDamageIndicators;                                      // 0x00C0   (0x0010)  
	float                                              DisappearanceSpeed;                                         // 0x00D0   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x00D4   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00E4   (0x0004)  MISSED
	class UTexture2D*                                  PointIndicator;                                             // 0x00E8   (0x0008)  
	float                                              NearDamageDistance;                                         // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00F4   (0x0004)  MISSED
	class UTexture2D*                                  NearIndicator;                                              // 0x00F8   (0x0008)  
	float                                              UIScale;                                                    // 0x0100   (0x0004)  
	FVector2D                                          ScreenOffset;                                               // 0x0104   (0x0008)  
	FVector2D                                          IndicatorSpriteOffset;                                      // 0x010C   (0x0008)  
	FVector2D                                          IndicatorSpriteSize;                                        // 0x0114   (0x0008)  
	FVector2D                                          NearIndicatorSpriteSize;                                    // 0x011C   (0x0008)  


	/// Functions
	// Function /Game/CircleDamageIndicator/Blueprints/BP_CircleDamageIndicatorComponent.BP_CircleDamageIndicatorComponent_C.CustomSettings
	// void CustomSettings(class UUI_DamageIndicator_C* IndicatorIn, bool PointDamage, class UUI_DamageIndicator_C*& Indicator); // [0x148e900] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/CircleDamageIndicator/Blueprints/BP_CircleDamageIndicatorComponent.BP_CircleDamageIndicatorComponent_C.NearDamage
	// void NearDamage(class UUI_DamageIndicator_C*& Indicator);                                                                // [0x148e900] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/CircleDamageIndicator/Blueprints/BP_CircleDamageIndicatorComponent.BP_CircleDamageIndicatorComponent_C.CalculateAngle
	// void CalculateAngle(FVector FromLocation, class UUI_DamageIndicator_C* Indicator);                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/CircleDamageIndicator/Blueprints/BP_CircleDamageIndicatorComponent.BP_CircleDamageIndicatorComponent_C.RemoveIndicator
	// void RemoveIndicator(class UUI_DamageIndicator_C* Indicator);                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/CircleDamageIndicator/Blueprints/BP_CircleDamageIndicatorComponent.BP_CircleDamageIndicatorComponent_C.DmgTaken
	// void DmgTaken(FVector FromLocation);                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/CircleDamageIndicator/Blueprints/BP_CircleDamageIndicatorComponent.BP_CircleDamageIndicatorComponent_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/CircleDamageIndicator/Blueprints/BP_CircleDamageIndicatorComponent.BP_CircleDamageIndicatorComponent_C.ExecuteUbergraph_BP_CircleDamageIndicatorComponent
	// void ExecuteUbergraph_BP_CircleDamageIndicatorComponent(int32_t EntryPoint);                                             // [0x148e900] Final                
};

#pragma pack(pop)


static_assert(sizeof(UUI_DamageIndicator_C) == 0x02B0); // 688 bytes (0x000260 - 0x0002B0)
static_assert(sizeof(UBP_CircleDamageIndicatorComponent_C) == 0x0124); // 292 bytes (0x0000B0 - 0x000124)
static_assert(offsetof(UUI_DamageIndicator_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UUI_DamageIndicator_C, CanvasPanel) == 0x0268);
static_assert(offsetof(UUI_DamageIndicator_C, Indicator) == 0x0270);
static_assert(offsetof(UUI_DamageIndicator_C, IndicatorImage) == 0x0278);
static_assert(offsetof(UUI_DamageIndicator_C, NearDamageIndicator) == 0x0280);
static_assert(offsetof(UUI_DamageIndicator_C, NearDamageIndicatorImage) == 0x0288);
static_assert(offsetof(UUI_DamageIndicator_C, FromLocation) == 0x0290);
static_assert(offsetof(UUI_DamageIndicator_C, FromActor) == 0x02A8);
static_assert(offsetof(UBP_CircleDamageIndicatorComponent_C, UberGraphFrame) == 0x00B0);
static_assert(offsetof(UBP_CircleDamageIndicatorComponent_C, PointDamageIndicators) == 0x00C0);
static_assert(offsetof(UBP_CircleDamageIndicatorComponent_C, Color) == 0x00D4);
static_assert(offsetof(UBP_CircleDamageIndicatorComponent_C, PointIndicator) == 0x00E8);
static_assert(offsetof(UBP_CircleDamageIndicatorComponent_C, NearIndicator) == 0x00F8);
static_assert(offsetof(UBP_CircleDamageIndicatorComponent_C, ScreenOffset) == 0x0104);
static_assert(offsetof(UBP_CircleDamageIndicatorComponent_C, IndicatorSpriteOffset) == 0x010C);
static_assert(offsetof(UBP_CircleDamageIndicatorComponent_C, IndicatorSpriteSize) == 0x0114);
static_assert(offsetof(UBP_CircleDamageIndicatorComponent_C, NearIndicatorSpriteSize) == 0x011C);
