
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

/// Enum /Game/BP_RTX/Enum_RT_Quality_Preset.Enum_RT_Quality_Preset
/// Size: 0x01 (1 bytes)
enum class Enum_RT_Quality_Preset : uint8_t
{
	Enum_RT_Quality_Preset__NewEnumerator4                                           = 0,
	Enum_RT_Quality_Preset__NewEnumerator7                                           = 1,
	Enum_RT_Quality_Preset__NewEnumerator6                                           = 2,
	Enum_RT_Quality_Preset__NewEnumerator0                                           = 3,
	Enum_RT_Quality_Preset__NewEnumerator5                                           = 4,
	Enum_RT_Quality_Preset__NewEnumerator1                                           = 5,
	Enum_RT_Quality_Preset__NewEnumerator2                                           = 6,
	Enum_RT_Quality_Preset__NewEnumerator3                                           = 7
};

/// Enum /Game/BP_RTX/RT_Parameter_Data/RTXDI_Quality.RTXDI_Quality
/// Size: 0x01 (1 bytes)
enum class RTXDI_Quality : uint8_t
{
	RTXDI_Quality__NewEnumerator0                                                    = 0,
	RTXDI_Quality__NewEnumerator1                                                    = 1,
	RTXDI_Quality__NewEnumerator2                                                    = 2
};

/// Class /Game/BP_RTX/BP_RTX_Parameter_Interface.BP_RTX_Parameter_Interface_C
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBP_RTX_Parameter_Interface_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/BP_RTX/BP_RTX_Parameter_Interface.BP_RTX_Parameter_Interface_C.RTX_Switch_DLSS_From_UI
	// void RTX_Switch_DLSS_From_UI(FString AAMethod, FString DLSSQuality, bool EnableOverrideFromUI);                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_RTX/BP_RTX_Parameter_Interface.BP_RTX_Parameter_Interface_C.RTX_Switch_Preset_From_UI
	// void RTX_Switch_Preset_From_UI(TEnumAsByte<Enum_RT_Quality_Preset> RTXPreset);                                           // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_RTX/BP_RTX_Parameter_Interface.BP_RTX_Parameter_Interface_C.RTX_Force_Override
	// void RTX_Force_Override();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
};

/// Struct /Game/BP_RTX/RT_Parameter_Data/AO_Parameters.AO_Parameters
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FAO_Parameters
{ 
	FString                                            EnableAO_4_402B20584E745E3C12F1B7AF7AA87854;                // 0x0000   (0x0010)  
	FString                                            AOEnableMaterial_5_CC7E87EA478E0E374391B688FD73F056;        // 0x0010   (0x0010)  
	FString                                            AOEnableTwoSideGeometry_6_C6D7C81641885C9241D31F8F7FDB1BFD; // 0x0020   (0x0010)  
	FString                                            AOSPP_10_2666C0F2490AC980438465B1B37CDDDC;                  // 0x0030   (0x0010)  
	FString                                            AODenoiserHistoryConvolutionSampleCount_13_50EF88A94EC31AFC5F939FA82C735B40; // 0x0040   (0x0010)  
};

/// Struct /Game/BP_RTX/RT_Parameter_Data/Debug_Parameters.Debug_Parameters
/// Size: 0x0141 (321 bytes) (0x000000 - 0x000141) align 8 MaxSize: 0x0141
struct FDebug_Parameters
{ 
	FString                                            UseTextureLOD_14_736F43694CE688E814BF119F04BC733B;          // 0x0000   (0x0010)  
	FString                                            NormalBias_15_8A32C7694BB9E814F5B79080A92D92FF;             // 0x0010   (0x0010)  
	FString                                            DebugForceOpaque_16_C804BF5D4DD6036507DFF789796FA3D2;       // 0x0020   (0x0010)  
	FString                                            DebugForceFullBuild_17_6FDE0EFC4C1DDE4558BFADAFC250953A;    // 0x0030   (0x0010)  
	FString                                            DebugDisableTriangleCull_18_F6A8E355470D11CB81EAB8B19AC1C7A6; // 0x0040   (0x0010)  
	FString                                            DebugForceBuildMode_19_AB2BFAEB44E7BB8A8D5CCA99F330B428;    // 0x0050   (0x0010)  
	FString                                            EnableReflectionDenoiser_20_12D307E54569217835508CB0D10A7977; // 0x0060   (0x0010)  
	FString                                            EnableShadowDenoiser_21_66089741487B775E6A06E499B3D14354;   // 0x0070   (0x0010)  
	FString                                            EnableGIDenoiser_22_048015BE4ECE190E94DAC98FC43DBFBC;       // 0x0080   (0x0010)  
	FString                                            ReflectionEnableMaterials_23_49932A5A461504BB59F75CB217B2162E; // 0x0090   (0x0010)  
	FString                                            EnableShaderCache_24_91CAA4D2402AA03FE3367E863E697898;      // 0x00A0   (0x0010)  
	FString                                            PSOCacheSize_25_571245E8420E18F1C3A1D6B9173D8898;           // 0x00B0   (0x0010)  
	FString                                            RTXSwitch_26_CF19681044E915DF3EE1B7A42E9CE572;              // 0x00C0   (0x0010)  
	float                                              UseShaderWPO_32_EF11C3E64B117CFB7C16B0BAA7F5A01D;           // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00D4   (0x0004)  MISSED
	FString                                            ParallelMeshBatchSize_66_DD9B821743F54A691D43C8A24A9BE556;  // 0x00D8   (0x0010)  
	FString                                            BuildRayTracingMeshForCaustics_68_BDEEC918403656B6270A94A80C0DE5DB; // 0x00E8   (0x0010)  
	FString                                            ParallelMeshBatchSetup_56_86CA6095450FFE588738FC85344DC2FD; // 0x00F8   (0x0010)  
	FString                                            BatchMaterials_57_ED68CBEF4934516852BC45B44504F0C1;         // 0x0108   (0x0010)  
	FString                                            NonBlockingPipelineCreation_79_48AF81E64271EABF0A7934900DCD8A49; // 0x0118   (0x0010)  
	FString                                            DynamicGeometryLastRenderTimeUpdateDistance_82_85FDD70C4ECBD20FDB4138A3032A7F47; // 0x0128   (0x0010)  
	float                                              RTXTickInterval_71_9F40A6F64535D2EC280D3A931AB6EBC1;        // 0x0138   (0x0004)  
	float                                              PlayerMaxVelocityThreshold_73_ED82F8D84E62D435C28326AD3146CBC0; // 0x013C   (0x0004)  
	bool                                               EnableAdaptiveRTXRender_76_D6F55266402401FBB0ED1293B4FEA290; // 0x0140   (0x0001)  
};

/// Struct /Game/BP_RTX/RT_Parameter_Data/GI_Parameters.GI_Parameters
/// Size: 0x0230 (560 bytes) (0x000000 - 0x000230) align 8 MaxSize: 0x0230
struct FGI_Parameters
{ 
	FString                                            GItype_13_FEFC00D7428DF3F2EA0F9097A9353822;                 // 0x0000   (0x0010)  
	FString                                            GIMaxBounce_14_9C271AFE40D4E53E4469F8A0B0726358;            // 0x0010   (0x0010)  
	FString                                            GIMaxRayDistance_15_AD8A4E9844AE373D5012FB9DACC25082;       // 0x0020   (0x0010)  
	FString                                            GISPP_16_1CA01D6E4CD423E3952E13A05D8EDCF5;                  // 0x0030   (0x0010)  
	FString                                            GIScreenPercentage_17_51DD44EE4074DBDCF36076B79D47F981;     // 0x0040   (0x0010)  
	FString                                            GIUseRussianRoulette_18_03B4F71A41F8B1991B5C9093866E7C8D;   // 0x0050   (0x0010)  
	FString                                            GIDiffuseThreshold_19_4C91F5304F3E0F86F2DE64BE0555EBFC;     // 0x0060   (0x0010)  
	FString                                            GISortMaterials_21_FB1F0EBB431301AE76B7CEB2D0B466E8;        // 0x0070   (0x0010)  
	FString                                            GIEnableTwoSidedGeometry_22_F38481B04AA8C5C6C1B93087D28F17CE; // 0x0080   (0x0010)  
	FString                                            FinalGatherDistance_23_06E7E9F0467A1E30FB9C0989EBD3E956;    // 0x0090   (0x0010)  
	FString                                            GIMaxLightCount_26_5B5538634898D5C09E00E0B76188BF5D;        // 0x00A0   (0x0010)  
	FString                                            GIDenoiserType_32_B2E8F2D04E72BB68627D6EBCA107C472;         // 0x00B0   (0x0010)  
	FString                                            GIApplyAO_33_1BA016C145BE87B51CFBDDBEB7FBEE0D;              // 0x00C0   (0x0010)  
	FString                                            GIDenoiserColorClamp_34_116D4CA9441D9B54F1CC09A4773FC856;   // 0x00D0   (0x0010)  
	FString                                            GIDenoiserNormalTolerance_35_B6026F734DEA82ADC79D678F82ED05EA; // 0x00E0   (0x0010)  
	FString                                            GIDenoiseHistoryLength_41_6444C26341627DFA45693FBF3E6C18CF; // 0x00F0   (0x0010)  
	FString                                            SpatialNormalTolerance_38_90A4369D46760D1D3D12B1B90AC93BB2; // 0x0100   (0x0010)  
	FString                                            SpatialFilterIteration_44_43991F984232FCDF0F486A8122EC4EE5; // 0x0110   (0x0010)  
	FString                                            GIDiffuseBoost_47_206FAADE4EB4EB482502AFBADB7283BC;         // 0x0120   (0x0010)  
	FString                                            FinalGatherUseReservoirResampling_51_B645C5324122AF3297A88BA441BBF97D; // 0x0130   (0x0010)  
	FString                                            GIMetalicSupport_54_E529B8F747A267DC767E098206DB5CC4;       // 0x0140   (0x0010)  
	FString                                            GIDenoiserSpatialFilterType_57_35EDA4DA4FDAE461034E11A329D5FCE1; // 0x0150   (0x0010)  
	FString                                            GIDenoiserUseSH_62_6A8CFE524B495BB040710BA60BBD39E0;        // 0x0160   (0x0010)  
	FString                                            GIDenoiserSHSharpness_61_E2DE071B4E3C5411289FF0AC4D8A8D41;  // 0x0170   (0x0010)  
	FString                                            ATrousDepthTolerance_65_1759F98545A1EAAC4D34079C5EF23FAB;   // 0x0180   (0x0010)  
	FString                                            FinalGatherIterations_70_4AF615CF472D7320C330A4911D16FB84;  // 0x0190   (0x0010)  
	FString                                            FinalGatherFilterWidth_71_D2D42ACB40D4E30DE24D4B917B965521; // 0x01A0   (0x0010)  
	FString                                            GIFireflySuppression_72_EEAF55A1422455A4AEE4FC90DA0C1746;   // 0x01B0   (0x0010)  
	FString                                            ReservoirResamplingInterval_76_80AB856F43395C864203B9A3135F2DB9; // 0x01C0   (0x0010)  
	FString                                            FinalGatherNormalFromDepth_80_8D4264AA4A8998ABC3EEA99265BE762C; // 0x01D0   (0x0010)  
	FString                                            FinalGatherMaxReuseWeight_81_2D108C2B4C14D43EC6EC9192CD7C9689; // 0x01E0   (0x0010)  
	FString                                            FinalGatherAggressiveReservoirReuse_84_1B3372034365E9F31EB6019F153A3A77; // 0x01F0   (0x0010)  
	FString                                            GIDenoiseATrousFilterWidth_87_985CA20D455F90D2B3A71092519BA3E6; // 0x0200   (0x0010)  
	FString                                            GIAccumulateEmissive_90_77129ADE421CED99235DF8A2C64DE1FB;   // 0x0210   (0x0010)  
	FString                                            GIMultiBounceInterval_92_F65C03A246D2D4273AAA648629A2E8B9;  // 0x0220   (0x0010)  
};

/// Struct /Game/BP_RTX/RT_Parameter_Data/LandscapeAndFoliage_Parameter.LandscapeAndFoliage_Parameter
/// Size: 0x00E0 (224 bytes) (0x000000 - 0x0000E0) align 8 MaxSize: 0x00E0
struct FLandscapeAndFoliage_Parameter
{ 
	FString                                            EnableLandscapeDetectTextureStreaming_8_34CD37624CF32D930CE49B8AE1EDF932; // 0x0000   (0x0010)  
	FString                                            EnableLandscapeLODUpdateEveryFrame_9_5FA37320403A8777FE4A8FA2225C2F81; // 0x0010   (0x0010)  
	FString                                            EnableInstancedStaticMesh_10_F759681E42E05A6B2AC9FEA6EE2E717F; // 0x0020   (0x0010)  
	FString                                            EnableInstancedStaticMeshesCulling_11_DB7739364F5EED0508F78483F32D333D; // 0x0030   (0x0010)  
	FString                                            InstancedStaticMeshesCullingRadius_12_790EF6C34AB6F7B443A365B703D17049; // 0x0040   (0x0010)  
	FString                                            EnableLandscapeInRT_13_EB1398FC4CE59D76E6A49B9D289BA6A2;    // 0x0050   (0x0010)  
	FString                                            InstancedStaticMeshesCullingAngle_16_6EB44C0E474474F85AD359B7B8A0B9BC; // 0x0060   (0x0010)  
	FString                                            InstancedStaticMeshesEvaluateWPO_22_3E0D1EF54BCDB5B2D1E1A48429415469; // 0x0070   (0x0010)  
	FString                                            InstancedStaticMeshesSimulationCount_23_3F44BC814B40CF9EB483F2A9D063BB0A; // 0x0080   (0x0010)  
	FString                                            ShadowUseBiasForSkipWPOEval_24_EE03629D4D672D9F32340FBB0ED1F0A9; // 0x0090   (0x0010)  
	FString                                            ShadowMaxBiasForInexactGeometry_25_50FA131B48D2AEE0BE24A1AAEBCC1205; // 0x00A0   (0x0010)  
	FString                                            AutoInstance_29_703C2F464F835FBA52AF74ABDEE8DC9D;           // 0x00B0   (0x0010)  
	FString                                            AOUseBiasForSkipWPOEval_33_2006F3134F1344D7F76F8FAA1D641BBB; // 0x00C0   (0x0010)  
	FString                                            AOMaxBiasForInexactGeometry_34_C821B15B4E6AADD30289B4BBC8CE3C09; // 0x00D0   (0x0010)  
};

/// Struct /Game/BP_RTX/RT_Parameter_Data/Reflection_Parameters.Reflection_Parameters
/// Size: 0x0146 (326 bytes) (0x000000 - 0x000146) align 8 MaxSize: 0x0146
struct FReflection_Parameters
{ 
	FString                                            EnableReflection_13_F507403D4F7A1CD01010E9A6F04587D1;       // 0x0000   (0x0010)  
	FString                                            EnableHeightFoginReflection_14_55A2CFFF4743A2FC0CC28AA5CADADFE3; // 0x0010   (0x0010)  
	FString                                            ReflectionSortMaterials_15_F69BD15C43B20A76600613BAD71A11DA; // 0x0020   (0x0010)  
	FString                                            EnableReflectionShadow_16_5CE4011344B44695A51F5DBB57926695; // 0x0030   (0x0010)  
	FString                                            ReflectionMaxRoughness_17_094F87434A4CA2EF78446385751DA11D; // 0x0040   (0x0010)  
	FString                                            ReflectionScreenPercentage_18_872B98A040695DB673733C87B039D4B0; // 0x0050   (0x0010)  
	FString                                            ReflectionMaxRayDistance_19_A0E3D15745EF03C12C73608BB897FCE5; // 0x0060   (0x0010)  
	FString                                            ReflectionMinRayDistance_20_6D12EE6E48A718B502DB929484EDBBD6; // 0x0070   (0x0010)  
	FString                                            ReflectionMaxBounces_21_81B8DA514D86E8694A43E79814041786;   // 0x0080   (0x0010)  
	FString                                            RTEnableReflectionCapture_23_8F28E19F49F2BCB9FBAA08B7A899CAB2; // 0x0090   (0x0010)  
	FString                                            EnableReflectionTestRoughness_24_0883B4184EE12DA29A43128E2D24FB4F; // 0x00A0   (0x0010)  
	FString                                            ReflectionSkyLightContribution_38_63342FE64D2759F0A072E992588DDE8D; // 0x00B0   (0x0010)  
	FString                                            ReflectionsRoughnessMultiplier_28_2DEC260341D957BF835DF89E8D4C715D; // 0x00C0   (0x0010)  
	FString                                            HybridReflection_29_A64910B440FDB3B211D60DA855E15843;       // 0x00D0   (0x0010)  
	FString                                            ReflectedTranslucencyMode_34_E9B43ED24B20AF57BCCD4B82D4074935; // 0x00E0   (0x0010)  
	FString                                            ReflectedTranslucencyMaxBounces_35_30526005497114ACA32D4CA9E09190A3; // 0x00F0   (0x0010)  
	FString                                            ReflectedTranslucencyTransmissionThreshold_37_BBC1DF1646E5DD7F79B8F5B29C5CDBB3; // 0x0100   (0x0010)  
	FString                                            ReflectionsEnableTwoSidedGeometry_41_C7FA80DB463DAB7DB041F09EC67DD112; // 0x0110   (0x0010)  
	FString                                            MaxUnderCoatBounces_62_688C1C5C4D17318FDDC5ED80073BA4D7;    // 0x0120   (0x0010)  
	FString                                            ReflectionSPP_44_FED6320D427E492AF4204489AD917995;          // 0x0130   (0x0010)  
	float                                              AdaptiveScreenResFactor_56_7728DE014FEF7D04C7DEBEA4CF6B19C2; // 0x0140   (0x0004)  
	bool                                               EnableAdaptiveReflectionBasedOnPlayerSpeed_57_0A7CA6C542DEEE71FFAC1C983313AD2A; // 0x0144   (0x0001)  
	bool                                               EnableAdaptiveScreenRes_58_15C3863D4619C6022DE09E86F10B590C; // 0x0145   (0x0001)  
};

/// Struct /Game/BP_RTX/RT_Parameter_Data/Shadow_Parameters.Shadow_Parameters
/// Size: 0x0140 (320 bytes) (0x000000 - 0x000140) align 8 MaxSize: 0x0140
struct FShadow_Parameters
{ 
	FString                                            EnableShadow_16_42E314114DF52DDA1F746998967D0D69;           // 0x0000   (0x0010)  
	FString                                            EvaluateMaterialsinShadow_17_728A35714A2D2CE2BB782C87F8EDF254; // 0x0010   (0x0010)  
	FString                                            ShadowEnableTwoSidedGeometry_18_E4F0F479419BF5462B8CA386C52019CC; // 0x0020   (0x0010)  
	FString                                            ShadowSPP_19_222F23EF4151A938C7D877B0D90F3255;              // 0x0030   (0x0010)  
	FString                                            ShadowMaxBatchSize_20_09D0D43240AC1FBF762B93B6F820E785;     // 0x0040   (0x0010)  
	FString                                            ShadowDenoiserMaxBatchSize_21_A4511D17403925B727BEE6BE72A868F8; // 0x0050   (0x0010)  
	FString                                            LightingMaxLights_41_643709A54544E52A183ECDAA837B3061;      // 0x0060   (0x0010)  
	FString                                            LightingMaxShadowLights_42_716E70A946B8BBDF783446AB9ABA3D59; // 0x0070   (0x0010)  
	FString                                            ShadowMaxLights_46_75FCFFF242CF12D287843C9E5CDF62FC;        // 0x0080   (0x0010)  
	FString                                            ShadowMaxDenoisedLights_45_4EDE192249341D55A1E221B3B183F92B; // 0x0090   (0x0010)  
	FString                                            LightingMissShader_43_36150C4340C63D4EA70CC59D59D625C1;     // 0x00A0   (0x0010)  
	FString                                            ShadowsSupportTranslucency_51_569C8F954113622FFC40F5B0308485F2; // 0x00B0   (0x0010)  
	FString                                            SupportLightFunction_28_D1DCAE474964239358DA70AD73C35624;   // 0x00C0   (0x0010)  
	FString                                            SharpShadowFallBack_29_532FB35B4DC6112D35D8B385FBB81C94;    // 0x00D0   (0x0010)  
	FString                                            LightChannelSupport_30_0503581A4B0BF0D27C6B678786D81196;    // 0x00E0   (0x0010)  
	FString                                            Per_LightShadowCasting_32_119CD88B437AD7F2A694BEBFF9DAFFF7; // 0x00F0   (0x0010)  
	FString                                            EnableVolumetricShadow_35_DF3AEAC645A1EE6B1D68F1A045EB5ACF; // 0x0100   (0x0010)  
	FString                                            ShadowPrioritizeDirectional_48_C64F92114FE29497B9473794A6BA8BAA; // 0x0110   (0x0010)  
	FString                                            ShadowsLODTransitionStart_55_B585CA5A498907A43C39F28E62A9DE7D; // 0x0120   (0x0010)  
	FString                                            ShadowsLODTransitionEnd_56_3F000C594E373DD3FA646A87A2925A7D; // 0x0130   (0x0010)  
};

