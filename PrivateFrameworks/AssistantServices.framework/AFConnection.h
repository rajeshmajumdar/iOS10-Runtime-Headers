/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFConnection : NSObject {
    int  _activeRequestUsefulUserResultType;
    unsigned int  _audioSessionID;
    NSArray * _cachedBulletins;
    unsigned int  _clientStateIsInSync;
    NSXPCConnection * _connection;
    <AFAssistantUIService> * _delegate;
    BOOL  _hasActiveRequest;
    BOOL  _hasActiveTimeout;
    unsigned int  _hasOutstandingRequest;
    unsigned int  _isCapturingSpeech;
    NSError * _lastRetryError;
    void * _levelsSharedMem;
    NSObject<OS_dispatch_source> * _levelsTimer;
    NSString * _outstandingRequestClass;
    NSMutableDictionary * _replyHandlerForAceId;
    unsigned long  _sharedMemSize;
    unsigned int  _shouldSpeak;
    <AFSpeechDelegate> * _speechDelegate;
    unsigned int  _stateInSync;
    unsigned int  _voiceOverIsActive;
}

@property (nonatomic) <AFAssistantUIService> *delegate;
@property (nonatomic, readonly) BOOL isRecording;
@property (nonatomic) <AFSpeechDelegate> *speechDelegate;

+ (BOOL)assistantIsSupported;
+ (BOOL)assistantIsSupportedForLanguageCode:(id)arg1 error:(id*)arg2;
+ (void)beginMonitoringAvailability;
+ (id)currentLanguageCode;
+ (void)defrost;
+ (void)initialize;
+ (BOOL)isAvailable;
+ (id)outputVoice;
+ (BOOL)siriIsSupportedForLanguageCode:(id)arg1 deviceProductVersion:(id)arg2 error:(id*)arg3;
+ (BOOL)siriIsSupportedForLanguageCode:(id)arg1 productName:(id)arg2 productVersion:(id)arg3 error:(id*)arg4;
+ (void)stopMonitoringAvailability;
+ (BOOL)userDataSyncNeeded;

