/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKSettingTableCell : PKTableViewCell {
    SEL  _action;
    UISwitch * _settingSwitch;
    id  _target;
}

@property (nonatomic, readonly) SEL action;
@property (getter=isOn, nonatomic) BOOL on;
@property (nonatomic, retain) UISwitch *settingSwitch;
@property (nonatomic, readonly) id target;

- (SEL)action;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (BOOL)isOn;
- (void)layoutSubviews;
- (void)setOn:(BOOL)arg1;
- (void)setSettingSwitch:(id)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (id)settingSwitch;
- (id)target;

@end