/// Struct /Game/BP_RTX/RT_Parameter_Data/SkyLight_Parameters.SkyLight_Parameters
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FSkyLight_Parameters
{ 
	FString                                            GIEvalSkyLight_8_88EC9CBF40393B83BEDA22BB48A2B4CD;          // 0x0000   (0x0010)  
	FString                                            EnableRTSkyLight_9_EEE1CC6A47D2E47508784A94A05AA80F;        // 0x0010   (0x0010)  
	FString                                            EnableSkyLightDenoiser_10_640DC6C94DF5030E3BDF69AA07720EEF; // 0x0020   (0x0010)  
	FString                                            SkyLightEnableTwoSidedGeomtry_11_E5C3B38F423C10ECE9207C8B9031AEB7; // 0x0030   (0x0010)  
	FString                                            SkyLightMaxRayDistance_12_5399303843881FD92F8337BF45C730CF; // 0x0040   (0x0010)  
	FString                                            SkyLightSPP_13_2D3640B64C7D0103C812CB8533C87237;            // 0x0050   (0x0010)  
	FString                                            SkyLightEnableMaterials_14_302F08D048720E799343BDB5D30E9479; // 0x0060   (0x0010)  
	FString                                            FinalGatherSkyLightIntensity_18_E1A9004942D802B91427469CF88EB838; // 0x0070   (0x0010)  
	FString                                            FinalGatherSkyLightIndirectMultiplier_19_C397D4FF42305F4582CEEF8263868ABF; // 0x0080   (0x0010)  
	FString                                            SkyLightScreenPercentage_23_59F3CFEA490786A67F0AB6B16115C3E4; // 0x0090   (0x0010)  
};

/// Struct /Game/BP_RTX/RT_Parameter_Data/Translucency_Parameters.Translucency_Parameters
/// Size: 0x01A0 (416 bytes) (0x000000 - 0x0001A0) align 8 MaxSize: 0x01A0
struct FTranslucency_Parameters
{ 
	FString                                            EnableTranslucensy_14_332FFB204F3B00FC3DF8B59EF91BC71D;     // 0x0000   (0x0010)  
	FString                                            EnableTranslucencyHeightFog_15_29C6A9F440F6A207C82331939CE3DCE1; // 0x0010   (0x0010)  
	FString                                            EnableTranslucencyShadows_16_7B2E0CEB49AD9CB4A47AF9A9D3EF8AA7; // 0x0020   (0x0010)  
	FString                                            EnableRefraction_17_72999B57452A259A9A901A8E6E51A5D9;       // 0x0030   (0x0010)  
	FString                                            TranslucencyMaxRoughness_18_C605CB7A47F91F3AE88A7D9AA0CBB46A; // 0x0040   (0x0010)  
	FString                                            TranslucencyMaxRayDistance_55_26924FA44157F01CA1C304982260E721; // 0x0050   (0x0010)  
	FString                                            MaxRefractionRays_19_69E233FA4710FF92A41E4D8558ED5CF9;      // 0x0060   (0x0010)  
	FString                                            EnableHybridTranslucency_20_5ECF7E16453EC6CA4CC6028C3BB79614; // 0x0070   (0x0010)  
	FString                                            HybridTranslucencyDepthThreshold_30_61E75A7D4A65B629146E84BC73B58997; // 0x0080   (0x0010)  
	FString                                            HybridTranslucencyLayers_22_8DDEED384B9ED866CB1E5CA52763214D; // 0x0090   (0x0010)  
	FString                                            HybridTranslucencySupport_29_C17F37CC42441163312E479B70C01372; // 0x00A0   (0x0010)  
	FString                                            TranslucencyMask_24_275B41B2429D609EA96B8E97E439F67B;       // 0x00B0   (0x0010)  
	FString                                            HalfResHybridTranslucency_25_D59DF97446A9ACBCE0A0D38E1D882003; // 0x00C0   (0x0010)  
	FString                                            TranslucencyRoughnessMultiplier_26_E69F7D934C950B2F98443380A571C42E; // 0x00D0   (0x0010)  
	FString                                            ExcludeTranslucentsFromShadows_31_9A3A2D7F4B9E4A5336D34EAD1B7B8A7B; // 0x00E0   (0x0010)  
	FString                                            TranslucencyEnableAbsorption_34_37C4F9144AB560F9FB3B05A728807878; // 0x00F0   (0x0010)  
	FString                                            EnableTranslucencyinReflection_49_D325071D4CF3B5B35F33BBB3AE61E7A4; // 0x0100   (0x0010)  
	FString                                            RefractionBackgroundSampleFallback_37_B38E1670400FA3C5B25342BD27FBF35A; // 0x0110   (0x0010)  
	FString                                            TranslucencyIgnoreBackfaceOpacity_40_7B969FFF4087B1E90A0919AA274F255F; // 0x0120   (0x0010)  
	FString                                            AbsorptionForceShadingOnOpaqueObjects_43_A8CE4EE74EA5CDDD66AF47945083DC33; // 0x0130   (0x0010)  
	FString                                            EnableRayTracedDOF_52_F50B2D7E435260144400BC9C33E543D4;     // 0x0140   (0x0010)  
	FString                                            HalfResRefraction_46_43CE013F48A027E289B1A39918778984;      // 0x0150   (0x0010)  
	FString                                            TransmissionSamplingDistanceCulling_58_E8A0028642F5FB00EECF69A77D2A5B08; // 0x0160   (0x0010)  
	FString                                            TranslucencyAtmosphericFog_61_8EFF0D5845C3931C602D29B079FE27B3; // 0x0170   (0x0010)  
	FString                                            ExcludeDecals_64_6BE0964448E668CC8DA021B3D3259B8C;          // 0x0180   (0x0010)  
	FString                                            TranslucencyEnableGI_67_42DF1541445C7578A3CF0A89373AD133;   // 0x0190   (0x0010)  
};

/// Struct /Game/BP_RTX/RT_Parameter_Data/Water_Caustics_Parameters.Water_Caustics_Parameters
/// Size: 0x01E1 (481 bytes) (0x000000 - 0x0001E1) align 8 MaxSize: 0x01E1
struct FWater_Caustics_Parameters
{ 
	FString                                            WaterCausticsType_10_22E9DB2B44EBA1DDFCD669BFC4F5A2C3;      // 0x0000   (0x0010)  
	FString                                            WaterCausticsBufferScale_11_4891F1C1433E69AD7AE583B26CB8B74F; // 0x0010   (0x0010)  
	FString                                            WaterCausticsRefractiveIntensity_12_84E7671A4C1BAFCE5A912E8B9D549C41; // 0x0020   (0x0010)  
	FString                                            WaterCausticsReflectiveIntensity_13_A8FAED5646D272D518F78DBF2EC3FFF3; // 0x0030   (0x0010)  
	FString                                            WaterCausticsFresnelBaseReflectFraction_23_28BA9C044FF67107897D8E983B459690; // 0x0040   (0x0010)  
	FString                                            WaterCausticsMapSizeX_24_0DD69E77451F51BCA32B16A0B271FC6C;  // 0x0050   (0x0010)  
	FString                                            WaterCausticsMapSizeY_25_5995CB844729B31103795D9CACF0CF3E;  // 0x0060   (0x0010)  
	FString                                            WaterCausticsNumDenoisePasses_26_5FDE5D6146B749E8B952F89B329F61B2; // 0x0070   (0x0010)  
	FString                                            WaterCausticsMinReflectionRayDistance_27_45097790417E6E7F541B1382E5A0C9AA; // 0x0080   (0x0010)  
	FString                                            WaterCausticsMaxReflectionRayDistance_28_67F4322D4AF3ACF0CD8B2895974A115B; // 0x0090   (0x0010)  
	FString                                            WaterCausticsMinRefractionRayDistance_29_E9C281484F546DBCAF69C5A7866FD0B2; // 0x00A0   (0x0010)  
	FString                                            WaterCausticsMaxRefractionRayDistance_30_3B0E91A54E9D4AD25FCDD18B13E2A9EB; // 0x00B0   (0x0010)  
	FString                                            WaterCausticsRectLightTemporalWeight_32_6729E6744212BBA47350FDB9D6743EF6; // 0x00C0   (0x0010)  
	FString                                            WaterCausticsRefractBackFaceCullingThreshold_33_7EC526954286067A65F5C7A1F3F7A71A; // 0x00D0   (0x0010)  
	FString                                            WaterCausticsReflectBackFaceCullingThreshold_36_16DE876A4587F2728ED6C2BA6FD54C98; // 0x00E0   (0x0010)  
	FString                                            WaterCausticsMapCascades_48_C35E153E4FD3359DF08CED8FD8911D43; // 0x00F0   (0x0010)  
	FString                                            WaterCausticsMapCascadeScale_47_59ED42134835FEEF0A3586B7A60856F1; // 0x0100   (0x0010)  
	FString                                            WaterCausticsMapForceLevel_51_4FE7525E45C9D08EA0F96D8388F5BFF6; // 0x0110   (0x0010)  
	FString                                            WaterCausticsShowPhoton_46_B3215C834DEFE8DC5DA4A6A8F292D91D; // 0x0120   (0x0010)  
	FString                                            WaterCausticsPhotonScale_54_1E5BBCA644165B132F85C78276BB702F; // 0x0130   (0x0010)  
	FString                                            WaterCausticsCascadeSamplingOffsetX_61_2719694E494E4EB376BB5DAF45921638; // 0x0140   (0x0010)  
	FString                                            WaterCausticsCascadeSamplingOffsetY_63_98AADADD45FD2ED6D43DC0ADDEC6C53A; // 0x0150   (0x0010)  
	FString                                            WaterCausticsCascadeSamplingUVScaleX_64_3141DE974ACBDD26008C3E8B72619B44; // 0x0160   (0x0010)  
	FString                                            WaterCausticsCascadeSamplingUVScaley_65_A879211B4B47DBCDA46BE4A1A4A3F47D; // 0x0170   (0x0010)  
	FString                                            UseSceneLightDir_68_7B35F1EA4CDF9B9D16F068BF886419AF;       // 0x0180   (0x0010)  
	FString                                            WaterCausticsReflectiveNormalScale_72_8E7BE7F040BCAA5474D9C58BBEB1FEC7; // 0x0190   (0x0010)  
	FString                                            WaterCausticsRefractiveNormalScale_75_11BB4FDF492EC51614A427BC18CFF5B0; // 0x01A0   (0x0010)  
	FString                                            WaterCausticsViewCulling_80_F608F01E4E5DAAE17E8D7B935E7F82DC; // 0x01B0   (0x0010)  
	FString                                            WaterCausticsEnableShadowRay_85_CD902F404203091E5DF9C5842CB306D6; // 0x01C0   (0x0010)  
	FString                                            WaterCausticsShadowRayMaxDistance_86_3F679E3E4D7596B2D597F59985A5ABEE; // 0x01D0   (0x0010)  
	bool                                               UseAdaptiveWaterCausticsMapResolution_77_A47539CC44ACAA1663FE2FBB69A479C6; // 0x01E0   (0x0001)  
};

/// Struct /Game/BP_RTX/RT_Parameter_Data/Mesh_Caustics_Parameters.Mesh_Caustics_Parameters
/// Size: 0x0160 (352 bytes) (0x000000 - 0x000160) align 8 MaxSize: 0x0160
struct FMesh_Caustics_Parameters
{ 
	FString                                            EnableMeshCaustics_11_EF17A54E4000730673FD55AFA7851310;     // 0x0000   (0x0010)  
	FString                                            MeshCausticsResolution_12_8CBAF5AD40511B86FFECDBBE10551070; // 0x0010   (0x0010)  
	FString                                            MeshCausticsBufferScale_13_82AC6AEE4DE3DABA0E6EF8AFC173099A; // 0x0020   (0x0010)  
	FString                                            MeshCausticsTemporalStrength_14_53019FA5437B781E8F3DCDA3EAA12347; // 0x0030   (0x0010)  
	FString                                            MeshCausticsJitter_15_A7EFA23F493F73491A338F833DD71740;     // 0x0040   (0x0010)  
	FString                                            MeshCausticsEnableDispersion_16_D1059E664DB569A0DCD2868ED0E410C0; // 0x0050   (0x0010)  
	FString                                            MeshCausticsTranslucentReflectionMode_57_234A3311428BB4FD6186D485A258D216; // 0x0060   (0x0010)  
	FString                                            MeshCausticsMaxTraceDepth_18_E5DFC534448262757F618C984430031B; // 0x0070   (0x0010)  
	FString                                            MeshCausticsAdaptivePhotonSize_19_75A570FD45DDB1FFB198EAB522F1327C; // 0x0080   (0x0010)  
	FString                                            MeshCausticsEnableTemporalFilter_20_B10DF55042CC5EB4BBBD3C9029E72D25; // 0x0090   (0x0010)  
	FString                                            MeshCausticsAdaptiveSmooth_26_B237A3464D57ACD60A63CEB0E381F8AF; // 0x00A0   (0x0010)  
	FString                                            MeshCausticsAdaptiveUpdateSpeed_27_EBAA130A425D904E6219BC847C5D4E7E; // 0x00B0   (0x0010)  
	FString                                            MeshCausticsAdaptiveVarianceGain_28_D612A8F64E9A6BB74AD5D0A9FC85241B; // 0x00C0   (0x0010)  
	FString                                            MeshCausticsFixedLight_29_9C6912304FA41791E112799EF9B09B26; // 0x00D0   (0x0010)  
	FString                                            MeshCausticsMaxIntensity_30_0571085B49EBB70A2506CC898A54B72E; // 0x00E0   (0x0010)  
	FString                                            MeshCausticsSoftCausticsSample_34_23B75C3A4673EC4C06FB7380A1AFC77B; // 0x00F0   (0x0010)  
	FString                                            MeshCausticsEnableAdvancedSoftCaustics_40_EF539D7E4B254D3FF7354499EA1ADA17; // 0x0100   (0x0010)  
	FString                                            MeshCausticsMidCullColorThreshold_46_603884CE4A61EB477D7D2C82EFE3E844; // 0x0110   (0x0010)  
	FString                                            MeshCausticsFinalCullColorThreshold_47_ADE4A81B4FC53161666873B6CE1C1E16; // 0x0120   (0x0010)  
	FString                                            MeshCausticsIntensity_50_8E96F81D40BC087613695CBE1946AD28;  // 0x0130   (0x0010)  
	FString                                            MeshCausticsMaxRayDistance_53_7A78E57D4BA078EDB6381A846432F21C; // 0x0140   (0x0010)  
	FString                                            MeshCausticsTemporalColorTolerance_56_C9E20A13401A4696C5D960922F2ED319; // 0x0150   (0x0010)  
};

/// Struct /Game/BP_RTX/RT_Parameter_Data/DLSS_Parameters.DLSS_Parameters
/// Size: 0x00C2 (194 bytes) (0x000000 - 0x0000C2) align 8 MaxSize: 0x00C2
struct FDLSS_Parameters
{ 
	FString                                            Sharpness_2_35A008B94CA19E1D1157B4BEE3664DDE;               // 0x0000   (0x0010)  
	FString                                            BinarySearchOrder_40_4A5F178D4DE20524A960E091A6F15B02;      // 0x0010   (0x0010)  
	FString                                            Quality_12_75728F6C402DDAD6D3C83CB43D125F96;                // 0x0020   (0x0010)  
	FString                                            DLSSEnable_39_13810A794156D8CEAF3F7AA78AD87AA4;             // 0x0030   (0x0010)  
	FString                                            ReflectionsEnableTAABeforeDLSS_18_071A129344D3B6A5FF8552901A8CF67F; // 0x0040   (0x0010)  
	FString                                            TranslucencyEnableTAABeforeDLSS_21_7E947A1D40EA2E0800C722881BCA5577; // 0x0050   (0x0010)  
	FString                                            ParticleReapplyTAAafterDLSS_38_01F8076E42227DCDF5D7C6BD22E42432; // 0x0060   (0x0010)  
	FString                                            FramesUntilFeatureDesturction_41_146725084183D5B8875F03B095965D14; // 0x0070   (0x0010)  
	FString                                            DilateMotionVectors_42_75D786CA4852F3DA32BBD5A03196AD6A;    // 0x0080   (0x0010)  
	FString                                            ReflectionsTAA_43_E0D798E64EE07DDF022D31A71335EFD3;         // 0x0090   (0x0010)  
	FString                                            WaterReflectionsTAA_44_71C49B4347FB341069C65DA4366CAC3E;    // 0x00A0   (0x0010)  
	FString                                            EnableTAAonHalfResSceneColor_50_EF7398014F02FE46C180BE992A28791C; // 0x00B0   (0x0010)  
	bool                                               EnableRTXParameterOverridebasedonDLSSstatus_23_2DE4E6914407E08718FD63BA1D1DAB85; // 0x00C0   (0x0001)  
	bool                                               EnableOverrideFromUI_25_C5AF676740D5D4F66196FAB79DF9A06B;   // 0x00C1   (0x0001)  
};

/// Struct /Game/BP_RTX/RT_Parameter_Data/RTX_PostProcess_Settings.RTX_PostProcess_Settings
/// Size: 0x0689 (1673 bytes) (0x000000 - 0x000689) align 16 MaxSize: 0x0689
struct FRTX_PostProcess_Settings
{ 
	FPostProcessSettings                               RTXPostProcessSettings_2_F5F7708F4E83FAC705A16388FF06FB09;  // 0x0000   (0x0680)  
	float                                              PostProcessWeight_5_1188286A49AC49349A20F8AA6289C4A3;       // 0x0680   (0x0004)  
	float                                              RTXPostProcessPriority_11_2871BEF94A8E61F2640AA297CA1481AE; // 0x0684   (0x0004)  
	bool                                               Unbound_7_7B0858BA4548AD147D2D9083D9CB5FF7;                 // 0x0688   (0x0001)  
};

/// Struct /Game/BP_RTX/RT_Parameter_Data/DataType_Support.DataType_Support
/// Size: 0x0160 (352 bytes) (0x000000 - 0x000160) align 8 MaxSize: 0x0160
struct FDataType_Support
{ 
	FString                                            GeometryCache_10_60EECC624C693307F620398174DF4F78;          // 0x0000   (0x0010)  
	FString                                            StaticMeshes_11_CACE76324DB5B67A06E6BEA8FF4E9134;           // 0x0010   (0x0010)  
	FString                                            StaticMeshesEnableWPO_12_589C74A44AC1367B026C8FBFA0045D44;  // 0x0020   (0x0010)  
	FString                                            StaticMeshesEnableWPOCulling_13_177AB1CE478B5AC40D24B791225322F5; // 0x0030   (0x0010)  
	FString                                            StaticMeshesWPOCullingRadius_14_7BC25E7A4F0CD3C0F47B229B1D9DE927; // 0x0040   (0x0010)  
	FString                                            SkeletalMeshes_15_FFC240AB4BED120417AAC69C70124464;         // 0x0050   (0x0010)  
	FString                                            ProceduralMeshes_21_36D63E534869DBA1D0DA50A3A01827F9;       // 0x0060   (0x0010)  
	FString                                            NiagaraMeshes_16_10268FE94CA08A6B9573EAA7DADE014B;          // 0x0070   (0x0010)  
	FString                                            NiagaraRibbons_17_B678BB4940773D107B14C2B4BE0095AF;         // 0x0080   (0x0010)  
	FString                                            NiagaraSprites_18_05F8C4284E3C7649FE73ECB35F94FF34;         // 0x0090   (0x0010)  
	FString                                            GIDirectionalLight_32_5B36A08C409AF3F6263AACA6D880682A;     // 0x00A0   (0x0010)  
	FString                                            GIPointLight_33_41CEC9CA46598970DF2B9EAF7240AF95;           // 0x00B0   (0x0010)  
	FString                                            GIRectLight_34_570E86F346FC898FB785DD9FA7B2CF69;            // 0x00C0   (0x0010)  
	FString                                            GISkyLight_35_24DDF0D54211597D5928CC8279BA2613;             // 0x00D0   (0x0010)  
	FString                                            GISpotLight_36_CA892FD74CE62E79DAC8EEA2A6942E59;            // 0x00E0   (0x0010)  
	FString                                            ShadowsDirectional_37_158E74B94A0A037FDCB9DFA5ECF785C7;     // 0x00F0   (0x0010)  
	FString                                            ShadowsPoint_38_EE2768114270CF56FBC5729DD8063DAA;           // 0x0100   (0x0010)  
	FString                                            ShadowsRect_39_ED1CE4DC401687164B18EC89981A8854;            // 0x0110   (0x0010)  
	FString                                            ShadowsSpot_40_8D4FCC9F4561A67CCCE062B526D23A3C;            // 0x0120   (0x0010)  
	FString                                            EnableRayTracingCulling_45_51CAE4294A3A6F89F3317988496B5AA1; // 0x0130   (0x0010)  
	FString                                            RayTracingCullingAngle_46_372A6A3140C6BFC4B19E7AAEBA56C702; // 0x0140   (0x0010)  
	FString                                            RayTracingCullingRadius_47_E8E0FA1F4B28E157718787819ACC7807; // 0x0150   (0x0010)  
};

/// Struct /Game/BP_RTX/RT_Parameter_Data/RTXDI_NRD_Parameters.RTXDI_NRD_Parameters
/// Size: 0x0021 (33 bytes) (0x000000 - 0x000021) align 8 MaxSize: 0x0021
struct FRTXDI_NRD_Parameters
{ 
	FString                                            EnableRTXDI_2_4F8A33CA4FCF7AF48FE0CDA92D2DD102;             // 0x0000   (0x0010)  
	FString                                            EnableNRD_4_6B53E8CA4BF8DF54FFB76EA8EFB6A046;               // 0x0010   (0x0010)  
	TEnumAsByte<RTXDI_Quality>                         RTXDIQuality_7_0F125504431980E0E4E1EFAE5DDAB930;            // 0x0020   (0x0001)  
};

