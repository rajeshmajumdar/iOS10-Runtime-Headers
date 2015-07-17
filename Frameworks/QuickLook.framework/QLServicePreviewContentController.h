/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLServicePreviewContentController : UIViewController <QLPreviewContentDataSource, QLPreviewContentDelegate, QLRemotePreviewContentControllerProtocol> {
    BOOL  _blockRemoteImages;
    struct CGSize { 
        float width; 
        float height; 
    }  _clientSize;
    _UIHostedWindow * _hostedWindow;
    int  _numberOfPreviewItems;
    QLPreviewContentController * _previewContentController;
    NSMutableDictionary * _previewItemCache;
    int  _previewMode;
    <QLRemotePrintPageHelper> * _printPageHelper;
    BOOL  _remoteInstantiationFinished;
    int  _sourceUUID;
}

@property <QLPreviewContentDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property <QLPreviewContentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property int previewMode;
@property (readonly) int sourceUUID;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)_dismissTransitionIsReadyToFinish;
- (void)_getNumberOfPagesForSize:(struct CGSize { float x1; float x2; })arg1 withHandler:(id /* block */)arg2;
- (void)_getPDFPageAtIndex:(int)arg1 handler:(id /* block */)arg2;
- (void)_prepareForDrawingPages:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withSize:(struct CGSize { float x1; float x2; })arg2;
- (id)_remotePreviewItemAtIndex:(int)arg1;
- (void)_setNavigationBarVerticalOffset:(float)arg1;
- (void)_setNumberOfPreviewItems:(int)arg1;
- (void)_setTransitioning:(BOOL)arg1;
- (void)_updateHostedWindowFrame;
- (void)_willAppearInRemoteViewController;
- (void)_willTransitionToSize:(struct CGSize { float x1; float x2; })arg1;
- (void)becomeForeground;
- (void)beginScrubbing;
- (void)checkCurrentPreviewItem;
- (id)clientProcessAlertViewForPreviewContentController:(id)arg1;
- (void)configureWithParameters:(id)arg1;
- (void)contentWasTappedInPreviewContentController:(id)arg1;
- (int)currentPreviewItemIndex;
- (int)currentSourceUUIDForPreviewContentController:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)dismissTransitionIsReadyToFinishSynchronizedWithBlock:(id /* block */)arg1;
- (void)dismissalGestureDidUpdateInPreviewContentController:(id)arg1 state:(int)arg2 trackingInformation:(id)arg3;
- (void)endScrubbing;
- (void)enterBackground;
- (void)forceResignFirstResponder;
- (id)init;
- (int)numberOfPreviewItems;
- (int)numberOfPreviewItemsInPreviewContentController:(id)arg1;
- (void)overlayWasTappedInPreviewContentController:(id)arg1;
- (void)previewContentController:(id)arg1 didFailWithError:(id)arg2;
- (void)previewContentController:(id)arg1 didLoadItem:(id)arg2 atIndex:(int)arg3 withError:(id)arg4;
- (void)previewContentController:(id)arg1 didMoveToItem:(id)arg2 atIndex:(int)arg3;
- (id)previewContentController:(id)arg1 previewItemAtIndex:(int)arg2;
- (void)previewContentController:(id)arg1 previewItemAtIndex:(int)arg2 completionBlock:(id /* block */)arg3;
- (void)previewContentController:(id)arg1 receivedTapOnURL:(id)arg2;
- (void)previewContentController:(id)arg1 setAVState:(id)arg2 forPreviewItem:(id)arg3;
- (void)previewContentController:(id)arg1 willEnterFullScreenWithHostedWindow:(id)arg2;
- (void)previewContentController:(id)arg1 willHideOverlayWithDuration:(double)arg2;
- (void)previewContentController:(id)arg1 willMoveToItemAtIndex:(int)arg2;
- (void)previewContentController:(id)arg1 willShowOverlayWithDuration:(double)arg2;
- (void)previewContentControllerDidExitFullScreen:(id)arg1;
- (int)previewMode;
- (id)printPageHelper;
- (id)printPageRenderer;
- (void)purgeCache;
- (void)refreshCurrentPreviewItem;
- (void)scrubToValue:(double)arg1;
- (void)setBlockRemoteImages:(BOOL)arg1;
- (void)setContentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCurrentPreviewItemIndex:(int)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLoadingTextForMissingFiles:(id)arg1;
- (void)setOverlayHidden:(BOOL)arg1 duration:(double)arg2;
- (void)setPreviewMode:(int)arg1;
- (void)setTransitioning:(BOOL)arg1 synchronizedWithBlock:(id /* block */)arg2;
- (void)showContentsWasTappedInPreviewContentController:(id)arg1;
- (int)sourceUUID;
- (void)stopLoadingCurrentPreviewItem;
- (void)togglePlayState;
- (void)viewDidLayoutSubviews;
- (void)willChangeContentFrame;

@end
