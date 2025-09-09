
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

/// Enum /Script/ImageCache.EFileTypeDesc
/// Size: 0x01 (1 bytes)
enum class EFileTypeDesc : uint8_t
{
	EFileTypeDesc__None                                                              = 0,
	EFileTypeDesc__ImageFile                                                         = 1,
	EFileTypeDesc__BinaryData                                                        = 2
};

/// Class /Script/ImageCache.AsyncTaskFetchImage
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UAsyncTaskFetchImage : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,895) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,896) /* FMulticastInlineDelegate */ __um(OnFail);                                             // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/ImageCache.AsyncTaskFetchImage.FetchImage
	// class UAsyncTaskFetchImage* FetchImage(FString URL);                                                                     // [0xd66010] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/ImageCache.AsyncTaskQueueFetchImages
/// Size: 0x00C0 (192 bytes) (0x000030 - 0x0000C0) align 8 MaxSize: 0x00C0
class UAsyncTaskQueueFetchImages : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,897) /* FMulticastInlineDelegate */ __um(OnOneFinished);                                      // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,898) /* FMulticastInlineDelegate */ __um(OnAllFinished);                                      // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0050   (0x0040)  MISSED
	class UBlueprintAsyncActionBase*                   CurrentFetchTask;                                           // 0x0090   (0x0008)  
	unsigned char                                      UnknownData01_7[0x28];                                      // 0x0098   (0x0028)  MISSED


	/// Functions
	// Function /Script/ImageCache.AsyncTaskQueueFetchImages.QueueFetchImages
	// class UAsyncTaskQueueFetchImages* QueueFetchImages(TArray<FString>& Items);                                              // [0xd66640] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ImageCache.AsyncTaskQueueFetchImages.HandleFetchImageSucess
	// void HandleFetchImageSucess(FString URL, class UTexture2DDynamic* Texture);                                              // [0xd66560] Final|Native|Private 
	// Function /Script/ImageCache.AsyncTaskQueueFetchImages.HandleFetchImagePackageSucess
	// void HandleFetchImagePackageSucess(FString URL, TArray<UTexture2DDynamic*>& Textures);                                   // [0xd66460] Final|Native|Private|HasOutParms 
	// Function /Script/ImageCache.AsyncTaskQueueFetchImages.HandleFetchImagePackageFail
	// void HandleFetchImagePackageFail(FString URL, TArray<UTexture2DDynamic*>& Textures);                                     // [0xd66360] Final|Native|Private|HasOutParms 
	// Function /Script/ImageCache.AsyncTaskQueueFetchImages.HandleFetchImageFail
	// void HandleFetchImageFail(FString URL, class UTexture2DDynamic* Texture);                                                // [0xd66280] Final|Native|Private 
};

/// Class /Script/ImageCache.ImageCache
/// Size: 0x00A0 (160 bytes) (0x000028 - 0x0000A0) align 8 MaxSize: 0x00A0
class UImageCache : public UObject
{ 
public:
	TMap<FString, class UCacheItem*>                   CacheMap;                                                   // 0x0028   (0x0050)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0078   (0x0028)  MISSED
};

/// Class /Script/ImageCache.CacheItem
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UCacheItem : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0028   (0x0038)  MISSED
};

/// Class /Script/ImageCache.CacheBinaryItem
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UCacheBinaryItem : public UCacheItem
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0060   (0x0010)  MISSED
};

/// Class /Script/ImageCache.CacheImageItem
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align 8 MaxSize: 0x0078
class UCacheImageItem : public UCacheBinaryItem
{ 
public:
	class UTexture2DDynamic*                           Texture;                                                    // 0x0070   (0x0008)  
};

/// Class /Script/ImageCache.ImageCacheLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UImageCacheLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ImageCache.ImageCacheLibrary.SetImageCacheMaxSizeGB
	// void SetImageCacheMaxSizeGB(float SizeGB);                                                                               // [0xd66790] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ImageCache.ImageCacheLibrary.SetImageCacheExpireTime
	// void SetImageCacheExpireTime(int32_t ExpireTime);                                                                        // [0xd66710] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ImageCache.ImageCacheLibrary.GetImageCacheMaxSizeGB
	// float GetImageCacheMaxSizeGB();                                                                                          // [0xd66250] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ImageCache.ImageCacheLibrary.GetImageCacheExpireTime
	// int32_t GetImageCacheExpireTime();                                                                                       // [0xd66220] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ImageCache.ImageCacheLibrary.GetImageCacheDirectory
	// FString GetImageCacheDirectory();                                                                                        // [0xd661a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ImageCache.ImageCacheLibrary.GetCachedImage
	// class UTexture2DDynamic* GetCachedImage(FString URL);                                                                    // [0xd66100] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ImageCache.ImageCacheLibrary.ClearAllImageCache
	// void ClearAllImageCache();                                                                                               // [0xd65ff0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ImageCache.ImageCacheLibrary.CacheImages
	// void CacheImages(TArray<FString>& URLs);                                                                                 // [0xd65f30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ImageCache.ImageCacheLibrary.CacheImage
	// void CacheImage(FString URL);                                                                                            // [0xd65e50] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/ImageCache.ImageCacheSettings
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UImageCacheSettings : public UObject
{ 
public:
	float                                              ImageCacheSizeGB;                                           // 0x0028   (0x0004)  
	int32_t                                            ImageCacheExpireTime;                                       // 0x002C   (0x0004)  
	FString                                            CacheFileDirectory;                                         // 0x0030   (0x0010)  
};

/// Struct /Script/ImageCache.FetchImageItem
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FFetchImageItem
{ 
	FString                                            URL;                                                        // 0x0000   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UAsyncTaskFetchImage) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UAsyncTaskQueueFetchImages) == 0x00C0); // 192 bytes (0x000030 - 0x0000C0)
static_assert(sizeof(UImageCache) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(UCacheItem) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UCacheBinaryItem) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UCacheImageItem) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UImageCacheLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UImageCacheSettings) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(FFetchImageItem) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(UAsyncTaskQueueFetchImages, CurrentFetchTask) == 0x0090);
static_assert(offsetof(UImageCache, CacheMap) == 0x0028);
static_assert(offsetof(UCacheImageItem, Texture) == 0x0070);
static_assert(offsetof(UImageCacheSettings, CacheFileDirectory) == 0x0030);
static_assert(offsetof(FFetchImageItem, URL) == 0x0000);
