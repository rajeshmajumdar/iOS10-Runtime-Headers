/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPObjectContext : NSObject <TSPDocumentResourceDownloader, TSPFileCoordinatorDelegate, TSPLazyReferenceDelegate, TSPObjectDelegate, TSPPassphraseConsumer, TSPSupportDirectoryDelegate> {
    TSPComponentManager * _componentManager;
    TSPDataDownloadManager * _dataDownloadManager;
    TSPDataManager * _dataManager;
    SFUCryptoKey * _decryptionKey;
    <TSPObjectContextDelegate> * _delegate;
    TSPDocumentMetadata * _documentMetadata;
    TSPObject * _documentObject;
    TSPObjectContainer * _documentObjectContainer;
    TSPPackage * _documentPackage;
    NSString * _documentPasswordHint;
    TSPDocumentProperties * _documentProperties;
    TSPDocumentResourceDataProvider * _documentResourceDataProvider;
    NSObject<OS_dispatch_queue> * _documentResourceDataProviderQueue;
    TSPDocumentResourceManager * _documentResourceManager;
    TSPDocumentRevision * _documentRevision;
    NSObject<OS_dispatch_queue> * _documentStateQueue;
    NSURL * _documentURL;
    struct { 
        unsigned int delegateRespondsToAdditionalDocumentPropertiesForWrite : 1; 
        unsigned int delegateRespondsToDocumentPasswordHintForWrite : 1; 
        unsigned int delegateRespondsToPackageDataForWrite : 1; 
        unsigned int delegateRespondsToAreNewExternalReferencesToDataAllowed : 1; 
        unsigned int delegateRespondsToAreExternalReferencesToDataAllowedAtURL : 1; 
        unsigned int delegateRespondsToBaseUUIDForObjectUUID : 1; 
        unsigned int delegateRespondsToPreserveDocumentRevisionIdentifierForSaveURL : 1; 
        unsigned int delegateRespondsToFilePresenter : 1; 
        unsigned int delegateRespondsToSupportDirectoryURLReturningIsUnique : 1; 
        unsigned int delegateRespondsToSupportDirectoryURL : 1; 
        unsigned int delegateRespondsToIgnoreDocumentSupport : 1; 
        unsigned int delegateRespondsToIsDocumentSupportTemporary : 1; 
        unsigned int delegateRespondsToNewObjectUUID : 1; 
        unsigned int delegateRespondsToIsInCollaborationMode : 1; 
        unsigned int delegateRespondsToIsInReadOnlyMode : 1; 
        unsigned int skipDocumentUpgrade : 1; 
    }  _flags;
    BOOL  _isWaitingForEndSave;
    long long  _lastObjectIdentifier;
    struct hash_map<const long long, NSMutableArray *, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, NSMutableArray *> > > { 
        struct __hash_table<std::__1::pair<const long long, NSMutableArray *>, __gnu_cxx::__hash_map_hasher<std::__1::pair<const long long, NSMutableArray *>, TSP::IdentifierHash, true>, __gnu_cxx::__hash_map_equal<std::__1::pair<const long long, NSMutableArray *>, std::__1::equal_to<const long long>, true>, std::__1::allocator<std::__1::pair<const long long, NSMutableArray *> > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::pair<const long long, NSMutableArray *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, NSMutableArray *>, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::pair<const long long, NSMutableArray *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, NSMutableArray *>, void *> *> > > { 
                    struct __hash_node<std::__1::pair<const long long, NSMutableArray *>, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, NSMutableArray *>, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, NSMutableArray *>, void *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, NSMutableArray *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, NSMutableArray *>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, NSMutableArray *>, void *> *> { 
                    struct __hash_node<std::__1::pair<const long long, NSMutableArray *>, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, __gnu_cxx::__hash_map_hasher<std::__1::pair<const long long, NSMutableArray *>, TSP::IdentifierHash, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, __gnu_cxx::__hash_map_equal<std::__1::pair<const long long, NSMutableArray *>, std::__1::equal_to<const long long>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _loadObservers;
    NSObject<OS_dispatch_queue> * _loadObserversQueue;
    unsigned int  _mode;
    int  _modifyObjectCount;
    long long  _modifyObjectToken;
    NSProgress * _nextSaveProgress;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSHashTable * _objectModifyDelegates;
    TSPObjectUUIDMap * _objectUUIDMap;
    NSMapTable * _objects;
    NSObject<OS_dispatch_queue> * _objectsQueue;
    NSHashTable * _objectsToIgnoreModifications;
    NSObject<OS_dispatch_group> * _outstandingReadsGroup;
    TSPPackageWriteCoordinator * _packageWriteCoordinator;
    NSData * _passwordVerifier;
    NSObject<OS_dispatch_group> * _pendingEndSaveGroup;
    int  _preferredPackageType;
    NSRecursiveLock * _readLock;
    NSObject<OS_dispatch_queue> * _runLoadObserversForKnownObjectQueue;
    NSObject<OS_dispatch_queue> * _runLoadObserversQueue;
    TSPDocumentSaveOperationState * _saveOperationState;
    unsigned long long  _saveToken;
    TSPSupportManager * _supportManager;
    TSPSupportMetadata * _supportMetadata;
    TSPObject * _supportObject;
    TSPObjectContainer * _supportObjectContainer;
    TSPPackage * _supportPackage;
    NSURL * _supportURL;
    TSPPackageWriteCoordinator * _supportWriteCoordinator;
    TSUTemporaryDirectory * _temporaryDirectory;
    NSObject<OS_dispatch_queue> * _temporaryDirectoryQueue;
    NSObject<OS_dispatch_queue> * _writeQueue;
}

@property (nonatomic, readonly) BOOL areNewExternalReferencesToDataAllowed;
@property (nonatomic, readonly) TSPComponentManager *componentManager;
@property (nonatomic, readonly) TSPObjectContext *context;
@property (nonatomic, readonly) TSPDataDownloadManager *dataDownloadManager;
@property (nonatomic, readonly) TSPDataManager *dataManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) SFUCryptoKey *decryptionKey;
@property (nonatomic) <TSPObjectContextDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long documentDataSize;
@property (nonatomic, readonly) TSPDocumentMetadata *documentMetadata;
@property (nonatomic, readonly) TSPObject *documentObject;
@property (nonatomic, retain) TSPObjectContainer *documentObjectContainer;
@property (nonatomic, readonly) TSPPackage *documentPackage;
@property (nonatomic, readonly) NSString *documentPasswordHint;
@property (nonatomic, readonly) TSPDocumentProperties *documentProperties;
@property (nonatomic, readonly) TSPDocumentResourceManager *documentResourceManager;
@property (retain) TSPDocumentRevision *documentRevision;
@property (nonatomic, readonly) unsigned long long documentSize;
@property (nonatomic, readonly) NSURL *documentURL;
@property (nonatomic, readonly) NSUUID *documentUUID;
@property (nonatomic, readonly) long long estimatedDownloadSize;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL ignoreDocumentResourcesWhileReading;
@property (nonatomic, readonly) BOOL ignoreDocumentSupport;
@property (nonatomic, readonly) BOOL ignoreUnknownContentWhileReading;
@property (nonatomic, readonly) BOOL ignoreVersionCheckingWhileReading;
@property (nonatomic, readonly) BOOL isDocumentModified;
@property (nonatomic, readonly) BOOL isDocumentSupportTemporary;
@property (nonatomic, readonly) BOOL isEstimatedDownloadSizePrecise;
@property (nonatomic, readonly) BOOL isInCollaborationMode;
@property (nonatomic, readonly) BOOL isInReadOnlyMode;
@property (nonatomic, readonly) BOOL isPasswordProtected;
@property (nonatomic, readonly) BOOL isSupportModified;
@property (nonatomic, readonly) NSData *keychainGenericItem;
@property (nonatomic) long long lastObjectIdentifier;
@property (nonatomic, readonly) BOOL needsDownload;
@property (nonatomic, readonly) int packageType;
@property (nonatomic, readonly) NSString *passphraseHint;
@property (nonatomic, readonly) NSData *passwordVerifier;
@property int preferredPackageType;
@property (nonatomic, readonly) unsigned long long saveToken;
@property (nonatomic, readonly) NSString *service;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TSPSupportManager *supportManager;
@property (nonatomic, readonly) TSPSupportMetadata *supportMetadata;
@property (nonatomic, retain) TSPObject *supportObject;
@property (nonatomic, retain) TSPObjectContainer *supportObjectContainer;
@property (nonatomic, readonly) TSPPackage *supportPackage;
@property (nonatomic, readonly) NSUUID *versionUUID;

+ (id)documentRevisionAtURL:(id)arg1 passphrase:(id)arg2 error:(id*)arg3;
+ (BOOL)dumpMessagesForDocument:(id)arg1 decryptionKey:(id)arg2 toURL:(id)arg3;
+ (void)garbageCollectDocumentSupportWithKnownDocumentUUIDs:(id)arg1 delegate:(id)arg2;
+ (BOOL)isNativeDirectoryFormatURL:(id)arg1;
+ (BOOL)isNativeOrTangierEditingFormatURL:(id)arg1;
+ (BOOL)isTangierEditingFormatURL:(id)arg1;
+ (void)removeDefaultSupportDirectory;
+ (id)requestDownloadingDocumentResourcesForURL:(id)arg1 decryptionKey:(id)arg2;
+ (BOOL)requestDownloadingDocumentResourcesForURL:(id)arg1 decryptionKey:(id)arg2 usingDataProvider:(id)arg3;
+ (id)supportBundleURLForDocumentUUID:(id)arg1 delegate:(id)arg2;
+ (void)waitForPendingEndSaveGroup:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)UUIDsFromObjects:(id)arg1;
- (void)addLoadObserver:(id)arg1 action:(SEL)arg2 forLazyReference:(id)arg3;
- (void)addLoadObserver:(id)arg1 action:(SEL)arg2 forObjectIdentifier:(long long)arg3 objectOrNil:(id)arg4;
- (id)addLoadedObjectsAndEnqueueNotifications:(id)arg1;
- (void)addObjectModifyDelegate:(id)arg1;
- (BOOL)areExternalReferencesSupported;
- (BOOL)areExternalReferencesToDataAllowedAtURL:(id)arg1;
- (BOOL)areNewExternalReferencesToDataAllowed;
- (id)baseUUIDForObjectUUID;
- (void)beginAssertOnModify;
- (void)beginIgnoringCachedObjectEviction;
- (void)beginIgnoringModificationsForObject:(id)arg1;
- (void)beginSaveToURL:(id)arg1 updateType:(int)arg2 packageType:(int)arg3;
- (void)beginSaveToURL:(id)arg1 updateType:(int)arg2 packageType:(int)arg3 documentUUID:(id)arg4;
- (void)beginWriteOperation;
- (void)beginWriteWithOriginalURL:(id)arg1;
- (void)beginWriteWithOriginalURL:(id)arg1 relativeURLForExternalData:(id)arg2;
- (BOOL)canSetObjectUUIDForObject:(id)arg1;
- (void)cancelDownloads;
- (void)checkforDataWarningsWithPackageURL:(id)arg1;
- (void)close;
- (id)componentManager;
- (BOOL)containsDataConformingToUTI:(id)arg1;
- (id)context;
- (BOOL)continueReadingDocumentObjectFromPackageURL:(id)arg1 documentResourceDataProvider:(id)arg2 areExternalDataReferencesAllowed:(BOOL)arg3 error:(id*)arg4;
- (void)createInternalMetadataIfNeeded;
- (id)currentPackageDataWriter;
- (id)dataDownloadManager;
- (id)dataManager;
- (id)dataWithContentsOfPackagePath:(id)arg1;
- (id)dataWithDigest:(id)arg1;
- (id)dataWithDigest:(id)arg1 preferredFilename:(id)arg2 canDownload:(BOOL)arg3 downloadPriority:(int)arg4;
- (id)dataWithLegacyDataIdentifier:(long long)arg1;
- (void)dealloc;
- (id)decryptionKey;
- (id)delegate;
- (id)deterministicObjectUUIDRelativeToObject:(id)arg1 offset:(unsigned long long)arg2;
- (BOOL)didFinishSuccessfullyReadingObjects:(id)arg1 readCoordinator:(id)arg2 finalizeHandlerQueue:(id)arg3;
- (void)didFinishUsingDocumentResourceDataProvider:(id)arg1 withSuccess:(BOOL)arg2;
- (void)didMoveSupportToURL:(id)arg1;
- (void)didMoveToURL:(id)arg1;
- (void)didReadDocumentObject:(id)arg1;
- (void)didReadSupportObject:(id)arg1;
- (unsigned long long)documentDataSize;
- (id)documentMetadata;
- (id)documentObject;
- (id)documentObjectContainer;
- (unsigned long long)documentObjectSize;
- (id)documentPackage;
- (id)documentPasswordHint;
- (id)documentProperties;
- (id)documentResourceDataWithDigestString:(id)arg1 locator:(id)arg2 filename:(id)arg3;
- (id)documentResourceManager;
- (id)documentRevision;
- (id)documentRoot;
- (unsigned long long)documentSize;
- (id)documentURL;
- (id)documentUUID;
- (id)downloadWithDelegate:(id)arg1 description:(id)arg2;
- (void)endAssertOnModify;
- (void)endIgnoringCachedObjectEviction;
- (void)endIgnoringModificationsForObject:(id)arg1;
- (void)endSaveWithSuccess:(BOOL)arg1;
- (void)endWriteOperation;
- (BOOL)endWriteWithSuccess:(BOOL)arg1 error:(id*)arg2;
- (void)enumerateDocumentResourcesUsingBlock:(id /* block */)arg1;
- (unsigned long long)estimatedDocumentSize;
- (long long)estimatedDownloadSize;
- (BOOL)ignoreDocumentResourcesWhileReading;
- (BOOL)ignoreDocumentSupport;
- (BOOL)ignoreUnknownContentWhileReading;
- (BOOL)ignoreVersionCheckingWhileReading;
- (id)incrementDocumentRevisionWithIdentifier:(id)arg1;
- (long long)incrementLastObjectIdentifier:(long long)arg1;
- (id)init;
- (id)initForQuickLookWithURL:(id)arg1 appDocumentResourcesURL:(id)arg2 appDocumentResourcesMetadataURL:(id)arg3 delegate:(id)arg4 passphrase:(id)arg5 error:(id*)arg6;
- (id)initForSpotlightWithURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 documentResourceManager:(id)arg2;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 documentResourceManager:(id)arg3 mode:(unsigned int)arg4 passphrase:(id)arg5 skipDocumentUpgrade:(BOOL)arg6 error:(id*)arg7;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 mode:(unsigned int)arg3 passphrase:(id)arg4 skipDocumentUpgrade:(BOOL)arg5 error:(id*)arg6;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 passphrase:(id)arg3 error:(id*)arg4;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 passphrase:(id)arg3 skipDocumentUpgrade:(BOOL)arg4 error:(id*)arg5;
- (BOOL)isDocumentModified;
- (BOOL)isDocumentSupportTemporary;
- (BOOL)isEstimatedDownloadSizePrecise;
- (BOOL)isInCollaborationMode;
- (BOOL)isInReadOnlyMode;
- (BOOL)isObjectInDocument:(id)arg1;
- (BOOL)isPasswordProtected;
- (BOOL)isSupportModified;
- (id)keychainGenericItem;
- (long long)lastObjectIdentifier;
- (long long)modifyObjectTokenForNewObject;
- (BOOL)needsDownload;
- (id)newDocumentResourceDataProvider;
- (long long)newObjectIdentifier;
- (id)newObjectUUIDForObject:(id)arg1;
- (id)objectForIdentifier:(long long)arg1;
- (id)objectLocale;
- (id)objectUUIDMap;
- (id)objectWithUUID:(id)arg1;
- (id)objectWithUUID:(id)arg1 onlyIfLoaded:(BOOL)arg2 validateNewObjects:(BOOL)arg3 identifier:(long long*)arg4;
- (id)objectWithUUIDIfAvailable:(id)arg1;
- (id)objectWithUUIDPath:(id)arg1;
- (id)objectsFromUUIDs:(id)arg1;
- (int)packageType;
- (id)passphraseHint;
- (id)passwordVerifier;
- (void)performAsynchronousWriteOperationOnDocumentState:(id /* block */)arg1;
- (void)performReadOperation:(id /* block */)arg1;
- (void)performReadOperationOnDocumentState:(id /* block */)arg1;
- (void)performReadOperationOnKnownObjects:(id /* block */)arg1;
- (void)performReadUsingAccessor:(id /* block */)arg1;
- (void)performReadUsingAccessorImpl:(id /* block */)arg1;
- (int)preferredPackageType;
- (void)prepareForDocumentReplacement;
- (void)prepareForDocumentReplacementWithSuccess:(BOOL)arg1 forSafeSave:(BOOL)arg2;
- (id)prepareSaveProgress;
- (void)prepareToReadSupportObjectWithDocumentResourceDataProvider:(id)arg1 areExternalDataReferencesAllowed:(BOOL)arg2 accessor:(id /* block */)arg3;
- (void)proxyObjectMapping:(id)arg1 willProxyReferencedObject:(id)arg2;
- (BOOL)readComponent:(id)arg1 isWeakReference:(BOOL)arg2 documentPackage:(id)arg3 supportPackage:(id)arg4 rootObject:(id*)arg5 allObjects:(id*)arg6 error:(id*)arg7;
- (BOOL)readComponent:(id)arg1 isWeakReference:(BOOL)arg2 rootObject:(id*)arg3 allObjects:(id*)arg4 error:(id*)arg5;
- (BOOL)readDocumentObjectFromDatabasePackageURL:(id)arg1 error:(id*)arg2;
- (BOOL)readDocumentObjectFromPackageURL:(id)arg1 error:(id*)arg2;
- (BOOL)readLazyReference:(id)arg1 object:(id*)arg2 error:(id*)arg3;
- (BOOL)readObjectForIdentifier:(long long)arg1 isWeakReference:(BOOL)arg2 rootObjectComponent:(id)arg3 object:(id*)arg4 error:(id*)arg5;
- (id)readObjectIfNeededForIdentifier:(long long)arg1 isWeakReference:(BOOL)arg2 componentIdentifier:(long long)arg3;
- (BOOL)readWithReadCoordinator:(id)arg1 finalizeHandlerQueue:(id)arg2 rootObject:(id*)arg3 error:(id*)arg4 readCompletion:(id /* block */)arg5;
- (void)removeObjectModifyDelegate:(id)arg1;
- (void)replaceDocumentObject:(id)arg1;
- (void)resetDocumentRevision;
- (void)resumeAutosave;
- (void)resumeLoadingModifiedFlushedComponents;
- (BOOL)saveToURL:(id)arg1 packageType:(int)arg2 encryptionKey:(id)arg3 originalURL:(id)arg4 error:(id*)arg5;
- (unsigned long long)saveToken;
- (id)service;
- (BOOL)setDecryptionKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocumentObject:(id)arg1;
- (void)setDocumentObjectContainer:(id)arg1;
- (void)setDocumentRevision:(id)arg1;
- (void)setLastObjectIdentifier:(long long)arg1;
- (BOOL)setPassphrase:(id)arg1;
- (void)setPreferredPackageType:(int)arg1;
- (void)setSupportObject:(id)arg1;
- (void)setSupportObjectContainer:(id)arg1;
- (void)setSupportObjectImpl:(id)arg1;
- (id)supportDirectoryURLReturningIsBundleURL:(BOOL*)arg1;
- (id)supportManager;
- (id)supportMetadata;
- (id)supportObject;
- (id)supportObjectContainer;
- (id)supportPackage;
- (void)suspendAutosave;
- (void)suspendLoadingModifiedFlushedComponentsAndWait;
- (id)temporaryDirectory;
- (BOOL)updateDocumentUUIDPreserveOriginalDocumentSupport:(BOOL)arg1 preserveShareUUID:(BOOL)arg2 error:(id*)arg3;
- (long long)updateModifyObjectToken;
- (id)versionUUID;
- (void)waitForSaveToFinishIfNeeded;
- (void)willModifyObject:(id)arg1 duringReadOperation:(BOOL)arg2;
- (BOOL)writeToURL:(id)arg1 encryptionKey:(id)arg2 error:(id*)arg3;
- (BOOL)writeToURL:(id)arg1 originalPackage:(id)arg2 supportURL:(id)arg3 originalSupportPackage:(id)arg4 encryptionKey:(id)arg5 error:(id*)arg6;

@end
