/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewSet : NSObject {
    UIInputViewController * _accessoryViewController;
    UIResponder * _accessoryViewNextResponder;
    UIInputViewController * _assistantViewController;
    UIView * _inputAccessoryView;
    UIView * _inputAssistantView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _inputAssistantViewBounds;
    UIView * _inputView;
    UIInputViewController * _inputViewController;
    BOOL  _isSplit;
    UIResponder * _restorableResponder;
    BOOL  _restoreUsingBecomeFirstResponder;
    float  _splitHeightDelta;
}

@property (nonatomic, readonly) BOOL _inputViewIsSplit;
@property (nonatomic, retain) UIInputViewController *accessoryViewController;
@property (nonatomic) UIResponder *accessoryViewNextResponder;
@property (nonatomic, retain) UIInputViewController *assistantViewController;
@property (getter=isEmpty, nonatomic, readonly) BOOL empty;
@property (nonatomic, retain) UIView *inputAccessoryView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } inputAccessoryViewBounds;
@property (nonatomic, retain) UIView *inputAssistantView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } inputAssistantViewBounds;
@property (nonatomic, retain) UIView *inputView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } inputViewBounds;
@property (nonatomic, retain) UIInputViewController *inputViewController;
@property (nonatomic, readonly) BOOL inputViewKeyboardCanSplit;
@property (nonatomic, readonly) BOOL isInputAccessoryViewPlaceholder;
@property (nonatomic, readonly) BOOL isInputAssistantViewPlaceholder;
@property (nonatomic, readonly) BOOL isInputViewPlaceholder;
@property (nonatomic, readonly) BOOL isSplit;
@property (nonatomic, readonly) UIKeyboard *keyboard;
@property (nonatomic, readonly) UIView *layeringView;
@property (nonatomic) UIResponder *restorableResponder;
@property (nonatomic) BOOL restoreUsingBecomeFirstResponder;
@property (nonatomic, readonly) UIView *splitExemptSubview;
@property (nonatomic) float splitHeightDelta;
@property (nonatomic, readonly) BOOL supportsSplit;

+ (id)emptyInputSet;
+ (id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2;
+ (id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3;
+ (id)inputSetWithKeyboardAndAccessoryView:(id)arg1;
+ (id)inputSetWithPlaceholderAndAccessoryView:(id)arg1;

- (BOOL)__isCKAccessoryView;
- (BOOL)_accessorySuppressesShadow;
- (BOOL)_actLikeInputAccessoryViewSupportsSplit;
- (void)_beginSplitTransitionIfNeeded;
- (void)_endSplitTransitionIfNeeded;
- (BOOL)_inputAccessoryViewSupportsSplit;
- (BOOL)_inputViewIsSplit;
- (BOOL)_inputViewIsVisible;
- (BOOL)_inputViewSetSupportsSplit;
- (BOOL)_inputViewSupportsSplit;
- (BOOL)_isFullscreen;
- (BOOL)_isKeyboard;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_leftInputViewSetFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_rightInputViewSetFrame;
- (void)_setRenderConfig:(id)arg1;
- (void)_setSplitProgress:(float)arg1;
- (id)_splittableInputAccessoryView;
- (id)_themableInputAccessoryView;
- (id)accessoryViewController;
- (id)accessoryViewNextResponder;
- (id)assistantViewController;
- (BOOL)canAnimateToInputViewSet:(id)arg1;
- (BOOL)containsResponder:(id)arg1;
- (BOOL)containsView:(id)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)inSyncWithOrientation:(int)arg1 forKeyboard:(id)arg2;
- (id)initWithInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3 isKeyboard:(BOOL)arg4;
- (id)inputAccessoryView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })inputAccessoryViewBounds;
- (id)inputAssistantView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })inputAssistantViewBounds;
- (id)inputSetWithInputAccessoryViewFromInputSet:(id)arg1;
- (id)inputSetWithInputAccessoryViewOnly;
- (id)inputView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })inputViewBounds;
- (id)inputViewController;
- (BOOL)inputViewKeyboardCanSplit;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isInputAccessoryViewPlaceholder;
- (BOOL)isInputAssistantViewPlaceholder;
- (BOOL)isInputViewPlaceholder;
- (BOOL)isSplit;
- (BOOL)isStrictSupersetOfViewSet:(id)arg1;
- (id)keyboard;
- (int)keyboardOrientation:(id)arg1;
- (id)layeringView;
- (id)normalisePlaceholders;
- (void)refreshPresentation;
- (id)restorableResponder;
- (BOOL)restoreUsingBecomeFirstResponder;
- (void)setAccessoryViewController:(id)arg1;
- (void)setAccessoryViewNextResponder:(id)arg1;
- (BOOL)setAccessoryViewVisible:(BOOL)arg1 delay:(float)arg2;
- (void)setAssistantViewController:(id)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputAssistantView:(id)arg1;
- (void)setInputView:(id)arg1;
- (void)setInputViewController:(id)arg1;
- (void)setRestorableResponder:(id)arg1;
- (void)setRestoreUsingBecomeFirstResponder:(BOOL)arg1;
- (void)setSplitHeightDelta:(float)arg1;
- (id)splitExemptSubview;
- (float)splitHeightDelta;
- (BOOL)supportsSplit;
- (BOOL)usesKeyClicks;
- (BOOL)visible;

@end
