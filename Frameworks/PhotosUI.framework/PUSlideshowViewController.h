/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSlideshowViewController : UIViewController <OKPresentationViewControllerDelegate, PUAirPlayControllerContentProvider, PUAirPlayControllerRouteObserver, PUSlideshowDisplayContext, PUSlideshowSettingsViewControllerDelegate, PUSlideshowViewModelChangeObserver, PUViewControllerSpecChangeObserver, UIGestureRecognizerDelegate> {
    BOOL  __needsUpdateSpec;
    PUSlideshowViewController * __secondScreenBrowser;
    PUPlaceholderView * __slideshowPlaceholderView;
    OKPresentationViewController * _currentPresentationController;
    <PUSlideshowViewControllerDelegate> * _delegate;
    unsigned int  _mode;
    unsigned int  _playerStateButtonItemIndex;
    PUSlideshowSession * _session;
    PUSlideshowViewControllerSpec * _spec;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (setter=_setNeedsUpdateSpec:, nonatomic) BOOL _needsUpdateSpec;
@property (setter=_setSecondScreenBrowser:, nonatomic, retain) PUSlideshowViewController *_secondScreenBrowser;
@property (setter=_setSlideshowPlaceHolderView:, nonatomic, retain) PUPlaceholderView *_slideshowPlaceholderView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUSlideshowViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) unsigned int mode;
@property (nonatomic, readonly) PUSlideshowSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_airplayButtonTapped:(id)arg1;
- (void)_dismissSlideshow;
- (void)_doneButtonTapped:(id)arg1;
- (void)_handleAppWillResignActiveNotification:(id)arg1;
- (void)_handleStateChange;
- (void)_installPresentationController:(id)arg1;
- (void)_invalidateSpec;
- (BOOL)_needsUpdate;
- (BOOL)_needsUpdateSpec;
- (void)_playerStateButtonTapped:(id)arg1;
- (void)_removeCurrentPresentationController;
- (id)_secondScreenBrowser;
- (void)_setNeedsUpdate;
- (void)_setNeedsUpdateSpec:(BOOL)arg1;
- (void)_setSecondScreenBrowser:(id)arg1;
- (void)_setSlideshowPlaceHolderView:(id)arg1;
- (void)_settingsButtonTapped:(id)arg1;
- (void)_setupChromeBar;
- (void)_setupTapGesture;
- (id)_slideshowPlaceholderView;
- (void)_tapGesture:(id)arg1;
- (void)_updateAirplayButton;
- (void)_updateChromeVisibility;
- (void)_updateIfNeeded;
- (void)_updatePlaceholder;
- (void)_updatePlayerButton;
- (void)_updateRouteObservation;
- (void)_updateSpecIfNeeded;
- (void)airPlayControllerRouteAvailabilityChanged:(id)arg1;
- (void)airPlayControllerScreenAvailabilityChanged:(id)arg1;
- (id)ancestorViewOfInstance:(id)arg1;
- (id)contentViewControllerForAirPlayController:(id)arg1;
- (void)couchPotatoPlaybackFinished;
- (void)dealloc;
- (id)delegate;
- (void)finishSession;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSession:(id)arg1;
- (id)initWithSession:(id)arg1 mode:(unsigned int)arg2;
- (void)loadView;
- (unsigned int)mode;
- (BOOL)prefersStatusBarHidden;
- (BOOL)pu_wantsNavigationBarVisible;
- (BOOL)pu_wantsTabBarVisible;
- (BOOL)pu_wantsToolbarVisible;
- (id)session;
- (void)setDelegate:(id)arg1;
- (void)settingsDidFinished:(id)arg1;
- (void)slideshowSession:(id)arg1 startDisplayingPresentationViewController:(id)arg2;
- (void)slideshowSession:(id)arg1 stopDisplayingPresentationViewController:(id)arg2;
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (id)visibleAssets;

@end
