/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEExtensionTunnelProviderContext : NEExtensionProviderContext <NEExtensionTunnelProviderHostProtocol, NEExtensionTunnelProviderProtocol> {
    NEIPC * _ipc;
    NSObject<OS_dispatch_source> * _ipcIdleTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (retain) NEIPC *ipc;
@property (retain) NSObject<OS_dispatch_source> *ipcIdleTimer;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)didSetReasserting:(BOOL)arg1;
- (void)dispose;
- (void)establishIPCWithCompletionHandler:(id /* block */)arg1;
- (void)handleAppMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleIPCDetached;
- (id)ipc;
- (id)ipcIdleTimer;
- (void)resetIPCIdleTimer;
- (void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2 deviceIdentifier:(id)arg3;
- (void)setIpc:(id)arg1;
- (void)setIpcIdleTimer:(id)arg1;
- (void)setTunnelConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;

@end
