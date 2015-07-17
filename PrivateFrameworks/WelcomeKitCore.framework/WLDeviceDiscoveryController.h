/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLDeviceDiscoveryController : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate, WLDeviceDiscoverySocketHandlerDelegate> {
    NSObject<OS_dispatch_queue> * _discoveryRequestSerialQueue;
    NSObject<OS_dispatch_source> * _incomingConnSource;
    int  _listenerSocket;
    id /* block */  _nextIncomingConnectionHandler;
    NSString * _pairingSecret;
    NSNetService * _publishedService;
    NSMutableArray * _services;
    NSMutableArray * _socketHandlers;
    NSMutableArray * _sourceDevices;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSArray *sourceDevices;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_defaultChannel;
- (id)_generatePairingSecret;
- (id)_hashWithString:(id)arg1;
- (void)_postSourceDevicesDidChangeNotification;
- (id)_pskWithSecret:(id)arg1;
- (void)_queue_startDiscoveryWithCompletion:(id /* block */)arg1;
- (void)_queue_stopDeviceDiscoveryWithCompletion:(id /* block */)arg1;
- (void)_queue_stopWiFiAndDeviceDiscoveryWithCompletion:(id /* block */)arg1;
- (BOOL)_shouldForceDiscoveryError;
- (id)_ssidWithSecret:(id)arg1;
- (int)acceptIncomingConnectionWithListenerSocket:(int)arg1 nonBlocking:(BOOL)arg2;
- (void)attemptDirectConnectionToAddress:(id)arg1;
- (int)createListenerSocketOnPort:(unsigned int)arg1;
- (void)deviceDiscoverySocketHandler:(id)arg1 didFailToHandshakeWithError:(id)arg2;
- (void)deviceDiscoverySocketHandler:(id)arg1 didFinishHandshakeWithSourceDevice:(id)arg2;
- (void)deviceDiscoverySocketHandler:(id)arg1 wasInvalidatedForSourceDevice:(id)arg2 withError:(id)arg3;
- (id)init;
- (id)listenForConnectionOnSocket:(int)arg1 withConnectionHandler:(id /* block */)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)setNextIncomingConnectionHandler:(id /* block */)arg1;
- (id)sourceDevices;
- (void)startWiFiAndDeviceDiscoveryWithCompletion:(id /* block */)arg1;
- (void)stopDeviceDiscoveryWithCompletion:(id /* block */)arg1;
- (void)stopWiFiAndDeviceDiscoveryWithCompletion:(id /* block */)arg1;

@end
