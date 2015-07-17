/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPassGroupStackView : UIScrollView <PKPassDeleteDelegate, PKPassDeleteHandler, PKPassGroupViewDelegate, PKPaymentServiceDelegate> {
    NSMutableDictionary * _animatorsByGroupID;
    NSTimer * _autoscrollTimer;
    int  _currentTestReps;
    <PKPassGroupStackViewDatasource> * _datasource;
    BOOL  _footerSuppressed;
    NSMutableDictionary * _groupViewsByGroupID;
    NSMutableDictionary * _groupViewsInFlightByGroupID;
    BOOL  _hasSuspendedTransition;
    UIView * _headerContainerView;
    BOOL  _inPassthroughHitTest;
    unsigned int  _initialIndexOfReorderedGroup;
    struct { 
        unsigned int numberOfGroups; 
        unsigned int separatorIndex; 
        float separationPadding; 
        unsigned int forcePileOffscreen : 1; 
        unsigned int hasPaymentPasses : 1; 
        unsigned int hasPasses : 1; 
        unsigned int hasPaymentHeader : 1; 
        unsigned int hasPassHeader : 1; 
        unsigned int isDeleting : 1; 
        unsigned int isContinuingModalPresentation : 1; 
        unsigned int forceSubheaderUpdate : 1; 
        unsigned int mutatingForcePileOffscreen : 1; 
    }  _layoutState;
    unsigned int  _modalGroupIndex;
    PKGroup * _modallyPresentedGroup;
    PKPassGroupView * _modallyPresentedGroupView;
    int  _nextState;
    struct CGPoint { 
        float x; 
        float y; 
    }  _panningVelocity;
    UIView * _passContainerView;
    PKPassFooterView * _passFooterView;
    PKPGSVHeaderContext * _passHeaderContext;
    NSMutableArray * _passPileViews;
    NSMutableArray * _passthroughViews;
    PKPGSVHeaderContext * _paymentHeaderContext;
    PKPaymentService * _paymentService;
    int  _presentationState;
    unsigned int  _previousIndexOfReorderedGroup;
    int  _priorState;
    unsigned int  _reorderActionTag;
    NSMutableArray * _reorderActions;
    PKPassGroupView * _reorderedGroupView;
    struct CGPoint { 
        float x; 
        float y; 
    }  _reorderedGroupViewPositionInFrame;
    struct { 
        unsigned int isReordering : 1; 
        unsigned int isReorderPeekCompensated : 1; 
        unsigned int hasScrolledUp : 1; 
        unsigned int hasScrolledDown : 1; 
    }  _reorderingFlags;
    PKReusablePassViewQueue * _reusableCardViewQueue;
    int  _scrollingTestState;
    PKSecureElement * _secureElement;
    BOOL  _showingFooter;
    UIView * _subheaderContainerView;
    int  _suspendedNextState;
    NSMutableArray * _suspendedTransitionCompletionHandlers;
    id /* block */  _transitionCanceller;
    NSMutableArray * _transitionCompletionHandlers;
    unsigned int  _userInteractionCounter;
}

@property (nonatomic) <PKPassGroupStackViewDatasource> *datasource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPassGroupStackViewDelegate><UIScrollViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL footerSuppressed;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isModallyPresentedPassAuthorized;
@property (nonatomic, readonly) BOOL isPresentingPassViewFront;
@property (nonatomic, readonly) BOOL isReordering;
@property (nonatomic, readonly) PKPass *modalGroupFrontmostPass;
@property (nonatomic) unsigned int modalGroupIndex;
@property (nonatomic, readonly) float pileHeight;
@property (nonatomic) BOOL pileSuppressed;
@property (nonatomic) int presentationState;
@property (readonly) Class superclass;

