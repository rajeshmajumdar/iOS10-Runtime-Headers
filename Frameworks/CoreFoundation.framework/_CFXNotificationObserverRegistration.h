/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface _CFXNotificationObserverRegistration : _CFXNotificationRegistrationContainer {
    void * _observer;
}

@property (readonly) void*observer;

+ (Class)childClass;

- (BOOL)enumerate:(id /* block */)arg1;
- (void)finalize;
- (void)find:(struct { struct { id *x_1_1_1; unsigned int x_1_1_2; BOOL x_1_1_3; } x1; struct { id *x_2_1_1; unsigned int x_2_1_2; BOOL x_2_1_3; } x2; }*)arg1;
- (id)initWithObserver:(void*)arg1 parent:(id)arg2;
- (void*)key;
- (void)match:(struct { struct { id *x_1_1_1; unsigned int x_1_1_2; BOOL x_1_1_3; } x1; struct { id *x_2_1_1; unsigned int x_2_1_2; BOOL x_2_1_3; } x2; }*)arg1;
- (void*)observer;

@end
