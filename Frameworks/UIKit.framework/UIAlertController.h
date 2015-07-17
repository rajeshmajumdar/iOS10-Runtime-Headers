/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAlertController : UIViewController <UIAlertControllerContaining, UIAlertControllerVisualStyleProviding, UIGestureRecognizerDelegate, _UIAlertControllerTextFieldViewControllerContaining> {
    UIPopoverController * __compatibilityPopoverController;
    UIView * __presentationSourceRepresentationView;
    BOOL  __shouldAllowNilParameters;
    BOOL  __shouldFlipFrameForShimDismissal;
    UIAlertControllerVisualStyle * __visualStyle;
    NSMutableArray * _actionDelimiterIndices;
    NSMutableDictionary * _actionToKeyCommandsDictionary;
    NSMutableArray * _actions;
    NSAttributedString * _attributedDetailMessage;
    NSAttributedString * _attributedMessage;
    NSAttributedString * _attributedTitle;
    UITapGestureRecognizer * _backButtonDismissGestureRecognizer;
    UIAlertAction * _cancelAction;
    UIViewController * _contentViewController;
    BOOL  _hasPreservedInputViews;
    BOOL  _hidden;
    NSMapTable * _keyCommandToActionMapTable;
    NSSet * _linkedAlertControllers;
    NSString * _message;
    id  _ownedTransitioningDelegate;
    UIAlertAction * _preferredAction;
    int  _preferredStyle;
    int  _resolvedStyle;
    UITapGestureRecognizer * _selectGestureRecognizer;
    BOOL  _shouldEnsureContentControllerViewIsVisibleOnAppearance;
    BOOL  _shouldInformViewOfAddedContentViewController;
    NSObject<UIAlertControllerVisualStyleProviding> * _styleProvider;
    _UIAnimationCoordinator * _temporaryAnimationCoordinator;
    _UIAlertControllerTextFieldViewController * _textFieldViewController;
}

@property (readonly) NSMutableArray *_actionDelimiterIndices;
@property (readonly) NSMutableArray *_actions;
@property (getter=_attributedDetailMessage, setter=_setAttributedDetailMessage:, nonatomic, copy) NSAttributedString *_attributedDetailMessage;
@property (readonly) UIAlertAction *_cancelAction;
@property (setter=_setCompatibilityPopoverController:, nonatomic) UIPopoverController *_compatibilityPopoverController;
@property (setter=_setDefaultAlertAction:, nonatomic) UIAlertAction *_defaultAlertAction;
@property (readonly) UIView *_dimmingView;
@property (readonly) UIView *_foregroundView;
@property (getter=_isHidden, setter=_setHidden:, nonatomic) BOOL _hidden;
@property (setter=_setPresentationSourceRepresentationView:, nonatomic, retain) UIView *_presentationSourceRepresentationView;
@property (readonly) int _resolvedStyle;
@property (readonly) BOOL _shouldAlignToKeyboard;
@property (setter=_setShouldAllowNilParameters:) BOOL _shouldAllowNilParameters;
@property (setter=_setShouldEnsureContentControllerViewIsVisibleOnAppearance:, nonatomic) BOOL _shouldEnsureContentControllerViewIsVisibleOnAppearance;
@property BOOL _shouldFlipFrameForShimDismissal;
@property (readonly) BOOL _shouldProvideDimmingView;
@property (readonly) _UIAlertControllerTextFieldViewController *_textFieldViewController;
@property (setter=_setTextFieldsHidden:) BOOL _textFieldsHidden;
@property (setter=_setVisualStyle:, nonatomic, retain) UIAlertControllerVisualStyle *_visualStyle;
@property (nonatomic) NSArray *actions;
@property (getter=_attributedMessage, setter=_setAttributedMessage:, nonatomic, copy) NSAttributedString *attributedMessage;
@property (getter=_attributedTitle, setter=_setAttributedTitle:, nonatomic, copy) NSAttributedString *attributedTitle;
@property (nonatomic, retain) UIViewController *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_hasPreservedInputViews, setter=_setHasPreservedInputViews:, nonatomic) BOOL hasPreservedInputViews;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) UIAlertAction *preferredAction;
@property (nonatomic) int preferredStyle;
@property (getter=_styleProvider, setter=_setStyleProvider:, nonatomic, retain) NSObject<UIAlertControllerVisualStyleProviding> *styleProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) _UIAnimationCoordinator *temporaryAnimationCoordinator;
@property (nonatomic, readonly) NSArray *textFields;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_alertControllerContainedInViewController:(id)arg1;
+ (id)_alertControllerWithTitle:(id)arg1 message:(id)arg2;
+ (void)_setShouldUsePresentationController:(BOOL)arg1;
+ (BOOL)_shouldUsePresentationController;
+ (id)alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(int)arg3;

