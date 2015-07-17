/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFReaderAppearanceFontSizeSelectorTableViewCell : UITableViewCell {
    UIButton * _decreaseFontSizeButton;
    <SFReaderAppearanceFontSizeSelectorDelegate> * _delegate;
    UIButton * _increaseFontSizeButton;
    SFReaderAppearanceFontSizeSeparatorView * _verticalSeparatorView;
}

@property (nonatomic, retain) UIButton *decreaseFontSizeButton;
@property (nonatomic) <SFReaderAppearanceFontSizeSelectorDelegate> *delegate;
@property (nonatomic, retain) UIButton *increaseFontSizeButton;

+ (float)requiredHeight;

- (void).cxx_destruct;
- (void)_createFontSizeSelectorButtons;
- (void)_decreaseButtonAction:(id)arg1;
- (void)_increaseButtonAction:(id)arg1;
- (id)decreaseFontSizeButton;
- (id)delegate;
- (id)increaseFontSizeButton;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)setDecreaseFontSizeButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIncreaseFontSizeButton:(id)arg1;

@end
