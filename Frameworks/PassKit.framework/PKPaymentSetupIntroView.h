/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentSetupIntroView : UIView {
    int  _context;
    PKPaymentSetupHeroView * _heroView;
    PKPaymentSetupInfoView * _infoView;
}

@property (nonatomic, retain) PKPaymentSetupInfoView *infoView;

- (void)_createSubviewsWithNetworks:(id)arg1;
- (void)dealloc;
- (id)infoView;
- (id)initWithContext:(int)arg1;
- (id)initWithContext:(int)arg1 featuredPaymentNetwork:(int)arg2;
- (id)initWithContext:(int)arg1 featuredPaymentNetworks:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isBuddyiPad;
- (void)layoutSubviews;
- (void)setInfoView:(id)arg1;
- (void)startAnimation;
- (void)stopAnimation;

@end
