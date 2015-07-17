/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicUserInterfaceStatusController : NSObject <MCProfileConnectionObserver> {
    ISSSURLBag * _URLBag;
    NSObject<OS_dispatch_queue> * _accessQueue;
    BOOL  _canShowConnect;
    BOOL  _canShowRadio;
    BOOL  _canShowSubscriptionContent;
    BOOL  _hasSuccessfullyLoadedBag;
    unsigned int  _observersCount;
    RadioAvailabilityController * _radioAvailabilityController;
    MusicStoreBag * _storeBag;
    NSArray * _supportedTabIdentifiers;
    NSDictionary * _tabConfigurations;
    int  _tabState;
}

@property (nonatomic, readonly) BOOL canShowConnect;
@property (nonatomic, readonly) BOOL canShowRadio;
@property (nonatomic, readonly) BOOL canShowSubscriptionContent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) RadioAvailabilityController *radioAvailabilityController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int tabState;

+ (id)sharedUserInterfaceStatusController;

- (void).cxx_destruct;
- (id)_defaultTabConfigurations;
- (void)_didCompleteLoadingBagDictionary:(id)arg1 withError:(id)arg2;
- (void)_handleAccountStoreDidChangeNotification:(id)arg1;
- (void)_handleDefaultsDidChangeNotification:(id)arg1;
- (void)_handleNetworkReachabilityFlagsDidChangeNotification:(id)arg1;
- (void)_handleRadioAvailabilityDidChangeNotification:(id)arg1;
- (void)_handleStoreFrontDidChangeNotification:(id)arg1;
- (void)_handleSubscriptionAvailabilityDidChangeNotification:(id)arg1;
- (void)_handleSubscriptionStatusDidChangeNotification:(id)arg1;
- (BOOL)_isConnectRestricted;
- (void)_reloadStoreURLBagAllowingUpdateUsingExistingBagDictionary:(BOOL)arg1;
- (void)_updateAllowedUserInterfaceComponents;
- (void)_updateAllowedUserInterfaceComponentsWithBagDictionary:(id)arg1;
- (void)beginObservingAllowedUserInterfaceComponents;
- (BOOL)canShowConnect;
- (BOOL)canShowRadio;
- (BOOL)canShowSubscriptionContent;
- (void)dealloc;
- (void)endObservingAllowedUserInterfaceComponents;
- (id)init;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (id)radioAvailabilityController;
- (id)supportedTabIdentifiersForTraitCollection:(id)arg1;
- (int)tabState;

@end
