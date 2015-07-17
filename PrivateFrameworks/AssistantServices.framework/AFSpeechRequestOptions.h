/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSpeechRequestOptions : NSObject <NSSecureCoding> {
    BOOL  _acousticIdEnabled;
    int  _activationEvent;
    double  _activationEventTime;
    NSFileHandle * _audioFileHandle;
    int  _audioFileType;
    NSString * _btDeviceAddress;
    double  _expectedActivationEventTime;
    double  _homeButtonDownEventTime;
    NSNumber * _homeButtonUpFromBeep;
    BOOL  _isEyesFree;
    BOOL  _isInitialBringUp;
    NSString * _serverCommandId;
    BOOL  _useAutomaticEndpointing;
    BOOL  _useStreamingDictation;
    NSDictionary * _voiceTriggerEventInfo;
}

@property (nonatomic) BOOL acousticIdEnabled;
@property (nonatomic) int activationEvent;
@property (nonatomic) double activationEventTime;
@property (nonatomic, retain) NSFileHandle *audioFileHandle;
@property (nonatomic) int audioFileType;
@property (nonatomic, copy) NSString *btDeviceAddress;
@property (nonatomic) double expectedActivationEventTime;
@property (nonatomic) double homeButtonDownEventTime;
@property (nonatomic, copy) NSNumber *homeButtonUpFromBeep;
@property (nonatomic) BOOL isEyesFree;
@property (nonatomic) BOOL isInitialBringUp;
@property (nonatomic, copy) NSString *serverCommandId;
@property (nonatomic) BOOL useAutomaticEndpointing;
@property (nonatomic) BOOL useStreamingDictation;
@property (nonatomic, copy) NSDictionary *voiceTriggerEventInfo;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)acousticIdEnabled;
- (int)activationEvent;
- (double)activationEventTime;
- (id)audioFileHandle;
- (int)audioFileType;
- (id)btDeviceAddress;
- (void)encodeWithCoder:(id)arg1;
- (double)expectedActivationEventTime;
- (double)homeButtonDownEventTime;
- (id)homeButtonUpFromBeep;
- (id)initWithActivationEvent:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEyesFree;
- (BOOL)isInitialBringUp;
- (id)serverCommandId;
- (void)setAcousticIdEnabled:(BOOL)arg1;
- (void)setActivationEvent:(int)arg1;
- (void)setActivationEventTime:(double)arg1;
- (void)setAudioFileHandle:(id)arg1;
- (void)setAudioFileType:(int)arg1;
- (void)setBtDeviceAddress:(id)arg1;
- (void)setExpectedActivationEventTime:(double)arg1;
- (void)setHomeButtonDownEventTime:(double)arg1;
- (void)setHomeButtonUpFromBeep:(id)arg1;
- (void)setIsEyesFree:(BOOL)arg1;
- (void)setIsInitialBringUp:(BOOL)arg1;
- (void)setServerCommandId:(id)arg1;
- (void)setUseAutomaticEndpointing:(BOOL)arg1;
- (void)setUseStreamingDictation:(BOOL)arg1;
- (void)setVoiceTriggerEventInfo:(id)arg1;
- (BOOL)useAutomaticEndpointing;
- (BOOL)useStreamingDictation;
- (id)voiceTriggerEventInfo;

@end
