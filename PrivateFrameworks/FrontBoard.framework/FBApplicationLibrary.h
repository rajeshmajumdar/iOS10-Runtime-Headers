/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationLibrary : NSObject <LSApplicationWorkspaceObserverProtocol> {
    LSApplicationWorkspace * _applicationWorkspace;
    NSObject<OS_dispatch_queue> * _callOutQueue;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observerQueue_observers;
    NSObject<OS_dispatch_group> * _preInstallGroup;
    BOOL  _usingNetwork;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSMutableDictionary * _workQueue_installedApplicationsByBundleID;
    NSSet * _workQueue_managedApplicationBundleIDs;
    NSMutableArray * _workQueue_pendingSynchronizationExecutionBlocks;
    NSMutableDictionary * _workQueue_placeholdersByBundleID;
    NSMutableDictionary * _workQueue_profilesBySignerIdentity;
    unsigned int  _workQueue_synchronizationActionCount;
    BOOL  _workQueue_usingNetwork;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (getter=isUsingNetwork, nonatomic, readonly) BOOL usingNetwork;

+ (void)setBundleExtendedInfoGenerationHandler:(id /* block */)arg1;
+ (id)sharedInstance;

- (void)_dispatchToObservers:(id)arg1 synchronously:(BOOL)arg2 preBlock:(id /* block */)arg3 block:(id /* block */)arg4;
- (void)_managedAppsChangedNotification:(id)arg1;
- (id)_observers;
- (void)_reload;
- (void)_reloadManagedApplicationBundleIDs;
- (void)_reloadProfiles;
- (void)_sendToObservers:(id)arg1 didAddApplications:(id)arg2;
- (void)_sendToObservers:(id)arg1 didAddPlaceholders:(id)arg2;
- (void)_sendToObservers:(id)arg1 didCancelPlaceholders:(id)arg2;
- (void)_sendToObservers:(id)arg1 didRemoveApplications:(id)arg2;
- (void)_sendToObservers:(id)arg1 didReplaceApplications:(id)arg2 withApplications:(id)arg3;
- (void)_sendToObservers:(id)arg1 networkUsageDidChange:(id)arg2 usingNetwork:(BOOL)arg3;
- (BOOL)_workQueue_applicationHasBeenModified:(id)arg1 applicationProxy:(id)arg2;
- (id)_workQueue_applicationInfoForProxy:(id)arg1 createIfNecessary:(BOOL)arg2 wasCreated:(BOOL*)arg3;
- (id)_workQueue_applicationsForProxies:(id)arg1 createIfNecessary:(BOOL)arg2 createdPlaceholders:(const id*)arg3 existingApplications:(const id*)arg4 unmappedProxies:(const id*)arg5;
- (void)_workQueue_decrementSynchronizationActionCount;
- (void)_workQueue_executeInstallSynchronizationBlock:(id /* block */)arg1;
- (void)_workQueue_generateExtendedInfoForBundleInfo:(id)arg1;
- (void)_workQueue_incrementSynchronizationActionCount;
- (void)_workQueue_notePlaceholdersModifiedSignificantly:(id)arg1;
- (id)_workQueue_placeholderForProxy:(id)arg1 updateExistingIfNecessary:(BOOL)arg2 createIfNecessary:(BOOL)arg3 wasCreated:(BOOL*)arg4;
- (id)_workQueue_placeholdersForProxies:(id)arg1 updateExistingIfNecessary:(BOOL)arg2 createIfNecessary:(BOOL)arg3 createdPlaceholders:(const id*)arg4 existingPlaceholders:(const id*)arg5 unmappedProxies:(const id*)arg6;
- (void)_workQueue_updateManagedStatusForAppInfo:(id)arg1;
- (void)_workQueue_updateProvisioningProfilesForAppInfo:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)allInstalledApplications;
- (id)allPlaceholders;
- (void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;
- (void)applicationInstallsDidCancel:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)applicationInstallsDidPause:(id)arg1;
- (void)applicationInstallsDidPrioritize:(id)arg1;
- (void)applicationInstallsDidResume:(id)arg1;
- (void)applicationInstallsDidStart:(id)arg1;
- (void)applicationInstallsDidUpdateIcon:(id)arg1;
- (void)applicationsDidFailToInstall:(id)arg1;
- (void)applicationsDidFailToUninstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsWillInstall:(id)arg1;
- (void)applicationsWillUninstall:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)executeOrPendInstallSynchronizationBlock:(id /* block */)arg1;
- (id)init;
- (id)installedApplicationWithBundleIdentifier:(id)arg1;
- (void)installedApplicationWithBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)isUsingNetwork;
- (void)networkUsageChanged:(BOOL)arg1;
- (id)placeholderWithBundleIdentifier:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)uninstallApplication:(id)arg1 completion:(id /* block */)arg2;

@end
