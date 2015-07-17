/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYFileTransferSyncEngine : SYSyncEngine <IDSServiceDelegate> {
    NSDictionary * _customIDSOptions;
    NSMutableArray * _deferredIncomingSessions;
    NSObject<OS_dispatch_queue> * _idsQueue;
    IDSService * _idsService;
    BOOL  _inSession;
    NSURL * _inputFileURL;
    _SYInputStreamer * _inputStream;
    NSMutableIndexSet * _messageRows;
    NSURL * _outputFileURL;
    _SYOutputStreamer * _outputStream;
    BOOL  _sessionCanceled;
    SYStartSyncSession * _sessionStartMessage;
}

@property (nonatomic, copy) NSDictionary *customIDSOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_assumeOwnershipOfURL:(id)arg1 error:(id*)arg2;
- (void)_cancelSession;
- (id)_fileTransferHeader;
- (void)_handleIncomingSessionFileAtOwnedURL:(id)arg1 metadata:(id)arg2 identifier:(id)arg3;
- (void)_handleIncomingSessionFileAtURL:(id)arg1 metadata:(id)arg2 identifier:(id)arg3;
- (void)_handleIncomingStreamDataWithIdentifier:(id)arg1;
- (void)_handleSessionRestart:(id)arg1 priority:(int)arg2 options:(id)arg3 userContext:(id)arg4 callback:(id /* block */)arg5;
- (void)_readNextProtobuf:(id /* block */)arg1;
- (void)_reallyHandleSessionRestart:(id)arg1 priority:(int)arg2 options:(id)arg3 userContext:(id)arg4 callback:(id /* block */)arg5;
- (BOOL)_shouldTreatAsSessionEnd:(id)arg1;
- (id)_wrapIncomingMessage:(id)arg1 ofType:(unsigned short)arg2 identifier:(id)arg3;
- (id)_wrapIncomingResponse:(id)arg1 ofType:(unsigned short)arg2 identifier:(id)arg3;
- (id)_wrapMessage:(id)arg1 ofType:(unsigned short)arg2 userInfo:(id)arg3;
- (id)_wrapResponse:(id)arg1 toRequest:(id)arg2 ofType:(unsigned short)arg3;
- (void)beginSession;
- (BOOL)buffersSessions;
- (id)customIDSOptions;
- (void)endSession;
- (void)enqueueSyncRequest:(id)arg1 withMessageID:(unsigned short)arg2 priority:(int)arg3 options:(id)arg4 userContext:(id)arg5 callback:(id /* block */)arg6;
- (id)idsOptions:(id)arg1;
- (id)initWithService:(id)arg1 queue:(id)arg2;
- (BOOL)isInSession;
- (id)outputStreamWithMetadata:(id)arg1 priority:(int)arg2 options:(id)arg3 context:(id)arg4 error:(id*)arg5;
- (BOOL)resume:(id*)arg1;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)setCustomIDSOptions:(id)arg1;
- (void)suspend;

@end
