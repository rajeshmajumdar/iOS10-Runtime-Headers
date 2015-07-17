/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTCallCenter : NSObject {
    id /* block */  _callEventHandler;
    NSSet * _currentCalls;
    void * _server;
}

@property (nonatomic, copy) id /* block */ callEventHandler;
@property (retain) NSSet *currentCalls;

- (void)broadcastCallStateChangesIfNeededWithFailureLogMessage:(id)arg1;
- (BOOL)calculateCallStateChanges:(id)arg1;
- (id /* block */)callEventHandler;
- (void)cleanUpServerConnection;
- (id)currentCalls;
- (void)dealloc;
- (id)description;
- (BOOL)getCurrentCallSetFromServer:(id)arg1;
- (void)handleNotificationFromConnection:(void*)arg1 ofType:(id)arg2 withInfo:(id)arg3;
- (id)init;
- (void)setCallEventHandler:(id /* block */)arg1;
- (void)setCurrentCalls:(id)arg1;
- (BOOL)setUpServerConnection;

@end
