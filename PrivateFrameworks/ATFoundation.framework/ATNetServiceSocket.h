/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATNetServiceSocket : ATSocket <NSNetServiceDelegate, NSStreamDelegate> {
    BOOL  _connected;
    NSObject<OS_tcp_connection> * _connection;
    BOOL  _enableTLS;
    NSString * _hostname;
    NSString * _interfaceName;
    unsigned short  _port;
    NSObject<OS_dispatch_queue> * _queue;
    BOOL  _readBuffer;
    NSObject<OS_dispatch_semaphore> * _sema;
    NSString * _serviceDomain;
    NSString * _serviceName;
    NSString * _serviceType;
    NSObject<OS_dispatch_source> * _source;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableTLS;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *interfaceName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_connect;
- (void)closeDescriptor;
- (BOOL)enableTLS;
- (id)initWithServiceName:(id)arg1 type:(id)arg2 domain:(id)arg3;
- (id)interfaceName;
- (BOOL)open;
- (void)setEnableTLS:(BOOL)arg1;
- (void)setInterfaceName:(id)arg1;

@end
