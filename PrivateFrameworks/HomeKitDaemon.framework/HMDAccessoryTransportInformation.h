/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessoryTransportInformation : NSObject <NSSecureCoding> {
    HAPAccessory * _hapAccessory;
    NSNumber * _instanceID;
    int  _linkType;
    BOOL  _reachable;
    NSString * _serverIdentifier;
}

@property (nonatomic, retain) HAPAccessory *hapAccessory;
@property (nonatomic, retain) NSNumber *instanceID;
@property int linkType;
@property BOOL reachable;
@property (nonatomic, retain) NSString *serverIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)hapAccessory;
- (id)initWithCoder:(id)arg1;
- (id)initWithHAPAccessory:(id)arg1;
- (id)initWithServerIdentifier:(id)arg1 instanceID:(id)arg2 linkType:(int)arg3 reachable:(BOOL)arg4;
- (id)instanceID;
- (int)linkType;
- (BOOL)reachable;
- (id)serverIdentifier;
- (void)setHapAccessory:(id)arg1;
- (void)setInstanceID:(id)arg1;
- (void)setLinkType:(int)arg1;
- (void)setReachable:(BOOL)arg1;
- (void)setServerIdentifier:(id)arg1;

@end
