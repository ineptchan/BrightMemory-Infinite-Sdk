
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

/// Class /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBlueprintFileUtilsBPLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary.MoveFile
	// bool MoveFile(FString DestFilename, FString SrcFilename, bool bReplace, bool bEvenIfReadOnly);                           // [0xd67a50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary.MakeDirectory
	// bool MakeDirectory(FString Path, bool bCreateTree);                                                                      // [0xd67970] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary.GetUserDirectory
	// FString GetUserDirectory();                                                                                              // [0xd678f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary.FindRecursive
	// bool FindRecursive(FString StartDirectory, TArray<FString>& FoundPaths, FString Wildcard, bool bFindFiles, bool bFindDirectories); // [0xd676f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary.FindFiles
	// bool FindFiles(FString Directory, TArray<FString>& FoundFiles, FString FileExtension);                                   // [0xd67560] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary.FileExists
	// bool FileExists(FString Filename);                                                                                       // [0xd674c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary.DirectoryExists
	// bool DirectoryExists(FString Directory);                                                                                 // [0xd67420] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary.DeleteFile
	// bool DeleteFile(FString Filename, bool bMustExist, bool bEvenIfReadOnly);                                                // [0xd672f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary.DeleteDirectory
	// bool DeleteDirectory(FString Directory, bool bMustExist, bool bDeleteRecursively);                                       // [0xd671c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/BlueprintFileUtils.BlueprintFileUtilsBPLibrary.CopyFile
	// bool CopyFile(FString DestFilename, FString SrcFilename, bool bReplace, bool bEvenIfReadOnly);                           // [0xd67040] Final|Native|Static|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UBlueprintFileUtilsBPLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
