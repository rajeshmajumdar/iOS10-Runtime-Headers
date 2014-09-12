/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/PassKit.framework/PassKit
 */

@class UIView, NSString, PKGlyphView, UIButton, PKPaymentAuthorizationLayout, NSLayoutConstraint, UILabel;

@interface PKPaymentAuthorizationFooterView : UIView  {
    NSString *_title;
    UILabel *_labelView;
    PKGlyphView *_glyphView;
    UILabel *_passbookPaymentDetailsView;
    UIView *_separatorView;
    NSLayoutConstraint *_separatorLeftConstraint;
    NSLayoutConstraint *_payWithPasscodeCenterYConstraint;
    NSLayoutConstraint *_overallHeightConstraint;
    long long _state;
    UIButton *_payWithPasscodeButton;
    PKPaymentAuthorizationLayout *_layout;
}

@property long long state;
@property(readonly) UIButton * payWithPasscodeButton;
@property PKPaymentAuthorizationLayout * layout;


- (id)_titleLabelAttributedString:(id)arg1;
- (void)setState:(long long)arg1 string:(id)arg2 animated:(bool)arg3;
- (id)payWithPasscodeButton;
- (void)_createSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLayout:(id)arg1;
- (id)layout;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)dealloc;
- (void)_prepareConstraints;
- (void)updateConstraints;

@end