
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CinematicCamera
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InputCore
/// dependency: LevelSequence
/// dependency: UISystem_BMI

#pragma pack(push, 0x1)

/// Class /Game/BMIMaps/Level1/BMI_Level01.BMI_Level01_C
/// Size: 0x02B0 (688 bytes) (0x000228 - 0x0002B0) align 8 MaxSize: 0x02B0
class ABMI_Level01_C : public ALevelScriptActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0228   (0x0008)  
	float                                              SlowToNormal_Slow_5C1B3AD049D08E866A785C9FCAF7FB35;         // 0x0230   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    SlowToNormal__Direction_5C1B3AD049D08E866A785C9FCAF7FB35;   // 0x0234   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0235   (0x0003)  MISSED
	class UTimelineComponent*                          SlowToNormal;                                               // 0x0238   (0x0008)  
	float                                              Y;                                                          // 0x0240   (0x0004)  
	float                                              X;                                                          // 0x0244   (0x0004)  
	bool                                               PressLeftMouseClick_;                                       // 0x0248   (0x0001)  
	bool                                               PressRightMouseClick_;                                      // 0x0249   (0x0001)  
	bool                                               PressShiftClick_;                                           // 0x024A   (0x0001)  
	bool                                               PressSpaceClick_;                                           // 0x024B   (0x0001)  
	bool                                               QTE1_;                                                      // 0x024C   (0x0001)  
	bool                                               QTE2_;                                                      // 0x024D   (0x0001)  
	bool                                               QTE3_;                                                      // 0x024E   (0x0001)  
	bool                                               QTE4_;                                                      // 0x024F   (0x0001)  
	bool                                               QTE2_Finish_;                                               // 0x0250   (0x0001)  
	bool                                               QTE3_Finish_;                                               // 0x0251   (0x0001)  
	bool                                               QTE4_Finish_;                                               // 0x0252   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x0253   (0x0005)  MISSED
	class UBMI_PressQTE_C*                             QTE_UMG;                                                    // 0x0258   (0x0008)  
	class UAudioComponent*                             S_Level01_1_CG_BGM;                                         // 0x0260   (0x0008)  
	bool                                               Cel_;                                                       // 0x0268   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0269   (0x0007)  MISSED
	class ACineCameraActor*                            Fly_PlayerCamera_ExecuteUbergraph_BMI_Level01_RefProperty;  // 0x0270   (0x0008)  
	class ALevelSequenceActor*                         Moon_Begin_ExecuteUbergraph_BMI_Level01_RefProperty;        // 0x0278   (0x0008)  
	class ALevelSequenceActor*                         Moon_Begin_Loop_2_ExecuteUbergraph_BMI_Level01_RefProperty; // 0x0280   (0x0008)  
	class ALevelSequenceActor*                         Moon_ActiveEngine_2_ExecuteUbergraph_BMI_Level01_RefProperty; // 0x0288   (0x0008)  
	class ALevelSequenceActor*                         Moon_IntoGorund_2_ExecuteUbergraph_BMI_Level01_RefProperty; // 0x0290   (0x0008)  
	class ALevelSequenceActor*                         Moon_DogeCableCar_5_ExecuteUbergraph_BMI_Level01_RefProperty; // 0x0298   (0x0008)  
	class ALevelSequenceActor*                         Moon_End_2_ExecuteUbergraph_BMI_Level01_RefProperty;        // 0x02A0   (0x0008)  
	class ASkeletalMeshActor*                          Parachute__SkinCloth_Single_EdGraph_0_RefProperty;          // 0x02A8   (0x0008)  


	/// Functions
	// Function /Game/BMIMaps/Level1/BMI_Level01.BMI_Level01_C.UpDataSkin
	// void UpDataSkin();                                                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BMIMaps/Level1/BMI_Level01.BMI_Level01_C.SlowToNormal__FinishedFunc
	// void SlowToNormal__FinishedFunc();                                                                                       // [0x148e900] BlueprintEvent       
	// Function /Game/BMIMaps/Level1/BMI_Level01.BMI_Level01_C.SlowToNormal__UpdateFunc
	// void SlowToNormal__UpdateFunc();                                                                                         // [0x148e900] BlueprintEvent       
	// Function /Game/BMIMaps/Level1/BMI_Level01.BMI_Level01_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent(FKey Key);                                                           // [0x148e900] BlueprintEvent       
	// Function /Game/BMIMaps/Level1/BMI_Level01.BMI_Level01_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_RightMouseButton_K2Node_InputKeyEvent(FKey Key);                                                          // [0x148e900] BlueprintEvent       
	// Function /Game/BMIMaps/Level1/BMI_Level01.BMI_Level01_C.InpActEvt_Jump_K2Node_InputActionEvent
	// void InpActEvt_Jump_K2Node_InputActionEvent(FKey Key);                                                                   // [0x148e900] BlueprintEvent       
	// Function /Game/BMIMaps/Level1/BMI_Level01.BMI_Level01_C.InpActEvt_Shift_K2Node_InputActionEvent
	// void InpActEvt_Shift_K2Node_InputActionEvent(FKey Key);                                                                  // [0x148e900] BlueprintEvent       
	// Function /Game/BMIMaps/Level1/BMI_Level01.BMI_Level01_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent
	// void InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent(FKey Key);                                                   // [0x148e900] BlueprintEvent       
	// Function /Game/BMIMaps/Level1/BMI_Level01.BMI_Level01_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent
	// void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent(FKey Key);                                                 // [0x148e900] BlueprintEvent       
	// Function /Game/BMIMaps/Level1/BMI_Level01.BMI_Level01_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent
	// void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent(FKey Key);                                                     // [0x148e900] BlueprintEvent       
	// Function /Game/BMIMaps/Level1/BMI_Level01.BMI_Level01_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent
	// void InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent(FKey Key);                                                  // [0x148e900] BlueprintEvent       
	// Function /Game/BMIMaps/Level1/BMI_Level01.BMI_Level01_C.InpActEvt_Home_K2Node_InputKeyEvent
	// void InpActEvt_Home_K2Node_InputKeyEvent(FKey Key);                                                                      // [0x148e900] BlueprintEvent       
	// Function /Game/BMIMaps/Level1/BMI_Level01.BMI_Level01_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/BMIMaps/Level1/BMI_Level01.BMI_Level01_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x148e900] Event|Public|BlueprintEvent 
	// Function /Game/BMIMaps/Level1/BMI_Level01.BMI_Level01_C.QTE1_Finish
	// void QTE1_Finish();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BMIMaps/Level1/BMI_Level01.BMI_Level01_C.QTE2_Finish
	// void QTE2_Finish();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BMIMaps/Level1/BMI_Level01.BMI_Level01_C.QTE3_Finish
	// void QTE3_Finish();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BMIMaps/Level1/BMI_Level01.BMI_Level01_C.QTE4_Finish
	// void QTE4_Finish();                                                                                                      // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BMIMaps/Level1/BMI_Level01.BMI_Level01_C.BeginCG
	// void BeginCG();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BMIMaps/Level1/BMI_Level01.BMI_Level01_C.Open_Cel_Shader
	// void Open_Cel_Shader();                                                                                                  // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BMIMaps/Level1/BMI_Level01.BMI_Level01_C.Close_Cel_Shader
	// void Close_Cel_Shader();                                                                                                 // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BMIMaps/Level1/BMI_Level01.BMI_Level01_C.LoadCel
	// void LoadCel();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BMIMaps/Level1/BMI_Level01.BMI_Level01_C.ExecuteUbergraph_BMI_Level01
	// void ExecuteUbergraph_BMI_Level01(int32_t EntryPoint);                                                                   // [0x148e900] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(ABMI_Level01_C) == 0x02B0); // 688 bytes (0x000228 - 0x0002B0)
