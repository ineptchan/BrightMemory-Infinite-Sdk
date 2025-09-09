
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

/// Class /Game/Custom_Lens_Flare_VFX/Blueprints/LensFlare_BP.LensFlare_BP_C
/// Size: 0x0578 (1400 bytes) (0x000220 - 0x000578) align 8 MaxSize: 0x0578
class ALensFlare_BP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UMaterialBillboardComponent*                 LensFlare;                                                  // 0x0228   (0x0008)  
	class USceneComponent*                             Scene;                                                      // 0x0230   (0x0008)  
	float                                              DeltaTime;                                                  // 0x0238   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x023C   (0x0004)  MISSED
	class UMaterialInstanceDynamic*                    FlareDynamicMI;                                             // 0x0240   (0x0008)  
	class UMaterialInterface*                          FlareMat;                                                   // 0x0248   (0x0008)  
	float                                              GlobalBrightness;                                           // 0x0250   (0x0004)  
	float                                              GhostsBrightness;                                           // 0x0254   (0x0004)  
	bool                                               UseFadeDistance;                                            // 0x0258   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0259   (0x0003)  MISSED
	float                                              FadeDistance;                                               // 0x025C   (0x0004)  
	bool                                               UseDistanceBloom;                                           // 0x0260   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0261   (0x0003)  MISSED
	float                                              IncreasingBloomByDistance;                                  // 0x0264   (0x0004)  
	FLinearColor                                       GlobalColor;                                                // 0x0268   (0x0010)  
	float                                              FadeOutSpeed;                                               // 0x0278   (0x0004)  
	float                                              FadeInSpeed;                                                // 0x027C   (0x0004)  
	float                                              BaseSizeY;                                                  // 0x0280   (0x0004)  
	float                                              BaseSizeX;                                                  // 0x0284   (0x0004)  
	float                                              FlickerIntensity;                                           // 0x0288   (0x0004)  
	float                                              FlickerTime;                                                // 0x028C   (0x0004)  
	float                                              Luminosity;                                                 // 0x0290   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0294   (0x0004)  MISSED
	TArray<class AActor*>                              Actors_for_ignore_lens_flare_;                              // 0x0298   (0x0010)  
	float                                              HaloBrightness;                                             // 0x02A8   (0x0004)  
	float                                              HaloContrast;                                               // 0x02AC   (0x0004)  
	float                                              HaloOpacity;                                                // 0x02B0   (0x0004)  
	float                                              HaloInnerRadius;                                            // 0x02B4   (0x0004)  
	FLinearColor                                       HaloOuterColor;                                             // 0x02B8   (0x0010)  
	FLinearColor                                       HaloInnerColor;                                             // 0x02C8   (0x0010)  
	class UTexture*                                    HaloTexture;                                                // 0x02D8   (0x0008)  
	float                                              CentreFlareBrightness;                                      // 0x02E0   (0x0004)  
	float                                              CentreFlareContrast;                                        // 0x02E4   (0x0004)  
	FLinearColor                                       CentreFlareColor;                                           // 0x02E8   (0x0010)  
	class UTexture*                                    CentreFlareTexture;                                         // 0x02F8   (0x0008)  
	float                                              MainFlareBrightness;                                        // 0x0300   (0x0004)  
	float                                              MainFlareContrast;                                          // 0x0304   (0x0004)  
	float                                              MainFlareInnerRadius;                                       // 0x0308   (0x0004)  
	float                                              MainFlareSize;                                              // 0x030C   (0x0004)  
	FLinearColor                                       MainLensInnerColor;                                         // 0x0310   (0x0010)  
	FLinearColor                                       MainOuterColor;                                             // 0x0320   (0x0010)  
	class UTexture*                                    MainFlare;                                                  // 0x0330   (0x0008)  
	float                                              HaloTextureSize;                                            // 0x0338   (0x0004)  
	float                                              CentreFlareSize;                                            // 0x033C   (0x0004)  
	float                                              ReflectionBrightness;                                       // 0x0340   (0x0004)  
	float                                              ReflectionContrast;                                         // 0x0344   (0x0004)  
	FLinearColor                                       ReflectionColor;                                            // 0x0348   (0x0010)  
	class UTexture*                                    ReflectionCentreTexture;                                    // 0x0358   (0x0008)  
	float                                              ReflectionSize;                                             // 0x0360   (0x0004)  
	float                                              FlareOpposite1_Brightness;                                  // 0x0364   (0x0004)  
	float                                              FlareOpposite1_Contrast;                                    // 0x0368   (0x0004)  
	float                                              FlareOppositeSize01;                                        // 0x036C   (0x0004)  
	FLinearColor                                       FlareOppositeColor01;                                       // 0x0370   (0x0010)  
	class UTexture*                                    FlareOpposite01;                                            // 0x0380   (0x0008)  
	float                                              FlareOpposite2_Brightness;                                  // 0x0388   (0x0004)  
	float                                              FlareOpposite2_Contrast;                                    // 0x038C   (0x0004)  
	float                                              FlareOppositeSize02;                                        // 0x0390   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0394   (0x0004)  MISSED
	class UTexture*                                    FlareOpposite02;                                            // 0x0398   (0x0008)  
	FLinearColor                                       FlareOppositeColor02;                                       // 0x03A0   (0x0010)  
	float                                              OppositeFlaresAxisProjection;                               // 0x03B0   (0x0004)  
	float                                              FlareFrontBrightness01;                                     // 0x03B4   (0x0004)  
	float                                              FlareFrontContrast01;                                       // 0x03B8   (0x0004)  
	float                                              FlareFrontSize01;                                           // 0x03BC   (0x0004)  
	float                                              FlareFrontProximityCentre01;                                // 0x03C0   (0x0004)  
	FLinearColor                                       FlareFrontColor01;                                          // 0x03C4   (0x0010)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x03D4   (0x0004)  MISSED
	class UTexture*                                    FlareFront01;                                               // 0x03D8   (0x0008)  
	float                                              FlareFrontBrightness02;                                     // 0x03E0   (0x0004)  
	float                                              FlareFrontContrast02;                                       // 0x03E4   (0x0004)  
	float                                              FlareFrontSize02;                                           // 0x03E8   (0x0004)  
	float                                              FlareFrontProximityCentre02;                                // 0x03EC   (0x0004)  
	FLinearColor                                       FlareFrontColor02;                                          // 0x03F0   (0x0010)  
	class UTexture*                                    FlareFront02;                                               // 0x0400   (0x0008)  
	float                                              FrontFlaresAxisProjection;                                  // 0x0408   (0x0004)  
	float                                              ReflectedFlareBrightness01;                                 // 0x040C   (0x0004)  
	float                                              ReflectedFlareContrast01;                                   // 0x0410   (0x0004)  
	float                                              ReflectedFlareSize01;                                       // 0x0414   (0x0004)  
	float                                              ReflectedFlareProximityCentre01;                            // 0x0418   (0x0004)  
	FLinearColor                                       ReflectedFlareColor01;                                      // 0x041C   (0x0010)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x042C   (0x0004)  MISSED
	class UTexture*                                    ReflectedFlare01;                                           // 0x0430   (0x0008)  
	float                                              ReflectedFlareBrightness02;                                 // 0x0438   (0x0004)  
	float                                              ReflectedFlareContrast02;                                   // 0x043C   (0x0004)  
	float                                              ReflectedFlareSize02;                                       // 0x0440   (0x0004)  
	float                                              ReflectedFlareProximityCentre02;                            // 0x0444   (0x0004)  
	FLinearColor                                       ReflectedFlareColor02;                                      // 0x0448   (0x0010)  
	class UTexture*                                    ReflectedFlare02;                                           // 0x0458   (0x0008)  
	float                                              GlobalMinorFlareBrightness01;                               // 0x0460   (0x0004)  
	float                                              GlobalMinorFlareContrast01;                                 // 0x0464   (0x0004)  
	float                                              GlobalMinorFlareSize01;                                     // 0x0468   (0x0004)  
	float                                              MinorFlareSizeRandom01;                                     // 0x046C   (0x0004)  
	float                                              MinorFlareProximityCentre01;                                // 0x0470   (0x0004)  
	FLinearColor                                       GlobalMinorFlareColor01;                                    // 0x0474   (0x0010)  
	float                                              GlobalMinorFlareBrightness02;                               // 0x0484   (0x0004)  
	float                                              GlobalMinorFlareContrast02;                                 // 0x0488   (0x0004)  
	float                                              GlobalMinorFlareSize02;                                     // 0x048C   (0x0004)  
	float                                              MinorFlareSizeRandom02;                                     // 0x0490   (0x0004)  
	float                                              MinorFlareProximityCentre02;                                // 0x0494   (0x0004)  
	FLinearColor                                       GlobalMinorFlareColor02;                                    // 0x0498   (0x0010)  
	class UTexture*                                    MinorFlare01;                                               // 0x04A8   (0x0008)  
	float                                              Minor1_Contrast;                                            // 0x04B0   (0x0004)  
	float                                              Minor1_Brightness;                                          // 0x04B4   (0x0004)  
	class UTexture*                                    MinorFlare02;                                               // 0x04B8   (0x0008)  
	float                                              AdditionalFlareBrightness;                                  // 0x04C0   (0x0004)  
	float                                              AdditionalFlareContrast;                                    // 0x04C4   (0x0004)  
	float                                              AdditionalFlareSize;                                        // 0x04C8   (0x0004)  
	FLinearColor                                       AdditionalFlareColor;                                       // 0x04CC   (0x0010)  
	unsigned char                                      UnknownData07_6[0x4];                                       // 0x04DC   (0x0004)  MISSED
	class UTexture*                                    AdditionalFlare;                                            // 0x04E0   (0x0008)  
	float                                              IrisBRightness;                                             // 0x04E8   (0x0004)  
	float                                              IrisContrast;                                               // 0x04EC   (0x0004)  
	float                                              IrisSize;                                                   // 0x04F0   (0x0004)  
	float                                              IrisProximityCentre;                                        // 0x04F4   (0x0004)  
	FLinearColor                                       IrisColor;                                                  // 0x04F8   (0x0010)  
	class UTexture*                                    Iris;                                                       // 0x0508   (0x0008)  
	float                                              Minor2_Contrast;                                            // 0x0510   (0x0004)  
	float                                              Minor2_Brightness;                                          // 0x0514   (0x0004)  
	class UTexture*                                    MinorFlare03;                                               // 0x0518   (0x0008)  
	float                                              Minor3_Contrast;                                            // 0x0520   (0x0004)  
	float                                              Minor3_Brightness;                                          // 0x0524   (0x0004)  
	class UTexture*                                    MinorFlare04;                                               // 0x0528   (0x0008)  
	float                                              Minor4_Contrast;                                            // 0x0530   (0x0004)  
	float                                              Minor4_Brightness;                                          // 0x0534   (0x0004)  
	class UTexture*                                    MinorFlare05;                                               // 0x0538   (0x0008)  
	float                                              Minor5_Contrast;                                            // 0x0540   (0x0004)  
	float                                              Minor5_Brightness;                                          // 0x0544   (0x0004)  
	class UTexture*                                    MinorFlare06;                                               // 0x0548   (0x0008)  
	float                                              Minor6_Contrast;                                            // 0x0550   (0x0004)  
	float                                              Minor6_Brightness;                                          // 0x0554   (0x0004)  
	class UTexture*                                    MinorFlare07;                                               // 0x0558   (0x0008)  
	float                                              Minor7_Contrast;                                            // 0x0560   (0x0004)  
	float                                              Minor7_Brightness;                                          // 0x0564   (0x0004)  
	class UTexture*                                    MinorFlare08;                                               // 0x0568   (0x0008)  
	float                                              Minor8_Contrast;                                            // 0x0570   (0x0004)  
	float                                              Minor8_Brightness;                                          // 0x0574   (0x0004)  


	/// Functions
	// Function /Game/Custom_Lens_Flare_VFX/Blueprints/LensFlare_BP.LensFlare_BP_C.InitFlare
	// void InitFlare();                                                                                                        // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Custom_Lens_Flare_VFX/Blueprints/LensFlare_BP.LensFlare_BP_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x148e900] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Custom_Lens_Flare_VFX/Blueprints/LensFlare_BP.LensFlare_BP_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/Custom_Lens_Flare_VFX/Blueprints/LensFlare_BP.LensFlare_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/Custom_Lens_Flare_VFX/Blueprints/LensFlare_BP.LensFlare_BP_C.ExecuteUbergraph_LensFlare_BP
	// void ExecuteUbergraph_LensFlare_BP(int32_t EntryPoint);                                                                  // [0x148e900] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(ALensFlare_BP_C) == 0x0578); // 1400 bytes (0x000220 - 0x000578)
