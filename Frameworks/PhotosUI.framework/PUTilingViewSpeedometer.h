/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTilingViewSpeedometer : NSObject {
    CADisplayLink * __displayLink;
    PUTilingLayout * __lastTilingLayout;
    PUTilingView * __lastTilingView;
    double  __lastTime;
    struct CGPoint { 
        float x; 
        float y; 
    }  __lastVisibleOrigin;
    NSTimer * __timeoutTimer;
    <PUTilingViewSpeedometerDelegate> * _delegate;
    struct CGPoint { 
        float x; 
        float y; 
    }  _scrollSpeed;
    struct CGPoint { 
        float x; 
        float y; 
    }  _smoothScrollSpeed;
    PUValueFilter * _xSmoothingFilter;
    PUValueFilter * _ySmoothingFilter;
}

@property (setter=_setDisplayLink:, nonatomic, retain) CADisplayLink *_displayLink;
@property (setter=_setLastTilingLayout:, nonatomic) PUTilingLayout *_lastTilingLayout;
@property (setter=_setLastTilingView:, nonatomic) PUTilingView *_lastTilingView;
@property (setter=_setLastTime:, nonatomic) double _lastTime;
@property (setter=_setLastVisibleOrigin:, nonatomic) struct CGPoint { float x1; float x2; } _lastVisibleOrigin;
@property (setter=_setTimeoutTimer:, nonatomic, retain) NSTimer *_timeoutTimer;
@property (nonatomic, readonly) PUValueFilter *_xSmoothingFilter;
@property (nonatomic, readonly) PUValueFilter *_ySmoothingFilter;
@property (nonatomic) <PUTilingViewSpeedometerDelegate> *delegate;
@property (nonatomic) struct CGPoint { float x1; float x2; } scrollSpeed;
@property (nonatomic) struct CGPoint { float x1; float x2; } smoothScrollSpeed;

- (void).cxx_destruct;
- (id)_displayLink;
- (void)_handleDisplayLink:(id)arg1;
- (void)_handleTimeoutTimer:(id)arg1;
- (id)_lastTilingLayout;
- (id)_lastTilingView;
- (double)_lastTime;
- (struct CGPoint { float x1; float x2; })_lastVisibleOrigin;
- (id)_newSmoothingFilter;
- (void)_rescheduleTimers;
- (void)_setDisplayLink:(id)arg1;
- (void)_setLastTilingLayout:(id)arg1;
- (void)_setLastTilingView:(id)arg1;
- (void)_setLastTime:(double)arg1;
- (void)_setLastVisibleOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setScrollSpeed:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setSmoothScrollSpeed:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setTimeoutTimer:(id)arg1;
- (id)_timeoutTimer;
- (id)_xSmoothingFilter;
- (id)_ySmoothingFilter;
- (id)delegate;
- (struct CGPoint { float x1; float x2; })scrollSpeed;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDelegate:(id)arg1;
- (struct CGPoint { float x1; float x2; })smoothScrollSpeed;

@end
