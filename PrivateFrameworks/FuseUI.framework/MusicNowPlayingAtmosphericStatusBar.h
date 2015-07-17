/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicNowPlayingAtmosphericStatusBar : UIView {
    MPUPinningView * _atmosphericContentView;
    UIView * _containerView;
    MusicNowPlayingAtmosphericEffectView * _effectView;
    MusicStatusBar * _statusBar;
}

@property (nonatomic, readonly) MPUPinningView *atmosphericContentView;
@property (nonatomic, copy) NSString *backdropGroupName;
@property (nonatomic) <MusicNowPlayingAtmosphericStatusBarDelegate> *delegate;
@property (nonatomic) int effect;
@property (nonatomic, retain) MusicNowPlayingAtmosphericEffectView *effectView;

- (void).cxx_destruct;
- (id)atmosphericContentView;
- (id)backdropGroupName;
- (id)delegate;
- (int)effect;
- (id)effectView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBackdropGroupName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEffect:(int)arg1;
- (void)setEffectView:(id)arg1;

@end
