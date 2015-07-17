/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTextBalloonView : CKColoredBalloonView {
    NSAttributedString * _attributedText;
    BOOL  _centerTextWhenSkinny;
    CKBalloonTextView * _textView;
}

@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic) BOOL centerTextWhenSkinny;
@property (nonatomic, retain) CKBalloonTextView *textView;

- (id)attributedText;
- (BOOL)centerTextWhenSkinny;
- (void)configureForMessagePart:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForDisplay;
- (void)setAttributedText:(id)arg1;
- (void)setCenterTextWhenSkinny:(BOOL)arg1;
- (void)setTextView:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2;
- (id)textView;
- (float)textViewWidthForWidth:(float)arg1;

@end