static_assert(offsetof(ALensFlare_BP_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ALensFlare_BP_C, LensFlare) == 0x0228);
static_assert(offsetof(ALensFlare_BP_C, Scene) == 0x0230);
static_assert(offsetof(ALensFlare_BP_C, FlareDynamicMI) == 0x0240);
static_assert(offsetof(ALensFlare_BP_C, FlareMat) == 0x0248);
static_assert(offsetof(ALensFlare_BP_C, GlobalColor) == 0x0268);
static_assert(offsetof(ALensFlare_BP_C, Actors_for_ignore_lens_flare_) == 0x0298);
static_assert(offsetof(ALensFlare_BP_C, HaloOuterColor) == 0x02B8);
static_assert(offsetof(ALensFlare_BP_C, HaloInnerColor) == 0x02C8);
static_assert(offsetof(ALensFlare_BP_C, HaloTexture) == 0x02D8);
static_assert(offsetof(ALensFlare_BP_C, CentreFlareColor) == 0x02E8);
static_assert(offsetof(ALensFlare_BP_C, CentreFlareTexture) == 0x02F8);
static_assert(offsetof(ALensFlare_BP_C, MainLensInnerColor) == 0x0310);
static_assert(offsetof(ALensFlare_BP_C, MainOuterColor) == 0x0320);
static_assert(offsetof(ALensFlare_BP_C, MainFlare) == 0x0330);
static_assert(offsetof(ALensFlare_BP_C, ReflectionColor) == 0x0348);
static_assert(offsetof(ALensFlare_BP_C, ReflectionCentreTexture) == 0x0358);
static_assert(offsetof(ALensFlare_BP_C, FlareOppositeColor01) == 0x0370);
static_assert(offsetof(ALensFlare_BP_C, FlareOpposite01) == 0x0380);
static_assert(offsetof(ALensFlare_BP_C, FlareOpposite02) == 0x0398);
static_assert(offsetof(ALensFlare_BP_C, FlareOppositeColor02) == 0x03A0);
static_assert(offsetof(ALensFlare_BP_C, FlareFrontColor01) == 0x03C4);
static_assert(offsetof(ALensFlare_BP_C, FlareFront01) == 0x03D8);
static_assert(offsetof(ALensFlare_BP_C, FlareFrontColor02) == 0x03F0);
static_assert(offsetof(ALensFlare_BP_C, FlareFront02) == 0x0400);
static_assert(offsetof(ALensFlare_BP_C, ReflectedFlareColor01) == 0x041C);
static_assert(offsetof(ALensFlare_BP_C, ReflectedFlare01) == 0x0430);
static_assert(offsetof(ALensFlare_BP_C, ReflectedFlareColor02) == 0x0448);
static_assert(offsetof(ALensFlare_BP_C, ReflectedFlare02) == 0x0458);
static_assert(offsetof(ALensFlare_BP_C, GlobalMinorFlareColor01) == 0x0474);
static_assert(offsetof(ALensFlare_BP_C, GlobalMinorFlareColor02) == 0x0498);
static_assert(offsetof(ALensFlare_BP_C, MinorFlare01) == 0x04A8);
static_assert(offsetof(ALensFlare_BP_C, MinorFlare02) == 0x04B8);
static_assert(offsetof(ALensFlare_BP_C, AdditionalFlareColor) == 0x04CC);
static_assert(offsetof(ALensFlare_BP_C, AdditionalFlare) == 0x04E0);
static_assert(offsetof(ALensFlare_BP_C, IrisColor) == 0x04F8);
static_assert(offsetof(ALensFlare_BP_C, Iris) == 0x0508);
static_assert(offsetof(ALensFlare_BP_C, MinorFlare03) == 0x0518);
static_assert(offsetof(ALensFlare_BP_C, MinorFlare04) == 0x0528);
static_assert(offsetof(ALensFlare_BP_C, MinorFlare05) == 0x0538);
static_assert(offsetof(ALensFlare_BP_C, MinorFlare06) == 0x0548);
static_assert(offsetof(ALensFlare_BP_C, MinorFlare07) == 0x0558);
static_assert(offsetof(ALensFlare_BP_C, MinorFlare08) == 0x0568);
