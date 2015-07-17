/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMonitoredInvocation : NSInvocation {
    BOOL  _isLowPriority;
    MFActivityMonitor * _monitor;
    NSString * _powerAssertionId;
    BOOL  _shouldLogInvocation;
}

@property (nonatomic) BOOL isLowPriority;
@property (nonatomic, readonly) MFActivityMonitor *monitor;
@property (nonatomic, copy) NSString *powerAssertionId;

+ (id)invocationWithMethodSignature:(id)arg1;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 taskName:(id)arg5 priority:(int)arg6 canBeCancelled:(BOOL)arg7;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object:(id)arg3 taskName:(id)arg4 priority:(int)arg5 canBeCancelled:(BOOL)arg6;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 taskName:(id)arg3 priority:(int)arg4 canBeCancelled:(BOOL)arg5;

- (void)dealloc;
- (id)description;
- (void)invoke;
- (BOOL)isLowPriority;
- (BOOL)mf_shouldLogInvocation;
- (id)monitor;
- (id)powerAssertionId;
- (void)setIsLowPriority:(BOOL)arg1;
- (void)setPowerAssertionId:(id)arg1;
- (void)setShouldLogInvocation:(BOOL)arg1;

@end
