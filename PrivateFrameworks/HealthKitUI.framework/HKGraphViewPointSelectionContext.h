/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKGraphViewPointSelectionContext : NSObject {
    NSDateComponents * _pointIntervalComponents;
    HKValueRange * _selectedPointDateRange;
    NSNumber * _selectedPointXValue;
    HKGraphSeries * _selectedSeries;
    id  _userInfo;
}

@property (nonatomic, retain) NSDateComponents *pointIntervalComponents;
@property (nonatomic, retain) HKValueRange *selectedPointDateRange;
@property (nonatomic, retain) NSNumber *selectedPointXValue;
@property (nonatomic, retain) HKGraphSeries *selectedSeries;
@property (nonatomic, retain) id userInfo;

- (void).cxx_destruct;
- (id)pointIntervalComponents;
- (id)selectedPointDateRange;
- (id)selectedPointXValue;
- (id)selectedSeries;
- (void)setPointIntervalComponents:(id)arg1;
- (void)setSelectedPointDateRange:(id)arg1;
- (void)setSelectedPointXValue:(id)arg1;
- (void)setSelectedSeries:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
