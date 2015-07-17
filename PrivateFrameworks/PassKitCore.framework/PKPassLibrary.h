/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassLibrary : NSObject <PKPassLibraryExportedInterface> {
    <PKPassLibraryDelegate> * _delegate;
    PKAsyncCache * _libraryCache;
    PKPassLibrary * _remoteLibrary;
    <NSObject> * _remoteLibraryObserver;
    PKXPCService * _remoteService;
    BOOL  _usesExtendedInterface;
}

@property (nonatomic) <PKPassLibraryDelegate> *delegate;

+ (void)endAutomaticPassPresentationSuppressionWithRequestToken:(unsigned int)arg1;
+ (BOOL)isPassLibraryAvailable;
+ (BOOL)isPaymentPassActivationAvailable;
+ (BOOL)isSuppressingAutomaticPassPresentation;
+ (unsigned int)requestAutomaticPassPresentationSuppressionWithResponseHandler:(id /* block */)arg1;

- (void)_activatePaymentPass:(id)arg1 withActivationCode:(id)arg2 activationData:(id)arg3 completion:(id /* block */)arg4;
- (void)_applyDataAccessorToObject:(id)arg1;
- (void)_applyDataAccessorToObjects:(id)arg1;
- (id /* block */)_errorHandlerWithCompletion:(id /* block */)arg1;
- (id /* block */)_errorHandlerWithSemaphore:(id)arg1;
- (id)_extendedRemoteObjectProxy;
- (id)_extendedRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_extendedRemoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (id)_extendedRemoteObjectProxyWithSemaphore:(id)arg1;
- (void)_getArchivedObjectWithUniqueID:(id)arg1 completion:(id /* block */)arg2;
- (void)_getPassWithUniqueID:(id)arg1 completion:(id /* block */)arg2;
- (void)_getPassesAndCatalogOfPassTypes:(unsigned int)arg1 limitResults:(BOOL)arg2 withRetries:(unsigned int)arg3 handler:(id /* block */)arg4;
- (BOOL)_hasRemoteLibrary;
- (id)_passesOfType:(unsigned int)arg1 withRetries:(unsigned int)arg2;
- (id)_passesWithRetries:(unsigned int)arg1;
- (void)_postLibraryChangeWithUserInfo:(id)arg1;
- (id)_remoteObjectProxy;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (void)activatePaymentPass:(id)arg1 withActivationCode:(id)arg2 completion:(id /* block */)arg3;
- (void)activatePaymentPass:(id)arg1 withActivationData:(id)arg2 completion:(id /* block */)arg3;
- (void)addFakeBulletin;
- (void)addPasses:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)archiveForObjectWithUniqueID:(id)arg1;
- (BOOL)canAddPassOfType:(unsigned int)arg1;
- (BOOL)canAddPaymentPassWithPrimaryAccountIdentifier:(id)arg1;
- (void)catalogChanged:(id)arg1 withNewPasses:(id)arg2;
- (BOOL)containsPass:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)diffForPassBulletinWithRecordID:(id)arg1;
- (void)fetchContentForUniqueID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)fetchCurrentRelevantPassInfo:(id /* block */)arg1;
- (void)fetchHasCandidatePasses:(id /* block */)arg1;
- (void)fetchImageSetForUniqueID:(id)arg1 ofType:(int)arg2 displayProfile:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)getContainmentStatusAndSettingsForPass:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getPassesAndCatalog:(BOOL)arg1 withHandler:(id /* block */)arg2;
- (void)getPassesAndCatalogOfPassTypes:(unsigned int)arg1 withHandler:(id /* block */)arg2;
- (void)getRouteRelevantPassesFromLocation:(id)arg1 handler:(id /* block */)arg2;
- (void)hasInAppPaymentPassesForNetworks:(id)arg1 capabilities:(unsigned int)arg2 withHandler:(id /* block */)arg3;
- (void)hasInAppPaymentPassesForNetworks:(id)arg1 withHandler:(id /* block */)arg2;
- (void)hasInAppPrivateLabelPaymentPassesForApplicationIdentifier:(id)arg1 withHandler:(id /* block */)arg2;
- (BOOL)hasPassesOfType:(unsigned int)arg1;
- (void)inAppPaymentPassesForNetworks:(id)arg1 capabilities:(unsigned int)arg2 withHandler:(id /* block */)arg3;
- (void)inAppPaymentPassesForNetworks:(id)arg1 withHandler:(id /* block */)arg2;
- (void)inAppPrivateLabelPaymentPassesForApplicationIdentifier:(id)arg1 withHandler:(id /* block */)arg2;
- (void)ingestPassData:(id)arg1 settings:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)initWithMachServiceName:(id)arg1 resumeNotificationName:(id)arg2 extendedInterface:(BOOL)arg3;
- (void)introduceDatabaseIntegrityProblem;
- (BOOL)isPaymentPassActivationAvailable;
- (BOOL)isRemovingPassesOfType:(unsigned int)arg1;
- (void)logDelayExitReasons;
- (BOOL)migrateData;
- (void)noteAccountChanged;
- (void)noteAccountDeleted;
- (void)noteObjectSharedWithUniqueID:(id)arg1;
- (void)notifyPassUsed:(id)arg1 fromSource:(int)arg2;
- (void)nukeDatabaseAndExit;
- (void)openPaymentSetup;
- (void)passAdded:(id)arg1;
- (void)passRemoved:(id)arg1;
- (void)passUpdated:(id)arg1;
- (id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (id)passWithUniqueID:(id)arg1;
- (id)passes;
- (id)passesOfType:(unsigned int)arg1;
- (void)recomputeRelevantPassesWithSearchMode:(int)arg1;
- (id)remotePaymentPasses;
- (void)removePass:(id)arg1;
- (void)removePassWithUniqueID:(id)arg1;
- (void)removePassesOfType:(unsigned int)arg1;
- (void)removingPassesOfType:(unsigned int)arg1 didFinishWithSuccess:(BOOL)arg2;
- (void)removingPassesOfType:(unsigned int)arg1 didUpdateWithProgress:(double)arg2;
- (BOOL)replacePassWithPass:(id)arg1;
- (void)requestContactlessInterfaceSuppressionFromUserWithCompletion:(id /* block */)arg1;
- (void)requestUpdateOfObjectWithUniqueID:(id)arg1 completion:(id /* block */)arg2;
- (void)sendUserEditedCatalog:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)shuffleGroups:(int)arg1;
- (void)updateSettings:(unsigned int)arg1 forObjectWithUniqueID:(id)arg2;

@end
