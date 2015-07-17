/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKHealthStore : NSObject <HKClientInterface, HKQueryDelegate, _HKActiveWorkoutLifecycleDelegate> {
    id /* block */  _authorizationDelegateTransactionErrorHandler;
    <_HKAuthorizationPresentationController> * _authorizationPresentationController;
    id /* block */  _bluetoothStatusHandler;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSXPCConnection * _connection;
    _HKHealthStoreProxy * _connectionProxy;
    NSMutableDictionary * _discoveries;
    NSMutableSet * _discoveriesEnded;
    NSMutableSet * _queries;
    NSObject<OS_dispatch_queue> * _resourceQueue;
    NSMutableDictionary * _sessions;
    NSMutableSet * _sessionsEnded;
    NSMutableDictionary * _workoutSessionsByUUID;
    NSMutableSet * _workouts;
}

@property (nonatomic, copy) id /* block */ bluetoothStatusHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=_queries, nonatomic, readonly) NSSet *queries;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (BOOL)isHealthDataAvailable;

- (void).cxx_destruct;
- (id /* block */)_actionCompletionOnClientQueue:(id /* block */)arg1;
- (void)_addEndedDiscovery:(id)arg1;
- (void)_addEndedSession:(id)arg1;
- (void)_beginWorkoutWithActivityType:(unsigned int)arg1 startDate:(id)arg2 goalType:(unsigned int)arg3 goal:(id)arg4 metadata:(id)arg5 shouldUseDeviceData:(BOOL)arg6 completion:(id /* block */)arg7;
- (id)_bodyMassCharacteristicQuantityWithError:(id*)arg1;
- (void)_calculateBMRForDate:(id)arg1 useEndOfDay:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)_characteristicForDataType:(id)arg1 error:(id*)arg2;
- (void)_clientQueue_invokeAuthorizationDelegateTransactionErrorHandlerWithError:(id)arg1;
- (void)_closeTransactionWithType:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3;
- (void)_currentValueForQuantityTypeCode:(int)arg1 characteristicTypeCode:(int)arg2 beforeDate:(id)arg3 completion:(id /* block */)arg4;
- (void)_deleteObjects:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleInterruption;
- (void)_hasAnyActiveWorkoutsWithCompletion:(id /* block */)arg1;
- (id)_heightCharacteristicQuantityWithError:(id*)arg1;
- (id)_leanBodyMassCharacteristicQuantityWithError:(id*)arg1;
- (void)_mostRecentQuantityOfType:(id)arg1 beforeDate:(id)arg2 completion:(id /* block */)arg3;
- (id /* block */)_objectCompletionOnClientQueue:(id /* block */)arg1;
- (void)_pauseAllActiveWorkoutsWithCompletion:(id /* block */)arg1;
- (id)_queries;
- (void)_reattachWorkout:(id)arg1 completion:(id /* block */)arg2;
- (id)_remoteObjectProxyWithActionCompletion:(id /* block */)arg1;
- (id)_remoteObjectProxyWithFetchAllCompletion:(id /* block */)arg1;
- (id)_remoteObjectProxyWithObjectCompletion:(id /* block */)arg1;
- (id)_remoteObjectProxyWithSelectCompletion:(id /* block */)arg1;
- (void)_saveActiveWorkout:(id)arg1 withCompletion:(id /* block */)arg2;
- (id /* block */)_selectCompletionOnClientQueue:(id /* block */)arg1;
- (id)_serverProxyForSelector:(SEL)arg1 sanitizedErrorHandler:(id /* block */)arg2;
- (void)_setBackgroundDeliveryFrequencyDataType:(id)arg1 frequency:(int)arg2 withCompletion:(id /* block */)arg3;
- (BOOL)_setBiologicalSex:(int)arg1 error:(id*)arg2;
- (BOOL)_setBloodType:(int)arg1 error:(id*)arg2;
- (BOOL)_setBodyMassCharacteristicQuantity:(id)arg1 error:(id*)arg2;
- (BOOL)_setCharacteristic:(id)arg1 forDataType:(id)arg2 error:(id*)arg3;
- (BOOL)_setDateOfBirth:(id)arg1 error:(id*)arg2;
- (BOOL)_setFitzpatrickSkinType:(int)arg1 error:(id*)arg2;
- (BOOL)_setHeightCharacteristicQuantity:(id)arg1 error:(id*)arg2;
- (BOOL)_setLeanBodyMassCharacteristicQuantity:(id)arg1 error:(id*)arg2;
- (void)_setPreferredUnit:(id)arg1 forType:(id)arg2 completion:(id /* block */)arg3;
- (void)_startHealthServiceExtendedDiscovery:(id)arg1 withHandler:(id /* block */)arg2;
- (void)_throwIfAuthorizationDisallowedForSharing:(BOOL)arg1 types:(id)arg2;
- (void)_weeklySummaryInfoForDate:(id)arg1 completion:(id /* block */)arg2;
- (id)activeHealthServiceDiscoveries;
- (id)activeHealthServiceSessions;
- (void)addHealthServicePairing:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)addSamples:(id)arg1 toWorkout:(id)arg2 completion:(id /* block */)arg3;
- (void)addSourceWithBundleIdentifier:(id)arg1 name:(id)arg2 completion:(id /* block */)arg3;
- (void)allAuthorizationRecordsForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)allAuthorizationRecordsForType:(id)arg1 completion:(id /* block */)arg2;
- (void)allSourcesWithCompletion:(id /* block */)arg1;
- (int)authorizationStatusForType:(id)arg1;
- (void)beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 sourceHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (id)biologicalSexWithError:(id*)arg1;
- (id)bloodTypeWithError:(id*)arg1;
- (id /* block */)bluetoothStatusHandler;
- (void)closeTransactionForType:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3 query:(id)arg4;
- (void)createBluetoothSourceWithBundleIdentifier:(id)arg1 name:(id)arg2 completion:(id /* block */)arg3;
- (void)currentlyPairedWatchIdentifierWithCompletion:(id /* block */)arg1;
- (id)dateOfBirthWithError:(id*)arg1;
- (void)dealloc;
- (void)deleteAllSamplesWithTypes:(id)arg1 sourceBundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteMedicalIDData;
- (void)deleteMedicalIDDataWithCompletion:(id /* block */)arg1;
- (void)deleteObject:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)deleteObjects:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)deleteObjectsOfType:(id)arg1 predicate:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)deleteSourceWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)deliverBluetoothStatus:(int)arg1 withError:(id)arg2;
- (void)deliverDiscoveryHealthService:(id)arg1 toClient:(unsigned int)arg2 finished:(BOOL)arg3 withError:(id)arg4;
- (void)deliverSessionCharacteristics:(id)arg1 forService:(id)arg2 toClient:(unsigned int)arg3 withError:(id)arg4;
- (void)deliverSessionHealthServiceStatus:(int)arg1 toClient:(unsigned int)arg2 finished:(BOOL)arg3 withError:(id)arg4;
- (void)deliverSessionTransitoryData:(id)arg1 toClient:(unsigned int)arg2 withError:(id)arg3;
- (void)deliverWorkoutSessionChangedToState:(int)arg1 fromState:(int)arg2 date:(id)arg3 forSessionUUID:(id)arg4;
- (void)deliverWorkoutSessionError:(id)arg1 forSessionUUID:(id)arg2;
- (void)diagnosticsForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)disableAllBackgroundDeliveryWithCompletion:(id /* block */)arg1;
- (void)disableBackgroundDeliveryForType:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)dropEntitlement:(id)arg1;
- (id)earliestPermittedSampleDate;
- (void)enableBackgroundDeliveryForType:(id)arg1 frequency:(int)arg2 withCompletion:(id /* block */)arg3;
- (void)endAuthorizationDelegateTransactionWithError:(id)arg1;
- (void)endBluetoothStatusUpdates;
- (void)endHealthServiceDiscovery:(id)arg1;
- (void)endHealthServiceSession:(id)arg1;
- (void)executeQuery:(id)arg1;
- (void)fetchAllDevicesWithCompletion:(id /* block */)arg1;
- (void)fetchMedicalIDDataCreateIfNecessary:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (void)fetchMedicalIDDataWithCompletion:(id /* block */)arg1;
- (id)fitzpatrickSkinTypeWithError:(id*)arg1;
- (void)forceNanoSyncWithPullRequest:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)generateFakeDataForActivityType:(int)arg1 minutes:(double)arg2 completion:(id /* block */)arg3;
- (void)getDatabaseUsageInBytesWithCompletion:(id /* block */)arg1;
- (void)getDefaultValueForKey:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getEnabledStatusForPeripheral:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getHealthServiceProperty:(id)arg1 forSession:(id)arg2 withHandler:(id /* block */)arg3;
- (void)handleAuthorizationForExtensionWithCompletion:(id /* block */)arg1;
- (void)hasSourceWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)healthServicePairingsWithHandler:(id /* block */)arg1;
- (void)hkTypesForSource:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithListenerEndpoint:(id)arg1;
- (id)initWithListenerEndpoint:(id)arg1 identifier:(id)arg2;
- (void)invalidateActivityAlertSuppressionForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)orderedSourcesForObjectType:(id)arg1 completion:(id /* block */)arg2;
- (void)performHealthServiceOperation:(id)arg1 onSession:(id)arg2 withParameters:(id)arg3 completion:(id /* block */)arg4;
- (void)performMigrationWithCompletion:(id /* block */)arg1;
- (void)preferredUnitsForQuantityTypes:(id)arg1 completion:(id /* block */)arg2;
- (void)presentAuthorizationWithRequestRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)previousHealthServicePairingsWithHandler:(id /* block */)arg1;
- (void)quantitiesByTypeFromStartDate:(id)arg1 endDate:(id)arg2 handler:(id /* block */)arg3;
- (void)queryDidFinishExecuting:(id)arg1;
- (void)registerKeepAliveWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)registerPeripheralIdentifier:(id)arg1 name:(id)arg2 services:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)removeDefaultForKey:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)removeHealthServicePairing:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 completion:(id /* block */)arg3;
- (void)requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 shouldPrompt:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)resetAuthorizationStatusForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)resetNanoSyncWithCompletion:(id /* block */)arg1;
- (void)restoreEntitlement:(id)arg1;
- (void)saveObject:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)saveObjects:(id)arg1 sourceBundleIdentifier:(id)arg2 sourceVersion:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)saveObjects:(id)arg1 sourceBundleIdentifier:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)saveObjects:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)select:(id)arg1 from:(id)arg2 where:(id)arg3 groupBy:(id)arg4 orderBy:(id)arg5 limit:(int)arg6 completion:(id /* block */)arg7;
- (void)setAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)setBluetoothStatusHandler:(id /* block */)arg1;
- (void)setDefaultValue:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)setEnabledStatus:(BOOL)arg1 forPeripheral:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setOrderedSources:(id)arg1 forObjectType:(id)arg2 completion:(id /* block */)arg3;
- (void)setRequestedAuthorizationForBundleIdentifier:(id)arg1 shareTypes:(id)arg2 readTypes:(id)arg3 prompt:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)splitTotalEnergy:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 resultsHandler:(id /* block */)arg4;
- (void)startAllHealthServicesDiscoveryWithHandler:(id /* block */)arg1;
- (void)startBluetoothStatusUpdates:(id /* block */)arg1;
- (void)startFakingDataWithActivityType:(int)arg1 speed:(id)arg2 completion:(id /* block */)arg3;
- (void)startHealthServiceDiscovery:(id)arg1 withHandler:(id /* block */)arg2;
- (void)startHealthServiceSession:(id)arg1 withHandler:(id /* block */)arg2;
- (void)startRecordingDataToFile:(id)arg1 completion:(id /* block */)arg2;
- (void)startReplayingDataFromFile:(id)arg1 repeat:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)startWorkoutSession:(id)arg1 completion:(id /* block */)arg2;
- (void)stopFakingDataWithCompletion:(id /* block */)arg1;
- (void)stopQuery:(id)arg1;
- (void)stopRecordingDataWithCompletion:(id /* block */)arg1;
- (void)stopReplayingDataWithCompletion:(id /* block */)arg1;
- (void)stopWorkoutSession:(id)arg1 completion:(id /* block */)arg2;
- (void)submitMetricsIgnoringAnchor:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)suppressActivityAlertsForIdentifier:(id)arg1 suppressionReason:(int)arg2 timeoutUntilDate:(id)arg3 completion:(id /* block */)arg4;
- (void)unitPreferencesDidUpdate;
- (void)unregisterKeepAliveWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)unregisterPeripheralIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)updateMedicalIDData:(id)arg1;
- (void)updateMedicalIDData:(id)arg1 completion:(id /* block */)arg2;
- (void)workoutDidComplete:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI

- (id)_sortedSources:(id)arg1;
- (id)createMedicalIDData;
- (id)hk_sourcesForAuthorizationWithSources:(id)arg1;
- (id)hk_sourcesForDevicesWithSources:(id)arg1;

@end
