/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATNetServiceListener : ATMessageLinkListener {
    BOOL  _enableTLS;
    NSString * _interfaceName;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _serviceDomain;
    NSString * _serviceName;
    NSString * _serviceType;
    NSObject<OS_tcp_listener> * _tcpListener;
}

@property (nonatomic) BOOL enableTLS;
@property (nonatomic, copy) NSString *interfaceName;

- (void).cxx_destruct;
- (BOOL)enableTLS;
- (id)initWithServiceName:(id)arg1 type:(id)arg2 domain:(id)arg3;
- (id)interfaceName;
- (void)setEnableTLS:(BOOL)arg1;
- (void)setInterfaceName:(id)arg1;
- (BOOL)start;
- (void)stop;

@end
