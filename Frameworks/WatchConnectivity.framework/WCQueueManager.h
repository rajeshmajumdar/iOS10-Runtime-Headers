/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

@interface WCQueueManager : NSObject {
    BOOL  _canSend;
    NSMutableDictionary * _messageIDToCompletionHandler;
    BOOL  _messageOutstanding;
    NSMutableArray * _messageQueue;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property BOOL canSend;
@property (retain) NSMutableDictionary *messageIDToCompletionHandler;
@property BOOL messageOutstanding;
@property (retain) NSMutableArray *messageQueue;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)allowMessageSending;
- (BOOL)canSend;
- (void)handleSentMessageWithIdentifier:(id)arg1 error:(id)arg2;
- (id)init;
- (id)messageIDToCompletionHandler;
- (BOOL)messageOutstanding;
- (id)messageQueue;
- (void)onqueue_allowMessageSending;
- (void)onqueue_attemptToSend;
- (void)onqueue_dequeueMessage;
- (void)onqueue_enqueueMessage:(id)arg1;
- (void)onqueue_handleAcceptanceWithCurrentAccepted:(BOOL)arg1 nextAvailable:(BOOL)arg2;
- (void)onqueue_handleSentMessageWithIdentifier:(id)arg1 error:(id)arg2;
- (id)onqueue_peekMessage;
- (void)onqueue_sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setCanSend:(BOOL)arg1;
- (void)setMessageIDToCompletionHandler:(id)arg1;
- (void)setMessageOutstanding:(BOOL)arg1;
- (void)setMessageQueue:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
