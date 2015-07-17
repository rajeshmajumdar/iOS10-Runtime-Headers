/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMHome : NSObject <HMMessageReceiver, HMObjectMerge, NSSecureCoding, _HMLocationHandlerDelegate> {
    BOOL  _adminUser;
    NSObject<OS_dispatch_queue> * _clientQueue;
    BOOL  _cloudRelayEnabled;
    BOOL  _cloudRelaySupported;
    HMThreadSafeMutableArrayCollection * _currentAccessories;
    HMThreadSafeMutableArrayCollection * _currentActionSets;
    HMThreadSafeMutableArrayCollection * _currentActions;
    HMThreadSafeMutableArrayCollection * _currentOutgoingInvitations;
    HMThreadSafeMutableArrayCollection * _currentResidentDevices;
    HMThreadSafeMutableArrayCollection * _currentRooms;
    HMThreadSafeMutableArrayCollection * _currentServiceGroups;
    HMThreadSafeMutableArrayCollection * _currentTriggers;
    HMUser * _currentUser;
    HMThreadSafeMutableArrayCollection * _currentUsers;
    HMThreadSafeMutableArrayCollection * _currentZones;
    <HMHomeDelegate> * _delegate;
    HMDelegateCaller * _delegateCaller;
    HMRoom * _homeAsRoom;
    CLLocation * _homeLocation;
    HMHomeManager * _homeManager;
    int  _locationAuthorization;
    HMMessageDispatcher * _msgDispatcher;
    NSString * _name;
    HMPendingRequests * _pendingRequests;
    BOOL  _primary;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMSetupViewController * _setupViewController;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (nonatomic, readonly, copy) NSArray *accessories;
@property (nonatomic, readonly, copy) NSArray *actionSets;
@property (getter=isAdminUser, nonatomic) BOOL adminUser;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (getter=isCloudRelayEnabled, nonatomic) BOOL cloudRelayEnabled;
@property (getter=isCloudRelaySupported, nonatomic) BOOL cloudRelaySupported;
@property (nonatomic, retain) HMThreadSafeMutableArrayCollection *currentAccessories;
@property (nonatomic, retain) HMThreadSafeMutableArrayCollection *currentActionSets;
@property (nonatomic, retain) HMThreadSafeMutableArrayCollection *currentActions;
@property (nonatomic, retain) HMThreadSafeMutableArrayCollection *currentOutgoingInvitations;
@property (nonatomic, retain) HMThreadSafeMutableArrayCollection *currentResidentDevices;
@property (nonatomic, retain) HMThreadSafeMutableArrayCollection *currentRooms;
@property (nonatomic, retain) HMThreadSafeMutableArrayCollection *currentServiceGroups;
@property (nonatomic, retain) HMThreadSafeMutableArrayCollection *currentTriggers;
@property (nonatomic, readonly) HMUser *currentUser;
@property (nonatomic, retain) HMUser *currentUser;
@property (nonatomic, retain) HMThreadSafeMutableArrayCollection *currentUsers;
@property (nonatomic, retain) HMThreadSafeMutableArrayCollection *currentZones;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMHomeDelegate> *delegate;
@property (nonatomic, retain) HMDelegateCaller *delegateCaller;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) HMRoom *homeAsRoom;
@property (nonatomic, retain) CLLocation *homeLocation;
@property (nonatomic) HMHomeManager *homeManager;
@property (nonatomic) int locationAuthorization;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMMessageDispatcher *msgDispatcher;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) HMPendingRequests *pendingRequests;
@property (getter=isPrimary, nonatomic) BOOL primary;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly, copy) NSArray *rooms;
@property (nonatomic, readonly, copy) NSArray *serviceGroups;
@property (nonatomic) HMSetupViewController *setupViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *triggers;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly, copy) NSArray *users;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly, copy) NSArray *zones;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_acceptInvitation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_addAccessory:(id)arg1 password:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_addActionSetWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_addIdentifier:(id)arg1 bridgeUUID:(id)arg2;
- (void)_addRegularUsersWithIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_addRoomWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_addServiceGroupWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_addTrigger:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_addTrigger:(id)arg1 triggerUUID:(id)arg2 message:(id)arg3;
- (void)_addUser:(id)arg1 privilege:(unsigned int)arg2 confirmWithLocalUser:(BOOL)arg3 confirmWithRemoteUser:(BOOL)arg4 completionHandler:(id /* block */)arg5;
- (void)_addUser:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_addUserWithCompletionHandler:(id /* block */)arg1;
- (void)_addUserWithoutConfirmation:(id)arg1 privilege:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)_addUsersWithCompletionHandler:(id /* block */)arg1;
- (void)_addZoneWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_assignAccessory:(id)arg1 toRoom:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_cancelInvitation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_cancelPairingForAccessoryWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_configure:(id)arg1 primary:(BOOL)arg2 messageDispatcher:(id)arg3 pendingRequests:(id)arg4 delegateCaller:(id)arg5;
- (void)_continuePairingForAccessoryWithUUID:(id)arg1 setupCode:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_createFailedAccessoriesListFromError:(id)arg1;
- (void)_enableCloudRelay:(BOOL)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_executeActionSet:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_handleAccessoryAddedNotification:(id)arg1;
- (void)_handleAccessoryRemovedNotification:(id)arg1;
- (void)_handleActionSetAddedNotification:(id)arg1;
- (void)_handleActionSetRemovedNotification:(id)arg1;
- (void)_handleBlockedStateNotification:(id)arg1;
- (void)_handleCloudRelayEnableUpdatedNotification:(id)arg1;
- (void)_handleCloudRelaySupportUpdatedNotification:(id)arg1;
- (void)_handleConfigurationStateChangedNotification:(id)arg1;
- (void)_handleDiscoveredNewResidentDevice:(id)arg1;
- (void)_handleEventTriggerAddedNotification:(id)arg1;
- (void)_handleHomeLocationUpdateNotificaton:(id)arg1;
- (void)_handleHomeRenamedNotification:(id)arg1;
- (void)_handleMultipleCharacteristicValuesUpdated:(id)arg1;
- (void)_handlePairedAccessoryErrorNotification:(id)arg1;
- (void)_handleRequestAccessorySetupCodeRequestKey:(id)arg1;
- (void)_handleRoomAddedNotification:(id)arg1;
- (void)_handleRoomRemovedNotification:(id)arg1;
- (void)_handleServiceGroupAddedNotification:(id)arg1;
- (void)_handleServiceGroupRemovedNotification:(id)arg1;
- (void)_handleTimerTriggerAddedNotification:(id)arg1;
- (void)_handleTriggerRemovedNotification:(id)arg1;
- (void)_handleUserAddedNotification:(id)arg1;
- (void)_handleUserInvitationsUpdatedNotification:(id)arg1;
- (void)_handleUserRemovedNotification:(id)arg1;
- (void)_handleZoneAddedNotification:(id)arg1;
- (void)_handleZoneRemovedNotification:(id)arg1;
- (void)_invalidate;
- (void)_inviteUsers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_manageUsersWithCompletionHandler:(id /* block */)arg1;
- (unsigned int)_mergeCurrentHomeAccessoriesWithNewHomeAccessories:(id)arg1 operations:(id)arg2;
- (unsigned int)_mergeCurrentHomeActionSetsWithNewHomeActionSets:(id)arg1 operations:(id)arg2;
- (unsigned int)_mergeCurrentHomeInvitationsWithNewHomeInvitations:(id)arg1 operations:(id)arg2;
- (unsigned int)_mergeCurrentHomeResidentDevicesWithNewHomeResidentDevices:(id)arg1 operations:(id)arg2;
- (unsigned int)_mergeCurrentHomeRoomsWithNewHomeRooms:(id)arg1 operations:(id)arg2;
- (unsigned int)_mergeCurrentHomeServiceGroupsWithNewHomeServiceGroups:(id)arg1 operations:(id)arg2;
- (unsigned int)_mergeCurrentHomeTriggersWithNewHomeTriggers:(id)arg1 operations:(id)arg2;
- (unsigned int)_mergeCurrentHomeUsersWithNewHomeUsers:(id)arg1 operations:(id)arg2;
- (unsigned int)_mergeCurrentHomeZonesWithNewHomeZones:(id)arg1 operations:(id)arg2;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)_privateDelegate;
- (void)_readCharacteristicValues:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_registerNotificationHandlers;
- (void)_removeAccessory:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_removeActionSet:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_removeIdentifier:(id)arg1 bridgeUUID:(id)arg2;
- (void)_removeRoom:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_removeServiceGroup:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_removeServices:(id)arg1;
- (void)_removeTrigger:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_removeUser:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_removeUser:(id)arg1 confirm:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (void)_removeUserWithoutConfirmation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_removeZone:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_retrieveLocation;
- (void)_setupBuiltinActionSets:(id)arg1;
- (void)_unblockAccessory:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_unconfigureHome;
- (void)_updateConfigurationState:(unsigned int)arg1 forResident:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_updateInvitation:(id)arg1 invitationState:(int)arg2 completionHandler:(id /* block */)arg3;
- (void)_updateLocation:(id)arg1;
- (void)_updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_writeCharacteristicValues:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)accessories;
- (id)accessoryWithUUID:(id)arg1;
- (id)actionSetWithName:(id)arg1;
- (id)actionSetWithUUID:(id)arg1;
- (id)actionSets;
- (void)addAccessory:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addAccessory:(id)arg1 password:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)addActionSetWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addRoomWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addServiceGroupWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addTrigger:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addUser:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)addUserWithCompletionHandler:(id /* block */)arg1;
- (void)addUserWithoutConfirmation:(id)arg1 privilege:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)addUsersWithCompletionHandler:(id /* block */)arg1;
- (void)addZoneWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)administrator;
- (void)assignAccessory:(id)arg1 toRoom:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)builtinActionSetOfType:(id)arg1;
- (void)cancelPairingForAccessoryWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)clientQueue;
- (void)configure:(id)arg1 primary:(BOOL)arg2 messageDispatcher:(id)arg3 pendingRequests:(id)arg4 delegateCaller:(id)arg5;
- (void)configure:(id)arg1 primary:(BOOL)arg2 messageDispatcher:(id)arg3 pendingRequests:(id)arg4 delegateCaller:(id)arg5 isAdminUser:(BOOL)arg6;
- (void)continuePairingForAccessoryWithUUID:(id)arg1 setupCode:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)currentAccessories;
- (id)currentActionSets;
- (id)currentActions;
- (id)currentOutgoingInvitations;
- (id)currentResidentDevices;
- (id)currentRooms;
- (id)currentServiceGroups;
- (id)currentTriggers;
- (id)currentUser;
- (id)currentUsers;
- (id)currentZones;
- (void)dealloc;
- (id)delegate;
- (id)delegateCaller;
- (id)description;
- (void)didUpdateAuthorization:(int)arg1;
- (void)enableCloudRelay:(BOOL)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)executeActionSet:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)homeAccessControlForUser:(id)arg1;
- (id)homeAsRoom;
- (id)homeLocation;
- (id)homeManager;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 uuid:(id)arg2;
- (id)initWithName:(id)arg1 uuid:(id)arg2 actionSets:(id)arg3;
- (void)invalidate;
- (void)inviteUsers:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)isAdminUser;
- (BOOL)isCloudRelayEnabled;
- (BOOL)isCloudRelaySupported;
- (BOOL)isPrimary;
- (id)location;
- (int)locationAuthorization;
- (void)manageUsersWithCompletionHandler:(id /* block */)arg1;
- (void)mergeWithNewObjectNoMergeCount:(id)arg1;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)name;
- (id)outgoingInvitations;
- (id)pendingRequests;
- (id)propertyQueue;
- (void)readCharacteristicValues:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)removeAccessory:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeActionSet:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeRoom:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeServiceGroup:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeServices:(id)arg1;
- (void)removeTrigger:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeUser:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeUserWithoutConfirmation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeZone:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)residentDevices;
- (id)roomForEntireHome;
- (id)roomWithName:(id)arg1;
- (id)roomWithUUID:(id)arg1;
- (id)rooms;
- (id)serviceGroupWithName:(id)arg1;
- (id)serviceGroupWithUUID:(id)arg1;
- (id)serviceGroups;
- (id)servicesWithTypes:(id)arg1;
- (void)setAdminUser:(BOOL)arg1;
- (void)setCloudRelayEnabled:(BOOL)arg1;
- (void)setCloudRelaySupported:(BOOL)arg1;
- (void)setCurrentAccessories:(id)arg1;
- (void)setCurrentActionSets:(id)arg1;
- (void)setCurrentActions:(id)arg1;
- (void)setCurrentOutgoingInvitations:(id)arg1;
- (void)setCurrentResidentDevices:(id)arg1;
- (void)setCurrentRooms:(id)arg1;
- (void)setCurrentServiceGroups:(id)arg1;
- (void)setCurrentTriggers:(id)arg1;
- (void)setCurrentUser:(id)arg1;
- (void)setCurrentUsers:(id)arg1;
- (void)setCurrentZones:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateCaller:(id)arg1;
- (void)setHomeLocation:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setLocationAuthorization:(int)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPendingRequests:(id)arg1;
- (void)setPrimary:(BOOL)arg1;
- (void)setSetupViewController:(id)arg1;
- (id)setupViewController;
- (id)triggerWithName:(id)arg1;
- (id)triggerWithUUID:(id)arg1;
- (id)triggers;
- (void)unblockAccessory:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)unconfigureHome;
- (id)uniqueIdentifier;
- (void)updateConfigurationState:(unsigned int)arg1 forResident:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)users;
- (id)uuid;
- (void)writeCharacteristicValues:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)zoneWithName:(id)arg1;
- (id)zoneWithUUID:(id)arg1;
- (id)zones;

@end
