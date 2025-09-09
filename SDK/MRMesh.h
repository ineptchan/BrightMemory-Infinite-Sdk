
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

/// Enum /Script/MRMesh.EMeshTrackerVertexColorMode
/// Size: 0x01 (1 bytes)
enum class EMeshTrackerVertexColorMode : uint8_t
{
	EMeshTrackerVertexColorMode__None                                                = 0,
	EMeshTrackerVertexColorMode__Confidence                                          = 1,
	EMeshTrackerVertexColorMode__Block                                               = 2
};

/// Class /Script/MRMesh.MeshReconstructorBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMeshReconstructorBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/MRMesh.MeshReconstructorBase.StopReconstruction
	// void StopReconstruction();                                                                                               // [0x2095950] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.StartReconstruction
	// void StartReconstruction();                                                                                              // [0x2095930] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.PauseReconstruction
	// void PauseReconstruction();                                                                                              // [0xdbd840] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionStarted
	// bool IsReconstructionStarted();                                                                                          // [0xcdb990] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionPaused
	// bool IsReconstructionPaused();                                                                                           // [0x20956c0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MeshReconstructorBase.DisconnectMRMesh
	// void DisconnectMRMesh();                                                                                                 // [0x2095540] Native|Public        
	// Function /Script/MRMesh.MeshReconstructorBase.ConnectMRMesh
	// void ConnectMRMesh(class UMRMeshComponent* Mesh);                                                                        // [0x2095420] Native|Public        
};

/// Class /Script/MRMesh.MockDataMeshTrackerComponent
/// Size: 0x0270 (624 bytes) (0x0001F8 - 0x000270) align 16 MaxSize: 0x0270
class UMockDataMeshTrackerComponent : public USceneComponent
{ 
public:
	SDK_UNDEFINED(16,286) /* FMulticastInlineDelegate */ __um(OnMeshTrackerUpdated);                               // 0x01F8   (0x0010)  
	bool                                               ScanWorld;                                                  // 0x0208   (0x0001)  
	bool                                               RequestNormals;                                             // 0x0209   (0x0001)  
	bool                                               RequestVertexConfidence;                                    // 0x020A   (0x0001)  
	EMeshTrackerVertexColorMode                        VertexColorMode;                                            // 0x020B   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x020C   (0x0004)  MISSED
	TArray<FColor>                                     BlockVertexColors;                                          // 0x0210   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceZero;                              // 0x0220   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceOne;                               // 0x0230   (0x0010)  
	float                                              UpdateInterval;                                             // 0x0240   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0244   (0x0004)  MISSED
	class UMRMeshComponent*                            MRMesh;                                                     // 0x0248   (0x0008)  
	unsigned char                                      UnknownData02_7[0x20];                                      // 0x0250   (0x0020)  MISSED


	/// Functions
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
	// void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<float>& Confidence); // [0x148e900] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
	// void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                              // [0x2095560] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
	// void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                                 // [0x20954b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MRMesh.MRMeshComponent
/// Size: 0x0500 (1280 bytes) (0x000448 - 0x000500) align 16 MaxSize: 0x0500
class UMRMeshComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0448   (0x0010)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0458   (0x0008)  
	class UMaterialInterface*                          WireframeMaterial;                                          // 0x0460   (0x0008)  
	bool                                               bCreateMeshProxySections;                                   // 0x0468   (0x0001)  
	bool                                               bUpdateNavMeshOnMeshUpdate;                                 // 0x0469   (0x0001)  
	bool                                               bNeverCreateCollisionMesh;                                  // 0x046A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x046B   (0x0005)  MISSED
	class UBodySetup*                                  CachedBodySetup;                                            // 0x0470   (0x0008)  
	TArray<class UBodySetup*>                          BodySetups;                                                 // 0x0478   (0x0010)  
	unsigned char                                      UnknownData02_7[0x78];                                      // 0x0488   (0x0078)  MISSED


	/// Functions
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeMaterial
	// void SetWireframeMaterial(class UMaterialInterface* InMaterial);                                                         // [0x20958a0] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeColor
	// void SetWireframeColor(FLinearColor& InColor);                                                                           // [0x2095810] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetUseWireframe
	// void SetUseWireframe(bool bUseWireframe);                                                                                // [0x2095780] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetEnableMeshOcclusion
	// void SetEnableMeshOcclusion(bool bEnable);                                                                               // [0x20956f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.IsConnected
	// bool IsConnected();                                                                                                      // [0x2095680] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetWireframeColor
	// FLinearColor GetWireframeColor();                                                                                        // [0x2095650] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetUseWireframe
	// bool GetUseWireframe();                                                                                                  // [0x2095630] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetEnableMeshOcclusion
	// bool GetEnableMeshOcclusion();                                                                                           // [0x2095610] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.ForceNavMeshUpdate
	// void ForceNavMeshUpdate();                                                                                               // [0x20955f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.Clear
	// void Clear();                                                                                                            // [0x20953f0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/MRMesh.MRMeshConfiguration
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMRMeshConfiguration
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UMeshReconstructorBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMockDataMeshTrackerComponent) == 0x0270); // 624 bytes (0x0001F8 - 0x000270)
static_assert(sizeof(UMRMeshComponent) == 0x0500); // 1280 bytes (0x000448 - 0x000500)
static_assert(sizeof(FMRMeshConfiguration) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorMode) == 0x020B);
static_assert(offsetof(UMockDataMeshTrackerComponent, BlockVertexColors) == 0x0210);
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorFromConfidenceZero) == 0x0220);
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorFromConfidenceOne) == 0x0230);
static_assert(offsetof(UMockDataMeshTrackerComponent, MRMesh) == 0x0248);
static_assert(offsetof(UMRMeshComponent, Material) == 0x0458);
static_assert(offsetof(UMRMeshComponent, WireframeMaterial) == 0x0460);
static_assert(offsetof(UMRMeshComponent, CachedBodySetup) == 0x0470);
static_assert(offsetof(UMRMeshComponent, BodySetups) == 0x0478);
