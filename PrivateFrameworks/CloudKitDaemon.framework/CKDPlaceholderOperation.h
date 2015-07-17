/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPlaceholderOperation : NSOperation {
    NSObject<OS_dispatch_group> * _group;
    BOOL  _isExecuting;
    BOOL  _isFinished;
    CKDOperation * _realOperation;
    NSDate * _startDate;
    NSOperationQueue * _targetOperationQueue;
}

@property (nonatomic, readonly) CKDClientContext *context;
@property (nonatomic) BOOL isExecuting;
@property (nonatomic) BOOL isFinished;
@property (nonatomic, readonly) NSString *operationID;
@property (nonatomic, readonly) CKDClientProxy *proxy;
@property (nonatomic, readonly) CKDOperation *realOperation;
@property (nonatomic, readonly) NSString *sectionID;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, readonly) NSOperationQueue *targetOperationQueue;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)cancel;
- (id)ckShortDescription;
- (id)context;
- (id)description;
- (id)initWithOperation:(id)arg1 targetOperationQueue:(id)arg2;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)main;
- (id)operationID;
- (id)proxy;
- (id)realOperation;
- (id)sectionID;
- (void)setIsExecuting:(BOOL)arg1;
- (void)setIsFinished:(BOOL)arg1;
- (void)setStartDate:(id)arg1;
- (void)start;
- (id)startDate;
- (id)targetOperationQueue;

@end
