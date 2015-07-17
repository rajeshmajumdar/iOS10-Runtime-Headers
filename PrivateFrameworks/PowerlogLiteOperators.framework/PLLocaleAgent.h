/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLLocaleAgent : PLAgent {
    PLNSNotificationOperatorComposition * _timeNotifications;
}

@property (retain) PLNSNotificationOperatorComposition *timeNotifications;

+ (id)accountingGroupDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (void)load;
+ (id)railDefinitions;

- (void).cxx_destruct;
- (id)init;
- (void)initOperatorDependancies;
- (void)log;
- (void)logEventForwardTimeZone;
- (void)logEventForwardTimeZoneWithTrigger:(id)arg1;
- (void)setTimeNotifications:(id)arg1;
- (id)timeNotifications;

@end