/// Struct /Game/BP_RTX/RT_Presets/VeryHigh.VeryHigh
/// Size: 0x1598 (5528 bytes) (0x000000 - 0x001598) align 16 MaxSize: 0x1598
struct FVeryHigh
{ 
	FAO_Parameters                                     AO_Parameters_290_3E5B873044B400F2CBFF3483EB9004F7;         // 0x0000   (0x0050)  
	FDebug_Parameters                                  Debug_Parameters_292_8E67B1AD44F1BFE4AA4994BD260F4698;      // 0x0050   (0x0141)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0191   (0x0007)  MISSED
	FGI_Parameters                                     GI_Parameters_294_5991E68E41477E3C67FBD9B532E65D7C;         // 0x0198   (0x0230)  
	FLandscapeAndFoliage_Parameter                     LandscapeAndFoliage_Parameter_296_549A67554ED7BBC8A7326BAF09E10B94; // 0x03C8   (0x00E0)  
	FReflection_Parameters                             Reflection_Parameters_298_A167D2B1452F751451C99E818E7C05E1; // 0x04A8   (0x0146)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x05EE   (0x0002)  MISSED
	FShadow_Parameters                                 Shadow_Parameters_301_DD835C514AFAE876A87A799983D13684;     // 0x05F0   (0x0140)  
	FSkyLight_Parameters                               SkyLight_Parameters_303_98539BB9469068C9E259929CDEF4B9FC;   // 0x0730   (0x00A0)  
	FTranslucency_Parameters                           Translucency_Parameters_307_94092BBE40B82EF55D80B3858FEEA625; // 0x07D0   (0x01A0)  
	FWater_Caustics_Parameters                         WaterCausticsParameters_285_DD002BE7481CEB47274E64932E70EC39; // 0x0970   (0x01E1)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0B51   (0x0007)  MISSED
	FMesh_Caustics_Parameters                          MeshCausticsParameters_288_16B34040457BC7049BEFDE94A384AB2A; // 0x0B58   (0x0160)  
	FDLSS_Parameters                                   DLSSParameters_310_DF713E70420757F4C67C13BBDC8E3A9E;        // 0x0CB8   (0x00C2)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x0D7A   (0x0006)  MISSED
	FRTX_PostProcess_Settings                          RTXPostProcessSettings_316_D6EED34F42FA2FE3B39C158FD4BF7119; // 0x0D80   (0x0689)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x1409   (0x0007)  MISSED
	FDataType_Support                                  DataTypeSupport_319_CD2540CC44DAD7284D977B822E41DA90;       // 0x1410   (0x0160)  
	FRTXDI_NRD_Parameters                              RTXDINRDParameters_322_12ABD63D4E4FA246A008DB8456D3CEA8;    // 0x1570   (0x0021)  
	unsigned char                                      UnknownData05_7[0x7];                                       // 0x1591   (0x0007)  MISSED
};

/// Struct /Game/BP_RTX/RT_Presets/High.High
/// Size: 0x1598 (5528 bytes) (0x000000 - 0x001598) align 16 MaxSize: 0x1598
struct FHigh
{ 
	FAO_Parameters                                     AO_Parameters_290_3E5B873044B400F2CBFF3483EB9004F7;         // 0x0000   (0x0050)  
	FDebug_Parameters                                  Debug_Parameters_292_8E67B1AD44F1BFE4AA4994BD260F4698;      // 0x0050   (0x0141)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0191   (0x0007)  MISSED
	FGI_Parameters                                     GI_Parameters_294_5991E68E41477E3C67FBD9B532E65D7C;         // 0x0198   (0x0230)  
	FLandscapeAndFoliage_Parameter                     LandscapeAndFoliage_Parameter_296_549A67554ED7BBC8A7326BAF09E10B94; // 0x03C8   (0x00E0)  
	FReflection_Parameters                             Reflection_Parameters_298_A167D2B1452F751451C99E818E7C05E1; // 0x04A8   (0x0146)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x05EE   (0x0002)  MISSED
	FShadow_Parameters                                 Shadow_Parameters_301_DD835C514AFAE876A87A799983D13684;     // 0x05F0   (0x0140)  
	FSkyLight_Parameters                               SkyLight_Parameters_303_98539BB9469068C9E259929CDEF4B9FC;   // 0x0730   (0x00A0)  
	FTranslucency_Parameters                           Translucency_Parameters_307_94092BBE40B82EF55D80B3858FEEA625; // 0x07D0   (0x01A0)  
	FWater_Caustics_Parameters                         WaterCausticsParameters_285_DD002BE7481CEB47274E64932E70EC39; // 0x0970   (0x01E1)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0B51   (0x0007)  MISSED
	FMesh_Caustics_Parameters                          MeshCausticsParameters_288_16B34040457BC7049BEFDE94A384AB2A; // 0x0B58   (0x0160)  
	FDLSS_Parameters                                   DLSSParameters_310_AD9A759A4B351C95067BE9BC4F8BAB51;        // 0x0CB8   (0x00C2)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x0D7A   (0x0006)  MISSED
	FRTX_PostProcess_Settings                          RTXPostProcessSettings_316_B2D33BEB48B4C7919E389880C9AC3F93; // 0x0D80   (0x0689)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x1409   (0x0007)  MISSED
	FDataType_Support                                  DataTypeSupport_319_1FA8C49A4FABAC900D28DCB3A3D948FB;       // 0x1410   (0x0160)  
	FRTXDI_NRD_Parameters                              RTXDINRDParameters_322_1987EB5F4D50A4EF4A040EBC205AEA8B;    // 0x1570   (0x0021)  
	unsigned char                                      UnknownData05_7[0x7];                                       // 0x1591   (0x0007)  MISSED
};

/// Struct /Game/BP_RTX/RT_Presets/Medium.Medium
/// Size: 0x1598 (5528 bytes) (0x000000 - 0x001598) align 16 MaxSize: 0x1598
struct FMedium
{ 
	FAO_Parameters                                     AO_Parameters_290_3E5B873044B400F2CBFF3483EB9004F7;         // 0x0000   (0x0050)  
	FDebug_Parameters                                  Debug_Parameters_292_8E67B1AD44F1BFE4AA4994BD260F4698;      // 0x0050   (0x0141)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0191   (0x0007)  MISSED
	FGI_Parameters                                     GI_Parameters_294_5991E68E41477E3C67FBD9B532E65D7C;         // 0x0198   (0x0230)  
	FLandscapeAndFoliage_Parameter                     LandscapeAndFoliage_Parameter_296_549A67554ED7BBC8A7326BAF09E10B94; // 0x03C8   (0x00E0)  
	FReflection_Parameters                             Reflection_Parameters_298_A167D2B1452F751451C99E818E7C05E1; // 0x04A8   (0x0146)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x05EE   (0x0002)  MISSED
	FShadow_Parameters                                 Shadow_Parameters_301_DD835C514AFAE876A87A799983D13684;     // 0x05F0   (0x0140)  
	FSkyLight_Parameters                               SkyLight_Parameters_303_98539BB9469068C9E259929CDEF4B9FC;   // 0x0730   (0x00A0)  
	FTranslucency_Parameters                           Translucency_Parameters_307_94092BBE40B82EF55D80B3858FEEA625; // 0x07D0   (0x01A0)  
	FWater_Caustics_Parameters                         WaterCausticsParameters_285_DD002BE7481CEB47274E64932E70EC39; // 0x0970   (0x01E1)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0B51   (0x0007)  MISSED
	FMesh_Caustics_Parameters                          MeshCausticsParameters_288_16B34040457BC7049BEFDE94A384AB2A; // 0x0B58   (0x0160)  
	FDLSS_Parameters                                   DLSSParameters_310_3A6775704CF641DFEEC2478C297B7D69;        // 0x0CB8   (0x00C2)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x0D7A   (0x0006)  MISSED
	FRTX_PostProcess_Settings                          RTXPostProcessSettings_316_268786DF438462588539E5BAF602ED34; // 0x0D80   (0x0689)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x1409   (0x0007)  MISSED
	FDataType_Support                                  DataTypeSupport_319_F3DA97704E7BA941885A888135560397;       // 0x1410   (0x0160)  
	FRTXDI_NRD_Parameters                              RTXDINRDParameters_322_677780954E483D61F4E045B92097C72E;    // 0x1570   (0x0021)  
	unsigned char                                      UnknownData05_7[0x7];                                       // 0x1591   (0x0007)  MISSED
};

/// Struct /Game/BP_RTX/RT_Presets/Low.Low
/// Size: 0x1598 (5528 bytes) (0x000000 - 0x001598) align 16 MaxSize: 0x1598
struct FLow
{ 
	FAO_Parameters                                     AO_Parameters_290_3E5B873044B400F2CBFF3483EB9004F7;         // 0x0000   (0x0050)  
	FDebug_Parameters                                  Debug_Parameters_292_8E67B1AD44F1BFE4AA4994BD260F4698;      // 0x0050   (0x0141)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0191   (0x0007)  MISSED
	FGI_Parameters                                     GI_Parameters_294_5991E68E41477E3C67FBD9B532E65D7C;         // 0x0198   (0x0230)  
	FLandscapeAndFoliage_Parameter                     LandscapeAndFoliage_Parameter_296_549A67554ED7BBC8A7326BAF09E10B94; // 0x03C8   (0x00E0)  
	FReflection_Parameters                             Reflection_Parameters_298_A167D2B1452F751451C99E818E7C05E1; // 0x04A8   (0x0146)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x05EE   (0x0002)  MISSED
	FShadow_Parameters                                 Shadow_Parameters_301_DD835C514AFAE876A87A799983D13684;     // 0x05F0   (0x0140)  
	FSkyLight_Parameters                               SkyLight_Parameters_303_98539BB9469068C9E259929CDEF4B9FC;   // 0x0730   (0x00A0)  
	FTranslucency_Parameters                           Translucency_Parameters_307_94092BBE40B82EF55D80B3858FEEA625; // 0x07D0   (0x01A0)  
	FWater_Caustics_Parameters                         WaterCausticsParameters_285_DD002BE7481CEB47274E64932E70EC39; // 0x0970   (0x01E1)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0B51   (0x0007)  MISSED
	FMesh_Caustics_Parameters                          MeshCausticsParameters_288_16B34040457BC7049BEFDE94A384AB2A; // 0x0B58   (0x0160)  
	FDLSS_Parameters                                   DLSSParameters_310_126107EB4BCF56CDC4C5B1A3FA2B8964;        // 0x0CB8   (0x00C2)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x0D7A   (0x0006)  MISSED
	FRTX_PostProcess_Settings                          RTXPostProcessSettings_316_C236E627421415551C877990D27B9167; // 0x0D80   (0x0689)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x1409   (0x0007)  MISSED
	FDataType_Support                                  DataTypeSupport_319_F81A2A3D466037A56125EE9FAD06E4C6;       // 0x1410   (0x0160)  
	FRTXDI_NRD_Parameters                              RTXDINRDParameters_322_B6BB100E454A58ECDAE0A787577725BF;    // 0x1570   (0x0021)  
	unsigned char                                      UnknownData05_7[0x7];                                       // 0x1591   (0x0007)  MISSED
};

/// Struct /Game/BP_RTX/RT_Presets/Film.Film
/// Size: 0x1598 (5528 bytes) (0x000000 - 0x001598) align 16 MaxSize: 0x1598
struct FFilm
{ 
	FAO_Parameters                                     AO_Parameters_290_3E5B873044B400F2CBFF3483EB9004F7;         // 0x0000   (0x0050)  
	FDebug_Parameters                                  Debug_Parameters_292_8E67B1AD44F1BFE4AA4994BD260F4698;      // 0x0050   (0x0141)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0191   (0x0007)  MISSED
	FGI_Parameters                                     GI_Parameters_294_5991E68E41477E3C67FBD9B532E65D7C;         // 0x0198   (0x0230)  
	FLandscapeAndFoliage_Parameter                     LandscapeAndFoliage_Parameter_296_549A67554ED7BBC8A7326BAF09E10B94; // 0x03C8   (0x00E0)  
	FReflection_Parameters                             Reflection_Parameters_298_A167D2B1452F751451C99E818E7C05E1; // 0x04A8   (0x0146)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x05EE   (0x0002)  MISSED
	FShadow_Parameters                                 Shadow_Parameters_301_DD835C514AFAE876A87A799983D13684;     // 0x05F0   (0x0140)  
	FSkyLight_Parameters                               SkyLight_Parameters_303_98539BB9469068C9E259929CDEF4B9FC;   // 0x0730   (0x00A0)  
	FTranslucency_Parameters                           Translucency_Parameters_307_94092BBE40B82EF55D80B3858FEEA625; // 0x07D0   (0x01A0)  
	FWater_Caustics_Parameters                         WaterCausticsParameters_285_DD002BE7481CEB47274E64932E70EC39; // 0x0970   (0x01E1)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0B51   (0x0007)  MISSED
	FMesh_Caustics_Parameters                          MeshCausticsParameters_288_16B34040457BC7049BEFDE94A384AB2A; // 0x0B58   (0x0160)  
	FDLSS_Parameters                                   DLSSParameters_310_1FF18AE34628A2E7E3B9D1A3B90943A2;        // 0x0CB8   (0x00C2)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x0D7A   (0x0006)  MISSED
	FRTX_PostProcess_Settings                          RTXPostProcessSettings_316_87CE5EF04E423A2573F0718792B9B575; // 0x0D80   (0x0689)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x1409   (0x0007)  MISSED
	FDataType_Support                                  DataTypeSupport_319_6F9BCE734E712BCA043CC89EFAC55DE2;       // 0x1410   (0x0160)  
	FRTXDI_NRD_Parameters                              RTXDINRDParameters_322_D78759234E0EAF7E7B76298405CD9090;    // 0x1570   (0x0021)  
	unsigned char                                      UnknownData05_7[0x7];                                       // 0x1591   (0x0007)  MISSED
};

/// Struct /Game/BP_RTX/RT_Presets/Disable.Disable
/// Size: 0x1598 (5528 bytes) (0x000000 - 0x001598) align 16 MaxSize: 0x1598
struct FDisable
{ 
	FAO_Parameters                                     AO_Parameters_290_3E5B873044B400F2CBFF3483EB9004F7;         // 0x0000   (0x0050)  
	FDebug_Parameters                                  Debug_Parameters_292_8E67B1AD44F1BFE4AA4994BD260F4698;      // 0x0050   (0x0141)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0191   (0x0007)  MISSED
	FGI_Parameters                                     GI_Parameters_294_5991E68E41477E3C67FBD9B532E65D7C;         // 0x0198   (0x0230)  
	FLandscapeAndFoliage_Parameter                     LandscapeAndFoliage_Parameter_296_549A67554ED7BBC8A7326BAF09E10B94; // 0x03C8   (0x00E0)  
	FReflection_Parameters                             Reflection_Parameters_298_A167D2B1452F751451C99E818E7C05E1; // 0x04A8   (0x0146)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x05EE   (0x0002)  MISSED
	FShadow_Parameters                                 Shadow_Parameters_301_DD835C514AFAE876A87A799983D13684;     // 0x05F0   (0x0140)  
	FSkyLight_Parameters                               SkyLight_Parameters_303_98539BB9469068C9E259929CDEF4B9FC;   // 0x0730   (0x00A0)  
	FTranslucency_Parameters                           Translucency_Parameters_307_94092BBE40B82EF55D80B3858FEEA625; // 0x07D0   (0x01A0)  
	FWater_Caustics_Parameters                         WaterCausticsParameters_285_DD002BE7481CEB47274E64932E70EC39; // 0x0970   (0x01E1)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0B51   (0x0007)  MISSED
	FMesh_Caustics_Parameters                          MeshCausticsParameters_288_16B34040457BC7049BEFDE94A384AB2A; // 0x0B58   (0x0160)  
	FDLSS_Parameters                                   DLSSParameters_310_D94EF156432B307677D00680EBDF73B8;        // 0x0CB8   (0x00C2)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x0D7A   (0x0006)  MISSED
	FRTX_PostProcess_Settings                          RTXPostProcessSettings_316_96E0621447558B5C83E4DE968475A475; // 0x0D80   (0x0689)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x1409   (0x0007)  MISSED
	FDataType_Support                                  DataTypeSupport_319_ED1531394D2DB4B27AA1D6ACE79150FD;       // 0x1410   (0x0160)  
	FRTXDI_NRD_Parameters                              RTXDINRDParameters_322_DD5495E64AD77E8B265497AC9B6C5184;    // 0x1570   (0x0021)  
	unsigned char                                      UnknownData05_7[0x7];                                       // 0x1591   (0x0007)  MISSED
};

/// Struct /Game/BP_RTX/RT_Presets/Xbox.Xbox
/// Size: 0x1598 (5528 bytes) (0x000000 - 0x001598) align 16 MaxSize: 0x1598
struct FXbox
{ 
	FAO_Parameters                                     AO_Parameters_290_3E5B873044B400F2CBFF3483EB9004F7;         // 0x0000   (0x0050)  
	FDebug_Parameters                                  Debug_Parameters_292_8E67B1AD44F1BFE4AA4994BD260F4698;      // 0x0050   (0x0141)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0191   (0x0007)  MISSED
	FGI_Parameters                                     GI_Parameters_294_5991E68E41477E3C67FBD9B532E65D7C;         // 0x0198   (0x0230)  
	FLandscapeAndFoliage_Parameter                     LandscapeAndFoliage_Parameter_296_549A67554ED7BBC8A7326BAF09E10B94; // 0x03C8   (0x00E0)  
	FReflection_Parameters                             Reflection_Parameters_298_A167D2B1452F751451C99E818E7C05E1; // 0x04A8   (0x0146)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x05EE   (0x0002)  MISSED
	FShadow_Parameters                                 Shadow_Parameters_301_DD835C514AFAE876A87A799983D13684;     // 0x05F0   (0x0140)  
	FSkyLight_Parameters                               SkyLight_Parameters_303_98539BB9469068C9E259929CDEF4B9FC;   // 0x0730   (0x00A0)  
	FTranslucency_Parameters                           Translucency_Parameters_307_94092BBE40B82EF55D80B3858FEEA625; // 0x07D0   (0x01A0)  
	FWater_Caustics_Parameters                         WaterCausticsParameters_285_DD002BE7481CEB47274E64932E70EC39; // 0x0970   (0x01E1)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0B51   (0x0007)  MISSED
	FMesh_Caustics_Parameters                          MeshCausticsParameters_288_16B34040457BC7049BEFDE94A384AB2A; // 0x0B58   (0x0160)  
	FDLSS_Parameters                                   DLSSParameters_310_7E4DC0424931B31C9DF0779DC71B119B;        // 0x0CB8   (0x00C2)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x0D7A   (0x0006)  MISSED
	FRTX_PostProcess_Settings                          RTXPostProcessSettings_316_79EC232848BAB964A67DDB9C114B7FDA; // 0x0D80   (0x0689)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x1409   (0x0007)  MISSED
	FDataType_Support                                  DataTypeSupport_319_494E11E145D7CB4FE9D0638B520247FA;       // 0x1410   (0x0160)  
	FRTXDI_NRD_Parameters                              RTXDINRDParameters_322_E13DA7974F6B55109174A6965220CDC3;    // 0x1570   (0x0021)  
	unsigned char                                      UnknownData05_7[0x7];                                       // 0x1591   (0x0007)  MISSED
};

/// Struct /Game/BP_RTX/RT_Presets/PS5.PS5
/// Size: 0x1598 (5528 bytes) (0x000000 - 0x001598) align 16 MaxSize: 0x1598
struct FPS5
{ 
	FAO_Parameters                                     AO_Parameters_290_3E5B873044B400F2CBFF3483EB9004F7;         // 0x0000   (0x0050)  
	FDebug_Parameters                                  Debug_Parameters_292_8E67B1AD44F1BFE4AA4994BD260F4698;      // 0x0050   (0x0141)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0191   (0x0007)  MISSED
	FGI_Parameters                                     GI_Parameters_294_5991E68E41477E3C67FBD9B532E65D7C;         // 0x0198   (0x0230)  
	FLandscapeAndFoliage_Parameter                     LandscapeAndFoliage_Parameter_296_549A67554ED7BBC8A7326BAF09E10B94; // 0x03C8   (0x00E0)  
	FReflection_Parameters                             Reflection_Parameters_298_A167D2B1452F751451C99E818E7C05E1; // 0x04A8   (0x0146)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x05EE   (0x0002)  MISSED
	FShadow_Parameters                                 Shadow_Parameters_301_DD835C514AFAE876A87A799983D13684;     // 0x05F0   (0x0140)  
	FSkyLight_Parameters                               SkyLight_Parameters_303_98539BB9469068C9E259929CDEF4B9FC;   // 0x0730   (0x00A0)  
	FTranslucency_Parameters                           Translucency_Parameters_307_94092BBE40B82EF55D80B3858FEEA625; // 0x07D0   (0x01A0)  
	FWater_Caustics_Parameters                         WaterCausticsParameters_285_DD002BE7481CEB47274E64932E70EC39; // 0x0970   (0x01E1)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0B51   (0x0007)  MISSED
	FMesh_Caustics_Parameters                          MeshCausticsParameters_288_16B34040457BC7049BEFDE94A384AB2A; // 0x0B58   (0x0160)  
	FDLSS_Parameters                                   DLSSParameters_310_4A3CCCF54093EB9F67DCA6BAF9FDEA66;        // 0x0CB8   (0x00C2)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x0D7A   (0x0006)  MISSED
	FRTX_PostProcess_Settings                          RTXPostProcessSettings_316_78467B544CA2D05E4E2F1AA0BF710D08; // 0x0D80   (0x0689)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x1409   (0x0007)  MISSED
	FDataType_Support                                  DataTypeSupport_319_4D6E102D4F70C0E8215E079F8EF87059;       // 0x1410   (0x0160)  
	FRTXDI_NRD_Parameters                              RTXDINRDParameters_322_67F50E2C436988B4811C718FD8D23669;    // 0x1570   (0x0021)  
	unsigned char                                      UnknownData05_7[0x7];                                       // 0x1591   (0x0007)  MISSED
};

