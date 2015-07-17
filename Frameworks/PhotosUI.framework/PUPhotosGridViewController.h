/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosGridViewController : UICollectionViewController <PHAssetCollectionDataSource, PLDismissableViewController, PLNavigableAssetContainerViewController, PUAutoScrollerDelegate, PUCollectionViewReorderDelegate, PUDeletePhotosActionControllerDelegate, PUOneUpPresentationHelperDelegate, PUPhotosDataSourceChangeObserver, PUPhotosSharingViewControllerDelegate, PUScrollViewSpeedometerDelegate, PUSearchViewControllerDelegate, PUSessionInfoObserver, PUSlideshowViewControllerDelegate, PUStackedAlbumControllerTransition, PUSwipeSelectionManagerDataSource, PUSwipeSelectionManagerDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, UISearchBarDelegate, _UISettingsKeyObserver> {
    UICollectionViewLayout * __albumListTransitionLayout;
    PUAlbumPickerViewController * __albumPickerViewController;
    int  __batchPreheatingCount;
    id  __cachedViewSizeTransitionContext;
    struct CGSize { 
        float width; 
        float height; 
    }  __cachedViewSizeTransitionContextSize;
    PHCachingImageManager * __cachingImageManager;
    PUScrollViewSpeedometer * __collectionViewSpeedometer;
    PUDeletePhotosActionController * __deleteActionController;
    BOOL  __didForceDataSource;
    UIView * __emptyPlaceholderView;
    BOOL  __hasEditSessionReorderedItems;
    UIAlertController * __hideAssetConfirmationAlert;
    int  __maximumNumberOfRowsToPreheat;
    PUPhotosGridViewController * __modalSearchResultsViewController;
    PUSearchViewController * __modalSearchViewController;
    PUOneUpPresentationHelper * __oneUpPresentationHelper;
    id  __pendingViewSizeTransitionContext;
    PUPhotoBrowserOneUpPresentationAdaptor * __photoBrowserOneUpPresentationAdaptor;
    unsigned int  __previousCollectionsCount;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  __previousPrefetchRect;
    struct CGPoint { 
        float x; 
        float y; 
    }  __previousPreheatContentOffset;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  __previousPreheatRect;
    UIViewController * __pushedPhotoBrowserController;
    UIViewController * __removeActionSheet;
    UIPopoverPresentationController * __shareAssetsPopoverController;
    PUPhotosSharingViewController * __sharingViewController;
    PUSlideshowViewController * __slideshowViewController;
    PUSwipeSelectionManager * __swipeSelectionManager;
    UIBarButtonItem * _addToolbarButton;
    PUAlbumListTransitionContext * _albumListTransitionContext;
    unsigned int  _allowedActions;
    UIView * _alternateContentView;
    BOOL  _alwaysHideTabBar;
    UIBarButtonItem * _cancelButtonItem;
    float  _collectionViewLayoutReferenceWidth;
    BOOL  _contentViewInSyncWithModel;
    UIBarButtonItem * _customDoneButtonItem;
    UIBarButtonItem * _deselectAllBarButtonItem;
    BOOL  _didScrollToInitialPosition;
    PUPhotosGridViewControllerSpec * _gridSpec;
    BOOL  _initiallyScrolledToBottom;
    BOOL  _isDisplayingSearchResults;
    BOOL  _isMenuIndexPathExact;
    float  _lastTransitionWidth;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    UICollectionViewLayout<PUGridLayoutProtocol> * _mainGridLayout;
    NSIndexPath * _menuIndexPath;
    id /* block */  _onViewDidAppearCompletion;
    PUSearchViewController * _passdownSearchViewController;
    id /* block */  _pendingNavigationBlock;
    PUPhotoPinchGestureRecognizer * _photoOrStackPinchGestureRecognizer;
    PUPhotoSelectionManager * _photoSelectionManager;
    PUPhotosDataSource * _photosDataSource;
    id /* block */  _ppt_nextDeleteFinishedBlock;
    NSMutableDictionary * _progressInfosByCachedIndexPath;
    NSMutableDictionary * _progressInfosByIdentifier;
    UIBarButtonItem * _removeToolbarButton;
    UIBarButtonItem * _restoreToolbarButton;
    PUSearchButtonItem * _searchButton;
    UIBarButtonItem * _selectAllBarButtonItem;
    UIBarButtonItem * _selectSessionDoneBarButtonItem;
    UINavigationButton * _selectionButton;
    PUSessionInfo * _sessionInfo;
    UIBarButtonItem * _shareToolbarButton;
    BOOL  _showsCustomDoneButtonItemOnLeft;
    UIBarButtonItem * _slideshowButton;
    UIBarButtonItem * _slideshowButtonSpacer;
    unsigned int  _suppressesColorSettingsCount;
    UIPanGestureRecognizer * _swipeSelectionGestureRecognizer;
    PHAsset * _visibleReferenceAssetBeforeChange;
    PHAssetCollection * _visibleReferenceAssetContainerBeforeChange;
    NSIndexPath * _visibleReferenceAssetIndexPathBeforeChange;
    float  _visibleReferenceAssetRelativeYBeforeChange;
    NSIndexSet * _visibleSectionsBeforeChange;
}

