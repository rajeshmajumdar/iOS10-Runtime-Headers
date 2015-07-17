/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITextServiceSession : NSObject <UIPopoverControllerDelegate> {
    BOOL  _dismissed;
    id /* block */  _dismissedHandler;
    BOOL  _isTextEffectsWindow;
    UIViewController * _modalViewController;
    UIPopoverController * _popoverController;
    int  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissedHandler;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (BOOL)canShowTextServices;
+ (id)showServiceForText:(id)arg1 type:(int)arg2 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 inView:(id)arg4;
+ (id)textServiceSessionForType:(int)arg1;

- (void).cxx_destruct;
- (void)_endSession;
- (void)dismissTextServiceAnimated:(BOOL)arg1;
- (id /* block */)dismissedHandler;
- (id)init;
- (id)initWithType:(int)arg1;
- (BOOL)isDisplaying;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)sessionDidDismiss;
- (void)setDismissedHandler:(id /* block */)arg1;
- (int)type;

@end
