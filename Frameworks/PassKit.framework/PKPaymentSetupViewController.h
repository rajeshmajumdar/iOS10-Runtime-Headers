/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentSetupViewController : UIViewController <PKPaymentSetupPrivacyFooterViewDelegate> {
    ACAccountStore * _accountStore;
    BOOL  _allowsManualEntry;
    int  _context;
    <PKPaymentSetupViewControllerDelegate> * _delegate;
    BOOL  _nextControllerPushed;
    PKPaymentProvisioningController * _provisioningController;
    PKPaymentCardOnFileDetailsViewController * _singleEligibleCardDetailsController;
}

@property (nonatomic) BOOL allowsManualEntry;
@property (nonatomic) int context;
@property (nonatomic) <PKPaymentSetupViewControllerDelegate> *delegate;
@property (nonatomic, readonly, retain) PKPaymentProvisioningController *provisioningController;
@property (nonatomic, readonly, retain) PKPaymentWebService *webService;

- (id)_configuredCardListViewControllerWithCardList:(id)arg1;
- (id)_configuredCardOnFileEntryViewControllerForCredential:(id)arg1;
- (id)_configuredManualCardEntryViewController;
- (id)_contextSpecificStringForAggdKey:(id)arg1;
- (id)_deviceSpecificLocalizedStringKeyForKey:(id)arg1;
- (void)_next:(id)arg1;
- (void)_pushCardListViewController:(id)arg1;
- (void)_pushCardOnFileEntryViewControllerForCredential:(id)arg1;
- (void)_pushManualCardEntryViewController;
- (BOOL)allowsManualEntry;
- (id)configuredNextActionViewController;
- (int)context;
- (void)dealloc;
- (id)delegate;
- (unsigned int)edgesForExtendedLayout;
- (id)initWithProvisioningController:(id)arg1 context:(int)arg2 delegate:(id)arg3;
- (void)loadView;
- (void)privacyFooterLinkTapped:(id)arg1;
- (id)provisioningController;
- (void)setAllowsManualEntry:(BOOL)arg1;
- (void)setContext:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)webService;

@end
