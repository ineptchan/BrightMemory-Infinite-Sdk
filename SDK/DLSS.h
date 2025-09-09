
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/DLSS.EDLSSSettingOverride
/// Size: 0x01 (1 bytes)
enum class EDLSSSettingOverride : uint8_t
{
	EDLSSSettingOverride__Enabled                                                    = 0,
	EDLSSSettingOverride__Disabled                                                   = 1,
	EDLSSSettingOverride__UseProjectSettings                                         = 2
};

/// Class /Script/DLSS.DLSSOverrideSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UDLSSOverrideSettings : public UObject
{ 
public:
	EDLSSSettingOverride                               EnableDLSSInEditorViewportsOverride;                        // 0x0028   (0x0001)  
	EDLSSSettingOverride                               EnableScreenpercentageManipulationInDLSSEditorViewportsOverride; // 0x0029   (0x0001)  
	EDLSSSettingOverride                               EnableDLSSInPlayInEditorViewportsOverride;                  // 0x002A   (0x0001)  
	bool                                               bShowDLSSIncompatiblePluginsToolsWarnings;                  // 0x002B   (0x0001)  
	EDLSSSettingOverride                               ShowDLSSSDebugOnScreenMessages;                             // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Class /Script/DLSS.DLSSSettings
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UDLSSSettings : public UObject
{ 
public:
	bool                                               bEnableDLSSD3D12;                                           // 0x0028   (0x0001)  
	bool                                               bEnableDLSSD3D11;                                           // 0x0029   (0x0001)  
	bool                                               bEnableDLSSVulkan;                                          // 0x002A   (0x0001)  
	bool                                               bEnableDLSSInEditorViewports;                               // 0x002B   (0x0001)  
	bool                                               bEnableScreenpercentageManipulationInDLSSEditorViewports;   // 0x002C   (0x0001)  
	bool                                               bEnableDLSSInPlayInEditorViewports;                         // 0x002D   (0x0001)  
	bool                                               bShowDLSSSDebugOnScreenMessages;                            // 0x002E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x002F   (0x0001)  MISSED
	FString                                            GenericDLSSBinaryPath;                                      // 0x0030   (0x0010)  
	bool                                               bGenericDLSSBinaryExists;                                   // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	uint32_t                                           NVIDIANGXApplicationId;                                     // 0x0044   (0x0004)  
	FString                                            CustomDLSSBinaryPath;                                       // 0x0048   (0x0010)  
	bool                                               bCustomDLSSBinaryExists;                                    // 0x0058   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0059   (0x0007)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UDLSSOverrideSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UDLSSSettings) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(offsetof(UDLSSOverrideSettings, EnableDLSSInEditorViewportsOverride) == 0x0028);
static_assert(offsetof(UDLSSOverrideSettings, EnableScreenpercentageManipulationInDLSSEditorViewportsOverride) == 0x0029);
static_assert(offsetof(UDLSSOverrideSettings, EnableDLSSInPlayInEditorViewportsOverride) == 0x002A);
static_assert(offsetof(UDLSSOverrideSettings, ShowDLSSSDebugOnScreenMessages) == 0x002C);
static_assert(offsetof(UDLSSSettings, GenericDLSSBinaryPath) == 0x0030);
static_assert(offsetof(UDLSSSettings, CustomDLSSBinaryPath) == 0x0048);
