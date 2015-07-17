/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMPowerController : NSObject {
    NSMutableDictionary * __assertionsByIdentifier;
    NSObject<OS_dispatch_queue> * __assertionsQueue;
}

@property (nonatomic, readonly) NSMutableDictionary *_assertionsByIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_assertionsQueue;

- (void).cxx_destruct;
- (id)_assertionsByIdentifier;
- (id)_assertionsQueue;
- (void)addAssertionForIndentifier:(id)arg1 withReason:(id)arg2 expirationHandler:(id /* block */)arg3;
- (id)generateAssertionIdentifier;
- (id)init;
- (void)removeAssertionForIdentifier:(id)arg1 withReason:(id)arg2;

@end
