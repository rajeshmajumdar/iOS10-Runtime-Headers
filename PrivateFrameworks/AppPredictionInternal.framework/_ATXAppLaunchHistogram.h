/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppLaunchHistogram : NSObject <NSSecureCoding> {
    NSObject<OS_dispatch_queue> * _bundleIdQueue;
    NSMutableDictionary * _bundleIdToEventId;
    NSMutableDictionary * _eventIdToBundleId;
    _ATXTimeHistogram * _histogram;
    NSObject<OS_dispatch_queue> * _histogramQueue;
    double  _launchThreshold;
    unsigned int  _maxEventId;
    NSDictionary * _parameters;
    int  _secondsPerLocaltimeInterval;
}

+ (id)sharedInstance;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)_eventIdforBundleId:(id)arg1;
- (unsigned short)_localTimeWithDate:(id)arg1;
- (void)addLaunchWithBundleId:(id)arg1 withDate:(id)arg2;
- (BOOL)bundleHasBeenLaunched:(id)arg1;
- (void)decayByFactor:(double)arg1;
- (void)decayWithHalfLife:(double)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeHistogram:(id)arg1;
- (id)initWithTimeHistogram:(id)arg1 bundleIdToEventId:(id)arg2 eventIdToBundleId:(id)arg3 maxEventId:(unsigned int)arg4;
- (double)launchPopularityWithBundleId:(id)arg1 date:(id)arg2;
- (double)overallLaunchPopularityForBundleId:(id)arg1;
- (double)relativeLaunchPopularityWithBundleId:(id)arg1 date:(id)arg2;
- (BOOL)removeAllHistoryForBundleId:(id)arg1;
- (void)removeLaunchWithBundleId:(id)arg1 withDate:(id)arg2;
- (void)removeMappingForBundleId:(id)arg1;
- (void)resetData;
- (double)smoothRatio:(double)arg1 denom:(double)arg2;
- (void)verifyDataIntegrity;

@end