static_assert(offsetof(ABMI_Level01_C, UberGraphFrame) == 0x0228);
static_assert(offsetof(ABMI_Level01_C, SlowToNormal__Direction_5C1B3AD049D08E866A785C9FCAF7FB35) == 0x0234);
static_assert(offsetof(ABMI_Level01_C, SlowToNormal) == 0x0238);
static_assert(offsetof(ABMI_Level01_C, QTE_UMG) == 0x0258);
static_assert(offsetof(ABMI_Level01_C, S_Level01_1_CG_BGM) == 0x0260);
static_assert(offsetof(ABMI_Level01_C, Fly_PlayerCamera_ExecuteUbergraph_BMI_Level01_RefProperty) == 0x0270);
static_assert(offsetof(ABMI_Level01_C, Moon_Begin_ExecuteUbergraph_BMI_Level01_RefProperty) == 0x0278);
static_assert(offsetof(ABMI_Level01_C, Moon_Begin_Loop_2_ExecuteUbergraph_BMI_Level01_RefProperty) == 0x0280);
static_assert(offsetof(ABMI_Level01_C, Moon_ActiveEngine_2_ExecuteUbergraph_BMI_Level01_RefProperty) == 0x0288);
static_assert(offsetof(ABMI_Level01_C, Moon_IntoGorund_2_ExecuteUbergraph_BMI_Level01_RefProperty) == 0x0290);
static_assert(offsetof(ABMI_Level01_C, Moon_DogeCableCar_5_ExecuteUbergraph_BMI_Level01_RefProperty) == 0x0298);
static_assert(offsetof(ABMI_Level01_C, Moon_End_2_ExecuteUbergraph_BMI_Level01_RefProperty) == 0x02A0);
static_assert(offsetof(ABMI_Level01_C, Parachute__SkinCloth_Single_EdGraph_0_RefProperty) == 0x02A8);
