/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UISiriTrackingItem : NSObject {
    UIImageView * _animatedView;
    id /* block */  _animationCompletionHandler;
    UIImage * _capturedGlyphImage;
    BOOL  _deleted;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _glyphRange;
    BOOL  _isABigReplacement;
    BOOL  _isASmallReplacement;
    BOOL  _isAnIntroduction;
    float  _offscreenXLocation;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _targetFrame;
    UIColor * _textColor;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _textRange;
}

@property (nonatomic, retain) UIImageView *animatedView;
@property (nonatomic, copy) id /* block */ animationCompletionHandler;
@property (nonatomic, retain) UIImage *capturedGlyphImage;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } glyphRange;
@property (nonatomic) BOOL isABigReplacement;
@property (nonatomic) BOOL isASmallReplacement;
@property (nonatomic) BOOL isAnIntroduction;
@property (nonatomic) float offscreenXLocation;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } targetFrame;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } textRange;

- (void).cxx_destruct;
- (void)animateOut;
- (id)animatedView;
- (id /* block */)animationCompletionHandler;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)captureGlyphsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 containerOrigin:(struct CGPoint { float x1; float x2; })arg2 fromLayoutManager:(id)arg3;
- (id)capturedGlyphImage;
- (void)dealloc;
- (id)description;
- (struct _NSRange { unsigned int x1; unsigned int x2; })glyphRange;
- (id)init;
- (BOOL)isABigReplacement;
- (BOOL)isASmallReplacement;
- (BOOL)isAnIntroduction;
- (float)offscreenXLocation;
- (void)setAnimatedView:(id)arg1;
- (void)setAnimationCompletionHandler:(id /* block */)arg1;
- (void)setCapturedGlyphImage:(id)arg1;
- (void)setGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setIsABigReplacement:(BOOL)arg1;
- (void)setIsASmallReplacement:(BOOL)arg1;
- (void)setIsAnIntroduction:(BOOL)arg1;
- (void)setOffscreenXLocation:(float)arg1;
- (void)setTargetFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })targetFrame;
- (id)textColor;
- (struct _NSRange { unsigned int x1; unsigned int x2; })textRange;

@end
