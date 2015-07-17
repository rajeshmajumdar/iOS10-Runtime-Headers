/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUIRequestOptions : NSObject <NSCopying, NSSecureCoding> {
    BOOL  _acousticIdEnabled;
    NSString * _appBundleIdentifier;
    NSString * _bluetoothDeviceAddress;
    AFBulletin * _bulletin;
    NSDictionary * _continuityInfo;
    int  _directActionEvent;
    double  _expectedTimestamp;
    NSNumber * _homeButtonUpFromBeep;
    BOOL  _initialBringUp;
    NSDictionary * _messagesDirectActionContext;
    SASPronunciationContext * _pronunciationContext;
    BOOL  _pronunciationRequest;
    AFRequestInfo * _requestInfo;
    int  _requestSource;
    NSString * _serverCommandId;
    NSURL * _speechFileURL;
    NSString * _text;
    double  _timestamp;
    BOOL  _useAutomaticEndpointing;
    BOOL  _useStreamingDictation;
}

@property (nonatomic) BOOL acousticIdEnabled;
@property (nonatomic, copy) NSString *appBundleIdentifier;
@property (nonatomic, copy) NSString *bluetoothDeviceAddress;
@property (nonatomic, retain) AFBulletin *bulletin;
@property (nonatomic, copy) NSDictionary *continuityInfo;
@property (nonatomic) int directActionEvent;
@property (nonatomic) double expectedTimestamp;
@property (getter=isForSpeechRequest, nonatomic, readonly) BOOL forSpeechRequest;
@property (getter=isForStark, nonatomic, readonly) BOOL forStark;
@property (nonatomic, retain) NSNumber *homeButtonUpFromBeep;
@property (getter=isInitialBringUp, nonatomic) BOOL initialBringUp;
@property (nonatomic, copy) NSDictionary *messagesDirectActionContext;
@property (nonatomic, retain) SASPronunciationContext *pronunciationContext;
@property (getter=isPronunciationRequest, nonatomic) BOOL pronunciationRequest;
@property (nonatomic, retain) AFRequestInfo *requestInfo;
@property (nonatomic) int requestSource;
@property (nonatomic, copy) NSString *serverCommandId;
@property (nonatomic, copy) NSURL *speechFileURL;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL useAutomaticEndpointing;
@property (nonatomic) BOOL useStreamingDictation;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_configureStreamingDictationForSource:(int)arg1;
- (BOOL)acousticIdEnabled;
- (id)appBundleIdentifier;
- (id)bluetoothDeviceAddress;
- (id)bulletin;
- (id)continuityInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)directActionEvent;
- (void)encodeWithCoder:(id)arg1;
- (double)expectedTimestamp;
- (id)homeButtonUpFromBeep;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestSource:(int)arg1;
- (BOOL)isForSpeechRequest;
- (BOOL)isForStark;
- (BOOL)isInitialBringUp;
- (BOOL)isPronunciationRequest;
- (id)messagesDirectActionContext;
- (id)pronunciationContext;
- (id)requestInfo;
- (int)requestSource;
- (id)serverCommandId;
- (void)setAcousticIdEnabled:(BOOL)arg1;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setBluetoothDeviceAddress:(id)arg1;
- (void)setBulletin:(id)arg1;
- (void)setContinuityInfo:(id)arg1;
- (void)setDirectActionEvent:(int)arg1;
- (void)setExpectedTimestamp:(double)arg1;
- (void)setHomeButtonUpFromBeep:(id)arg1;
- (void)setInitialBringUp:(BOOL)arg1;
- (void)setMessagesDirectActionContext:(id)arg1;
- (void)setPronunciationContext:(id)arg1;
- (void)setPronunciationRequest:(BOOL)arg1;
- (void)setRequestInfo:(id)arg1;
- (void)setRequestSource:(int)arg1;
- (void)setServerCommandId:(id)arg1;
- (void)setSpeechFileURL:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setUseAutomaticEndpointing:(BOOL)arg1;
- (void)setUseStreamingDictation:(BOOL)arg1;
- (id)speechFileURL;
- (id)text;
- (double)timestamp;
- (BOOL)useAutomaticEndpointing;
- (BOOL)useStreamingDictation;

@end
