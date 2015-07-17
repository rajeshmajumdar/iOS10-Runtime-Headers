/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITextContainerView : UIView <NSUITextViewCommonMethods> {
    NSDictionary * _linkTextAttributes;
    struct CGSize { 
        float width; 
        float height; 
    }  _maxSize;
    struct CGSize { 
        float width; 
        float height; 
    }  _minSize;
    struct { 
        unsigned int textContainerOriginInvalid : 1; 
        unsigned int verticalLayout : 2; 
        unsigned int horizontallyResizable : 1; 
        unsigned int verticallyResizable : 1; 
    }  _tcvFlags;
    NSTextContainer * _textContainer;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _textContainerInset;
    struct CGPoint { 
        float x; 
        float y; 
    }  _textContainerOrigin;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isHorizontallyResizable, nonatomic) BOOL horizontallyResizable;
@property (nonatomic, readonly) NSLayoutManager *layoutManager;
@property (nonatomic, readonly) int layoutOrientation;
@property (nonatomic, copy) NSDictionary *linkTextAttributes;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } markedRange;
@property (nonatomic) struct CGSize { float x1; float x2; } maxSize;
@property (nonatomic) struct CGSize { float x1; float x2; } minSize;
@property (readonly) Class superclass;
@property (nonatomic) NSTextContainer *textContainer;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } textContainerInset;
@property (nonatomic, readonly) NSTextStorage *textStorage;
@property (nonatomic) BOOL usesTiledViews;
@property (getter=isVerticallyResizable, nonatomic) BOOL verticallyResizable;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_didScroll;
- (BOOL)_ensureLayoutCompleteForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withExtension:(BOOL)arg2;
- (BOOL)_ensureLayoutCompleteForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withExtensionFactor:(float)arg2 minimumExtensionDistance:(float)arg3 repetitions:(unsigned int)arg4;
- (void)_ensureLayoutCompleteToEndOfCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_ensureMinAndMaxSizesConsistentWithBounds;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_extendedGlyphRangeForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 maxGlyphIndex:(unsigned int)arg2 drawingToScreen:(BOOL)arg3;
- (void)_setFrameOrBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 oldRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 settingAction:(id /* block */)arg3;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (void)invalidateTextContainerOrigin;
- (BOOL)isHorizontallyResizable;
- (BOOL)isVerticallyResizable;
- (id)layoutManager;
- (int)layoutOrientation;
- (id)linkTextAttributes;
- (struct _NSRange { unsigned int x1; unsigned int x2; })markedRange;
- (struct CGSize { float x1; float x2; })maxSize;
- (struct CGSize { float x1; float x2; })minSize;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setConstrainedFrameSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHorizontallyResizable:(BOOL)arg1;
- (void)setLayoutOrientation:(int)arg1;
- (void)setLinkTextAttributes:(id)arg1;
- (void)setMaxSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setMinSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 avoidAdditionalLayout:(BOOL)arg2;
- (void)setTextContainer:(id)arg1;
- (void)setTextContainerInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setUsesTiledViews:(BOOL)arg1;
- (void)setVerticallyResizable:(BOOL)arg1;
- (void)sizeToFit;
- (id)textContainer;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })textContainerInset;
- (struct CGPoint { float x1; float x2; })textContainerOrigin;
- (id)textStorage;
- (void)tintColorDidChange;
- (void)updateInsertionPointStateAndRestartTimer:(BOOL)arg1;
- (BOOL)usesTiledViews;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;

@end
