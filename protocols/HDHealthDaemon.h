/* Generated by RuntimeBrowser.
 */

@protocol HDHealthDaemon <NSObject>

@required

- (HDAuthorizationManager *)authorizationManager;
- (HDBackgroundTaskScheduler *)backgroundTaskScheduler;
- (void)beginTransaction:(NSString *)arg1;
- (HDContentProtectionManager *)contentProtectionManager;
- (HDDataProvenanceManager *)dataProvenanceManager;
- (HDDatabasePruningManager *)databasePruningManager;
- (void)didUpdateActiveWorkoutServers;
- (void)endTransaction:(NSString *)arg1;
- (BOOL)hasAnyActiveWorkouts;
- (<HDHealthDataCollectionManager> *)healthDataCollectionManager;
- (<HDHealthDataManager> *)healthDataManager;
- (<HDHealthDatabase> *)healthDatabase;
- (<HDDaemonDeviceManager> *)healthDeviceManager;
- (<HDHealthMetadataManager> *)healthMetadataManager;
- (HDDeviceManager *)healthSourceDeviceManager;
- (HDSourceManager *)healthSourceManager;
- (NSString *)homeDirectoryPath;
- (void)invalidateActivityAlertSuppressionForIdentifier:(NSString *)arg1;
- (BOOL)isAppleWatch;
- (HDNanoSyncManager *)nanoSyncManager;
- (void)pauseAllActiveWorkoutsWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performBlockWithPowerAssertionIdentifier:(void *)arg1 transactionName:(void *)arg2 powerAssertionInterval:(void *)arg3 block:(void *)arg4; // needs 4 arg types, found 8: NSString *, NSString *, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (BOOL)persistAndNotifyDataObject:(HKObject *)arg1 device:(HDDeviceEntity *)arg2 error:(id*)arg3;
- (HDPluginManager *)pluginManager;
- (HDProcessStateManager *)processStateManager;
- (void)registerForDaemonReady:(id <HDHealthDaemonReadyObserver>)arg1;
- (void)registerForLaunchNotification:(const char *)arg1;
- (void)setDataCollectionOptions:(NSDictionary *)arg1 forKey:(NSString *)arg2 type:(HKSampleType *)arg3 clientUUID:(NSUUID *)arg4;
- (void)setPairedWatchBundleIdentifierProvider:(id <HDPairedWatchBundleIdentifierProvider>)arg1;
- (void)setViewOnWakeService:(id <HDViewOnWakeService>)arg1;
- (void)setWorkoutManager:(HDWorkoutManager *)arg1;
- (void)suppressActivityAlertsForIdentifier:(NSString *)arg1 suppressionReason:(int)arg2 timeoutUntilDate:(NSDate *)arg3;
- (<HDSyncEngine> *)syncEngine;
- (void)syncImmediatelyWithReason:(NSString *)arg1;
- (void)terminate;
- (HDUnitPreferencesManager *)unitPreferencesManager;
- (void)unregisterForLaunchNotification:(const char *)arg1;
- (void)updateActivityCacheForNewWorkoutSamples;
- (HDUserCharacteristicsManager *)userCharacteristicsManager;
- (<HDViewOnWakeService> *)viewOnWakeService;
- (HDWorkoutManager *)workoutManager;

@end
