/* Generated by RuntimeBrowser.
 */

@protocol _UIWebBrowserLoadingControllerDelegate <NSObject>

@optional

- (void)browserLoadingController:(_UIWebBrowserLoadingController *)arg1 didFinishLoadingWithError:(NSError *)arg2 dataSource:(WebDataSource *)arg3;
- (void)browserLoadingController:(_UIWebBrowserLoadingController *)arg1 failedToStartLoadingRequest:(NSURLRequest *)arg2 error:(NSError *)arg3;
- (NSString *)browserLoadingController:(_UIWebBrowserLoadingController *)arg1 userVisibleStringForURL:(NSURL *)arg2;
- (void)browserLoadingController:(_UIWebBrowserLoadingController *)arg1 willLoadRequest:(NSURLRequest *)arg2 userDriven:(BOOL)arg3;
- (void)browserLoadingControllerDidStartLoading:(_UIWebBrowserLoadingController *)arg1;
- (void)browserLoadingControllerDidUpdateBackForward:(_UIWebBrowserLoadingController *)arg1;
- (void)browserLoadingControllerDidUpdateEstimatedProgress:(_UIWebBrowserLoadingController *)arg1;
- (void)browserLoadingControllerDidUpdateLoadingState:(_UIWebBrowserLoadingController *)arg1;
- (void)browserLoadingControllerDidUpdateSecurity:(_UIWebBrowserLoadingController *)arg1;
- (void)browserLoadingControllerDidUpdateTitle:(_UIWebBrowserLoadingController *)arg1;
- (void)browserLoadingControllerDidUpdateURL:(_UIWebBrowserLoadingController *)arg1;
- (void)browserLoadingControllerDidUpdateURLString:(_UIWebBrowserLoadingController *)arg1;
- (BOOL)browserLoadingControllerShouldShowProvisionalURLs:(_UIWebBrowserLoadingController *)arg1;
- (void)browserLoadingControllerWillStartUserDrivenLoad:(_UIWebBrowserLoadingController *)arg1;

@end
