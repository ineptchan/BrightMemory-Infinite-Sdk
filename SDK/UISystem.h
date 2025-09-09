
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Game/UISystem/SystemUI/UMG/BMI_MouseUI_UMG.BMI_MouseUI_UMG_C
/// Size: 0x0268 (616 bytes) (0x000260 - 0x000268) align 8 MaxSize: 0x0268
class UBMI_MouseUI_UMG_C : public UUserWidget
{ 
public:
	class UImage*                                      Mouse;                                                      // 0x0260   (0x0008)  
};

/// Class /Game/UISystem/PlayerUI/UMG/HeadMission_UMG.HeadMission_UMG_C
/// Size: 0x02E9 (745 bytes) (0x000260 - 0x0002E9) align 8 MaxSize: 0x02E9
class UHeadMission_UMG_C : public UUserWidget
{ 
public:
	class UWidgetAnimation*                            MissionOut_Anim;                                            // 0x0260   (0x0008)  
	class UWidgetAnimation*                            MissionIn_Anim;                                             // 0x0268   (0x0008)  
	class UImage*                                      BG;                                                         // 0x0270   (0x0008)  
	class UImage*                                      BlueBox;                                                    // 0x0278   (0x0008)  
	class UImage*                                      BlueLight;                                                  // 0x0280   (0x0008)  
	class UCanvasPanel*                                Mission;                                                    // 0x0288   (0x0008)  
	class UTextBlock*                                  Mission_Text;                                               // 0x0290   (0x0008)  
	class UCanvasPanel*                                MissionHUD;                                                 // 0x0298   (0x0008)  
	class UImage*                                      Triangle1;                                                  // 0x02A0   (0x0008)  
	class UImage*                                      Triangle2;                                                  // 0x02A8   (0x0008)  
	class UImage*                                      Triangle3;                                                  // 0x02B0   (0x0008)  
	class UImage*                                      Triangle4;                                                  // 0x02B8   (0x0008)  
	class UImage*                                      YellowBox;                                                  // 0x02C0   (0x0008)  
	class UImage*                                      YellowLight;                                                // 0x02C8   (0x0008)  
	FText                                              MissionText;                                                // 0x02D0   (0x0018)  
	bool                                               IsDisplayMission_;                                          // 0x02E8   (0x0001)  


	/// Functions
	// Function /Game/UISystem/PlayerUI/UMG/HeadMission_UMG.HeadMission_UMG_C.VisMission
	// void VisMission();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/HeadMission_UMG.HeadMission_UMG_C.HideMission
	// void HideMission();                                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UISystem/PlayerUI/UMG/HeadXP_UMG.HeadXP_UMG_C
/// Size: 0x02D9 (729 bytes) (0x000260 - 0x0002D9) align 8 MaxSize: 0x02D9
class UHeadXP_UMG_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UWidgetAnimation*                            XPOut_In_Anim;                                              // 0x0268   (0x0008)  
	class UWidgetAnimation*                            XPAdd_Anim;                                                 // 0x0270   (0x0008)  
	class UWidgetAnimation*                            XPLoop_Anim;                                                // 0x0278   (0x0008)  
	class UCanvasPanel*                                CanvasXP;                                                   // 0x0280   (0x0008)  
	class UCanvasPanel*                                HeadXP;                                                     // 0x0288   (0x0008)  
	class UImage*                                      UI_XP1;                                                     // 0x0290   (0x0008)  
	class UImage*                                      UI_XP1s;                                                    // 0x0298   (0x0008)  
	class UImage*                                      UI_XP2;                                                     // 0x02A0   (0x0008)  
	class UImage*                                      UI_XP2s;                                                    // 0x02A8   (0x0008)  
	class UImage*                                      UI_XP3;                                                     // 0x02B0   (0x0008)  
	class UImage*                                      UI_XP4;                                                     // 0x02B8   (0x0008)  
	class UTextBlock*                                  XP_Text;                                                    // 0x02C0   (0x0008)  
	int32_t                                            XP;                                                         // 0x02C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02CC   (0x0004)  MISSED
	class USaveGame*                                   savePlayerSubClass;                                         // 0x02D0   (0x0008)  
	bool                                               IsFirstRunGame_;                                            // 0x02D8   (0x0001)  


	/// Functions
	// Function /Game/UISystem/PlayerUI/UMG/HeadXP_UMG.HeadXP_UMG_C.VisHeadXP
	// void VisHeadXP();                                                                                                        // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/HeadXP_UMG.HeadXP_UMG_C.HideHeadXP
	// void HideHeadXP();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/HeadXP_UMG.HeadXP_UMG_C.Get_XP
	// void Get_XP();                                                                                                           // [0x148e900] Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UISystem/PlayerUI/UMG/HeadXP_UMG.HeadXP_UMG_C.PlayXPAdd_Anim
	// void PlayXPAdd_Anim();                                                                                                   // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/HeadXP_UMG.HeadXP_UMG_C.PlayXPIn_Anim
	// void PlayXPIn_Anim();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/HeadXP_UMG.HeadXP_UMG_C.PlayXPOut_Anim
	// void PlayXPOut_Anim();                                                                                                   // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/HeadXP_UMG.HeadXP_UMG_C.Construct
	// void Construct();                                                                                                        // [0x148e900] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/HeadXP_UMG.HeadXP_UMG_C.PlayXPIn_AnimNewPlayer
	// void PlayXPIn_AnimNewPlayer();                                                                                           // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/HeadXP_UMG.HeadXP_UMG_C.ExecuteUbergraph_HeadXP_UMG
	// void ExecuteUbergraph_HeadXP_UMG(int32_t EntryPoint);                                                                    // [0x148e900] Final|HasDefaults    
};

/// Class /Game/UISystem/PlayerUI/UMG/Ammo_VEPR_Fiting_UMG.Ammo_VEPR_Fiting_UMG_C
/// Size: 0x0268 (616 bytes) (0x000260 - 0x000268) align 8 MaxSize: 0x0268
class UAmmo_VEPR_Fiting_UMG_C : public UUserWidget
{ 
public:
	class UImage*                                      Tex;                                                        // 0x0260   (0x0008)  
};

