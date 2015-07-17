/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDNowPlayingViewController : UIViewController {
    UITapGestureRecognizer * _backPressRecognizer;
    <MCDNowPlayingViewControllerDataSource> * _dataSource;
    <MCDNowPlayingViewControllerDelegate> * _delegate;
    int  _heldAction;
    BOOL  _highTouchMode;
    BOOL  _isScrubbing;
    UITapGestureRecognizer * _knobPressRecognizer;
    UIColor * _navbarColor;
    BOOL  _navbarHidesShadow;
    MCDNowPlayingView * _nowPlayingView;
    MCDPlayModeControlView * _playModeControlView;
    UIViewController * _playModeViewController;
    MCDTransportControlView * _transportControlView;
    UIViewController * _transportViewController;
}

@property (nonatomic, readonly) UITapGestureRecognizer *backPressRecognizer;
@property (nonatomic) <MCDNowPlayingViewControllerDataSource> *dataSource;
@property (nonatomic) <MCDNowPlayingViewControllerDelegate> *delegate;
@property (nonatomic, readonly) UITapGestureRecognizer *knobPressRecognizer;
@property (nonatomic, readonly) MCDNowPlayingView *nowPlayingView;
@property (nonatomic, readonly) MCDPlayModeControlView *playModeControlView;
@property (nonatomic, readonly) MCDTransportControlView *transportControlView;

- (void).cxx_destruct;
- (void)_fastForwardButtonTouchDown:(id)arg1;
- (void)_fastForwardButtonTouchUp:(id)arg1;
- (void)_geniusButtonTouchUp:(id)arg1;
- (void)_initializeTransportControls;
- (void)_leftButtonTouchDown:(id)arg1;
- (void)_leftButtonTouchUp:(id)arg1;
- (void)_playPauseButtonTouchUp:(id)arg1;
- (void)_repeatButtonTouchUp:(id)arg1;
- (void)_respondToHeldAction;
- (void)_sendAction:(int)arg1 withState:(int)arg2;
- (void)_sendHeldAction;
- (void)_shuffleButtonTouchUp:(id)arg1;
- (void)_updatePlayModesState;
- (void)_updateRepeatStateWithType:(unsigned int)arg1;
- (void)_updateShuffleStateWithType:(unsigned int)arg1;
- (void)_updateTransportControl:(id)arg1 withDefaultImage:(id)arg2 actionType:(int)arg3;
- (id)backPressRecognizer;
- (id)dataSource;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)knobPressRecognizer;
- (void)loadView;
- (id)nowPlayingView;
- (id)playModeControlView;
- (void)reloadData;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)transportControlView;
- (void)updatePlayControls;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
