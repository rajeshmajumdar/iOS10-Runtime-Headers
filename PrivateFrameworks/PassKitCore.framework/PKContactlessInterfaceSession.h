/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKContactlessInterfaceSession : PKPaymentSession <NFLoyaltyAndPaymentSessionDelegate> {
    PKPaymentApplication * _activatedPaymentApplication;
    PKPaymentPass * _activatedPaymentPass;
    NSArray * _activatedValueAddedServicePasses;
    unsigned char  _cardEmulationMode;
    NSObject<OS_dispatch_queue> * _concurrentQueue;
    <PKContactlessInterfaceSessionDelegate> * _delegate;
    BOOL  _fieldPresent;
    unsigned int  _state;
    unsigned long long  _transactionStartTime;
    NSArray * _valueAddedServiceTransactions;
}

@property (nonatomic, readonly) PKPaymentApplication *activatedPaymentApplication;
@property (nonatomic, readonly) PKPaymentPass *activatedPaymentPass;
@property (nonatomic, readonly) NSArray *activatedValueAddedServicePasses;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKContactlessInterfaceSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL fieldPresent;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) unsigned int state;
@property (readonly) Class superclass;

+ (id)contactlessInterfaceSessionWithInternalSession:(id)arg1;

- (id)_appletForPaymentApplication:(id)arg1;
- (id)_appletWithIdentifier:(id)arg1;
- (id)_filteredLoyaltyPassesFromVASTransactions:(id)arg1 activatedPasses:(id)arg2;
- (BOOL)activatePaymentApplication:(id)arg1 forPaymentPass:(id)arg2 markAsDefault:(BOOL)arg3;
- (BOOL)activateValueAddedServicePasses:(id)arg1;
- (id)activatedPaymentApplication;
- (id)activatedPaymentPass;
- (id)activatedValueAddedServicePasses;
- (BOOL)authorizeAndStartCardEmulationWithCredential:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (BOOL)fieldPresent;
- (id)initWithInternalSession:(id)arg1;
- (void)loyaltyAndPaymentSession:(id)arg1 didDetectField:(BOOL)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didEndTransaction:(id)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didExpireTransactionForApplet:(id)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didPerformValueAddedServiceTransactions:(id)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didStartTransaction:(id)arg2;
- (void)loyaltyAndPaymentSessionDidEndUnexpectedly:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (unsigned int)state;
- (BOOL)stopCardEmulation;

@end
