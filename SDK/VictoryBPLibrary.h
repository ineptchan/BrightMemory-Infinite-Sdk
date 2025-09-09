
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: ApexDestruction
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InputCore
/// dependency: Slate
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/VictoryBPLibrary.ESpeedUnit
/// Size: 0x01 (1 bytes)
enum class ESpeedUnit : uint8_t
{
	CentimeterPerSecond                                                              = 0,
	FootPerSecond                                                                    = 1,
	MeterPerSecond                                                                   = 2,
	MeterPerMinute                                                                   = 3,
	KilometerPerSecond                                                               = 4,
	KilometerPerMinute                                                               = 5,
	KilometerPerHour                                                                 = 6,
	MilePerHour                                                                      = 7,
	Knot                                                                             = 8,
	Mach                                                                             = 9,
	SpeedOfLight                                                                     = 10,
	YardPerSecond                                                                    = 11
};

/// Enum /Script/VictoryBPLibrary.EJoyGraphicsFullScreen
/// Size: 0x01 (1 bytes)
enum class EJoyGraphicsFullScreen : uint8_t
{
	EJoyGraphicsFullScreen__FullScreen                                               = 0,
	EJoyGraphicsFullScreen__WindowedFullScreen                                       = 1,
	EJoyGraphicsFullScreen__WindowedFullScreenPerformance                            = 2,
	EJoyGraphicsFullScreen__EJoyGraphicsFullScreen_Max                               = 3
};

/// Enum /Script/VictoryBPLibrary.EVictoryHMDDevice
/// Size: 0x01 (1 bytes)
enum class EVictoryHMDDevice : uint8_t
{
	EVictoryHMDDevice__None                                                          = 0,
	EVictoryHMDDevice__OculusRift                                                    = 1,
	EVictoryHMDDevice__Morpheus                                                      = 2,
	EVictoryHMDDevice__ES2GenericStereoMesh                                          = 3,
	EVictoryHMDDevice__SteamVR                                                       = 4,
	EVictoryHMDDevice__GearVR                                                        = 5
};

/// Enum /Script/VictoryBPLibrary.EJoyImageFormats
/// Size: 0x01 (1 bytes)
enum class EJoyImageFormats : uint8_t
{
	EJoyImageFormats__JPG                                                            = 0,
	EJoyImageFormats__PNG                                                            = 1,
	EJoyImageFormats__BMP                                                            = 2,
	EJoyImageFormats__ICO                                                            = 3,
	EJoyImageFormats__EXR                                                            = 4,
	EJoyImageFormats__ICNS                                                           = 5
};

