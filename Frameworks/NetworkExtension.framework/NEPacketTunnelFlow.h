/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEPacketTunnelFlow : NSObject {
    BOOL  _handlerSetup;
    struct NEVirtualInterface_s { } * _interface;
    long  _interfaceType;
    id /* block */  _packetHandler;
    NSObject<OS_dispatch_queue> * _queue;
    NSFileHandle * _socket;
}

@property BOOL handlerSetup;
@property (readonly) struct NEVirtualInterface_s { }*interface;
@property (readonly) long interfaceType;
@property (copy) id /* block */ packetHandler;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSFileHandle *socket;

- (void).cxx_destruct;
- (void)closeVirtualInterface;
- (void)dealloc;
- (BOOL)handlerSetup;
- (id)initWithVirtualInterfaceType:(long)arg1;
- (struct NEVirtualInterface_s { }*)interface;
- (long)interfaceType;
- (id /* block */)packetHandler;
- (id)queue;
- (void)readPacketsWithCompletionHandler:(id /* block */)arg1;
- (void)setHandlerSetup:(BOOL)arg1;
- (void)setPacketHandler:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)setSocket:(id)arg1;
- (BOOL)setVirtualInterfaceSocket:(id)arg1;
- (id)socket;
- (BOOL)writePackets:(id)arg1 withProtocols:(id)arg2;

@end
