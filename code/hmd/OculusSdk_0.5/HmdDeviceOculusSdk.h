/**
 * HMD extension for JediAcademy
 *
 *  Copyright 2014 by Jochen Leopold <jochen.leopold@model-view.com>
 */

#ifndef HMDDEVICEOCULUSSDK_0_5_H
#define HMDDEVICEOCULUSSDK_0_5_H

#include "../HmdDevice/IHmdDevice.h"

#ifdef FORCE_STATIC_OCULUS_SDK
#include <OVR_CAPI_0_5_0.h>
#include "oculus_static.h"
#else
#include "oculus_dynamic.h"
#endif

namespace OvrSdk_0_5
{
class HmdDeviceOculusSdk : public IHmdDevice
{
public:

    HmdDeviceOculusSdk();
    virtual ~HmdDeviceOculusSdk();

    virtual bool Init(bool allowDummyDevice = false);
    virtual void Shutdown();

    virtual std::string GetInfo();

    virtual bool HasDisplay();
    virtual std::string GetDisplayDeviceName();
    virtual bool GetDisplayPos(int& rX, int& rY);

    virtual bool GetDeviceResolution(int& rWidth, int& rHeight, bool& rIsRotated, bool& rIsExtendedMode);
    virtual bool GetOrientationRad(float& rPitch, float& rYaw, float& rRoll);
    virtual bool GetPosition(float& rX, float& rY, float& rZ);
    virtual void Recenter();


    ovrHmd GetHmd() { return mpHmd; }
    bool IsDebugHmd() { return mUsingDebugHmd; }


private:
    // disable copy constructor
    HmdDeviceOculusSdk(const HmdDeviceOculusSdk&);
    HmdDeviceOculusSdk& operator=(const HmdDeviceOculusSdk&);

    void ConvertQuatToEuler(const float* quat, float& rYaw, float& rPitch, float& rRoll);
    int GetCpuCount();
    
    bool mIsInitialized;
    bool mUsingDebugHmd;
    bool mPositionTrackingEnabled;
    bool mIsRotated;
    ovrHmd mpHmd;

    std::string mInfo;
};
}
#endif
