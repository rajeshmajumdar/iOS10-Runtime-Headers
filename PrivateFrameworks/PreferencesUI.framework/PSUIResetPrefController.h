/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIResetPrefController : PSListController {
    UIAlertView * _alert;
    int  _codesEntered;
    int  _codesNeeded;
    PSSpecifier * _currentSpecifier;
    PSSpecifier * _locationSpecifier;
    int  _locationSpecifierIndex;
    NSString * _passcode;
    BOOL  _requirePasscode;
    BOOL  _requireRestrictionsCode;
    BOOL  _returningFromPINSheetWithSuccess;
    BOOL  _shouldEraseWithFMiP;
    BOOL  _shouldTryEraseAgainWithFMiP;
}

- (void).cxx_destruct;
- (void)_eraseSettingsAndContent;
- (void)_resetWithMode:(int)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)confirmEraseCellularSettings;
- (void)confirmationSpecifierConfirmed:(id)arg1;
- (void)dealloc;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didAppear;
- (void)eraseCellularSettings;
- (void)eraseSettings:(id)arg1;
- (void)eraseSettingsAndContent:(id)arg1;
- (id)init;
- (void)locatorStateDidChange:(id)arg1;
- (void)popupViewDidDisappear;
- (void)profileNotification:(id)arg1;
- (void)reprovisionAccount;
- (void)resetAKey;
- (void)resetIconPositions:(id)arg1;
- (void)resetKeyboardDictionary:(id)arg1;
- (void)resetNetworkSettings:(id)arg1;
- (void)resetPrivacyWarnings:(id)arg1;
- (BOOL)shouldShowRoamingErasePrompt;
- (id)specifiers;
- (void)subscriberOptions:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateLocationResetSpecifier;
- (void)viewDidAppear:(BOOL)arg1;

@end