/// Class /Game/UISystem/PlayerUI/UMG/AmmoPost_UMG.AmmoPost_UMG_C
/// Size: 0x0290 (656 bytes) (0x000260 - 0x000290) align 8 MaxSize: 0x0290
class UAmmoPost_UMG_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UWidgetAnimation*                            Loop;                                                       // 0x0268   (0x0008)  
	class UImage*                                      BlackBG;                                                    // 0x0270   (0x0008)  
	class UImage*                                      Line;                                                       // 0x0278   (0x0008)  
	class UCanvasPanel*                                Post;                                                       // 0x0280   (0x0008)  
	class UTextBlock*                                  TextBlock;                                                  // 0x0288   (0x0008)  


	/// Functions
	// Function /Game/UISystem/PlayerUI/UMG/AmmoPost_UMG.AmmoPost_UMG_C.HidePostAmmoHUD
	// void HidePostAmmoHUD(bool Vis_);                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/AmmoPost_UMG.AmmoPost_UMG_C.GetAmmo
	// FText GetAmmo();                                                                                                         // [0x148e900] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UISystem/PlayerUI/UMG/AmmoPost_UMG.AmmoPost_UMG_C.Construct
	// void Construct();                                                                                                        // [0x148e900] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/AmmoPost_UMG.AmmoPost_UMG_C.ExecuteUbergraph_AmmoPost_UMG
	// void ExecuteUbergraph_AmmoPost_UMG(int32_t EntryPoint);                                                                  // [0x148e900] Final                
};

/// Class /Game/UISystem/PlayerUI/UMG/AmmoPres_UMG.AmmoPres_UMG_C
/// Size: 0x02D9 (729 bytes) (0x000260 - 0x0002D9) align 8 MaxSize: 0x02D9
class UAmmoPres_UMG_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UWidgetAnimation*                            AmmoLow_Anim;                                               // 0x0268   (0x0008)  
	class UWidgetAnimation*                            AmmoReload_Anim;                                            // 0x0270   (0x0008)  
	class UWidgetAnimation*                            AmmoFire_Anim;                                              // 0x0278   (0x0008)  
	class UTextBlock*                                  Ammo_Text;                                                  // 0x0280   (0x0008)  
	class UTextBlock*                                  Ammo_Text_Blue;                                             // 0x0288   (0x0008)  
	class UTextBlock*                                  Ammo_Text_Red;                                              // 0x0290   (0x0008)  
	class UImage*                                      AmmoAnim;                                                   // 0x0298   (0x0008)  
	class UImage*                                      AmmoImage;                                                  // 0x02A0   (0x0008)  
	class UImage*                                      BlackBG;                                                    // 0x02A8   (0x0008)  
	class UCanvasPanel*                                Pres;                                                       // 0x02B0   (0x0008)  
	class UImage*                                      Right1Border;                                               // 0x02B8   (0x0008)  
	class UImage*                                      Right2Border;                                               // 0x02C0   (0x0008)  
	class UTextBlock*                                  SPAmmo_Text;                                                // 0x02C8   (0x0008)  
	class UImage*                                      SPAmmoImage;                                                // 0x02D0   (0x0008)  
	bool                                               Reload_Finsh_;                                              // 0x02D8   (0x0001)  


	/// Functions
	// Function /Game/UISystem/PlayerUI/UMG/AmmoPres_UMG.AmmoPres_UMG_C.Get SPAmmo
	// FText GetSPAmmo();                                                                                                       // [0x148e900] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UISystem/PlayerUI/UMG/AmmoPres_UMG.AmmoPres_UMG_C.HidePresAmmoHUD
	// void HidePresAmmoHUD(bool Vis_);                                                                                         // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/AmmoPres_UMG.AmmoPres_UMG_C.GetAmmo
	// FText GetAmmo();                                                                                                         // [0x148e900] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UISystem/PlayerUI/UMG/AmmoPres_UMG.AmmoPres_UMG_C.VisWeaponRedSight
	// void VisWeaponRedSight();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/AmmoPres_UMG.AmmoPres_UMG_C.HideWeaponRedSight
	// void HideWeaponRedSight();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/AmmoPres_UMG.AmmoPres_UMG_C.ReloadWeaponSmoke
	// void ReloadWeaponSmoke();                                                                                                // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/AmmoPres_UMG.AmmoPres_UMG_C.VisQYQ_Tip
	// void VisQYQ_Tip(bool Vis_);                                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/AmmoPres_UMG.AmmoPres_UMG_C.Race_CarFirePlayer
	// void Race_CarFirePlayer(float Hit);                                                                                      // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/AmmoPres_UMG.AmmoPres_UMG_C.Race_CarDead
	// void Race_CarDead();                                                                                                     // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/AmmoPres_UMG.AmmoPres_UMG_C.ChangeFireModelUI
	// void ChangeFireModelUI(bool VisFitingUI_);                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/AmmoPres_UMG.AmmoPres_UMG_C.VisWeaponHUD
	// void VisWeaponHUD(bool Vis_);                                                                                            // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/AmmoPres_UMG.AmmoPres_UMG_C.Play_AmmoFire_Anim
	// void Play_AmmoFire_Anim();                                                                                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/AmmoPres_UMG.AmmoPres_UMG_C.Play_AmmoReload_Anim
	// void Play_AmmoReload_Anim();                                                                                             // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/AmmoPres_UMG.AmmoPres_UMG_C.Play_AmmoLow_Anim
	// void Play_AmmoLow_Anim();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/AmmoPres_UMG.AmmoPres_UMG_C.OpenFireModel
	// void OpenFireModel();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/AmmoPres_UMG.AmmoPres_UMG_C.CloseFireModel
	// void CloseFireModel();                                                                                                   // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/AmmoPres_UMG.AmmoPres_UMG_C.ExecuteUbergraph_AmmoPres_UMG
	// void ExecuteUbergraph_AmmoPres_UMG(int32_t EntryPoint);                                                                  // [0x148e900] Final|HasDefaults    
};

