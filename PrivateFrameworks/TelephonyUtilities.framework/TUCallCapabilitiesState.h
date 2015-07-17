/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallCapabilitiesState : NSObject <NSCopying, NSSecureCoding, TUPubliclyAccessibleCopying> {
    BOOL  _accountsSupportSecondaryCalling;
    NSArray * _cloudCallingDevices;
    BOOL  _faceTimeAudioAvailable;
    BOOL  _faceTimeVideoAvailable;
    NSString * _outgoingRelayCallerID;
    BOOL  _pairedDeviceExists;
    NSDictionary * _relayCallingDisabledForDeviceID;
    BOOL  _relayCallingEnabled;
    BOOL  _supportsDisplayingFaceTimeAudioCalls;
    BOOL  _supportsDisplayingFaceTimeVideoCalls;
    BOOL  _supportsDisplayingTelephonyCalls;
    BOOL  _supportsHostingFaceTimeAudioCalls;
    BOOL  _supportsHostingFaceTimeVideoCalls;
    BOOL  _supportsHostingIDSCalls;
    BOOL  _supportsHostingTelephonyCalls;
    BOOL  _supportsRelayCalling;
    BOOL  _supportsSimultaneousVoiceAndData;
    BOOL  _supportsThumperCalling;
    NSSet * _thumperCallingActivePrimaryDeviceIDs;
    BOOL  _thumperCallingAllowedForCurrentDevice;
    NSSet * _thumperCallingAllowedSecondaryDeviceIDs;
    TUCTCapabilityInfo * _thumperCallingCapabilityInfo;
    BOOL  _thumperCallingCurrentlyAvailable;
    NSString * _thumperCallingLocalDeviceID;
    NSDictionary * _thumperCallingPrimaryDeviceIDToRemainingDeviceSlotsMap;
    TUCTCapabilityInfo * _voLTECallingCapabilityInfo;
    TUCTCapabilityInfo * _wiFiCallingCapabilityInfo;
    BOOL  _wiFiCallingCurrentlyAvailable;
    BOOL  _wiFiEmergencyCallingAllowed;
}

@property (nonatomic) BOOL accountsSupportSecondaryCalling;
@property (nonatomic, copy) NSArray *cloudCallingDevices;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) TUCloudCallingDevice *defaultPairedDevice;
@property (readonly, copy) NSString *description;
@property (getter=isFaceTimeAudioAvailable, nonatomic) BOOL faceTimeAudioAvailable;
@property (getter=isFaceTimeVideoAvailable, nonatomic) BOOL faceTimeVideoAvailable;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *outgoingRelayCallerID;
@property (nonatomic) BOOL pairedDeviceExists;
@property (nonatomic, copy) NSDictionary *relayCallingDisabledForDeviceID;
@property (getter=isRelayCallingEnabled, nonatomic) BOOL relayCallingEnabled;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsDisplayingFaceTimeAudioCalls;
@property (nonatomic) BOOL supportsDisplayingFaceTimeVideoCalls;
@property (nonatomic) BOOL supportsDisplayingTelephonyCalls;
@property (nonatomic) BOOL supportsHostingFaceTimeAudioCalls;
@property (nonatomic) BOOL supportsHostingFaceTimeVideoCalls;
@property (nonatomic) BOOL supportsHostingIDSCalls;
@property (nonatomic) BOOL supportsHostingTelephonyCalls;
@property (nonatomic) BOOL supportsRelayCalling;
@property (nonatomic) BOOL supportsSimultaneousVoiceAndData;
@property (nonatomic) BOOL supportsThumperCalling;
@property (nonatomic, copy) NSSet *thumperCallingActivePrimaryDeviceIDs;
@property (getter=isThumperCallingAllowedForCurrentDevice, nonatomic) BOOL thumperCallingAllowedForCurrentDevice;
@property (nonatomic, copy) NSSet *thumperCallingAllowedSecondaryDeviceIDs;
@property (nonatomic, copy) TUCTCapabilityInfo *thumperCallingCapabilityInfo;
@property (getter=isThumperCallingCurrentlyAvailable, nonatomic) BOOL thumperCallingCurrentlyAvailable;
@property (nonatomic, copy) NSString *thumperCallingLocalDeviceID;
@property (nonatomic, copy) NSDictionary *thumperCallingPrimaryDeviceIDToRemainingDeviceSlotsMap;
@property (nonatomic, copy) TUCTCapabilityInfo *voLTECallingCapabilityInfo;
@property (nonatomic, copy) TUCTCapabilityInfo *wiFiCallingCapabilityInfo;
@property (getter=isWiFiCallingCurrentlyAvailable, nonatomic) BOOL wiFiCallingCurrentlyAvailable;
@property (getter=isWiFiEmergencyCallingAllowed, nonatomic) BOOL wiFiEmergencyCallingAllowed;

