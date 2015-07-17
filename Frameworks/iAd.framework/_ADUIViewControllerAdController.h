/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface _ADUIViewControllerAdController : NSObject <ADBannerViewDelegate, ADInterstitialAdDelegate, _UIViewControllerContentViewEmbedding> {
    NSString * _bannerAdSection;
    NSString * _bannerAuthUserName;
    NSURL * _bannerServerURL;
    ADBannerView * _bannerView;
    BOOL  _canDisplayBannerAds;
    BOOL  _canOwnSharedBanner;
    UIViewController * _contentViewController;
    ADInterstitialAd * _interstitialAd;
    NSString * _interstitialAdSection;
    NSString * _interstitialAuthUserName;
    int  _interstitialPresentationPolicy;
    NSURL * _interstitialServerURL;
    BOOL  _presentingFullScreenAd;
}

@property (nonatomic, copy) NSString *bannerAdSection;
@property (nonatomic, copy) NSString *bannerAuthUserName;
@property (nonatomic, copy) NSURL *bannerServerURL;
@property (nonatomic, retain) ADBannerView *bannerView;
@property (nonatomic) BOOL canDisplayBannerAds;
@property (nonatomic) BOOL canOwnSharedBanner;
@property (nonatomic, readonly) UIViewController *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisplayingBannerAd, nonatomic, readonly) BOOL displayingBannerAd;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) ADInterstitialAd *interstitialAd;
@property (nonatomic, copy) NSString *interstitialAdSection;
@property (nonatomic, copy) NSString *interstitialAuthUserName;
@property (nonatomic) int interstitialPresentationPolicy;
@property (nonatomic, copy) NSURL *interstitialServerURL;
@property (getter=isPresentingFullScreenAd, nonatomic) BOOL presentingFullScreenAd;
@property (readonly) Class superclass;

+ (id)_sharedBannerView;
+ (void)prepareInterstitialAds;

- (void)_considerTakingBannerViewAnimated:(BOOL)arg1;
- (void)_hideBannerView;
- (void)_layoutContentAndBannerViewAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (BOOL)_presentInterstitialIfReady;
- (void)_setEmbeddedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)bannerAdSection;
- (id)bannerAuthUserName;
- (id)bannerServerURL;
- (id)bannerView;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewActionDidFinish:(id)arg1;
- (BOOL)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2;
- (void)bannerViewDidLoadAd:(id)arg1;
- (BOOL)canDisplayBannerAds;
- (BOOL)canOwnSharedBanner;
- (id)contentViewController;
- (void)dealloc;
- (id)initWithContentViewController:(id)arg1;
- (id)interstitialAd;
- (void)interstitialAd:(id)arg1 didFailWithError:(id)arg2;
- (void)interstitialAdActionDidFinish:(id)arg1;
- (void)interstitialAdDidUnload:(id)arg1;
- (id)interstitialAdSection;
- (id)interstitialAuthUserName;
- (int)interstitialPresentationPolicy;
- (id)interstitialServerURL;
- (BOOL)isDisplayingBannerAd;
- (BOOL)isPresentingFullScreenAd;
- (BOOL)requestInterstitialAdPresentation;
- (void)setBannerAdSection:(id)arg1;
- (void)setBannerAuthUserName:(id)arg1;
- (void)setBannerServerURL:(id)arg1;
- (void)setBannerView:(id)arg1;
- (void)setCanDisplayBannerAds:(BOOL)arg1;
- (void)setCanOwnSharedBanner:(BOOL)arg1;
- (void)setInterstitialAd:(id)arg1;
- (void)setInterstitialAdSection:(id)arg1;
- (void)setInterstitialAuthUserName:(id)arg1;
- (void)setInterstitialPresentationPolicy:(int)arg1;
- (void)setInterstitialServerURL:(id)arg1;
- (void)setPresentingFullScreenAd:(BOOL)arg1;
- (void)viewController:(id)arg1 viewDidAppear:(BOOL)arg2;
- (void)viewController:(id)arg1 viewDidDisappear:(BOOL)arg2;
- (void)viewController:(id)arg1 viewWillAppear:(BOOL)arg2;
- (void)viewController:(id)arg1 viewWillDisappear:(BOOL)arg2;
- (void)viewControllerViewDidLayoutSubviews:(id)arg1;
- (void)viewControllerViewWillLayoutSubviews:(id)arg1;

@end
