/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDEventTrigger : HMDTrigger <HMDLocationDelegate> {
    NSMutableArray * _characteristicEvents;
    HMDCharacteristic * _characteristicForCondition;
    id  _characteristicValueForCondition;
    NSPredicate * _evaluationCondition;
    NSMutableArray * _locationEvents;
}

@property (nonatomic, retain) NSMutableArray *characteristicEvents;
@property (nonatomic) HMDCharacteristic *characteristicForCondition;
@property (nonatomic, retain) id characteristicValueForCondition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSPredicate *evaluationCondition;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSMutableArray *locationEvents;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activateCharacteristicEvents:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)_activateLocationEvents:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)_compareEventValue:(id)arg1 withCharacteristic:(id)arg2;
- (void)_evaluateFiringTrigger;
- (void)_handleAccessoryCharacteristicsChangedNotification:(id)arg1;
- (void)_handleAddEventToEventTrigger:(id)arg1;
- (void)_handleLocationAuthorization:(int)arg1;
- (void)_handleLocationAuthorizationMessage:(id)arg1;
- (void)_handleRemoveEventsFromEventTrigger:(id)arg1;
- (void)_handleRetrieveLocationEventForEventTrigger:(id)arg1;
- (void)_handleUpdateEventForEventTrigger:(id)arg1;
- (void)_handleUpdateEventTriggerCondition:(id)arg1;
- (void)_reevaluateIfRelaunchRequired:(BOOL)arg1;
- (void)_registerForMessages;
- (id)_rewritePredicate:(id)arg1;
- (void)_saveChanges:(id)arg1;
- (void)_sortEvents:(id)arg1;
- (void)activate:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (id)addDeltaToNow:(id)arg1;
- (id)characteristic;
- (id)characteristicEvents;
- (id)characteristicForCondition;
- (id)characteristicValue;
- (id)characteristicValueForCondition;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;
- (id)dateTodayMatchingComponents:(id)arg1;
- (void)didDetermineState:(int)arg1 forRegion:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)evaluationCondition;
- (void)executeTriggerAfterEvaluatingCondition:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 events:(id)arg2 evaluationCondition:(id)arg3;
- (void)invalidate;
- (id)locationEvents;
- (void)sendTriggerFiredNotification:(id)arg1;
- (void)setCharacteristicEvents:(id)arg1;
- (void)setCharacteristicForCondition:(id)arg1;
- (void)setCharacteristicValueForCondition:(id)arg1;
- (void)setLocationEvents:(id)arg1;
- (BOOL)shouldEncodeLastFireDate:(id)arg1;
- (id)sunrise;
- (id)sunset;

@end
