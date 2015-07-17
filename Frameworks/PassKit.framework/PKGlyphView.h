/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKGlyphView : UIView {
    PKCheckGlyphView * _checkView;
    UIImage * _customImage;
    UIImageView * _customImageView;
    <PKGlyphViewDelegate> * _delegate;
    PKFingerprintGlyphView * _fingerprintView;
    double  _lastAnimationWillFinish;
    struct { 
        unsigned int showingPhone : 1; 
        unsigned int phoneRotated : 1; 
    }  _layoutFlags;
    float  _phoneAspectRatio;
    PKPhoneGlyphView * _phoneView;
    NSString * _phoneWiggleAnimationKey;
    BOOL  _phoneWiggling;
    UIColor * _primaryColor;
    int  _priorState;
    UIColor * _secondaryColor;
    int  _state;
    NSMutableArray * _transitionCompletionHandlers;
    unsigned int  _transitionIndex;
    BOOL  _transitioning;
}

@property (nonatomic, retain) UIImage *customImage;
@property (nonatomic) <PKGlyphViewDelegate> *delegate;
@property (nonatomic) BOOL fadeOnRecognized;
@property (nonatomic, copy) UIColor *primaryColor;
@property (nonatomic, copy) UIColor *secondaryColor;
@property (nonatomic, readonly) int state;

+ (BOOL)automaticallyNotifiesObserversOfState;

- (void)_endPhoneWiggle;
- (void)_executeAfterMinimumAnimationDurationForStateTransition:(id /* block */)arg1;
- (void)_executeTransitionCompletionHandlers:(BOOL)arg1;
- (void)_finishTransitionForIndex:(unsigned int)arg1;
- (double)_minimumAnimationDurationForStateTransition;
- (void)_performTransitionWithTransitionIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (struct CGPoint { float x1; float x2; })_phonePositionDeltaWhileShownFromRotationPercentage:(float)arg1 toPercentage:(float)arg2;
- (struct CGPoint { float x1; float x2; })_phonePositionWhileShownWithRotationPercentage:(float)arg1;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })_phoneTransformDeltaWhileShownFromRotationPercentage:(float)arg1 toPercentage:(float)arg2;
- (void)_startPhoneWiggle;
- (void)_updateCheckViewStateAnimated:(BOOL)arg1;
- (void)_updateCustomImageViewOpacityAnimated:(BOOL)arg1;
- (void)_updateLastAnimationTimeWithAnimationOfDuration:(double)arg1;
- (void)_updatePhoneLayoutWithTransitionIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)_updatePhoneWiggleIfNecessary;
- (id)customImage;
- (void)dealloc;
- (id)delegate;
- (BOOL)fadeOnRecognized;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(int)arg1;
- (void)layoutSubviews;
- (id)primaryColor;
- (id)secondaryColor;
- (void)setCustomImage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFadeOnRecognized:(BOOL)arg1;
- (void)setPrimaryColor:(id)arg1;
- (void)setPrimaryColor:(id)arg1 animated:(BOOL)arg2;
- (void)setSecondaryColor:(id)arg1;
- (void)setSecondaryColor:(id)arg1 animated:(BOOL)arg2;
- (void)setState:(int)arg1;
- (void)setState:(int)arg1 animated:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (int)state;

@end
