/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLUtilities : NSObject

+ (id)JSONSanitizeDictionary:(id)arg1;
+ (int)MavRev;
+ (id)MavRevStringQuery;
+ (void)_deallocatePortArray:(unsigned int*)arg1 withCount:(unsigned int)arg2;
+ (id)allSubClassesForClass:(Class)arg1;
+ (BOOL)alsCurveHigherThanDefault;
+ (id)bundleIDFromPid:(int)arg1;
+ (id)bundleIDFromURL:(id)arg1;
+ (id)cameraTypeString;
+ (short)canLogMode:(id)arg1 fullMode:(BOOL)arg2;
+ (BOOL)createAndChownDirectory:(id)arg1;
+ (id)dateFromTimeval:(struct timeval { int x1; int x2; })arg1;
+ (double)defaultBatteryEnergyCapacity;
+ (id)deviceBootTime;
+ (void)dispatchSyncWithoutDeadlockOnQueue:(id)arg1 withBlock:(id /* block */)arg2;
+ (unsigned long long)dispatchTimeInSeconds:(double)arg1;
+ (id)displayTypeStringQuery;
+ (void)exitWithReason:(short)arg1;
+ (id)extractDateStringAndUUIDStringFromFilePath:(id)arg1;
+ (BOOL)gasGaugeEnabled;
+ (int)getAudioRevOfDevice;
+ (int)getCameraTypeOfDevice;
+ (int)getDisplayTypeOfDevice;
+ (id)getIdentifierFromEntry:(id)arg1;
+ (id)getPlatformVersionOfDevice;
+ (int)getProcessorRevOfDevice;
+ (int)getTorchTypeOfDevice;
+ (BOOL)hasBaseband;
+ (BOOL)hasNfc;
+ (id)hashString:(id)arg1;
+ (BOOL)internalBuild;
+ (BOOL)is64Bit;
+ (BOOL)isICE;
+ (BOOL)isIPod;
+ (BOOL)isJ1;
+ (BOOL)isJ2;
+ (BOOL)isJ2A;
+ (BOOL)isJ71;
+ (BOOL)isJ72;
+ (BOOL)isJ73;
+ (BOOL)isJ76;
+ (BOOL)isJ81;
+ (BOOL)isJ82;
+ (BOOL)isJ85;
+ (BOOL)isJ85M;
+ (BOOL)isJ86;
+ (BOOL)isJ86M;
+ (BOOL)isJ86N;
+ (BOOL)isJ87;
+ (BOOL)isJ87M;
+ (BOOL)isJ87N;
+ (BOOL)isJ88NA;
+ (BOOL)isJ89NA;
+ (BOOL)isK93;
+ (BOOL)isK93A;
+ (BOOL)isK94;
+ (BOOL)isK95;
+ (BOOL)isMav1;
+ (BOOL)isMav10;
+ (BOOL)isMav13;
+ (BOOL)isMav2;
+ (BOOL)isMav4;
+ (BOOL)isMav5;
+ (BOOL)isMav7;
+ (BOOL)isN102;
+ (BOOL)isN41;
+ (BOOL)isN42;
+ (BOOL)isN48;
+ (BOOL)isN49;
+ (BOOL)isN51;
+ (BOOL)isN53;
+ (BOOL)isN56;
+ (BOOL)isN56N;
+ (BOOL)isN56NM;
+ (BOOL)isN59N;
+ (BOOL)isN61;
+ (BOOL)isN61N;
+ (BOOL)isN61NM;
+ (BOOL)isN78;
+ (BOOL)isN94;
+ (BOOL)isP101;
+ (BOOL)isP102;
+ (BOOL)isP103;
+ (BOOL)isP105;
+ (BOOL)isP106;
+ (BOOL)isP107;
+ (BOOL)isPingPongChargingWith:(BOOL)arg1 andBatteryLevelPercent:(double)arg2;
+ (BOOL)isPowerlogHelperd;
+ (BOOL)isValidString:(id)arg1;
+ (BOOL)isVrrSupported;
+ (BOOL)isWiFiChipset4324;
+ (BOOL)isWiFiChipset43291;
+ (BOOL)isWiFiChipset4330;
+ (BOOL)isWiFiChipset4334;
+ (BOOL)isWiFiChipset43342;
+ (BOOL)isWiFiChipset4345;
+ (BOOL)isWiFiChipset4350;
+ (BOOL)isWiFiChipset4350legacy;
+ (BOOL)isiPad;
+ (BOOL)isiPhone;
+ (id)launchdNameToProcessName:(id)arg1;
+ (short)logModeForEntryKey:(id)arg1 withKey:(id)arg2 andValue:(id)arg3;
+ (id)modeForEntryKey:(id)arg1 withKeyName:(id)arg2;
+ (BOOL)nonUIBuild;
+ (unsigned int)pidForName:(id)arg1;
+ (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
+ (id)processNameForPid:(int)arg1;
+ (void)refreshBUI;
+ (BOOL)runningAsMobileUser;
+ (id)runningAsUser;
+ (double)scaledPowerBasedOnPoint:(double)arg1 withPowerModel:(id)arg2;
+ (double)secondsFromMachTime:(unsigned long long)arg1;
+ (void)setMobileOwnerForFile:(id)arg1;
+ (id)shortUUIDString;
+ (BOOL)shouldLogForEntryKey:(id)arg1;
+ (id)torchTypeString;
+ (id)valueForMobileGestaltCapability:(id)arg1;
+ (id)workQueue;
+ (id)workQueueForClass:(Class)arg1;
+ (id)workQueueForKey:(id)arg1;

@end