- (void)_addDimmingToPileWithAnimation:(BOOL)arg1;
- (void)_addGroupViewAsSubview:(id)arg1 forIndex:(unsigned int)arg2;
- (void)_addMotionEffectsToModalPile;
- (void)_addPanGestureRecognizerToGroupView:(id)arg1;
- (void)_adjustPassFooterViewOpacityForYOffset:(float)arg1;
- (void)_adjustSeparationGroupAndPassViewsForReordering;
- (void)_animateGroupViewAtIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2 withAnchorView:(id)arg3 insertAbove:(BOOL)arg4;
- (void)_animateGroupViewForUndo:(id)arg1 toIndex:(unsigned int)arg2;
- (id)_animatorForGestureRecognizer:(id)arg1;
- (void)_arrangeGroups;
- (id)_arrayOfStackedIndexes;
- (void)_autoscrollForReordering:(id)arg1;
- (void)_autoscrollIfNecessary;
- (void)_beginGroupPanWithGestureRecognizer:(id)arg1;
- (BOOL)_canShowPassFooter;
- (void)_cancelSuspendedTransition;
- (void)_cancelTransition;
- (void)_cleanUpAnimatorForGroupView:(id)arg1;
- (struct CGSize { float x1; float x2; })_contentSize;
- (int)_defaultContentModeForPresentationState:(int)arg1 index:(unsigned int)arg2;
- (void)_disableScrollingAndNormalizeContentOffset;
- (int)_edgeStylesObscuredByTopCornersOfPassStyle:(int)arg1;
- (int)_edgeStylesObscuredByTopMiddleOfPassStyle:(int)arg1;
- (void)_endGroupPanWithGestureRecognizer:(id)arg1;
- (void)_enumerateLoadedGroupViews:(id /* block */)arg1;
- (void)_executeCompletionHandlers:(id)arg1 cancelled:(BOOL)arg2;
- (void)_fanAndPageGroupView:(id)arg1 animated:(BOOL)arg2;
- (id)_firstHeaderContext;
- (int)_footerStateForPassView:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForFooterViewForPassView:(id)arg1;
- (id)_frontmostPastViewForGroupIndex:(unsigned int)arg1;
- (void)_generateModalGroupPileWithVisibleIndexes:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 reservePlaceForModalGroup:(BOOL)arg2;
- (id)_groupBeforeSeparatorGroup;
- (float)_groupCellHeight;
- (id)_groupViewAtIndex:(unsigned int)arg1;
- (id)_groupViewAtIndexWhileEnsuringVisible:(unsigned int)arg1 withContentMode:(int)arg2;
- (id)_groupViewWithGroup:(id)arg1;
- (void)_handleModalGroupGesture:(id)arg1;
- (id)_headerContextForPassType:(unsigned int)arg1;
- (unsigned int)_indexForNativePositionInTable:(struct CGPoint { float x1; float x2; })arg1;
- (unsigned int)_indexForNativePositionInTable:(struct CGPoint { float x1; float x2; })arg1 roundToClosestIndex:(BOOL)arg2;
- (unsigned int)_indexOfGroupView:(id)arg1;
- (unsigned int)_indexOfReorderedGroupView;
- (BOOL)_isGroupAtIndexInModalPile:(unsigned int)arg1;
- (BOOL)_isIngestingPass;
- (BOOL)_isModalPresentationAllowed;
- (BOOL)_isModalPresentationAllowedForSingleGroup;
- (BOOL)_isTableModalPresentation;
- (unsigned int)_lastIndex;
- (void)_layoutContentFromOffset:(struct CGPoint { float x1; float x2; })arg1 toOffset:(struct CGPoint { float x1; float x2; })arg2 animated:(BOOL)arg3;
- (struct { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; float x3; })_layoutStateForHeaderContextInTable:(id)arg1 withBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)_loadGroupViewAtIndex:(unsigned int)arg1 forState:(int)arg2 contentMode:(int)arg3 cached:(BOOL*)arg4;
- (void)_loadModalGroupView;
- (float)_maxYOfPassFrontFaceAtIndex:(unsigned int)arg1;
- (unsigned int)_maximumNumberOfVisiblePilePasses;
- (struct CGPoint { float x1; float x2; })_nativePositionForPositionInTable:(struct CGPoint { float x1; float x2; })arg1;
- (float)_nativeYForGroupInTableAtIndex:(unsigned int)arg1;
- (void)_notifyDelegateOfStateChange:(BOOL)arg1;
- (BOOL)_passEligibleForFooter:(id)arg1;
- (float)_pileAscenderHeight;
- (float)_pileAscenderHeightForGroupViewInPile:(id)arg1;
- (float)_pileBaseHeight;
- (float)_pileSeparationHeight;
- (struct CGPoint { float x1; float x2; })_positionForGroupView:(id)arg1 atIndex:(unsigned int)arg2 forState:(int)arg3;
- (void)_presentFlippedModalGroupView:(id)arg1 animated:(BOOL)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_presentGroupStackViewWithAnimation:(BOOL)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_presentModalGroupView:(id)arg1 animated:(BOOL)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_presentModalGroupViewPostAnimationActions;
- (void)_presentOffscreenAnimated:(BOOL)arg1 split:(BOOL)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_presentPassIngestionAcceptanceWithAnimation:(BOOL)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_presentPassIngestionWithAnimation:(BOOL)arg1 withCompletionHandler:(id /* block */)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_rangeOfEagerLoadedIndexes;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_rangeOfVisibleIndexes;
- (BOOL)_recomputeLayoutState;
- (void)_removeDimmingFromPileWithAnimation:(BOOL)arg1;
- (void)_removeGroupViewAsSubviewWithGroupID:(id)arg1;
- (void)_removeMotionEffectsFromModalPile;
- (void)_reorderPositionChangedForReorderedGroupViewWithVelocity:(struct CGPoint { float x1; float x2; })arg1;
- (void)_resumeSuspendedTransition;
- (void)_reverseEnumerateLoadedGroupViews:(id /* block */)arg1;
- (float)_scaleForGroupView:(id)arg1 forState:(int)arg2;
- (id)_separatorGroup;
- (void)_setDefaultPaymentPassFromGroupView:(id)arg1 reorderedGroupView:(id)arg2;
- (void)_setModalGroupView:(id)arg1;
- (void)_setScrollEnabled:(BOOL)arg1;
- (double)_setupSpringFactory:(id)arg1 forPileAnimationFromPresentationState:(int)arg2 toPresentationState:(int)arg3 reverse:(BOOL)arg4;
- (double)_setupSpringFactory:(id)arg1 forPileAnimationToPresentationState:(int)arg2 reverse:(BOOL)arg3;
- (double)_setupSpringFactoryForPileAnimations:(id)arg1 withMaximumAcceleration:(double)arg2 reverse:(BOOL)arg3;
- (BOOL)_shouldTablePresentationScroll;
- (void)_showPassFooterView:(BOOL)arg1 forPassView:(id)arg2 animated:(BOOL)arg3 delay:(float)arg4 completion:(id /* block */)arg5;
- (void)_showPassFooterView:(BOOL)arg1 forPassView:(id)arg2 context:(id)arg3 delay:(float)arg4 completion:(id /* block */)arg5;
- (id)_sortedAscendingGroupViewIndexes;
- (id)_sortedDescendingGroupViewIndexes;
- (unsigned int)_startVisibleIndex;
- (void)_stopAutoscrollTimer;
- (void)_suspendTransition;
- (unsigned int)_tablePresentationNumberOfCellsBeforeHeaderHidden;
- (unsigned int)_tablePresentationNumberOfCellsBeforeStacking;
- (void)_tileGroupsForState:(int)arg1 eager:(BOOL)arg2;
- (BOOL)_tileSentinelGroup:(id)arg1 forState:(int)arg2 withAlreadyTiledGroupIDs:(id)arg3;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })_transformForGroupView:(id)arg1 forState:(int)arg2;
- (float)_transformedYForNativeYInTable:(float)arg1 withBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 index:(unsigned int)arg3;
- (void)_transitionSuccessful:(BOOL)arg1;
- (void)_undoUserReorderWithReorderedGroupView:(id)arg1;
- (void)_updateContentSizeAndLayout:(BOOL)arg1;
- (void)_updateContentSizeAndLayout:(BOOL)arg1 forceUpdate:(BOOL)arg2;
- (void)_updateGroupStateForGroupViewInModalPresentation:(id)arg1 animated:(BOOL)arg2;
- (void)_updateGroupStateForGroupViewInStackPresentation:(id)arg1 animated:(BOOL)arg2;
- (void)_updateGroupView:(id)arg1 toPresentationState:(int)arg2 withSpringFactory:(id)arg3;
- (void)_updateGroupView:(id)arg1 toPresentationState:(int)arg2 withSpringFactory:(id)arg3 atIndex:(unsigned int)arg4;
- (BOOL)_updateHeaderContext:(id*)arg1 toContext:(id)arg2 animated:(BOOL)arg3;
- (void)_updateHeaderState:(BOOL)arg1;
- (void)_updatePassFooterViewAnimated:(BOOL)arg1;
- (void)_updatePassFooterViewIfNecessaryAnimated:(BOOL)arg1 withBecomeVisibleDelay:(double)arg2;
- (void)_updatePassFooterViewIfNecessaryWithContext:(id)arg1 becomeVisibleDelay:(double)arg2;
- (void)_updatePassFooterViewWithContext:(id)arg1;
- (void)_updatePositionForGroupView:(id)arg1 toPosition:(struct CGPoint { float x1; float x2; })arg2 withSpringFactory:(id)arg3;
- (void)_updatePositionForGroupView:(id)arg1 toPresentationState:(int)arg2 withSpringFactory:(id)arg3;
- (void)_updatePositionForGroupView:(id)arg1 toPresentationState:(int)arg2 withSpringFactory:(id)arg3 atIndex:(unsigned int)arg4;
- (void)_updateTransformForGroupView:(id)arg1 toPresentationState:(int)arg2 withSpringFactory:(id)arg3;
- (float)_xPositionForGroupView:(id)arg1 forState:(int)arg2;
- (float)_yForGroupInModalPileAtIndex:(unsigned int)arg1;
- (float)_yForGroupInModalPileWithModalGroupY:(float)arg1;
- (float)_yForGroupInOffscreenPileAtIndex:(unsigned int)arg1;
- (float)_yForGroupInPileAtIndex:(unsigned int)arg1;
- (float)_yForGroupInTableAtIndex:(unsigned int)arg1;
- (float)_yForModallyPresentedGroup;
- (float)_yForModallyPresentedPaymentPassGroupView;
- (float)_yForSingleGroupView:(id)arg1;
- (float)_yOffsetForModallyPresentedNFCPassGroupView;
- (float)_yPositionForGroupAtIndex:(unsigned int)arg1 forState:(int)arg2;
- (void)beginFlipCardTest;
- (void)beginScrollCardListTest;
- (void)beginSelectCardTest;
- (id)datasource;
- (void)dealloc;
- (void)deleteGroup:(id)arg1 atIndex:(unsigned int)arg2;
- (void)deleteSheet:(id)arg1 didComplete:(BOOL)arg2;
- (BOOL)footerSuppressed;
- (void)gotoBaseTestState;
- (BOOL)groupView:(id)arg1 deleteButtonEnabledForPass:(id)arg2;
- (void)groupView:(id)arg1 deleteButtonPressedForPass:(id)arg2;
- (void)groupView:(id)arg1 didBeginShowingFontmostPassView:(id)arg2;
- (void)groupView:(id)arg1 didEndShowingFontmostPassView:(id)arg2;
- (void)groupView:(id)arg1 didScrollToPassView:(id)arg2;
- (void)groupView:(id)arg1 didUpdatePassView:(id)arg2;
- (void)groupView:(id)arg1 panned:(struct CGPoint { float x1; float x2; })arg2 withVelocity:(struct CGPoint { float x1; float x2; })arg3;
- (void)groupView:(id)arg1 resizeButtonPressedForPass:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })groupView:(id)arg1 targetPageControlFrameForProposedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (int)groupViewContentModeForFrontmostPassWhenStacked:(id)arg1;
- (void)groupViewDidUpdatePageControlVisibility:(id)arg1;
- (void)groupViewFrontPassDidFlip:(id)arg1 animated:(BOOL)arg2;
- (void)groupViewFrontPassDidResize:(id)arg1 animated:(BOOL)arg2;
- (void)groupViewPanDidBegin:(id)arg1;
- (void)groupViewPanDidEnd:(id)arg1;
- (BOOL)groupViewPassesGrowCenteredWhenFlipped:(id)arg1;
- (BOOL)groupViewPassesGrowWhenFlipped:(id)arg1;
- (unsigned int)groupViewPassesSuppressedContent:(id)arg1;
- (id)groupViewReusablePassViewQueue:(id)arg1;
- (BOOL)groupViewShouldAllowPanning:(id)arg1;
- (BOOL)groupViewShouldAllowPassFlip:(id)arg1;
- (BOOL)groupViewShouldAllowPassResize:(id)arg1;
- (void)groupViewTapped:(id)arg1;
- (BOOL)handleDeletePassRequestWithPass:(id)arg1 forViewController:(id)arg2;
- (id)headerForPassType:(unsigned int)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isModallyPresentedPassAuthorized;
- (BOOL)isPresentingPassViewFront;
- (BOOL)isReordering;
- (void)layoutContentForCurrentPresentationState:(BOOL)arg1;
- (void)layoutHeadersAnimated:(BOOL)arg1;
- (void)layoutSubviews;
- (id)modalGroupFrontmostPass;
- (unsigned int)modalGroupIndex;
- (void)moveGroup:(id)arg1 fromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (void)noteDidEndScrollingForTesting;
- (void)paymentDeviceDidBecomeAvailable;
- (void)paymentDeviceDidBecomeUnavailable;
- (void)paymentDeviceDidEnterRestrictedMode;
- (void)paymentDeviceDidLeaveRestrictedMode;
- (float)pileHeight;
- (BOOL)pileSuppressed;
- (void)presentDiff:(id)arg1 completion:(id /* block */)arg2;
- (void)presentPassWithUniqueID:(id)arg1;
- (int)presentationState;
- (void)reloadData;
- (void)reloadGroupViewAtIndex:(unsigned int)arg1;
- (void)scrollDownTest;
- (void)scrollNext;
- (void)scrollUpTest;
- (void)setDatasource:(id)arg1;
- (void)setFooterSuppressed:(BOOL)arg1;
- (void)setModalGroupIndex:(unsigned int)arg1;
- (void)setPileSuppressed:(BOOL)arg1;
- (void)setPresentationState:(int)arg1;
- (void)setPresentationState:(int)arg1 animated:(BOOL)arg2;
- (void)setPresentationState:(int)arg1 animated:(BOOL)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setPresentationState:(int)arg1 context:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)stageGroupInPresentationState:(int)arg1 atIndex:(unsigned int)arg2;
- (id)subheaderForPassType:(unsigned int)arg1;
- (void)testFlipToBack;
- (void)testFlipToFront;
- (void)testGoModal;
- (void)testGroupSelection;
- (void)tilePassesEagerly:(BOOL)arg1;
- (void)updateHeaderAndSubheaderViewsIfNecessary;

@end
