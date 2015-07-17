/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotification.framework/UserNotification
 */

@interface UNNotificationSchedulerConnectionListener : NSObject <NSXPCListenerDelegate, UNSNotificationSchedulerServerProtocol> {
    NSMapTable * _bundleIdentifiersByConnection;
    NSMutableDictionary * _connectionsByBundleIdentifier;
    NSXPCListener * _listener;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void)_addConnection:(id)arg1 forBundleIdentifier:(id)arg2;
- (BOOL)_isAllowedToScheduleForBundleIdentifier:(id)arg1;
- (void)_localNotificationDidFire:(id)arg1;
- (void)_localNotificationDidSnooze:(id)arg1;
- (void)_localNotificationsDidChange:(id)arg1;
- (void)_queue_addConnection:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)_queue_connectionsForBundleIdentifier:(id)arg1;
- (void)_queue_localNotificationDidFire:(id)arg1;
- (void)_queue_localNotificationDidSnooze:(id)arg1;
- (void)_queue_localNotificationsDidChange:(id)arg1;
- (void)_queue_removeConnection:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_removeConnectionForAllBundleIdentifiers:(id)arg1;
- (void)_removeConnection:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_removeConnectionForAllBundleIdentifiers:(id)arg1;
- (void)addScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)cancelAllScheduledLocalNotificationsForBundleIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)cancelScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)dealloc;
- (id)init;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)scheduleForBundleIdentifier:(id)arg1 fetchRequest:(id)arg2 withResult:(id /* block */)arg3;
- (void)scheduledLocalNotificationsForBundleIdentifier:(id)arg1 withResult:(id /* block */)arg2;
- (void)setObservingScheduledLocalNotifications:(BOOL)arg1 forBundleIdentifier:(id)arg2;
- (void)setScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)snoozeScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(id /* block */)arg3;

@end
