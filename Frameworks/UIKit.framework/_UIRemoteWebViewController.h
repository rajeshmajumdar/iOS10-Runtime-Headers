/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIRemoteWebViewController : _UIRemoteViewController {
    _UIWebViewController * _webViewController;
}

@property (nonatomic) _UIWebViewController *webViewController;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setWebViewController:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (id)webViewController;

@end
