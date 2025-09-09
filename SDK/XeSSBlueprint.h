
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

/// Enum /Script/XeSSBlueprint.EXeSSQualityMode
/// Size: 0x01 (1 bytes)
enum class EXeSSQualityMode : uint8_t
{
	EXeSSQualityMode__Off                                                            = 0,
	EXeSSQualityMode__Performance                                                    = 1,
	EXeSSQualityMode__Balanced                                                       = 2,
	EXeSSQualityMode__Quality                                                        = 3,
	EXeSSQualityMode__UltraQuality                                                   = 4
};

/// Class /Script/XeSSBlueprint.XeSSBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UXeSSBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/XeSSBlueprint.XeSSBlueprintLibrary.SetXeSSQualityMode
	// void SetXeSSQualityMode(EXeSSQualityMode QualityMode);                                                                   // [0xc1fc40] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/XeSSBlueprint.XeSSBlueprintLibrary.IsXeSSSupported
	// bool IsXeSSSupported();                                                                                                  // [0xc1fc10] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityModeInformation
	// bool GetXeSSQualityModeInformation(EXeSSQualityMode QualityMode, float& ScreenPercentage);                               // [0xc1fb30] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityMode
	// EXeSSQualityMode GetXeSSQualityMode();                                                                                   // [0xc1fb00] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/XeSSBlueprint.XeSSBlueprintLibrary.GetSupportedXeSSQualityModes
	// TArray<EXeSSQualityMode> GetSupportedXeSSQualityModes();                                                                 // [0xc1fa80] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/XeSSBlueprint.XeSSBlueprintLibrary.GetDefaultXeSSQualityMode
	// EXeSSQualityMode GetDefaultXeSSQualityMode(FIntPoint ScreenResolution);                                                  // [0xc1fa00] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

#pragma pack(pop)


static_assert(sizeof(UXeSSBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
