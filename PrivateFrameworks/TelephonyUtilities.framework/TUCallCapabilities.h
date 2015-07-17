/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallCapabilities : NSObject

+ (id)_client;
+ (void)_sendNotificationsAfterRunningBlock:(id /* block */)arg1;
+ (void)_setClientServer:(id)arg1;
+ (BOOL)accountsSupportSecondaryCalling;
+ (BOOL)areRelayCallingFeaturesEnabled;
+ (id)callCapabilitiesClientXPCInterface;
+ (id)callCapabilitiesServerXPCInterface;
+ (BOOL)canAttemptEmergencyCallsInAirplaneMode;
+ (BOOL)canAttemptTelephonyCallsInAirplaneMode;
+ (void)cancelPinRequestFromPrimaryDevice;
+ (id)client;
+ (id)cloudCallingDevices;
+ (id)debugDescription;
+ (int)faceTimeAudioCallSupport;
+ (int)faceTimeVideoCallSupport;
+ (BOOL)hasDeviceSlotsAvailableForThumper;
+ (int)idsCallSupport;
+ (void)initializeCachedValues;
+ (void)invalidateAndRefreshThumperCallingProvisioningURL;
+ (void)invalidateAndRefreshWiFiCallingProvisioningURL;
+ (BOOL)isFaceTimeAudioAvailable;
+ (BOOL)isFaceTimeVideoAvailable;
+ (BOOL)isRelayCallingEnabled;
+ (BOOL)isRelayCallingEnabledForDeviceWithID:(id)arg1;
+ (BOOL)isThumperCallingAllowedForCurrentDevice;
+ (BOOL)isThumperCallingAllowedOnDefaultPairedSecondaryDevice;
+ (BOOL)isThumperCallingAllowedOnSecondaryDeviceWithID:(id)arg1;
+ (BOOL)isThumperCallingCurrentlyAvailable;
+ (BOOL)isThumperCallingEnabled;
+ (BOOL)isVoLTECallingEnabled;
+ (BOOL)isWiFiCallingCurrentlyAvailable;
+ (BOOL)isWiFiCallingEnabled;
+ (id)outgoingRelayCallerID;
+ (void)requestPinFromPrimaryDevice;
+ (void)setRelayCallingEnabled:(BOOL)arg1;
+ (void)setRelayCallingEnabled:(BOOL)arg1 forDeviceWithID:(id)arg2;
+ (void)setThumperCallingAllowed:(BOOL)arg1 onSecondaryDeviceWithID:(id)arg2;
+ (void)setThumperCallingAllowedOnDefaultPairedSecondaryDevice:(BOOL)arg1;
+ (void)setThumperCallingEnabled:(BOOL)arg1;
+ (void)setVoLTECallingEnabled:(BOOL)arg1;
+ (void)setWiFiCallingEnabled:(BOOL)arg1;
+ (BOOL)supportsFaceTimeAudioCalls;
+ (BOOL)supportsFaceTimeVideoCalls;
+ (BOOL)supportsHostingFaceTimeAudioCalls;
+ (BOOL)supportsHostingFaceTimeVideoCalls;
+ (BOOL)supportsHostingIDSCalls;
+ (BOOL)supportsHostingTelephonyCalls;
+ (BOOL)supportsRelayCalling;
+ (BOOL)supportsSimultaneousVoiceAndData;
+ (BOOL)supportsTelephonyCalls;
+ (BOOL)supportsThumperCalling;
+ (BOOL)supportsVoLTECalling;
+ (BOOL)supportsWiFiCalling;
+ (int)telephonyCallSupport;
+ (id)thumperCallingCapabilityInfo;
+ (id)wiFiCallingCapabilityInfo;

@end
