/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXServer : NSObject {
    AXIPCClient * _client;
    AXIPCServer * _server;
    NSString * _serverIdentifier;
    BOOL  _shouldRegisterClientCallbackSourceOnMainRunloop;
}

@property (nonatomic, retain) AXIPCClient *client;
@property (nonatomic, retain) AXIPCServer *server;
@property (nonatomic, copy) NSString *serverIdentifier;
@property (nonatomic) BOOL shouldRegisterClientCallbackSourceOnMainRunloop;

- (BOOL)_connectIfNecessary;
- (void)_connectServerIfNecessary;
- (void)_didConnectToClient;
- (void)_didConnectToServer;
- (id)_serviceName;
- (void)_wasDisconnectedFromClient;
- (void)_willClearServer;
- (void)acquireAssertionWithType:(id)arg1 identifier:(id)arg2;
- (id)client;
- (void)dealloc;
- (void)relinquishAssertionWithType:(id)arg1 identifier:(id)arg2;
- (void)sendAsynchronousMessage:(id)arg1 replyOnQueue:(id)arg2 boolResultHandler:(id /* block */)arg3;
- (void)sendAsynchronousMessage:(id)arg1 replyOnQueue:(id)arg2 handler:(id /* block */)arg3;
- (void)sendAsynchronousMessage:(id)arg1 replyOnQueue:(id)arg2 objectResultHandler:(id /* block */)arg3;
- (id)sendMessage:(id)arg1;
- (void)sendSimpleMessage:(id)arg1;
- (BOOL)sendSimpleMessage:(id)arg1 enqueueError:(id*)arg2;
- (id)sendSimpleMessageWithObjectResult:(id)arg1;
- (BOOL)sendSimpleMessageWithResult:(id)arg1;
- (id)server;
- (id)serverIdentifier;
- (void)setClient:(id)arg1;
- (void)setServer:(id)arg1;
- (void)setServerIdentifier:(id)arg1;
- (void)setShouldRegisterClientCallbackSourceOnMainRunloop:(BOOL)arg1;
- (BOOL)shouldRegisterClientCallbackSourceOnMainRunloop;

@end
