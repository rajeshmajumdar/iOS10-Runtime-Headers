/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKHealthPrivacyHostViewController : _UIRemoteViewController <HKHealthPrivacyHostRemoteViewController> {
    <HKHealthPrivacyHostViewControllerDelegate> * _delegate;
}

@property (nonatomic) <HKHealthPrivacyHostViewControllerDelegate> *delegate;

+ (id)exportedInterface;
+ (id)requestRemoteViewControllerWithConnectionHandler:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;
+ (bool)shouldPropagateAppearanceCustomizations;

- (void).cxx_destruct;
- (id)_healthPrivacyServiceViewControllerProxy;
- (id)delegate;
- (void)didFinishWithError:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPromptSession:(id)arg1;
- (void)setRequestRecord:(id)arg1 updateDescription:(id)arg2 shareDescription:(id)arg3;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
