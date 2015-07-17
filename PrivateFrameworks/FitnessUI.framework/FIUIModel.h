/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIModel : NSObject <FIUIAchievementsModelDelegate> {
    FIUIAchievementsModel * _achievementsModel;
    NSObject<OS_dispatch_queue> * _activityCacheQueryClientQueue;
    NSMutableDictionary * _currentActivityQueryClients;
    HKHealthStore * _healthStore;
    NSHashTable * _observers;
    int  _queue_activityCacheQueryRetries;
    HKActivityCache * _queue_currentActivityCacheForClients;
    HKCurrentActivityCacheQuery * _queue_currentActivityCacheQuery;
    NSPredicate * _sourcesPredicate;
    NSObject<OS_dispatch_queue> * _sourcesQueue;
    FIUIWeeklyGoalModel * _weeklyGoalModel;
}

@property (nonatomic, readonly) FIUIAchievementsModel *achievementsModel;
@property (nonatomic, readonly) double arcPercentPerHour;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSPredicate *sourcesPredicate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) FIUIWeeklyGoalModel *weeklyGoalModel;

+ (id)_dailyTotalsQueryFromDate:(id)arg1 toDate:(id)arg2 dataType:(id)arg3 predicate:(id)arg4 sendUpdates:(BOOL)arg5 handler:(id /* block */)arg6;
+ (void)_fakeActiveAndGoalHoursDataWithCompletion:(id /* block */)arg1;
+ (id)_fakeCollectionForDataTypeIdentifier:(id)arg1 unit:(id)arg2;
+ (id)_statisticsCollectionQueryFromDate:(id)arg1 toDate:(id)arg2 intervalSize:(id)arg3 dataType:(id)arg4 predicate:(id)arg5 sendUpdates:(BOOL)arg6 seperateBySource:(BOOL)arg7 handler:(id /* block */)arg8;
+ (id)_unitForDataType:(id)arg1;
+ (id)activeAndIdleAndGoalHoursSampleQueryForDate:(id)arg1 predicate:(id)arg2 needsHourlyChartInfo:(BOOL)arg3 withCompletion:(id /* block */)arg4;
+ (id)activeAndIdleAndGoalHoursSampleQueryFromDate:(id)arg1 toDate:(id)arg2 predicate:(id)arg3 needsHourlyChartInfo:(BOOL)arg4 withCompletion:(id /* block */)arg5;
+ (id)activeAndIdleHoursObserverQueryForDate:(id)arg1 predicate:(id)arg2 withCompletion:(id /* block */)arg3;
+ (id)activeAndIdleHoursObserverQueryFromDate:(id)arg1 toDate:(id)arg2 predicate:(id)arg3 withCompletion:(id /* block */)arg4;
+ (id)activeHourCategoryType;
+ (id)briskActivityQuantityType;
+ (id)briskActivityUnit;
+ (id)calorieQuantityType;
+ (id)calorieUnit;
+ (id)dailyTotalQueryForDate:(id)arg1 dataType:(id)arg2 predicate:(id)arg3 sendUpdates:(BOOL)arg4 handler:(id /* block */)arg5;
+ (id)dailyTotalsQueryFromDate:(id)arg1 toDate:(id)arg2 dataType:(id)arg3 predicate:(id)arg4 sendUpdates:(BOOL)arg5 handler:(id /* block */)arg6;
+ (id)distanceQuantityType;
+ (id)distanceUnit;
+ (id)statisticsCollectionQueryForDate:(id)arg1 intervalSize:(id)arg2 dataType:(id)arg3 predicate:(id)arg4 sendUpdates:(BOOL)arg5 seperateBySource:(BOOL)arg6 handler:(id /* block */)arg7;
+ (id)statisticsCollectionQueryFromDate:(id)arg1 toDate:(id)arg2 intervalSize:(id)arg3 dataType:(id)arg4 predicate:(id)arg5 sendUpdates:(BOOL)arg6 seperateBySource:(BOOL)arg7 handler:(id /* block */)arg8;
+ (id)stepQuantityType;
+ (id)stepUnit;

- (void).cxx_destruct;
- (id)_createCurrentActivityCacheQuery;
- (void)_printStatisticsCollection:(id)arg1;
- (void)_printUpdatedStatistics:(id)arg1;
- (void)_queue_restartCurrentActivityCacheQueryAfterError;
- (void)_sendMessageToObservers:(SEL)arg1 withObject:(id)arg2;
- (void)_sendMessageToObservers:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)_setKnownSources:(id)arg1;
- (void)achievementsDidChangeInModel:(id)arg1;
- (id)achievementsModel;
- (void)addObserver:(id)arg1;
- (double)arcPercentPerHour;
- (void)executeQuery:(id)arg1;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)sourcesPredicate;
- (id)startCurrentActivityCacheQueryWithHandler:(id /* block */)arg1;
- (void)stopCurrentActivityCacheQueryForClientToken:(id)arg1;
- (void)stopQuery:(id)arg1;
- (id)weeklyGoalModel;
- (void)weeklySummaryInfoForDate:(id)arg1 withCompletion:(id /* block */)arg2;

@end
