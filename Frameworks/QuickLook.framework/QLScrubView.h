/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLScrubView : UIView <UIGestureRecognizerDelegate> {
    <QLScrubViewDataSource> * _dataSource;
    id  _delegate;
    BOOL  _needsThumbLayout;
    NSMutableSet * _operations;
    int  _pageCount;
    QLPageNumberView * _pageNumberLabel;
    NSOperationQueue * _queue;
    BOOL  _runOnMainThread;
    int  _selectedPage;
    QLThumbnailView * _selectedThumbnailView;
    float  _thumbEnd;
    float  _thumbHeight;
    float  _thumbOrigin;
    NSMutableDictionary * _thumbViews;
    float  _topOffset;
    NSMutableArray * _visibleThumbIndexes;
}

@property <QLScrubViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property id delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property BOOL runOnMainThread;
@property (readonly) Class superclass;
@property (nonatomic) float topOffset;

+ (float)defaultWidth;

- (void)_cancelAllOperations;
- (void)_handleSwipAtLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)_hidePageLabel;
- (void)_notifyPageChanged;
- (void)_notifyScrubingEnded;
- (void)_notifyScrubingStarted;
- (void)_removeThumbviews;
- (void)_showPageLabel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_thumbnailFrameForPageAtIndex:(int)arg1;
- (void)_updatePageLabelPosition;
- (void)_updateSelectedThumbnailView;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)longTapReceived:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)panReceived:(id)arg1;
- (void)reloadThumbnails;
- (BOOL)runOnMainThread;
- (void)selectPageNumber:(int)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setRunOnMainThread:(BOOL)arg1;
- (void)setTopOffset:(float)arg1;
- (void)tapReceived:(id)arg1;
- (float)topOffset;

@end
