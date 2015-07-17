/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScrubberControl : UIOldSliderControl {
    unsigned int  _allowsAnyValue;
    unsigned int  _alwaysShowAllComponentsForDuration;
    unsigned int  _autoSizesToFitDuration;
    id  _delegate;
    unsigned int  _delegateDidChangeScrubValue;
    unsigned int  _delegateDidEnterScrubbingState;
    unsigned int  _delegateShouldBeginScrubbing;
    unsigned int  _didDrag;
    double  _duration;
    UIView * _elapsedTimeView;
    unsigned int  _endingTracking;
    unsigned int  _largeKnob;
    float  _lastDisplayedWidth;
    struct CGPoint { 
        float x; 
        float y; 
    }  _lastUpdatedPoint;
    unsigned int  _layoutTimeParts;
    unsigned int  _leftCapIsDownloadCap;
    float  _maxTrackWidth;
    unsigned int  _remainingIsDuration;
    UIView * _remainingTimeView;
    unsigned int  _requireMomentaryDelay;
    unsigned int  _rightCapIsDownloadCap;
    unsigned int  _sentScrubbingStart;
    unsigned int  _showFullWidthComponents;
    unsigned int  _showKnob;
    unsigned int  _showTimeCentered;
    /* Warning: unhandled union encoding: '(?="image"@"UIImage""view"@"UIView")' */ union { 
        UIImage *image; 
        id view; 
    }  _sliderAvailableFill;
    unsigned int  _timeLayoutDisabledCount;
    unsigned int  _timeLayoutSkippedForcedLayout;
    unsigned int  _timeLayoutSkippedLayout;
    double  _trackingStartTime;
    unsigned int  _unused;
    float  _valueAvailable;
}

+ (BOOL)allowLayeredFillForKnob;

- (BOOL)_notAllValueAvailable;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_rectOfTrack;
- (void)_resetTimeFrames;
- (void)_sendDelegateDidEnterScrubbingState:(BOOL)arg1;
- (void)_setValue:(float)arg1 andSendAction:(BOOL)arg2;
- (void)_updateAvailableFill;
- (void)_updateTimes:(BOOL)arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)createSliderKnobView;
- (void)dealloc;
- (void)disableTimesLayout;
- (void)drawSliderPiece:(int)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (double)duration;
- (void)enableTimesLayout;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fillBounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hitRect;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)imageForSliderPiece:(int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 maxTrackWidth:(float)arg2 showTimes:(BOOL)arg3 knobStyle:(int)arg4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 maxTrackWidth:(float)arg2 showTimes:(BOOL)arg3 showKnob:(BOOL)arg4;
- (const struct { float x1; float x2; float x3; }*)metrics;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)pointInsideKnob:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)pointInsideKnob:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (double)requiredAutoUpdateDurationForDuration:(double)arg1;
- (float)scrubValue;
- (void)setAllowsAnyValue:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setPinTimeToOutsideEdges:(BOOL)arg1;
- (void)setScrubbingRequiresMomentaryDelay:(BOOL)arg1;
- (void)setShowDuration:(BOOL)arg1;
- (void)setShowFullWidthComponents:(BOOL)arg1;
- (void)setShowTimeCenteredInAvailableArea:(BOOL)arg1;
- (void)setTimeColor:(id)arg1;
- (void)setTimeShadowColor:(id)arg1;
- (void)setValue:(float)arg1 animated:(BOOL)arg2 animationCurve:(int)arg3;
- (void)setValueAvailable:(float)arg1;
- (void)sizeToFit;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })sliderBounds;

@end
