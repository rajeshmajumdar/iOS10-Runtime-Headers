/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryAdaptiveViewController : UIViewController <MusicClientContextConsuming, MusicIndexBarDataSource, MusicIndexBarScrollDelegate, MusicLibraryViewConfigurationConsuming> {
    UIViewController<MusicLibraryViewConfigurationConsuming> * _activeViewController;
    MusicClientContext * _clientContext;
    int  _horizontalSizeClassForActiveView;
    BOOL  _isActiveViewControllerIndexBarDataSource;
    BOOL  _isActiveViewControllerIndexBarScrollDelegate;
    MusicLibraryAdaptiveViewConfiguration * _libraryViewConfiguration;
}

@property (nonatomic, readonly) UIViewController<MusicLibraryViewConfigurationConsuming> *activeViewController;
@property (nonatomic, retain) MusicClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) MusicLibraryAdaptiveViewConfiguration *libraryViewConfiguration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activeViewControllerIndexBarDataSourceDidInvalidateNotification:(id)arg1;
- (void)_applyClientContextToChildViewControllers;
- (void)_applyClientContextToViewController:(id)arg1;
- (void)_reloadActiveViewIfNeeded;
- (void)_tearDownActiveView;
- (id)activeViewController;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)clientContext;
- (void)dealloc;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (BOOL)getContentOffset:(struct CGPoint { float x1; float x2; }*)arg1 forIndexBarEntryAtIndex:(unsigned int)arg2;
- (id)indexBarEntryAtIndex:(unsigned int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLibraryViewConfiguration:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)libraryViewConfiguration;
- (unsigned int)numberOfIndexBarEntries;
- (void)setClientContext:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
