/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRDXPCServer : NSObject <NSXPCConnectionDelegate, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableArray * _connections;
    NSXPCListener * _listener;
    unsigned int  _serverStartCount;
}

@property (nonatomic, readonly) NSArray *connections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSArray *remoteClientProxies;
@property (readonly) Class superclass;

+ (id)sharedServer;

- (void).cxx_destruct;
- (id)_init;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3;
- (id)connections;
- (void)dealloc;
- (id)init;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)remoteClientProxies;
- (void)start;
- (void)stop;

@end
