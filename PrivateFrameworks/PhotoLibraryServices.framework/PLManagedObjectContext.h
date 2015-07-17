/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLManagedObjectContext : NSManagedObjectContext {
    NSMutableArray * _albumUuidForCloudDeletion;
    NSMutableSet * _avalancheUUIDsForUpdate;
    int  _changeSource;
    PLDelayedFiledSystemDeletions * _delayedDeletions;
    PLDelayedSaveActions * _delayedSaveActions;
    BOOL  _hasMetadataChanges;
    BOOL  _isBackingALAssetsLibrary;
    BOOL  _isConnectedToChangeHub;
    BOOL  _isInitializingSingletons;
    BOOL  _isLoadingPhotoLibrary;
    BOOL  _isObservingChangesForPTPNotificationDelegate;
    PLMergePolicy * _mergePolicy;
    BOOL  _mergingChanges;
    PLPhotoLibrary * _photoLibrary;
    <PLManagedObjectContextPTPNotificationDelegate> * _ptpNotificationDelegate;
    BOOL  _regenerateVideoThumbnails;
    BOOL  _savingDuringMerge;
    NSMutableDictionary * _updatedObjectsAttributes;
    NSMutableDictionary * _updatedObjectsRelationships;
    NSMutableArray * _uuidForCloudDeletion;
    NSObject<OS_xpc_object> * changeHubConnection;
}

@property (nonatomic) NSObject<OS_xpc_object> *changeHubConnection;
@property (nonatomic) int changeSource;
@property (nonatomic, retain) PLDelayedFiledSystemDeletions *delayedDeletions;
@property (nonatomic, readonly, retain) PLDelayedSaveActions *delayedSaveActions;
@property (nonatomic) BOOL hasMetadataChanges;
@property (nonatomic) BOOL isBackingALAssetsLibrary;
@property (nonatomic) BOOL isInitializingSingletons;
@property (nonatomic) BOOL isLoadingPhotoLibrary;
@property (nonatomic, readonly) BOOL isUserInterfaceContext;
@property (nonatomic, readonly) BOOL mergingChanges;
@property (nonatomic) PLPhotoLibrary *photoLibrary;
@property (nonatomic) <PLManagedObjectContextPTPNotificationDelegate> *ptpNotificationDelegate;
@property (nonatomic) BOOL regenerateVideoThumbnails;
@property (nonatomic, readonly) BOOL savingDuringMerge;

+ (void)__prepareEntityPropertyLookups;
+ (id)_attributeNamesByIndexByEntityNames;
+ (void)_getStoreURL:(id*)arg1 options:(id*)arg2 enableNotifications:(BOOL)arg3;
+ (void)_getStoreURL:(id*)arg1 options:(id*)arg2 forFileURL:(id)arg3 enableNotifications:(BOOL)arg4;
+ (unsigned long long)_indexValueForPropertyNames:(id)arg1 entityName:(id)arg2 indexesByPropertyNamesByEntityNames:(id)arg3;
+ (id)_indexesByAttributeNamesByEntityNames;
+ (id)_indexesByRelationshipNamesByEntityNames;
+ (BOOL)_isAssetLibraryFetchingAlbum:(id)arg1;
+ (BOOL)_openAndMigrateStoreWithURL:(id)arg1 options:(id)arg2 coordinator:(id)arg3 forceSourceModelVersion:(id)arg4;
+ (id)_propertyNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2 propertyNamesByIndexByEntityNames:(id)arg3;
+ (BOOL)_rebuildAndRetryPersistentStoreWithURL:(id)arg1 options:(id)arg2 coordinator:(id)arg3 forced:(BOOL)arg4;
+ (id)_relationshipNamesByIndexByEntityNames;
+ (id)allContextsNotIdenticalTo:(void*)arg1;
+ (BOOL)assetsLibraryLoggingEnabled;
+ (id)attributeNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2;
+ (BOOL)canMergeRemoteChanges;
+ (void)configurePersistentStoreCoordinator:(id)arg1;
+ (id)contextForDatabaseCreation:(const char *)arg1;
+ (id)contextForPhotoLibrary:(id)arg1 name:(const char *)arg2;
+ (BOOL)databaseIsMissing;
+ (id)databasePath;
+ (void)getStoreURL:(id*)arg1;
+ (void)handleUnknownMergeEvent;
+ (BOOL)hasAtLeastOneAsset;
+ (BOOL)hasConfiguredPhotoLibrary;
+ (unsigned long long)indexValueForAttributeNames:(id)arg1 entity:(id)arg2;
+ (unsigned long long)indexValueForRelationshipNames:(id)arg1 entity:(id)arg2;
+ (id)managedObjectModel;
+ (id)managedObjectModelURL;
+ (void)mergeChangesFromRemoteContextSave:(id)arg1 intoAllContextsNotIdenticalTo:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)mergeIntoAllContextsChangesFromRemoteContextSave:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)moveOldStoreAside;
+ (BOOL)moveStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
+ (void)recordVersion:(int)arg1 forStore:(id)arg2 extraMetadata:(id)arg3;
+ (id)relationshipNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2;
+ (id)sharedPersistentStoreCoordinator;
+ (BOOL)storeIsOldEnough;
+ (BOOL)useModelMigratorToCreateDatabase;