/// Class /Game/UISystem/PlayerUI/UMG/Ammo_META_Fiting_UMG.Ammo_META_Fiting_UMG_C
/// Size: 0x0268 (616 bytes) (0x000260 - 0x000268) align 8 MaxSize: 0x0268
class UAmmo_META_Fiting_UMG_C : public UUserWidget
{ 
public:
	class UImage*                                      Tex;                                                        // 0x0260   (0x0008)  
};

/// Class /Game/UISystem/PlayerUI/UMG/Ammo_GER_Fiting_UMG.Ammo_GER_Fiting_UMG_C
/// Size: 0x0268 (616 bytes) (0x000260 - 0x000268) align 8 MaxSize: 0x0268
class UAmmo_GER_Fiting_UMG_C : public UUserWidget
{ 
public:
	class UImage*                                      Tex;                                                        // 0x0260   (0x0008)  
};

/// Class /Game/UISystem/PlayerUI/UMG/Ammo_IOPR_Fiting_UMG.Ammo_IOPR_Fiting_UMG_C
/// Size: 0x0268 (616 bytes) (0x000260 - 0x000268) align 8 MaxSize: 0x0268
class UAmmo_IOPR_Fiting_UMG_C : public UUserWidget
{ 
public:
	class UImage*                                      Tex;                                                        // 0x0260   (0x0008)  
};

/// Class /Game/UISystem/ShopUI/BP/Skill/SkillShop_BP.SkillShop_BP_C
/// Size: 0x0230 (560 bytes) (0x000220 - 0x000230) align 8 MaxSize: 0x0230
class ASkillShop_BP_C : public AActor
{ 
public:
	class UStaticMeshComponent*                        RainBlock;                                                  // 0x0220   (0x0008)  
	class UWidgetComponent*                            SkillShop;                                                  // 0x0228   (0x0008)  
};

/// Class /Game/UISystem/PlayerUI/UMG/AMMO_VEPR_Last_ICON_UMG.AMMO_VEPR_Last_ICON_UMG_C
/// Size: 0x0268 (616 bytes) (0x000260 - 0x000268) align 8 MaxSize: 0x0268
class UAMMO_VEPR_Last_ICON_UMG_C : public UUserWidget
{ 
public:
	class UImage*                                      Icon;                                                       // 0x0260   (0x0008)  
};

/// Class /Game/UISystem/PlayerUI/UMG/AMMO_ICON_UMG.AMMO_ICON_UMG_C
/// Size: 0x0268 (616 bytes) (0x000260 - 0x000268) align 8 MaxSize: 0x0268
class UAMMO_ICON_UMG_C : public UUserWidget
{ 
public:
	class UImage*                                      Icon;                                                       // 0x0260   (0x0008)  
};

/// Class /Game/UISystem/PlayerUI/UMG/AMMO_Meta_Last_ICON_UMG.AMMO_Meta_Last_ICON_UMG_C
/// Size: 0x0268 (616 bytes) (0x000260 - 0x000268) align 8 MaxSize: 0x0268
class UAMMO_Meta_Last_ICON_UMG_C : public UUserWidget
{ 
public:
	class UImage*                                      Icon;                                                       // 0x0260   (0x0008)  
};

/// Class /Game/UISystem/PlayerUI/UMG/AMMO_IOPR_Last_ICON_UMG.AMMO_IOPR_Last_ICON_UMG_C
/// Size: 0x0268 (616 bytes) (0x000260 - 0x000268) align 8 MaxSize: 0x0268
class UAMMO_IOPR_Last_ICON_UMG_C : public UUserWidget
{ 
public:
	class UImage*                                      Icon;                                                       // 0x0260   (0x0008)  
};

/// Class /Game/UISystem/PlayerUI/UMG/AMMO_GER_Last_ICON_UMG.AMMO_GER_Last_ICON_UMG_C
/// Size: 0x0268 (616 bytes) (0x000260 - 0x000268) align 8 MaxSize: 0x0268
class UAMMO_GER_Last_ICON_UMG_C : public UUserWidget
{ 
public:
	class UImage*                                      Icon;                                                       // 0x0260   (0x0008)  
};

/// Class /Game/UISystem/TextUI/BP/SwingComponent.SwingComponent_C
/// Size: 0x0280 (640 bytes) (0x0001F8 - 0x000280) align 16 MaxSize: 0x0280
class USwingComponent_C : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x01F8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0200   (0x0008)  
	FString                                            ObjectiveText;                                              // 0x0208   (0x0010)  
	FVector                                            CharacterLocation;                                          // 0x0218   (0x000C)  
	FVector                                            ObjectiveLocation;                                          // 0x0224   (0x000C)  
	FVector                                            CameraLocation;                                             // 0x0230   (0x000C)  
	FVector                                            ForwarVectorByCameraRotation;                               // 0x023C   (0x000C)  
	float                                              ObjectiveScreenCoordinatesX;                                // 0x0248   (0x0004)  
	float                                              ObjectiveScreenCoordinatesY;                                // 0x024C   (0x0004)  
	float                                              ViewportSizeX;                                              // 0x0250   (0x0004)  
	float                                              ViewportSizeY;                                              // 0x0254   (0x0004)  
	float                                              ObjectiveMarkerX;                                           // 0x0258   (0x0004)  
	float                                              ObjectiveMarkerY;                                           // 0x025C   (0x0004)  
	float                                              ObjectiveMarkerTextX;                                       // 0x0260   (0x0004)  
	float                                              ObjectiveMarkerTextY;                                       // 0x0264   (0x0004)  
	float                                              ArrowMarkerTextX;                                           // 0x0268   (0x0004)  
	float                                              ArrowMarkerTextY;                                           // 0x026C   (0x0004)  
	float                                              TriangleRotation;                                           // 0x0270   (0x0004)  
	float                                              ArrowScreenRatio;                                           // 0x0274   (0x0004)  
	class AHUD*                                        HUDRef;                                                     // 0x0278   (0x0008)  


	/// Functions
	// Function /Game/UISystem/TextUI/BP/SwingComponent.SwingComponent_C.UpDateMissionObj
	// void UpDateMissionObj();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/TextUI/BP/SwingComponent.SwingComponent_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/UISystem/TextUI/BP/SwingComponent.SwingComponent_C.ExecuteUbergraph_SwingComponent
	// void ExecuteUbergraph_SwingComponent(int32_t EntryPoint);                                                                // [0x148e900] Final|HasDefaults    
};

