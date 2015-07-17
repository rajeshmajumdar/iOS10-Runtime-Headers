/* Generated by RuntimeBrowser.
 */

@protocol UITextInputAdditions

@required

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_caretRect;
- (void)beginSelectionChange;
- (void)endSelectionChange;
- (UITextInteractionAssistant *)interactionAssistant;
- (BOOL)isEditable;
- (BOOL)isEditing;
- (UIView *)textInputView;

@optional

- (UITextInputAssistantItem *)_inputAssistantItem;
- (UIView *)_textInputViewForAddingGestureRecognizers;
- (BOOL)_useGesturesForEditableContent;

@end
