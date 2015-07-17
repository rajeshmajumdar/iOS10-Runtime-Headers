/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEPolicySession : NSObject <NEPrettyDescription> {
    NSObject<OS_dispatch_io> * _controlIO;
    int  _controlSocket;
    int  _internalPriority;
    NSObject<OS_dispatch_queue> * _ioQueue;
    NSData * _lastReceivedResponse;
    unsigned int  _lastSendMessageID;
    NSMutableDictionary * _policies;
    NSObject<OS_dispatch_semaphore> * _responseSemaphore;
}

@property (retain) NSObject<OS_dispatch_io> *controlIO;
@property int controlSocket;
@property int internalPriority;
@property (retain) NSObject<OS_dispatch_queue> *ioQueue;
@property (retain) NSData *lastReceivedResponse;
@property unsigned int lastSendMessageID;
@property (retain) NSMutableDictionary *policies;
@property int priority;
@property (retain) NSObject<OS_dispatch_semaphore> *responseSemaphore;

+ (void)addTLVToMessage:(id)arg1 type:(unsigned char)arg2 length:(unsigned long)arg3 value:(const void*)arg4;
+ (id)copyTLVForBytes:(const char *)arg1 messageLength:(unsigned long)arg2 type:(unsigned char)arg3 includeHeaderOffset:(BOOL)arg4 n:(int)arg5;
+ (id)errorFromMessage:(id)arg1;
+ (unsigned int)messageIDForMessage:(id)arg1;
+ (unsigned int)policyIDFromMessage:(id)arg1;

- (void).cxx_destruct;
- (unsigned int)addPolicy:(id)arg1;
- (BOOL)apply;
- (id)controlIO;
- (int)controlSocket;
- (id)copyReceivedResponseForMessageID:(unsigned int)arg1;
- (id)createTLVMessage:(unsigned char)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned int)arg2;
- (int)dupSocket;
- (id)init;
- (id)initWithSocket:(int)arg1;
- (int)internalPriority;
- (id)ioQueue;
- (id)lastReceivedResponse;
- (unsigned int)lastSendMessageID;
- (BOOL)lockSessionToCurrentProcess;
- (id)openControlIO;
- (id)policies;
- (id)policyWithID:(unsigned int)arg1;
- (int)priority;
- (id)priorityString;
- (BOOL)registerServiceUUID:(id)arg1;
- (BOOL)removeAllPolicies;
- (BOOL)removePolicyWithID:(unsigned int)arg1;
- (id)responseSemaphore;
- (BOOL)sendMessage:(id)arg1;
- (void)setControlIO:(id)arg1;
- (void)setControlSocket:(int)arg1;
- (void)setInternalPriority:(int)arg1;
- (void)setIoQueue:(id)arg1;
- (void)setLastReceivedResponse:(id)arg1;
- (void)setLastSendMessageID:(unsigned int)arg1;
- (void)setPolicies:(id)arg1;
- (void)setPriority:(int)arg1;
- (void)setResponseSemaphore:(id)arg1;
- (BOOL)unregisterServiceUUID:(id)arg1;

@end
