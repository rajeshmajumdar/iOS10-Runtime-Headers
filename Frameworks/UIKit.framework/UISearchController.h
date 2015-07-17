/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISearchController : UIViewController <NSCoding, UIViewControllerAnimatedTransitioning, UIViewControllerPresenting, UIViewControllerTransitioningDelegate, _UIScrollNotification> {
    int  __previousSearchBarPosition;
    float  __resultsContentScrollViewPresentationOffset;
    BOOL  __showResultsForEmptySearch;
    <UIViewControllerAnimatedTransitioning> * _animator;
    UITapGestureRecognizer * _backButtonDismissGestureRecognizer;
    int  _barPresentationStyle;
    struct { 
        unsigned int searchBarWasTableHeaderView : 1; 
        unsigned int searchBarWasFirstResponder : 1; 
    }  _controllerFlags;
    <UISearchControllerDelegate> * _delegate;
    _UISearchControllerDidScrollDelegate * _didScrollDelegate;
    BOOL  _dimsBackgroundDuringPresentation;
    BOOL  _hidesNavigationBarDuringPresentation;
    UIView * _resultsControllerViewContainer;
    UISearchBar * _searchBar;
    UIViewController * _searchResultsController;
    <UISearchResultsUpdating> * _searchResultsUpdater;
    UISystemInputViewController * _systemInputViewController;
    id  _windowWillAnimateToken;
}

@property (nonatomic, readonly) int _barPresentationStyle;
@property (nonatomic) int _previousSearchBarPosition;
@property (nonatomic) float _resultsContentScrollViewPresentationOffset;
@property (nonatomic, retain) UIView *_resultsControllerViewContainer;
@property (nonatomic, readonly) BOOL _searchbarWasTableHeaderView;
@property (setter=_setShowResultsForEmptySearch:, nonatomic) BOOL _showResultsForEmptySearch;
@property (nonatomic, readonly) UISystemInputViewController *_systemInputViewController;
@property (getter=isActive, nonatomic) BOOL active;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UISearchControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dimsBackgroundDuringPresentation;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL hidesNavigationBarDuringPresentation;
@property (nonatomic, readonly) UISearchBar *searchBar;
@property (nonatomic, readonly) UIViewController *searchResultsController;
@property (nonatomic) <UISearchResultsUpdating> *searchResultsUpdater;
@property (readonly) Class superclass;

+ (void)_resignSearchBarAsFirstResponder:(id)arg1;

- (void).cxx_destruct;
- (void)_adjustSearchBarSizeForOrientation:(int)arg1;
- (BOOL)_allowFormSheetStylePresentation;
- (id)_animatorForBarPresentationStyle:(int)arg1 dismissing:(BOOL)arg2;
- (int)_barPresentationStyle;
- (void)_beginWatchingPresentingController;
- (void)_commonInit;
- (void)_connectSearchBar:(id)arg1;
- (id)_createAnimationCoordinator;
- (void)_createSystemInputViewControllerIfNeededForTraitEnvironment:(id)arg1;
- (id)_defaultAnimationController;
- (void)_didDismissSearchController;
- (void)_didPresentFromViewController:(id)arg1;
- (void)_didScroll;
- (BOOL)_disableAutomaticKeyboardUI;
- (void)_dismissFromBackButton:(id)arg1;
- (void)_dismissPresentation:(BOOL)arg1;
- (void)_endWatchingPresentingController;
- (void)_installBackGestureRecognizer;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)_locatePresentingViewController;
- (void)_navigationControllerWillShowViewController:(id)arg1;
- (void)_performAutomaticPresentation;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)_presentingViewControllerDidChange:(id)arg1;
- (void)_presentingViewControllerWillChange:(id)arg1;
- (int)_previousSearchBarPosition;
- (BOOL)_requiresCustomPresentationController;
- (void)_resizeResultsControllerWithDelta:(struct CGSize { float x1; float x2; })arg1;
- (float)_resultsContentScrollViewPresentationOffset;
- (id)_resultsControllerViewContainer;
- (BOOL)_resultsControllerWillLayoutVisibleUnderContainerView;
- (void)_searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)_searchBarCancelButtonClicked:(id)arg1;
- (void)_searchBarSearchButtonClicked:(id)arg1;
- (BOOL)_searchBarShouldFinalizeBecomingFirstResponder;
- (void)_searchBarSuperviewChanged;
- (void)_searchBarTextDidBeginEditing:(id)arg1;
- (id)_searchPresentationController;
- (BOOL)_searchbarWasTableHeaderView;
- (void)_setShowResultsForEmptySearch:(BOOL)arg1;
- (BOOL)_showResultsForEmptySearch;
- (void)_sizeSearchViewToPresentingViewController:(id)arg1;
- (id)_systemInputViewController;
- (void)_uninstallBackGestureRecognizer;
- (void)_updateBackdropMaskViewsInScrollView:(id)arg1;
- (void)_updateSearchBarMaskIfNecessary;
- (void)_updateSearchResultsContentScrollViewWithDelta:(struct CGSize { float x1; float x2; })arg1;
- (void)_updateSearchResultsControllerWithDelta:(struct CGSize { float x1; float x2; })arg1;
- (void)_updateSearchResultsPositionWithDelta:(struct CGSize { float x1; float x2; })arg1;
- (void)_updateTableHeaderBackgroundViewInTableView:(id)arg1 amountScrolledUnder:(float)arg2;
- (void)_updateVisibilityOfSearchResultsForSearchBar:(id)arg1;
- (void)_watchScrollView:(id)arg1 forScrolling:(BOOL)arg2;
- (void)_willDismissSearchController;
- (void)_willPresentFromViewController:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (BOOL)dimsBackgroundDuringPresentation;
- (void)encodeWithCoder:(id)arg1;
- (void)focusedViewDidChange;
- (BOOL)hidesNavigationBarDuringPresentation;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchResultsController:(id)arg1;
- (BOOL)isActive;
- (void)loadView;
- (id)preferredFocusedItem;
- (id)searchBar;
- (id)searchResultsController;
- (id)searchResultsUpdater;
- (void)setActive:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimsBackgroundDuringPresentation:(BOOL)arg1;
- (void)setHidesNavigationBarDuringPresentation:(BOOL)arg1;
- (void)setModalPresentationStyle:(int)arg1;
- (void)setSearchResultsUpdater:(id)arg1;
- (void)set_previousSearchBarPosition:(int)arg1;
- (void)set_resultsContentScrollViewPresentationOffset:(float)arg1;
- (void)set_resultsControllerViewContainer:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willUpdateFocusToView:(id)arg1;

@end
