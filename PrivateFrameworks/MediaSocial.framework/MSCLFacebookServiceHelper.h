/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLFacebookServiceHelper : NSObject <MSCLExternalServiceHelper> {
    ACAccountStore * _accountStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_appID;
- (void)authenticateAccountWithCompletionBlock:(id /* block */)arg1;
- (void)authenticateUserName:(id)arg1 password:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (BOOL)canAddAccount;
- (id)init;
- (void)requestAccessForAccount:(id)arg1 options:(id)arg2 completionBlock:(id /* block */)arg3;

@end
