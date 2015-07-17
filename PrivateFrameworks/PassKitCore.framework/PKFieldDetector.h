/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKFieldDetector : NSObject <NFFieldDetectSessionDelegate, NFLoyaltyAndPaymentSessionDelegate> {
    NFFieldDetectSession * _fieldDetectSession;
    unsigned int  _fieldDetectSessionRetryCount;
    NSObject<OS_dispatch_queue> * _fieldDetectorSerialQueue;
    BOOL  _fieldPresent;
    PKFieldProperties * _fieldProperties;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _observersConcurrentQueue;
    unsigned int  _valueAddedServiceLookupMode;
    NFLoyaltyAndPaymentSession * _valueAddedServiceLookupSession;
    NSObject<NFSession> * _valueAddedServiceLookupSessionHandle;
    unsigned int  _valueAddedServiceLookupSynchronizer;
    unsigned int  _valueAddedServiceLookupTechnology;
    NSObject<OS_dispatch_source> * _valueAddedServiceLookupTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKFieldProperties *fieldProperties;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)_endValueAddedLookupSession;
- (void)_endValueAddedServiceLookupSessionAndNotifyWithMerchantIdentifiers:(id)arg1;
- (void)_restartFieldDetectSession;
- (void)_startFieldDetectSession;
- (void)_startValueAddedServiceLookupSessionForTechnology:(unsigned int)arg1 andValueAddedServiceMode:(unsigned int)arg2;
- (void)dealloc;
- (void)fieldDetectSession:(id)arg1 didDetectField:(BOOL)arg2;
- (void)fieldDetectSession:(id)arg1 didDetectTechnology:(id)arg2;
- (void)fieldDetectSessionDidEndUnexpectedly:(id)arg1;
- (id)fieldProperties;
- (id)init;
- (void)loyaltyAndPaymentSession:(id)arg1 didPerformValueAddedServiceTransactions:(id)arg2;
- (void)registerObserver:(id)arg1;
- (void)setPersistentFieldDetectionEnabled:(BOOL)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)valueAddedServiceSession:(id)arg1 didError:(id)arg2;

@end
