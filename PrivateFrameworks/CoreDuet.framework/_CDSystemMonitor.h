/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDSystemMonitor : NSObject {
    unsigned int  _chargingState;
    BOOL  _inBatterySaverMode;
    unsigned int  _memState;
    NSString * _powerSource;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned int  _thermalState;
    BOOL  _userInactive;
    NSObject<OS_dispatch_source> * memPressureMonitor;
    NSObject<OS_dispatch_source> * psChangeDispatch;
    BOOL  psChangeTimerDispatched;
    NSMutableArray * registrations;
}

@property (nonatomic) unsigned int chargingState;
@property (nonatomic) BOOL inBatterySaverMode;
@property (nonatomic) unsigned int memState;
@property (nonatomic, retain) NSString *powerSource;
@property (nonatomic) unsigned int thermalState;
@property (nonatomic) BOOL userInactive;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (unsigned int)chargingState;
- (void)checkMemoryState;
- (BOOL)deRegisterHandler:(id)arg1;
- (void)handleBatterySaverNotification:(unsigned long long)arg1;
- (void)handlePowerSourceNotification;
- (void)handleThermalNotification:(unsigned long long)arg1;
- (void)handleUserActivityNotification:(unsigned long long)arg1;
- (BOOL)inBatterySaverMode;
- (id)init;
- (unsigned int)memState;
- (void)notifyPsChange;
- (id)powerSource;
- (void)registerForNotifications;
- (void)registerForPredicate:(id)arg1 withHandler:(id /* block */)arg2;
- (id)registerHandler:(id /* block */)arg1 onQueue:(id)arg2;
- (void)sendNotification:(unsigned int)arg1;
- (void)setChargingState:(unsigned int)arg1;
- (void)setInBatterySaverMode:(BOOL)arg1;
- (void)setMemState:(unsigned int)arg1;
- (void)setPowerSource:(id)arg1;
- (void)setThermalState:(unsigned int)arg1;
- (void)setUserInactive:(BOOL)arg1;
- (unsigned int)thermalState;
- (BOOL)userInactive;

@end