- (void)_contextObjectsDidChange:(id)arg1;
- (void)_createDelayedSaveActionsWithTransaction:(id)arg1;
- (void)_destroyDelayedSaveActions;
- (void)_getInsertedIDs:(id)arg1 deletedIDs:(id)arg2 changedIDs:(id)arg3 ofEntityKind:(id)arg4 fromRemoteContextDidSaveNotification:(id)arg5;
- (void)_informPTPDelegateAboutChangesFromRemoteContextSaveNotification:(id)arg1;
- (void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(BOOL)arg2;
- (void)_notifyALAssetsLibraryWithChanges:(id)arg1 usingObjectIDs:(BOOL)arg2;
- (BOOL)_tooManyAssetChangesToHandle:(unsigned int)arg1;
- (id)changeHubConnection;
- (int)changeSource;
- (void)connectToChangeHub;
- (int)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (unsigned int)countForFetchRequest:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)delayedDeletions;
- (id)delayedSaveActions;
- (void)disconnectFromChangeHub;
- (id)executeFetchRequest:(id)arg1 error:(id*)arg2;
- (id)existingObjectWithID:(id)arg1 error:(id*)arg2;
- (id)getAndClearRecordedAlbumForCloudDeletion;
- (id)getAndClearRecordedAssetForCloudDeletion;
- (id)getAndClearRecordedAvalancheUUIDsForUpdate;
- (void)getAndClearUpdatedObjectsAttributes:(id*)arg1 relationships:(id*)arg2;
- (id)globalValueForKey:(id)arg1;
- (BOOL)hasMetadataChanges;
- (BOOL)hasPreviouslyMergedDeleteForObject:(id)arg1;
- (id)initWithConcurrencyType:(unsigned int)arg1 useSharedPersistentStoreCoordinator:(BOOL)arg2;
- (BOOL)isBackingALAssetsLibrary;
- (BOOL)isInitializingSingletons;
- (BOOL)isLoadingPhotoLibrary;
- (BOOL)isReadOnly;
- (BOOL)isUserInterfaceContext;
- (BOOL)mergingChanges;
- (BOOL)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (id)photoLibrary;
- (id)pl_fetchObjectsWithIDs:(id)arg1;
- (id)pl_fetchObjectsWithIDs:(id)arg1 rootEntity:(id)arg2;
- (id)ptpNotificationDelegate;
- (void)recordAlbumForCloudDeletion:(id)arg1;
- (void)recordAssetForCloudDeletion:(id)arg1;
- (void)recordAvalancheUUIDForUpdate:(id)arg1;
- (void)recordManagedObjectWillSave:(id)arg1;
- (BOOL)regenerateVideoThumbnails;
- (void)registerFilesystemDeletionInfo:(id)arg1;
- (BOOL)save:(id*)arg1;
- (BOOL)savingDuringMerge;
- (void)setChangeHubConnection:(id)arg1;
- (void)setChangeSource:(int)arg1;
- (void)setDelayedDeletions:(id)arg1;
- (void)setGlobalValue:(id)arg1 forKey:(id)arg2;
- (void)setHasMetadataChanges:(BOOL)arg1;
- (void)setIsBackingALAssetsLibrary:(BOOL)arg1;
- (void)setIsInitializingSingletons:(BOOL)arg1;
- (void)setIsLoadingPhotoLibrary:(BOOL)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)setPtpNotificationDelegate:(id)arg1;
- (void)setRegenerateVideoThumbnails:(BOOL)arg1;
- (void)setupLocalChangeNotifications;
- (void)tearDownLocalChangeNotifications;
- (void)withDispatchGroup:(id)arg1 performBlock:(id /* block */)arg2;

@end
