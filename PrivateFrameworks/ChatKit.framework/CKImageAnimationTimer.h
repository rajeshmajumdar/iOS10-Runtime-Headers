/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKImageAnimationTimer : NSObject {
    CADisplayLink * _displayLink;
    unsigned int  _frame;
    NSMutableSet * _observers;
}

@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic, retain) NSMutableSet *observers;

+ (id)sharedTimer;

- (void)addAnimationTimerObserver:(id)arg1;
- (void)animationTimerFired;
- (void)dealloc;
- (id)displayLink;
- (unsigned int)frame;
- (id)init;
- (id)observers;
- (void)removeAnimationTimerObserver:(id)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)updateDisplayLink;

@end
