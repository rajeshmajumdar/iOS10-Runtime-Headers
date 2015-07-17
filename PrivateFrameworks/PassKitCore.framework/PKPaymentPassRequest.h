/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentPassRequest : PKPaymentWebServiceRequest {
    NSString * _passTypeID;
    NSString * _serialNumber;
}

@property (nonatomic, copy) NSString *passTypeID;
@property (nonatomic, copy) NSString *serialNumber;

- (id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2;
- (void)dealloc;
- (id)initWithPassTypeID:(id)arg1 serialNumber:(id)arg2;
- (id)passTypeID;
- (id)serialNumber;
- (void)setPassTypeID:(id)arg1;
- (void)setSerialNumber:(id)arg1;

@end