/// Class /Game/UISystem/PlayerUI/UMG/ScrenHUD_UMG.ScrenHUD_UMG_C
/// Size: 0x02C5 (709 bytes) (0x000260 - 0x0002C5) align 8 MaxSize: 0x02C5
class UScrenHUD_UMG_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UWidgetAnimation*                            Health70_Out;                                               // 0x0268   (0x0008)  
	class UWidgetAnimation*                            Health55_Out;                                               // 0x0270   (0x0008)  
	class UWidgetAnimation*                            Health33_Out;                                               // 0x0278   (0x0008)  
	class UWidgetAnimation*                            Blood_AIDead_Anim;                                          // 0x0280   (0x0008)  
	class UWidgetAnimation*                            Health33;                                                   // 0x0288   (0x0008)  
	class UWidgetAnimation*                            Health55;                                                   // 0x0290   (0x0008)  
	class UWidgetAnimation*                            Health70;                                                   // 0x0298   (0x0008)  
	class UImage*                                      Blood;                                                      // 0x02A0   (0x0008)  
	class UImage*                                      Blood0;                                                     // 0x02A8   (0x0008)  
	class UImage*                                      Blood1;                                                     // 0x02B0   (0x0008)  
	class UImage*                                      Blood_AIDead;                                               // 0x02B8   (0x0008)  
	float                                              BloodScalar;                                                // 0x02C0   (0x0004)  
	bool                                               AIDeadBloodAnim_IsOver_;                                    // 0x02C4   (0x0001)  


	/// Functions
	// Function /Game/UISystem/PlayerUI/UMG/ScrenHUD_UMG.ScrenHUD_UMG_C.Health=70_Event
	// void Health_70_Event();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/ScrenHUD_UMG.ScrenHUD_UMG_C.Health=55_Event
	// void Health_55_Event();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/ScrenHUD_UMG.ScrenHUD_UMG_C.Health=33_Event
	// void Health_33_Event();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/ScrenHUD_UMG.ScrenHUD_UMG_C.Health>70_Event
	// void Health_70_Event();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/ScrenHUD_UMG.ScrenHUD_UMG_C.Health>55_Event
	// void Health_55_Event();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/ScrenHUD_UMG.ScrenHUD_UMG_C.Health>33_Event
	// void Health_33_Event();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/ScrenHUD_UMG.ScrenHUD_UMG_C.Health=Hit_Event
	// void Health_Hit_Event();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/ScrenHUD_UMG.ScrenHUD_UMG_C.BloodScalarSubtra
	// void BloodScalarSubtra();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/ScrenHUD_UMG.ScrenHUD_UMG_C.Play_AIDeadBlood
	// void Play_AIDeadBlood();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/ScrenHUD_UMG.ScrenHUD_UMG_C.BloodScalarAdd
	// void BloodScalarAdd();                                                                                                   // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/ScrenHUD_UMG.ScrenHUD_UMG_C.ExecuteUbergraph_ScrenHUD_UMG
	// void ExecuteUbergraph_ScrenHUD_UMG(int32_t EntryPoint);                                                                  // [0x148e900] Final|HasDefaults    
};

/// Class /Game/UISystem/PlayerUI/UMG/Crosshair_NearWeapon.Crosshair_NearWeapon_C
/// Size: 0x0268 (616 bytes) (0x000260 - 0x000268) align 8 MaxSize: 0x0268
class UCrosshair_NearWeapon_C : public UUserWidget
{ 
public:
	class UImage*                                      CrossHairStar;                                              // 0x0260   (0x0008)  
};

/// Class /Game/UISystem/PlayerUI/UMG/Crosshair_ShotWeapon.Crosshair_ShotWeapon_C
/// Size: 0x0298 (664 bytes) (0x000260 - 0x000298) align 8 MaxSize: 0x0298
class UCrosshair_ShotWeapon_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UWidgetAnimation*                            FireCrossAnim_Mult;                                         // 0x0268   (0x0008)  
	class UWidgetAnimation*                            WalkFireCrossAnim;                                          // 0x0270   (0x0008)  
	class UWidgetAnimation*                            RunCrossAnim;                                               // 0x0278   (0x0008)  
	class UWidgetAnimation*                            WalkCrossAnim;                                              // 0x0280   (0x0008)  
	class UWidgetAnimation*                            FireCrossAnim_Single;                                       // 0x0288   (0x0008)  
	class UImage*                                      ShotGunCross;                                               // 0x0290   (0x0008)  


	/// Functions
	// Function /Game/UISystem/PlayerUI/UMG/Crosshair_ShotWeapon.Crosshair_ShotWeapon_C.PlayFireCrossSingle_Anim
	// void PlayFireCrossSingle_Anim();                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/Crosshair_ShotWeapon.Crosshair_ShotWeapon_C.PlayWalkCross_Anim
	// void PlayWalkCross_Anim();                                                                                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/Crosshair_ShotWeapon.Crosshair_ShotWeapon_C.StopWalkCross_Anim
	// void StopWalkCross_Anim();                                                                                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/Crosshair_ShotWeapon.Crosshair_ShotWeapon_C.PlayRunCross_Anim
	// void PlayRunCross_Anim();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/Crosshair_ShotWeapon.Crosshair_ShotWeapon_C.StopRunCross_Anim
	// void StopRunCross_Anim();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/Crosshair_ShotWeapon.Crosshair_ShotWeapon_C.PlayFireCrossMult_Anim
	// void PlayFireCrossMult_Anim();                                                                                           // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/Crosshair_ShotWeapon.Crosshair_ShotWeapon_C.PlayWalkFireAnim
	// void PlayWalkFireAnim();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/Crosshair_ShotWeapon.Crosshair_ShotWeapon_C.ExecuteUbergraph_Crosshair_ShotWeapon
	// void ExecuteUbergraph_Crosshair_ShotWeapon(int32_t EntryPoint);                                                          // [0x148e900] Final                
};

