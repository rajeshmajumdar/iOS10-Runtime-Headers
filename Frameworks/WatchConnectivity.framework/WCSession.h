/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

@interface WCSession : NSObject <WCXPCManagerDelegate> {
    NSDictionary * _applicationContext;
    BOOL  _complicationEnabled;
    WCSessionUserInfoTransfer * _currentComplicationUserInfoTransfer;
    NSMutableSet * _currentMessageIdentifiersAwaitingReply;
    NSMutableDictionary * _currentMessages;
    <WCSessionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSMutableDictionary * _internalOutstandingFileTransfers;
    NSMutableDictionary * _internalOutstandingUserInfoTransfers;
    BOOL  _paired;
    WCQueueManager * _queueManager;
    BOOL  _reachable;
    NSDictionary * _receivedApplicationContext;
    BOOL  _sessionActivated;
    NSObject<OS_dispatch_group> * _sessionStateGroup;
    BOOL  _watchAppInstalled;
    NSURL * _watchDirectoryURL;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, copy) NSDictionary *applicationContext;
@property (getter=isComplicationEnabled, nonatomic) BOOL complicationEnabled;
@property (retain) WCSessionUserInfoTransfer *currentComplicationUserInfoTransfer;
@property (retain) NSMutableSet *currentMessageIdentifiersAwaitingReply;
@property (readonly) NSMutableDictionary *currentMessages;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WCSessionDelegate> *delegate;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (retain) NSMutableDictionary *internalOutstandingFileTransfers;
@property (retain) NSMutableDictionary *internalOutstandingUserInfoTransfers;
@property (nonatomic, readonly, copy) NSArray *outstandingFileTransfers;
@property (nonatomic, readonly, copy) NSArray *outstandingUserInfoTransfers;
@property (getter=isPaired, nonatomic) BOOL paired;
@property (retain) WCQueueManager *queueManager;
@property (getter=isReachable, nonatomic) BOOL reachable;
@property (nonatomic, copy) NSDictionary *receivedApplicationContext;
@property BOOL sessionActivated;
@property (retain) NSObject<OS_dispatch_group> *sessionStateGroup;
@property (readonly) Class superclass;
@property (getter=isWatchAppInstalled, nonatomic) BOOL watchAppInstalled;
@property (nonatomic, retain) NSURL *watchDirectoryURL;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)defaultSession;
+ (BOOL)isSupported;

