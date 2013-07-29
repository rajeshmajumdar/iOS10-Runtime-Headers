/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, UIImageView, UIView;

@interface UIDragger : NSObject  {
    int (*_interpolator)();
    UIView *_target;
    id _delegate;
    SEL _action;
    struct CGPoint { 
        float x; 
        float y; 
    } _startLocation;
    struct CGPoint { 
        float x; 
        float y; 
    } _stopLocation;
    double _duration;
    BOOL _showFinger;
    unsigned int _port;
    NSArray *_modes;
    unsigned long long _startTimestamp;
    unsigned long long _stopTimestamp;
    unsigned long long _lastTimestamp;
    BOOL _waitingForSmoothScrolling;
    UIImageView *_fingerView;
}


- (void)setDuration:(double)arg1;
- (void)run;
- (id)init;
- (void)setTarget:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)_smoothScrollingDidEnd:(id)arg1;
- (void)_smoothScrollingWillStart:(id)arg1;
- (void)showFinger;
- (void)setStopLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)setInterpolation:(int (*)())arg1;
- (void)_stopDrag:(id)arg1;
- (double)_delayUntilNextEvent;
- (void)_continueDrag:(id)arg1;
- (void)_postMouseEvent:(int)arg1 timestamp:(unsigned long long)arg2 location:(struct CGPoint { float x1; float x2; })arg3;
- (void)dragDidEnd;
- (void)setStartLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)setAction:(SEL)arg1;

@end