/// Class /Game/UISystem/PlayerUI/UMG/Crosshair_UsuallyWeapon.Crosshair_UsuallyWeapon_C
/// Size: 0x02B0 (688 bytes) (0x000260 - 0x0002B0) align 8 MaxSize: 0x02B0
class UCrosshair_UsuallyWeapon_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UWidgetAnimation*                            FireCrossAnim_Mult;                                         // 0x0268   (0x0008)  
	class UWidgetAnimation*                            WalkFireCrossAnim;                                          // 0x0270   (0x0008)  
	class UWidgetAnimation*                            RunCrossAnim;                                               // 0x0278   (0x0008)  
	class UWidgetAnimation*                            WalkCrossAnim;                                              // 0x0280   (0x0008)  
	class UWidgetAnimation*                            FireCrossAnim_Single;                                       // 0x0288   (0x0008)  
	class UImage*                                      CrossHairStar;                                              // 0x0290   (0x0008)  
	class UImage*                                      Down_Cross;                                                 // 0x0298   (0x0008)  
	class UImage*                                      Left_Cross;                                                 // 0x02A0   (0x0008)  
	class UImage*                                      Right_Cross;                                                // 0x02A8   (0x0008)  


	/// Functions
	// Function /Game/UISystem/PlayerUI/UMG/Crosshair_UsuallyWeapon.Crosshair_UsuallyWeapon_C.PlayFireCrossSingle_Anim
	// void PlayFireCrossSingle_Anim();                                                                                         // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/Crosshair_UsuallyWeapon.Crosshair_UsuallyWeapon_C.PlayWalkCross_Anim
	// void PlayWalkCross_Anim();                                                                                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/Crosshair_UsuallyWeapon.Crosshair_UsuallyWeapon_C.StopWalkCross_Anim
	// void StopWalkCross_Anim();                                                                                               // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/Crosshair_UsuallyWeapon.Crosshair_UsuallyWeapon_C.PlayRunCross_Anim
	// void PlayRunCross_Anim();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/Crosshair_UsuallyWeapon.Crosshair_UsuallyWeapon_C.StopRunCross_Anim
	// void StopRunCross_Anim();                                                                                                // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/Crosshair_UsuallyWeapon.Crosshair_UsuallyWeapon_C.PlayFireCrossMult_Anim
	// void PlayFireCrossMult_Anim();                                                                                           // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/Crosshair_UsuallyWeapon.Crosshair_UsuallyWeapon_C.PlayWalkFireAnim
	// void PlayWalkFireAnim();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/Crosshair_UsuallyWeapon.Crosshair_UsuallyWeapon_C.ExecuteUbergraph_Crosshair_UsuallyWeapon
	// void ExecuteUbergraph_Crosshair_UsuallyWeapon(int32_t EntryPoint);                                                       // [0x148e900] Final                
};

/// Class /Game/UISystem/PlayerUI/UMG/Crosshair_X.Crosshair_X_C
/// Size: 0x0280 (640 bytes) (0x000260 - 0x000280) align 8 MaxSize: 0x0280
class UCrosshair_X_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UWidgetAnimation*                            XCrossRedAnim;                                              // 0x0268   (0x0008)  
	class UWidgetAnimation*                            XCrossAnim_A;                                               // 0x0270   (0x0008)  
	class UImage*                                      XCross;                                                     // 0x0278   (0x0008)  


	/// Functions
	// Function /Game/UISystem/PlayerUI/UMG/Crosshair_X.Crosshair_X_C.PlayXCross_Anim
	// void PlayXCross_Anim();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/Crosshair_X.Crosshair_X_C.PlayXCross_HeadShotAnim
	// void PlayXCross_HeadShotAnim();                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/PlayerUI/UMG/Crosshair_X.Crosshair_X_C.ExecuteUbergraph_Crosshair_X
	// void ExecuteUbergraph_Crosshair_X(int32_t EntryPoint);                                                                   // [0x148e900] Final                
};

/// Class /Game/UISystem/TextUI/BP/MissionComponent.MissionComponent_C
/// Size: 0x0280 (640 bytes) (0x0001F8 - 0x000280) align 16 MaxSize: 0x0280
class UMissionComponent_C : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x01F8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0200   (0x0008)  
	FString                                            ObjectiveText;                                              // 0x0208   (0x0010)  
	FVector                                            CharacterLocation;                                          // 0x0218   (0x000C)  
	FVector                                            ObjectiveLocation;                                          // 0x0224   (0x000C)  
	FVector                                            CameraLocation;                                             // 0x0230   (0x000C)  
	FVector                                            ForwarVectorByCameraRotation;                               // 0x023C   (0x000C)  
	float                                              ObjectiveScreenCoordinatesX;                                // 0x0248   (0x0004)  
	float                                              ObjectiveScreenCoordinatesY;                                // 0x024C   (0x0004)  
	float                                              ViewportSizeX;                                              // 0x0250   (0x0004)  
	float                                              ViewportSizeY;                                              // 0x0254   (0x0004)  
	float                                              ObjectiveMarkerX;                                           // 0x0258   (0x0004)  
	float                                              ObjectiveMarkerY;                                           // 0x025C   (0x0004)  
	float                                              ObjectiveMarkerTextX;                                       // 0x0260   (0x0004)  
	float                                              ObjectiveMarkerTextY;                                       // 0x0264   (0x0004)  
	float                                              ArrowMarkerTextX;                                           // 0x0268   (0x0004)  
	float                                              ArrowMarkerTextY;                                           // 0x026C   (0x0004)  
	float                                              TriangleRotation;                                           // 0x0270   (0x0004)  
	float                                              ArrowScreenRatio;                                           // 0x0274   (0x0004)  
	class AHUD*                                        HUDRef;                                                     // 0x0278   (0x0008)  


	/// Functions
	// Function /Game/UISystem/TextUI/BP/MissionComponent.MissionComponent_C.UpDateMissionObj
	// void UpDateMissionObj();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/TextUI/BP/MissionComponent.MissionComponent_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/UISystem/TextUI/BP/MissionComponent.MissionComponent_C.ExecuteUbergraph_MissionComponent
	// void ExecuteUbergraph_MissionComponent(int32_t EntryPoint);                                                              // [0x148e900] Final|HasDefaults    
};