@property (setter=setAlbumListTransitionLayout:, nonatomic, retain) UICollectionViewLayout *_albumListTransitionLayout;
@property (setter=_setAlbumPickerViewController:, nonatomic, retain) PUAlbumPickerViewController *_albumPickerViewController;
@property (setter=_setBatchPreheatingCount:, nonatomic) int _batchPreheatingCount;
@property (setter=_setCachedViewSizeTransitionContext:, nonatomic, retain) id _cachedViewSizeTransitionContext;
@property (setter=_setCachedViewSizeTransitionContextSize:, nonatomic) struct CGSize { float x1; float x2; } _cachedViewSizeTransitionContextSize;
@property (nonatomic, readonly) PHCachingImageManager *_cachingImageManager;
@property (setter=_setCollectionViewSpeedometer:, nonatomic, retain) PUScrollViewSpeedometer *_collectionViewSpeedometer;
@property (setter=_setDeleteActionController:, nonatomic, retain) PUDeletePhotosActionController *_deleteActionController;
@property (setter=_setDidForceDataSource:, nonatomic) BOOL _didForceDataSource;
@property (setter=_setEmptyPlaceholderView:, nonatomic, retain) UIView *_emptyPlaceholderView;
@property (setter=_setHasEditSessionReorderedItems:, nonatomic) BOOL _hasEditSessionReorderedItems;
@property (setter=_setHideAssetConfirmationAlert:, nonatomic) UIAlertController *_hideAssetConfirmationAlert;
@property (setter=_setMaximumNumberOfRowsToPreheat:, nonatomic) int _maximumNumberOfRowsToPreheat;
@property (setter=_setModalSearchResultsViewController:, nonatomic, retain) PUPhotosGridViewController *_modalSearchResultsViewController;
@property (setter=_setModalSearchViewController:, nonatomic, retain) PUSearchViewController *_modalSearchViewController;
@property (setter=_setOneUpPresentationHelper:, nonatomic, retain) PUOneUpPresentationHelper *_oneUpPresentationHelper;
@property (setter=_setPendingViewSizeTransitionContext:, nonatomic, retain) id _pendingViewSizeTransitionContext;
@property (setter=_setPhotoBrowserOneUpPresentationAdaptor:, nonatomic, retain) PUPhotoBrowserOneUpPresentationAdaptor *_photoBrowserOneUpPresentationAdaptor;
@property (setter=_setPreviousCollectionsCount:, nonatomic) unsigned int _previousCollectionsCount;
@property (setter=_setPreviousPrefetchRect:, nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } _previousPrefetchRect;
@property (setter=_setPreviousPreheatContentOffset:, nonatomic) struct CGPoint { float x1; float x2; } _previousPreheatContentOffset;
@property (setter=_setPreviousPreheatRect:, nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } _previousPreheatRect;
@property (setter=_setPushedPhotoBrowserController:, nonatomic, retain) UIViewController *_pushedPhotoBrowserController;
@property (setter=_setRemoveActionSheet:, nonatomic) UIViewController *_removeActionSheet;
@property (setter=_setShareAssetsPopoverController:, nonatomic) UIPopoverPresentationController *_shareAssetsPopoverController;
@property (setter=_setSharingViewController:, nonatomic, retain) PUPhotosSharingViewController *_sharingViewController;
@property (setter=_setSlideshowViewController:, nonatomic, retain) PUSlideshowViewController *_slideshowViewController;
@property (setter=_setSwipeSelectionManager:, nonatomic, retain) PUSwipeSelectionManager *_swipeSelectionManager;
@property (nonatomic, retain) PUAlbumListTransitionContext *albumListTransitionContext;
@property (nonatomic) unsigned int allowedActions;
@property (nonatomic) BOOL alwaysHideTabBar;
@property (nonatomic, readonly) PHFetchResult *assetCollectionsFetchResult;
@property (nonatomic, readonly) PHFetchResult *collectionListFetchResult;
@property (setter=_setCollectionViewLayoutReferenceWidth:, nonatomic) float collectionViewLayoutReferenceWidth;
@property (nonatomic, retain) UIBarButtonItem *customDoneButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PUPhotosGridViewControllerSpec *gridSpec;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL initiallyScrolledToBottom;
@property (setter=setDisplayingSearchResults:, nonatomic) BOOL isDisplayingSearchResults;
@property (nonatomic, retain) UICollectionViewLayout<PUGridLayoutProtocol> *mainGridLayout;
@property (nonatomic, copy) id /* block */ onViewDidAppearCompletion;
@property (nonatomic, retain) PUSearchViewController *passdownSearchViewController;
@property (setter=_setPhotoOrStackPinchGestureRecognizer:, nonatomic, retain) PUPhotoPinchGestureRecognizer *photoOrStackPinchGestureRecognizer;
@property (setter=_setPhotoSelectionManager:, nonatomic, retain) PUPhotoSelectionManager *photoSelectionManager;
@property (nonatomic, retain) PUPhotosDataSource *photosDataSource;
@property (setter=ppt_setNextDeleteFinishedBlock:, nonatomic, copy) id /* block */ ppt_nextDeleteFinishedBlock;
@property (nonatomic, retain) PUSessionInfo *sessionInfo;
@property (nonatomic) BOOL showsCustomDoneButtonItemOnLeft;
@property (readonly) Class superclass;
@property (setter=_setSwipeSelectionGestureRecognizer:, nonatomic, retain) UIPanGestureRecognizer *swipeSelectionGestureRecognizer;

