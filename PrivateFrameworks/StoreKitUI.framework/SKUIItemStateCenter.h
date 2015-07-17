/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIItemStateCenter : NSObject <SSDownloadManagerObserver> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    BOOL  _appInstallRestricted;
    SSSoftwareUpdatesStore * _appUpdatesStore;
    BOOL  _canAccessAppUpdates;
    BOOL  _canAccessPurchaseHistory;
    SSDownloadManager * _downloadManager;
    NSMutableArray * _finishLoadBlocks;
    int  _gratisState;
    NSMutableDictionary * _itemStates;
    int  _loadCount;
    NSMutableArray * _mediaLibraries;
    NSObject<OS_dispatch_queue> * _mediaLibraryQueue;
    NSCountedSet * _observedLibraryItems;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    int  _parentalControlsRank;
    SSAppPurchaseHistoryDatabase * _purchaseHistoryDatabase;
    BOOL  _runningInStoreDemoMode;
}

@property (readonly) SSSoftwareUpdatesStore *appUpdatesStore;
@property (getter=isApplicationInstallRestricted, readonly) BOOL applicationInstallRestricted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isGratisEligible, nonatomic, readonly) BOOL gratisEligible;
@property (readonly) unsigned int hash;
@property (readonly) int parentalControlsRank;
@property (getter=isRunningInStoreDemoMode, readonly) BOOL runningInStoreDemoMode;
@property (readonly) Class superclass;

+ (id)defaultCenter;

- (void).cxx_destruct;
- (id)_addState:(unsigned int)arg1 forItemIdentifier:(id)arg2;
- (id)_appUpdatesStore;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (id)_copyItemsStatesForLibraryItems:(id)arg1;
- (void)_enumerateAvailableItemsForLibraryItems:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)_fireFinishLoadBlocksIfNecessary;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (id)_newPurchaseWithItem:(id)arg1 offer:(id)arg2;
- (id)_newPurchasesWithBundleItem:(id)arg1 bundleOffer:(id)arg2;
- (id)_newPurchasesWithItems:(id)arg1;
- (void)_notifyObserversOfMediaLibraryChange;
- (void)_notifyObserversOfPurchasesResponses:(id)arg1;
- (void)_notifyObserversOfRestrictionsChange;
- (void)_notifyObserversOfStateChange:(id)arg1;
- (void)_notifyObserversOfStateChanges:(id)arg1;
- (void)_performPurchases:(id)arg1 withClientContext:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)_purchaseHistoryDatabase;
- (void)_reloadAppUpdatesStore;
- (void)_reloadDownloadManager;
- (void)_reloadMediaLibraryStateForItems:(id)arg1;
- (void)_reloadPurchaseHistory;
- (void)_reloadSoftwareLibrary;
- (void)_reloadStateForObservedMediaLibraryItems;
- (void)_removePurchasingItemsForPurchases:(id)arg1;
- (id)_removeState:(unsigned int)arg1 forItemIdentifier:(id)arg2;
- (void)_replacePurchasingItem:(id)arg1 withDownloadIDs:(id)arg2;
- (void)_restrictionsChangedNotification:(id)arg1;
- (void)_setAvailableUpdatesWithUpdates:(id)arg1 decrementLoadCount:(BOOL)arg2;
- (void)_setDownloads:(id)arg1;
- (void)_setGratisIdentifiers:(id)arg1 error:(id)arg2;
- (void)_setInstalledItems:(id)arg1;
- (void)_setPurchaseHistoryItemsWithIdentifiers:(id)arg1;
- (id)_setStateFlag:(unsigned int)arg1 forItemsWithIdentifiers:(id)arg2 sendNotification:(BOOL)arg3;
- (id)_setStateFlag:(unsigned int)arg1 forOnlyItemsWithIdentifiers:(id)arg2 sendNotification:(BOOL)arg3;
- (void)_updatesStoreChangeNotification:(id)arg1;
- (void)addDownloads:(id)arg1;
- (void)addManifestDownloadWithURL:(id)arg1 placeholderMetadata:(id)arg2;
- (void)addMediaLibrary:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)appUpdatesStore;
- (void)beginObservingLibraryItems:(id)arg1;
- (void)cancelDownloadForItemWithIdentifier:(long long)arg1;
- (void)dealloc;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (void)endObservingLibraryItems:(id)arg1;
- (void)findLibraryItemsForContentIdentifiers:(id)arg1 options:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)finishLoadingWithCompletionBlock:(id /* block */)arg1;
- (void)getUpdatesWithCompletionBlock:(id /* block */)arg1;
- (id)gratisEligibleItemIdentifiers;
- (id)init;
- (BOOL)isApplicationInstallRestricted;
- (BOOL)isGratisEligible;
- (BOOL)isItemRestrictedWithParentalControlsRank:(int)arg1;
- (BOOL)isRunningInStoreDemoMode;
- (id)metricsActionTypeForItem:(id)arg1;
- (int)parentalControlsRank;
- (id)performActionForItem:(id)arg1 clientContext:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)performActionForItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)performActionForItem:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)performActionForLibraryItem:(id)arg1;
- (void)purchaseItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)purchaseItems:(id)arg1 withClientContext:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)purchaseItems:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)purchaseTone:(id)arg1 withProperties:(id)arg2 clientContext:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)reloadFromServer;
- (void)reloadFromServerWithCompletionBlock:(id /* block */)arg1;
- (void)reloadGratisEligibilityWithBundleIdentifiers:(id)arg1 clientContext:(id)arg2;
- (void)reloadMediaLibrary:(id)arg1;
- (void)removeMediaLibrary:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)stateForItemWithIdentifier:(long long)arg1;
- (id)stateForItemWithStoreIdentifier:(id)arg1;

@end
