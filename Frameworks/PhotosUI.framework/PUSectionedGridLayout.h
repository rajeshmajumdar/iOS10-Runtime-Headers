/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSectionedGridLayout : UICollectionViewLayout <PUCollectionViewLayoutDelegating, PUGridLayoutProtocol, PUPhotosGridTransitioningLayout, PUReorderableLayout> {
    PUSectionedGridLayoutInvalidationContext * _cachedFloatingHeaderInvalidationContext;
    int  _cachedFloatingHeaderInvalidationContextNewVisualSection;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _cachedLayoutAttributesLastKnownRect;
    NSArray * _cachedNonHeaderLayoutAttributesInRect;
    int  _columnsPerRow;
    struct CGSize { 
        float width; 
        float height; 
    }  _contentSize;
    float  _cropAmount;
    int  _cropType;
    <PUSectionedGridLayoutDelegate> * _delegate;
    BOOL  _delegateSupportsAnchorItemForContentOffset;
    BOOL  _delegateSupportsDidInvalidateWithContext;
    BOOL  _delegateSupportsGroupedSections;
    BOOL  _delegateSupportsTargetContentOffset;
    BOOL  _delegateSupportsTransitionAutoContentOffsetEnabled;
    NSSet * _deletedItemIndexPaths;
    NSIndexSet * _deletedSections;
    int  _floatingHeaderVisualSectionIndex;
    BOOL  _floatingHeadersLayoutIsValid;
    BOOL  _floatingSectionHeadersEnabled;
    float  _globalBottomPadding;
    UICollectionViewLayoutAttributes * _globalFooterAttributes;
    float  _globalFooterHeight;
    UICollectionViewLayoutAttributes * _globalHeaderAttributes;
    float  _globalHeaderHeight;
    float  _globalTopPadding;
    BOOL  _hasFloatingHeaders;
    NSSet * _hiddenItemIndexPaths;
    struct CGSize { 
        float width; 
        float height; 
    }  _interItemSpacing;
    struct CGSize { 
        float width; 
        float height; 
    }  _itemSize;
    BOOL  _layoutDataIsValid;
    PULayoutSampledSectioning * _layoutSectioning;
    BOOL  _processingCollectionViewUpdates;
    int * _realSectionItemCounts;
    NSPointerArray * _realToVisualSections;
    NSString * _renderedStripsElementKind;
    NSIndexPath * _reorderingInsertedIndexPath;
    NSIndexPath * _reorderingSourceIndexPath;
    NSIndexPath * _reorderingTargetIndexPath;
    BOOL  _samplingDataIsValid;
    NSPointerArray * _samplingHelpersByVisualSection;
    float  _sectionBottomPadding;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _sectionContentInset;
    NSString * _sectionHeaderElementKind;
    float  _sectionHeaderHeight;
    BOOL  _sectionHeadersEnabled;
    float  _sectionTopPadding;
    BOOL  _sectioningDataIsValid;
    NSSet * _supplementaryViewKinds;
    int  _totalRealSections;
    int  _totalVisualSections;
    int  _transitionAnchorColumnOffset;
    BOOL  _transitionAnchorShiftsColumns;
    id /* block */  _transitionAnimationEndCleanupBlock;
    PULayoutAnimationsHelper * _transitionAnimationsHelper;
    BOOL  _transitionApplyingEffectiveContentOrigin;
    struct CGPoint { 
        float x; 
        float y; 
    }  _transitionEffectiveContentOrigin;
    struct CGPoint { 
        float x; 
        float y; 
    }  _transitionEndContentOffset;
    NSIndexPath * _transitionExplicitAnchorItemIndexPath;
    NSIndexPath * _transitionFirstVisibleRowVisualPath;
    BOOL  _transitionIsAnimated;
    BOOL  _transitionIsAppearing;
    NSIndexPath * _transitionLastVisibleRowVisualPath;
    UICollectionViewLayout * _transitionLayout;
    NSDictionary * _transitionSectionInfosByTransitionSection;
    NSDictionary * _transitionSectionInfosByVisualSection;
    struct CGPoint { 
        float x; 
        float y; 
    }  _transitionStartContentOffset;
    BOOL  _transitionZoomingOut;
    <PUCollectionViewLayoutTransitioningDelegate> * _transitioningDelegate;
    BOOL  _usesRenderedStripTopExtendersForTransitions;
    BOOL  _usesRenderedStrips;
    NSIndexPath * _viewSizeTransitionAnchorItem;
    float  _viewSizeTransitionAnchorItemNormalizedYOffset;
    int * _visualSectionMaxRows;
    float * _visualSectionStartYs;
    NSArray * _visualToRealSectionIndexes;
}