/// Class /Game/UISystem/TextUI/BP/ShouLeisComponent.ShouLeisComponent_C
/// Size: 0x0280 (640 bytes) (0x0001F8 - 0x000280) align 16 MaxSize: 0x0280
class UShouLeisComponent_C : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x01F8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0200   (0x0008)  
	FString                                            ObjectiveText;                                              // 0x0208   (0x0010)  
	FVector                                            CharacterLocation;                                          // 0x0218   (0x000C)  
	FVector                                            ObjectiveLocation;                                          // 0x0224   (0x000C)  
	FVector                                            CameraLocation;                                             // 0x0230   (0x000C)  
	FVector                                            ForwarVectorByCameraRotation;                               // 0x023C   (0x000C)  
	float                                              ObjectiveScreenCoordinatesX;                                // 0x0248   (0x0004)  
	float                                              ObjectiveScreenCoordinatesY;                                // 0x024C   (0x0004)  
	float                                              ViewportSizeX;                                              // 0x0250   (0x0004)  
	float                                              ViewportSizeY;                                              // 0x0254   (0x0004)  
	float                                              ObjectiveMarkerX;                                           // 0x0258   (0x0004)  
	float                                              ObjectiveMarkerY;                                           // 0x025C   (0x0004)  
	float                                              ObjectiveMarkerTextX;                                       // 0x0260   (0x0004)  
	float                                              ObjectiveMarkerTextY;                                       // 0x0264   (0x0004)  
	float                                              ArrowMarkerTextX;                                           // 0x0268   (0x0004)  
	float                                              ArrowMarkerTextY;                                           // 0x026C   (0x0004)  
	float                                              TriangleRotation;                                           // 0x0270   (0x0004)  
	float                                              ArrowScreenRatio;                                           // 0x0274   (0x0004)  
	class AHUD*                                        HUDRef;                                                     // 0x0278   (0x0008)  


	/// Functions
	// Function /Game/UISystem/TextUI/BP/ShouLeisComponent.ShouLeisComponent_C.UpDateMissionObj
	// void UpDateMissionObj();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/UISystem/TextUI/BP/ShouLeisComponent.ShouLeisComponent_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/UISystem/TextUI/BP/ShouLeisComponent.ShouLeisComponent_C.ExecuteUbergraph_ShouLeisComponent
	// void ExecuteUbergraph_ShouLeisComponent(int32_t EntryPoint);                                                             // [0x148e900] Final|HasDefaults    
};

/// Class /Game/UISystem/TextUI/BP/SwingPonit_BP.SwingPonit_BP_C
/// Size: 0x0228 (552 bytes) (0x000220 - 0x000228) align 8 MaxSize: 0x0228
class ASwingPonit_BP_C : public AActor
{ 
public:
	class UBillboardComponent*                         ObjectPonit;                                                // 0x0220   (0x0008)  
};

