/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarItemView : UIView {
    BOOL  _allowsUpdates;
    float  _currentOverlap;
    UIStatusBarForegroundStyleAttributes * _foregroundStyle;
    struct CGContext { } * _imageContext;
    float  _imageContextScale;
    UIStatusBarItem * _item;
    UIStatusBarLayoutManager * _layoutManager;
    _UILegibilityView * _legibilityView;
    BOOL  _visible;
}

@property (nonatomic) BOOL allowsUpdates;
@property (nonatomic, readonly) UIStatusBarForegroundStyleAttributes *foregroundStyle;
@property (nonatomic, readonly) UIStatusBarItem *item;
@property (nonatomic) UIStatusBarLayoutManager *layoutManager;
@property (getter=isVisible, nonatomic) BOOL visible;

+ (id)createViewForItem:(id)arg1 withData:(id)arg2 actions:(int)arg3 foregroundStyle:(id)arg4;

- (void).cxx_destruct;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (float)addContentOverlap:(float)arg1;
- (float)adjustFrameToNewSize:(float)arg1;
- (BOOL)allowsUpdates;
- (BOOL)animatesDataChange;
- (void)beginDisablingRasterization;
- (void)beginImageContextWithMinimumWidth:(float)arg1;
- (id)contentsImage;
- (float)currentLeftOverlap;
- (float)currentOverlap;
- (float)currentRightOverlap;
- (void)dealloc;
- (id)description;
- (void)endDisablingRasterization;
- (void)endImageContext;
- (float)extraLeftPadding;
- (float)extraRightPadding;
- (id)foregroundStyle;
- (id)imageFromImageContextClippedToWidth:(float)arg1;
- (id)imageWithShadowNamed:(id)arg1;
- (id)imageWithText:(id)arg1;
- (id)initWithItem:(id)arg1 data:(id)arg2 actions:(int)arg3 style:(id)arg4;
- (BOOL)isVisible;
- (id)item;
- (id)layoutManager;
- (float)legibilityStrength;
- (int)legibilityStyle;
- (float)maximumOverlap;
- (void)performPendedActions;
- (float)resetContentOverlap;
- (void)setAllowsUpdates:(BOOL)arg1;
- (void)setContentMode:(int)arg1;
- (void)setCurrentOverlap:(float)arg1;
- (void)setLayerContentsImage:(id)arg1;
- (void)setLayoutManager:(id)arg1;
- (void)setPersistentAnimationsEnabled:(BOOL)arg1;
- (float)setStatusBarData:(id)arg1 actions:(int)arg2;
- (void)setVisible:(BOOL)arg1;
- (void)setVisible:(BOOL)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 duration:(double)arg3;
- (float)shadowPadding;
- (float)standardPadding;
- (int)textAlignment;
- (id)textFont;
- (int)textStyle;
- (float)updateContentsAndWidth;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;
- (void)willMoveToWindow:(id)arg1;

@end
