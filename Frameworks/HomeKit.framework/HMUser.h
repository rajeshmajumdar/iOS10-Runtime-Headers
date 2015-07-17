/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMUser : NSObject <HMObjectMerge, NSSecureCoding> {
    BOOL  _administrator;
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMDelegateCaller * _delegateCaller;
    HMHome * _home;
    HMHomeAccessControl * _homeAccessControl;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSUUID * _uniqueIdentifier;
    NSString * _userID;
    NSUUID * _uuid;
}

@property (nonatomic) BOOL administrator;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HMDelegateCaller *delegateCaller;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) HMHome *home;
@property (nonatomic, retain) HMHomeAccessControl *homeAccessControl;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, copy) NSString *userID;
@property (nonatomic, readonly) NSUUID *uuid;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_configure:(id)arg1 clientQueue:(id)arg2 delegateCaller:(id)arg3;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_unconfigure;
- (BOOL)administrator;
- (id)clientQueue;
- (id)delegateCaller;
- (void)encodeWithCoder:(id)arg1;
- (id)home;
- (id)homeAccessControl;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserID:(id)arg1 name:(id)arg2 uuid:(id)arg3 home:(id)arg4;
- (id)initWithUserID:(id)arg1 name:(id)arg2 uuid:(id)arg3 home:(id)arg4 isAdministrator:(BOOL)arg5;
- (id)name;
- (id)propertyQueue;
- (void)setAdministrator:(BOOL)arg1;
- (void)setClientQueue:(id)arg1;
- (void)setDelegateCaller:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setHomeAccessControl:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPropertyQueue:(id)arg1;
- (void)setUserID:(id)arg1;
- (id)uniqueIdentifier;
- (id)userID;
- (id)uuid;

@end