+ (id)allowedCapabilityInformationClasses;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)accountsSupportSecondaryCalling;
- (id)cloudCallingDevices;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultPairedDevice;
- (id)description;
- (id)deviceIDForPhoneNumber:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isFaceTimeAudioAvailable;
- (BOOL)isFaceTimeVideoAvailable;
- (BOOL)isRelayCallingEnabled;
- (BOOL)isThumperCallingAllowedForCurrentDevice;
- (BOOL)isThumperCallingCurrentlyAvailable;
- (BOOL)isWiFiCallingCurrentlyAvailable;
- (BOOL)isWiFiEmergencyCallingAllowed;
- (id)outgoingRelayCallerID;
- (BOOL)pairedDeviceExists;
- (id)publiclyAccessibleCopy;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone { }*)arg1;
- (id)relayCallingDisabledForDeviceID;
- (void)setAccountsSupportSecondaryCalling:(BOOL)arg1;
- (void)setCloudCallingDevices:(id)arg1;
- (void)setFaceTimeAudioAvailable:(BOOL)arg1;
- (void)setFaceTimeVideoAvailable:(BOOL)arg1;
- (void)setOutgoingRelayCallerID:(id)arg1;
- (void)setPairedDeviceExists:(BOOL)arg1;
- (void)setRelayCallingDisabledForDeviceID:(id)arg1;
- (void)setRelayCallingEnabled:(BOOL)arg1;
- (void)setSupportsDisplayingFaceTimeAudioCalls:(BOOL)arg1;
- (void)setSupportsDisplayingFaceTimeVideoCalls:(BOOL)arg1;
- (void)setSupportsDisplayingTelephonyCalls:(BOOL)arg1;
- (void)setSupportsHostingFaceTimeAudioCalls:(BOOL)arg1;
- (void)setSupportsHostingFaceTimeVideoCalls:(BOOL)arg1;
- (void)setSupportsHostingIDSCalls:(BOOL)arg1;
- (void)setSupportsHostingTelephonyCalls:(BOOL)arg1;
- (void)setSupportsRelayCalling:(BOOL)arg1;
- (void)setSupportsSimultaneousVoiceAndData:(BOOL)arg1;
- (void)setSupportsThumperCalling:(BOOL)arg1;
- (void)setThumperCallingActivePrimaryDeviceIDs:(id)arg1;
- (void)setThumperCallingAllowedForCurrentDevice:(BOOL)arg1;
- (void)setThumperCallingAllowedSecondaryDeviceIDs:(id)arg1;
- (void)setThumperCallingCapabilityInfo:(id)arg1;
- (void)setThumperCallingCurrentlyAvailable:(BOOL)arg1;
- (void)setThumperCallingLocalDeviceID:(id)arg1;
- (void)setThumperCallingPrimaryDeviceIDToRemainingDeviceSlotsMap:(id)arg1;
- (void)setVoLTECallingCapabilityInfo:(id)arg1;
- (void)setWiFiCallingCapabilityInfo:(id)arg1;
- (void)setWiFiCallingCurrentlyAvailable:(BOOL)arg1;
- (void)setWiFiEmergencyCallingAllowed:(BOOL)arg1;
- (BOOL)supportsDisplayingFaceTimeAudioCalls;
- (BOOL)supportsDisplayingFaceTimeVideoCalls;
- (BOOL)supportsDisplayingTelephonyCalls;
- (BOOL)supportsHostingFaceTimeAudioCalls;
- (BOOL)supportsHostingFaceTimeVideoCalls;
- (BOOL)supportsHostingIDSCalls;
- (BOOL)supportsHostingTelephonyCalls;
- (BOOL)supportsRelayCalling;
- (BOOL)supportsSimultaneousVoiceAndData;
- (BOOL)supportsThumperCalling;
- (id)thumperCallingActivePrimaryDeviceIDs;
- (id)thumperCallingAllowedSecondaryDeviceIDs;
- (id)thumperCallingCapabilityInfo;
- (id)thumperCallingLocalDeviceID;
- (id)thumperCallingPrimaryDeviceIDToRemainingDeviceSlotsMap;
- (id)voLTECallingCapabilityInfo;
- (id)wiFiCallingCapabilityInfo;

@end