@property (nonatomic) int columnsPerRow;
@property (nonatomic) float cropAmount;
@property (nonatomic) int cropType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUSectionedGridLayoutDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL floatingSectionHeadersEnabled;
@property (nonatomic) float globalBottomPadding;
@property (nonatomic) float globalFooterHeight;
@property (nonatomic, readonly) NSIndexPath *globalFooterIndexPath;
@property (nonatomic, readonly) UICollectionViewLayoutAttributes *globalHeaderAttributes;
@property (nonatomic) float globalHeaderHeight;
@property (nonatomic, readonly) NSIndexPath *globalHeaderIndexPath;
@property (nonatomic) float globalTopPadding;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSSet *hiddenItemIndexPaths;
@property (nonatomic) struct CGSize { float x1; float x2; } interItemSpacing;
@property (nonatomic) struct CGSize { float x1; float x2; } itemSize;
@property (nonatomic, readonly) int itemsPerRow;
@property (nonatomic, readonly) PULayoutSampledSectioning *layoutSectioning;
@property (nonatomic, readonly) int numberOfVisualSections;
@property (nonatomic, copy) NSString *renderedStripsElementKind;
@property (nonatomic) float sectionBottomPadding;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } sectionContentInset;
@property (nonatomic, copy) NSString *sectionHeaderElementKind;
@property (nonatomic) float sectionHeaderHeight;
@property (nonatomic) BOOL sectionHeadersEnabled;
@property (nonatomic) float sectionTopPadding;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } transitionActualContentSize;
@property (nonatomic, readonly) int transitionAnchorColumnOffset;
@property (nonatomic) BOOL transitionAnchorShiftsColumns;
@property (nonatomic) struct CGPoint { float x1; float x2; } transitionEffectiveContentOrigin;
@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } transitionEndContentOffset;
@property (nonatomic, copy) NSIndexPath *transitionExplicitAnchorItemIndexPath;
@property (nonatomic, readonly, copy) NSIndexPath *transitionFirstVisibleRowVisualPath;
@property (nonatomic) BOOL transitionIsAnimated;
@property (nonatomic, readonly) BOOL transitionIsAppearing;
@property (nonatomic, readonly, copy) NSIndexPath *transitionLastVisibleRowVisualPath;
@property (nonatomic, readonly) UICollectionViewLayout *transitionLayout;
@property (nonatomic) struct CGPoint { float x1; float x2; } transitionStartContentOffset;
@property (nonatomic) BOOL transitionZoomingOut;
@property (nonatomic) <PUCollectionViewLayoutTransitioningDelegate> *transitioningDelegate;
@property (nonatomic) BOOL usesRenderedStripTopExtendersForTransitions;

+ (Class)invalidationContextClass;