+ (void)transferPhotoBrowserFromGridViewController:(id)arg1 toGridViewController:(id)arg2;

- (void).cxx_destruct;
- (id)_activeSearchButtonItem;
- (void)_adaptSearchViewController:(id)arg1 toTraitCollection:(id)arg2 animated:(BOOL)arg3;
- (void)_addButtonPressed:(id)arg1;
- (id)_albumListTransitionLayout;
- (id)_albumPickerViewController;
- (id)_allAssetsInCollections;
- (BOOL)_allowsActions:(unsigned int)arg1;
- (BOOL)_areAllAssetsSelected;
- (id)_assetsAllowingDelete:(BOOL)arg1 orRemove:(BOOL)arg2 fromAssets:(id)arg3;
- (id)_assetsAllowingEditOperation:(int)arg1 fromAssets:(id)arg2;
- (id)_avalancheStackImageForAsset:(id)arg1 partialStack:(BOOL)arg2;
- (id)_barButtonSpacerWithWidth:(float)arg1;
- (int)_batchPreheatingCount;
- (void)_beginInteractiveNavigationForItemAtIndexPath:(id)arg1;
- (void)_beginInteractiveStackCollapse:(id)arg1;
- (id)_bestReferenceItemIndexPathWithTopBias:(BOOL)arg1;
- (id)_cachedViewSizeTransitionContext;
- (struct CGSize { float x1; float x2; })_cachedViewSizeTransitionContextSize;
- (id)_cachingImageManager;
- (BOOL)_canAddContent;
- (BOOL)_canAllContainersPerformEditOperation:(int)arg1;
- (BOOL)_canPasteboardCopyAssetAtIndexPath:(id)arg1;
- (BOOL)_canRemoveContent;
- (BOOL)_canShareAsset:(id)arg1;
- (BOOL)_canShareContent;
- (id)_cancelButtonItem;
- (void)_cancelImageRequestForCell:(id)arg1;
- (void)_clearAutomaticContentOffsetSnapshot;
- (BOOL)_collectionView:(id)arg1 shouldApplyTransitionContentOffset:(struct CGPoint { float x1; float x2; })arg2 contentSize:(struct CGSize { float x1; float x2; })arg3;
- (id)_collectionViewSpeedometer;
- (void)_configureAddPlaceholderCell:(id)arg1 animated:(BOOL)arg2;
- (void)_configureDecorationsForCell:(id)arg1 withAsset:(id)arg2 thumbnailIsPlaceholder:(BOOL)arg3 assetMayHaveChanged:(BOOL)arg4;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)_deleteActionController;
- (int)_deleteActionForBarButtonItem:(id)arg1;
- (id)_deselectAllBarButtonItem;
- (void)_didDismissSearchViewController;
- (BOOL)_didForceDataSource;
- (void)_dismissSearchViewControllerAnimated:(BOOL)arg1;
- (id)_emptyPlaceholderView;
- (void)_ensureOneUpPresentationHelper;
- (void)_forceDataSourceIfNeeded;
- (void)_getFirstAsset:(id*)arg1 collection:(id*)arg2;
- (void)_handleCancelButton:(id)arg1;
- (void)_handlePhotoOrStackPinchGestureRecognizer:(id)arg1;
- (void)_handleSelectSessionDoneButton:(id)arg1;
- (void)_handleSelectionButton:(id)arg1;
- (void)_handleSwipeSelectionFromLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)_handleSwipeSelectionGesture:(id)arg1;
- (BOOL)_hasAtLeastOneContainer;
- (BOOL)_hasEditSessionReorderedItems;
- (id)_hideAssetConfirmationAlert;
- (unsigned int)_indexForPhotoCollection:(id)arg1;
- (id)_indexesWithoutPlaceholdersFromIndexes:(id)arg1 inSection:(int)arg2;
- (void)_invalidateAllAssetIndexes;
- (void)_invalidateAllProgressInfoIndexPaths;
- (void)_invalidateCachedViewSizeTransitionContext;
- (BOOL)_isAddPlaceholderAtIndexPath:(id)arg1;
- (id)_localizedBannerTextForAsset:(id)arg1 isDestructive:(BOOL*)arg2;
- (int)_maximumNumberOfRowsToPreheat;
- (void)_menuControllerDidHideMenu:(id)arg1;
- (id)_modalSearchResultsViewController;
- (id)_modalSearchViewController;
- (void)_navigateToPhotoAtIndexPath:(id)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3;
- (id)_newEditActionItemsWithWideSpacing:(BOOL)arg1;
- (id)_oneUpPresentationHelper;
- (id)_pendingViewSizeTransitionContext;
- (void)_performAutomaticContentOffsetAdjustment;
- (id)_performHideActivityWithAssets:(id)arg1;
- (id)_photoBrowserOneUpPresentationAdaptor;
- (id)_pickerBannerView;
- (void)_prepareForAutomaticContentOffsetAdjustment;
- (void)_presentSearchViewController:(id)arg1 forTraitCollection:(id)arg2 animated:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)_presentSharingViewController:(id)arg1 completion:(id /* block */)arg2;
- (unsigned int)_previousCollectionsCount;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_previousPrefetchRect;
- (struct CGPoint { float x1; float x2; })_previousPreheatContentOffset;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_previousPreheatRect;
- (id)_pushedPhotoBrowserController;
- (id)_referenceBarButtonItemForDeleteAction:(int)arg1;
- (id)_removeActionSheet;
- (void)_removeButtonPressed:(id)arg1;
- (void)_removeSelectedAssetsWithCompletion:(id /* block */)arg1;
- (void)_searchButtonPressed:(id)arg1;
- (void)_searchResultsViewControllerDidFinish:(id)arg1;
- (id)_selectAllBarButtonItem;
- (id)_selectSessionDoneBarButtonItem;
- (id)_selectionButton;
- (id)_selectionManagerWithSelectedSharableAssets;
- (id)_selectionManagerWithSharableAssetsInFetchResult:(id)arg1 forAssetCollection:(id)arg2;
- (void)_setAlbumPickerViewController:(id)arg1;
- (void)_setBatchPreheatingCount:(int)arg1;
- (void)_setCachedViewSizeTransitionContext:(id)arg1;
- (void)_setCachedViewSizeTransitionContextSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_setCollectionViewLayoutReferenceWidth:(float)arg1;
- (void)_setCollectionViewSpeedometer:(id)arg1;
- (void)_setDeleteActionController:(id)arg1;
- (void)_setDidForceDataSource:(BOOL)arg1;
- (void)_setEmptyPlaceholderView:(id)arg1;
- (void)_setHasEditSessionReorderedItems:(BOOL)arg1;
- (void)_setHideAssetConfirmationAlert:(id)arg1;
- (void)_setMaximumNumberOfRowsToPreheat:(int)arg1;
- (void)_setModalSearchResultsViewController:(id)arg1;
- (void)_setModalSearchViewController:(id)arg1;
- (void)_setOneUpPresentationHelper:(id)arg1;
- (void)_setPendingViewSizeTransitionContext:(id)arg1;
- (void)_setPhotoBrowserOneUpPresentationAdaptor:(id)arg1;
- (void)_setPhotoOrStackPinchGestureRecognizer:(id)arg1;
- (void)_setPhotoSelectionManager:(id)arg1;
- (void)_setPreviousCollectionsCount:(unsigned int)arg1;
- (void)_setPreviousPrefetchRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setPreviousPreheatContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setPreviousPreheatRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setPushedPhotoBrowserController:(id)arg1;
- (void)_setRemoveActionSheet:(id)arg1;
- (void)_setShareAssetsPopoverController:(id)arg1;
- (void)_setSharingViewController:(id)arg1;
- (void)_setSlideshowViewController:(id)arg1;
- (void)_setSwipeSelectionGestureRecognizer:(id)arg1;
- (void)_setSwipeSelectionManager:(id)arg1;
- (unsigned int)_sharableAssetsTypeInFetchResult:(id)arg1;
- (id)_shareAssetsPopoverController;
- (void)_shareButtonPressed:(id)arg1;
- (id)_shareableAssetsFromAssets:(id)arg1;
- (id)_sharingViewController;
- (id)_sharingViewControllerWithSelectionManager:(id)arg1;
- (void)_slideshowButtonPressed:(id)arg1;
- (id)_slideshowNavigationControllerForFetchResult:(id)arg1 assetCollection:(id)arg2;
- (id)_slideshowViewController;
- (id)_swipeSelectionManager;
- (BOOL)_transitionWidthHasChanged;
- (void)_updateAllProgressInfoIndexPaths;
- (void)_updateBackButtonTitle;
- (void)_updateCollectionViewMultipleSelection;
- (void)_updateContentOffsetForPendingViewSizeTransition;
- (void)_updateGlobalHeaderVisibility;
- (void)_updateIndexPathForProgressInfo:(id)arg1;
- (void)_updateNavigationBannerAnimated:(BOOL)arg1;
- (void)_updatePhotoDecorationForCell:(id)arg1 animated:(BOOL)arg2;
- (void)_updatePhotoSelectionManager;
- (void)_updateProgressForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateProgressForCellAtIndexPath:(id)arg1;
- (void)_updateSearchButtonTextForActiveSearchField:(BOOL)arg1;
- (void)_updateSelectionForCell:(id)arg1 atIndexPath:(id)arg2;
- (id)_updateSelectionFromSelectionManager:(id)arg1;
- (void)_updateSubviewsOrderingAndVisibility;
- (void)_updateToolbarContentsAnimated:(BOOL)arg1;
- (BOOL)_updateTransitionWidthOnAppearance;
- (void)_willDismissSearchViewControllerAnimated:(BOOL)arg1;
- (id)albumListTransitionContext;
- (BOOL)allowSelectAllButton;
- (BOOL)allowSlideshowButton;
- (unsigned int)allowedActions;
- (id)alternateContentView;
- (BOOL)alwaysHideTabBar;
- (id)assetAtIndexPath:(id)arg1;
- (id)assetAtIndexPathIfSafe:(id)arg1;
- (id)assetCollectionsFetchResult;
- (id)assetIndexPathForPhotoToken:(id)arg1;
- (id)assetsInAssetCollection:(id)arg1;
- (void)autoScrollerDidUpdate:(id)arg1;
- (void)beginBatchPreheating;
- (id)beginShowingProgressForAsset:(id)arg1 inCollection:(id)arg2;
- (void)beginSuppressingColorSettingsUpdate;
- (id)bestReferenceItemIndexPath;
- (BOOL)canAddToOtherAlbumContent;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canBeginStackCollapseTransition;
- (BOOL)canDeleteContent;
- (BOOL)canDisplayEditButton;
- (BOOL)canNavigateToPhotoInteractively:(BOOL)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (double)cellAspectRatioHint;
- (int)cellFillMode;
- (id)collectionListFetchResult;
- (BOOL)collectionView:(id)arg1 canReorderItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 completionHandler:(id /* block */)arg4;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (float)collectionViewLayoutReferenceWidth;
- (void)configureGlobalFooterView:(id)arg1;
- (void)configureGlobalHeaderView:(id)arg1;
- (void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2 assetMayHaveChanged:(BOOL)arg3;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(BOOL)arg4;
- (struct CGPoint { float x1; float x2; })contentOffsetForPreheating;
- (id)contentScrollView;
- (struct CGSize { float x1; float x2; })contentSizeForPreheating;
- (void)copy:(id)arg1;
- (id)customDoneButtonItem;
- (void)dealloc;
- (void)deletePhotosActionController:(id)arg1 presentConfirmationViewController:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)didSelectAddPlaceholderInSection:(int)arg1;
- (void)endBatchPreheating;
- (void)endShowingProgressWithIdentifier:(id)arg1;
- (void)endSuppressingColorSettingsUpdate;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)getEmptyPlaceholderViewTitle:(id*)arg1 message:(id*)arg2;
- (void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out BOOL*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5;
- (float)globalHeaderHeight;
- (id)gridLayout;
- (id)gridSpec;
- (void)handleAddFromAction;
- (void)handleAddToAction;
- (void)handleLongPressGesture:(id)arg1;
- (void)handleNavigateToAsset:(id)arg1 inContainer:(id)arg2;
- (void)handleToggleSelectionOfItemAtIndexPath:(id)arg1;
- (void)handleTransitionFade:(BOOL)arg1 animate:(BOOL)arg2;
- (BOOL)hasScrollableContent;
- (int)imageDeliveryMode;
- (id)imageForAsset:(id)arg1 outIsPlaceholder:(BOOL*)arg2;
- (id)imageRequestOptionsForAsset:(id)arg1 pixelSize:(inout struct CGSize { float x1; float x2; }*)arg2;
- (id)indexPathForAsset:(id)arg1 hintCollection:(id)arg2 hintIndexPath:(id)arg3;
- (id)indexPathsForPreheatingInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSpec:(id)arg1;
- (BOOL)initiallyScrolledToBottom;
- (void)installGestureRecognizers;
- (void)invalidateGridLayoutIfNecessary;
- (BOOL)isAnyAssetSelected;
- (BOOL)isCameraRoll;
- (BOOL)isContentViewInSyncWithModel;
- (BOOL)isCurrentCollectionViewDataSource;
- (BOOL)isDisplayingSearchResults;
- (BOOL)isEmpty;
- (BOOL)isPreheatingEnabled;
- (BOOL)isTrashBinViewController;
- (id)itemIndexPathAtPoint:(struct CGPoint { float x1; float x2; })arg1 outClosestMatch:(id*)arg2;
- (id)itemIndexPathAtPoint:(struct CGPoint { float x1; float x2; })arg1 outClosestMatch:(id*)arg2 outLeftClosestMatch:(id*)arg3 outAboveClosestMatch:(id*)arg4;
- (void)loadView;
- (id)localizedSelectionTitle;
- (id)localizedTitleForAssets:(id)arg1;
- (id)longPressGestureRecognizer;
- (id)mainGridLayout;
- (void)navigateToBottomAnimated:(BOOL)arg1;
- (void)navigateToPhoto:(id)arg1 inAssetContainer:(id)arg2 animated:(BOOL)arg3;
- (void)navigateToPhoto:(id)arg1 inAssetContainer:(id)arg2 refetchIfNeeded:(BOOL)arg3 animated:(BOOL)arg4;
- (void)navigateToRevealPhoto:(id)arg1 inAssetContainer:(id)arg2 animated:(BOOL)arg3;
- (id)newEmptyPlaceholderView;
- (id)newGridLayout;
- (id)newToolbarItems;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id /* block */)onViewDidAppearCompletion;
- (void)oneUpPresentationHelper:(id)arg1 didDismissOneUpViewController:(id)arg2;
- (void)oneUpPresentationHelper:(id)arg1 willPresentOneUpViewController:(id)arg2;
- (id)oneUpPresentationHelperScrollView:(id)arg1;
- (BOOL)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)arg1;
- (id)oneUpPresentationHelperViewController:(id)arg1;
- (id)passdownSearchViewController;
- (void)paste:(id)arg1;
- (id)photoCollectionAtIndex:(unsigned int)arg1;
- (id)photoOrStackPinchGestureRecognizer;
- (id)photoSelectionManager;
- (id)photosDataSource;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (void)photosDataSourceWillChange:(id)arg1;
- (void)photosSharingViewController:(id)arg1 didCompleteWithActivityType:(id)arg2 success:(BOOL)arg3 withAsset:(id)arg4;
- (void)photosSharingViewControllerDidCancel:(id)arg1 needsDismiss:(BOOL)arg2;
- (void)photosSharingViewControllerWillCancel:(id)arg1 withAsset:(id)arg2;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (id /* block */)ppt_nextDeleteFinishedBlock;
- (void)ppt_setNextDeleteFinishedBlock:(id /* block */)arg1;
- (int)preferredStatusBarStyle;
- (void)preheatAssets;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)processDataSourceChange:(id)arg1;
- (id)pu_debugRows;
- (BOOL)pu_handleSecondTabTap;
- (BOOL)pu_wantsTabBarVisible;
- (BOOL)pu_wantsToolbarVisible;
- (void)resetPreheating;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewSpeedometer:(id)arg1 regimeDidChange:(int)arg2 from:(int)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillScrollToTop:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (id)searchButtonItem;
- (void)searchViewController:(id)arg1 adaptToTraitCollection:(id)arg2;
- (void)searchViewController:(id)arg1 displaySearchResults:(id)arg2 orAlbum:(struct NSObject { Class x1; }*)arg3 withTitle:(id)arg4 completion:(id /* block */)arg5;
- (void)searchViewController:(id)arg1 presentFromResultsViewController:(id)arg2 animated:(BOOL)arg3;
- (void)searchViewControllerDidCancel:(id)arg1;
- (void)sectionedGridLayout:(id)arg1 didPrepareTransitionIsAppearing:(BOOL)arg2;
- (id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg1;
- (BOOL)sectionedGridLayoutTransitionAutoAdjustContentOffsetEnabled:(id)arg1;
- (id)selectedAssets;
- (id)selectedIndexPaths;
- (void)sender:(id)arg1 shareAssetsInFetchResult:(id)arg2 forAssetCollection:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)sender:(id)arg1 shareSelectedAssetsWithCompletion:(id /* block */)arg2;
- (id)sessionInfo;
- (id)sessionInfoForTransferredAssets:(id)arg1;
- (void)sessionInfoPhotoSelectionDidChange:(id)arg1;
- (void)setAlbumListTransitionContext:(id)arg1;
- (void)setAlbumListTransitionLayout:(id)arg1;
- (void)setAlbumListTransitionLayout:(id)arg1 animated:(BOOL)arg2;
- (void)setAllowedActions:(unsigned int)arg1;
- (void)setAlternateContentView:(id)arg1;
- (void)setAlwaysHideTabBar:(BOOL)arg1;
- (void)setContentViewInSyncWithModel:(BOOL)arg1;
- (void)setCustomDoneButtonItem:(id)arg1;
- (void)setDisplayingSearchResults:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setGridSpec:(id)arg1;
- (void)setInitiallyScrolledToBottom:(BOOL)arg1;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)setMainGridLayout:(id)arg1;
- (void)setOnViewDidAppearCompletion:(id /* block */)arg1;
- (void)setPassdownSearchViewController:(id)arg1;
- (void)setPhotosDataSource:(id)arg1;
- (void)setSearchPlaceholder:(id)arg1;
- (void)setSelected:(BOOL)arg1 itemsAtIndexes:(id)arg2 inSection:(int)arg3 animated:(BOOL)arg4;
- (void)setSessionInfo:(id)arg1;
- (void)setShowsCustomDoneButtonItemOnLeft:(BOOL)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)shouldPerformAutomaticContentOffsetAdjustment;
- (BOOL)shouldPerformFullReloadForIncrementalDataSourceChange:(id)arg1;
- (BOOL)shouldShowMenu;
- (BOOL)shouldShowTabBar;
- (BOOL)shouldShowToolbar;
- (BOOL)showsCustomDoneButtonItemOnLeft;
- (void)slideshowViewControllerDidFinish:(id)arg1 withVisibleAssets:(id)arg2;
- (struct CGPoint { float x1; float x2; })stableUpdatesContentOffsetForProposedContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (unsigned int)supportedInterfaceOrientations;
- (id)swipeSelectionGestureRecognizer;
- (int)swipeSelectionManager:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)swipeSelectionManager:(id)arg1 photoCollectionAtIndex:(unsigned int)arg2;
- (void)swipeSelectionManager:(id)arg1 updatePhotoSelectionWithIndexes:(id)arg2 inSection:(int)arg3 selectionMode:(int)arg4;
- (void)uninstallGestureRecognizers;
- (void)updateEmptyPlaceholderViewAnimated:(BOOL)arg1;
- (void)updateGlobalFooter;
- (void)updateInterfaceForIncrementalDataSourceChanges:(id)arg1;
- (void)updateInterfaceForModelReloadAnimated:(BOOL)arg1;
- (void)updateLayoutMetrics;
- (void)updateNavigationBarAnimated:(BOOL)arg1;
- (void)updatePeripheralInterfaceAnimated:(BOOL)arg1;
- (void)updateProgressWithIdentifier:(id)arg1 withValue:(float)arg2;
- (BOOL)updateSpec;
- (void)updateTitle;
- (void)updateVisibleSectionHeadersAtIndexes:(id)arg1;
- (void)updateVisibleSupplementaryViewsOfKind:(id)arg1 animated:(BOOL)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)wantsAddContentInToolbar;
- (BOOL)wantsAddPlaceholderAtEndOfSection:(int)arg1;
- (BOOL)wantsGlobalFooter;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)zoomTransition:(id)arg1 didFinishForOperation:(int)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4;
- (BOOL)zoomTransition:(id)arg1 getFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 contentMode:(int*)arg3 forPhotoToken:(id)arg4 operation:(int)arg5;
- (id)zoomTransition:(id)arg1 photoTokenForPhoto:(id)arg2 inCollection:(id)arg3;
- (void)zoomTransition:(id)arg1 setVisibility:(BOOL)arg2 forPhotoToken:(id)arg3;
- (BOOL)zoomTransition:(id)arg1 transitionImageForPhotoToken:(id)arg2 callback:(id /* block */)arg3;
- (void)zoomTransition:(id)arg1 willBeginForOperation:(int)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4;

@end
