/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCClientPriviledgesDescriptor : NSObject {
    NSString * _applicationIdentifier;
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    BOOL  _cloudEnabledStatusWithoutLogOutStatus;
    NSSet * _containerIDs;
    NSString * _debugIdentifier;
    NSString * _defaultContainerID;
    BOOL  _hasAuditToken;
    BOOL  _isAllowedToAccessAnyCloudService;
    BOOL  _isAutomationEntitled;
    BOOL  _isNonAppSandboxed;
    BOOL  _isProxyEntitled;
    BOOL  _isSharingPrivateInterfaceEntitled;
    NSArray * _sortedContainerIDs;
}

@property (nonatomic, readonly) NSString *applicationIdentifier;
@property (nonatomic, readonly) struct { unsigned int x1[8]; } auditToken;
@property (nonatomic, readonly) NSSet *containerIDs;
@property (nonatomic, readonly) NSString *defaultContainerID;
@property (nonatomic, readonly) BOOL hasAuditToken;
@property (nonatomic, readonly) BOOL isAllowedToAccessAnyCloudService;
@property (nonatomic, readonly) BOOL isAutomationEntitled;
@property (nonatomic, readonly) BOOL isNonAppSandboxed;
@property (nonatomic, readonly) BOOL isProxyEntitled;
@property (nonatomic, readonly) BOOL isSharingPrivateInterfaceEntitled;
@property (nonatomic, readonly) NSArray *sortedContainerIDs;

+ (BOOL)_isNonSandboxedForAuditToken:(struct { unsigned int x1[8]; })arg1;

- (void).cxx_destruct;
- (BOOL)_computeCloudEnabledStatusWithoutLogOutStatus;
- (void)_finishSetup;
- (id)applicationIdentifier;
- (struct { unsigned int x1[8]; })auditToken;
- (BOOL)cloudEnabledStatusForSession:(id)arg1;
- (id)containerIDs;
- (id)defaultContainerID;
- (id)description;
- (BOOL)hasAuditToken;
- (BOOL)hasPid;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (id)initWithNonSandboxedAppWithContainerIDs:(id)arg1 bundleID:(id)arg2 auditToken:(struct { unsigned int x1[8]; })arg3;
- (id)initWithPid:(int)arg1;
- (BOOL)isAllowedToAccessAnyCloudService;
- (BOOL)isAutomationEntitled;
- (BOOL)isNonAppSandboxed;
- (BOOL)isProxyEntitled;
- (BOOL)isSharingPrivateInterfaceEntitled;
- (int)pid;
- (id)sortedContainerIDs;

@end
