/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WebUIAuthenticationManager : NSObject {
    UIAlertController * _alertController;
    NSMutableArray * _authenticationChallenges;
    id  _delegate;
    BOOL  _isShowingAuthenticationPanel;
}

@property id delegate;

- (void).cxx_destruct;
- (void)_cancel;
- (void)_didResolveChallenge;
- (void)addAuthenticationChallenge:(id)arg1;
- (void)addAuthenticationChallenge:(id)arg1 displayPanel:(BOOL)arg2;
- (void)addAuthenticationChallenge:(id)arg1 displayPanel:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (id)authenticationChallenge;
- (void)cancelAuthentication;
- (id)delegate;
- (void)removeAuthenticationChallenge:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShowingAuthentication:(BOOL)arg1;

@end