- (void).cxx_destruct;
- (void)_aceConnectionWillRetryOnError:(id)arg1;
- (void)_barrier;
- (id)_cachedBulletins;
- (void)_cancelRequestTimeout;
- (void)_checkAndSetIsCapturingSpeech:(BOOL)arg1;
- (void)_clearAssistantInfoForAccountWithIdentifier:(id)arg1;
- (void)_clearConnection;
- (id)_clientService;
- (id)_clientServiceWithErrorHandler:(id /* block */)arg1;
- (id)_connection;
- (void)_connectionInterrupted;
- (void)_doCommand:(id)arg1 reply:(id /* block */)arg2;
- (void)_extendExistingRequestTimeout;
- (void)_extendRequestTimeout;
- (void)_invokeRequestTimeout;
- (void)_requestDidEnd;
- (void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(BOOL)arg2;
- (void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(BOOL)arg2 isBackgroundRequest:(BOOL)arg3;
- (void)_scheduleRequestTimeout;
- (void)_setAudioSessionID:(unsigned int)arg1;
- (void)_setLevelsWithSharedMem:(id)arg1;
- (void)_setShouldSpeak:(BOOL)arg1;
- (void)_stopLevelUpdates;
- (void)_tellDelegateAudioSessionIDChanged:(unsigned int)arg1;
- (void)_tellDelegateDidDetectMusic;
- (void)_tellDelegateDidFinishAcousticIDRequestWithSuccess:(BOOL)arg1;
- (void)_tellDelegateInvalidateCurrentUserActivity;
- (void)_tellDelegateRequestFailed:(id)arg1 requestClass:(id)arg2;
- (void)_tellDelegateRequestFinished;
- (void)_tellDelegateRequestWillStart;
- (void)_tellDelegateSetUserActivityInfo:(id)arg1 webpageURL:(id)arg2;
- (void)_tellDelegateShouldSpeakChanged:(BOOL)arg1;
- (void)_tellDelegateWillStartAcousticIDRequest;
- (void)_tellSpeechDelegateRecognitionDidFail:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidBeginOnAVRecordRoute:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidCancel;
- (void)_tellSpeechDelegateRecordingDidChangeAVRecordRoute:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidEnd;
- (void)_tellSpeechDelegateRecordingDidFail:(id)arg1;
- (void)_tellSpeechDelegateRecordingWillBegin;
- (void)_tellSpeechDelegateSpeechRecognized:(id)arg1;
- (void)_tellSpeechDelegateSpeechRecognizedPartialResult:(id)arg1;
- (void)_updateClientState;
- (void)_updateState;
- (void)_willCancelRequest;
- (void)_willCompleteRequest;
- (void)_willEndSession;
- (void)_willFailRequestWithError:(id)arg1;
- (void)_willPresentUsefulUserResultWithType:(int)arg1;
- (void)_willStartRequestForSpeech:(BOOL)arg1;
- (unsigned int)audioSessionID;
- (float)averagePower;
- (void)cancelRequest;
- (void)cancelSpeech;
- (void)clearContext;
- (void)dealloc;
- (id)delegate;
- (void)didDismissUI;
- (void)endSession;
- (void)forceAudioSessionActive;
- (void)getDeferredObjectsWithIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (BOOL)isRecording;
- (float)peakPower;
- (void)preheatWithStyle:(int)arg1;
- (void)prepareForPhoneCall;
- (void)recordRequestMetric:(id)arg1 withTimestamp:(double)arg2;
- (void)recordUIMetrics:(id)arg1;
- (void)rollbackClearContext;
- (void)rollbackRequest;
- (void)sendGenericAceCommand:(id)arg1;
- (void)sendGenericAceCommand:(id)arg1 conflictHandler:(id /* block */)arg2;
- (void)sendReplyCommand:(id)arg1;
- (void)setAlertContextWithBulletins:(id)arg1;
- (void)setApplicationContext:(id)arg1;
- (void)setApplicationContextForApplicationInfos:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsStark:(BOOL)arg1;
- (void)setLockState:(BOOL)arg1 screenLocked:(BOOL)arg2;
- (void)setOverriddenApplicationContext:(id)arg1 withContext:(id)arg2;
- (void)setSpeechDelegate:(id)arg1;
- (void)setVoiceOverIsActive:(BOOL)arg1;
- (BOOL)shouldSpeak;
- (id)speechDelegate;
- (void)startAcousticIDRequestWithOptions:(id)arg1;
- (void)startContinuationRequestWithUserInfo:(id)arg1;
- (void)startDirectActionRequestWithString:(id)arg1;
- (void)startRecordingForPendingSpeechRequestWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)startRequestWithCorrectedText:(id)arg1 forSpeechIdentifier:(id)arg2;
- (void)startRequestWithInfo:(id)arg1;
- (void)startRequestWithText:(id)arg1;
- (void)startSpeechPronunciationRequestWithOptions:(id)arg1 pronunciationContext:(id)arg2;
- (void)startSpeechRequestWithOptions:(id)arg1;
- (void)startSpeechRequestWithSpeechFileAtURL:(id)arg1;
- (void)startSpeechRequestWithSpeechFileAtURL:(id)arg1 isNarrowBand:(BOOL)arg2;
- (void)startUIRequest;
- (void)stopSpeech;
- (void)stopSpeechWithOptions:(id)arg1;
- (void)telephonyRequestCompleted;
- (void)updateSpeechOptions:(id)arg1;
- (void)usefulUserResultWillPresent;
- (void)willPresentUI;
- (void)willPresentUsefulUserResultWithType:(int)arg1;
- (void)willSetApplicationContextWithRefId:(id)arg1;

@end
