#include <Library/BaseLib.h>
#include <Library/PlatformConfigurationMapLib.h>

static CONFIGURATION_DESCRIPTOR_EX gDeviceConfigurationDescriptorEx[] = {
    {"NumCpusFuseAddr", 0x5C04C},
    {"EnableShell", 0x1},
    {"SharedIMEMBaseAddr", 0x146AA000},
    {"DloadCookieAddr", 0x01FD3000},
    {"DloadCookieValue", 0x10},
    {"NumCpus", 4},
    {"NumActiveCores", 8},
    {"MaxLogFileSize", 0x400000},
    {"USBHS1_Config", 0x0},
    {"UsbFnIoRevNum", 0x00010001},
    {"PwrBtnShutdownFlag", 0x0},
    {"Sdc1GpioConfigOn", 0x1E92},
    {"Sdc2GpioConfigOn", 0x1E92},
    {"Sdc1GpioConfigOff", 0xA00},
    {"Sdc2GpioConfigOff", 0xA00},
    {"EnableSDHCSwitch", 0x1},
    {"SecurityFlag", 0xC4},
    {"TzAppsRegnAddr", 0x86D00000},
    {"TzAppsRegnSize", 0x03E00000},
    {"EnableLogFsSyncInRetail", 0x1},
    {"EnableSecurityHoleForSplashPartition", 0x1},
    {"DetectRetailUserAttentionHotkey", 0x00},
    {"DetectRetailUserAttentionHotkeyCode", 0x17},
    {"EnableOEMSetupAppInRetail", 0x0},
    {"EnableMultiThreading", 1},
    {"MaxCoreCnt", 8},
    {"EarlyInitCoreCnt", 1},
    {"EnableDisplayThread", 0},
    {"AllowNonPersistentVarsInRetail", 0x1},
    {"EnableUefiSecAppDebugLogDump", 0x0},
    {"DDRInfoNotifyFlag", 0x1},
    /* Terminator */
    {"Terminator", 0xFFFFFFFF}};

CONFIGURATION_DESCRIPTOR_EX *GetPlatformConfigurationMap()
{
  return gDeviceConfigurationDescriptorEx;
}
