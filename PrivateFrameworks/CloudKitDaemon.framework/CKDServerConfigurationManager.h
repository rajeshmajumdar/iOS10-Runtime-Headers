/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDServerConfigurationManager : NSObject {
    BOOL  _allowsCellularAccess;
    NSOperationQueue * _configurationQueue;
    NSMutableDictionary * _containerSpecificInfoOperations;
    NSOperationQueue * _containerSpecificInfoQueue;
    NSMutableDictionary * _containerSpecificInfos;
    CKDServerConfiguration * _globalConfiguration;
    CKDGlobalConfigurationOperation * _globalConfigurationOp;
    int  _iCloudEnvNotifToken;
    NSObject<OS_dispatch_queue> * _queue;
    BOOL  _usesBackgroundSession;
}

@property (nonatomic) BOOL allowsCellularAccess;
@property (nonatomic, retain) NSOperationQueue *configurationQueue;
@property (nonatomic, retain) NSMutableDictionary *containerSpecificInfoOperations;
@property (nonatomic, retain) NSOperationQueue *containerSpecificInfoQueue;
@property (nonatomic, retain) NSMutableDictionary *containerSpecificInfos;
@property (nonatomic, retain) CKDServerConfiguration *globalConfiguration;
@property (nonatomic, retain) CKDGlobalConfigurationOperation *globalConfigurationOp;
@property (nonatomic) int iCloudEnvNotifToken;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL usesBackgroundSession;

+ (void)expireConfigurationForContext:(id)arg1;
+ (void)expireGlobalConfiguration;
+ (id)sharedManagerUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2;

- (void).cxx_destruct;
- (void)_behaviorOptionsChanged:(id)arg1;
- (void)_dropAllConfigurations;
- (void)_expireConfigurationForContext:(id)arg1;
- (void)_expireGlobalConfiguration;
- (id)_uniqueStringForContainerAndAccount:(id)arg1;
- (BOOL)allowsCellularAccess;
- (void)configurationForContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)configurationQueue;
- (void)containerScopedUserIDForContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)containerSpecificInfoOperations;
- (id)containerSpecificInfoQueue;
- (id)containerSpecificInfos;
- (void)dealloc;
- (void)fetchContainerSpecificInfoForContext:(id)arg1 needUserID:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchGlobalConfigWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)globalConfiguration;
- (id)globalConfigurationOp;
- (int)iCloudEnvNotifToken;
- (id)init;
- (void)publicURLForServerType:(int)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)queue;
- (void)setAllowsCellularAccess:(BOOL)arg1;
- (void)setConfigurationQueue:(id)arg1;
- (void)setContainerSpecificInfoOperations:(id)arg1;
- (void)setContainerSpecificInfoQueue:(id)arg1;
- (void)setContainerSpecificInfos:(id)arg1;
- (void)setGlobalConfiguration:(id)arg1;
- (void)setGlobalConfigurationOp:(id)arg1;
- (void)setICloudEnvNotifToken:(int)arg1;
- (void)setQueue:(id)arg1;
- (void)setUsesBackgroundSession:(BOOL)arg1;
- (BOOL)usesBackgroundSession;

@end
