/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSecureSession : NSObject {
    BOOL  _clientMode;
    NSString * _destination;
    HAPRemoteSession * _hapRemoteSession;
    HMDIdentityRegistry * _identityRegistry;
    HMDIDSMessageDispatcher * _msgDispatcher;
    HMDNotificationRelay * _notificationRelay;
    HMDUser * _peer;
    NSUUID * _sessionID;
    HMDSecureSessionNotifications * _sessionNotifications;
    id /* block */  _stoppedNotificationHandler;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) BOOL clientMode;
@property (nonatomic, copy) NSString *destination;
@property (nonatomic, retain) HAPRemoteSession *hapRemoteSession;
@property (nonatomic, retain) HMDIdentityRegistry *identityRegistry;
@property (nonatomic, retain) HMDIDSMessageDispatcher *msgDispatcher;
@property (nonatomic, retain) HMDNotificationRelay *notificationRelay;
@property (nonatomic, retain) HMDUser *peer;
@property (nonatomic, readonly, copy) NSUUID *sessionID;
@property (nonatomic, retain) HMDSecureSessionNotifications *sessionNotifications;
@property (nonatomic, copy) id /* block */ sessionStoppedNotificationHandler;
@property (nonatomic, copy) id /* block */ stoppedNotificationHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)whitelistedRemoteAccessCommands;

- (void).cxx_destruct;
- (void)_configureAsClient:(BOOL)arg1 queue:(id)arg2 nonSecure:(BOOL)arg3 completionHandler:(id /* block */)arg4;
- (BOOL)clientMode;
- (id)destination;
- (void)handleSecureMessage:(id)arg1;
- (id)hapRemoteSession;
- (id)identityRegistry;
- (id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 sessionNotifications:(id)arg3 identityRegistry:(id)arg4 notificationRelay:(id)arg5 clientMode:(BOOL)arg6 sessionID:(id)arg7;
- (id)msgDispatcher;
- (id)notificationRelay;
- (id)peer;
- (void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(id /* block */)arg4;
- (id)sessionID;
- (id)sessionNotifications;
- (id /* block */)sessionStoppedNotificationHandler;
- (void)setClientMode:(BOOL)arg1;
- (void)setDestination:(id)arg1;
- (void)setHapRemoteSession:(id)arg1;
- (void)setIdentityRegistry:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setNotificationRelay:(id)arg1;
- (void)setPeer:(id)arg1;
- (void)setSessionNotifications:(id)arg1;
- (void)setSessionStoppedNotificationHandler:(id /* block */)arg1;
- (void)setStoppedNotificationHandler:(id /* block */)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)startClientAndInvokeOnQueue:(id)arg1 nonSecure:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (void)startServerAndInvokeOnQueue:(id)arg1 nonSecure:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (void)stop;
- (id /* block */)stoppedNotificationHandler;
- (id)workQueue;

@end
