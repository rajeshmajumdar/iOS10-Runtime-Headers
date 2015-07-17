/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentCardManualEntryViewController : PKPaymentSetupFieldsViewController <PKPaymentCameraCaptureViewControllerDelegate, PKPaymentSetupDisambiguationViewControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)_cameraCaptureCancelButtonPressed:(id)arg1;
- (void)_captureFromCamera:(id)arg1;
- (void)_dismissCameraCaptureViewController:(id)arg1;
- (void)_performDisambiguationWithCompletion:(id /* block */)arg1;
- (void)_performInlineSecondaryWithCompletion:(id /* block */)arg1;
- (void)_performRequirementsWithCompletion:(id /* block */)arg1;
- (void)_performSecondaryWithCompletion:(id /* block */)arg1;
- (void)_pushSecondaryPaymentSetupViewControllerWithCompletion:(id /* block */)arg1;
- (BOOL)_shouldUseInlineSecondaryProvisioningFlow;
- (void)cameraCaptureViewController:(id)arg1 didRecognizeObjects:(id)arg2;
- (void)cameraCaptureViewControllerDidFail:(id)arg1;
- (void)dealloc;
- (id)defaultFields;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)disambiguationViewController:(id)arg1 didSelectProduct:(id)arg2;
- (void)disambiguationViewControllerSetupLater:(id)arg1;
- (void)fieldCellEditableTextFieldValueDidChange:(id)arg1;
- (id)newPaymentEligibilityRequest;
- (void)performNextActionForProvisioningState:(int)arg1 withCompletion:(id /* block */)arg2;
- (id)readonlyFieldIdentifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)updateFieldsModelWithCameraCaptureObjects:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)visibleFieldIdentifiers;

@end
