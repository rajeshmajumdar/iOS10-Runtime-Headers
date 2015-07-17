/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFPageView : UIView {
    UIActivityIndicatorView * _activityIndicator;
    BOOL  _allowHighlighting;
    BOOL  _allowSelection;
    BOOL  _allowTwoFingerSelection;
    BOOL  _animateSetFrame;
    UIPDFAnnotationController * _annotationController;
    UIImage * _backgroundImage;
    BOOL  _backgroundIsFullResolution;
    BOOL  _backgroundIsScheduled;
    unsigned int  _backgroundScheduleCount;
    CALayer * _backingLayer;
    UIColor * _backingLayerColor;
    BOOL  _boundsChanged;
    float  _cachedScale;
    UIPDFPageContentDelegate * _contentDelegate;
    CALayer * _contentLayer;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _cropBox;
    <NSObject><UIPDFPageViewDelegate> * _delegate;
    UIPDFDocument * _document;
    CALayer * _effectsLayer;
    struct CGColor { } * _highLightColor;
    NSMutableArray * _highlights;
    int  _lock;
    float  _margin;
    UIPDFPage * _page;
    unsigned int  _pageIndex;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    }  _pageToViewTransform;
    BOOL  _scalePageOnDraw;
    UIPDFSearchHighlightsController * _searchHighlightController;
    NSMutableArray * _searchHiglightLayers;
    UIPDFSelectionController * _selectionController;
    BOOL  _showActivityIndicator;
    BOOL  _showLinkAnnotationUnderline;
    BOOL  _showTextAnnotations;
    UIPDFViewTouchHandler * _touchHandler;
    BOOL  _useBackingLayer;
    BOOL  _useTiledContent;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    }  _viewToPageTransform;
    BOOL  showAnnotations;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  zoomRect;
}

@property (nonatomic) BOOL allowHighlighting;
@property (nonatomic) BOOL allowMenu;
@property (nonatomic) BOOL allowSelection;
@property (nonatomic) BOOL allowTwoFingerSelection;
@property (nonatomic) BOOL animateSetFrame;
@property (nonatomic, readonly) UIPDFAnnotationController *annotationController;
@property (retain) UIImage *backgroundImage;
@property (nonatomic, retain) UIColor *backingLayerColor;
@property (nonatomic, readonly) CALayer *contentLayer;
@property (nonatomic) <NSObject><UIPDFPageViewDelegate> *delegate;
@property (readonly, retain) UIPDFDocument *document;
@property (nonatomic, readonly) CALayer *effectsLayer;
@property (readonly) struct CGColor { }*highLightColor;
@property (nonatomic) float margin;
@property UIPDFPage *page;
@property (readonly) unsigned int pageIndex;
@property UIPDFSelectionController *selectionController;
@property (nonatomic) BOOL showActivityIndicator;
@property (nonatomic) BOOL showAnnotations;
@property (nonatomic) BOOL showLinkAnnotationUnderline;
@property (nonatomic) BOOL showTextAnnotations;
@property (nonatomic) BOOL useBackingLayer;

- (struct CGPDFDictionary { }*)_annotForPoint:(struct CGPoint { float x1; float x2; })arg1 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2;
- (void)addLayers:(BOOL)arg1;
- (void)addPage:(id)arg1;
- (void)addWidgetToSelection;
- (BOOL)allowHighlighting;
- (BOOL)allowMenu;
- (BOOL)allowSelection;
- (BOOL)allowTwoFingerSelection;
- (BOOL)animateSetFrame;
- (id)annotationController;
- (id)backgroundImage;
- (id)backingLayerColor;
- (void)clearSearchHighlights;
- (void)clearSelection;
- (id)contentLayer;
- (struct CGPoint { float x1; float x2; })convertPointFromPDFPageSpace:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })convertPointToPDFPageSpace:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRectFromPDFPageSpace:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRectToPDFPageSpace:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)didScroll:(id)arg1;
- (void)displayContent;
- (id)document;
- (void)doubleTapAt:(struct CGPoint { float x1; float x2; })arg1;
- (void)drawAnnotations:(struct CGContext { }*)arg1;
- (id)effectsLayer;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fitRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fitWidth:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 atVertical:(float)arg2;
- (BOOL)hasSearchHighlights;
- (void)hideSelection;
- (struct CGColor { }*)highLightColor;
- (void)highlightSearchSelection:(id)arg1 animated:(BOOL)arg2;
- (void)ignoreTouches:(BOOL)arg1;
- (id)init;
- (id)initWithPage:(id)arg1;
- (id)initWithPage:(id)arg1 tiledContent:(BOOL)arg2;
- (void)layoutSubviews;
- (void)layoutTextEffects;
- (float)margin;
- (id)page;
- (unsigned int)pageIndex;
- (id)receiveBackgroundImage:(id)arg1 info:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectangleOfInterestAt:(struct CGPoint { float x1; float x2; })arg1 kind:(int*)arg2;
- (void)removeBackingLayer;
- (void)scheduleBackgroundImage;
- (id)searchHighlightSelectionAt:(struct CGPoint { float x1; float x2; })arg1;
- (id)selectionController;
- (void)setAllowHighlighting:(BOOL)arg1;
- (void)setAllowMenu:(BOOL)arg1;
- (void)setAllowSelection:(BOOL)arg1;
- (void)setAllowTwoFingerSelection:(BOOL)arg1;
- (void)setAnimateSetFrame:(BOOL)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackingLayerColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDrawingSurfaceLayer:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMargin:(float)arg1;
- (void)setNeedsDisplay;
- (void)setPage:(id)arg1;
- (void)setSelectionController:(id)arg1;
- (void)setSelectionNeedsDisplay;
- (void)setShowActivityIndicator:(BOOL)arg1;
- (void)setShowAnnotations:(BOOL)arg1;
- (void)setShowLinkAnnotationUnderline:(BOOL)arg1;
- (void)setShowTextAnnotations:(BOOL)arg1;
- (void)setTransforms;
- (void)setUseBackingLayer:(BOOL)arg1;
- (BOOL)showActivityIndicator;
- (BOOL)showAnnotations;
- (void)showContent;
- (BOOL)showLinkAnnotationUnderline;
- (void)showSelection;
- (BOOL)showTextAnnotations;
- (void)singleTapAt:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)stopActivityIndicator;
- (void)suspendInstantTouchHighlighting;
- (void)twoFingerDoubleTapAt:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)useBackingLayer;
- (BOOL)willDoSomethingWithTap:(struct CGPoint { float x1; float x2; })arg1;
- (void)willMoveToSuperview:(id)arg1;

@end
