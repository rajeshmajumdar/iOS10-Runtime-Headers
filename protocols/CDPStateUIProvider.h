/* Generated by RuntimeBrowser.
 */

@protocol CDPStateUIProvider

@required

- (void)cdpContext:(void *)arg1 promptForAccountPasswordWithCompletion:(void *)arg2; // needs 2 arg types, found 8: CDPContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)cdpContext:(CDPContext *)arg1 promptForLocalSecretWithHandler:(CDPLocalDeviceSecretHandler *)arg2;
- (void)cdpContext:(CDPContext *)arg1 promptForRemoteSecretWithDevices:(NSArray *)arg2 validator:(CDPRemoteDeviceSecretValidator *)arg3;

@end
