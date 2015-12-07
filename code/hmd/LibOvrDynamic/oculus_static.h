#ifdef USE_OVR_0_5
#define d_ovr_Initialize ovr_Initialize
#define d_ovr_InitializeRenderingShim ovr_InitializeRenderingShim
#define d_ovr_Shutdown ovr_Shutdown
#define d_ovr_GetVersionString ovr_GetVersionString
#define d_ovrHmd_Detect ovrHmd_Detect
#define d_ovrHmd_Create ovrHmd_Create
#define d_ovrHmd_Destroy ovrHmd_Destroy
#define d_ovrHmd_CreateDebug ovrHmd_CreateDebug
#define d_ovrHmd_GetLastError ovrHmd_GetLastError
#define d_ovrHmd_AttachToWindow ovrHmd_AttachToWindow
#define d_ovrHmd_GetEnabledCaps ovrHmd_GetEnabledCaps
#define d_ovrHmd_SetEnabledCaps ovrHmd_SetEnabledCaps
#define d_ovrHmd_ConfigureTracking ovrHmd_ConfigureTracking
#define d_ovrHmd_RecenterPose ovrHmd_RecenterPose
#define d_ovrHmd_GetTrackingState ovrHmd_GetTrackingState
#define d_ovrHmd_GetFovTextureSize ovrHmd_GetFovTextureSize
#define d_ovrHmd_ConfigureRendering ovrHmd_ConfigureRendering
#define d_ovrHmd_BeginFrame ovrHmd_BeginFrame
#define d_ovrHmd_EndFrame ovrHmd_EndFrame
#define d_ovrHmd_GetEyePoses ovrHmd_GetEyePoses
#define d_ovrHmd_GetHmdPosePerEye ovrHmd_GetHmdPosePerEye
#define d_ovrHmd_GetRenderDesc ovrHmd_GetRenderDesc
#define d_ovrHmd_CreateDistortionMesh ovrHmd_CreateDistortionMesh
#define d_ovrHmd_DestroyDistortionMesh ovrHmd_DestroyDistortionMesh
#define d_ovrHmd_GetRenderScaleAndOffset ovrHmd_GetRenderScaleAndOffset
#define d_ovrHmd_GetFrameTiming ovrHmd_GetFrameTiming
#define d_ovrHmd_BeginFrameTiming ovrHmd_BeginFrameTiming
#define d_ovrHmd_EndFrameTiming ovrHmd_EndFrameTiming
#define d_ovrHmd_ResetFrameTiming ovrHmd_ResetFrameTiming
#define d_ovrHmd_GetEyeTimewarpMatrices ovrHmd_GetEyeTimewarpMatrices
#define d_ovrMatrix4f_Projection ovrMatrix4f_Projection
#define d_ovrMatrix4f_OrthoSubProjection ovrMatrix4f_OrthoSubProjection
#define d_ovr_GetTimeInSeconds ovr_GetTimeInSeconds
#define d_ovr_WaitTillTime ovr_WaitTillTime
#define d_ovrHmd_ProcessLatencyTest ovrHmd_ProcessLatencyTest
#define d_ovrHmd_GetLatencyTestResult ovrHmd_GetLatencyTestResult
#define d_ovrHmd_GetHSWDisplayState ovrHmd_GetHSWDisplayState
#define d_ovrHmd_DismissHSWDisplay ovrHmd_DismissHSWDisplay
#define d_ovrHmd_GetBool ovrHmd_GetBool
#define d_ovrHmd_SetBool ovrHmd_SetBool
#define d_ovrHmd_GetInt ovrHmd_GetInt
#define d_ovrHmd_SetInt ovrHmd_SetInt
#define d_ovrHmd_GetFloat ovrHmd_GetFloat
#define d_ovrHmd_SetFloat ovrHmd_SetFloat
#define d_ovrHmd_GetFloatArray ovrHmd_GetFloatArray
#define d_ovrHmd_SetFloatArray ovrHmd_SetFloatArray
#define d_ovrHmd_GetString ovrHmd_GetString
#define d_ovrHmd_SetString ovrHmd_SetString
#define d_ovrHmd_GetLatencyTest2DrawColor ovrHmd_GetLatencyTest2DrawColor

#define d_ovrHmd_RegisterPostDistortionCallback ovrHmd_RegisterPostDistortionCallback
#define d_ovrHmd_AddDistortionTimeMeasurement ovrHmd_AddDistortionTimeMeasurement
#define d_ovrHmd_GetLatencyTestDrawColor ovrHmd_GetLatencyTestDrawColor

#elif USE_OVR_CURRENT
#define d_ovr_Initialize ovr_Initialize
#define d_ovr_Create ovr_Create
#define d_ovr_Shutdown ovr_Shutdown
#define d_ovr_GetHmdDesc ovr_GetHmdDesc
#define d_ovr_Destroy ovr_Destroy
#define d_ovr_ConfigureTracking ovr_ConfigureTracking
#define d_ovr_GetTrackingState ovr_GetTrackingState
#define d_ovr_RecenterPose ovr_RecenterPose
#define d_ovr_GetFovTextureSize ovr_GetFovTextureSize
#define d_ovr_CreateSwapTextureSetGL ovr_CreateSwapTextureSetGL
#define d_ovr_CalcEyePoses ovr_CalcEyePoses
#define d_ovr_GetPredictedDisplayTime ovr_GetPredictedDisplayTime
#define d_ovrMatrix4f_Projection ovrMatrix4f_Projection
#endif
