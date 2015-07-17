/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDictationMeterView : UIButton {
    CALayer * _animatingLayer;
    UIImageView * _background;
    int  _cachedViewMode;
    CADisplayLink * _displayLink;
    NSTimer * _fillTimer;
    CALayer * _micImageLayer;
    NSMutableArray * _micListeningImages;
    UIImageView * _overlay;
    int  _phase;
    unsigned int  _powerPointer;
    float  _releaseLevel;
    double  _releaseStart;
    float  _runningPowerLevels;
    int  _state;
}

- (float)_adjustedDuration:(float)arg1;
- (double)_animationInterval;
- (id)_attackKeyFrameAnimation;
- (void)_clearDisplayLink;
- (float)_currentMicPowerLevel;
- (id)_decayKeyFrameAnimation;
- (id)_emptyMicImage;
- (id)_keyframeAnimationForCGImages:(id)arg1 duration:(double)arg2;
- (float)_powerLevelForMicPower:(float)arg1;
- (void)_removeAnimationsAndClearLayers;
- (void)_reset;
- (void)_resetRunningPowerLevels;
- (void)_startAttack;
- (void)_startDecay;
- (void)_startListening;
- (void)_startRelease;
- (void)_startSustain;
- (id)_sustainKeyFrameAnimation;
- (void)_updateListeningAnimation:(id)arg1;
- (float)_updateMedianWithNewValue:(float)arg1;
- (void)_updateReleaseAnimation:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)dealloc;
- (id)imageForMicLevel:(float)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setState:(int)arg1;

@end
