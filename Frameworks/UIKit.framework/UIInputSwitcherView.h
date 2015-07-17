/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputSwitcherView : UIKeyboardMenuView {
    UISwitch * m_assistantSwitch;
    int  m_currentInputModeIndex;
    NSMutableArray * m_inputModes;
    BOOL  m_keyboardSettingsFromSwitcher;
    UISwitch * m_predictiveSwitch;
}

@property (nonatomic, retain) NSArray *inputModes;
@property (nonatomic) BOOL keyboardSettingsFromSwitcher;

+ (id)activeInstance;
+ (id)sharedInstance;

- (id)assistantSwitch;
- (void)dealloc;
- (int)defaultSelectedIndex;
- (void)didSelectItemAtIndex:(int)arg1;
- (id)fontForItemAtIndex:(int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)inputModes;
- (BOOL)keyboardSettingsFromSwitcher;
- (id)localizedTitleForItemAtIndex:(int)arg1;
- (id)nextInputMode;
- (int)numberOfItems;
- (id)predictiveSwitch;
- (struct CGSize { float x1; float x2; })preferredSize;
- (id)previousInputMode;
- (void)selectInputMode:(id)arg1;
- (void)selectNextInputMode;
- (void)selectPreviousInputMode;
- (void)selectRowForInputMode:(id)arg1;
- (id)selectedInputMode;
- (void)setInputMode:(id)arg1;
- (void)setInputModes:(id)arg1;
- (void)setKeyboardSettingsFromSwitcher:(BOOL)arg1;
- (void)show;
- (id)subtitleFontForItemAtIndex:(int)arg1;
- (id)subtitleForItemAtIndex:(int)arg1;
- (void)switchAction;
- (id)titleForItemAtIndex:(int)arg1;
- (void)toggleKeyboardAssistantPreference;
- (void)toggleKeyboardPredictionPreference;

@end
