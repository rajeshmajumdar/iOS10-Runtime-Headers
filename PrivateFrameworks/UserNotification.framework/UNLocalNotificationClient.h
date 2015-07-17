/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotification.framework/UserNotification
 */

@interface UNLocalNotificationClient : NSObject <UNLocationMonitorDelegate> {
    NSString * _bundleIdentifier;
    NSArray * _cachedLocalNotifications;
    BKSApplicationDataStore * _dataStore;
    BOOL  _isSystemApplication;
    PCPersistentTimer * _localNotificationTimer;
    NSMutableDictionary * _localNotificationsByMonitoredRegionIdentifier;
    UNLocationMonitor * _locationMonitor;
    BOOL  _monitoringLocaleAndTimeChanges;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _requireLocalNotificationsCachingReasons;
    BOOL  _requiresLocalNotifications;
    BOOL  _uninstalled;
    BOOL  _userNotificationsEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)_beginRequireLocalNotificationsCachingWithReason:(id)arg1;
- (BOOL)_canScheduledLocalNotificationTimers;
- (id)_copyUnexpiredScheduledLocalNotifications;
- (void)_endRequireLocalNotificationsCachingWithReason:(id)arg1;
- (void)_fireNotification:(id)arg1;
- (id)_getLocalNotificationFromBulletin:(id)arg1;
- (void)_invalidateLocalNotificationRegionRegistrations;
- (void)_invalidateLocalNotificationTimers;
- (BOOL)_isLocalNotification:(id)arg1 scheduledToFireAfterDate:(id)arg2;
- (id)_lastLocalNotificationFireDate;
- (void)_purgeCachedLocalNotifications;
- (void)_removeNotificationFromRegionMonitoring:(id)arg1;
- (id)_scheduledLocalNotifications;
- (void)_setLastLocalNotificationFireDate:(id)arg1;
- (void)_setScheduledLocalNotifications:(id)arg1;
- (void)_updateLocalNotificationRegionRegistrations;
- (void)_updateLocalNotificationTimers;
- (BOOL)appIsAuthorizedForRegionMonitoring;
- (void)cancelAllLocalNotifications;
- (void)cancelLocalNotification:(id)arg1;
- (void)cancelLocalNotifications:(id)arg1;
- (void)dealloc;
- (id)fireDatesForLocalNotification:(id)arg1 withFetchRequest:(id)arg2;
- (void)handleLocaleChange;
- (void)handleMemoryWarning;
- (void)handleProcessExit;
- (void)handleSignificantTimeChange;
- (void)handleTriggeredRegion:(id)arg1 didEnter:(BOOL)arg2;
- (void)handleUninstall;
- (id)initWithBundleIdentifier:(id)arg1 isSystemApplication:(BOOL)arg2 requiresLocalNotifications:(BOOL)arg3 userNotificationsEnabled:(BOOL)arg4 queue:(id)arg5;
- (void)invalidateLocalNotificationTimersAndRegionRegistrations;
- (BOOL)isAppRunning;
- (void)localNotificationTimerFired;
- (void)locationMonitor:(id)arg1 didEnterRegion:(id)arg2;
- (void)locationMonitor:(id)arg1 didExitRegion:(id)arg2;
- (id)scheduleForFetchRequest:(id)arg1;
- (void)scheduleLocalNotifications:(id)arg1 replaceExistingNotifications:(BOOL)arg2;
- (void)scheduleSnoozeNotification:(id)arg1;
- (id)scheduledLocalNotifications;
- (void)setUserNotificationsEnabled:(BOOL)arg1;
- (void)snoozeLocalNotification:(id)arg1;
- (void)snoozeLocalNotifications:(id)arg1;
- (id)snoozeNotificationForLocalNotification:(id)arg1;
- (void)triggerLocationArrow;
- (void)updateLocalNotificationTimersAndRegionRegistrations;

@end
