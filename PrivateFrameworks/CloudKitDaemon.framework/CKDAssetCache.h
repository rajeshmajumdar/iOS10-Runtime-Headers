/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAssetCache : NSObject {
    CKDMMCS * _MMCS;
    NSString * _applicationBundleID;
    NSString * _dbPath;
    CKSQLitePool * _dbPool;
    NSObject<OS_dispatch_source> * _expiryTimer;
    NSString * _fileDownloadPath;
    int  _fileDownloadPathFd;
    BOOL  _isEvictionScheduled;
    BOOL  _isUnitTestingAccount;
    NSString * _packageDownloadPath;
    NSString * _packageUploadPath;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) CKDMMCS *MMCS;
@property (nonatomic, retain) NSString *applicationBundleID;
@property (nonatomic, retain) NSString *dbPath;
@property (nonatomic, readonly) CKSQLitePool *dbPool;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *expiryTimer;
@property (nonatomic, retain) NSString *fileDownloadPath;
@property (nonatomic) int fileDownloadPathFd;
@property BOOL isEvictionScheduled;
@property (nonatomic) BOOL isUnitTestingAccount;
@property (nonatomic, retain) NSString *packageDownloadPath;
@property (nonatomic, retain) NSString *packageUploadPath;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)_sharedCachesByPath;
+ (id)_sharedCachesQueue;
+ (id)assetCacheWithApplicationBundleID:(id)arg1 dbPath:(id)arg2 fileDownloadPath:(id)arg3 packageDownloadPath:(id)arg4 packageUploadPath:(id)arg5 shouldEvictOnCreation:(BOOL)arg6;
+ (int)openFdForDownloadPath:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)MMCS;
- (unsigned long long)_evictDownloadedFilesForced:(BOOL)arg1 evictNow:(BOOL)arg2;
- (unsigned long long)_evictDownloadedFilesWithDatabase:(id)arg1 forced:(BOOL)arg2 evictNow:(BOOL)arg3;
- (unsigned long long)_evictFilesForced:(BOOL)arg1 evictNow:(BOOL)arg2;
- (unsigned long long)_evictPackagesForced:(BOOL)arg1 evictNow:(BOOL)arg2;
- (void)_expireAssetHandlesWithCompletionBlock:(id /* block */)arg1;
- (void)_expireAssetHandlesWithExpiryDate:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)_getAssetHandlesForDownloadedMMCSItems:(id)arg1 error:(id*)arg2;
- (id)_saveData:(id)arg1 error:(id*)arg2;
- (void)_scheduleEvictionForDownloadedFiles;
- (void)_scheduleExpirationForAssetHandles;
- (void)_unregisterItemIDs:(id)arg1;
- (id)applicationBundleID;
- (void)cancelExpiryTimer;
- (unsigned long long)clearForced:(BOOL)arg1;
- (id)dbPath;
- (id)dbPool;
- (void)dealloc;
- (unsigned long long)evictAllFilesForced:(BOOL)arg1;
- (void)expireAssetHandlesIfNecessary;
- (id)expiryTimer;
- (id)fileDownloadPath;
- (int)fileDownloadPathFd;
- (id)findAssetHandleForItemID:(unsigned long long)arg1 error:(id*)arg2;
- (id)initWithApplicationBundleID:(id)arg1 dbPath:(id)arg2 fileDownloadPath:(id)arg3 packageDownloadPath:(id)arg4 packageUploadPath:(id)arg5;
- (BOOL)isEvictionScheduled;
- (BOOL)isUnitTestingAccount;
- (id)packageDownloadPath;
- (id)packageUploadPath;
- (unsigned long long)predictedEvictedSizeForAllFilesForced:(BOOL)arg1;
- (id)queue;
- (void)scheduleAssetHandleDeletionForItemID:(unsigned long long)arg1 UUID:(id)arg2;
- (void)scheduleAssetHandleLastUsedTimeUpdateForUUID:(id)arg1;
- (void)setApplicationBundleID:(id)arg1;
- (void)setDbPath:(id)arg1;
- (void)setExpiryTimer:(id)arg1;
- (void)setFileDownloadPath:(id)arg1;
- (void)setFileDownloadPathFd:(int)arg1;
- (void)setIsEvictionScheduled:(BOOL)arg1;
- (void)setIsUnitTestingAccount:(BOOL)arg1;
- (void)setMMCS:(id)arg1;
- (void)setPackageDownloadPath:(id)arg1;
- (void)setPackageUploadPath:(id)arg1;
- (void)setQueue:(id)arg1;
- (BOOL)startTrackingAssetHandles:(id)arg1 error:(id*)arg2;
- (void)stopTrackingAssetHandlesByItemIDs:(id)arg1;
- (id)trackDownloadedData:(id)arg1 signature:(id)arg2 error:(id*)arg3;
- (id)trackDownloadedMMCSItems:(id)arg1 error:(id*)arg2;

@end
