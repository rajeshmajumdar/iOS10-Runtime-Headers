/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLGatekeeperClient : NSObject {
    NSArray * _previewAssetLocalIdentifiers;
    NSArray * _previewRenderedContentURLs;
    NSObject<OS_dispatch_queue> * _serialReplyQueue;
    NSObject<OS_xpc_object> * connection;
}

@property (nonatomic) NSObject<OS_xpc_object> *connection;
@property (nonatomic, retain) NSArray *previewAssetLocalIdentifiers;
@property (nonatomic, readonly) unsigned int previewRenderedContentURLCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *replyQueue;

+ (id)securityPolicyErrorForMissingEntitlement:(id)arg1;
+ (id)sharedInstance;

- (void)addAssetWithURL:(id)arg1 toAlbumWithUUID:(id)arg2 handler:(id /* block */)arg3;
- (void)addGroupWithName:(id)arg1 handler:(id /* block */)arg2;
- (void)addLogMark:(id)arg1;
- (id)allMomentsMetadataWithOutputPath:(id)arg1;
- (void)analyzeAllMoments;
- (void)analyzeMomentID:(id)arg1;
- (void)analyzeMomentListID:(id)arg1;
- (unsigned long long)attemptToPurgeSharedAssetsExceptForRecentlyViewedAssets;
- (unsigned long long)attemptToPurgeSharedAssetsSpace:(unsigned long long)arg1;
- (void)automaticallyDeleteEmptyAlbum:(id)arg1;
- (void)batchSaveAssetsWithJobDictionaries:(id)arg1 handler:(id /* block */)arg2;
- (id)cacheDeleteDebug:(id)arg1;
- (void)cancelCPLDownloadImageDataWithVirtualTaskIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelCPLDownloadWithContext:(id)arg1;
- (void)cleanupForStoreDemoMode;
- (void)cleanupModelAfteriTunesRestore;
- (void)clearAllBulletinsWithLastClearedRecordID:(unsigned int)arg1;
- (void)clearChangeStore;
- (void)clearUserInfluencedMoments;
- (void)computeFingerPrintsOfAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)connection;
- (void)createPhotoLibraryDatabase;
- (void)createPhotostreamAlbumWithStreamID:(id)arg1;
- (void)dataMigrationWillFinish;
- (void)dealloc;
- (void)deleteAssetWithURL:(id)arg1 handler:(id /* block */)arg2;
- (id)deviceSpecificReplyQueue;
- (id)dictionaryWithContentsOfMediaFilePath:(id)arg1;
- (void)downloadAsset:(id)arg1 requestThumbnail:(BOOL)arg2 shouldPrioritize:(BOOL)arg3 shouldExtendTimer:(BOOL)arg4;
- (void)downloadCloudPhotoLibraryAsset:(id)arg1 resourceType:(unsigned int)arg2 highPriority:(BOOL)arg3;
- (void)downloadCloudPhotoLibraryAsset:(id)arg1 resourceType:(unsigned int)arg2 highPriority:(BOOL)arg3 trackCPLDownload:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)dropSearchIndexWithCompletion:(id /* block */)arg1;
- (void)dumpCloudPhotosStatusIncludingDaemon:(BOOL)arg1;
- (id)dumpMetadataForMomentsWithOutputPath:(id)arg1;
- (id)emailAddressForKey:(int)arg1;
- (void)enableCloudPhotos:(BOOL)arg1;
- (void)enablePhotostreamsWithStreamID:(id)arg1;
- (long long)estimatedOutputFileLengthForVideoURL:(id)arg1 fallbackFilePath:(id)arg2 exportPreset:(id)arg3 exportProperties:(id)arg4;
- (int)fileDescriptorForAssetURL:(id)arg1;
- (int)fileDescriptorForAssetURL:(id)arg1 withAdjustments:(BOOL)arg2 outFileExtension:(id*)arg3;
- (id)fileURLForAssetURL:(id)arg1 withAdjustments:(BOOL)arg2;
- (id)fileURLForNewAssetWithType:(unsigned int)arg1 extension:(id)arg2;
- (void)finalizeOTARestoreRecreatingAlbums:(BOOL)arg1;
- (void)getCPLRemainingUploadCountsWithHandler:(id /* block */)arg1;
- (id)getCPLState;
- (int)getCurrentApplicationBadgeCount;
- (id)getCurrentBulletins;
- (int)getCurrentModelVersion;
- (id)getKeywordsForAssetWithUUID:(id)arg1;
- (void)getLibrarySizes:(id /* block */)arg1;
- (void)getPhotosAndVideosCountWithHandler:(id /* block */)arg1;
- (id)getPhotosXPCEndpoint;
- (void)getSandboxExtensionForPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getSearchIndexProgress:(id /* block */)arg1;
- (id)getStatus;
- (id)getThumbnailImageDataForBulletinWithRecordID:(unsigned int)arg1;
- (BOOL)hasCompletedMomentAnalysis;
- (BOOL)hasCompletedRestorePostProcessing;
- (id)imageDataForAsset:(id)arg1 format:(int)arg2 allowPlaceholder:(BOOL)arg3 wantURLOnly:(BOOL)arg4 networkAccessAllowed:(BOOL)arg5 trackCPLDownload:(BOOL)arg6 outImageDataInfo:(id*)arg7 outCPLDownloadContext:(id*)arg8;
- (void)importFileSystemAssetsWaitingForReply:(BOOL)arg1;
- (id)incompleteRestoreProcesses;
- (id)init;
- (BOOL)isReadyForCloudPhotoLibrary;
- (int)keyForEmailAddress:(id)arg1;
- (void)launchAssetsd;
- (void)pauseCloudPhotos;
- (id)personInfoDictionaryForPersonID:(id)arg1;
- (void)prepareRevertToOriginalForAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)previewAssetLocalIdentifiers;
- (id)previewRenderedContentURLAtIndex:(unsigned int)arg1;
- (unsigned int)previewRenderedContentURLCount;
- (void)privateDownloadCloudPhotoLibraryAsset:(id)arg1 resourceType:(unsigned int)arg2 highPriority:(BOOL)arg3;
- (unsigned long long)purgeableSharedAssetsSpace;
- (void)rebuildAllThumbnails;
- (void)rebuildCloudFeed;
- (void)rebuildMomentLists;
- (void)rebuildMomentsIncremental:(BOOL)arg1;
- (void)recoverFromCrashIfNeeded;
- (void)reloadMomentGenerationOptions;
- (void)removeLocalDuplicates;
- (void)repairPotentialModelCorruption;
- (void)repairSingletonObjects;
- (id)replyQueue;
- (void)requestAccessWithHandler:(id /* block */)arg1;
- (void)requestAdjustmentDataForAsset:(id)arg1 withDataBlob:(BOOL)arg2 networkAccessAllowed:(BOOL)arg3 trackCPLDownload:(BOOL)arg4 handler:(id /* block */)arg5;
- (void)requestCPLDownloadImageDataForAssets:(id)arg1 format:(int)arg2 doneTokens:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)requestImageDataForAsset:(id)arg1 format:(int)arg2 allowPlaceholder:(BOOL)arg3 wantURLOnly:(BOOL)arg4 networkAccessAllowed:(BOOL)arg5 trackCPLDownload:(BOOL)arg6 handler:(id /* block */)arg7;
- (void)requestMasterThumbnailForAssetUUID:(id)arg1 handler:(id /* block */)arg2;
- (void)requestVideoURLForAsset:(id)arg1 format:(int)arg2 networkAccessAllowed:(BOOL)arg3 streamingAllowed:(BOOL)arg4 trackCPLDownload:(BOOL)arg5 handler:(id /* block */)arg6;
- (void)resetDupesAnalysis;
- (void)revertToOriginalForAsset:(id)arg1;
- (void)runPeriodicMaintenanceTasks;
- (id)sandboxExtensionForAssetResourcePath:(id)arg1;
- (void)saveAssetWithJobDictionary:(id)arg1 handler:(id /* block */)arg2 imageSurface:(struct __IOSurface { }*)arg3 previewImageSurface:(struct __IOSurface { }*)arg4;
- (unsigned int)secondsNeededToCleanupModelAfteriTunesRestore;
- (void)sendDaemonJob:(id)arg1 replyHandler:(id /* block */)arg2;
- (id)sendQueue;
- (void)setConnection:(id)arg1;
- (void)setExternalUsageIntent:(unsigned int)arg1 forAssetWithURL:(id)arg2 handler:(id /* block */)arg3;
- (BOOL)setKeywords:(id)arg1 forAssetWithUUID:(id)arg2;
- (void)setLargePreviewImageForAssetWithURL:(id)arg1 imageData:(id)arg2 properties:(id)arg3 handler:(id /* block */)arg4;
- (void)setPersonInfoDictionary:(id)arg1 forPersonID:(id)arg2;
- (void)setPhotosXPCEndpointForEndpoint:(id)arg1;
- (void)setPreviewAssetLocalIdentifiers:(id)arg1;
- (void)setPreviewRenderedContentURLs:(id)arg1;
- (void)setSearchIndexPaused:(BOOL)arg1 synchronously:(BOOL)arg2 reason:(id)arg3;
- (void)softResetSyncStatusWithCompletionHandler:(id /* block */)arg1;
- (void)syncWithCloudPhotoLibrary;
- (void)takeStatisticsSnapshotSinceDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)unloadImageFilesForAsset:(id)arg1 minimumFormat:(int)arg2 completionHandler:(id /* block */)arg3;
- (void)unpauseCloudPhotos;
- (void)updateCameraPreviewWellImage:(id)arg1;
- (void)updateLocationDataForAssetUUID:(id)arg1;
- (void)updateModelAfterOTARestore;
- (void)updateRestoredAssetWithUUID:(id)arg1 paths:(id)arg2;
- (void)updateSharedAlbumsCachedServerConfigurationLimits;
- (void)updateStatusOfCPLDownloadWithContext:(id)arg1;
- (void)updateThumbnailsForPhotos:(id)arg1 waitForReply:(BOOL)arg2 assignNewIndex:(BOOL)arg3 forceRefresh:(BOOL)arg4;
- (void)waitForSearchIndexExistence;
- (void)waitUntilConnectionSendsAllMessages;
- (void)writeDataInBackground:(id)arg1 toFileURL:(id)arg2;

@end