/// Class /Game/UISystem/TextUI/BP/NewObjectPonit_BP.NewObjectPonit_BP_C
/// Size: 0x0228 (552 bytes) (0x000220 - 0x000228) align 8 MaxSize: 0x0228
class ANewObjectPonit_BP_C : public AActor
{ 
public:
	class UBillboardComponent*                         ObjectPonit;                                                // 0x0220   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(UBMI_MouseUI_UMG_C) == 0x0268); // 616 bytes (0x000260 - 0x000268)
static_assert(sizeof(UHeadMission_UMG_C) == 0x02E9); // 745 bytes (0x000260 - 0x0002E9)
static_assert(sizeof(UHeadXP_UMG_C) == 0x02D9); // 729 bytes (0x000260 - 0x0002D9)
static_assert(sizeof(UAmmo_VEPR_Fiting_UMG_C) == 0x0268); // 616 bytes (0x000260 - 0x000268)
static_assert(sizeof(UAmmoPost_UMG_C) == 0x0290); // 656 bytes (0x000260 - 0x000290)
static_assert(sizeof(UAmmoPres_UMG_C) == 0x02D9); // 729 bytes (0x000260 - 0x0002D9)
static_assert(sizeof(UAmmo_META_Fiting_UMG_C) == 0x0268); // 616 bytes (0x000260 - 0x000268)
static_assert(sizeof(UAmmo_GER_Fiting_UMG_C) == 0x0268); // 616 bytes (0x000260 - 0x000268)
static_assert(sizeof(UAmmo_IOPR_Fiting_UMG_C) == 0x0268); // 616 bytes (0x000260 - 0x000268)
static_assert(sizeof(ASkillShop_BP_C) == 0x0230); // 560 bytes (0x000220 - 0x000230)
static_assert(sizeof(UAMMO_VEPR_Last_ICON_UMG_C) == 0x0268); // 616 bytes (0x000260 - 0x000268)
static_assert(sizeof(UAMMO_ICON_UMG_C) == 0x0268); // 616 bytes (0x000260 - 0x000268)
static_assert(sizeof(UAMMO_Meta_Last_ICON_UMG_C) == 0x0268); // 616 bytes (0x000260 - 0x000268)
static_assert(sizeof(UAMMO_IOPR_Last_ICON_UMG_C) == 0x0268); // 616 bytes (0x000260 - 0x000268)
static_assert(sizeof(UAMMO_GER_Last_ICON_UMG_C) == 0x0268); // 616 bytes (0x000260 - 0x000268)
static_assert(sizeof(USwingComponent_C) == 0x0280); // 640 bytes (0x0001F8 - 0x000280)
static_assert(sizeof(UScrenHUD_UMG_C) == 0x02C5); // 709 bytes (0x000260 - 0x0002C5)
static_assert(sizeof(UCrosshair_NearWeapon_C) == 0x0268); // 616 bytes (0x000260 - 0x000268)
static_assert(sizeof(UCrosshair_ShotWeapon_C) == 0x0298); // 664 bytes (0x000260 - 0x000298)
static_assert(sizeof(UCrosshair_UsuallyWeapon_C) == 0x02B0); // 688 bytes (0x000260 - 0x0002B0)
static_assert(sizeof(UCrosshair_X_C) == 0x0280); // 640 bytes (0x000260 - 0x000280)
static_assert(sizeof(UMissionComponent_C) == 0x0280); // 640 bytes (0x0001F8 - 0x000280)
static_assert(sizeof(UShouLeisComponent_C) == 0x0280); // 640 bytes (0x0001F8 - 0x000280)
static_assert(sizeof(ASwingPonit_BP_C) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(ANewObjectPonit_BP_C) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(offsetof(UBMI_MouseUI_UMG_C, Mouse) == 0x0260);
static_assert(offsetof(UHeadMission_UMG_C, MissionOut_Anim) == 0x0260);
static_assert(offsetof(UHeadMission_UMG_C, MissionIn_Anim) == 0x0268);
static_assert(offsetof(UHeadMission_UMG_C, BG) == 0x0270);
static_assert(offsetof(UHeadMission_UMG_C, BlueBox) == 0x0278);
static_assert(offsetof(UHeadMission_UMG_C, BlueLight) == 0x0280);
static_assert(offsetof(UHeadMission_UMG_C, Mission) == 0x0288);
static_assert(offsetof(UHeadMission_UMG_C, Mission_Text) == 0x0290);
static_assert(offsetof(UHeadMission_UMG_C, MissionHUD) == 0x0298);
static_assert(offsetof(UHeadMission_UMG_C, Triangle1) == 0x02A0);
static_assert(offsetof(UHeadMission_UMG_C, Triangle2) == 0x02A8);
static_assert(offsetof(UHeadMission_UMG_C, Triangle3) == 0x02B0);
static_assert(offsetof(UHeadMission_UMG_C, Triangle4) == 0x02B8);
static_assert(offsetof(UHeadMission_UMG_C, YellowBox) == 0x02C0);
static_assert(offsetof(UHeadMission_UMG_C, YellowLight) == 0x02C8);
static_assert(offsetof(UHeadMission_UMG_C, MissionText) == 0x02D0);
static_assert(offsetof(UHeadXP_UMG_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UHeadXP_UMG_C, XPOut_In_Anim) == 0x0268);
static_assert(offsetof(UHeadXP_UMG_C, XPAdd_Anim) == 0x0270);
static_assert(offsetof(UHeadXP_UMG_C, XPLoop_Anim) == 0x0278);
static_assert(offsetof(UHeadXP_UMG_C, CanvasXP) == 0x0280);
static_assert(offsetof(UHeadXP_UMG_C, HeadXP) == 0x0288);
static_assert(offsetof(UHeadXP_UMG_C, UI_XP1) == 0x0290);
static_assert(offsetof(UHeadXP_UMG_C, UI_XP1s) == 0x0298);
static_assert(offsetof(UHeadXP_UMG_C, UI_XP2) == 0x02A0);
static_assert(offsetof(UHeadXP_UMG_C, UI_XP2s) == 0x02A8);
static_assert(offsetof(UHeadXP_UMG_C, UI_XP3) == 0x02B0);
static_assert(offsetof(UHeadXP_UMG_C, UI_XP4) == 0x02B8);
static_assert(offsetof(UHeadXP_UMG_C, XP_Text) == 0x02C0);
static_assert(offsetof(UHeadXP_UMG_C, savePlayerSubClass) == 0x02D0);
static_assert(offsetof(UAmmo_VEPR_Fiting_UMG_C, Tex) == 0x0260);
static_assert(offsetof(UAmmoPost_UMG_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UAmmoPost_UMG_C, Loop) == 0x0268);
static_assert(offsetof(UAmmoPost_UMG_C, BlackBG) == 0x0270);
static_assert(offsetof(UAmmoPost_UMG_C, Line) == 0x0278);
static_assert(offsetof(UAmmoPost_UMG_C, Post) == 0x0280);
static_assert(offsetof(UAmmoPost_UMG_C, TextBlock) == 0x0288);
static_assert(offsetof(UAmmoPres_UMG_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UAmmoPres_UMG_C, AmmoLow_Anim) == 0x0268);
static_assert(offsetof(UAmmoPres_UMG_C, AmmoReload_Anim) == 0x0270);
static_assert(offsetof(UAmmoPres_UMG_C, AmmoFire_Anim) == 0x0278);
static_assert(offsetof(UAmmoPres_UMG_C, Ammo_Text) == 0x0280);
static_assert(offsetof(UAmmoPres_UMG_C, Ammo_Text_Blue) == 0x0288);
static_assert(offsetof(UAmmoPres_UMG_C, Ammo_Text_Red) == 0x0290);
static_assert(offsetof(UAmmoPres_UMG_C, AmmoAnim) == 0x0298);
static_assert(offsetof(UAmmoPres_UMG_C, AmmoImage) == 0x02A0);
static_assert(offsetof(UAmmoPres_UMG_C, BlackBG) == 0x02A8);
static_assert(offsetof(UAmmoPres_UMG_C, Pres) == 0x02B0);
static_assert(offsetof(UAmmoPres_UMG_C, Right1Border) == 0x02B8);
static_assert(offsetof(UAmmoPres_UMG_C, Right2Border) == 0x02C0);
static_assert(offsetof(UAmmoPres_UMG_C, SPAmmo_Text) == 0x02C8);
static_assert(offsetof(UAmmoPres_UMG_C, SPAmmoImage) == 0x02D0);
static_assert(offsetof(UAmmo_META_Fiting_UMG_C, Tex) == 0x0260);
static_assert(offsetof(UAmmo_GER_Fiting_UMG_C, Tex) == 0x0260);
static_assert(offsetof(UAmmo_IOPR_Fiting_UMG_C, Tex) == 0x0260);
static_assert(offsetof(ASkillShop_BP_C, RainBlock) == 0x0220);
static_assert(offsetof(ASkillShop_BP_C, SkillShop) == 0x0228);
static_assert(offsetof(UAMMO_VEPR_Last_ICON_UMG_C, Icon) == 0x0260);
static_assert(offsetof(UAMMO_ICON_UMG_C, Icon) == 0x0260);
static_assert(offsetof(UAMMO_Meta_Last_ICON_UMG_C, Icon) == 0x0260);
static_assert(offsetof(UAMMO_IOPR_Last_ICON_UMG_C, Icon) == 0x0260);
static_assert(offsetof(UAMMO_GER_Last_ICON_UMG_C, Icon) == 0x0260);
static_assert(offsetof(USwingComponent_C, UberGraphFrame) == 0x0200);
static_assert(offsetof(USwingComponent_C, ObjectiveText) == 0x0208);
static_assert(offsetof(USwingComponent_C, CharacterLocation) == 0x0218);
static_assert(offsetof(USwingComponent_C, ObjectiveLocation) == 0x0224);
static_assert(offsetof(USwingComponent_C, CameraLocation) == 0x0230);
static_assert(offsetof(USwingComponent_C, ForwarVectorByCameraRotation) == 0x023C);
static_assert(offsetof(USwingComponent_C, HUDRef) == 0x0278);
static_assert(offsetof(UScrenHUD_UMG_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UScrenHUD_UMG_C, Health70_Out) == 0x0268);
static_assert(offsetof(UScrenHUD_UMG_C, Health55_Out) == 0x0270);
static_assert(offsetof(UScrenHUD_UMG_C, Health33_Out) == 0x0278);
static_assert(offsetof(UScrenHUD_UMG_C, Blood_AIDead_Anim) == 0x0280);
static_assert(offsetof(UScrenHUD_UMG_C, Health33) == 0x0288);
static_assert(offsetof(UScrenHUD_UMG_C, Health55) == 0x0290);
static_assert(offsetof(UScrenHUD_UMG_C, Health70) == 0x0298);
static_assert(offsetof(UScrenHUD_UMG_C, Blood) == 0x02A0);
static_assert(offsetof(UScrenHUD_UMG_C, Blood0) == 0x02A8);
static_assert(offsetof(UScrenHUD_UMG_C, Blood1) == 0x02B0);
static_assert(offsetof(UScrenHUD_UMG_C, Blood_AIDead) == 0x02B8);
static_assert(offsetof(UCrosshair_NearWeapon_C, CrossHairStar) == 0x0260);
static_assert(offsetof(UCrosshair_ShotWeapon_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UCrosshair_ShotWeapon_C, FireCrossAnim_Mult) == 0x0268);
static_assert(offsetof(UCrosshair_ShotWeapon_C, WalkFireCrossAnim) == 0x0270);
static_assert(offsetof(UCrosshair_ShotWeapon_C, RunCrossAnim) == 0x0278);
static_assert(offsetof(UCrosshair_ShotWeapon_C, WalkCrossAnim) == 0x0280);
static_assert(offsetof(UCrosshair_ShotWeapon_C, FireCrossAnim_Single) == 0x0288);
static_assert(offsetof(UCrosshair_ShotWeapon_C, ShotGunCross) == 0x0290);
static_assert(offsetof(UCrosshair_UsuallyWeapon_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UCrosshair_UsuallyWeapon_C, FireCrossAnim_Mult) == 0x0268);
static_assert(offsetof(UCrosshair_UsuallyWeapon_C, WalkFireCrossAnim) == 0x0270);
static_assert(offsetof(UCrosshair_UsuallyWeapon_C, RunCrossAnim) == 0x0278);
static_assert(offsetof(UCrosshair_UsuallyWeapon_C, WalkCrossAnim) == 0x0280);
static_assert(offsetof(UCrosshair_UsuallyWeapon_C, FireCrossAnim_Single) == 0x0288);
static_assert(offsetof(UCrosshair_UsuallyWeapon_C, CrossHairStar) == 0x0290);
static_assert(offsetof(UCrosshair_UsuallyWeapon_C, Down_Cross) == 0x0298);
static_assert(offsetof(UCrosshair_UsuallyWeapon_C, Left_Cross) == 0x02A0);
static_assert(offsetof(UCrosshair_UsuallyWeapon_C, Right_Cross) == 0x02A8);
static_assert(offsetof(UCrosshair_X_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UCrosshair_X_C, XCrossRedAnim) == 0x0268);
static_assert(offsetof(UCrosshair_X_C, XCrossAnim_A) == 0x0270);
static_assert(offsetof(UCrosshair_X_C, XCross) == 0x0278);
static_assert(offsetof(UMissionComponent_C, UberGraphFrame) == 0x0200);
static_assert(offsetof(UMissionComponent_C, ObjectiveText) == 0x0208);
static_assert(offsetof(UMissionComponent_C, CharacterLocation) == 0x0218);
static_assert(offsetof(UMissionComponent_C, ObjectiveLocation) == 0x0224);
static_assert(offsetof(UMissionComponent_C, CameraLocation) == 0x0230);
static_assert(offsetof(UMissionComponent_C, ForwarVectorByCameraRotation) == 0x023C);
static_assert(offsetof(UMissionComponent_C, HUDRef) == 0x0278);
static_assert(offsetof(UShouLeisComponent_C, UberGraphFrame) == 0x0200);
static_assert(offsetof(UShouLeisComponent_C, ObjectiveText) == 0x0208);
static_assert(offsetof(UShouLeisComponent_C, CharacterLocation) == 0x0218);
static_assert(offsetof(UShouLeisComponent_C, ObjectiveLocation) == 0x0224);
static_assert(offsetof(UShouLeisComponent_C, CameraLocation) == 0x0230);
static_assert(offsetof(UShouLeisComponent_C, ForwarVectorByCameraRotation) == 0x023C);
static_assert(offsetof(UShouLeisComponent_C, HUDRef) == 0x0278);
static_assert(offsetof(ASwingPonit_BP_C, ObjectPonit) == 0x0220);
static_assert(offsetof(ANewObjectPonit_BP_C, ObjectPonit) == 0x0220);