- (void).cxx_destruct;
- (id)_init;
- (void)_onqueue_notifyOfFileError:(id)arg1 withFileTransfer:(id)arg2;
- (void)_onqueue_notifyOfMessageError:(id)arg1 withErrorHandler:(id /* block */)arg2;
- (void)_onqueue_sendResponseError:(id)arg1 identifier:(id)arg2 dictionaryMessage:(BOOL)arg3;
- (void)activateSession;
- (id)applicationContext;
- (void)cancelFileTransfer:(id)arg1;
- (void)cancelUserInfo:(id)arg1;
- (id)createAndStartTimerOnWorkQueueWithHandler:(id /* block */)arg1;
- (id)currentComplicationUserInfoTransfer;
- (id)currentMessageIdentifiersAwaitingReply;
- (id)currentMessages;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)description;
- (void)didSessionStateChange:(id)arg1 withChangeHandler:(id /* block */)arg2;
- (BOOL)didWatchURLChange:(id)arg1;
- (id)errorIfPreconditionsNotSatisfied;
- (unsigned int)hash;
- (id)init;
- (id)internalOutstandingFileTransfers;
- (id)internalOutstandingUserInfoTransfers;
- (BOOL)isComplicationEnabled;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPaired;
- (BOOL)isReachable;
- (BOOL)isWatchAppInstalled;
- (BOOL)logAndTestIfUnactivatedOrMissingDelegate;
- (void)notifyOfFileError:(id)arg1 withFileTransfer:(id)arg2;
- (void)notifyOfUserInfoError:(id)arg1 withUserInfoTransfer:(id)arg2;
- (void)onqueue_addOutstandingFileTransfer:(id)arg1;
- (id)onqueue_addOutstandingUserInfoTransfer:(id)arg1;
- (void)onqueue_handleDataMessageRequest:(id)arg1;
- (void)onqueue_handleDictionaryMessageRequest:(id)arg1;
- (void)onqueue_handleMessageCompletionWithError:(id)arg1 withMessageID:(id)arg2;
- (void)onqueue_handleResponseData:(id)arg1 record:(id)arg2;
- (void)onqueue_handleResponseDictionary:(id)arg1 record:(id)arg2;
- (void)onqueue_loadAppContexts;
- (void)onqueue_loadOutstandingFileTransfers;
- (void)onqueue_loadOutstandingUserInfoTransfers;
- (void)onqueue_notifyOfUserInfoError:(id)arg1 withUserInfoTransfer:(id)arg2;
- (void)onqueue_removeOutstandingFileTransfer:(id)arg1;
- (void)onqueue_removeOutstandingUserInfoTransfer:(id)arg1;
- (void)onqueue_sendMessageData:(id)arg1 replyHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3 dictionaryMessage:(BOOL)arg4;
- (void)onqueue_sendResponseData:(id)arg1 identifier:(id)arg2 dictionaryMessage:(BOOL)arg3;
- (void)onqueue_sendResponseDictionary:(id)arg1 identifier:(id)arg2;
- (void)onqueue_setCurrentComplicationUserInfoTransfer:(id)arg1;
- (void)onqueue_transferUserInfo:(id)arg1 withUserInfo:(id)arg2;
- (void)onqueue_updateSessionState:(id)arg1;
- (void)onqueue_updateWatchDirectoryURL:(id)arg1;
- (id)outstandingFileTransfers;
- (id)outstandingUserInfoTransfers;
- (id)queueManager;
- (id)receivedApplicationContext;
- (void)sendMessage:(id)arg1 replyHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (void)sendMessageData:(id)arg1 replyHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (BOOL)sessionActivated;
- (BOOL)sessionFileExists:(id)arg1;
- (id)sessionStateGroup;
- (void)setApplicationContext:(id)arg1;
- (void)setComplicationEnabled:(BOOL)arg1;
- (void)setCurrentComplicationUserInfoTransfer:(id)arg1;
- (void)setCurrentMessageIdentifiersAwaitingReply:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInternalOutstandingFileTransfers:(id)arg1;
- (void)setInternalOutstandingUserInfoTransfers:(id)arg1;
- (void)setPaired:(BOOL)arg1;
- (void)setQueueManager:(id)arg1;
- (void)setReachable:(BOOL)arg1;
- (void)setReceivedApplicationContext:(id)arg1;
- (void)setSessionActivated:(BOOL)arg1;
- (void)setSessionStateGroup:(id)arg1;
- (void)setWatchAppInstalled:(BOOL)arg1;
- (void)setWatchDirectoryURL:(id)arg1;
- (void)storeAppContext:(id)arg1 withAppContextData:(id)arg2;
- (void)storeReceivedAppContext:(id)arg1 withAppContextData:(id)arg2;
- (id)transferCurrentComplicationUserInfo:(id)arg1;
- (id)transferFile:(id)arg1 metadata:(id)arg2;
- (id)transferUserInfo:(id)arg1;
- (BOOL)updateApplicationContext:(id)arg1 error:(id*)arg2;
- (id)watchDirectoryURL;
- (id)workQueue;
- (void)xpcManager:(id)arg1 handUserInfoTransfer:(id)arg2;
- (void)xpcManager:(id)arg1 handleApplicationContext:(id)arg2;
- (void)xpcManager:(id)arg1 handleFileTransferFinishedWithIdentifier:(id)arg2 error:(id)arg3;
- (void)xpcManager:(id)arg1 handleRequest:(id)arg2;
- (void)xpcManager:(id)arg1 handleResponse:(id)arg2;
- (void)xpcManager:(id)arg1 handleSentMessageWithIdentifier:(id)arg2 error:(id)arg3;
- (void)xpcManager:(id)arg1 handleSessionFile:(id)arg2;
- (void)xpcManager:(id)arg1 handleSessionStateChanged:(id)arg2;
- (void)xpcManager:(id)arg1 handleUserInfoTransferFinishedWithIdentifier:(id)arg2 error:(id)arg3;
- (void)xpcManagerHandleMessageSendingAllowed:(id)arg1;

@end
