/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKUpdateGroup : NSObject {
    NSObject<OS_dispatch_group> * _dispatchGroup;
    NSError * _error;
    NSLock * _lock;
    NSString * _name;
    NSMutableArray * _notifiers;
    NSObject<OS_dispatch_queue> * _targetQueue;
}

@property (nonatomic) NSObject<OS_dispatch_group> *dispatchGroup;
@property (retain) NSError *error;
@property (retain) NSLock *lock;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSMutableArray *notifiers;
@property (nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property (nonatomic, readonly) int updateCount;

+ (id)updateGroup;
+ (id)updateGroupForTargetQueue:(id)arg1;
+ (id)updateGroupWithName:(id)arg1;
+ (id)updateGroupWithName:(id)arg1 taregetQueue:(id)arg2;

- (void)applyUpdates;
- (void)cancelUpdates;
- (void)dealloc;
- (id)dispatchGroup;
- (id)error;
- (id)initWithName:(id)arg1 targetQueue:(id)arg2;
- (void)join:(id /* block */)arg1;
- (void)joinAndApplyUpdates;
- (id)lock;
- (id)name;
- (id)notifiers;
- (void)perform:(id /* block */)arg1;
- (void)performOnQueue:(id)arg1 block:(id /* block */)arg2;
- (void)setDispatchGroup:(id)arg1;
- (void)setError:(id)arg1;
- (void)setLock:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNotifiers:(id)arg1;
- (void)setTargetQueue:(id)arg1;
- (id)targetQueue;
- (int)updateCount;
- (void)wait;

@end