/// Class /Script/VictoryBPLibrary.TKMathFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTKMathFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.VectorRadiansToDegrees
	// FVector VectorRadiansToDegrees(FVector RadVector);                                                                       // [0xd96be0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.VectorDegreesToRadians
	// FVector VectorDegreesToRadians(FVector DegVector);                                                                       // [0xd96b40] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.SphereBoxIntersection
	// bool SphereBoxIntersection(FVector SphereOrigin, float SphereRadius, FVector BoxOrigin, FVector BoxExtent);              // [0xd949f0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.SignedDistancePlanePoint
	// float SignedDistancePlanePoint(FVector PlaneNormal, FVector planePoint, FVector Point);                                  // [0xd946c0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.SetVectorLength
	// FVector SetVectorLength(FVector A, float Size);                                                                          // [0xd945d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.SetCenterOfMassOffset
	// void SetCenterOfMassOffset(class UPrimitiveComponent* Target, FVector Offset, FName BoneName);                           // [0xd94340] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.RoundToUpperMultiple
	// int32_t RoundToUpperMultiple(int32_t A, int32_t Multiple, bool skipSelf);                                                // [0xd93aa0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.RoundToNearestMultiple
	// int32_t RoundToNearestMultiple(int32_t A, int32_t Multiple);                                                             // [0xd939d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.RoundToLowerMultiple
	// int32_t RoundToLowerMultiple(int32_t A, int32_t Multiple, bool skipSelf);                                                // [0xd938d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.ProjectPointOnLine
	// FVector ProjectPointOnLine(FVector LineOrigin, FVector LineDirection, FVector Point);                                    // [0xd928f0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.PointOnWhichSideOfLineSegment
	// int32_t PointOnWhichSideOfLineSegment(FVector LinePoint1, FVector LinePoint2, FVector Point);                            // [0xd927b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.NegateVector2D
	// FVector2D NegateVector2D(FVector2D A);                                                                                   // [0xd91150] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.NegateInt
	// int32_t NegateInt(int32_t A);                                                                                            // [0xd910c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.NegateFloat
	// float NegateFloat(float A);                                                                                              // [0xd91040] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.LineToLineIntersection
	// bool LineToLineIntersection(FVector& IntersectionPoint, FVector LinePoint1, FVector LineDir1, FVector LinePoint2, FVector LineDir2); // [0xd90020] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.LineExtentBoxIntersection
	// bool LineExtentBoxIntersection(FBox InBox, FVector Start, FVector End, FVector Extent, FVector& HitLocation, FVector& HitNormal, float& HitTime); // [0xd8fda0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.IsPowerOfTwo
	// bool IsPowerOfTwo(int32_t X);                                                                                            // [0xd8f1b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.IsPointInsideBox
	// bool IsPointInsideBox(FVector Point, FVector BoxOrigin, FVector BoxExtent);                                              // [0xd8ef20] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.IsMultipleOf
	// bool IsMultipleOf(int32_t A, int32_t Multiple);                                                                          // [0xd8ee50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.IsLineInsideSphere
	// bool IsLineInsideSphere(FVector LineStart, FVector LineDir, float LineLength, FVector SphereOrigin, float SphereRadius); // [0xd8ec80] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.IsEvenNumber
	// bool IsEvenNumber(float A);                                                                                              // [0xd8ec00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.GridSnap
	// FVector GridSnap(FVector A, float Grid);                                                                                 // [0xd8e6a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.GetVelocityAtPoint
	// FVector GetVelocityAtPoint(class UPrimitiveComponent* Target, FVector Point, FName BoneName, bool DrawDebugInfo);        // [0xd8e0a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.GetConsoleVariableInt
	// int32_t GetConsoleVariableInt(FString VariableName);                                                                     // [0xd8ce30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.GetConsoleVariableFloat
	// float GetConsoleVariableFloat(FString VariableName);                                                                     // [0xd8cd40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.ConvertPhysicsLinearVelocity
	// float ConvertPhysicsLinearVelocity(FVector Velocity, TEnumAsByte<ESpeedUnit> SpeedUnit);                                 // [0xd8a2b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.ConvertAnchorToAnchor
	// void ConvertAnchorToAnchor(class UObject* WorldContextObject, FAnchors CurrentAnchor, FMargin Offsets, FAnchors TargetAnchor, FMargin& ConvertedOffsets); // [0xd8a0e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointsOnTwoLines
	// bool ClosestPointsOnTwoLines(FVector& closestPointLine1, FVector& closestPointLine2, FVector LinePoint1, FVector lineVec1, FVector LinePoint2, FVector lineVec2); // [0xd895b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointsOfLineSegments
	// void ClosestPointsOfLineSegments(FVector Line1Start, FVector Line1End, FVector Line2Start, FVector Line2End, FVector& LinePoint1, FVector& LinePoint2); // [0xd89390] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointOnSphereToLine
	// FVector ClosestPointOnSphereToLine(FVector SphereOrigin, float SphereRadius, FVector LineOrigin, FVector LineDir);       // [0xd89200] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointOnLineSeqment
	// FVector ClosestPointOnLineSeqment(FVector Point, FVector LineStart, FVector LineEnd);                                    // [0xd890b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.TKMathFunctionLibrary.AreLineSegmentsCrossing
	// bool AreLineSegmentsCrossing(FVector pointA1, FVector pointA2, FVector pointB1, FVector pointB2);                        // [0xd88300] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/VictoryBPLibrary.VictoryBPFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UVictoryBPFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InPIEWorld
	// bool WorldType__InPIEWorld(class UObject* WorldContextObject);                                                           // [0xd9d550] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InGameInstanceWorld
	// bool WorldType__InGameInstanceWorld(class UObject* WorldContextObject);                                                  // [0xd9d4c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InEditorWorld
	// bool WorldType__InEditorWorld(class UObject* WorldContextObject);                                                        // [0xd9d430] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetIsChildOf
	// bool WidgetIsChildOf(class UWidget* ChildWidget, class UWidget* PossibleParent);                                         // [0xd9d360] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetGetParentOfClass
	// class UUserWidget* WidgetGetParentOfClass(class UWidget* ChildWidget, class UClass* WidgetClass);                        // [0xd9d290] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetGetChildrenOfClass
	// void WidgetGetChildrenOfClass(class UWidget* ParentWidget, TArray<UUserWidget*>& ChildWidgets, class UClass* WidgetClass, bool bImmediateOnly); // [0xd9d120] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Visibility__GetRenderedActors
	// void Visibility__GetRenderedActors(class UObject* WorldContextObject, TArray<AActor*>& CurrentlyRenderedActors, float MinRecentTime); // [0xd9cff0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Visibility__GetNotRenderedActors
	// void Visibility__GetNotRenderedActors(class UObject* WorldContextObject, TArray<AActor*>& CurrentlyNotRenderedActors, float MinRecentTime); // [0xd9cec0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.ViewportPositionDeproject
	// bool ViewportPositionDeproject(class UObject* WorldContextObject, FVector2D& ViewportPosition, FVector& OutWorldOrigin, FVector& OutWorldDirection); // [0xd9c920] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__SetMousePosition
	// bool Viewport__SetMousePosition(class APlayerController* ThePC, float& PosX, float& PosY);                               // [0xd9cda0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__GetMousePosition
	// bool Viewport__GetMousePosition(class APlayerController* ThePC, float& PosX, float& PosY);                               // [0xd9cc80] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__GetCenterOfViewport
	// bool Viewport__GetCenterOfViewport(class APlayerController* ThePC, float& PosX, float& PosY);                            // [0xd9cb60] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__EnableWorldRendering
	// bool Viewport__EnableWorldRendering(class APlayerController* ThePC, bool RenderTheWorld);                                // [0xd9ca90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySoundVolumeChange
	// bool VictorySoundVolumeChange(class USoundClass* SoundClassObject, float NewVolume);                                     // [0xd9b5a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySortIntArray
	// void VictorySortIntArray(TArray<int32_t>& IntArray, TArray<int32_t>& IntArrayRef);                                       // [0xd9b490] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySortFloatArray
	// void VictorySortFloatArray(TArray<float>& FloatArray, TArray<float>& FloatArrayRef);                                     // [0xd9b380] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySimulateMouseWheel
	// void VictorySimulateMouseWheel(float& Delta);                                                                            // [0xd9b2f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySimulateKeyPress
	// void VictorySimulateKeyPress(class APlayerController* ThePC, FKey Key, TEnumAsByte<EInputEvent> EventType);              // [0xd9b190] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Vector2D
	// void VictorySetCustomConfigVar_Vector2D(FString SectionName, FString VariableName, FVector2D Value);                     // [0xd9ae30] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Vector
	// void VictorySetCustomConfigVar_Vector(FString SectionName, FString VariableName, FVector Value);                         // [0xd9afd0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_String
	// void VictorySetCustomConfigVar_String(FString SectionName, FString VariableName, FString Value);                         // [0xd9ac40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Rotator
	// void VictorySetCustomConfigVar_Rotator(FString SectionName, FString VariableName, FRotator Value);                       // [0xd9aa80] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Int
	// void VictorySetCustomConfigVar_Int(FString SectionName, FString VariableName, int32_t Value);                            // [0xd9a8e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Float
	// void VictorySetCustomConfigVar_Float(FString SectionName, FString VariableName, float Value);                            // [0xd9a740] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Color
	// void VictorySetCustomConfigVar_Color(FString SectionName, FString VariableName, FLinearColor Value);                     // [0xd9a590] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Bool
	// void VictorySetCustomConfigVar_Bool(FString SectionName, FString VariableName, bool Value);                              // [0xd9a3e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryRemoveAxisKeyBind
	// void VictoryRemoveAxisKeyBind(FVictoryInputAxis ToRemove);                                                               // [0xd9a240] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryRemoveActionKeyBind
	// void VictoryRemoveActionKeyBind(FVictoryInput ToRemove);                                                                 // [0xd9a0a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryReBindAxisKey
	// bool VictoryReBindAxisKey(FVictoryInputAxis Original, FVictoryInputAxis NewBinding);                                     // [0xd99d90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryReBindActionKey
	// bool VictoryReBindActionKey(FVictoryInput Original, FVictoryInput NewBinding);                                           // [0xd99a80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPhysics_UpdateAngularDamping
	// bool VictoryPhysics_UpdateAngularDamping(class UPrimitiveComponent* CompToUpdate, float NewAngularDamping);              // [0xd999b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__WindowsNoEditorDir
	// FString VictoryPaths__WindowsNoEditorDir();                                                                              // [0xd99930] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__Win64Dir_BinaryLocation
	// FString VictoryPaths__Win64Dir_BinaryLocation();                                                                         // [0xd998b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__ScreenShotsDir
	// FString VictoryPaths__ScreenShotsDir();                                                                                  // [0xd99830] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__SavedDir
	// FString VictoryPaths__SavedDir();                                                                                        // [0xd997b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__LogsDir
	// FString VictoryPaths__LogsDir();                                                                                         // [0xd99730] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__GameRootDirectory
	// FString VictoryPaths__GameRootDirectory();                                                                               // [0xd996b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__ConfigDir
	// FString VictoryPaths__ConfigDir();                                                                                       // [0xd99630] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryLoadLevelInstance
	// class ULevelStreaming* VictoryLoadLevelInstance(class UObject* WorldContextObject, FString MapFolderOffOfContent, FString LevelName, int32_t InstanceNumber, FVector Location, FRotator Rotation, bool& Success); // [0xd99350] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryISM_GetAllVictoryISMActors
	// void VictoryISM_GetAllVictoryISMActors(class UObject* WorldContextObject, TArray<AVictoryISM*>& Out);                    // [0xd98fa0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryISM_ConvertToVictoryISMActors
	// void VictoryISM_ConvertToVictoryISMActors(class UObject* WorldContextObject, class UClass* ActorClass, TArray<AVictoryISM*>& CreatedISMActors, bool DestroyOriginalActors, int32_t MinCountToCreateISM); // [0xd98de0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIsApplicationRunning
	// bool VictoryIsApplicationRunning(int32_t ProcessId);                                                                     // [0xd992c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIntPlusEquals
	// void VictoryIntPlusEquals(int32_t& Int, int32_t Add, int32_t& IntOut);                                                   // [0xd991a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIntMinusEquals
	// void VictoryIntMinusEquals(int32_t& Int, int32_t Sub, int32_t& IntOut);                                                  // [0xd99080] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetVictoryInputAxis
	// FVictoryInputAxis VictoryGetVictoryInputAxis(FKeyEvent& KeyEvent);                                                       // [0xd98c10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetVictoryInput
	// FVictoryInput VictoryGetVictoryInput(FKeyEvent& KeyEvent);                                                               // [0xd98a10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetSoundVolume
	// float VictoryGetSoundVolume(class USoundClass* SoundClassObject);                                                        // [0xd98980] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Vector2D
	// FVector2D VictoryGetCustomConfigVar_Vector2D(FString SectionName, FString VariableName, bool& IsValid);                  // [0xd985f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Vector
	// FVector VictoryGetCustomConfigVar_Vector(FString SectionName, FString VariableName, bool& IsValid);                      // [0xd987b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_String
	// FString VictoryGetCustomConfigVar_String(FString SectionName, FString VariableName, bool& IsValid);                      // [0xd983f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Rotator
	// FRotator VictoryGetCustomConfigVar_Rotator(FString SectionName, FString VariableName, bool& IsValid);                    // [0xd98220] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Int
	// int32_t VictoryGetCustomConfigVar_Int(FString SectionName, FString VariableName, bool& IsValid);                         // [0xd98060] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Float
	// float VictoryGetCustomConfigVar_Float(FString SectionName, FString VariableName, bool& IsValid);                         // [0xd97ea0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Color
	// FLinearColor VictoryGetCustomConfigVar_Color(FString SectionName, FString VariableName, bool& IsValid);                  // [0xd97cd0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Bool
	// bool VictoryGetCustomConfigVar_Bool(FString SectionName, FString VariableName, bool& IsValid);                           // [0xd97b10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetApplicationName
	// FString VictoryGetApplicationName(int32_t ProcessId);                                                                    // [0xd97a30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllAxisKeyBindings
	// void VictoryGetAllAxisKeyBindings(TArray<FVictoryInputAxis>& Bindings);                                                  // [0xd97930] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllAxisAndActionMappingsForKey
	// void VictoryGetAllAxisAndActionMappingsForKey(FKey Key, TArray<FVictoryInput>& ActionBindings, TArray<FVictoryInputAxis>& AxisBindings); // [0xd976d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllActionKeyBindings
	// void VictoryGetAllActionKeyBindings(TArray<FVictoryInput>& Bindings);                                                    // [0xd975d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryFloatPlusEquals
	// void VictoryFloatPlusEquals(float& Float, float Add, float& FloatOut);                                                   // [0xd974b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryFloatMinusEquals
	// void VictoryFloatMinusEquals(float& Float, float Sub, float& FloatOut);                                                  // [0xd97390] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryDestructible_DestroyChunk
	// bool VictoryDestructible_DestroyChunk(class UDestructibleComponent* DestructibleComp, int32_t HitItem);                  // [0xd972c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryCreateProc
	// void VictoryCreateProc(int32_t& ProcessId, FString FullPathOfProgramToRun, TArray<FString> CommandlineArgs, bool Detach, bool Hidden, int32_t Priority, FString OptionalWorkingDirectory); // [0xd96f30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryAppendInline
	// void VictoryAppendInline(FString& String, FString ToAppend, FString& Result, bool AppendNewline);                        // [0xd96d50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SecondsToHoursMinutesSeconds
	// FString Victory_SecondsToHoursMinutesSeconds(float Seconds, bool TrimZeroes);                                            // [0xd9c800] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SaveStringToOSClipboard
	// void Victory_SaveStringToOSClipboard(FString ToClipboard);                                                               // [0xd9c770] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SavePixels
	// bool Victory_SavePixels(FString FullFilePath, int32_t Width, int32_t Height, TArray<FLinearColor>& ImagePixels, bool SaveAsBMP, bool SRGB, FString& ErrorString); // [0xd9c500] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_LoadTexture2D_FromFile_Pixels
	// class UTexture2D* Victory_LoadTexture2D_FromFile_Pixels(FString FullFilePath, EJoyImageFormats ImageFormat, bool& IsValid, int32_t& Width, int32_t& Height, TArray<FLinearColor>& OutPixels); // [0xd9c2e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_LoadTexture2D_FromFile
	// class UTexture2D* Victory_LoadTexture2D_FromFile(FString FullFilePath, EJoyImageFormats ImageFormat, bool& IsValid, int32_t& Width, int32_t& Height); // [0xd9c0f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetStringFromOSClipboard
	// void Victory_GetStringFromOSClipboard(FString& FromClipboard);                                                           // [0xd9be80] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetPixelsArrayFromT2D
	// bool Victory_GetPixelsArrayFromT2D(class UTexture2D* T2D, int32_t& TextureWidth, int32_t& TextureHeight, TArray<FLinearColor>& PixelArray); // [0xd9bd00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetPixelFromT2D
	// bool Victory_GetPixelFromT2D(class UTexture2D* T2D, int32_t X, int32_t Y, FLinearColor& PixelColor);                     // [0xd9bbb0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGRHIAdapterName
	// FString Victory_GetGRHIAdapterName();                                                                                    // [0xd9baf0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGPUInfo
	// void Victory_GetGPUInfo(FString& DeviceDescription, FString& Provider, FString& DriverVersion, FString& DriverDate);     // [0xd9b920] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGPUBrand
	// FString Victory_GetGPUBrand();                                                                                           // [0xd9b890] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_Get_Pixel
	// bool Victory_Get_Pixel(TArray<FLinearColor>& Pixels, int32_t ImageHeight, int32_t X, int32_t Y, FLinearColor& FoundColor); // [0xd9bf20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_AI_MoveToWithFilter
	// TEnumAsByte<EPathFollowingRequestResult> Victory_AI_MoveToWithFilter(class APawn* Pawn, FVector& Dest, class UClass* FilterClass, float AcceptanceRadius, bool bProjectDestinationToNavigation, bool bStopOnOverlap, bool bCanStrafe); // [0xd9b670] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.VerticalFOV
	// float VerticalFOV(float HorizontalFOV, float AspectRatio);                                                               // [0xd96c80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Vector2DInterpTo_Constant
	// FVector2D Vector2DInterpTo_Constant(FVector2D Current, FVector2D Target, float DeltaTime, float InterpSpeed);            // [0xd969e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Vector2DInterpTo
	// FVector2D Vector2DInterpTo(FVector2D Current, FVector2D Target, float DeltaTime, float InterpSpeed);                     // [0xd96880] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.UTCToLocal
	// void UTCToLocal(FDateTime& UTCTime, FDateTime& LocalTime);                                                               // [0xd96710] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.UnloadStreamingLevel
	// void UnloadStreamingLevel(class ULevelStreamingDynamic* LevelInstance);                                                  // [0xd96800] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.TransformVectorToActorSpaceAngle
	// FRotator TransformVectorToActorSpaceAngle(class AActor* Actor, FVector& InVector);                                       // [0xd96620] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.TransformVectorToActorSpace
	// FVector TransformVectorToActorSpace(class AActor* Actor, FVector& InVector);                                             // [0xd96530] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Traces__CharacterMeshTrace___ClosestSocket
	// class AActor* Traces__CharacterMeshTrace___ClosestSocket(class UObject* WorldContextObject, class AActor* TraceOwner, FVector& TraceStart, FVector& TraceEnd, FVector& OutImpactPoint, FVector& OutImpactNormal, FName& ClosestSocketName, FVector& SocketLocation, bool& IsValid); // [0xd96230] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Traces__CharacterMeshTrace___ClosestBone
	// class AActor* Traces__CharacterMeshTrace___ClosestBone(class AActor* TraceOwner, FVector& TraceStart, FVector& TraceEnd, FVector& OutImpactPoint, FVector& OutImpactNormal, FName& ClosestBoneName, FVector& ClosestBoneLocation, bool& IsValid); // [0xd95f70] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.TraceData__GetTraceDataFromSkeletalMeshSocket
	// bool TraceData__GetTraceDataFromSkeletalMeshSocket(FVector& TraceStart, FVector& TraceEnd, class USkeletalMeshComponent* Mesh, FRotator& TraceRotation, float TraceLength, FName Socket, bool DrawTraceData, FLinearColor TraceDataColor, float TraceDataThickness); // [0xd95c90] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.TraceData__GetTraceDataFromCharacterSocket
	// bool TraceData__GetTraceDataFromCharacterSocket(FVector& TraceStart, FVector& TraceEnd, class AActor* TheCharacter, FRotator& TraceRotation, float TraceLength, FName Socket, bool DrawTraceData, FLinearColor TraceDataColor, float TraceDataThickness); // [0xd959b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Text_ToInt
	// int32_t Text_ToInt(FText& Text, bool UseDotForThousands);                                                                // [0xd957e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Text_ToFloat
	// float Text_ToFloat(FText& Text, bool UseDotForThousands);                                                                // [0xd955f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Text_IsNumeric
	// bool Text_IsNumeric(FText& Text);                                                                                        // [0xd95520] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.StringIsEmpty
	// bool StringIsEmpty(FString Target);                                                                                      // [0xd94cf0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.StringConversion__GetFloatAsStringWithPrecision
	// void StringConversion__GetFloatAsStringWithPrecision(float TheFloat, FString& TheString, int32_t Precision, bool IncludeLeadingZero); // [0xd94b70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.String__ExplodeString
	// void String__ExplodeString(TArray<FString>& OutputStrings, FString InputString, FString Separator, int32_t Limit, bool bTrimElements); // [0xd952b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.String__CombineStrings_Multi
	// FString String__CombineStrings_Multi(FString A, FString B);                                                              // [0xd95100] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.String__CombineStrings
	// FString String__CombineStrings(FString StringFirst, FString StringSecond, FString Separator, FString StringFirstLabel, FString StringSecondLabel); // [0xd94d90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.SpawnActorIntoLevel
	// class AActor* SpawnActorIntoLevel(class UObject* WorldContextObject, class UClass* ActorClass, FName Level, FVector Location, FRotator Rotation, bool SpawnEvenIfColliding); // [0xd94800] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.SetGenericTeamId
	// void SetGenericTeamId(class AActor* Target, char NewTeamId);                                                             // [0xd94510] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.SetComponentTickRate
	// void SetComponentTickRate(class UActorComponent* Component, float Seconds);                                              // [0xd94450] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.SetBloomIntensity
	// void SetBloomIntensity(class APostProcessVolume* PostProcessVolume, float Intensity);                                    // [0xd94280] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.ServerTravel
	// void ServerTravel(class UObject* WorldContextObject, FString MapName, bool bSkipNotifyPlayers);                          // [0xd94120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Selection_SelectionBox
	// void Selection_SelectionBox(class UObject* WorldContextObject, TArray<AActor*>& SelectedActors, FVector2D AnchorPoint, FVector2D DraggedPoint, class UClass* ClassFilter); // [0xd93f70] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.seedRandWithTime
	// void seedRandWithTime();                                                                                                 // [0xd9d6a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.seedRandWithEntropy
	// void seedRandWithEntropy();                                                                                              // [0xd9d680] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.seedRand
	// void seedRand(int32_t Seed);                                                                                             // [0xd9d600] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.ScreenShots_Rename_Move_Most_Recent
	// bool ScreenShots_Rename_Move_Most_Recent(FString& OriginalFileName, FString NewName, FString NewAbsoluteFolderPath, bool HighResolution); // [0xd93d50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.SaveGameObject_GetMostRecentSaveSlotFileName
	// void SaveGameObject_GetMostRecentSaveSlotFileName(FString& Filename, bool& bFound);                                      // [0xd93c60] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.SaveGameObject_GetAllSaveSlotFileNames
	// void SaveGameObject_GetAllSaveSlotFileNames(TArray<FString>& FileNames);                                                 // [0xd93ba0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Rendering__UnFreezeGameRendering
	// void Rendering__UnFreezeGameRendering();                                                                                 // [0xd938b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Rendering__FreezeGameRendering
	// void Rendering__FreezeGameRendering();                                                                                   // [0xd93890] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RemoveFromStreamingLevels
	// void RemoveFromStreamingLevels(class UObject* WorldContextObject, FLevelStreamInstanceInfo& LevelInstanceInfo);          // [0xd937c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RemoveAllWidgetsOfClass
	// void RemoveAllWidgetsOfClass(class UObject* WorldContextObject, class UClass* WidgetClass);                              // [0xd93700] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetTimePassedSincePreviousTime
	// void RealWorldTime__GetTimePassedSincePreviousTime(FString PreviousTime, float& MilliSeconds, float& Seconds, float& Minutes, float& Hours); // [0xd93510] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetDifferenceBetweenTimes
	// void RealWorldTime__GetDifferenceBetweenTimes(FString PreviousTime1, FString PreviousTime2, float& MilliSeconds, float& Seconds, float& Minutes, float& Hours); // [0xd932f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetCurrentOSTime
	// FString RealWorldTime__GetCurrentOSTime(int32_t& MilliSeconds, int32_t& Seconds, int32_t& Minutes, int32_t& Hours12, int32_t& Hours24, int32_t& Day, int32_t& Month, int32_t& Year); // [0xd92fe0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_uniDis_MT
	// int32_t RandInt_uniDis_MT();                                                                                             // [0xd92fb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_uniDis
	// int32_t RandInt_uniDis();                                                                                                // [0xd92f80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_MINMAX_uniDis_MT
	// int32_t RandInt_MINMAX_uniDis_MT(int32_t iMin, int32_t iMax);                                                            // [0xd92eb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_MINMAX_uniDis
	// int32_t RandInt_MINMAX_uniDis(int32_t iMin, int32_t iMax);                                                               // [0xd92de0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_uniDis_MT
	// float RandFloat_uniDis_MT();                                                                                             // [0xd92db0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_uniDis
	// float RandFloat_uniDis();                                                                                                // [0xd92d80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_MINMAX_uniDis_MT
	// float RandFloat_MINMAX_uniDis_MT(float iMin, float iMax);                                                                // [0xd92cb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_MINMAX_uniDis
	// float RandFloat_MINMAX_uniDis(float iMin, float iMax);                                                                   // [0xd92be0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RandBool_Bernoulli_MT
	// bool RandBool_Bernoulli_MT(float fBias);                                                                                 // [0xd92b60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.RandBool_Bernoulli
	// bool RandBool_Bernoulli(float fBias);                                                                                    // [0xd92ae0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.ProjectWorldToScreenPosition
	// FVector2D ProjectWorldToScreenPosition(FVector& WorldLocation);                                                          // [0xd92a40] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.PointDistanceToPlane
	// void PointDistanceToPlane(FPlane& Plane, FVector Point, float& Distance);                                                // [0xd92670] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.PlaySoundAttachedFromFile
	// class UAudioComponent* PlaySoundAttachedFromFile(FString FilePath, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings); // [0xd921a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.PlaySoundAtLocationFromFile
	// void PlaySoundAtLocationFromFile(class UObject* WorldContextObject, FString FilePath, FVector Location, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings); // [0xd91f60] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.PlayerState_GetPlayerID
	// bool PlayerState_GetPlayerID(class APlayerController* ThePC, int32_t& PlayerId);                                         // [0xd92590] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.PlayerController_GetControllerID
	// bool PlayerController_GetControllerID(class APlayerController* ThePC, int32_t& ControllerId);                            // [0xd924b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__UpdateCharacterCameraToRagdollLocation
	// bool Physics__UpdateCharacterCameraToRagdollLocation(class AActor* TheCharacter, float HeightOffset, float InterpSpeed); // [0xd91e60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__LeaveRagDoll
	// bool Physics__LeaveRagDoll(class AActor* TheCharacter, bool SetToFallingMovementMode, float HeightAboveRBMesh, FVector& InitLocation, FRotator& InitRotation); // [0xd91c90] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__IsRagDoll
	// bool Physics__IsRagDoll(class AActor* TheCharacter);                                                                     // [0xd91c00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__InitializeVictoryRagDoll
	// bool Physics__InitializeVictoryRagDoll(class AActor* TheCharacter, FVector& InitLocation, FRotator& InitRotation);       // [0xd91ad0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__GetLocationofRagDoll
	// bool Physics__GetLocationofRagDoll(class AActor* TheCharacter, FVector& RagdollLocation);                                // [0xd91a00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__EnterRagDoll
	// bool Physics__EnterRagDoll(class AActor* TheCharacter);                                                                  // [0xd91970] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.OptionsMenu__GetDisplayAdapterScreenResolutions
	// bool OptionsMenu__GetDisplayAdapterScreenResolutions(TArray<int32_t>& Widths, TArray<int32_t>& Heights, TArray<int32_t>& RefreshRates, bool IncludeRefreshRates); // [0xd917b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.OperatingSystem__GetCurrentPlatform
	// void OperatingSystem__GetCurrentPlatform(bool& Windows_, bool& Mac, bool& Linux, bool& IOS, bool& Android, bool& Android_ARM, bool& Android_Vulkan, bool& PS4, bool& XboxOne, bool& HTML5, bool& APPLE); // [0xd913e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Open_URL_In_Web_Browser
	// void Open_URL_In_Web_Browser(FString TheURL);                                                                            // [0xd91300] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.NotEqual_Vector2DVector2D
	// bool NotEqual_Vector2DVector2D(FVector2D A, FVector2D B, float ErrorTolerance);                                          // [0xd911d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Mobility__SetSceneCompMobility
	// bool Mobility__SetSceneCompMobility(class USceneComponent* SceneComp, TEnumAsByte<EComponentMobility> NewMobility);      // [0xd90f70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.MinOfIntArray
	// void MinOfIntArray(TArray<int32_t>& IntArray, int32_t& IndexOfMinValue, int32_t& MinValue);                              // [0xd90e30] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.MinOfFloatArray
	// void MinOfFloatArray(TArray<float>& FloatArray, int32_t& IndexOfMinValue, float& MinValue);                              // [0xd90cf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.MaxOfIntArray
	// void MaxOfIntArray(TArray<int32_t>& IntArray, int32_t& IndexOfMaxValue, int32_t& MaxValue);                              // [0xd90bb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.MaxOfFloatArray
	// void MaxOfFloatArray(TArray<float>& FloatArray, int32_t& IndexOfMaxValue, float& MaxValue);                              // [0xd90a70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.MapRangeClamped
	// float MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);                    // [0xd908c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Loops_ResetBPRunawayCounter
	// void Loops_ResetBPRunawayCounter();                                                                                      // [0xd908a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.LoadTexture2D_FromFileByExtension
	// class UTexture2D* LoadTexture2D_FromFileByExtension(FString ImagePath, bool& IsValid, int32_t& OutWidth, int32_t& OutHeight); // [0xd90720] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.LoadTexture2D_FromDDSFile
	// class UTexture2D* LoadTexture2D_FromDDSFile(FString FullFilePath);                                                       // [0xd90680] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.LoadStringFromFile
	// bool LoadStringFromFile(FString& Result, FString FullFilePath);                                                          // [0xd90510] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.LoadStringArrayFromFile
	// bool LoadStringArrayFromFile(TArray<FString>& StringArray, int32_t& ArraySize, FString FullFilePath, bool ExcludeEmptyLines); // [0xd90310] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.LoadObjectFromAssetPath
	// class UObject* LoadObjectFromAssetPath(class UClass* ObjectClass, FName Path, bool& IsValid);                            // [0xd90200] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.LensFlare__GetLensFlareOffsets
	// bool LensFlare__GetLensFlareOffsets(class APlayerController* PlayerController, class AActor* LightSource, float& PitchOffset, float& YawOffset, float& RollOffset); // [0xd8fbd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.JoyIsKey
	// void JoyIsKey(FKeyEvent& KeyEvent, FKey Key, bool& Ctrl, bool& Shift, bool& Alt, bool& Cmd, bool& Match);                // [0xd8f870] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.JoyGraphicsSettings__FullScreen_Set
	// void JoyGraphicsSettings__FullScreen_Set(TEnumAsByte<EJoyGraphicsFullScreen> NewSetting);                                // [0xd8f800] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.JoyGraphicsSettings__FullScreen_Get
	// TEnumAsByte<EJoyGraphicsFullScreen> JoyGraphicsSettings__FullScreen_Get();                                               // [0xd8f7c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.JoyFileIO_GetFilesInRootAndAllSubFolders
	// bool JoyFileIO_GetFilesInRootAndAllSubFolders(TArray<FString>& Files, FString RootFolderFullPath, FString Ext);          // [0xd8f5c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.JoyFileIO_GetFiles
	// bool JoyFileIO_GetFiles(TArray<FString>& Files, FString RootFolderFullPath, FString Ext);                                // [0xd8f3c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.IsWidgetOfClassInViewport
	// bool IsWidgetOfClassInViewport(class UObject* WorldContextObject, class UClass* WidgetClass);                            // [0xd8f2f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.IsStandAlone
	// bool IsStandAlone(class UObject* WorldContextObject);                                                                    // [0xd8f240] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.IsPointOnPlane
	// bool IsPointOnPlane(FPlane& Plane, FVector Point, float Tolerance);                                                      // [0xd8f060] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.IsAlphaNumeric
	// bool IsAlphaNumeric(FString String);                                                                                     // [0xd8eb60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.InsertChildAt
	// class UPanelSlot* InsertChildAt(class UWidget* Parent, int32_t Index, class UWidget* Content);                           // [0xd8ea60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.HorizontalFOV
	// float HorizontalFOV(float VerticalFOV, float AspectRatio);                                                               // [0xd8e990] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.HideStreamingLevel
	// void HideStreamingLevel(class ULevelStreamingDynamic* LevelInstance);                                                    // [0xd8e910] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.HasSubstring
	// bool HasSubstring(FString SearchIn, FString SubString, TEnumAsByte<ESearchCase> SearchCase, TEnumAsByte<ESearchDir> SearchDir); // [0xd8e790] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GraphicsSettings__SetFrameRateToBeUnbound
	// void GraphicsSettings__SetFrameRateToBeUnbound();                                                                        // [0xd8e680] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GraphicsSettings__SetFrameRateCap
	// void GraphicsSettings__SetFrameRateCap(float NewValue);                                                                  // [0xd8e610] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetWidgetFromName
	// class UWidget* GetWidgetFromName(class UUserWidget* ParentUserWidget, FName& Name);                                      // [0xd8e530] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetViewportPositionHitResultByChannel
	// bool GetViewportPositionHitResultByChannel(class UObject* WorldContextObject, FVector2D& ViewportPosition, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, FHitResult& OutHitResult); // [0xd8e350] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetViewportPosition
	// bool GetViewportPosition(class UObject* WorldContextObject, FVector2D& ScreenPosition, FVector2D& OutViewportPosition);  // [0xd8e230] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetVectorRelativeLocation
	// FVector GetVectorRelativeLocation(FVector ParentLocation, FRotator ParentRotation, FVector ChildLocation);               // [0xd8df50] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetUTCFromUnixTimeStamp
	// void GetUTCFromUnixTimeStamp(int32_t UnixTimeStamp, FDateTime& UTCTime);                                                 // [0xd8dba0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetUserDisplayAdapterBrand
	// void GetUserDisplayAdapterBrand(bool& IsAMD, bool& IsNvidia, bool& IsIntel, bool& IsUnknown, int32_t& UnknownId);        // [0xd8dd70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetUnixTimeStamp
	// int32_t GetUnixTimeStamp(FDateTime& UTCTime);                                                                            // [0xd8dca0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetTimeInPlay
	// float GetTimeInPlay(class AActor* Actor);                                                                                // [0xd8dad0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetTimeAlive
	// float GetTimeAlive(class AActor* Target);                                                                                // [0xd8da40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetStaticMeshVertexLocations
	// bool GetStaticMeshVertexLocations(class UStaticMeshComponent* Comp, TArray<FVector>& VertexPositions);                   // [0xd8d950] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetSoundWaveFromFile
	// class USoundWave* GetSoundWaveFromFile(FString FilePath);                                                                // [0xd8d8b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetRotatorRelativeRotation
	// FRotator GetRotatorRelativeRotation(FRotator ParentRotation, FRotator ChildRotation);                                    // [0xd8d7b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetPlayerUniqueNetID
	// int32_t GetPlayerUniqueNetID();                                                                                          // [0xd8d780] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetPlayerStart
	// class APlayerStart* GetPlayerStart(class UObject* WorldContextObject, FString PlayerStartName);                          // [0xd8d650] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetObjectPath
	// FName GetObjectPath(class UObject* Obj);                                                                                 // [0xd8d5c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetNamesOfLoadedLevels
	// void GetNamesOfLoadedLevels(class UObject* WorldContextObject, TArray<FString>& NamesOfLoadedLevels);                    // [0xd8d4b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetLevelInstanceInfo
	// FLevelStreamInstanceInfo GetLevelInstanceInfo(class ULevelStreamingDynamic* LevelInstance);                              // [0xd8d410] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetHeadMountedDisplayDeviceType
	// FName GetHeadMountedDisplayDeviceType();                                                                                 // [0xd8d3d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetGenericTeamId
	// char GetGenericTeamId(class AActor* Target);                                                                             // [0xd8d340] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetFirstWidgetOfClass
	// class UUserWidget* GetFirstWidgetOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, bool TopLevelOnly); // [0xd8d240] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetDistanceToCollision
	// float GetDistanceToCollision(class UPrimitiveComponent* CollisionComponent, FVector& Point, FVector& ClosestPointOnCollision); // [0xd8d110] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetDistanceBetweenComponentSurfaces
	// float GetDistanceBetweenComponentSurfaces(class UPrimitiveComponent* CollisionComponent1, class UPrimitiveComponent* CollisionComponent2, FVector& PointOnSurface1, FVector& PointOnSurface2); // [0xd8cfb0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetCreationTime
	// float GetCreationTime(class AActor* Target);                                                                             // [0xd8cf20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetComponentRelativeRotation
	// FRotator GetComponentRelativeRotation(class USceneComponent* ParentComponent, class USceneComponent* ChildComponent);    // [0xd8cc60] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetComponentRelativeLocation
	// FVector GetComponentRelativeLocation(class USceneComponent* ParentComponent, class USceneComponent* ChildComponent);     // [0xd8cb80] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetCommandLine
	// FString GetCommandLine();                                                                                                // [0xd8caa0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetClosestActorOfClassInRadiusOfLocation
	// class AActor* GetClosestActorOfClassInRadiusOfLocation(class UObject* WorldContextObject, class UClass* ActorClass, FVector Center, float Radius, bool& IsValid); // [0xd8c8d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetClosestActorOfClassInRadiusOfActor
	// class AActor* GetClosestActorOfClassInRadiusOfActor(class UObject* WorldContextObject, class UClass* ActorClass, class AActor* ActorCenter, float Radius, bool& IsValid); // [0xd8c730] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetBoxContainingWorldPoints
	// void GetBoxContainingWorldPoints(TArray<FVector>& Points, FVector& Center, FVector& Extent);                             // [0xd8c4c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetAllWidgetsOfClass
	// void GetAllWidgetsOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, TArray<UUserWidget*>& FoundWidgets, bool TopLevelOnly); // [0xd8c350] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetAllBoneNamesBelowBone
	// int32_t GetAllBoneNamesBelowBone(class USkeletalMeshComponent* SkeletalMeshComp, FName StartingBoneName, TArray<FName>& BoneNames); // [0xd8c220] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetActorRelativeRotation
	// FRotator GetActorRelativeRotation(class AActor* ParentActor, class AActor* ChildActor);                                  // [0xd8c140] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.GetActorRelativeLocation
	// FVector GetActorRelativeLocation(class AActor* ParentActor, class AActor* ChildActor);                                   // [0xd8c060] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.FlushPressedKeys
	// void FlushPressedKeys(class APlayerController* PlayerController);                                                        // [0xd8bfe0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.FlashGameOnTaskBar
	// void FlashGameOnTaskBar(class APlayerController* PC, bool FlashContinuous, int32_t MaxFlashCount, int32_t FlashFrequencyMilliseconds); // [0xd8be90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.FileIO__SaveStringTextToFile
	// bool FileIO__SaveStringTextToFile(FString SaveDirectory, FString JoyfulFileName, FString SaveText, bool AllowOverWriting, bool AllowAppend); // [0xd8bbf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.FileIO__SaveStringArrayToFile
	// bool FileIO__SaveStringArrayToFile(FString SaveDirectory, FString JoyfulFileName, TArray<FString> SaveText, bool AllowOverWriting, bool AllowAppend); // [0xd8b8e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.EqualEqual_Vector2DVector2D
	// bool EqualEqual_Vector2DVector2D(FVector2D A, FVector2D B, float ErrorTolerance);                                        // [0xd8b7b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.DrawCircle
	// void DrawCircle(class UObject* WorldContextObject, FVector Center, float Radius, int32_t NumPoints, float Thickness, FLinearColor LineColor, FVector YAxis, FVector ZAxis, float Duration, bool PersistentLines); // [0xd8af30] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineFromSocket
	// void Draw__Thick3DLineFromSocket(class USkeletalMeshComponent* Mesh, FVector& EndPoint, FName Socket, FLinearColor LineColor, float Thickness, float Duration); // [0xd8b5d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineFromCharacterSocket
	// void Draw__Thick3DLineFromCharacterSocket(class AActor* TheCharacter, FVector& EndPoint, FName Socket, FLinearColor LineColor, float Thickness, float Duration); // [0xd8b3f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineBetweenActors
	// void Draw__Thick3DLineBetweenActors(class AActor* StartActor, class AActor* EndActor, FLinearColor LineColor, float Thickness, float Duration); // [0xd8b250] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.DoesMaterialHaveParameter
	// bool DoesMaterialHaveParameter(class UMaterialInterface* mat, FName Parameter);                                          // [0xd8ae60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.DistanceToSurface__DistaceOfPointToMeshSurface
	// float DistanceToSurface__DistaceOfPointToMeshSurface(class AStaticMeshActor* TheSMA, FVector& TestPoint, FVector& ClosestSurfacePoint); // [0xd8ad30] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Data__GetCharacterBoneLocations
	// bool Data__GetCharacterBoneLocations(class AActor* TheCharacter, TArray<FVector>& BoneLocations);                        // [0xd8ac40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.CreateTextureRenderTarget2D
	// class UTextureRenderTarget2D* CreateTextureRenderTarget2D(int32_t Width, int32_t Height, FLinearColor ClearColor, float Gamma); // [0xd8aa50] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.CreatePrimitiveComponent
	// class UPrimitiveComponent* CreatePrimitiveComponent(class UObject* WorldContextObject, class UClass* CompClass, FName Name, FVector Location, FRotator Rotation); // [0xd8a8b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.CreatePlane
	// FPlane CreatePlane(FVector Center, FVector Normal);                                                                      // [0xd8a7c0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.CreateObject
	// class UObject* CreateObject(class UObject* WorldContextObject, class UClass* TheObjectClass);                            // [0xd8a6f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.CreateMD5Hash
	// bool CreateMD5Hash(FString FileToHash, FString FileToStoreHashTo);                                                       // [0xd8a580] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.CountOccurrancesOfSubString
	// int32_t CountOccurrancesOfSubString(FString Source, FString SubString, TEnumAsByte<ESearchCase> SearchCase);             // [0xd8a380] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__VectorToRotator
	// FRotator Conversions__VectorToRotator(FVector& TheVector);                                                               // [0xd8a040] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToVector
	// void Conversions__StringToVector(FString String, FVector& ConvertedVector, bool& IsValid);                               // [0xd89f10] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToRotator
	// void Conversions__StringToRotator(FString String, FRotator& ConvertedRotator, bool& IsValid);                            // [0xd89de0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToColor
	// void Conversions__StringToColor(FString String, FLinearColor& ConvertedColor, bool& IsValid);                            // [0xd89cb0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__RotatorToVector
	// FVector Conversions__RotatorToVector(FRotator& TheRotator);                                                              // [0xd89c10] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__ColorToString
	// void Conversions__ColorToString(FLinearColor& Color, FString& ColorAsString);                                            // [0xd89b20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Conversion__FloatToRoundedInteger
	// int32_t Conversion__FloatToRoundedInteger(float IN_Float);                                                               // [0xd89aa0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.constructRand
	// void constructRand();                                                                                                    // [0xd9d5e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Component_PrestreamTextures
	// void Component_PrestreamTextures(class UMeshComponent* Target, float Seconds, bool bEnableStreaming, int32_t CinematicTextureGroups); // [0xd89950] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.CompareMD5Hash
	// bool CompareMD5Hash(FString MD5HashFile1, FString MD5HashFile2);                                                         // [0xd897e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Clone__StaticMeshActor
	// class AStaticMeshActor* Clone__StaticMeshActor(class UObject* WorldContextObject, bool& IsValid, class AStaticMeshActor* ToClone, FVector LocationOffset, FRotator RotationOffset); // [0xd88f00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.ClientWindow__GameWindowIsForeGroundInOS
	// bool ClientWindow__GameWindowIsForeGroundInOS();                                                                         // [0xd88ed0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.CharacterMovement__SetMaxMoveSpeed
	// bool CharacterMovement__SetMaxMoveSpeed(class ACharacter* TheCharacter, float NewMaxMoveSpeed);                          // [0xd88d60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Character__GetControllerRotation
	// FRotator Character__GetControllerRotation(class AActor* TheCharacter);                                                   // [0xd88e30] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.CaptureComponent2D_SaveImage
	// bool CaptureComponent2D_SaveImage(class USceneCaptureComponent2D* Target, FString ImagePath, FLinearColor ClearColour);  // [0xd88be0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.CaptureComponent2D_Project
	// bool CaptureComponent2D_Project(class USceneCaptureComponent2D* Target, FVector Location, FVector2D& OutPixelLocation);  // [0xd88ac0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Capture2D_SaveImage
	// bool Capture2D_SaveImage(class ASceneCapture2D* Target, FString ImagePath, FLinearColor ClearColour);                    // [0xd88940] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Capture2D_Project
	// bool Capture2D_Project(class ASceneCapture2D* Target, FVector Location, FVector2D& OutPixelLocation);                    // [0xd88820] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Calcs__ClosestPointToSourcePoint
	// float Calcs__ClosestPointToSourcePoint(FVector& Source, TArray<FVector>& OtherPoints, FVector& ClosestPoint);            // [0xd886c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Array_Sort
	// void Array_Sort(TArray<int32_t>& TargetArray, bool bAscendingOrder, FName VariableName);                                 // [0xd88570] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Array_IsValidIndex
	// bool Array_IsValidIndex(TArray<int32_t>& TargetArray, int32_t Index);                                                    // [0xd88480] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.AppendMultiple
	// FString AppendMultiple(FString A, FString B);                                                                            // [0xd88150] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Animation__GetAimOffsetsFromRotation
	// bool Animation__GetAimOffsetsFromRotation(class AActor* AnimBPOwner, FRotator& TheRotation, float& Pitch, float& Yaw);   // [0xd87fe0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Animation__GetAimOffsets
	// bool Animation__GetAimOffsets(class AActor* AnimBPOwner, float& Pitch, float& Yaw);                                      // [0xd87ec0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.AddToStreamingLevels
	// void AddToStreamingLevels(class UObject* WorldContextObject, FLevelStreamInstanceInfo& LevelInstanceInfo);               // [0xd87df0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.AddToActorRotation
	// void AddToActorRotation(class AActor* TheActor, FRotator AddRot);                                                        // [0xd87d20] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Actor_PrestreamTextures
	// void Actor_PrestreamTextures(class AActor* Target, float Seconds, bool bEnableStreaming, int32_t CinematicTextureGroups); // [0xd87a20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Actor__TeleportToActor
	// bool Actor__TeleportToActor(class AActor* ActorToTeleport, class AActor* DestinationActor);                              // [0xd87c50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Actor__GetAttachedActors
	// void Actor__GetAttachedActors(class AActor* ParentActor, TArray<AActor*>& ActorsArray);                                  // [0xd87b70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetPlayerController
	// class APlayerController* Accessor__GetPlayerController(class AActor* TheCharacter, bool& IsValid);                       // [0xd87940] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetNameAsString
	// FString Accessor__GetNameAsString(class UObject* TheObject);                                                             // [0xd87870] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetCharacterSkeletalMesh
	// class USkeletalMeshComponent* Accessor__GetCharacterSkeletalMesh(class AActor* TheCharacter, bool& IsValid);             // [0xd87790] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/VictoryBPLibrary.VictoryBPHTML
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UVictoryBPHTML : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/VictoryBPLibrary.VictoryISM
/// Size: 0x0228 (552 bytes) (0x000220 - 0x000228) align 8 MaxSize: 0x0228
class AVictoryISM : public AActor
{ 
public:
	class UInstancedStaticMeshComponent*               Mesh;                                                       // 0x0220   (0x0008)  
};

