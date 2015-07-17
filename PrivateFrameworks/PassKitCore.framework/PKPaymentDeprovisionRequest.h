/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentDeprovisionRequest : PKPaymentWebServiceRequest {
    PKPaymentPass * _pass;
}

@property (nonatomic, retain) PKPaymentPass *pass;

- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 account:(id)arg3;
- (void)dealloc;
- (id)initWithPaymentPass:(id)arg1;
- (id)pass;
- (void)setPass:(id)arg1;

@end
