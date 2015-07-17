/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMNebulaDaemonProxyManager : NSObject <CAMNebulaDaemonClientProtocol, CAMNebulaDaemonProtocol> {
    NSXPCConnection * __connection;
    int  __connectionCount;
    NSObject<OS_dispatch_queue> * __queue;
    <CAMNebulaDaemonTimelapseClientProtocol> * _timelapseClientDelegate;
}

@property (nonatomic, readonly) NSXPCConnection *_connection;
@property (nonatomic, readonly) int _connectionCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_queue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic) <CAMNebulaDaemonTimelapseClientProtocol> *timelapseClientDelegate;

+ (id)_clientProtocolInterface;
+ (id)_daemonProtocolInterface;

- (void).cxx_destruct;
- (void)_closeConnectionToDaemon;
- (id)_connection;
- (int)_connectionCount;
- (void)_ensureConnectionToDaemon;
- (void)_getProxyForExecutingBlock:(id /* block */)arg1;
- (id)_queue;
- (void)closeConnectionToDaemon;
- (void)ensureConnectionToDaemon;
- (void)finishCaptureForTimelapseWithUUID:(id)arg1;
- (void)forceStopTimelapseCaptureWithReasons:(int)arg1;
- (id)init;
- (void)performCrashRecoveryIfNeededForceEndLastTimelapseSession:(BOOL)arg1;
- (void)resumeTimelapseWithUUID:(id)arg1;
- (void)setTimelapseClientDelegate:(id)arg1;
- (void)startTimelapseWithUUID:(id)arg1;
- (void)stopTimelapseWithUUID:(id)arg1;
- (id)timelapseClientDelegate;
- (void)updatePendingWorkFromDiskForceEndLastSession:(BOOL)arg1;
- (void)updateTimelapseWithUUID:(id)arg1;

@end
