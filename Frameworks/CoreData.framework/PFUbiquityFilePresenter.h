/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSOperationQueue, NSObject<OS_dispatch_queue>, NSMutableArray, PFUbiquityLocation, NSString, NSURL, NSMutableDictionary, NSDictionary;

@interface PFUbiquityFilePresenter : NSObject <NSFilePresenter> {
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_localPeerID;
    NSURL *_presentedItemURL;
    NSObject<OS_dispatch_queue> *_processingQueue;
    BOOL _scheduledProcessingBlock;
    NSMutableArray *_pendingURLs;
    int _pendingURLsLock;
    NSMutableDictionary *_locationToSafeSaveFile;
    NSMutableDictionary *_locationToStatus;
}

@property(readonly) PFUbiquityLocation * ubiquityRootLocation;
@property(readonly) NSString * localPeerID;
@property(readonly) NSURL * presentedItemURL;
@property(readonly) NSOperationQueue * presentedItemOperationQueue;
@property(readonly) NSDictionary * locationToStatus;
@property(readonly) NSDictionary * locationToSafeSaveFile;
@property(readonly) NSURL * primaryPresentedItemURL;

+ (void)registerInitialSyncHandlerForURL:(id)arg1 onQueue:(id)arg2 withBlock:(id)arg3;
+ (id)sharedPrivateOperationQueue;
+ (void)startDownloadForItems:(id)arg1 onQueue:(id)arg2 withBlock:(id)arg3;
+ (void)initialize;

- (id)locationToSafeSaveFile;
- (id)locationToStatus;
- (void)unregisterSafeSaveFile:(id)arg1;
- (void)registerSafeSaveFile:(id)arg1;
- (void)exporterDidMoveLog:(id)arg1;
- (id)initWithUbiquityRootLocation:(id)arg1 localPeerID:(id)arg2 processingQueue:(id)arg3;
- (id)retainedStatusForLocation:(id)arg1;
- (void)processPendingURLs;
- (void)printStatus:(id)arg1;
- (void)setupAssistantDiscoveredPathsFromMetadataQuery:(id)arg1;
- (void)logsWereScheduled:(id)arg1;
- (void)logImportWasCancelled:(id)arg1;
- (void)logWasImported:(id)arg1;
- (void)logWasExported:(id)arg1;
- (id)ubiquityRootLocation;
- (id)localPeerID;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)presentedSubitemUbiquityDidChangeAtURL:(id)arg1;
- (id)presentedItemOperationQueue;
- (void)presentedSubitemDidChangeAtURL:(id)arg1;
- (void)relinquishPresentedItemToWriter:(id)arg1;
- (void)relinquishPresentedItemToReader:(id)arg1;
- (id)presentedItemURL;

@end