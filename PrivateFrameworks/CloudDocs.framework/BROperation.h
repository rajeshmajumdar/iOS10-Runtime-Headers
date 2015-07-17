/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BROperation : NSOperation {
    id  _executionTransation;
    BOOL  _finished;
    NSObject<OS_dispatch_queue> * _queue;
    id  _remoteOperation;
    unsigned char  _uuid;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (getter=isExecuting, readonly) BOOL executing;
@property (getter=isFinished, readonly) BOOL finished;
@property (nonatomic, retain) NSObject<BRCancellable> *remoteOperation;

- (BOOL)_finishIfCancelled;
- (void)_setExecuting:(BOOL)arg1;
- (void)_setFinished:(BOOL)arg1;
- (void)_setRemoteOperation:(id)arg1;
- (id)callbackQueue;
- (void)cancel;
- (void)completedWithResult:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)init;
- (oneway void)invalidate;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (oneway void)progressCallbackWithTopic:(id)arg1 userInfo:(id)arg2;
- (id)remoteObject;
- (id)remoteOperation;
- (void)setRemoteOperation:(id)arg1;
- (oneway void)setRemoteOperationProxy:(id)arg1 userInfo:(id)arg2;
- (void)start;

@end
