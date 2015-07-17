/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineSyncEmergencyTask : CPLEngineSyncTask <NSCoding> {
    CPLEngineLibrary * _readwriteEngineLibrary;
    NSString * _taskIdentifier;
}

@property (retain) <CPLEngineSyncEmergencyTaskDelegate> *delegate;
@property (nonatomic, retain) CPLEngineLibrary *engineLibrary;
@property (nonatomic, readonly) unsigned int priority;

+ (BOOL)shouldCoalesceTasks;
+ (id)taskIdentifier;
+ (id)taskWithEngineLibrary:(id)arg1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)engineLibrary;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned int)priority;
- (void)setEngineLibrary:(id)arg1;
- (BOOL)shouldDiscardOnError;
- (BOOL)shouldStopSyncSession;
- (id)taskIdentifier;

@end
