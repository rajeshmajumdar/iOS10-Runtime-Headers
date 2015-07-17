/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIControlCenterSlider : _UIDynamicSlider <SBUIControlCenterControl, _UISettingsKeyObserver> {
    BOOL  _adjusting;
    BOOL  _customTrackImage;
    UIVisualEffectView * _highlightEffectView;
    BOOL  _highlightMinimumTrackImage;
    UIImage * _maxValueMaskImage;
    UIImage * _minValueMaskImage;
    BOOL  _shouldHighlightValueImagesWhileAdjusting;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _trackCapInsets;
    UIImage * _trackMaskImage;
    float  _valueImagePadding;
}

@property (getter=isAdjusting, nonatomic) BOOL adjusting;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL highlightMinimumTrackImage;
@property (retain) UIImage *maxValueMaskImage;
@property (retain) UIImage *minValueMaskImage;
@property (nonatomic) BOOL shouldHighlightValueImagesWhileAdjusting;
@property (readonly) Class superclass;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } trackCapInsets;
@property (retain) UIImage *trackMaskImage;

+ (id)_createTrackImageForState:(int)arg1;
+ (id)_knobImage;
+ (id)_maxTrackImage;
+ (id)_minTrackImageForState:(int)arg1;
+ (id)_trackImage;
+ (void)controlAppearanceDidChangeForState:(int)arg1;
+ (void)initialize;

- (void)_configureControlStates;
- (float)_naturalTrackWidth;
- (void)_setTrackImage:(id)arg1;
- (void)_updateEffects;
- (void)_updateMaximumTrackImage;
- (void)_updateMaximumValueImage;
- (void)_updateMinimumTrackImage;
- (void)_updateMinimumValueImage;
- (void)_updateValueImageView:(id)arg1 fadeToImage:(id)arg2;
- (float)_valueImageCenterTrackOffset;
- (id)_valueImageForImage:(id)arg1 state:(int)arg2;
- (float)_valueImagePadding;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)controlAppearanceDidChangeForState:(int)arg1;
- (void)controlConfigurationDidChangeForState:(int)arg1;
- (void)dealloc;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)highlightMinimumTrackImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAdjusting;
- (void)layoutSubviews;
- (float)leftValueImageOriginForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 andSize:(struct CGSize { float x1; float x2; })arg2;
- (id)maxValueMaskImage;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })maximumValueImageRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)minValueMaskImage;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })minimumValueImageRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)rightValueImageOriginForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 andSize:(struct CGSize { float x1; float x2; })arg2;
- (void)setAdjusting:(BOOL)arg1;
- (void)setHighlightMinimumTrackImage:(BOOL)arg1;
- (void)setMaxValueMaskImage:(id)arg1;
- (void)setMaximumValueImage:(id)arg1;
- (void)setMinValueMaskImage:(id)arg1;
- (void)setMinimumValueImage:(id)arg1;
- (void)setShouldHighlightValueImagesWhileAdjusting:(BOOL)arg1;
- (void)setTrackCapInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setTrackImage:(id)arg1;
- (void)setTrackMaskImage:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (BOOL)shouldHighlightValueImagesWhileAdjusting;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })trackCapInsets;
- (id)trackMaskImage;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })trackRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
