/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CECInterface : CoreRCInterface {
    unsigned short  _addressMask;
    <CECInterfaceDelegate> * _delegate;
    struct CECFrame { 
        unsigned char blocks[16]; 
        unsigned int length : 5; 
        unsigned int reserved : 3; 
    }  _lastReceivedFrame;
    BOOL  _promiscMode;
}

@property (nonatomic, readonly) unsigned short addressMask;
@property (nonatomic) <CECInterfaceDelegate> *delegate;
@property (nonatomic, readonly) BOOL isValid;
@property (nonatomic, readonly) struct CECFrame { unsigned char x1[16]; unsigned int x2 : 5; unsigned int x3 : 3; } lastReceivedFrame;
@property (nonatomic, readonly) BOOL promiscMode;
@property (nonatomic, readonly) NSDictionary *properties;

- (unsigned short)addressMask;
- (BOOL)allocateCECAddress:(unsigned char*)arg1 forDeviceType:(unsigned char)arg2 error:(id*)arg3;
- (BOOL)deallocateCECAddress:(unsigned char)arg1 error:(id*)arg2;
- (id)delegate;
- (BOOL)errorIsNack:(id)arg1;
- (void)hibernationChanged:(BOOL)arg1;
- (id)init;
- (BOOL)isValid;
- (struct CECFrame { unsigned char x1[16]; unsigned int x2 : 5; unsigned int x3 : 3; })lastReceivedFrame;
- (BOOL)pingTo:(unsigned char)arg1 acknowledged:(BOOL*)arg2 error:(id*)arg3;
- (BOOL)promiscMode;
- (id)properties;
- (void)receivedFrame:(struct CECFrame { unsigned char x1[16]; unsigned int x2 : 5; unsigned int x3 : 3; })arg1;
- (BOOL)sendFrame:(struct CECFrame { unsigned char x1[16]; unsigned int x2 : 5; unsigned int x3 : 3; })arg1 error:(id*)arg2;
- (BOOL)sendFrame:(struct CECFrame { unsigned char x1[16]; unsigned int x2 : 5; unsigned int x3 : 3; })arg1 withRetryCount:(unsigned char)arg2 error:(id*)arg3;
- (BOOL)sendMessage:(id)arg1 error:(id*)arg2;
- (BOOL)sendMessage:(id)arg1 withRetryCount:(unsigned char)arg2 error:(id*)arg3;
- (BOOL)setAddressMask:(unsigned short)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (BOOL)setPromiscMode:(BOOL)arg1 error:(id*)arg2;

@end
