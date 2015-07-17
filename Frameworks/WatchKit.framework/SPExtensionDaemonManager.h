/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPExtensionDaemonManager : NSObject {
    BOOL  _active;
    NSMutableDictionary * _coreLocationAsserts;
    int  _refCount;
    NSMutableSet * _transactionObservers;
    NSObject<OS_dispatch_source> * _transactionTimer;
}

@property (nonatomic) BOOL active;
@property (nonatomic, retain) NSMutableDictionary *coreLocationAsserts;
@property (nonatomic) int refCount;
@property (nonatomic, retain) NSMutableSet *transactionObservers;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *transactionTimer;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (BOOL)active;
- (void)addTransactionObserver:(id)arg1;
- (void)beginTransaction;
- (id)coreLocationAsserts;
- (void)endTransaction;
- (id)init;
- (void)keepAlive;
- (int)refCount;
- (void)removeTransactionObserver:(id)arg1;
- (void)setActive:(BOOL)arg1;
- (void)setCoreLocationAsserts:(id)arg1;
- (void)setRefCount:(int)arg1;
- (void)setTransactionObservers:(id)arg1;
- (void)setTransactionTimer:(id)arg1;
- (void)startTransactionTimer;
- (id)transactionObservers;
- (void)transactionTimeOut;
- (id)transactionTimer;

@end