/// Class /Script/VictoryBPLibrary.VictoryPC
/// Size: 0x0570 (1392 bytes) (0x000570 - 0x000570) align 8 MaxSize: 0x0570
class AVictoryPC : public APlayerController
{ 
public:


	/// Functions
	// Function /Script/VictoryBPLibrary.VictoryPC.VictoryPlaySpeechSound
	// class UAudioComponent* VictoryPlaySpeechSound(class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime); // [0xd9fe90] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryPC.VictoryPC_GetMyIP_SendRequest
	// bool VictoryPC_GetMyIP_SendRequest();                                                                                    // [0xd9fe60] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryPC.VictoryPC_GetMyIP_DataReceived
	// void VictoryPC_GetMyIP_DataReceived(FString YourIP);                                                                     // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Script/VictoryBPLibrary.VictoryPC.Subtitles_CPPDelegate
	// void Subtitles_CPPDelegate(TArray<FSubtitleCue>& VictorySubtitles, float CueDuration);                                   // [0xd9fd10] Final|Native|Public|HasOutParms 
	// Function /Script/VictoryBPLibrary.VictoryPC.OnVictorySubtitlesQueued
	// void OnVictorySubtitlesQueued(TArray<FVictorySubtitleCue>& VictorySubtitles, float CueDuration);                         // [0x148e900] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/VictoryBPLibrary.VictoryTMapComp
/// Size: 0x02E0 (736 bytes) (0x0000B0 - 0x0002E0) align 8 MaxSize: 0x02E0
class UVictoryTMapComp : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x230];                                     // 0x00B0   (0x0230)  MISSED


	/// Functions
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Vector__Remove
	// void String_Vector__Remove(FString Key);                                                                                 // [0xd9fc20] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Vector__Get
	// FVector String_Vector__Get(FString Key, bool& IsValid);                                                                  // [0xd9fac0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Vector__Clear
	// void String_Vector__Clear();                                                                                             // [0xd9faa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Vector__AddPair
	// void String_Vector__AddPair(FString Key, FVector Value);                                                                 // [0xd9f960] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_String__Remove
	// void String_String__Remove(FString Key);                                                                                 // [0xd9f870] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_String__Get
	// FString String_String__Get(FString Key, bool& IsValid);                                                                  // [0xd9f6e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_String__Clear
	// void String_String__Clear();                                                                                             // [0xd9f6c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_String__AddPair
	// void String_String__AddPair(FString Key, FString Value);                                                                 // [0xd9f540] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Rotator__Remove
	// void String_Rotator__Remove(FString Key);                                                                                // [0xd9f450] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Rotator__Get
	// FRotator String_Rotator__Get(FString Key, bool& IsValid);                                                                // [0xd9f2f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Rotator__Clear
	// void String_Rotator__Clear();                                                                                            // [0xd9f2d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Rotator__AddPair
	// void String_Rotator__AddPair(FString Key, FRotator Value);                                                               // [0xd9f190] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Int__Remove
	// void String_Int__Remove(FString Key);                                                                                    // [0xd9f0a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Int__Get
	// int32_t String_Int__Get(FString Key, bool& IsValid);                                                                     // [0xd9ef50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Int__Clear
	// void String_Int__Clear();                                                                                                // [0xd9ef30] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Int__AddPair
	// void String_Int__AddPair(FString Key, int32_t Value);                                                                    // [0xd9ee00] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Actor__Remove
	// void String_Actor__Remove(FString Key);                                                                                  // [0xd9ed10] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Actor__Get
	// class AActor* String_Actor__Get(FString Key, bool& IsValid);                                                             // [0xd9ebc0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Actor__Clear
	// void String_Actor__Clear();                                                                                              // [0xd9eba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.String_Actor__AddPair
	// void String_Actor__AddPair(FString Key, class AActor* Value);                                                            // [0xd9ea70] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.Int_Vector__Remove
	// void Int_Vector__Remove(int32_t Key);                                                                                    // [0xd9e9e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.Int_Vector__Get
	// FVector Int_Vector__Get(int32_t Key, bool& IsValid);                                                                     // [0xd9e8f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.Int_Vector__Clear
	// void Int_Vector__Clear();                                                                                                // [0xd9e8d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.Int_Vector__AddPair
	// void Int_Vector__AddPair(int32_t Key, FVector Value);                                                                    // [0xd9e7f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.Int_Float__Remove
	// void Int_Float__Remove(int32_t Key, float Value);                                                                        // [0xd9e720] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.Int_Float__Get
	// float Int_Float__Get(int32_t Key, bool& IsValid);                                                                        // [0xd9e640] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.Int_Float__Clear
	// void Int_Float__Clear();                                                                                                 // [0xd9e620] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryBPLibrary.VictoryTMapComp.Int_Float__AddPair
	// void Int_Float__AddPair(int32_t Key, float Value);                                                                       // [0xd9e550] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/VictoryBPLibrary.LevelStreamInstanceInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 4 MaxSize: 0x0030
