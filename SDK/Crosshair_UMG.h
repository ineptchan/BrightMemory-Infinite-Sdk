
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UISystem
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Game/Crosshair_UMG.Crosshair_UMG_C
/// Size: 0x0291 (657 bytes) (0x000260 - 0x000291) align 8 MaxSize: 0x0291
class UCrosshair_UMG_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UCanvasPanel*                                CrossHair;                                                  // 0x0268   (0x0008)  
	class UCrosshair_NearWeapon_C*                     Crosshair_NearWeapon;                                       // 0x0270   (0x0008)  
	class UCrosshair_ShotWeapon_C*                     Crosshair_ShotWeapons;                                      // 0x0278   (0x0008)  
	class UCrosshair_UsuallyWeapon_C*                  Crosshair_UsuallyWeapons;                                   // 0x0280   (0x0008)  
	class UCrosshair_X_C*                              Crosshair_Xs;                                               // 0x0288   (0x0008)  
	bool                                               IsCheckAI_;                                                 // 0x0290   (0x0001)  


	/// Functions
	// Function /Game/Crosshair_UMG.Crosshair_UMG_C.PlayShotGunCrossFireAnim
	// void PlayShotGunCrossFireAnim(int32_t FireType);                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Crosshair_UMG.Crosshair_UMG_C.PlayUsuallyCrossFireAnim
	// void PlayUsuallyCrossFireAnim(int32_t FireType);                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Crosshair_UMG.Crosshair_UMG_C.HideAllCrosshair
	// void HideAllCrosshair(bool IsHide_);                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Crosshair_UMG.Crosshair_UMG_C.Construct
	// void Construct();                                                                                                        // [0x148e900] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Crosshair_UMG.Crosshair_UMG_C.UpDateCross
	// void UpDateCross();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Crosshair_UMG.Crosshair_UMG_C.CheckAIRed
	// void CheckAIRed();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Crosshair_UMG.Crosshair_UMG_C.LoseAIRed
	// void LoseAIRed();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Crosshair_UMG.Crosshair_UMG_C.CheckSwing
	// void CheckSwing();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Crosshair_UMG.Crosshair_UMG_C.LoseSwing
	// void LoseSwing();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Crosshair_UMG.Crosshair_UMG_C.NoAmmoHUD_Event
	// void NoAmmoHUD_Event();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Crosshair_UMG.Crosshair_UMG_C.WalkStart_Crosshair
	// void WalkStart_Crosshair();                                                                                              // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Crosshair_UMG.Crosshair_UMG_C.WalkStop_Crosshair
	// void WalkStop_Crosshair();                                                                                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Crosshair_UMG.Crosshair_UMG_C.RunStart_Crosshair
	// void RunStart_Crosshair();                                                                                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Crosshair_UMG.Crosshair_UMG_C.RunStop_Crosshair
	// void RunStop_Crosshair();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Crosshair_UMG.Crosshair_UMG_C.CrossHairX
	// void CrossHairX();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Crosshair_UMG.Crosshair_UMG_C.CrossHairHeadX
	// void CrossHairHeadX();                                                                                                   // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Crosshair_UMG.Crosshair_UMG_C.HideCross?
	// void HideCross_();                                                                                                       // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Crosshair_UMG.Crosshair_UMG_C.ExecuteUbergraph_Crosshair_UMG
	// void ExecuteUbergraph_Crosshair_UMG(int32_t EntryPoint);                                                                 // [0x148e900] Final                
};

#pragma pack(pop)


static_assert(sizeof(UCrosshair_UMG_C) == 0x0291); // 657 bytes (0x000260 - 0x000291)
static_assert(offsetof(UCrosshair_UMG_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UCrosshair_UMG_C, CrossHair) == 0x0268);
static_assert(offsetof(UCrosshair_UMG_C, Crosshair_NearWeapon) == 0x0270);
static_assert(offsetof(UCrosshair_UMG_C, Crosshair_ShotWeapons) == 0x0278);
static_assert(offsetof(UCrosshair_UMG_C, Crosshair_UsuallyWeapons) == 0x0280);
static_assert(offsetof(UCrosshair_UMG_C, Crosshair_Xs) == 0x0288);