/// Class /Game/BP_RTX/BP_RT_Quality_Parameters.BP_RT_Quality_Parameters_C
/// Size: 0xC500 (50432 bytes) (0x000220 - 0x00C500) align 16 MaxSize: 0xC500
class ABP_RT_Quality_Parameters_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0220   (0x0008)  
	class UPostProcessComponent*                       RTX_PostProcess;                                            // 0x0228   (0x0008)  
	class UBoxComponent*                               Box;                                                        // 0x0230   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0238   (0x0008)  
	FString                                            Enable_Reflection;                                          // 0x0240   (0x0010)  
	FString                                            Enable_AO;                                                  // 0x0250   (0x0010)  
	FString                                            Enable_Shadow;                                              // 0x0260   (0x0010)  
	FString                                            Enable_Translucensy;                                        // 0x0270   (0x0010)  
	FString                                            Enable_Translucency_Height_Fog;                             // 0x0280   (0x0010)  
	FString                                            Enable_Translucency_Shadows;                                // 0x0290   (0x0010)  
	FString                                            Enable_Refraction;                                          // 0x02A0   (0x0010)  
	FString                                            Translucency_Max_Roughness;                                 // 0x02B0   (0x0010)  
	FString                                            Translucency_Max_Ray_Distance_;                             // 0x02C0   (0x0010)  
	FString                                            Max_Refraction_Rays;                                        // 0x02D0   (0x0010)  
	FString                                            Evaluate_Materials_in_Shadow;                               // 0x02E0   (0x0010)  
	FString                                            Shadow_Enable_Two_Sided_Geometry;                           // 0x02F0   (0x0010)  
	FString                                            Enable_Height_Fog_in_Reflection;                            // 0x0300   (0x0010)  
	FString                                            Reflection_Sort_Materials;                                  // 0x0310   (0x0010)  
	FString                                            Enable_Reflection_Shadow;                                   // 0x0320   (0x0010)  
	FString                                            Reflection_Max_Roughness;                                   // 0x0330   (0x0010)  
	FString                                            Use_Texture_LOD;                                            // 0x0340   (0x0010)  
	FString                                            Reflection_Screen_Percentage;                               // 0x0350   (0x0010)  
	FVector                                            Box_Reletive_Scale;                                         // 0x0360   (0x000C)  
	bool                                               Hidden_in_Game;                                             // 0x036C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x036D   (0x0003)  MISSED
	FString                                            Normal_Bias;                                                // 0x0370   (0x0010)  
	FString                                            Debug_Force_Opaque;                                         // 0x0380   (0x0010)  
	FString                                            Debug_Force_Full_Build;                                     // 0x0390   (0x0010)  
	FString                                            Debug_Disable_Triangle_Cull;                                // 0x03A0   (0x0010)  
	FString                                            Debug_Force_Build_Mode;                                     // 0x03B0   (0x0010)  
	FString                                            Reflection_Max_Ray_Distance;                                // 0x03C0   (0x0010)  
	FString                                            Reflection_Min_Ray_Distance;                                // 0x03D0   (0x0010)  
	FString                                            Reflection_Max_Bounces;                                     // 0x03E0   (0x0010)  
	FString                                            Reflection_SPP;                                             // 0x03F0   (0x0010)  
	FString                                            Shadow_SPP;                                                 // 0x0400   (0x0010)  
	FString                                            Enable_Reflection_Denoiser;                                 // 0x0410   (0x0010)  
	FString                                            Enable_Shadow_Denoiser;                                     // 0x0420   (0x0010)  
	TEnumAsByte<Enum_RT_Quality_Preset>                Enum_RT_QualitySwitch;                                      // 0x0430   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0431   (0x0007)  MISSED
	FString                                            GI_type;                                                    // 0x0438   (0x0010)  
	FString                                            Enable_GI_Denoiser;                                         // 0x0448   (0x0010)  
	FString                                            GI_EvalSkyLight;                                            // 0x0458   (0x0010)  
	FString                                            GI_MaxBounce;                                               // 0x0468   (0x0010)  
	FString                                            GI_MaxRayDistance;                                          // 0x0478   (0x0010)  
	FString                                            GI_SPP;                                                     // 0x0488   (0x0010)  
	FString                                            GI_Screen_Percentage;                                       // 0x0498   (0x0010)  
	FString                                            GI_UseRussianRoulette_;                                     // 0x04A8   (0x0010)  
	FString                                            Enable_RT_SkyLight;                                         // 0x04B8   (0x0010)  
	FString                                            Enable_SkyLight_Denoiser;                                   // 0x04C8   (0x0010)  
	FString                                            SkyLight_Enable_Two_Sided_Geomtry;                          // 0x04D8   (0x0010)  
	FString                                            SkyLight_MaxRay_Distance;                                   // 0x04E8   (0x0010)  
	FString                                            SkyLight_SPP;                                               // 0x04F8   (0x0010)  
	FString                                            Reflection_Enable_Materials;                                // 0x0508   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0518   (0x0008)  MISSED
	FVeryHigh                                          Very_High;                                                  // 0x0520   (0x1598)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x1AB8   (0x0008)  MISSED
	FHigh                                              High;                                                       // 0x1AC0   (0x1598)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x3058   (0x0008)  MISSED
	FMedium                                            Medium;                                                     // 0x3060   (0x1598)  
	unsigned char                                      UnknownData05_6[0x8];                                       // 0x45F8   (0x0008)  MISSED
	FLow                                               Low;                                                        // 0x4600   (0x1598)  
	unsigned char                                      UnknownData06_6[0x8];                                       // 0x5B98   (0x0008)  MISSED
	FFilm                                              Film;                                                       // 0x5BA0   (0x1598)  
	unsigned char                                      UnknownData07_6[0x8];                                       // 0x7138   (0x0008)  MISSED
	FDisable                                           Disable;                                                    // 0x7140   (0x1598)  
	unsigned char                                      UnknownData08_6[0x8];                                       // 0x86D8   (0x0008)  MISSED
	FXbox                                              Xbox;                                                       // 0x86E0   (0x1598)  
	unsigned char                                      UnknownData09_6[0x8];                                       // 0x9C78   (0x0008)  MISSED
	FPS5                                               PS5;                                                        // 0x9C80   (0x1598)  
	unsigned char                                      UnknownData10_6[0x8];                                       // 0xB218   (0x0008)  MISSED
	FString                                            RT_Enable_Reflection_Capture_;                              // 0xB220   (0x0010)  
	FString                                            Enable_Shader_Cache;                                        // 0xB230   (0x0010)  
	FString                                            AO_Enable_Material;                                         // 0xB240   (0x0010)  
	FString                                            AO_Enable_Two_Sided_Geometry;                               // 0xB250   (0x0010)  
	FString                                            PSO_Cache_Size;                                             // 0xB260   (0x0010)  
	FString                                            Enable_Landscape_Detect_Texture_Streaming;                  // 0xB270   (0x0010)  
	FString                                            Enable_Landscape_LOD_UpdateEveryFrame;                      // 0xB280   (0x0010)  
	FString                                            Enable_Instanced_Static_Mesh;                               // 0xB290   (0x0010)  
	FString                                            Enable_Instanced_Static_Meshes_Culling;                     // 0xB2A0   (0x0010)  
	FString                                            Instanced_Static_Meshes_Culling_Radius;                     // 0xB2B0   (0x0010)  
	FString                                            Shadow_Max_Batch_Size;                                      // 0xB2C0   (0x0010)  
	FString                                            GI_Diffuse_Threshold;                                       // 0xB2D0   (0x0010)  
	FString                                            Shadow_Denoiser_Max_Batch_Size;                             // 0xB2E0   (0x0010)  
	FString                                            Enable_Landscape_In_RT;                                     // 0xB2F0   (0x0010)  
	FString                                            RTX_Switch;                                                 // 0xB300   (0x0010)  
	FString                                            Enable_Reflection_Test_Roughness;                           // 0xB310   (0x0010)  
	float                                              UseShaderWPO;                                               // 0xB320   (0x0004)  
	unsigned char                                      UnknownData11_6[0x4];                                       // 0xB324   (0x0004)  MISSED
	FString                                            Reflection_Sky_Light_Contribution;                          // 0xB328   (0x0010)  
	FString                                            GI_Sort_Materials;                                          // 0xB338   (0x0010)  
	FString                                            GI_Enable_Two_Sided_Geometry;                               // 0xB348   (0x0010)  
	FString                                            Final_Gather_Distance;                                      // 0xB358   (0x0010)  
	FString                                            Enable_Hybrid_Translucency;                                 // 0xB368   (0x0010)  
	FString                                            Hybrid_Translucency_DepthThreshold_;                        // 0xB378   (0x0010)  
	FString                                            Hybrid_Translucency_Layers;                                 // 0xB388   (0x0010)  
	FString                                            Hybrid_Translucency_Support;                                // 0xB398   (0x0010)  
	FString                                            Lighting_Max_Lights;                                        // 0xB3A8   (0x0010)  
	FString                                            Lighting_Max_Shadow_Lights;                                 // 0xB3B8   (0x0010)  
	FString                                            Lighting_Miss_Shader;                                       // 0xB3C8   (0x0010)  
	FString                                            Shadow_Max_Lights;                                          // 0xB3D8   (0x0010)  
	FString                                            Shadow_Max_Denoised_Lights_;                                // 0xB3E8   (0x0010)  
	FString                                            Translucency_Mask_;                                         // 0xB3F8   (0x0010)  
	FString                                            SkyLight_Enable_Materials;                                  // 0xB408   (0x0010)  
	FString                                            _Half_Res_Hybrid_Translucency;                              // 0xB418   (0x0010)  
	FString                                            Shadows_Support_Translucency;                               // 0xB428   (0x0010)  
	FString                                            Support_Light_Function;                                     // 0xB438   (0x0010)  
	FString                                            Sharp_Shadow_Fall_Back;                                     // 0xB448   (0x0010)  
	FString                                            Light_Channel_Support;                                      // 0xB458   (0x0010)  
	FString                                            Translucency_Roughness_Multiplier_;                         // 0xB468   (0x0010)  
	FString                                            Reflections_Roughness_Multiplier_;                          // 0xB478   (0x0010)  
	FString                                            Hybrid_Reflection;                                          // 0xB488   (0x0010)  
	FString                                            Per_Light_Shadow_Casting;                                   // 0xB498   (0x0010)  
	FString                                            ParallelMeshBatchSize;                                      // 0xB4A8   (0x0010)  
	FString                                            BuildRayTracingMeshForCaustics;                             // 0xB4B8   (0x0010)  
	FString                                            Exclude_Translucents_From_Shadows_;                         // 0xB4C8   (0x0010)  
	FString                                            Auto_Instance_;                                             // 0xB4D8   (0x0010)  
	FString                                            Batch_Materials_;                                           // 0xB4E8   (0x0010)  
	FString                                            Parallel_Mesh_Batch_Setup_;                                 // 0xB4F8   (0x0010)  
	FString                                            NonBlockingPipelineCreation_;                               // 0xB508   (0x0010)  
	FString                                            Enable_Mesh_Caustics;                                       // 0xB518   (0x0010)  
	FString                                            Water_Caustics_Type;                                        // 0xB528   (0x0010)  
	FString                                            Water_Caustics_Refractive_Intensity_;                       // 0xB538   (0x0010)  
	FString                                            Water_Caustics_Reflective_Intensity_;                       // 0xB548   (0x0010)  
	FString                                            Water_Caustics_Fresnel_Base_Reflect_Fraction_;              // 0xB558   (0x0010)  
	FString                                            Water_Caustics_Map_Size_X__;                                // 0xB568   (0x0010)  
	FString                                            Water_Caustics_Map_Size_Y;                                  // 0xB578   (0x0010)  
	FString                                            Water_Caustics_Num_Denoise_Passes_;                         // 0xB588   (0x0010)  
	FString                                            Water_Caustics_Min_Reflection_Ray_Distance_;                // 0xB598   (0x0010)  
	FString                                            Water_Caustics_Max_Reflection_Ray_Distance_;                // 0xB5A8   (0x0010)  
	FString                                            Water_Caustics_Min_Refraction_Ray_Distance_;                // 0xB5B8   (0x0010)  
	FString                                            Water_Caustics_Max_Refraction_Ray_Distance_;                // 0xB5C8   (0x0010)  
	FString                                            Water_Caustics_Rect_Light_Temporal_Weight_;                 // 0xB5D8   (0x0010)  
	FString                                            Mesh_Caustics_Resolution_;                                  // 0xB5E8   (0x0010)  
	FString                                            Mesh_Caustics_Intensity_;                                   // 0xB5F8   (0x0010)  
	FString                                            Water_Caustics_Buffer_Scale_;                               // 0xB608   (0x0010)  
	FString                                            Mesh_Caustics_Buffer_Scale_;                                // 0xB618   (0x0010)  
	FString                                            Mesh_Caustics_Temporal_Strength_;                           // 0xB628   (0x0010)  
	FString                                            Mesh_Caustics_Jitter_;                                      // 0xB638   (0x0010)  
	FString                                            Mesh_Caustics_Enable_Dispersion_;                           // 0xB648   (0x0010)  
	FString                                            Mesh_Caustics_Translucent_Reflection_Mode;                  // 0xB658   (0x0010)  
	FString                                            Mesh_Caustics_Max_Trace_Depth_;                             // 0xB668   (0x0010)  
	FString                                            Mesh_Caustics_Adaptive_Photon_Size_;                        // 0xB678   (0x0010)  
	FString                                            Mesh_Caustics_Enable_Temporal_Filter_;                      // 0xB688   (0x0010)  
	FString                                            Mesh_Caustics_Adaptive_Smooth_;                             // 0xB698   (0x0010)  
	FString                                            Mesh_Caustics_Adaptive_Update_Speed_;                       // 0xB6A8   (0x0010)  
	FString                                            Mesh_Caustics_Adaptive_Variance_Gain_;                      // 0xB6B8   (0x0010)  
	FString                                            Mesh_Caustics_Fixed_Light_;                                 // 0xB6C8   (0x0010)  
	FString                                            Mesh_Caustics_Max_Intensity_;                               // 0xB6D8   (0x0010)  
	FString                                            Translucency_Enable_Absorption_;                            // 0xB6E8   (0x0010)  
	FString                                            Mesh_Caustics_Soft_Caustics_Sample_;                        // 0xB6F8   (0x0010)  
	FString                                            Water_Caustics_Refract_Back_Face_Culling_Threshold_;        // 0xB708   (0x0010)  
	FString                                            Water_Caustics_Reflect_Back_Face_Culling_Threshold_;        // 0xB718   (0x0010)  
	FString                                            Water_Caustics_Map_Cascades_;                               // 0xB728   (0x0010)  
	FString                                            Water_Caustics_Map_Force_Level_;                            // 0xB738   (0x0010)  
	FString                                            Water_Caustics_Map_Cascade_Scale_;                          // 0xB748   (0x0010)  
	FString                                            Water_Caustics_Show_Photon_;                                // 0xB758   (0x0010)  
	FString                                            Water_Caustics_Photon_Scale;                                // 0xB768   (0x0010)  
	FString                                            Mesh_Caustics_Enable_Advanced_Soft_Caustics_;               // 0xB778   (0x0010)  
	FString                                            Mesh_Caustics_Mid_Cull_Color_Threshold_;                    // 0xB788   (0x0010)  
	FString                                            Mesh_Caustics_Final_Cull_Color_Threshold_;                  // 0xB798   (0x0010)  
	FString                                            Water_Caustics_Cascade_Sampling_Offset_X_;                  // 0xB7A8   (0x0010)  
	FString                                            Water_Caustics_Cascade_Sampling_Offset_Y;                   // 0xB7B8   (0x0010)  
	FString                                            Water_Caustics_Cascade_Sampling_UVScale_X_;                 // 0xB7C8   (0x0010)  
	FString                                            Water_Caustics_Cascade_Sampling_UVScale_Y_;                 // 0xB7D8   (0x0010)  
	FString                                            Sharpness;                                                  // 0xB7E8   (0x0010)  
	FString                                            Binary_Search_Order;                                        // 0xB7F8   (0x0010)  
	FString                                            Quality;                                                    // 0xB808   (0x0010)  
	FString                                            DLSS_Enable;                                                // 0xB818   (0x0010)  
	FString                                            Reflections_Enable_TAA_Before_DLSS_;                        // 0xB828   (0x0010)  
	FString                                            Translucency_Enable_TAA_Before_DLSS_;                       // 0xB838   (0x0010)  
	FString                                            GI_Max_Light_Count_;                                        // 0xB848   (0x0010)  
	FString                                            AO_SPP;                                                     // 0xB858   (0x0010)  
	FString                                            GI_Denoiser_Type;                                           // 0xB868   (0x0010)  
	FString                                            GI_Apply_AO;                                                // 0xB878   (0x0010)  
	FString                                            GI_Denoiser_Color_Clamp;                                    // 0xB888   (0x0010)  
	FString                                            GI_Denoiser_Normal_Tolerance;                               // 0xB898   (0x0010)  
	FString                                            Spatial_Normal_Tolerance;                                   // 0xB8A8   (0x0010)  
	bool                                               Enable_RTX_Parameter_Override_based_on_DLSS_status;         // 0xB8B8   (0x0001)  
	bool                                               Enable_Override_From_UI;                                    // 0xB8B9   (0x0001)  
	unsigned char                                      UnknownData12_6[0x6];                                       // 0xB8BA   (0x0006)  MISSED
	FString                                            Particle_Reapply_TAA_after_DLSS;                            // 0xB8C0   (0x0010)  
	FString                                            Refraction_Background_Sample_Fallback_;                     // 0xB8D0   (0x0010)  
	FString                                            GI_Denoise_History_Length;                                  // 0xB8E0   (0x0010)  
	FString                                            Spatial_Filter_Iteration;                                   // 0xB8F0   (0x0010)  
	FString                                            Translucency_Ignore_Backface_Opacity;                       // 0xB900   (0x0010)  
	FString                                            Use_Scene_Light_Dir;                                        // 0xB910   (0x0010)  
	FString                                            Enable_Volumetric_Shadow;                                   // 0xB920   (0x0010)  
	FString                                            Absorption_Force_Shading_On_Opaque_Objects;                 // 0xB930   (0x0010)  
	FString                                            Mesh_Caustics_Max_Ray_Distance;                             // 0xB940   (0x0010)  
	FString                                            Mesh_Caustics_Temporal_Color_Tolerance;                     // 0xB950   (0x0010)  
	FString                                            GI_Diffuse_Boost;                                           // 0xB960   (0x0010)  
	FString                                            Reflected_Translucency_Mode;                                // 0xB970   (0x0010)  
	FString                                            Reflected_Translucency_Max_Bounces;                         // 0xB980   (0x0010)  
	FString                                            Reflected_Translucency_Transmission_Threshold;              // 0xB990   (0x0010)  
	FString                                            Half_Res_Refraction;                                        // 0xB9A0   (0x0010)  
	FString                                            AO_Denoiser_History_Convolution_Sample_Count_;              // 0xB9B0   (0x0010)  
	FString                                            Shadow_PrioritizeDirectional;                               // 0xB9C0   (0x0010)  
	FString                                            Frames_Until_Feature_Desturction;                           // 0xB9D0   (0x0010)  
	FString                                            Dilate_Motion_Vectors;                                      // 0xB9E0   (0x0010)  
	FString                                            Reflections_TAA;                                            // 0xB9F0   (0x0010)  
	FString                                            Water_Reflections_TAA;                                      // 0xBA00   (0x0010)  
	FString                                            Instanced_Static_Meshes_Culling_Angle;                      // 0xBA10   (0x0010)  
	FPostProcessSettings                               RTX_Post_Process_Settings;                                  // 0xBA20   (0x0680)  
	float                                              RTX_Post_Process_Weight;                                    // 0xC0A0   (0x0004)  
	unsigned char                                      UnknownData13_6[0x4];                                       // 0xC0A4   (0x0004)  MISSED
	FString                                            Enable_Translucency_in_Reflection;                          // 0xC0A8   (0x0010)  
	bool                                               Unbound;                                                    // 0xC0B8   (0x0001)  
	unsigned char                                      UnknownData14_6[0x3];                                       // 0xC0B9   (0x0003)  MISSED
	float                                              RTX_Post_Process_Priority;                                  // 0xC0BC   (0x0004)  
	FString                                            FinalGather_UseReservoirResampling;                         // 0xC0C0   (0x0010)  
	FString                                            GI_Metalic_Support;                                         // 0xC0D0   (0x0010)  
	FString                                            GI_Denoiser_Spatial_Filter_Type;                            // 0xC0E0   (0x0010)  
	FString                                            GI_Denoiser_Use_SH;                                         // 0xC0F0   (0x0010)  
	FString                                            GI_Denoiser_SH_Sharpness;                                   // 0xC100   (0x0010)  
	FString                                            ATrous_Depth_Tolerance_;                                    // 0xC110   (0x0010)  
	FString                                            Final_Gather_SkyLight_Intensity_;                           // 0xC120   (0x0010)  
	FString                                            Final_Gather_SkyLight_IndirectMultiplier_;                  // 0xC130   (0x0010)  
	FString                                            Instanced_Static_Meshes_Evaluate_WPO;                       // 0xC140   (0x0010)  
	FString                                            Instanced_Static_Meshes_Simulation_Count;                   // 0xC150   (0x0010)  
	FString                                            Shadow_UseBiasForSkipWPOEval;                               // 0xC160   (0x0010)  
	FString                                            Shadow_MaxBiasForInexactGeometry;                           // 0xC170   (0x0010)  
	FString                                            Enable_Ray_Tracing_Culling;                                 // 0xC180   (0x0010)  
	FString                                            Ray_Tracing_Culling_Angle;                                  // 0xC190   (0x0010)  
	FString                                            Ray_Tracing_Culling_Radius;                                 // 0xC1A0   (0x0010)  
	FString                                            Sky_Light_Screen_Percentage;                                // 0xC1B0   (0x0010)  
	FString                                            FinalGather_Iterations_;                                    // 0xC1C0   (0x0010)  
	FString                                            FinalGather_Filter_Width;                                   // 0xC1D0   (0x0010)  
	FString                                            GI_Firefly_Suppression;                                     // 0xC1E0   (0x0010)  
	FString                                            Reflections_EnableTwoSidedGeometry_;                        // 0xC1F0   (0x0010)  
	FString                                            GeometryCache;                                              // 0xC200   (0x0010)  
	FString                                            StaticMeshes;                                               // 0xC210   (0x0010)  
	FString                                            StaticMeshes_Enable_WPO_;                                   // 0xC220   (0x0010)  
	FString                                            StaticMeshes_Enable_WPO_Culling;                            // 0xC230   (0x0010)  
	FString                                            StaticMeshes_WPO_Culling_Radius_;                           // 0xC240   (0x0010)  
	FString                                            SkeletalMeshes_;                                            // 0xC250   (0x0010)  
	FString                                            ProceduralMeshes_;                                          // 0xC260   (0x0010)  
	FString                                            NiagaraMeshes;                                              // 0xC270   (0x0010)  
	FString                                            NiagaraRibbons;                                             // 0xC280   (0x0010)  
	FString                                            NiagaraSprites;                                             // 0xC290   (0x0010)  
	FString                                            GI_Directional_Light;                                       // 0xC2A0   (0x0010)  
	FString                                            GI_Point_Light;                                             // 0xC2B0   (0x0010)  
	FString                                            GI_Rect_Light;                                              // 0xC2C0   (0x0010)  
	FString                                            GI_Sky_Light;                                               // 0xC2D0   (0x0010)  
	FString                                            GI_Spot_Light;                                              // 0xC2E0   (0x0010)  
	FString                                            Shadows_Directional;                                        // 0xC2F0   (0x0010)  
	FString                                            Shadows_Point;                                              // 0xC300   (0x0010)  
	FString                                            Shadows_Rect;                                               // 0xC310   (0x0010)  
	FString                                            Shadows_Spot;                                               // 0xC320   (0x0010)  
	FString                                            AO_UseBiasForSkipWPOEval_;                                  // 0xC330   (0x0010)  
	FString                                            AO_MaxBiasForInexactGeometry_;                              // 0xC340   (0x0010)  
	FString                                            GI_Reservoir_Update_Interval_;                              // 0xC350   (0x0010)  
	FString                                            Final_Gather_Normal_From_Depth;                             // 0xC360   (0x0010)  
	FString                                            Final_Gather_Max_Reuse_Weight;                              // 0xC370   (0x0010)  
	FString                                            Final_Gather_Aggressive_Reservoir_Reuse_;                   // 0xC380   (0x0010)  
	FString                                            GIDenoise_ATrous_Filter_Width;                              // 0xC390   (0x0010)  
	FString                                            WaterCaustics_ReflectiveNormalScale_;                       // 0xC3A0   (0x0010)  
	FString                                            WaterCaustics_RefractiveNormalScale_;                       // 0xC3B0   (0x0010)  
	FString                                            Max_Under_Coat_Bounces_;                                    // 0xC3C0   (0x0010)  
	bool                                               Enable_Adaptive_Reflection_Based_On_Player_Speed;           // 0xC3D0   (0x0001)  
	unsigned char                                      UnknownData15_6[0x7];                                       // 0xC3D1   (0x0007)  MISSED
	FString                                            DynamicGeometryLastRenderTimeUpdateDistance_;               // 0xC3D8   (0x0010)  
	float                                              RTX_Tick_Interval;                                          // 0xC3E8   (0x0004)  
	float                                              Player_Max_Velocity_Threshold;                              // 0xC3EC   (0x0004)  
	float                                              Adaptive_Screen_Res_Factor;                                 // 0xC3F0   (0x0004)  
	float                                              Player_Current_Velocity;                                    // 0xC3F4   (0x0004)  
	bool                                               Enable_Adaptive_Screen_Res;                                 // 0xC3F8   (0x0001)  
	bool                                               Use_Adaptive_Water_Caustics_Map_Resolution;                 // 0xC3F9   (0x0001)  
	bool                                               Enable_Adaptive_RTX_Render;                                 // 0xC3FA   (0x0001)  
	unsigned char                                      UnknownData16_6[0x5];                                       // 0xC3FB   (0x0005)  MISSED
	FString                                            Enable_RTX_DI;                                              // 0xC400   (0x0010)  
	FString                                            Enable_NRD;                                                 // 0xC410   (0x0010)  
	TEnumAsByte<RTXDI_Quality>                         RTXDI_Quality;                                              // 0xC420   (0x0001)  
	unsigned char                                      UnknownData17_6[0x7];                                       // 0xC421   (0x0007)  MISSED
	FString                                            GI_Accumulate_Emissive;                                     // 0xC428   (0x0010)  
	FString                                            GI_MultiBounce_Interval;                                    // 0xC438   (0x0010)  
	bool                                               RTX_Gate;                                                   // 0xC448   (0x0001)  
	unsigned char                                      UnknownData18_6[0x7];                                       // 0xC449   (0x0007)  MISSED
	FString                                            Enable_Ray_Traced_DOF;                                      // 0xC450   (0x0010)  
	FString                                            Transmission_Sampling_Distance_Culling_;                    // 0xC460   (0x0010)  
	FString                                            Translucency_AtmosphericFog_;                               // 0xC470   (0x0010)  
	FString                                            Exclude_Decals_;                                            // 0xC480   (0x0010)  
	FString                                            Water_Caustics_View_Culling;                                // 0xC490   (0x0010)  
	FString                                            Shadows_LODTransitionStart_;                                // 0xC4A0   (0x0010)  
	FString                                            Shadows_LODTransitionEnd_;                                  // 0xC4B0   (0x0010)  
	FString                                            Water_Caustics_Enable_Shadow_Ray;                           // 0xC4C0   (0x0010)  
	FString                                            Water_Caustics_Shadow_Ray_Max_Distance;                     // 0xC4D0   (0x0010)  
	FString                                            Translucency_Enable_GI;                                     // 0xC4E0   (0x0010)  
	FString                                            HalfResSceneColor_TAA;                                      // 0xC4F0   (0x0010)  


	/// Functions
	// Function /Game/BP_RTX/BP_RT_Quality_Parameters.BP_RT_Quality_Parameters_C.Override Light Source Radius And Specular Scale
	// void OverrideLightSourceRadiusAndSpecularScale();                                                                        // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_RTX/BP_RT_Quality_Parameters.BP_RT_Quality_Parameters_C.Adaptive Reflection Based on Player Speed
	// void AdaptiveReflectionBasedonPlayerSpeed();                                                                             // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_RTX/BP_RT_Quality_Parameters.BP_RT_Quality_Parameters_C.Force Override RT Parameters  On Screen Res
	// void ForceOverrideRTParametersOnScreenRes();                                                                             // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_RTX/BP_RT_Quality_Parameters.BP_RT_Quality_Parameters_C.Force Override RT Parameters DLAA Quality
	// void ForceOverrideRTParametersDLAAQuality();                                                                             // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_RTX/BP_RT_Quality_Parameters.BP_RT_Quality_Parameters_C.Force Override RT Parameters  On AA Status
	// void ForceOverrideRTParametersOnAAStatus();                                                                              // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_RTX/BP_RT_Quality_Parameters.BP_RT_Quality_Parameters_C.SetText Display
	// void SetTextDisplay();                                                                                                   // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_RTX/BP_RT_Quality_Parameters.BP_RT_Quality_Parameters_C.Ini RT Parameter
	// void IniRTParameter(FRT_Parameters RT_Parameters);                                                                       // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_RTX/BP_RT_Quality_Parameters.BP_RT_Quality_Parameters_C.Construct RT Parameter
	// void ConstructRTParameter();                                                                                             // [0x148e900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_RTX/BP_RT_Quality_Parameters.BP_RT_Quality_Parameters_C.RT_Custom_Preset
	// void RT_Custom_Preset(FRT_Parameters RTX_Parameters);                                                                    // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_RTX/BP_RT_Quality_Parameters.BP_RT_Quality_Parameters_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x148e900] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_RTX/BP_RT_Quality_Parameters.BP_RT_Quality_Parameters_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x148e900] HasOutParms|BlueprintEvent 
	// Function /Game/BP_RTX/BP_RT_Quality_Parameters.BP_RT_Quality_Parameters_C.RTX_Force_Override
	// void RTX_Force_Override();                                                                                               // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_RTX/BP_RT_Quality_Parameters.BP_RT_Quality_Parameters_C.RTX_Switch_Preset_From_UI
	// void RTX_Switch_Preset_From_UI(TEnumAsByte<Enum_RT_Quality_Preset> RTXPreset);                                           // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_RTX/BP_RT_Quality_Parameters.BP_RT_Quality_Parameters_C.RTX_Switch_DLSS_From_UI
	// void RTX_Switch_DLSS_From_UI(FString AAMethod, FString DLSSQuality, bool EnableOverrideFromUI);                          // [0x148e900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_RTX/BP_RT_Quality_Parameters.BP_RT_Quality_Parameters_C.RTX_OFF
	// void RTX_OFF();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_RTX/BP_RT_Quality_Parameters.BP_RT_Quality_Parameters_C.RTX_LOW
	// void RTX_LOW();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_RTX/BP_RT_Quality_Parameters.BP_RT_Quality_Parameters_C.RTX_MID
	// void RTX_MID();                                                                                                          // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_RTX/BP_RT_Quality_Parameters.BP_RT_Quality_Parameters_C.RTX_HIGHT
	// void RTX_HIGHT();                                                                                                        // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_RTX/BP_RT_Quality_Parameters.BP_RT_Quality_Parameters_C.RTX_VERYHIGHT
	// void RTX_VERYHIGHT();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_RTX/BP_RT_Quality_Parameters.BP_RT_Quality_Parameters_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x148e900] Event|Protected|BlueprintEvent 
	// Function /Game/BP_RTX/BP_RT_Quality_Parameters.BP_RT_Quality_Parameters_C.DXR_ON
	// void DXR_ON();                                                                                                           // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_RTX/BP_RT_Quality_Parameters.BP_RT_Quality_Parameters_C.CloseRTXLight
	// void CloseRTXLight();                                                                                                    // [0x148e900] BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_RTX/BP_RT_Quality_Parameters.BP_RT_Quality_Parameters_C.ExecuteUbergraph_BP_RT_Quality_Parameters
	// void ExecuteUbergraph_BP_RT_Quality_Parameters(int32_t EntryPoint);                                                      // [0x148e900] Final|HasDefaults    
};