struct FLevelStreamInstanceInfo
{ 
	FName                                              PackageName;                                                // 0x0000   (0x0008)  
	FName                                              PackageNameToLoad;                                          // 0x0008   (0x0008)  
	FVector                                            Location;                                                   // 0x0010   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x001C   (0x000C)  
	bool                                               bShouldBeLoaded : 1;                                        // 0x0028:0 (0x0001)  
	bool                                               bShouldBeVisible : 1;                                       // 0x0028:1 (0x0001)  
	bool                                               bShouldBlockOnLoad : 1;                                     // 0x0028:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            LODIndex;                                                   // 0x002C   (0x0004)  
};

/// Struct /Script/VictoryBPLibrary.VictoryInputAxis
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FVictoryInputAxis
{ 
	FString                                            AxisName;                                                   // 0x0000   (0x0010)  
	FString                                            KeyAsString;                                                // 0x0010   (0x0010)  
	FKey                                               Key;                                                        // 0x0020   (0x0018)  
	float                                              Scale;                                                      // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/VictoryBPLibrary.VictoryInput
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FVictoryInput
{ 
	FString                                            ActionName;                                                 // 0x0000   (0x0010)  
	FKey                                               Key;                                                        // 0x0010   (0x0018)  
	FString                                            KeyAsString;                                                // 0x0028   (0x0010)  
	bool                                               bShift : 1;                                                 // 0x0038:0 (0x0001)  
	bool                                               bCtrl : 1;                                                  // 0x0038:1 (0x0001)  
	bool                                               bAlt : 1;                                                   // 0x0038:2 (0x0001)  
	bool                                               bCmd : 1;                                                   // 0x0038:3 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/VictoryBPLibrary.VictorySubtitleCue
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FVictorySubtitleCue
{ 
	FText                                              SubtitleText;                                               // 0x0000   (0x0018)  
	float                                              Time;                                                       // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UTKMathFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UVictoryBPFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UVictoryBPHTML) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AVictoryISM) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(AVictoryPC) == 0x0570); // 1392 bytes (0x000570 - 0x000570)
static_assert(sizeof(UVictoryTMapComp) == 0x02E0); // 736 bytes (0x0000B0 - 0x0002E0)
static_assert(sizeof(FLevelStreamInstanceInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FVictoryInputAxis) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FVictoryInput) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FVictorySubtitleCue) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(AVictoryISM, Mesh) == 0x0220);
static_assert(offsetof(FLevelStreamInstanceInfo, PackageName) == 0x0000);
static_assert(offsetof(FLevelStreamInstanceInfo, PackageNameToLoad) == 0x0008);
static_assert(offsetof(FLevelStreamInstanceInfo, Location) == 0x0010);
static_assert(offsetof(FLevelStreamInstanceInfo, Rotation) == 0x001C);
static_assert(offsetof(FVictoryInputAxis, AxisName) == 0x0000);
static_assert(offsetof(FVictoryInputAxis, KeyAsString) == 0x0010);
static_assert(offsetof(FVictoryInputAxis, Key) == 0x0020);
static_assert(offsetof(FVictoryInput, ActionName) == 0x0000);
static_assert(offsetof(FVictoryInput, Key) == 0x0010);
static_assert(offsetof(FVictoryInput, KeyAsString) == 0x0028);
static_assert(offsetof(FVictorySubtitleCue, SubtitleText) == 0x0000);
