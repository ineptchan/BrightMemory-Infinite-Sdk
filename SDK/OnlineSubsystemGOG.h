
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

/// Class /Script/OnlineSubsystemGOG.GOGLoginCallbackProxy
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UGOGLoginCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,983) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,984) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x58];                                      // 0x0050   (0x0058)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemGOG.GOGLoginCallbackProxy.Login
	// class UGOGLoginCallbackProxy* Login(class UObject* WorldContextObject, class APlayerController* PlayerController, FString AuthType, FString UserId, FString UserToken); // [0xbbba60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemGOG.NetConnectionGOG
/// Size: 0x1B18 (6936 bytes) (0x001AF0 - 0x001B18) align 8 MaxSize: 0x1B18
class UNetConnectionGOG : public UNetConnection
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x1AF0   (0x0028)  MISSED
};

/// Class /Script/OnlineSubsystemGOG.NetDriverGOG
/// Size: 0x1760 (5984 bytes) (0x000748 - 0x001760) align 8 MaxSize: 0x1760
class UNetDriverGOG : public UNetDriver
{ 
public:
	unsigned char                                      UnknownData00_1[0x1018];                                    // 0x0748   (0x1018)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UGOGLoginCallbackProxy) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UNetConnectionGOG) == 0x1B18); // 6936 bytes (0x001AF0 - 0x001B18)
static_assert(sizeof(UNetDriverGOG) == 0x1760); // 5984 bytes (0x000748 - 0x001760)
