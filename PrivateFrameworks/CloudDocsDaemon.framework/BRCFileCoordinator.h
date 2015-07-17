/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFileCoordinator : NSFileCoordinator {
    BOOL  _cancelled;
    id /* block */  _doneHandler;
    BOOL  _isUpdateForReconnecting;
    BRCAccountSession * _session;
    unsigned long long  _startStamp;
    NSObject<OS_dispatch_source> * _timer;
    NSURL * _url1;
    NSURL * _url2;
}

@property (nonatomic) BOOL isUpdateForReconnecting;

+ (void)itemAtPath:(id)arg1 didBounceToName:(id)arg2;
+ (void)itemAtPath:(id)arg1 logicalFilename:(id)arg2 didMoveToPath:(id)arg3 logicalFilename:(id)arg4 hasContentUpdate:(BOOL)arg5;
+ (void)itemDidAppearAtPath:(id)arg1 logicalFilename:(id)arg2;
+ (void)itemDidDisappearAtPath:(id)arg1 logicalFilename:(id)arg2;

- (void).cxx_destruct;
- (void)_obtainedCoordination:(id)arg1 url1:(id)arg2 url2:(id)arg3 handler:(id /* block */)arg4 fcHandler:(id /* block */)arg5 error:(id)arg6;
- (void)cancel;
- (void)cancelAfter:(double)arg1;
- (id)initWithSession:(id)arg1 cancelAfter:(double)arg2 doneHandler:(id /* block */)arg3;
- (BOOL)isUpdateForReconnecting;
- (void)scheduleDeleteOfItemAtURL:(id)arg1 target:(id)arg2;
- (void)scheduleReadOfItemAtURL:(id)arg1 target:(id)arg2;
- (void)scheduleRenameOfItemAtURL:(id)arg1 toItemAtURL:(id)arg2 contentUpdate:(BOOL)arg3 target:(id)arg4;
- (void)scheduleUpdateOfItemAtURL:(id)arg1 target:(id)arg2;
- (void)setIsUpdateForReconnecting:(BOOL)arg1;

@end
