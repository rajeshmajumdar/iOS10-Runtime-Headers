/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMEvent : NSObject <HMObjectMerge, NSSecureCoding> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMDelegateCaller * _delegateCaller;
    HMEventTrigger * _eventTrigger;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HMDelegateCaller *delegateCaller;
@property (readonly, copy) NSString *description;
@property (nonatomic) HMEventTrigger *eventTrigger;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, retain) NSUUID *uuid;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_configure:(id)arg1 eventTrigger:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4;
- (void)_invalidate;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)_serializeForAdd;
- (void)_setUuidAndUniqueId:(id)arg1;
- (id)clientQueue;
- (id)delegateCaller;
- (void)encodeWithCoder:(id)arg1;
- (id)eventTrigger;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)propertyQueue;
- (void)setClientQueue:(id)arg1;
- (void)setDelegateCaller:(id)arg1;
- (void)setEventTrigger:(id)arg1;
- (void)setPropertyQueue:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uniqueIdentifier;
- (id)uuid;

@end
