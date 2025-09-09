
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

/// Class /Script/PakLoader.AsyncPakDownloader
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UAsyncPakDownloader : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,985) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,986) /* FMulticastInlineDelegate */ __um(OnFail);                                             // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,987) /* FMulticastInlineDelegate */ __um(OnProgress);                                         // 0x0050   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0060   (0x0010)  MISSED


	/// Functions
	// Function /Script/PakLoader.AsyncPakDownloader.DownloadPak
	// class UAsyncPakDownloader* DownloadPak(FString URL, FString SavePath);                                                   // [0x8edf60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PakLoader.PakLoaderLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPakLoaderLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PakLoader.PakLoaderLibrary.UnRegisterMountPoint
	// void UnRegisterMountPoint(FString RootPath, FString ContentPath);                                                        // [0x8ef390] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PakLoader.PakLoaderLibrary.UnmountPakFile
	// bool UnmountPakFile(FString PakFilename);                                                                                // [0x8ef480] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PakLoader.PakLoaderLibrary.TryConvertFilenameToLongPackageName
	// bool TryConvertFilenameToLongPackageName(FString Filename, FString& PackageName);                                        // [0x8ef290] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.SHA1SUM
	// FString SHA1SUM(FString Filename);                                                                                       // [0x8ef1b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.RuntimeLog
	// void RuntimeLog(FString Text);                                                                                           // [0x8ef120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PakLoader.PakLoaderLibrary.RegisterMountPoint
	// void RegisterMountPoint(FString RootPath, FString ContentPath);                                                          // [0x8ef030] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PakLoader.PakLoaderLibrary.RegisterEncryptionKey
	// bool RegisterEncryptionKey(FString Guid, FString AesKey);                                                                // [0x8eef40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PakLoader.PakLoaderLibrary.ProjectPersistentDownloadDir
	// FString ProjectPersistentDownloadDir();                                                                                  // [0x8eeec0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.MountPakFile
	// bool MountPakFile(FString PakFilename, FString MountPath);                                                               // [0x8eedd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PakLoader.PakLoaderLibrary.LoadPakAssetRegistryFile
	// void LoadPakAssetRegistryFile(FString AssetRegistryFile);                                                                // [0x8eed40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PakLoader.PakLoaderLibrary.IsValidPakFile
	// bool IsValidPakFile(FString PakFilename, int64_t& PakSize);                                                              // [0x8eec50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PakLoader.PakLoaderLibrary.IsPackagedBuild
	// bool IsPackagedBuild();                                                                                                  // [0x8eec20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.GetShortName
	// FString GetShortName(FString LongName);                                                                                  // [0x8eeb40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.GetProjectName
	// FString GetProjectName();                                                                                                // [0x8eeac0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.GetPakFileTexture2D
	// class UTexture2D* GetPakFileTexture2D(FString Filename);                                                                 // [0x8eea20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.GetPakFileText
	// bool GetPakFileText(FString Filename, FString& String);                                                                  // [0x8ee920] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.GetPakFileStaticMesh
	// class UStaticMesh* GetPakFileStaticMesh(FString Filename);                                                               // [0x8ee880] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.GetPakFileSound
	// class USoundBase* GetPakFileSound(FString Filename);                                                                     // [0x8ee7e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.GetPakFileSkeletalMesh
	// class USkeletalMesh* GetPakFileSkeletalMesh(FString Filename);                                                           // [0x8ee740] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.GetPakFileObject
	// class UObject* GetPakFileObject(FString Filename);                                                                       // [0x8ee6a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.GetPakFileMaterialInstanceConstant
	// class UMaterialInstanceConstant* GetPakFileMaterialInstanceConstant(FString Filename);                                   // [0x8ee600] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.GetPakFileMaterial
	// class UMaterial* GetPakFileMaterial(FString Filename);                                                                   // [0x8ee560] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.GetPakFileClass
	// class UClass* GetPakFileClass(FString Filename);                                                                         // [0x8ee4c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.GetPakFileAnimSequence
	// class UAnimSequence* GetPakFileAnimSequence(FString Filename);                                                           // [0x8ee420] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.GetMountedPakFilenames
	// TArray<FString> GetMountedPakFilenames();                                                                                // [0x8ee3a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.GetFilesInPakDirectory
	// TArray<FString> GetFilesInPakDirectory(FString PakDirectory, bool bRecursively);                                         // [0x8ee270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PakLoader.PakLoaderLibrary.GetFilesInPak
	// TArray<FString> GetFilesInPak(FString PakFilename, bool bUAssetOnly);                                                    // [0x8ee140] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PakLoader.PakLoaderLibrary.EnableRuntimeLog
	// void EnableRuntimeLog(bool bEnable, FString NewLogPath);                                                                 // [0x8ee060] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PakLoader.PakLoaderLibrary.DoesPakDirectoryExist
	// bool DoesPakDirectoryExist(FString PakDirectory);                                                                        // [0x8edec0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

#pragma pack(pop)


static_assert(sizeof(UAsyncPakDownloader) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(UPakLoaderLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
