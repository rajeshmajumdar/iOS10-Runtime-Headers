/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFConditionLock : NSConditionLock <MFLockObject> {
    id  _delegate;
    NSString * _name;
}

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithName:(id)arg1 andDelegate:(id)arg2;
- (id)initWithName:(id)arg1 condition:(int)arg2 andDelegate:(id)arg3;
- (BOOL)isLockedByMe;
- (BOOL)lockBeforeDate:(id)arg1;
- (BOOL)lockWhenCondition:(int)arg1 beforeDate:(id)arg2;
- (void)unlock;
- (void)unlockWithCondition:(int)arg1;

@end