- (void).cxx_destruct;
- (void)_action:(id)arg1 changedToKeyCommandWithInput:(id)arg2 modifierFlags:(int)arg3;
- (id)_actionDelimiterIndices;
- (id)_actionForReturnKey;
- (void)_actionSelected:(id)arg1;
- (void)_actionViewHighlightChanged:(id)arg1;
- (id)_actions;
- (void)_addActionWithTitle:(id)arg1 image:(id)arg2 style:(int)arg3 handler:(id /* block */)arg4;
- (void)_addActionWithTitle:(id)arg1 style:(int)arg2 handler:(id /* block */)arg3;
- (void)_addActionWithTitle:(id)arg1 style:(int)arg2 handler:(id /* block */)arg3 shouldDismissHandler:(id /* block */)arg4;
- (void)_addKeyCommandForAction:(id)arg1 withInput:(id)arg2 modifierFlags:(int)arg3;
- (void)_addReturnKeyCommandIfAppropriate;
- (void)_addSectionDelimiter;
- (id)_alertControllerContainer;
- (id)_alertControllerView;
- (void)_attemptAnimatedDismissWithGestureRecognizer:(id)arg1;
- (id)_attributedDetailMessage;
- (id)_attributedMessage;
- (id)_attributedTitle;
- (void)_becomeFirstResponderIfAppropriate;
- (int)_buttonTypeForBackGestureForIdiom:(int)arg1;
- (BOOL)_canDismissWithGestureRecognizer;
- (id)_cancelAction;
- (void)_clearActionHandlers;
- (id)_compatibilityPopoverController;
- (id)_containedAlertController;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_contentInsets;
- (void)_contentViewControllerWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withAnimations:(id /* block */)arg2;
- (id)_currentDescriptor;
- (id)_defaultAlertAction;
- (void)_didParentTextFieldViewController;
- (id)_dimmingView;
- (void)_dismissAnimated:(BOOL)arg1 triggeringAction:(id)arg2;
- (void)_dismissAnimated:(BOOL)arg1 triggeringAction:(id)arg2 triggeredByPopoverDimmingView:(BOOL)arg3;
- (void)_dismissFromBackButton:(id)arg1;
- (void)_dismissFromPopoverDimmingView;
- (id)_dismissGestureRecognizer;
- (void)_fireOffActionOnTargetIfValidForAction:(id)arg1;
- (void)_flipFrameForShimDismissalIfNecessary;
- (id)_foregroundView;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; float x6; int x7; }*)arg1;
- (void)_handleKeyCommand:(id)arg1;
- (void)_handleReturn;
- (BOOL)_hasAttributedMessage;
- (BOOL)_hasAttributedTitle;
- (BOOL)_hasContentToDisplay;
- (BOOL)_hasDetailMessage;
- (BOOL)_hasMessage;
- (BOOL)_hasPreservedInputViews;
- (BOOL)_hasTitle;
- (BOOL)_idiomSupportsBackGesture:(int)arg1;
- (BOOL)_idiomSupportsSelectGesture:(int)arg1;
- (void)_installBackGestureRecognizer;
- (void)_installSelectGestureRecognizer;
- (BOOL)_isHidden;
- (BOOL)_isPresentedAsPopover;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (id)_keyCommandForAction:(id)arg1 input:(id)arg2 modifierFlags:(int)arg3;
- (void)_logBeingDismissed;
- (void)_logBeingPresented;
- (int)_modalPresentationStyleForResolvedStyle;
- (struct __CFString { }*)_powerLoggingEventName;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)_presentationSourceRepresentationView;
- (void)_preserveInputViewsAnimated:(BOOL)arg1;
- (int)_pressTypeForSelectGesture;
- (void)_recomputePreferredContentSize;
- (void)_reevaluateResolvedStyle;
- (void)_removeAllTextFields;
- (void)_removeKeyCommandForAction:(id)arg1;
- (id)_requiredNotificationsForRemoteServices;
- (BOOL)_requiresCustomPresentationController;
- (int)_resolvedStyle;
- (void)_resolvedStyleChanged;
- (void)_restoreInputViewsAnimated:(BOOL)arg1;
- (id)_returnKeyCommand;
- (void)_returnKeyPressedInLastTextField;
- (void)_selectGestureChanged:(id)arg1;
- (void)_setActions:(id)arg1;
- (void)_setAttributedDetailMessage:(id)arg1;
- (void)_setAttributedMessage:(id)arg1;
- (void)_setAttributedTitle:(id)arg1;
- (void)_setCompatibilityPopoverController:(id)arg1;
- (void)_setDefaultAlertAction:(id)arg1;
- (void)_setHasPreservedInputViews:(BOOL)arg1;
- (void)_setHidden:(BOOL)arg1;
- (void)_setPresentationSourceRepresentationView:(id)arg1;
- (void)_setShouldAllowNilParameters:(BOOL)arg1;
- (void)_setShouldEnsureContentControllerViewIsVisibleOnAppearance:(BOOL)arg1;
- (void)_setStyleProvider:(id)arg1;
- (void)_setTextFieldsHidden:(BOOL)arg1;
- (void)_setVisualStyle:(id)arg1;
- (BOOL)_shouldAlignToKeyboard;
- (BOOL)_shouldAllowNilParameters;
- (BOOL)_shouldBecomeFirstResponder;
- (BOOL)_shouldDismissAction:(id)arg1;
- (BOOL)_shouldEnsureContentControllerViewIsVisibleOnAppearance;
- (BOOL)_shouldFitWidthToContentViewControllerWidth;
- (BOOL)_shouldFlipFrameForShimDismissal;
- (BOOL)_shouldPreserveInputViews;
- (BOOL)_shouldProvideDimmingView;
- (BOOL)_shouldSizeToFillSuperview;
- (BOOL)_shouldTreatEmptyStringsAsNil;
- (id)_styleProvider;
- (id)_textFieldContainingViewWithTextField:(id)arg1;
- (id)_textFieldViewController;
- (BOOL)_textFieldsHidden;
- (void)_uninstallBackGestureRecognizer;
- (void)_uninstallSelectGestureRecognizer;
- (void)_updateModalPresentationStyle;
- (void)_updateProvidedStyle;
- (void)_updateProvidedStyleWithTraitCollection:(id)arg1;
- (void)_updateShouldAlignToKeyboard;
- (void)_updateTextFieldViewControllerWithVisualStyle:(id)arg1;
- (void)_updateViewFrameForLandscapePresentationInShimIfNecessary;
- (BOOL)_viewControllerIsPresentedInModalPresentationContext:(id)arg1;
- (id)_visualStyle;
- (void)_willParentTextFieldViewController;
- (id)actions;
- (void)addAction:(id)arg1;
- (void)addTextFieldWithConfigurationHandler:(id /* block */)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)cancelAction;
- (id)contentViewController;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)linkAlertController:(id)arg1;
- (id)linkedAlertControllers;
- (void)loadView;
- (id)message;
- (id)preferredAction;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (int)preferredStyle;
- (void)setCancelAction:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setModalPresentationStyle:(int)arg1;
- (void)setPreferredAction:(id)arg1;
- (void)setPreferredStyle:(int)arg1;
- (void)setTemporaryAnimationCoordinator:(id)arg1;
- (void)setTextFieldsCanBecomeFirstResponder:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)set_shouldFlipFrameForShimDismissal:(BOOL)arg1;
- (BOOL)shouldAutorotate;
- (unsigned int)supportedInterfaceOrientations;
- (id)temporaryAnimationCoordinator;
- (id)textFields;
- (void)traitCollectionDidChange:(id)arg1;
- (void)unlinkAlertController:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)visualStyleForAlertControllerStyle:(int)arg1 traitCollection:(id)arg2 descriptor:(id)arg3;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (id)mutedThreadActionAlertControllerWithHandler:(id /* block */)arg1;
+ (id)notifyMeConfirmationControllerWithHandler:(id /* block */)arg1;

- (void)mf_addCancelActionWithHandler:(id /* block */)arg1;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

+ (id)pu_alertForCPLEnableError:(id)arg1 actionHandler:(id /* block */)arg2 cancelHandler:(id /* block */)arg3;
+ (id)pu_alertForStorageUpgradeLoadFailure;
+ (id)pu_deleteITunesContentAlertWithAssetCount:(int)arg1 includesPhotos:(BOOL)arg2 includesVideos:(BOOL)arg3 actionHandler:(id /* block */)arg4 cancelHandler:(id /* block */)arg5;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (void)_gkAddCancelButtonWithNoAction;

// Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI

+ (id)networkUnavailableAlertControllerWithCallService:(int)arg1 dialType:(int)arg2;
+ (id)networkUnavailableAlertControllerWithCallService:(int)arg1 dialType:(int)arg2 preferredStyle:(int)arg3;

@end
