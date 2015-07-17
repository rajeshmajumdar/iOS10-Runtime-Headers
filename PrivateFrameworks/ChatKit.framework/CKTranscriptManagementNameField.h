/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptManagementNameField : UIView <UITextFieldDelegate> {
    _UIBackdropView * _backdropView;
    UIView * _bottomSeparator;
    <CKTranscriptManagementNameFieldDelegate> * _delegate;
    BOOL  _enabled;
    UILabel * _fieldLabel;
    BOOL  _isOverlay;
    UITextField * _textField;
    UIView * _topSeparator;
}

@property (nonatomic, retain) _UIBackdropView *backdropView;
@property (nonatomic, retain) UIView *bottomSeparator;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKTranscriptManagementNameFieldDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (nonatomic, retain) UILabel *fieldLabel;
@property (nonatomic, copy) NSString *groupName;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isOverlay;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextField *textField;
@property (nonatomic, retain) UIView *topSeparator;

+ (float)preferredHeight;

- (id)backdropView;
- (id)bottomSeparator;
- (void)commitGroupName;
- (void)dealloc;
- (id)delegate;
- (id)fieldLabel;
- (id)groupName;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isEnabled;
- (BOOL)isOverlay;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)setBackdropView:(id)arg1;
- (void)setBottomSeparator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFieldLabel:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setIsOverlay:(BOOL)arg1;
- (void)setTextField:(id)arg1;
- (void)setTopSeparator:(id)arg1;
- (id)textField;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)topSeparator;

@end