/// Struct /Game/BP_RTX/RT_Presets/RT_Parameters.RT_Parameters
/// Size: 0x1598 (5528 bytes) (0x000000 - 0x001598) align 16 MaxSize: 0x1598
struct FRT_Parameters
{ 
	FAO_Parameters                                     AO_Parameters_290_3E5B873044B400F2CBFF3483EB9004F7;         // 0x0000   (0x0050)  
	FDebug_Parameters                                  Debug_Parameters_292_8E67B1AD44F1BFE4AA4994BD260F4698;      // 0x0050   (0x0141)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0191   (0x0007)  MISSED
	FGI_Parameters                                     GI_Parameters_294_5991E68E41477E3C67FBD9B532E65D7C;         // 0x0198   (0x0230)  
	FLandscapeAndFoliage_Parameter                     LandscapeAndFoliage_Parameter_296_549A67554ED7BBC8A7326BAF09E10B94; // 0x03C8   (0x00E0)  
	FReflection_Parameters                             Reflection_Parameters_298_A167D2B1452F751451C99E818E7C05E1; // 0x04A8   (0x0146)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x05EE   (0x0002)  MISSED
	FShadow_Parameters                                 Shadow_Parameters_301_DD835C514AFAE876A87A799983D13684;     // 0x05F0   (0x0140)  
	FSkyLight_Parameters                               SkyLight_Parameters_303_98539BB9469068C9E259929CDEF4B9FC;   // 0x0730   (0x00A0)  
	FTranslucency_Parameters                           Translucency_Parameters_307_94092BBE40B82EF55D80B3858FEEA625; // 0x07D0   (0x01A0)  
	FWater_Caustics_Parameters                         WaterCausticsParameters_285_DD002BE7481CEB47274E64932E70EC39; // 0x0970   (0x01E1)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0B51   (0x0007)  MISSED
	FMesh_Caustics_Parameters                          MeshCausticsParameters_288_16B34040457BC7049BEFDE94A384AB2A; // 0x0B58   (0x0160)  
	FDLSS_Parameters                                   DLSSParameters_310_DF713E70420757F4C67C13BBDC8E3A9E;        // 0x0CB8   (0x00C2)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x0D7A   (0x0006)  MISSED
	FRTX_PostProcess_Settings                          RTXPostProcessSettings_316_D6EED34F42FA2FE3B39C158FD4BF7119; // 0x0D80   (0x0689)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x1409   (0x0007)  MISSED
	FDataType_Support                                  DataTypeSupport_319_A2EECCC8445A98F5802C0C8A6D0AF6F0;       // 0x1410   (0x0160)  
	FRTXDI_NRD_Parameters                              RTXDINRDParameters_322_4FF432304D555333653C01ACDEE2F6F9;    // 0x1570   (0x0021)  
	unsigned char                                      UnknownData05_7[0x7];                                       // 0x1591   (0x0007)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UBP_RTX_Parameter_Interface_C) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FAO_Parameters) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FDebug_Parameters) == 0x0141); // 321 bytes (0x000000 - 0x000141)
static_assert(sizeof(FGI_Parameters) == 0x0230); // 560 bytes (0x000000 - 0x000230)
static_assert(sizeof(FLandscapeAndFoliage_Parameter) == 0x00E0); // 224 bytes (0x000000 - 0x0000E0)
static_assert(sizeof(FReflection_Parameters) == 0x0146); // 326 bytes (0x000000 - 0x000146)
static_assert(sizeof(FShadow_Parameters) == 0x0140); // 320 bytes (0x000000 - 0x000140)
static_assert(sizeof(FSkyLight_Parameters) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FTranslucency_Parameters) == 0x01A0); // 416 bytes (0x000000 - 0x0001A0)
static_assert(sizeof(FWater_Caustics_Parameters) == 0x01E1); // 481 bytes (0x000000 - 0x0001E1)
static_assert(sizeof(FMesh_Caustics_Parameters) == 0x0160); // 352 bytes (0x000000 - 0x000160)
static_assert(sizeof(FDLSS_Parameters) == 0x00C2); // 194 bytes (0x000000 - 0x0000C2)
static_assert(sizeof(FRTX_PostProcess_Settings) == 0x0689); // 1673 bytes (0x000000 - 0x000689)
static_assert(sizeof(FDataType_Support) == 0x0160); // 352 bytes (0x000000 - 0x000160)
static_assert(sizeof(FRTXDI_NRD_Parameters) == 0x0021); // 33 bytes (0x000000 - 0x000021)
static_assert(sizeof(FVeryHigh) == 0x1598); // 5528 bytes (0x000000 - 0x001598)
static_assert(sizeof(FHigh) == 0x1598); // 5528 bytes (0x000000 - 0x001598)
static_assert(sizeof(FMedium) == 0x1598); // 5528 bytes (0x000000 - 0x001598)
static_assert(sizeof(FLow) == 0x1598); // 5528 bytes (0x000000 - 0x001598)
static_assert(sizeof(FFilm) == 0x1598); // 5528 bytes (0x000000 - 0x001598)
static_assert(sizeof(FDisable) == 0x1598); // 5528 bytes (0x000000 - 0x001598)
static_assert(sizeof(FXbox) == 0x1598); // 5528 bytes (0x000000 - 0x001598)
static_assert(sizeof(FPS5) == 0x1598); // 5528 bytes (0x000000 - 0x001598)
static_assert(sizeof(ABP_RT_Quality_Parameters_C) == 0xC500); // 50432 bytes (0x000220 - 0x00C500)
static_assert(sizeof(FRT_Parameters) == 0x1598); // 5528 bytes (0x000000 - 0x001598)
static_assert(offsetof(FAO_Parameters, EnableAO_4_402B20584E745E3C12F1B7AF7AA87854) == 0x0000);
static_assert(offsetof(FAO_Parameters, AOEnableMaterial_5_CC7E87EA478E0E374391B688FD73F056) == 0x0010);
static_assert(offsetof(FAO_Parameters, AOEnableTwoSideGeometry_6_C6D7C81641885C9241D31F8F7FDB1BFD) == 0x0020);
static_assert(offsetof(FAO_Parameters, AOSPP_10_2666C0F2490AC980438465B1B37CDDDC) == 0x0030);
static_assert(offsetof(FAO_Parameters, AODenoiserHistoryConvolutionSampleCount_13_50EF88A94EC31AFC5F939FA82C735B40) == 0x0040);
static_assert(offsetof(FDebug_Parameters, UseTextureLOD_14_736F43694CE688E814BF119F04BC733B) == 0x0000);
static_assert(offsetof(FDebug_Parameters, NormalBias_15_8A32C7694BB9E814F5B79080A92D92FF) == 0x0010);
static_assert(offsetof(FDebug_Parameters, DebugForceOpaque_16_C804BF5D4DD6036507DFF789796FA3D2) == 0x0020);
static_assert(offsetof(FDebug_Parameters, DebugForceFullBuild_17_6FDE0EFC4C1DDE4558BFADAFC250953A) == 0x0030);
static_assert(offsetof(FDebug_Parameters, DebugDisableTriangleCull_18_F6A8E355470D11CB81EAB8B19AC1C7A6) == 0x0040);
static_assert(offsetof(FDebug_Parameters, DebugForceBuildMode_19_AB2BFAEB44E7BB8A8D5CCA99F330B428) == 0x0050);
static_assert(offsetof(FDebug_Parameters, EnableReflectionDenoiser_20_12D307E54569217835508CB0D10A7977) == 0x0060);
static_assert(offsetof(FDebug_Parameters, EnableShadowDenoiser_21_66089741487B775E6A06E499B3D14354) == 0x0070);
static_assert(offsetof(FDebug_Parameters, EnableGIDenoiser_22_048015BE4ECE190E94DAC98FC43DBFBC) == 0x0080);
static_assert(offsetof(FDebug_Parameters, ReflectionEnableMaterials_23_49932A5A461504BB59F75CB217B2162E) == 0x0090);
static_assert(offsetof(FDebug_Parameters, EnableShaderCache_24_91CAA4D2402AA03FE3367E863E697898) == 0x00A0);
static_assert(offsetof(FDebug_Parameters, PSOCacheSize_25_571245E8420E18F1C3A1D6B9173D8898) == 0x00B0);
static_assert(offsetof(FDebug_Parameters, RTXSwitch_26_CF19681044E915DF3EE1B7A42E9CE572) == 0x00C0);
static_assert(offsetof(FDebug_Parameters, ParallelMeshBatchSize_66_DD9B821743F54A691D43C8A24A9BE556) == 0x00D8);
static_assert(offsetof(FDebug_Parameters, BuildRayTracingMeshForCaustics_68_BDEEC918403656B6270A94A80C0DE5DB) == 0x00E8);
static_assert(offsetof(FDebug_Parameters, ParallelMeshBatchSetup_56_86CA6095450FFE588738FC85344DC2FD) == 0x00F8);
static_assert(offsetof(FDebug_Parameters, BatchMaterials_57_ED68CBEF4934516852BC45B44504F0C1) == 0x0108);
static_assert(offsetof(FDebug_Parameters, NonBlockingPipelineCreation_79_48AF81E64271EABF0A7934900DCD8A49) == 0x0118);
static_assert(offsetof(FDebug_Parameters, DynamicGeometryLastRenderTimeUpdateDistance_82_85FDD70C4ECBD20FDB4138A3032A7F47) == 0x0128);
static_assert(offsetof(FGI_Parameters, GItype_13_FEFC00D7428DF3F2EA0F9097A9353822) == 0x0000);
static_assert(offsetof(FGI_Parameters, GIMaxBounce_14_9C271AFE40D4E53E4469F8A0B0726358) == 0x0010);
static_assert(offsetof(FGI_Parameters, GIMaxRayDistance_15_AD8A4E9844AE373D5012FB9DACC25082) == 0x0020);
static_assert(offsetof(FGI_Parameters, GISPP_16_1CA01D6E4CD423E3952E13A05D8EDCF5) == 0x0030);
static_assert(offsetof(FGI_Parameters, GIScreenPercentage_17_51DD44EE4074DBDCF36076B79D47F981) == 0x0040);
static_assert(offsetof(FGI_Parameters, GIUseRussianRoulette_18_03B4F71A41F8B1991B5C9093866E7C8D) == 0x0050);
static_assert(offsetof(FGI_Parameters, GIDiffuseThreshold_19_4C91F5304F3E0F86F2DE64BE0555EBFC) == 0x0060);
static_assert(offsetof(FGI_Parameters, GISortMaterials_21_FB1F0EBB431301AE76B7CEB2D0B466E8) == 0x0070);
static_assert(offsetof(FGI_Parameters, GIEnableTwoSidedGeometry_22_F38481B04AA8C5C6C1B93087D28F17CE) == 0x0080);
static_assert(offsetof(FGI_Parameters, FinalGatherDistance_23_06E7E9F0467A1E30FB9C0989EBD3E956) == 0x0090);
static_assert(offsetof(FGI_Parameters, GIMaxLightCount_26_5B5538634898D5C09E00E0B76188BF5D) == 0x00A0);
static_assert(offsetof(FGI_Parameters, GIDenoiserType_32_B2E8F2D04E72BB68627D6EBCA107C472) == 0x00B0);
static_assert(offsetof(FGI_Parameters, GIApplyAO_33_1BA016C145BE87B51CFBDDBEB7FBEE0D) == 0x00C0);
static_assert(offsetof(FGI_Parameters, GIDenoiserColorClamp_34_116D4CA9441D9B54F1CC09A4773FC856) == 0x00D0);
static_assert(offsetof(FGI_Parameters, GIDenoiserNormalTolerance_35_B6026F734DEA82ADC79D678F82ED05EA) == 0x00E0);
static_assert(offsetof(FGI_Parameters, GIDenoiseHistoryLength_41_6444C26341627DFA45693FBF3E6C18CF) == 0x00F0);
static_assert(offsetof(FGI_Parameters, SpatialNormalTolerance_38_90A4369D46760D1D3D12B1B90AC93BB2) == 0x0100);
static_assert(offsetof(FGI_Parameters, SpatialFilterIteration_44_43991F984232FCDF0F486A8122EC4EE5) == 0x0110);
static_assert(offsetof(FGI_Parameters, GIDiffuseBoost_47_206FAADE4EB4EB482502AFBADB7283BC) == 0x0120);
static_assert(offsetof(FGI_Parameters, FinalGatherUseReservoirResampling_51_B645C5324122AF3297A88BA441BBF97D) == 0x0130);
static_assert(offsetof(FGI_Parameters, GIMetalicSupport_54_E529B8F747A267DC767E098206DB5CC4) == 0x0140);
static_assert(offsetof(FGI_Parameters, GIDenoiserSpatialFilterType_57_35EDA4DA4FDAE461034E11A329D5FCE1) == 0x0150);
static_assert(offsetof(FGI_Parameters, GIDenoiserUseSH_62_6A8CFE524B495BB040710BA60BBD39E0) == 0x0160);
static_assert(offsetof(FGI_Parameters, GIDenoiserSHSharpness_61_E2DE071B4E3C5411289FF0AC4D8A8D41) == 0x0170);
static_assert(offsetof(FGI_Parameters, ATrousDepthTolerance_65_1759F98545A1EAAC4D34079C5EF23FAB) == 0x0180);
static_assert(offsetof(FGI_Parameters, FinalGatherIterations_70_4AF615CF472D7320C330A4911D16FB84) == 0x0190);
static_assert(offsetof(FGI_Parameters, FinalGatherFilterWidth_71_D2D42ACB40D4E30DE24D4B917B965521) == 0x01A0);
static_assert(offsetof(FGI_Parameters, GIFireflySuppression_72_EEAF55A1422455A4AEE4FC90DA0C1746) == 0x01B0);
static_assert(offsetof(FGI_Parameters, ReservoirResamplingInterval_76_80AB856F43395C864203B9A3135F2DB9) == 0x01C0);
static_assert(offsetof(FGI_Parameters, FinalGatherNormalFromDepth_80_8D4264AA4A8998ABC3EEA99265BE762C) == 0x01D0);
static_assert(offsetof(FGI_Parameters, FinalGatherMaxReuseWeight_81_2D108C2B4C14D43EC6EC9192CD7C9689) == 0x01E0);
static_assert(offsetof(FGI_Parameters, FinalGatherAggressiveReservoirReuse_84_1B3372034365E9F31EB6019F153A3A77) == 0x01F0);
static_assert(offsetof(FGI_Parameters, GIDenoiseATrousFilterWidth_87_985CA20D455F90D2B3A71092519BA3E6) == 0x0200);
static_assert(offsetof(FGI_Parameters, GIAccumulateEmissive_90_77129ADE421CED99235DF8A2C64DE1FB) == 0x0210);
static_assert(offsetof(FGI_Parameters, GIMultiBounceInterval_92_F65C03A246D2D4273AAA648629A2E8B9) == 0x0220);
static_assert(offsetof(FLandscapeAndFoliage_Parameter, EnableLandscapeDetectTextureStreaming_8_34CD37624CF32D930CE49B8AE1EDF932) == 0x0000);
static_assert(offsetof(FLandscapeAndFoliage_Parameter, EnableLandscapeLODUpdateEveryFrame_9_5FA37320403A8777FE4A8FA2225C2F81) == 0x0010);
static_assert(offsetof(FLandscapeAndFoliage_Parameter, EnableInstancedStaticMesh_10_F759681E42E05A6B2AC9FEA6EE2E717F) == 0x0020);
static_assert(offsetof(FLandscapeAndFoliage_Parameter, EnableInstancedStaticMeshesCulling_11_DB7739364F5EED0508F78483F32D333D) == 0x0030);
static_assert(offsetof(FLandscapeAndFoliage_Parameter, InstancedStaticMeshesCullingRadius_12_790EF6C34AB6F7B443A365B703D17049) == 0x0040);
static_assert(offsetof(FLandscapeAndFoliage_Parameter, EnableLandscapeInRT_13_EB1398FC4CE59D76E6A49B9D289BA6A2) == 0x0050);
static_assert(offsetof(FLandscapeAndFoliage_Parameter, InstancedStaticMeshesCullingAngle_16_6EB44C0E474474F85AD359B7B8A0B9BC) == 0x0060);
static_assert(offsetof(FLandscapeAndFoliage_Parameter, InstancedStaticMeshesEvaluateWPO_22_3E0D1EF54BCDB5B2D1E1A48429415469) == 0x0070);
static_assert(offsetof(FLandscapeAndFoliage_Parameter, InstancedStaticMeshesSimulationCount_23_3F44BC814B40CF9EB483F2A9D063BB0A) == 0x0080);
static_assert(offsetof(FLandscapeAndFoliage_Parameter, ShadowUseBiasForSkipWPOEval_24_EE03629D4D672D9F32340FBB0ED1F0A9) == 0x0090);
static_assert(offsetof(FLandscapeAndFoliage_Parameter, ShadowMaxBiasForInexactGeometry_25_50FA131B48D2AEE0BE24A1AAEBCC1205) == 0x00A0);
static_assert(offsetof(FLandscapeAndFoliage_Parameter, AutoInstance_29_703C2F464F835FBA52AF74ABDEE8DC9D) == 0x00B0);
static_assert(offsetof(FLandscapeAndFoliage_Parameter, AOUseBiasForSkipWPOEval_33_2006F3134F1344D7F76F8FAA1D641BBB) == 0x00C0);
static_assert(offsetof(FLandscapeAndFoliage_Parameter, AOMaxBiasForInexactGeometry_34_C821B15B4E6AADD30289B4BBC8CE3C09) == 0x00D0);
static_assert(offsetof(FReflection_Parameters, EnableReflection_13_F507403D4F7A1CD01010E9A6F04587D1) == 0x0000);
static_assert(offsetof(FReflection_Parameters, EnableHeightFoginReflection_14_55A2CFFF4743A2FC0CC28AA5CADADFE3) == 0x0010);
static_assert(offsetof(FReflection_Parameters, ReflectionSortMaterials_15_F69BD15C43B20A76600613BAD71A11DA) == 0x0020);
static_assert(offsetof(FReflection_Parameters, EnableReflectionShadow_16_5CE4011344B44695A51F5DBB57926695) == 0x0030);
static_assert(offsetof(FReflection_Parameters, ReflectionMaxRoughness_17_094F87434A4CA2EF78446385751DA11D) == 0x0040);
static_assert(offsetof(FReflection_Parameters, ReflectionScreenPercentage_18_872B98A040695DB673733C87B039D4B0) == 0x0050);
static_assert(offsetof(FReflection_Parameters, ReflectionMaxRayDistance_19_A0E3D15745EF03C12C73608BB897FCE5) == 0x0060);
static_assert(offsetof(FReflection_Parameters, ReflectionMinRayDistance_20_6D12EE6E48A718B502DB929484EDBBD6) == 0x0070);
static_assert(offsetof(FReflection_Parameters, ReflectionMaxBounces_21_81B8DA514D86E8694A43E79814041786) == 0x0080);
static_assert(offsetof(FReflection_Parameters, RTEnableReflectionCapture_23_8F28E19F49F2BCB9FBAA08B7A899CAB2) == 0x0090);
static_assert(offsetof(FReflection_Parameters, EnableReflectionTestRoughness_24_0883B4184EE12DA29A43128E2D24FB4F) == 0x00A0);
static_assert(offsetof(FReflection_Parameters, ReflectionSkyLightContribution_38_63342FE64D2759F0A072E992588DDE8D) == 0x00B0);
static_assert(offsetof(FReflection_Parameters, ReflectionsRoughnessMultiplier_28_2DEC260341D957BF835DF89E8D4C715D) == 0x00C0);
static_assert(offsetof(FReflection_Parameters, HybridReflection_29_A64910B440FDB3B211D60DA855E15843) == 0x00D0);
static_assert(offsetof(FReflection_Parameters, ReflectedTranslucencyMode_34_E9B43ED24B20AF57BCCD4B82D4074935) == 0x00E0);
static_assert(offsetof(FReflection_Parameters, ReflectedTranslucencyMaxBounces_35_30526005497114ACA32D4CA9E09190A3) == 0x00F0);
static_assert(offsetof(FReflection_Parameters, ReflectedTranslucencyTransmissionThreshold_37_BBC1DF1646E5DD7F79B8F5B29C5CDBB3) == 0x0100);
static_assert(offsetof(FReflection_Parameters, ReflectionsEnableTwoSidedGeometry_41_C7FA80DB463DAB7DB041F09EC67DD112) == 0x0110);
static_assert(offsetof(FReflection_Parameters, MaxUnderCoatBounces_62_688C1C5C4D17318FDDC5ED80073BA4D7) == 0x0120);
static_assert(offsetof(FReflection_Parameters, ReflectionSPP_44_FED6320D427E492AF4204489AD917995) == 0x0130);
static_assert(offsetof(FShadow_Parameters, EnableShadow_16_42E314114DF52DDA1F746998967D0D69) == 0x0000);
static_assert(offsetof(FShadow_Parameters, EvaluateMaterialsinShadow_17_728A35714A2D2CE2BB782C87F8EDF254) == 0x0010);
static_assert(offsetof(FShadow_Parameters, ShadowEnableTwoSidedGeometry_18_E4F0F479419BF5462B8CA386C52019CC) == 0x0020);
static_assert(offsetof(FShadow_Parameters, ShadowSPP_19_222F23EF4151A938C7D877B0D90F3255) == 0x0030);
static_assert(offsetof(FShadow_Parameters, ShadowMaxBatchSize_20_09D0D43240AC1FBF762B93B6F820E785) == 0x0040);
static_assert(offsetof(FShadow_Parameters, ShadowDenoiserMaxBatchSize_21_A4511D17403925B727BEE6BE72A868F8) == 0x0050);
static_assert(offsetof(FShadow_Parameters, LightingMaxLights_41_643709A54544E52A183ECDAA837B3061) == 0x0060);
static_assert(offsetof(FShadow_Parameters, LightingMaxShadowLights_42_716E70A946B8BBDF783446AB9ABA3D59) == 0x0070);
static_assert(offsetof(FShadow_Parameters, ShadowMaxLights_46_75FCFFF242CF12D287843C9E5CDF62FC) == 0x0080);
static_assert(offsetof(FShadow_Parameters, ShadowMaxDenoisedLights_45_4EDE192249341D55A1E221B3B183F92B) == 0x0090);
static_assert(offsetof(FShadow_Parameters, LightingMissShader_43_36150C4340C63D4EA70CC59D59D625C1) == 0x00A0);
static_assert(offsetof(FShadow_Parameters, ShadowsSupportTranslucency_51_569C8F954113622FFC40F5B0308485F2) == 0x00B0);
static_assert(offsetof(FShadow_Parameters, SupportLightFunction_28_D1DCAE474964239358DA70AD73C35624) == 0x00C0);
static_assert(offsetof(FShadow_Parameters, SharpShadowFallBack_29_532FB35B4DC6112D35D8B385FBB81C94) == 0x00D0);
static_assert(offsetof(FShadow_Parameters, LightChannelSupport_30_0503581A4B0BF0D27C6B678786D81196) == 0x00E0);
static_assert(offsetof(FShadow_Parameters, Per_LightShadowCasting_32_119CD88B437AD7F2A694BEBFF9DAFFF7) == 0x00F0);
static_assert(offsetof(FShadow_Parameters, EnableVolumetricShadow_35_DF3AEAC645A1EE6B1D68F1A045EB5ACF) == 0x0100);
static_assert(offsetof(FShadow_Parameters, ShadowPrioritizeDirectional_48_C64F92114FE29497B9473794A6BA8BAA) == 0x0110);
static_assert(offsetof(FShadow_Parameters, ShadowsLODTransitionStart_55_B585CA5A498907A43C39F28E62A9DE7D) == 0x0120);
static_assert(offsetof(FShadow_Parameters, ShadowsLODTransitionEnd_56_3F000C594E373DD3FA646A87A2925A7D) == 0x0130);
static_assert(offsetof(FSkyLight_Parameters, GIEvalSkyLight_8_88EC9CBF40393B83BEDA22BB48A2B4CD) == 0x0000);
static_assert(offsetof(FSkyLight_Parameters, EnableRTSkyLight_9_EEE1CC6A47D2E47508784A94A05AA80F) == 0x0010);
static_assert(offsetof(FSkyLight_Parameters, EnableSkyLightDenoiser_10_640DC6C94DF5030E3BDF69AA07720EEF) == 0x0020);
static_assert(offsetof(FSkyLight_Parameters, SkyLightEnableTwoSidedGeomtry_11_E5C3B38F423C10ECE9207C8B9031AEB7) == 0x0030);
static_assert(offsetof(FSkyLight_Parameters, SkyLightMaxRayDistance_12_5399303843881FD92F8337BF45C730CF) == 0x0040);
static_assert(offsetof(FSkyLight_Parameters, SkyLightSPP_13_2D3640B64C7D0103C812CB8533C87237) == 0x0050);
static_assert(offsetof(FSkyLight_Parameters, SkyLightEnableMaterials_14_302F08D048720E799343BDB5D30E9479) == 0x0060);
static_assert(offsetof(FSkyLight_Parameters, FinalGatherSkyLightIntensity_18_E1A9004942D802B91427469CF88EB838) == 0x0070);
static_assert(offsetof(FSkyLight_Parameters, FinalGatherSkyLightIndirectMultiplier_19_C397D4FF42305F4582CEEF8263868ABF) == 0x0080);
static_assert(offsetof(FSkyLight_Parameters, SkyLightScreenPercentage_23_59F3CFEA490786A67F0AB6B16115C3E4) == 0x0090);
static_assert(offsetof(FTranslucency_Parameters, EnableTranslucensy_14_332FFB204F3B00FC3DF8B59EF91BC71D) == 0x0000);
static_assert(offsetof(FTranslucency_Parameters, EnableTranslucencyHeightFog_15_29C6A9F440F6A207C82331939CE3DCE1) == 0x0010);
static_assert(offsetof(FTranslucency_Parameters, EnableTranslucencyShadows_16_7B2E0CEB49AD9CB4A47AF9A9D3EF8AA7) == 0x0020);
static_assert(offsetof(FTranslucency_Parameters, EnableRefraction_17_72999B57452A259A9A901A8E6E51A5D9) == 0x0030);
static_assert(offsetof(FTranslucency_Parameters, TranslucencyMaxRoughness_18_C605CB7A47F91F3AE88A7D9AA0CBB46A) == 0x0040);
static_assert(offsetof(FTranslucency_Parameters, TranslucencyMaxRayDistance_55_26924FA44157F01CA1C304982260E721) == 0x0050);
static_assert(offsetof(FTranslucency_Parameters, MaxRefractionRays_19_69E233FA4710FF92A41E4D8558ED5CF9) == 0x0060);
static_assert(offsetof(FTranslucency_Parameters, EnableHybridTranslucency_20_5ECF7E16453EC6CA4CC6028C3BB79614) == 0x0070);
static_assert(offsetof(FTranslucency_Parameters, HybridTranslucencyDepthThreshold_30_61E75A7D4A65B629146E84BC73B58997) == 0x0080);
static_assert(offsetof(FTranslucency_Parameters, HybridTranslucencyLayers_22_8DDEED384B9ED866CB1E5CA52763214D) == 0x0090);
static_assert(offsetof(FTranslucency_Parameters, HybridTranslucencySupport_29_C17F37CC42441163312E479B70C01372) == 0x00A0);
static_assert(offsetof(FTranslucency_Parameters, TranslucencyMask_24_275B41B2429D609EA96B8E97E439F67B) == 0x00B0);
static_assert(offsetof(FTranslucency_Parameters, HalfResHybridTranslucency_25_D59DF97446A9ACBCE0A0D38E1D882003) == 0x00C0);
static_assert(offsetof(FTranslucency_Parameters, TranslucencyRoughnessMultiplier_26_E69F7D934C950B2F98443380A571C42E) == 0x00D0);
static_assert(offsetof(FTranslucency_Parameters, ExcludeTranslucentsFromShadows_31_9A3A2D7F4B9E4A5336D34EAD1B7B8A7B) == 0x00E0);
static_assert(offsetof(FTranslucency_Parameters, TranslucencyEnableAbsorption_34_37C4F9144AB560F9FB3B05A728807878) == 0x00F0);
static_assert(offsetof(FTranslucency_Parameters, EnableTranslucencyinReflection_49_D325071D4CF3B5B35F33BBB3AE61E7A4) == 0x0100);
static_assert(offsetof(FTranslucency_Parameters, RefractionBackgroundSampleFallback_37_B38E1670400FA3C5B25342BD27FBF35A) == 0x0110);
static_assert(offsetof(FTranslucency_Parameters, TranslucencyIgnoreBackfaceOpacity_40_7B969FFF4087B1E90A0919AA274F255F) == 0x0120);
static_assert(offsetof(FTranslucency_Parameters, AbsorptionForceShadingOnOpaqueObjects_43_A8CE4EE74EA5CDDD66AF47945083DC33) == 0x0130);
static_assert(offsetof(FTranslucency_Parameters, EnableRayTracedDOF_52_F50B2D7E435260144400BC9C33E543D4) == 0x0140);
static_assert(offsetof(FTranslucency_Parameters, HalfResRefraction_46_43CE013F48A027E289B1A39918778984) == 0x0150);
static_assert(offsetof(FTranslucency_Parameters, TransmissionSamplingDistanceCulling_58_E8A0028642F5FB00EECF69A77D2A5B08) == 0x0160);
static_assert(offsetof(FTranslucency_Parameters, TranslucencyAtmosphericFog_61_8EFF0D5845C3931C602D29B079FE27B3) == 0x0170);
static_assert(offsetof(FTranslucency_Parameters, ExcludeDecals_64_6BE0964448E668CC8DA021B3D3259B8C) == 0x0180);
static_assert(offsetof(FTranslucency_Parameters, TranslucencyEnableGI_67_42DF1541445C7578A3CF0A89373AD133) == 0x0190);
static_assert(offsetof(FWater_Caustics_Parameters, WaterCausticsType_10_22E9DB2B44EBA1DDFCD669BFC4F5A2C3) == 0x0000);
static_assert(offsetof(FWater_Caustics_Parameters, WaterCausticsBufferScale_11_4891F1C1433E69AD7AE583B26CB8B74F) == 0x0010);
static_assert(offsetof(FWater_Caustics_Parameters, WaterCausticsRefractiveIntensity_12_84E7671A4C1BAFCE5A912E8B9D549C41) == 0x0020);
static_assert(offsetof(FWater_Caustics_Parameters, WaterCausticsReflectiveIntensity_13_A8FAED5646D272D518F78DBF2EC3FFF3) == 0x0030);
static_assert(offsetof(FWater_Caustics_Parameters, WaterCausticsFresnelBaseReflectFraction_23_28BA9C044FF67107897D8E983B459690) == 0x0040);
static_assert(offsetof(FWater_Caustics_Parameters, WaterCausticsMapSizeX_24_0DD69E77451F51BCA32B16A0B271FC6C) == 0x0050);
static_assert(offsetof(FWater_Caustics_Parameters, WaterCausticsMapSizeY_25_5995CB844729B31103795D9CACF0CF3E) == 0x0060);
static_assert(offsetof(FWater_Caustics_Parameters, WaterCausticsNumDenoisePasses_26_5FDE5D6146B749E8B952F89B329F61B2) == 0x0070);
static_assert(offsetof(FWater_Caustics_Parameters, WaterCausticsMinReflectionRayDistance_27_45097790417E6E7F541B1382E5A0C9AA) == 0x0080);
static_assert(offsetof(FWater_Caustics_Parameters, WaterCausticsMaxReflectionRayDistance_28_67F4322D4AF3ACF0CD8B2895974A115B) == 0x0090);
static_assert(offsetof(FWater_Caustics_Parameters, WaterCausticsMinRefractionRayDistance_29_E9C281484F546DBCAF69C5A7866FD0B2) == 0x00A0);
static_assert(offsetof(FWater_Caustics_Parameters, WaterCausticsMaxRefractionRayDistance_30_3B0E91A54E9D4AD25FCDD18B13E2A9EB) == 0x00B0);
static_assert(offsetof(FWater_Caustics_Parameters, WaterCausticsRectLightTemporalWeight_32_6729E6744212BBA47350FDB9D6743EF6) == 0x00C0);
static_assert(offsetof(FWater_Caustics_Parameters, WaterCausticsRefractBackFaceCullingThreshold_33_7EC526954286067A65F5C7A1F3F7A71A) == 0x00D0);
static_assert(offsetof(FWater_Caustics_Parameters, WaterCausticsReflectBackFaceCullingThreshold_36_16DE876A4587F2728ED6C2BA6FD54C98) == 0x00E0);
static_assert(offsetof(FWater_Caustics_Parameters, WaterCausticsMapCascades_48_C35E153E4FD3359DF08CED8FD8911D43) == 0x00F0);
static_assert(offsetof(FWater_Caustics_Parameters, WaterCausticsMapCascadeScale_47_59ED42134835FEEF0A3586B7A60856F1) == 0x0100);
static_assert(offsetof(FWater_Caustics_Parameters, WaterCausticsMapForceLevel_51_4FE7525E45C9D08EA0F96D8388F5BFF6) == 0x0110);
static_assert(offsetof(FWater_Caustics_Parameters, WaterCausticsShowPhoton_46_B3215C834DEFE8DC5DA4A6A8F292D91D) == 0x0120);
static_assert(offsetof(FWater_Caustics_Parameters, WaterCausticsPhotonScale_54_1E5BBCA644165B132F85C78276BB702F) == 0x0130);
static_assert(offsetof(FWater_Caustics_Parameters, WaterCausticsCascadeSamplingOffsetX_61_2719694E494E4EB376BB5DAF45921638) == 0x0140);
static_assert(offsetof(FWater_Caustics_Parameters, WaterCausticsCascadeSamplingOffsetY_63_98AADADD45FD2ED6D43DC0ADDEC6C53A) == 0x0150);
static_assert(offsetof(FWater_Caustics_Parameters, WaterCausticsCascadeSamplingUVScaleX_64_3141DE974ACBDD26008C3E8B72619B44) == 0x0160);
static_assert(offsetof(FWater_Caustics_Parameters, WaterCausticsCascadeSamplingUVScaley_65_A879211B4B47DBCDA46BE4A1A4A3F47D) == 0x0170);
static_assert(offsetof(FWater_Caustics_Parameters, UseSceneLightDir_68_7B35F1EA4CDF9B9D16F068BF886419AF) == 0x0180);
static_assert(offsetof(FWater_Caustics_Parameters, WaterCausticsReflectiveNormalScale_72_8E7BE7F040BCAA5474D9C58BBEB1FEC7) == 0x0190);
static_assert(offsetof(FWater_Caustics_Parameters, WaterCausticsRefractiveNormalScale_75_11BB4FDF492EC51614A427BC18CFF5B0) == 0x01A0);
static_assert(offsetof(FWater_Caustics_Parameters, WaterCausticsViewCulling_80_F608F01E4E5DAAE17E8D7B935E7F82DC) == 0x01B0);
static_assert(offsetof(FWater_Caustics_Parameters, WaterCausticsEnableShadowRay_85_CD902F404203091E5DF9C5842CB306D6) == 0x01C0);
static_assert(offsetof(FWater_Caustics_Parameters, WaterCausticsShadowRayMaxDistance_86_3F679E3E4D7596B2D597F59985A5ABEE) == 0x01D0);
static_assert(offsetof(FMesh_Caustics_Parameters, EnableMeshCaustics_11_EF17A54E4000730673FD55AFA7851310) == 0x0000);
static_assert(offsetof(FMesh_Caustics_Parameters, MeshCausticsResolution_12_8CBAF5AD40511B86FFECDBBE10551070) == 0x0010);
static_assert(offsetof(FMesh_Caustics_Parameters, MeshCausticsBufferScale_13_82AC6AEE4DE3DABA0E6EF8AFC173099A) == 0x0020);
static_assert(offsetof(FMesh_Caustics_Parameters, MeshCausticsTemporalStrength_14_53019FA5437B781E8F3DCDA3EAA12347) == 0x0030);
static_assert(offsetof(FMesh_Caustics_Parameters, MeshCausticsJitter_15_A7EFA23F493F73491A338F833DD71740) == 0x0040);
static_assert(offsetof(FMesh_Caustics_Parameters, MeshCausticsEnableDispersion_16_D1059E664DB569A0DCD2868ED0E410C0) == 0x0050);
static_assert(offsetof(FMesh_Caustics_Parameters, MeshCausticsTranslucentReflectionMode_57_234A3311428BB4FD6186D485A258D216) == 0x0060);
static_assert(offsetof(FMesh_Caustics_Parameters, MeshCausticsMaxTraceDepth_18_E5DFC534448262757F618C984430031B) == 0x0070);
static_assert(offsetof(FMesh_Caustics_Parameters, MeshCausticsAdaptivePhotonSize_19_75A570FD45DDB1FFB198EAB522F1327C) == 0x0080);
static_assert(offsetof(FMesh_Caustics_Parameters, MeshCausticsEnableTemporalFilter_20_B10DF55042CC5EB4BBBD3C9029E72D25) == 0x0090);
static_assert(offsetof(FMesh_Caustics_Parameters, MeshCausticsAdaptiveSmooth_26_B237A3464D57ACD60A63CEB0E381F8AF) == 0x00A0);
static_assert(offsetof(FMesh_Caustics_Parameters, MeshCausticsAdaptiveUpdateSpeed_27_EBAA130A425D904E6219BC847C5D4E7E) == 0x00B0);
static_assert(offsetof(FMesh_Caustics_Parameters, MeshCausticsAdaptiveVarianceGain_28_D612A8F64E9A6BB74AD5D0A9FC85241B) == 0x00C0);
static_assert(offsetof(FMesh_Caustics_Parameters, MeshCausticsFixedLight_29_9C6912304FA41791E112799EF9B09B26) == 0x00D0);
static_assert(offsetof(FMesh_Caustics_Parameters, MeshCausticsMaxIntensity_30_0571085B49EBB70A2506CC898A54B72E) == 0x00E0);
static_assert(offsetof(FMesh_Caustics_Parameters, MeshCausticsSoftCausticsSample_34_23B75C3A4673EC4C06FB7380A1AFC77B) == 0x00F0);
static_assert(offsetof(FMesh_Caustics_Parameters, MeshCausticsEnableAdvancedSoftCaustics_40_EF539D7E4B254D3FF7354499EA1ADA17) == 0x0100);
static_assert(offsetof(FMesh_Caustics_Parameters, MeshCausticsMidCullColorThreshold_46_603884CE4A61EB477D7D2C82EFE3E844) == 0x0110);
static_assert(offsetof(FMesh_Caustics_Parameters, MeshCausticsFinalCullColorThreshold_47_ADE4A81B4FC53161666873B6CE1C1E16) == 0x0120);
static_assert(offsetof(FMesh_Caustics_Parameters, MeshCausticsIntensity_50_8E96F81D40BC087613695CBE1946AD28) == 0x0130);
static_assert(offsetof(FMesh_Caustics_Parameters, MeshCausticsMaxRayDistance_53_7A78E57D4BA078EDB6381A846432F21C) == 0x0140);
static_assert(offsetof(FMesh_Caustics_Parameters, MeshCausticsTemporalColorTolerance_56_C9E20A13401A4696C5D960922F2ED319) == 0x0150);
static_assert(offsetof(FDLSS_Parameters, Sharpness_2_35A008B94CA19E1D1157B4BEE3664DDE) == 0x0000);
static_assert(offsetof(FDLSS_Parameters, BinarySearchOrder_40_4A5F178D4DE20524A960E091A6F15B02) == 0x0010);
static_assert(offsetof(FDLSS_Parameters, Quality_12_75728F6C402DDAD6D3C83CB43D125F96) == 0x0020);
static_assert(offsetof(FDLSS_Parameters, DLSSEnable_39_13810A794156D8CEAF3F7AA78AD87AA4) == 0x0030);
static_assert(offsetof(FDLSS_Parameters, ReflectionsEnableTAABeforeDLSS_18_071A129344D3B6A5FF8552901A8CF67F) == 0x0040);
static_assert(offsetof(FDLSS_Parameters, TranslucencyEnableTAABeforeDLSS_21_7E947A1D40EA2E0800C722881BCA5577) == 0x0050);
static_assert(offsetof(FDLSS_Parameters, ParticleReapplyTAAafterDLSS_38_01F8076E42227DCDF5D7C6BD22E42432) == 0x0060);
static_assert(offsetof(FDLSS_Parameters, FramesUntilFeatureDesturction_41_146725084183D5B8875F03B095965D14) == 0x0070);
static_assert(offsetof(FDLSS_Parameters, DilateMotionVectors_42_75D786CA4852F3DA32BBD5A03196AD6A) == 0x0080);
static_assert(offsetof(FDLSS_Parameters, ReflectionsTAA_43_E0D798E64EE07DDF022D31A71335EFD3) == 0x0090);
static_assert(offsetof(FDLSS_Parameters, WaterReflectionsTAA_44_71C49B4347FB341069C65DA4366CAC3E) == 0x00A0);
static_assert(offsetof(FDLSS_Parameters, EnableTAAonHalfResSceneColor_50_EF7398014F02FE46C180BE992A28791C) == 0x00B0);
static_assert(offsetof(FRTX_PostProcess_Settings, RTXPostProcessSettings_2_F5F7708F4E83FAC705A16388FF06FB09) == 0x0000);
static_assert(offsetof(FDataType_Support, GeometryCache_10_60EECC624C693307F620398174DF4F78) == 0x0000);
static_assert(offsetof(FDataType_Support, StaticMeshes_11_CACE76324DB5B67A06E6BEA8FF4E9134) == 0x0010);
static_assert(offsetof(FDataType_Support, StaticMeshesEnableWPO_12_589C74A44AC1367B026C8FBFA0045D44) == 0x0020);
static_assert(offsetof(FDataType_Support, StaticMeshesEnableWPOCulling_13_177AB1CE478B5AC40D24B791225322F5) == 0x0030);
static_assert(offsetof(FDataType_Support, StaticMeshesWPOCullingRadius_14_7BC25E7A4F0CD3C0F47B229B1D9DE927) == 0x0040);
static_assert(offsetof(FDataType_Support, SkeletalMeshes_15_FFC240AB4BED120417AAC69C70124464) == 0x0050);
static_assert(offsetof(FDataType_Support, ProceduralMeshes_21_36D63E534869DBA1D0DA50A3A01827F9) == 0x0060);
static_assert(offsetof(FDataType_Support, NiagaraMeshes_16_10268FE94CA08A6B9573EAA7DADE014B) == 0x0070);
static_assert(offsetof(FDataType_Support, NiagaraRibbons_17_B678BB4940773D107B14C2B4BE0095AF) == 0x0080);
static_assert(offsetof(FDataType_Support, NiagaraSprites_18_05F8C4284E3C7649FE73ECB35F94FF34) == 0x0090);
static_assert(offsetof(FDataType_Support, GIDirectionalLight_32_5B36A08C409AF3F6263AACA6D880682A) == 0x00A0);
static_assert(offsetof(FDataType_Support, GIPointLight_33_41CEC9CA46598970DF2B9EAF7240AF95) == 0x00B0);
static_assert(offsetof(FDataType_Support, GIRectLight_34_570E86F346FC898FB785DD9FA7B2CF69) == 0x00C0);
static_assert(offsetof(FDataType_Support, GISkyLight_35_24DDF0D54211597D5928CC8279BA2613) == 0x00D0);
static_assert(offsetof(FDataType_Support, GISpotLight_36_CA892FD74CE62E79DAC8EEA2A6942E59) == 0x00E0);
static_assert(offsetof(FDataType_Support, ShadowsDirectional_37_158E74B94A0A037FDCB9DFA5ECF785C7) == 0x00F0);
static_assert(offsetof(FDataType_Support, ShadowsPoint_38_EE2768114270CF56FBC5729DD8063DAA) == 0x0100);
static_assert(offsetof(FDataType_Support, ShadowsRect_39_ED1CE4DC401687164B18EC89981A8854) == 0x0110);
static_assert(offsetof(FDataType_Support, ShadowsSpot_40_8D4FCC9F4561A67CCCE062B526D23A3C) == 0x0120);
static_assert(offsetof(FDataType_Support, EnableRayTracingCulling_45_51CAE4294A3A6F89F3317988496B5AA1) == 0x0130);
static_assert(offsetof(FDataType_Support, RayTracingCullingAngle_46_372A6A3140C6BFC4B19E7AAEBA56C702) == 0x0140);
static_assert(offsetof(FDataType_Support, RayTracingCullingRadius_47_E8E0FA1F4B28E157718787819ACC7807) == 0x0150);
static_assert(offsetof(FRTXDI_NRD_Parameters, EnableRTXDI_2_4F8A33CA4FCF7AF48FE0CDA92D2DD102) == 0x0000);
static_assert(offsetof(FRTXDI_NRD_Parameters, EnableNRD_4_6B53E8CA4BF8DF54FFB76EA8EFB6A046) == 0x0010);
static_assert(offsetof(FRTXDI_NRD_Parameters, RTXDIQuality_7_0F125504431980E0E4E1EFAE5DDAB930) == 0x0020);
static_assert(offsetof(FVeryHigh, AO_Parameters_290_3E5B873044B400F2CBFF3483EB9004F7) == 0x0000);
static_assert(offsetof(FVeryHigh, Debug_Parameters_292_8E67B1AD44F1BFE4AA4994BD260F4698) == 0x0050);
static_assert(offsetof(FVeryHigh, GI_Parameters_294_5991E68E41477E3C67FBD9B532E65D7C) == 0x0198);
static_assert(offsetof(FVeryHigh, LandscapeAndFoliage_Parameter_296_549A67554ED7BBC8A7326BAF09E10B94) == 0x03C8);
static_assert(offsetof(FVeryHigh, Reflection_Parameters_298_A167D2B1452F751451C99E818E7C05E1) == 0x04A8);
static_assert(offsetof(FVeryHigh, Shadow_Parameters_301_DD835C514AFAE876A87A799983D13684) == 0x05F0);
static_assert(offsetof(FVeryHigh, SkyLight_Parameters_303_98539BB9469068C9E259929CDEF4B9FC) == 0x0730);
static_assert(offsetof(FVeryHigh, Translucency_Parameters_307_94092BBE40B82EF55D80B3858FEEA625) == 0x07D0);
static_assert(offsetof(FVeryHigh, WaterCausticsParameters_285_DD002BE7481CEB47274E64932E70EC39) == 0x0970);
static_assert(offsetof(FVeryHigh, MeshCausticsParameters_288_16B34040457BC7049BEFDE94A384AB2A) == 0x0B58);
static_assert(offsetof(FVeryHigh, DLSSParameters_310_DF713E70420757F4C67C13BBDC8E3A9E) == 0x0CB8);
static_assert(offsetof(FVeryHigh, RTXPostProcessSettings_316_D6EED34F42FA2FE3B39C158FD4BF7119) == 0x0D80);
static_assert(offsetof(FVeryHigh, DataTypeSupport_319_CD2540CC44DAD7284D977B822E41DA90) == 0x1410);
static_assert(offsetof(FVeryHigh, RTXDINRDParameters_322_12ABD63D4E4FA246A008DB8456D3CEA8) == 0x1570);
static_assert(offsetof(FHigh, AO_Parameters_290_3E5B873044B400F2CBFF3483EB9004F7) == 0x0000);
static_assert(offsetof(FHigh, Debug_Parameters_292_8E67B1AD44F1BFE4AA4994BD260F4698) == 0x0050);
static_assert(offsetof(FHigh, GI_Parameters_294_5991E68E41477E3C67FBD9B532E65D7C) == 0x0198);
static_assert(offsetof(FHigh, LandscapeAndFoliage_Parameter_296_549A67554ED7BBC8A7326BAF09E10B94) == 0x03C8);
static_assert(offsetof(FHigh, Reflection_Parameters_298_A167D2B1452F751451C99E818E7C05E1) == 0x04A8);
static_assert(offsetof(FHigh, Shadow_Parameters_301_DD835C514AFAE876A87A799983D13684) == 0x05F0);
static_assert(offsetof(FHigh, SkyLight_Parameters_303_98539BB9469068C9E259929CDEF4B9FC) == 0x0730);
static_assert(offsetof(FHigh, Translucency_Parameters_307_94092BBE40B82EF55D80B3858FEEA625) == 0x07D0);
static_assert(offsetof(FHigh, WaterCausticsParameters_285_DD002BE7481CEB47274E64932E70EC39) == 0x0970);
static_assert(offsetof(FHigh, MeshCausticsParameters_288_16B34040457BC7049BEFDE94A384AB2A) == 0x0B58);
static_assert(offsetof(FHigh, DLSSParameters_310_AD9A759A4B351C95067BE9BC4F8BAB51) == 0x0CB8);
static_assert(offsetof(FHigh, RTXPostProcessSettings_316_B2D33BEB48B4C7919E389880C9AC3F93) == 0x0D80);
static_assert(offsetof(FHigh, DataTypeSupport_319_1FA8C49A4FABAC900D28DCB3A3D948FB) == 0x1410);
static_assert(offsetof(FHigh, RTXDINRDParameters_322_1987EB5F4D50A4EF4A040EBC205AEA8B) == 0x1570);
static_assert(offsetof(FMedium, AO_Parameters_290_3E5B873044B400F2CBFF3483EB9004F7) == 0x0000);
static_assert(offsetof(FMedium, Debug_Parameters_292_8E67B1AD44F1BFE4AA4994BD260F4698) == 0x0050);
static_assert(offsetof(FMedium, GI_Parameters_294_5991E68E41477E3C67FBD9B532E65D7C) == 0x0198);
static_assert(offsetof(FMedium, LandscapeAndFoliage_Parameter_296_549A67554ED7BBC8A7326BAF09E10B94) == 0x03C8);
static_assert(offsetof(FMedium, Reflection_Parameters_298_A167D2B1452F751451C99E818E7C05E1) == 0x04A8);
static_assert(offsetof(FMedium, Shadow_Parameters_301_DD835C514AFAE876A87A799983D13684) == 0x05F0);
static_assert(offsetof(FMedium, SkyLight_Parameters_303_98539BB9469068C9E259929CDEF4B9FC) == 0x0730);
static_assert(offsetof(FMedium, Translucency_Parameters_307_94092BBE40B82EF55D80B3858FEEA625) == 0x07D0);
static_assert(offsetof(FMedium, WaterCausticsParameters_285_DD002BE7481CEB47274E64932E70EC39) == 0x0970);
static_assert(offsetof(FMedium, MeshCausticsParameters_288_16B34040457BC7049BEFDE94A384AB2A) == 0x0B58);
static_assert(offsetof(FMedium, DLSSParameters_310_3A6775704CF641DFEEC2478C297B7D69) == 0x0CB8);
static_assert(offsetof(FMedium, RTXPostProcessSettings_316_268786DF438462588539E5BAF602ED34) == 0x0D80);
static_assert(offsetof(FMedium, DataTypeSupport_319_F3DA97704E7BA941885A888135560397) == 0x1410);
static_assert(offsetof(FMedium, RTXDINRDParameters_322_677780954E483D61F4E045B92097C72E) == 0x1570);
static_assert(offsetof(FLow, AO_Parameters_290_3E5B873044B400F2CBFF3483EB9004F7) == 0x0000);
static_assert(offsetof(FLow, Debug_Parameters_292_8E67B1AD44F1BFE4AA4994BD260F4698) == 0x0050);
static_assert(offsetof(FLow, GI_Parameters_294_5991E68E41477E3C67FBD9B532E65D7C) == 0x0198);
static_assert(offsetof(FLow, LandscapeAndFoliage_Parameter_296_549A67554ED7BBC8A7326BAF09E10B94) == 0x03C8);
static_assert(offsetof(FLow, Reflection_Parameters_298_A167D2B1452F751451C99E818E7C05E1) == 0x04A8);
static_assert(offsetof(FLow, Shadow_Parameters_301_DD835C514AFAE876A87A799983D13684) == 0x05F0);
static_assert(offsetof(FLow, SkyLight_Parameters_303_98539BB9469068C9E259929CDEF4B9FC) == 0x0730);
static_assert(offsetof(FLow, Translucency_Parameters_307_94092BBE40B82EF55D80B3858FEEA625) == 0x07D0);
static_assert(offsetof(FLow, WaterCausticsParameters_285_DD002BE7481CEB47274E64932E70EC39) == 0x0970);
static_assert(offsetof(FLow, MeshCausticsParameters_288_16B34040457BC7049BEFDE94A384AB2A) == 0x0B58);
static_assert(offsetof(FLow, DLSSParameters_310_126107EB4BCF56CDC4C5B1A3FA2B8964) == 0x0CB8);
static_assert(offsetof(FLow, RTXPostProcessSettings_316_C236E627421415551C877990D27B9167) == 0x0D80);
static_assert(offsetof(FLow, DataTypeSupport_319_F81A2A3D466037A56125EE9FAD06E4C6) == 0x1410);
static_assert(offsetof(FLow, RTXDINRDParameters_322_B6BB100E454A58ECDAE0A787577725BF) == 0x1570);
static_assert(offsetof(FFilm, AO_Parameters_290_3E5B873044B400F2CBFF3483EB9004F7) == 0x0000);
static_assert(offsetof(FFilm, Debug_Parameters_292_8E67B1AD44F1BFE4AA4994BD260F4698) == 0x0050);
static_assert(offsetof(FFilm, GI_Parameters_294_5991E68E41477E3C67FBD9B532E65D7C) == 0x0198);
static_assert(offsetof(FFilm, LandscapeAndFoliage_Parameter_296_549A67554ED7BBC8A7326BAF09E10B94) == 0x03C8);
static_assert(offsetof(FFilm, Reflection_Parameters_298_A167D2B1452F751451C99E818E7C05E1) == 0x04A8);
static_assert(offsetof(FFilm, Shadow_Parameters_301_DD835C514AFAE876A87A799983D13684) == 0x05F0);
static_assert(offsetof(FFilm, SkyLight_Parameters_303_98539BB9469068C9E259929CDEF4B9FC) == 0x0730);
static_assert(offsetof(FFilm, Translucency_Parameters_307_94092BBE40B82EF55D80B3858FEEA625) == 0x07D0);
static_assert(offsetof(FFilm, WaterCausticsParameters_285_DD002BE7481CEB47274E64932E70EC39) == 0x0970);
static_assert(offsetof(FFilm, MeshCausticsParameters_288_16B34040457BC7049BEFDE94A384AB2A) == 0x0B58);
static_assert(offsetof(FFilm, DLSSParameters_310_1FF18AE34628A2E7E3B9D1A3B90943A2) == 0x0CB8);
static_assert(offsetof(FFilm, RTXPostProcessSettings_316_87CE5EF04E423A2573F0718792B9B575) == 0x0D80);
static_assert(offsetof(FFilm, DataTypeSupport_319_6F9BCE734E712BCA043CC89EFAC55DE2) == 0x1410);
static_assert(offsetof(FFilm, RTXDINRDParameters_322_D78759234E0EAF7E7B76298405CD9090) == 0x1570);
static_assert(offsetof(FDisable, AO_Parameters_290_3E5B873044B400F2CBFF3483EB9004F7) == 0x0000);
static_assert(offsetof(FDisable, Debug_Parameters_292_8E67B1AD44F1BFE4AA4994BD260F4698) == 0x0050);
static_assert(offsetof(FDisable, GI_Parameters_294_5991E68E41477E3C67FBD9B532E65D7C) == 0x0198);
static_assert(offsetof(FDisable, LandscapeAndFoliage_Parameter_296_549A67554ED7BBC8A7326BAF09E10B94) == 0x03C8);
static_assert(offsetof(FDisable, Reflection_Parameters_298_A167D2B1452F751451C99E818E7C05E1) == 0x04A8);
static_assert(offsetof(FDisable, Shadow_Parameters_301_DD835C514AFAE876A87A799983D13684) == 0x05F0);
static_assert(offsetof(FDisable, SkyLight_Parameters_303_98539BB9469068C9E259929CDEF4B9FC) == 0x0730);
static_assert(offsetof(FDisable, Translucency_Parameters_307_94092BBE40B82EF55D80B3858FEEA625) == 0x07D0);
static_assert(offsetof(FDisable, WaterCausticsParameters_285_DD002BE7481CEB47274E64932E70EC39) == 0x0970);
static_assert(offsetof(FDisable, MeshCausticsParameters_288_16B34040457BC7049BEFDE94A384AB2A) == 0x0B58);
static_assert(offsetof(FDisable, DLSSParameters_310_D94EF156432B307677D00680EBDF73B8) == 0x0CB8);
static_assert(offsetof(FDisable, RTXPostProcessSettings_316_96E0621447558B5C83E4DE968475A475) == 0x0D80);
static_assert(offsetof(FDisable, DataTypeSupport_319_ED1531394D2DB4B27AA1D6ACE79150FD) == 0x1410);
static_assert(offsetof(FDisable, RTXDINRDParameters_322_DD5495E64AD77E8B265497AC9B6C5184) == 0x1570);
static_assert(offsetof(FXbox, AO_Parameters_290_3E5B873044B400F2CBFF3483EB9004F7) == 0x0000);
static_assert(offsetof(FXbox, Debug_Parameters_292_8E67B1AD44F1BFE4AA4994BD260F4698) == 0x0050);
static_assert(offsetof(FXbox, GI_Parameters_294_5991E68E41477E3C67FBD9B532E65D7C) == 0x0198);
static_assert(offsetof(FXbox, LandscapeAndFoliage_Parameter_296_549A67554ED7BBC8A7326BAF09E10B94) == 0x03C8);
static_assert(offsetof(FXbox, Reflection_Parameters_298_A167D2B1452F751451C99E818E7C05E1) == 0x04A8);
static_assert(offsetof(FXbox, Shadow_Parameters_301_DD835C514AFAE876A87A799983D13684) == 0x05F0);
static_assert(offsetof(FXbox, SkyLight_Parameters_303_98539BB9469068C9E259929CDEF4B9FC) == 0x0730);
static_assert(offsetof(FXbox, Translucency_Parameters_307_94092BBE40B82EF55D80B3858FEEA625) == 0x07D0);
static_assert(offsetof(FXbox, WaterCausticsParameters_285_DD002BE7481CEB47274E64932E70EC39) == 0x0970);
static_assert(offsetof(FXbox, MeshCausticsParameters_288_16B34040457BC7049BEFDE94A384AB2A) == 0x0B58);
static_assert(offsetof(FXbox, DLSSParameters_310_7E4DC0424931B31C9DF0779DC71B119B) == 0x0CB8);
static_assert(offsetof(FXbox, RTXPostProcessSettings_316_79EC232848BAB964A67DDB9C114B7FDA) == 0x0D80);
static_assert(offsetof(FXbox, DataTypeSupport_319_494E11E145D7CB4FE9D0638B520247FA) == 0x1410);
static_assert(offsetof(FXbox, RTXDINRDParameters_322_E13DA7974F6B55109174A6965220CDC3) == 0x1570);
static_assert(offsetof(FPS5, AO_Parameters_290_3E5B873044B400F2CBFF3483EB9004F7) == 0x0000);
static_assert(offsetof(FPS5, Debug_Parameters_292_8E67B1AD44F1BFE4AA4994BD260F4698) == 0x0050);
static_assert(offsetof(FPS5, GI_Parameters_294_5991E68E41477E3C67FBD9B532E65D7C) == 0x0198);
static_assert(offsetof(FPS5, LandscapeAndFoliage_Parameter_296_549A67554ED7BBC8A7326BAF09E10B94) == 0x03C8);
static_assert(offsetof(FPS5, Reflection_Parameters_298_A167D2B1452F751451C99E818E7C05E1) == 0x04A8);
static_assert(offsetof(FPS5, Shadow_Parameters_301_DD835C514AFAE876A87A799983D13684) == 0x05F0);
static_assert(offsetof(FPS5, SkyLight_Parameters_303_98539BB9469068C9E259929CDEF4B9FC) == 0x0730);
static_assert(offsetof(FPS5, Translucency_Parameters_307_94092BBE40B82EF55D80B3858FEEA625) == 0x07D0);
static_assert(offsetof(FPS5, WaterCausticsParameters_285_DD002BE7481CEB47274E64932E70EC39) == 0x0970);
static_assert(offsetof(FPS5, MeshCausticsParameters_288_16B34040457BC7049BEFDE94A384AB2A) == 0x0B58);
static_assert(offsetof(FPS5, DLSSParameters_310_4A3CCCF54093EB9F67DCA6BAF9FDEA66) == 0x0CB8);
static_assert(offsetof(FPS5, RTXPostProcessSettings_316_78467B544CA2D05E4E2F1AA0BF710D08) == 0x0D80);
static_assert(offsetof(FPS5, DataTypeSupport_319_4D6E102D4F70C0E8215E079F8EF87059) == 0x1410);
static_assert(offsetof(FPS5, RTXDINRDParameters_322_67F50E2C436988B4811C718FD8D23669) == 0x1570);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, RTX_PostProcess) == 0x0228);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Box) == 0x0230);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, DefaultSceneRoot) == 0x0238);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Enable_Reflection) == 0x0240);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Enable_AO) == 0x0250);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Enable_Shadow) == 0x0260);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Enable_Translucensy) == 0x0270);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Enable_Translucency_Height_Fog) == 0x0280);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Enable_Translucency_Shadows) == 0x0290);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Enable_Refraction) == 0x02A0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Translucency_Max_Roughness) == 0x02B0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Translucency_Max_Ray_Distance_) == 0x02C0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Max_Refraction_Rays) == 0x02D0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Evaluate_Materials_in_Shadow) == 0x02E0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Shadow_Enable_Two_Sided_Geometry) == 0x02F0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Enable_Height_Fog_in_Reflection) == 0x0300);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Reflection_Sort_Materials) == 0x0310);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Enable_Reflection_Shadow) == 0x0320);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Reflection_Max_Roughness) == 0x0330);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Use_Texture_LOD) == 0x0340);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Reflection_Screen_Percentage) == 0x0350);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Box_Reletive_Scale) == 0x0360);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Normal_Bias) == 0x0370);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Debug_Force_Opaque) == 0x0380);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Debug_Force_Full_Build) == 0x0390);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Debug_Disable_Triangle_Cull) == 0x03A0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Debug_Force_Build_Mode) == 0x03B0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Reflection_Max_Ray_Distance) == 0x03C0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Reflection_Min_Ray_Distance) == 0x03D0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Reflection_Max_Bounces) == 0x03E0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Reflection_SPP) == 0x03F0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Shadow_SPP) == 0x0400);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Enable_Reflection_Denoiser) == 0x0410);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Enable_Shadow_Denoiser) == 0x0420);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Enum_RT_QualitySwitch) == 0x0430);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GI_type) == 0x0438);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Enable_GI_Denoiser) == 0x0448);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GI_EvalSkyLight) == 0x0458);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GI_MaxBounce) == 0x0468);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GI_MaxRayDistance) == 0x0478);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GI_SPP) == 0x0488);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GI_Screen_Percentage) == 0x0498);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GI_UseRussianRoulette_) == 0x04A8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Enable_RT_SkyLight) == 0x04B8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Enable_SkyLight_Denoiser) == 0x04C8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, SkyLight_Enable_Two_Sided_Geomtry) == 0x04D8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, SkyLight_MaxRay_Distance) == 0x04E8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, SkyLight_SPP) == 0x04F8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Reflection_Enable_Materials) == 0x0508);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Very_High) == 0x0520);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, High) == 0x1AC0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Medium) == 0x3060);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Low) == 0x4600);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Film) == 0x5BA0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Disable) == 0x7140);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Xbox) == 0x86E0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, PS5) == 0x9C80);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, RT_Enable_Reflection_Capture_) == 0xB220);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Enable_Shader_Cache) == 0xB230);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, AO_Enable_Material) == 0xB240);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, AO_Enable_Two_Sided_Geometry) == 0xB250);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, PSO_Cache_Size) == 0xB260);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Enable_Landscape_Detect_Texture_Streaming) == 0xB270);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Enable_Landscape_LOD_UpdateEveryFrame) == 0xB280);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Enable_Instanced_Static_Mesh) == 0xB290);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Enable_Instanced_Static_Meshes_Culling) == 0xB2A0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Instanced_Static_Meshes_Culling_Radius) == 0xB2B0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Shadow_Max_Batch_Size) == 0xB2C0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GI_Diffuse_Threshold) == 0xB2D0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Shadow_Denoiser_Max_Batch_Size) == 0xB2E0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Enable_Landscape_In_RT) == 0xB2F0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, RTX_Switch) == 0xB300);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Enable_Reflection_Test_Roughness) == 0xB310);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Reflection_Sky_Light_Contribution) == 0xB328);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GI_Sort_Materials) == 0xB338);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GI_Enable_Two_Sided_Geometry) == 0xB348);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Final_Gather_Distance) == 0xB358);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Enable_Hybrid_Translucency) == 0xB368);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Hybrid_Translucency_DepthThreshold_) == 0xB378);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Hybrid_Translucency_Layers) == 0xB388);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Hybrid_Translucency_Support) == 0xB398);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Lighting_Max_Lights) == 0xB3A8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Lighting_Max_Shadow_Lights) == 0xB3B8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Lighting_Miss_Shader) == 0xB3C8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Shadow_Max_Lights) == 0xB3D8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Shadow_Max_Denoised_Lights_) == 0xB3E8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Translucency_Mask_) == 0xB3F8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, SkyLight_Enable_Materials) == 0xB408);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, _Half_Res_Hybrid_Translucency) == 0xB418);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Shadows_Support_Translucency) == 0xB428);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Support_Light_Function) == 0xB438);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Sharp_Shadow_Fall_Back) == 0xB448);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Light_Channel_Support) == 0xB458);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Translucency_Roughness_Multiplier_) == 0xB468);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Reflections_Roughness_Multiplier_) == 0xB478);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Hybrid_Reflection) == 0xB488);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Per_Light_Shadow_Casting) == 0xB498);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, ParallelMeshBatchSize) == 0xB4A8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, BuildRayTracingMeshForCaustics) == 0xB4B8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Exclude_Translucents_From_Shadows_) == 0xB4C8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Auto_Instance_) == 0xB4D8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Batch_Materials_) == 0xB4E8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Parallel_Mesh_Batch_Setup_) == 0xB4F8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, NonBlockingPipelineCreation_) == 0xB508);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Enable_Mesh_Caustics) == 0xB518);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Water_Caustics_Type) == 0xB528);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Water_Caustics_Refractive_Intensity_) == 0xB538);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Water_Caustics_Reflective_Intensity_) == 0xB548);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Water_Caustics_Fresnel_Base_Reflect_Fraction_) == 0xB558);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Water_Caustics_Map_Size_X__) == 0xB568);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Water_Caustics_Map_Size_Y) == 0xB578);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Water_Caustics_Num_Denoise_Passes_) == 0xB588);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Water_Caustics_Min_Reflection_Ray_Distance_) == 0xB598);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Water_Caustics_Max_Reflection_Ray_Distance_) == 0xB5A8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Water_Caustics_Min_Refraction_Ray_Distance_) == 0xB5B8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Water_Caustics_Max_Refraction_Ray_Distance_) == 0xB5C8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Water_Caustics_Rect_Light_Temporal_Weight_) == 0xB5D8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Mesh_Caustics_Resolution_) == 0xB5E8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Mesh_Caustics_Intensity_) == 0xB5F8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Water_Caustics_Buffer_Scale_) == 0xB608);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Mesh_Caustics_Buffer_Scale_) == 0xB618);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Mesh_Caustics_Temporal_Strength_) == 0xB628);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Mesh_Caustics_Jitter_) == 0xB638);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Mesh_Caustics_Enable_Dispersion_) == 0xB648);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Mesh_Caustics_Translucent_Reflection_Mode) == 0xB658);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Mesh_Caustics_Max_Trace_Depth_) == 0xB668);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Mesh_Caustics_Adaptive_Photon_Size_) == 0xB678);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Mesh_Caustics_Enable_Temporal_Filter_) == 0xB688);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Mesh_Caustics_Adaptive_Smooth_) == 0xB698);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Mesh_Caustics_Adaptive_Update_Speed_) == 0xB6A8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Mesh_Caustics_Adaptive_Variance_Gain_) == 0xB6B8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Mesh_Caustics_Fixed_Light_) == 0xB6C8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Mesh_Caustics_Max_Intensity_) == 0xB6D8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Translucency_Enable_Absorption_) == 0xB6E8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Mesh_Caustics_Soft_Caustics_Sample_) == 0xB6F8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Water_Caustics_Refract_Back_Face_Culling_Threshold_) == 0xB708);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Water_Caustics_Reflect_Back_Face_Culling_Threshold_) == 0xB718);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Water_Caustics_Map_Cascades_) == 0xB728);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Water_Caustics_Map_Force_Level_) == 0xB738);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Water_Caustics_Map_Cascade_Scale_) == 0xB748);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Water_Caustics_Show_Photon_) == 0xB758);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Water_Caustics_Photon_Scale) == 0xB768);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Mesh_Caustics_Enable_Advanced_Soft_Caustics_) == 0xB778);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Mesh_Caustics_Mid_Cull_Color_Threshold_) == 0xB788);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Mesh_Caustics_Final_Cull_Color_Threshold_) == 0xB798);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Water_Caustics_Cascade_Sampling_Offset_X_) == 0xB7A8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Water_Caustics_Cascade_Sampling_Offset_Y) == 0xB7B8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Water_Caustics_Cascade_Sampling_UVScale_X_) == 0xB7C8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Water_Caustics_Cascade_Sampling_UVScale_Y_) == 0xB7D8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Sharpness) == 0xB7E8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Binary_Search_Order) == 0xB7F8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Quality) == 0xB808);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, DLSS_Enable) == 0xB818);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Reflections_Enable_TAA_Before_DLSS_) == 0xB828);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Translucency_Enable_TAA_Before_DLSS_) == 0xB838);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GI_Max_Light_Count_) == 0xB848);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, AO_SPP) == 0xB858);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GI_Denoiser_Type) == 0xB868);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GI_Apply_AO) == 0xB878);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GI_Denoiser_Color_Clamp) == 0xB888);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GI_Denoiser_Normal_Tolerance) == 0xB898);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Spatial_Normal_Tolerance) == 0xB8A8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Particle_Reapply_TAA_after_DLSS) == 0xB8C0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Refraction_Background_Sample_Fallback_) == 0xB8D0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GI_Denoise_History_Length) == 0xB8E0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Spatial_Filter_Iteration) == 0xB8F0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Translucency_Ignore_Backface_Opacity) == 0xB900);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Use_Scene_Light_Dir) == 0xB910);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Enable_Volumetric_Shadow) == 0xB920);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Absorption_Force_Shading_On_Opaque_Objects) == 0xB930);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Mesh_Caustics_Max_Ray_Distance) == 0xB940);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Mesh_Caustics_Temporal_Color_Tolerance) == 0xB950);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GI_Diffuse_Boost) == 0xB960);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Reflected_Translucency_Mode) == 0xB970);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Reflected_Translucency_Max_Bounces) == 0xB980);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Reflected_Translucency_Transmission_Threshold) == 0xB990);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Half_Res_Refraction) == 0xB9A0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, AO_Denoiser_History_Convolution_Sample_Count_) == 0xB9B0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Shadow_PrioritizeDirectional) == 0xB9C0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Frames_Until_Feature_Desturction) == 0xB9D0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Dilate_Motion_Vectors) == 0xB9E0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Reflections_TAA) == 0xB9F0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Water_Reflections_TAA) == 0xBA00);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Instanced_Static_Meshes_Culling_Angle) == 0xBA10);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, RTX_Post_Process_Settings) == 0xBA20);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Enable_Translucency_in_Reflection) == 0xC0A8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, FinalGather_UseReservoirResampling) == 0xC0C0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GI_Metalic_Support) == 0xC0D0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GI_Denoiser_Spatial_Filter_Type) == 0xC0E0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GI_Denoiser_Use_SH) == 0xC0F0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GI_Denoiser_SH_Sharpness) == 0xC100);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, ATrous_Depth_Tolerance_) == 0xC110);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Final_Gather_SkyLight_Intensity_) == 0xC120);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Final_Gather_SkyLight_IndirectMultiplier_) == 0xC130);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Instanced_Static_Meshes_Evaluate_WPO) == 0xC140);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Instanced_Static_Meshes_Simulation_Count) == 0xC150);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Shadow_UseBiasForSkipWPOEval) == 0xC160);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Shadow_MaxBiasForInexactGeometry) == 0xC170);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Enable_Ray_Tracing_Culling) == 0xC180);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Ray_Tracing_Culling_Angle) == 0xC190);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Ray_Tracing_Culling_Radius) == 0xC1A0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Sky_Light_Screen_Percentage) == 0xC1B0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, FinalGather_Iterations_) == 0xC1C0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, FinalGather_Filter_Width) == 0xC1D0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GI_Firefly_Suppression) == 0xC1E0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Reflections_EnableTwoSidedGeometry_) == 0xC1F0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GeometryCache) == 0xC200);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, StaticMeshes) == 0xC210);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, StaticMeshes_Enable_WPO_) == 0xC220);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, StaticMeshes_Enable_WPO_Culling) == 0xC230);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, StaticMeshes_WPO_Culling_Radius_) == 0xC240);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, SkeletalMeshes_) == 0xC250);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, ProceduralMeshes_) == 0xC260);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, NiagaraMeshes) == 0xC270);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, NiagaraRibbons) == 0xC280);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, NiagaraSprites) == 0xC290);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GI_Directional_Light) == 0xC2A0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GI_Point_Light) == 0xC2B0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GI_Rect_Light) == 0xC2C0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GI_Sky_Light) == 0xC2D0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GI_Spot_Light) == 0xC2E0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Shadows_Directional) == 0xC2F0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Shadows_Point) == 0xC300);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Shadows_Rect) == 0xC310);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Shadows_Spot) == 0xC320);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, AO_UseBiasForSkipWPOEval_) == 0xC330);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, AO_MaxBiasForInexactGeometry_) == 0xC340);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GI_Reservoir_Update_Interval_) == 0xC350);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Final_Gather_Normal_From_Depth) == 0xC360);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Final_Gather_Max_Reuse_Weight) == 0xC370);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Final_Gather_Aggressive_Reservoir_Reuse_) == 0xC380);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GIDenoise_ATrous_Filter_Width) == 0xC390);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, WaterCaustics_ReflectiveNormalScale_) == 0xC3A0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, WaterCaustics_RefractiveNormalScale_) == 0xC3B0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Max_Under_Coat_Bounces_) == 0xC3C0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, DynamicGeometryLastRenderTimeUpdateDistance_) == 0xC3D8);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Enable_RTX_DI) == 0xC400);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Enable_NRD) == 0xC410);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, RTXDI_Quality) == 0xC420);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GI_Accumulate_Emissive) == 0xC428);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, GI_MultiBounce_Interval) == 0xC438);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Enable_Ray_Traced_DOF) == 0xC450);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Transmission_Sampling_Distance_Culling_) == 0xC460);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Translucency_AtmosphericFog_) == 0xC470);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Exclude_Decals_) == 0xC480);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Water_Caustics_View_Culling) == 0xC490);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Shadows_LODTransitionStart_) == 0xC4A0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Shadows_LODTransitionEnd_) == 0xC4B0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Water_Caustics_Enable_Shadow_Ray) == 0xC4C0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Water_Caustics_Shadow_Ray_Max_Distance) == 0xC4D0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, Translucency_Enable_GI) == 0xC4E0);
static_assert(offsetof(ABP_RT_Quality_Parameters_C, HalfResSceneColor_TAA) == 0xC4F0);
static_assert(offsetof(FRT_Parameters, AO_Parameters_290_3E5B873044B400F2CBFF3483EB9004F7) == 0x0000);
static_assert(offsetof(FRT_Parameters, Debug_Parameters_292_8E67B1AD44F1BFE4AA4994BD260F4698) == 0x0050);
static_assert(offsetof(FRT_Parameters, GI_Parameters_294_5991E68E41477E3C67FBD9B532E65D7C) == 0x0198);
static_assert(offsetof(FRT_Parameters, LandscapeAndFoliage_Parameter_296_549A67554ED7BBC8A7326BAF09E10B94) == 0x03C8);
static_assert(offsetof(FRT_Parameters, Reflection_Parameters_298_A167D2B1452F751451C99E818E7C05E1) == 0x04A8);
static_assert(offsetof(FRT_Parameters, Shadow_Parameters_301_DD835C514AFAE876A87A799983D13684) == 0x05F0);
static_assert(offsetof(FRT_Parameters, SkyLight_Parameters_303_98539BB9469068C9E259929CDEF4B9FC) == 0x0730);
static_assert(offsetof(FRT_Parameters, Translucency_Parameters_307_94092BBE40B82EF55D80B3858FEEA625) == 0x07D0);
static_assert(offsetof(FRT_Parameters, WaterCausticsParameters_285_DD002BE7481CEB47274E64932E70EC39) == 0x0970);
static_assert(offsetof(FRT_Parameters, MeshCausticsParameters_288_16B34040457BC7049BEFDE94A384AB2A) == 0x0B58);
static_assert(offsetof(FRT_Parameters, DLSSParameters_310_DF713E70420757F4C67C13BBDC8E3A9E) == 0x0CB8);
static_assert(offsetof(FRT_Parameters, RTXPostProcessSettings_316_D6EED34F42FA2FE3B39C158FD4BF7119) == 0x0D80);
static_assert(offsetof(FRT_Parameters, DataTypeSupport_319_A2EECCC8445A98F5802C0C8A6D0AF6F0) == 0x1410);
static_assert(offsetof(FRT_Parameters, RTXDINRDParameters_322_4FF432304D555333653C01ACDEE2F6F9) == 0x1570);
