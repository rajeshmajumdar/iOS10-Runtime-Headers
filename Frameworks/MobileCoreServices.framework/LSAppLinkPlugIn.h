/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSAppLinkPlugIn : NSObject {
    NSURLComponents * _URLComponents;
    NSObject<OS_xpc_object> * _XPCConnection;
}

@property (retain) NSURLComponents *URLComponents;
@property (retain) NSObject<OS_xpc_object> *XPCConnection;

+ (BOOL)canHandleURLComponents:(id)arg1;
+ (Class)plugInClasses;

- (id)URLComponents;
- (id)XPCConnection;
- (void)dealloc;
- (void)getAppLinkWithCompletionHandler:(id /* block */)arg1;
- (void)setURLComponents:(id)arg1;
- (void)setXPCConnection:(id)arg1;

@end
