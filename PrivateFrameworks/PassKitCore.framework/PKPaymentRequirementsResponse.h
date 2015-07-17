/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentRequirementsResponse : PKPaymentWebServiceResponse {
    NSArray * _possibleProductIdentifiers;
    NSString * _productIdentifier;
    NSArray * _requiredPaymentSetupFields;
    int  _status;
}

@property (nonatomic, readonly) NSArray *possibleProductIdentifiers;
@property (nonatomic, readonly) NSString *productIdentifier;
@property (nonatomic, readonly) NSArray *requiredPaymentSetupFields;
@property (nonatomic, readonly) int status;

- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)possibleProductIdentifiers;
- (id)productIdentifier;
- (id)requiredPaymentSetupFields;
- (int)status;

@end