- (void).cxx_destruct;
- (void)_adjustGridTransitionLayoutAttributes:(id)arg1 toOrFromGridLayout:(id)arg2 outTargetRowExists:(BOOL*)arg3 isAppearing:(BOOL)arg4;
- (void)_adjustItemLayoutAttributesForReordering:(id)arg1;
- (void)_adjustRenderedStripLayoutAttributes:(id)arg1 toOrFromGridLayout:(id)arg2 isAppearing:(BOOL)arg3;
- (void)_adjustSectionHeaderLayoutAttributes:(id)arg1 toOrFromGridLayout:(id)arg2 isAppearing:(BOOL)arg3;
- (id /* block */)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned int)arg3;
- (void)_clearLayoutCaches;
- (void)_clearRetainedCaches;
- (void)_clearSamplingCaches;
- (void)_clearSectioningCaches;
- (struct CGPoint { float x1; float x2; })_currentVisibleRectOrigin;
- (void)_didFinishLayoutTransitionAnimations:(BOOL)arg1;
- (void)_enumerateVisualItemFramesInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 usingBlock:(id /* block */)arg2;
- (float)_finalSectionHeaderHeight;
- (int)_firstVisualItemIndexForRenderedStripIndex:(int)arg1;
- (int)_floatingHeaderVisualSectionForVisibleOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameByAdjustingOffScreenEnteringFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forRowAtVisualIndexPath:(struct PUSimpleIndexPath { int x1; int x2; })arg2 transitionSectionInfo:(id)arg3 toOrFromGridLayout:(id)arg4 isAppearing:(BOOL)arg5;
- (id)_gridTransitionLayout;
- (float)_heightOfSectionAtVisualIndex:(int)arg1;
- (void)_invalidateFloatingHeadersLayout;
- (void)_invalidateLayoutWithContext:(id)arg1;
- (void)_invalidateSupplementaryViewKinds;
- (BOOL)_isSupportedSupplementaryViewKind:(id)arg1;
- (BOOL)_isTransitionForeignSupplementaryViewKind:(id)arg1;
- (struct PUSimpleIndexPath { int x1; int x2; })_itemVisualIndexPathAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)_layoutAttributesForItemAtVisualIndexPath:(struct PUSimpleIndexPath { int x1; int x2; })arg1 realIndexPath:(id)arg2 isMainRealItem:(BOOL)arg3;
- (id)_layoutAttributesForSupplementaryViewOfKind:(id)arg1 forVisualSection:(int)arg2 supplementaryViewIndex:(int)arg3;
- (void)_prepareFloatingHeadersLayoutIfNeeded;
- (void)_prepareForTransitionFromStackedLayout:(id)arg1;
- (void)_prepareForTransitionToOrFromGridLayout:(id)arg1 isAppearing:(BOOL)arg2;
- (void)_prepareLayoutIfNeeded;
- (void)_prepareSamplingDataIfNeeded;
- (void)_prepareSectioningDataIfNeeded;
- (id)_realItemIndexPathClosestToPoint:(struct CGPoint { float x1; float x2; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withTest:(id /* block */)arg3;
- (int)_renderedStripIndexForSectionRowIndex:(int)arg1;
- (float)_sectionWidth;
- (void)_setColumnsPerRow:(int)arg1;
- (float)_startYOfContentAtVisualSectionIndex:(int)arg1;
- (float)_startYOfVisualSectionAtIndex:(int)arg1;
- (id)_supplementaryViewKinds;
- (BOOL)_supportsAdvancedTransitionAnimations;
- (struct CGPoint { float x1; float x2; })_targetContentOffsetWithAnchorItemIndexPath:(id)arg1 isRotation:(BOOL)arg2 orTransitionFromLayout:(id)arg3 keepAnchorStable:(BOOL)arg4;
- (struct PUGridCoordinates { int x1; int x2; })_targetTransitionGridCoordsForGridCoords:(struct PUGridCoordinates { int x1; int x2; })arg1 atVisualSection:(int)arg2 transitionSectionInfo:(id)arg3;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })_transformToConvertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 intoRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 referenceCenter:(struct CGPoint { float x1; float x2; })arg3;
- (void)_updateHasFloatingHeaders;
- (struct CGPoint { float x1; float x2; })_visibleRectOriginForScrollOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct PUSimpleIndexPath { int x1; int x2; })_visualIndexPathForTransitionCoordinates:(struct PUGridCoordinates { int x1; int x2; })arg1 inTransitionSection:(int)arg2;
- (struct PUSimpleIndexPath { int x1; int x2; })_visualRowPathForTransitionRowIndex:(int)arg1 transitionSectionInfo:(id)arg2;
- (int)_visualSectionAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_visualSectionsMatchTransitionSectionsToOrFromLayout:(id)arg1;
- (void)adjustEffectiveContentOriginForTransitionEndContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (id)assetIndexPathsForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)beginInsertingItemAtIndexPath:(id)arg1;
- (void)beginReorderingItemAtIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })collectionViewContentSize;
- (int)columnsPerRow;
- (float)cropAmount;
- (int)cropType;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)endInsertingItem;
- (void)endReordering;
- (void)enumerateItemIndexPathsForVisualSection:(int)arg1 inVisualItemRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateRealSectionsForVisualSection:(int)arg1 usingBlock:(id /* block */)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)finalizeAnimatedBoundsChange;
- (void)finalizeCollectionViewUpdates;
- (void)finalizeLayoutTransition;
- (void)finalizeViewTransitionToSize;
- (BOOL)floatingSectionHeadersEnabled;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForItemAtGridCoordinates:(struct PUGridCoordinates { int x1; int x2; })arg1 inTransitionSection:(int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForItemAtGridCoordinates:(struct PUGridCoordinates { int x1; int x2; })arg1 inVisualSection:(int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForSectionHeaderAtVisualSection:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForSectionHeaderOfRealItem:(id)arg1;
- (void)getVisualSectionIndex:(int*)arg1 visualItemRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 forRenderStripAtIndexPath:(id)arg3;
- (float)globalBottomPadding;
- (float)globalFooterHeight;
- (id)globalFooterIndexPath;
- (id)globalHeaderAttributes;
- (float)globalHeaderHeight;
- (id)globalHeaderIndexPath;
- (float)globalTopPadding;
- (struct PUGridCoordinates { int x1; int x2; })gridCoordinatesInSectionForItemAtVisualIndex:(int)arg1;
- (struct PUGridCoordinates { int x1; int x2; })gridCoordinatesInTransitionSectionForItemAtIndexPath:(id)arg1;
- (struct PUGridCoordinates { int x1; int x2; })gridCoordinatesInVisualSectionForItemAtIndexPath:(id)arg1;
- (BOOL)hasItemAtGridCoordinates:(struct PUGridCoordinates { int x1; int x2; })arg1 inTransitionSection:(int)arg2;
- (id)hiddenItemIndexPaths;
- (id)init;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGSize { float x1; float x2; })interItemSpacing;
- (void)invalidateLayoutForMetricsChange;
- (void)invalidateLayoutForVerticalScroll;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)itemIndexPathAtCenterOfRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)itemIndexPathAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)itemIndexPathClosestToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })itemSize;
- (int)itemsPerRow;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGSize { float x1; float x2; })layoutItemSizeForColumn:(int)arg1;
- (id)layoutSectioning;
- (id)mainRealIndexPathAtGridCoordinates:(struct PUGridCoordinates { int x1; int x2; })arg1 inTransitionSection:(int)arg2;
- (int)mainRealSectionForVisualSection:(int)arg1;
- (id)maxItemIndexPathAbovePoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)maxItemIndexPathLeftOfPoint:(struct CGPoint { float x1; float x2; })arg1;
- (int)maximumNumberOfItemsInVisualSection:(int)arg1 withNumberOfRealItems:(int)arg2 forSectioning:(id)arg3;
- (int)numberOfColumnsForWidth:(float)arg1;
- (int)numberOfContiguousRowsInTransitionSection:(int)arg1;
- (int)numberOfItemsInRealSection:(int)arg1 forSectioning:(id)arg2;
- (int)numberOfRealItemsInRealSection:(int)arg1;
- (int)numberOfRealItemsInVisualSection:(int)arg1;
- (int)numberOfRealSections;
- (int)numberOfRealSectionsForSectioning:(id)arg1;
- (int)numberOfRowsInVisualSection:(int)arg1;
- (int)numberOfVisualItemsInVisualSection:(int)arg1;
- (int)numberOfVisualSections;
- (int)numberOfVisualSectionsForSectioning:(id)arg1;
- (void)prepareForAnimatedBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareForTransitionFromLayout:(id)arg1;
- (void)prepareForTransitionToLayout:(id)arg1;
- (id)prepareForViewTransitionToSize:(struct CGSize { float x1; float x2; })arg1;
- (void)prepareLayout;
- (id)pu_debugRows;
- (id)pu_layoutAttributesForElementClosestToPoint:(struct CGPoint { float x1; float x2; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 passingTest:(id /* block */)arg3;
- (id)realSectionsForVisualSection:(int)arg1 forSectioning:(id)arg2;
- (id)renderedStripsElementKind;
- (id)reorderedIndexPath:(id)arg1;
- (float)sectionBottomPadding;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })sectionContentInset;
- (id)sectionHeaderElementKind;
- (float)sectionHeaderHeight;
- (BOOL)sectionHeadersEnabled;
- (float)sectionTopPadding;
- (void)setCropAmount:(float)arg1;
- (void)setCropType:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFloatingSectionHeadersEnabled:(BOOL)arg1;
- (void)setGlobalBottomPadding:(float)arg1;
- (void)setGlobalFooterHeight:(float)arg1;
- (void)setGlobalHeaderHeight:(float)arg1;
- (void)setGlobalTopPadding:(float)arg1;
- (void)setHiddenItemIndexPaths:(id)arg1;
- (void)setInterItemSpacing:(struct CGSize { float x1; float x2; })arg1;
- (void)setItemSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setRenderedStripsElementKind:(id)arg1;
- (void)setSectionBottomPadding:(float)arg1;
- (void)setSectionContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setSectionHeaderElementKind:(id)arg1;
- (void)setSectionHeaderHeight:(float)arg1;
- (void)setSectionHeadersEnabled:(BOOL)arg1;
- (void)setSectionTopPadding:(float)arg1;
- (void)setTransitionAnchorShiftsColumns:(BOOL)arg1;
- (void)setTransitionEffectiveContentOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTransitionExplicitAnchorItemIndexPath:(id)arg1;
- (void)setTransitionIsAnimated:(BOOL)arg1;
- (void)setTransitionStartContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTransitionZoomingOut:(BOOL)arg1;
- (void)setTransitioningDelegate:(id)arg1;
- (void)setUsesRenderedStripTopExtendersForTransitions:(BOOL)arg1;
- (BOOL)shouldHideVisualSection:(int)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)supplementaryViewIndexPathForVisualSection:(int)arg1 supplementaryViewItemIndex:(int)arg2;
- (struct CGPoint { float x1; float x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })targetContentOffsetForTransitionFromGridLayout:(id)arg1;
- (struct CGPoint { float x1; float x2; })targetContentOffsetForViewSizeTransitionContext:(id)arg1;
- (struct PUGridCoordinates { int x1; int x2; })targetTransitionGridCoordsForGridCoords:(struct PUGridCoordinates { int x1; int x2; })arg1 atVisualSection:(int)arg2 outTransitionSection:(int*)arg3;
- (id)targetTransitionRealIndexPathForIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })transitionActualContentSize;
- (int)transitionAnchorColumnOffset;
- (id)transitionAnchorIndexPathForTransitionSection:(int)arg1;
- (BOOL)transitionAnchorShiftsColumns;
- (struct CGPoint { float x1; float x2; })transitionEffectiveContentOrigin;
- (struct CGPoint { float x1; float x2; })transitionEndContentOffset;
- (id)transitionExplicitAnchorItemIndexPath;
- (id)transitionFirstVisibleRowVisualPath;
- (BOOL)transitionIsAnimated;
- (BOOL)transitionIsAppearing;
- (id)transitionLastVisibleRowVisualPath;
- (id)transitionLayout;
- (id)transitionSectionsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toOrFromGridLayout:(id)arg2;
- (struct CGPoint { float x1; float x2; })transitionStartContentOffset;
- (BOOL)transitionZoomingOut;
- (id)transitioningDelegate;
- (void)updateReorderingTargetIndexPath:(id)arg1;
- (BOOL)usesRenderedStripTopExtendersForTransitions;
- (struct PUGridCoordinates { int x1; int x2; })visualGridCoordsForTransitionGridCoords:(struct PUGridCoordinates { int x1; int x2; })arg1 atTransitionSection:(int)arg2 outVisualSection:(int*)arg3;
- (int)visualIndexForItemAtGridCoordinates:(struct PUGridCoordinates { int x1; int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })visualRowsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inVisualSection:(int)arg2 totalVisualSectionRows:(int*)arg3;
- (int)visualSectionForHeaderIndexPath:(id)arg1;
- (int)visualSectionForRealSection:(int)arg1;
- (int)visualSectionForSupplementaryViewIndexPath:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })visualSectionsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
