/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIWeeklyGoalModel : NSObject {
    HKHealthStore * _healthStore;
    BOOL  _showFakeData;
}

- (void).cxx_destruct;
- (void)fetchMostRecentWeeklyGoalWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (void)saveNewWeeklyCalorieGoal:(double)arg1 forDate:(id)arg2;

@end
