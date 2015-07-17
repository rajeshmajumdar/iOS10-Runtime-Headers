/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKGraphView : UIView <HKGraphRenderDelegate, HKSeriesDelegate, UIScrollViewDelegate> {
    HKPropertyAnimationApplier * _animationApplier;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _axisInset;
    HKValueRange * _axisRange;
    UIView * _bottomDivider;
    NSMutableArray * _currentSeries;
    <HKGraphViewDelegate> * _delegate;
    BOOL  _haveRescaledSinceRender;
    UIView * _leftDivider;
    BOOL  _needsUpdateGraphViewConfiguration;
    UIColor * _outlineColor;
    unsigned int  _outlineOptions;
    UIView<HKGraphRenderer> * _renderView;
    UIView * _rightDivider;
    UIScrollView * _scrollView;
    UIView * _scrollViewContent;
    _HKGraphViewSelectionContext * _selectionContext;
    HKGraphViewSelectionStyle * _selectionStyle;
    BOOL  _shouldInformDelegateOfUpdates;
    BOOL  _shouldListenToScrollViewDelegate;
    UIView * _topDivider;
    HKValueRange * _visibleDateRange;
    HKDateAxis * _xAxis;
    int  _xAxisDateZoom;
    NSMutableDictionary * _zoomToSeriesMapping;
}

@property (nonatomic, readonly) NSArray *allSeries;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } axisInset;
@property (nonatomic, retain) HKValueRange *axisRange;
@property (nonatomic) struct CGPoint { float x1; float x2; } contentOffset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKGraphViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) UIColor *outlineColor;
@property (nonatomic) unsigned int outlineOptions;
@property (nonatomic, retain) HKGraphViewSelectionStyle *selectionStyle;
@property (readonly) Class superclass;
@property (nonatomic, copy) HKDateAxis *xAxis;
@property (nonatomic, readonly) int xAxisDateZoom;
@property (nonatomic) float zoomScale;

- (void).cxx_destruct;
- (void)_addPointSelectionRecognizerToView:(id)arg1;
- (void)_addTapGestureRecognizerToView:(id)arg1;
- (void)_autoScaleXAxis;
- (void)_autoScaleYAxis;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_axisRect;
- (void)_clearRenderViewIfNecessary;
- (id)_closestSeriesToPoint:(struct CGPoint { float x1; float x2; })arg1 allSeries:(id)arg2;
- (int)_currentSelectionState;
- (id)_dateForXAxisLocation:(float)arg1;
- (id)_defaultXAxisValueRange;
- (void)_deselectAllSeriesWithAlpha:(float)arg1;
- (void)_enumerateSeriesSelectionRegionsWithBlock:(id /* block */)arg1;
- (void)_fitVisibleDateRangeToAxisRange;
- (id)_graphSeriesForZoom:(int)arg1;
- (void)_layoutDividerViews;
- (void)_loadDividerViews;
- (void)_loadScrollView;
- (void)_moveSeriesToFront:(id)arg1;
- (id)_mutableAllSeries;
- (void)_notifyDateZoomDidChangeFromValue:(int)arg1 toValue:(int)arg2;
- (void)_notifyDelegateOfVisibleDateRange:(id)arg1;
- (void)_notifyDidBeginSelection;
- (void)_notifyDidEndSelection;
- (void)_notifyDidUpdateSelectionWithPointContext:(id)arg1;
- (int)_numSelectionAreas;
- (void)_pauseChartInteraction;
- (void)_pointSelectionGestureRecognizerDidFinish:(id)arg1;
- (void)_pointSelectionGestureRecognizerDidMove:(id)arg1;
- (void)_pointSelectionRecognizerDidBegin:(id)arg1;
- (void)_pointSelectionRecognizerDidUpdate:(id)arg1;
- (void)_reloadViewScope;
- (void)_renderAxisLabels;
- (void)_renderGridlines;
- (void)_renderSelectionLineWithContext:(struct CGContext { }*)arg1;
- (void)_renderSeriesWithContext:(struct CGContext { }*)arg1;
- (void)_resumeChartInteraction;
- (void)_scrollToDateRange:(id)arg1;
- (void)_scrollToNowAnimated:(BOOL)arg1;
- (id)_selectedRegionForTouchPoint:(struct CGPoint { float x1; float x2; })arg1;
- (float)_selectionAreaHeight;
- (void)_setNeedsUpdateGraphViewConfiguration;
- (void)_setVisibleXAxisRange:(struct HKRange { float x1; float x2; })arg1 animated:(BOOL)arg2;
- (void)_tapGestureRecognizerFired:(id)arg1;
- (double)_timeIntervalFromDateRange:(id)arg1;
- (void)_updateDateZoomIfNecessary;
- (void)_updateGraphViewConfiguration;
- (void)_updateScene;
- (void)_updateScrollViewPropertiesIgnoringScrollViewCallbacks:(id /* block */)arg1;
- (void)_updateSelectionContextStateWithTouchPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_updateZoomForParameters;
- (id)_visibleYAxis;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_xAxisCoordinateTransform;
- (id)allSeries;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })axisInset;
- (id)axisRange;
- (struct CGPoint { float x1; float x2; })contentOffset;
- (id)delegate;
- (void)graphRenderer:(id)arg1 shouldRenderSceneWithContext:(struct CGContext { }*)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)outlineColor;
- (unsigned int)outlineOptions;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)selectionStyle;
- (void)seriesDidInvalidatePaths:(id)arg1;
- (void)setAxisInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setAxisRange:(id)arg1;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setNeedsReloadSeries;
- (void)setOutlineColor:(id)arg1;
- (void)setOutlineOptions:(unsigned int)arg1;
- (void)setRenderView:(id)arg1;
- (void)setSelectionStyle:(id)arg1;
- (void)setVisibleDateRange:(id)arg1;
- (void)setXAxis:(id)arg1;
- (void)setXAxisDateZoom:(int)arg1 animated:(BOOL)arg2;
- (void)setZoomScale:(float)arg1;
- (BOOL)stillAnimating:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (id)xAxis;
- (int)xAxisDateZoom;
- (float)zoomScale;

@end
