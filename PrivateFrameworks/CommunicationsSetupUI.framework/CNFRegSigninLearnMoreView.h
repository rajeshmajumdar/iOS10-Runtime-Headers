/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CNFRegSigninLearnMoreView : UIView <PSHeaderFooterView> {
    UIView * _authKitSignInView;
    CNFRegSplashSignInController * _controller;
    UIButton * _learnMoreButton;
    int  _serviceType;
    UILabel * _signingInLabel;
    UIActivityIndicatorView * _signingInSpinner;
    PSSpecifier * _specifier;
    UIImageView * _splashImageView;
    UILabel * _titleLabel;
    UILabel * _verbiageLabel;
}

@property (nonatomic) CNFRegSplashSignInController *controller;
@property (nonatomic) int serviceType;

- (void).cxx_destruct;
- (void)_learnMorePressed:(id)arg1;
- (id)_splashImage;
- (id)controller;
- (id)initWithSpecifier:(id)arg1;
- (void)layoutSubviews;
- (id)learnMoreButton;
- (float)preferredHeightForWidth:(float)arg1;
- (int)serviceType;
- (void)setAuthKitSignInView:(id)arg1;
- (void)setController:(id)arg1;
- (void)setServiceType:(int)arg1;
- (void)setSigningIn:(BOOL)arg1;
- (id)signingInLabel;
- (id)signingInSpinner;
- (id)splashImageView;
- (id)titleLabel;
- (id)verbiageLabel;

@end
