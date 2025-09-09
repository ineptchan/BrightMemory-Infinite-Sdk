
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

/// Class /Script/MagicLeapSecureStorage.MagicLeapSecureStorage
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMagicLeapSecureStorage : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureVector
	// bool PutSecureVector(FString Key, FVector& DataToStore);                                                                 // [0xf50420] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureTransform
	// bool PutSecureTransform(FString Key, FTransform& DataToStore);                                                           // [0xf50700] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureString
	// bool PutSecureString(FString Key, FString DataToStore);                                                                  // [0xf50e80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureSaveGame
	// bool PutSecureSaveGame(FString Key, class USaveGame* ObjectToStore);                                                     // [0xf50da0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureRotator
	// bool PutSecureRotator(FString Key, FRotator& DataToStore);                                                               // [0xf50420] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt64
	// bool PutSecureInt64(FString Key, int64_t DataToStore);                                                                   // [0xf50be0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt
	// bool PutSecureInt(FString Key, int32_t DataToStore);                                                                     // [0xf50cc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureFloat
	// bool PutSecureFloat(FString Key, float DataToStore);                                                                     // [0xf50b00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureByte
	// bool PutSecureByte(FString Key, char DataToStore);                                                                       // [0xf50a20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureBool
	// bool PutSecureBool(FString Key, bool DataToStore);                                                                       // [0xf50940] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureArray
	// bool PutSecureArray(FString Key, TArray<int32_t>& DataToStore);                                                          // [0xf50830] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureVector
	// bool GetSecureVector(FString Key, FVector& DataToRetrieve);                                                              // [0xf50420] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureTransform
	// bool GetSecureTransform(FString Key, FTransform& DataToRetrieve);                                                        // [0xf50700] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureString
	// bool GetSecureString(FString Key, FString& DataToRetrieve);                                                              // [0xf50600] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureSaveGame
	// bool GetSecureSaveGame(FString Key, class USaveGame*& ObjectToRetrieve);                                                 // [0xf50510] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureRotator
	// bool GetSecureRotator(FString Key, FRotator& DataToRetrieve);                                                            // [0xf50420] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt64
	// bool GetSecureInt64(FString Key, int64_t& DataToRetrieve);                                                               // [0xf50330] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt
	// bool GetSecureInt(FString Key, int32_t& DataToRetrieve);                                                                 // [0xf50240] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureFloat
	// bool GetSecureFloat(FString Key, float& DataToRetrieve);                                                                 // [0xf50240] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureByte
	// bool GetSecureByte(FString Key, char& DataToRetrieve);                                                                   // [0xf50150] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureBool
	// bool GetSecureBool(FString Key, bool& DataToRetrieve);                                                                   // [0xf50150] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureArray
	// bool GetSecureArray(FString Key, TArray<int32_t>& DataToRetrieve);                                                       // [0xf50040] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapSecureStorage.MagicLeapSecureStorage.DeleteSecureData
	// bool DeleteSecureData(FString Key);                                                                                      // [0xf4ffa0] Final|Native|Static|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UMagicLeapSecureStorage) == 0x0028); // 40 bytes (0x000028 - 0x000028)
